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

#if TYPE_COUNT == 3
    std::uniform_int_distribution<> type_dist(0, 2);
    for (size_t i = 0; i < count; ++i) {
        switch (type_dist(gen)) {
        case 0: variants.emplace_back(Type1{}); break;
        case 1: variants.emplace_back(Type2{}); break;
        case 2: variants.emplace_back(Type3{}); break;
        }
    }
#elif TYPE_COUNT == 10
    std::uniform_int_distribution<> type_dist(0, 9);
    for (size_t i = 0; i < count; ++i) {
        switch (type_dist(gen)) {
        case 0: variants.emplace_back(Type1{}); break;
        case 1: variants.emplace_back(Type2{}); break;
        case 2: variants.emplace_back(Type3{}); break;
        case 3: variants.emplace_back(Type4{}); break;
        case 4: variants.emplace_back(Type5{}); break;
        case 5: variants.emplace_back(Type6{}); break;
        case 6: variants.emplace_back(Type7{}); break;
        case 7: variants.emplace_back(Type8{}); break;
        case 8: variants.emplace_back(Type9{}); break;
        case 9: variants.emplace_back(Type10{}); break;
        }
    }
#elif TYPE_COUNT == 20
    std::uniform_int_distribution<> type_dist(0, 19);
    for (size_t i = 0; i < count; ++i) {
        switch (type_dist(gen)) {
        case 0: variants.emplace_back(Type1{}); break;
        case 1: variants.emplace_back(Type2{}); break;
        case 2: variants.emplace_back(Type3{}); break;
        case 3: variants.emplace_back(Type4{}); break;
        case 4: variants.emplace_back(Type5{}); break;
        case 5: variants.emplace_back(Type6{}); break;
        case 6: variants.emplace_back(Type7{}); break;
        case 7: variants.emplace_back(Type8{}); break;
        case 8: variants.emplace_back(Type9{}); break;
        case 9: variants.emplace_back(Type10{}); break;
        case 10: variants.emplace_back(Type11{}); break;
        case 11: variants.emplace_back(Type12{}); break;
        case 12: variants.emplace_back(Type13{}); break;
        case 13: variants.emplace_back(Type14{}); break;
        case 14: variants.emplace_back(Type15{}); break;
        case 15: variants.emplace_back(Type16{}); break;
        case 16: variants.emplace_back(Type17{}); break;
        case 17: variants.emplace_back(Type18{}); break;
        case 18: variants.emplace_back(Type19{}); break;
        case 19: variants.emplace_back(Type20{}); break;
        }
    }
#else
#error "Unsupported TYPE_COUNT. Please set TYPE_COUNT to 3, 10, or 20."
#endif
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