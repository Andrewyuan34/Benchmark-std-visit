#ifdef _WIN32
#pragma comment ( lib, "Shlwapi.lib" )
#ifdef _DEBUG
#pragma comment ( lib, "benchmarkd.lib" )
#else
#pragma comment ( lib, "benchmark.lib" )
#endif
#endif
#include <benchmark/benchmark.h>
#include "../include/random_generation.h"

static constexpr size_t dataSize = 100000;

// ============= Benchmarks =============
static void BM_StdVisit(benchmark::State& state) {
    auto variants = generateRandomVariants(dataSize, 42);
    Visitor visitor;

    for (auto _ : state) {
        double sum = 0.0;
        for (const auto& var : variants) {
            sum += std::visit(visitor, var);
        }
        benchmark::DoNotOptimize(sum);
    }
    state.SetItemsProcessed(state.iterations() * dataSize);
}

static void BM_StdGetIf(benchmark::State& state) {
    auto variants = generateRandomVariants(dataSize, 42);

    for (auto _ : state) {
        double sum = 0.0;
        for (const auto& var : variants) {
            if (auto pA = std::get_if<TypeA>(&var)) {
                sum += static_cast<double>(pA->value);
            }
            else if (auto pB = std::get_if<TypeB>(&var)) {
                sum += pB->value;
            }
            else if (auto pC = std::get_if<TypeC>(&var)) {
                sum += std::stod(pC->value);
            }
        }
        benchmark::DoNotOptimize(sum);
    }
    state.SetItemsProcessed(state.iterations() * dataSize);
}

static void BM_EnumUnion(benchmark::State& state) {
    auto data = generateRandomUnions(dataSize, 42);

    for (auto _ : state) {
        double sum = 0.0;
        for (const auto& item : data) {
            switch (item.type) {
            case DataType::Type_A:
                sum += static_cast<double>(item.a_value);
                break;
            case DataType::Type_B:
                sum += item.b_value;
                break;
            case DataType::Type_C:
                sum += std::stod(item.c_value);
                break;
            }
        }
        benchmark::DoNotOptimize(sum);
    }
    state.SetItemsProcessed(state.iterations() * dataSize);
}

static void BM_VirtualCall(benchmark::State& state) {
    auto objects = generateRandomPolymorphic(dataSize, 42);

    for (auto _ : state) {
        double sum = 0.0;
        for (const auto& obj : objects) {
            sum += obj->getValue();
        }
        benchmark::DoNotOptimize(sum);
    }
    state.SetItemsProcessed(state.iterations() * dataSize);
}

// Register all benchmarks
BENCHMARK(BM_StdVisit);
BENCHMARK(BM_StdGetIf);
BENCHMARK(BM_EnumUnion);
BENCHMARK(BM_VirtualCall);

BENCHMARK_MAIN();