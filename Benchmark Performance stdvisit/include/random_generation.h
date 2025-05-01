#include <variant>
#include <vector>
#include <random>
#include <string>
#include <memory>
#include "variant_types.h"
#include "union_types.h"
#include "virtual_types.h"

// ============= Data Generation Functions =============
inline std::vector<VariantType> generateRandomVariants(size_t count, unsigned seed) {
    std::vector<VariantType> variants;
    variants.reserve(count);

    std::mt19937 gen(seed);
    std::uniform_int_distribution<> type_dist(0, 2);
    std::uniform_real_distribution<> value_dist(0.0, 1000.0);

    for (size_t i = 0; i < count; ++i) {
        switch (type_dist(gen)) {
        case 0: variants.emplace_back(TypeA{ static_cast<int>(value_dist(gen)) }); break;
        case 1: variants.emplace_back(TypeB{ value_dist(gen) }); break;
        case 2: variants.emplace_back(TypeC{ std::to_string(value_dist(gen)) }); break;
        }
    }
    return variants;
}

inline std::vector<UnionData> generateRandomUnions(size_t count, unsigned seed) {
    std::vector<UnionData> data;
    data.reserve(count);

    std::mt19937 gen(seed);
    std::uniform_int_distribution<> type_dist(0, 2);
    std::uniform_real_distribution<> value_dist(0.0, 1000.0);

    for (size_t i = 0; i < count; ++i) {
        switch (type_dist(gen)) {
        case 0: data.emplace_back(DataType::Type_A, static_cast<int>(value_dist(gen))); break;
        case 1: data.emplace_back(DataType::Type_B, value_dist(gen)); break;
        case 2: data.emplace_back(DataType::Type_C, std::to_string(value_dist(gen))); break;
        }
    }
    return data;
}

inline std::vector<std::unique_ptr<BaseType>> generateRandomPolymorphic(size_t count, unsigned seed) {
    std::vector<std::unique_ptr<BaseType>> objects;
    objects.reserve(count);

    std::mt19937 gen(seed);
    std::uniform_int_distribution<> type_dist(0, 2);
    std::uniform_real_distribution<> value_dist(0.0, 1000.0);

    for (size_t i = 0; i < count; ++i) {
        switch (type_dist(gen)) {
        case 0: objects.push_back(std::make_unique<DerivedA>(static_cast<int>(value_dist(gen)))); break;
        case 1: objects.push_back(std::make_unique<DerivedB>(value_dist(gen))); break;
        case 2: objects.push_back(std::make_unique<DerivedC>(std::to_string(value_dist(gen)))); break;
        }
    }
    return objects;
}