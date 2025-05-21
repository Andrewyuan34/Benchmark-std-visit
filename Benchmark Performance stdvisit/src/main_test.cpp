#ifdef _WIN32
#pragma comment ( lib, "Shlwapi.lib" )
#ifdef _DEBUG
#pragma comment ( lib, "benchmark.lib" )
#else
#pragma comment ( lib, "benchmark.lib" )
#endif
#endif
#include <benchmark/benchmark.h>
#include "../include/random_generation.h"
#if TOGGLE_TEST_SUM == false

static constexpr size_t dataSize = 10'000'000;

// ============= Benchmarks =============
static void BM_StdVisit(benchmark::State& state) {
    auto variants = generateRandomVariants(dataSize, 42);
    Visitor visitor;

    for (auto _ : state) {
        int sum = 0;
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
        int sum = 0;
        for (const auto& var : variants) {
#if TYPE_COUNT == 2
            if (auto p1 = std::get_if<Type1>(&var)) {
                sum += p1->get();
            }
            else if (auto p2 = std::get_if<Type2>(&var)) {
                sum += p2->get();
            }
#elif TYPE_COUNT == 3
            if (auto p1 = std::get_if<Type1>(&var)) {
                sum += p1->get();
            }
            else if (auto p2 = std::get_if<Type2>(&var)) {
                sum += p2->get();
            }
            else if (auto p3 = std::get_if<Type3>(&var)) {
                sum += p3->get();
            }
#elif TYPE_COUNT == 4
            if (auto p1 = std::get_if<Type1>(&var)) {
                sum += p1->get();
            }
            else if (auto p2 = std::get_if<Type2>(&var)) {
                sum += p2->get();
            }
            else if (auto p3 = std::get_if<Type3>(&var)) {
                sum += p3->get();
            }
            else if (auto p4 = std::get_if<Type4>(&var)) {
                sum += p4->get();
            }
#elif TYPE_COUNT == 5
            if (auto p1 = std::get_if<Type1>(&var)) {
                sum += p1->get();
            }
            else if (auto p2 = std::get_if<Type2>(&var)) {
                sum += p2->get();
            }
            else if (auto p3 = std::get_if<Type3>(&var)) {
                sum += p3->get();
            }
            else if (auto p4 = std::get_if<Type4>(&var)) {
                sum += p4->get();
            }
            else if (auto p5 = std::get_if<Type5>(&var)) {
                sum += p5->get();
            }
#elif TYPE_COUNT == 6
            switch (var.index()) {
            case 0:
                sum += std::get_if<Type1>(&var)->get();
                break;
            case 1:
                sum += std::get_if<Type2>(&var)->get();
                break;
            case 2:
                sum += std::get_if<Type3>(&var)->get();
                break;
            case 3:
                sum += std::get_if<Type4>(&var)->get();
                break;
            case 4:
                sum += std::get_if<Type5>(&var)->get();
                break;
            case 5:
                sum += std::get_if<Type6>(&var)->get();
                break;
            default:
                break;
            }
#elif TYPE_COUNT == 7
            if (auto p1 = std::get_if<Type1>(&var)) {
                sum += p1->get();
            }
            else if (auto p2 = std::get_if<Type2>(&var)) {
                sum += p2->get();
            }
            else if (auto p3 = std::get_if<Type3>(&var)) {
                sum += p3->get();
            }
            else if (auto p4 = std::get_if<Type4>(&var)) {
                sum += p4->get();
            }
            else if (auto p5 = std::get_if<Type5>(&var)) {
                sum += p5->get();
            }
            else if (auto p6 = std::get_if<Type6>(&var)) {
                sum += p6->get();
            }
            else if (auto p7 = std::get_if<Type7>(&var)) {
                sum += p7->get();
            }
#elif TYPE_COUNT == 8
            if (auto p1 = std::get_if<Type1>(&var)) {
                sum += p1->get();
            }
            else if (auto p2 = std::get_if<Type2>(&var)) {
                sum += p2->get();
            }
            else if (auto p3 = std::get_if<Type3>(&var)) {
                sum += p3->get();
            }
            else if (auto p4 = std::get_if<Type4>(&var)) {
                sum += p4->get();
            }
            else if (auto p5 = std::get_if<Type5>(&var)) {
                sum += p5->get();
            }
            else if (auto p6 = std::get_if<Type6>(&var)) {
                sum += p6->get();
            }
            else if (auto p7 = std::get_if<Type7>(&var)) {
                sum += p7->get();
            }
            else if (auto p8 = std::get_if<Type8>(&var)) {
                sum += p8->get();
            }
#elif TYPE_COUNT == 9
            if (auto p1 = std::get_if<Type1>(&var)) {
                sum += p1->get();
            }
            else if (auto p2 = std::get_if<Type2>(&var)) {
                sum += p2->get();
            }
            else if (auto p3 = std::get_if<Type3>(&var)) {
                sum += p3->get();
            }
            else if (auto p4 = std::get_if<Type4>(&var)) {
                sum += p4->get();
            }
            else if (auto p5 = std::get_if<Type5>(&var)) {
                sum += p5->get();
            }
            else if (auto p6 = std::get_if<Type6>(&var)) {
                sum += p6->get();
            }
            else if (auto p7 = std::get_if<Type7>(&var)) {
                sum += p7->get();
            }
            else if (auto p8 = std::get_if<Type8>(&var)) {
                sum += p8->get();
            }
            else if (auto p9 = std::get_if<Type9>(&var)) {
                sum += p9->get();
            }
#elif TYPE_COUNT == 10
            if (auto p1 = std::get_if<Type1>(&var)) {
                sum += p1->get();
            }
            else if (auto p2 = std::get_if<Type2>(&var)) {
                sum += p2->get();
            }
            else if (auto p3 = std::get_if<Type3>(&var)) {
                sum += p3->get();
            }
            else if (auto p4 = std::get_if<Type4>(&var)) {
                sum += p4->get();
            }
            else if (auto p5 = std::get_if<Type5>(&var)) {
                sum += p5->get();
            }
            else if (auto p6 = std::get_if<Type6>(&var)) {
                sum += p6->get();
            }
            else if (auto p7 = std::get_if<Type7>(&var)) {
                sum += p7->get();
            }
            else if (auto p8 = std::get_if<Type8>(&var)) {
                sum += p8->get();
            }
            else if (auto p9 = std::get_if<Type9>(&var)) {
                sum += p9->get();
            }
            else if (auto p10 = std::get_if<Type10>(&var)) {
                sum += p10->get();
            }
#elif TYPE_COUNT == 20
            if (auto p1 = std::get_if<Type1>(&var)) {
                sum += p1->get();
            }
            else if (auto p2 = std::get_if<Type2>(&var)) {
                sum += p2->get();
            }
            else if (auto p3 = std::get_if<Type3>(&var)) {
                sum += p3->get();
            }
            else if (auto p4 = std::get_if<Type4>(&var)) {
                sum += p4->get();
            }
            else if (auto p5 = std::get_if<Type5>(&var)) {
                sum += p5->get();
            }
            else if (auto p6 = std::get_if<Type6>(&var)) {
                sum += p6->get();
            }
            else if (auto p7 = std::get_if<Type7>(&var)) {
                sum += p7->get();
            }
            else if (auto p8 = std::get_if<Type8>(&var)) {
                sum += p8->get();
            }
            else if (auto p9 = std::get_if<Type9>(&var)) {
                sum += p9->get();
            }
            else if (auto p10 = std::get_if<Type10>(&var)) {
                sum += p10->get();
            }
            else if (auto p11 = std::get_if<Type11>(&var)) {
                sum += p11->get();
            }
            else if (auto p12 = std::get_if<Type12>(&var)) {
                sum += p12->get();
            }
            else if (auto p13 = std::get_if<Type13>(&var)) {
                sum += p13->get();
            }
            else if (auto p14 = std::get_if<Type14>(&var)) {
                sum += p14->get();
            }
            else if (auto p15 = std::get_if<Type15>(&var)) {
                sum += p15->get();
            }
            else if (auto p16 = std::get_if<Type16>(&var)) {
                sum += p16->get();
            }
            else if (auto p17 = std::get_if<Type17>(&var)) {
                sum += p17->get();
            }
            else if (auto p18 = std::get_if<Type18>(&var)) {
                sum += p18->get();
            }
            else if (auto p19 = std::get_if<Type19>(&var)) {
                sum += p19->get();
            }
            else if (auto p20 = std::get_if<Type20>(&var)) {
                sum += p20->get();
            }
#else
#error "Unsupported TYPE_COUNT. Please set TYPE_COUNT to 3, 10, or 20."
#endif
        }
        benchmark::DoNotOptimize(sum);
    }
    state.SetItemsProcessed(state.iterations() * dataSize);
}

static void BM_EnumUnion(benchmark::State& state) {
    auto data = generateRandomUnions(dataSize, 42);

    for (auto _ : state) {
        int sum = 0;
        for (const auto& item : data) {
            switch (item.type) {
#if TYPE_COUNT == 2
            case DataType::Type1:
                sum += item.get();
                break;
            case DataType::Type2:
                sum += item.get();
                break;
#elif TYPE_COUNT == 3
            case DataType::Type1:
                sum += item.get();
                break;
            case DataType::Type2:
                sum += item.get();
                break;
            case DataType::Type3:
                sum += item.get();
                break;
#elif TYPE_COUNT == 4
            case DataType::Type1:
                sum += item.get();
                break;
            case DataType::Type2:
                sum += item.get();
                break;
            case DataType::Type3:
                sum += item.get();
                break;
            case DataType::Type4:
                sum += item.get();
                break;
#elif TYPE_COUNT == 5
            case DataType::Type1:
                sum += item.get();
                break;
            case DataType::Type2:
                sum += item.get();
                break;
            case DataType::Type3:
                sum += item.get();
                break;
            case DataType::Type4:
                sum += item.get();
                break;
            case DataType::Type5:
                sum += item.get();
                break;
#elif TYPE_COUNT == 6
            case DataType::Type1:
                sum += item.get();
                break;
            case DataType::Type2:
                sum += item.get();
                break;
            case DataType::Type3:
                sum += item.get();
                break;
            case DataType::Type4:
                sum += item.get();
                break;
            case DataType::Type5:
                sum += item.get();
                break;
            case DataType::Type6:
                sum += item.get();
                break;
#elif TYPE_COUNT == 7
            case DataType::Type1:
                sum += item.get();
                break;
            case DataType::Type2:
                sum += item.get();
                break;
            case DataType::Type3:
                sum += item.get();
                break;
            case DataType::Type4:
                sum += item.get();
                break;
            case DataType::Type5:
                sum += item.get();
                break;
            case DataType::Type6:
                sum += item.get();
                break;
            case DataType::Type7:
                sum += item.get();
                break;
#elif TYPE_COUNT == 8
            case DataType::Type1:
                sum += item.get();
                break;
            case DataType::Type2:
                sum += item.get();
                break;
            case DataType::Type3:
                sum += item.get();
                break;
            case DataType::Type4:
                sum += item.get();
                break;
            case DataType::Type5:
                sum += item.get();
                break;
            case DataType::Type6:
                sum += item.get();
                break;
            case DataType::Type7:
                sum += item.get();
                break;
            case DataType::Type8:
                sum += item.get();
                break;
#elif TYPE_COUNT == 9
            case DataType::Type1:
                sum += item.get();
                break;
            case DataType::Type2:
                sum += item.get();
                break;
            case DataType::Type3:
                sum += item.get();
                break;
            case DataType::Type4:
                sum += item.get();
                break;
            case DataType::Type5:
                sum += item.get();
                break;
            case DataType::Type6:
                sum += item.get();
                break;
            case DataType::Type7:
                sum += item.get();
                break;
            case DataType::Type8:
                sum += item.get();
                break;
            case DataType::Type9:
                sum += item.get();
                break;
#elif TYPE_COUNT == 10
            case DataType::Type1:
                sum += item.get();
                break;
            case DataType::Type2:
                sum += item.get();
                break;
            case DataType::Type3:
                sum += item.get();
                break;
            case DataType::Type4:
                sum += item.get();
                break;
            case DataType::Type5:
                sum += item.get();
                break;
            case DataType::Type6:
                sum += item.get();
                break;
            case DataType::Type7:
                sum += item.get();
                break;
            case DataType::Type8:
                sum += item.get();
                break;
            case DataType::Type9:
                sum += item.get();
                break;
            case DataType::Type10:
                sum += item.get();
                break;
#elif TYPE_COUNT == 20
            case DataType::Type1:
                sum += item.get();
                break;
            case DataType::Type2:
                sum += item.get();
                break;
            case DataType::Type3:
                sum += item.get();
                break;
            case DataType::Type4:
                sum += item.get();
                break;
            case DataType::Type5:
                sum += item.get();
                break;
            case DataType::Type6:
                sum += item.get();
                break;
            case DataType::Type7:
                sum += item.get();
                break;
            case DataType::Type8:
                sum += item.get();
                break;
            case DataType::Type9:
                sum += item.get();
                break;
            case DataType::Type10:
                sum += item.get();
                break;
            case DataType::Type11:
                sum += item.get();
                break;
            case DataType::Type12:
                sum += item.get();
                break;
            case DataType::Type13:
                sum += item.get();
                break;
            case DataType::Type14:
                sum += item.get();
                break;
            case DataType::Type15:
                sum += item.get();
                break;
            case DataType::Type16:
                sum += item.get();
                break;
            case DataType::Type17:
                sum += item.get();
                break;
            case DataType::Type18:
                sum += item.get();
                break;
            case DataType::Type19:
                sum += item.get();
                break;
            case DataType::Type20:
                sum += item.get();
                break;
#else
#error "Unsupported TYPE_COUNT. Please set TYPE_COUNT to 3, 10, or 20."
#endif

            }
            benchmark::DoNotOptimize(sum);
            }
        }
    state.SetItemsProcessed(state.iterations() * dataSize);
}

static void BM_VirtualCall(benchmark::State& state) {
    auto objects = generateRandomPolymorphic(dataSize, 42);

    for (auto _ : state) {
        int sum = 0;
        for (const auto& obj : objects) {
            sum += obj->getValue();
        }
        benchmark::DoNotOptimize(sum);
    }
    state.SetItemsProcessed(state.iterations() * dataSize);
}

// Register all benchmarks
BENCHMARK(BM_StdVisit)
->Repetitions(10)
->ReportAggregatesOnly(true)
->Unit(benchmark::kMillisecond);

BENCHMARK(BM_StdGetIf)
->Repetitions(10)
->ReportAggregatesOnly(true)
->Unit(benchmark::kMillisecond);

BENCHMARK(BM_EnumUnion)
->Repetitions(10)
->ReportAggregatesOnly(true)
->Unit(benchmark::kMillisecond);

BENCHMARK(BM_VirtualCall)
->Repetitions(10)
->ReportAggregatesOnly(true)
->Unit(benchmark::kMillisecond);

BENCHMARK_MAIN();

#endif 