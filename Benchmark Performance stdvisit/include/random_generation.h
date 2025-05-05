#include <variant>
#include <vector>
#include <random>
#include <string>
#include <memory>
#include "macros.h"
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
#if TYPE_COUNT == 3
        case 0: data.emplace_back(DataType::Type1); break;
        case 1: data.emplace_back(DataType::Type2); break;
        case 2: data.emplace_back(DataType::Type3); break;
#elif TYPE_COUNT == 10
        case 0: data.emplace_back(DataType::Type1); break;
        case 1: data.emplace_back(DataType::Type2); break;
        case 2: data.emplace_back(DataType::Type3); break;
        case 3: data.emplace_back(DataType::Type4); break;
        case 4: data.emplace_back(DataType::Type5); break;
        case 5: data.emplace_back(DataType::Type6); break;
        case 6: data.emplace_back(DataType::Type7); break;
        case 7: data.emplace_back(DataType::Type8); break;
        case 8: data.emplace_back(DataType::Type9); break;
        case 9: data.emplace_back(DataType::Type10); break;
#elif TYPE_COUNT == 20
        case 0: data.emplace_back(DataType::Type1); break;
        case 1: data.emplace_back(DataType::Type2); break;
        case 2: data.emplace_back(DataType::Type3); break;
        case 3: data.emplace_back(DataType::Type4); break;
        case 4: data.emplace_back(DataType::Type5); break;
        case 5: data.emplace_back(DataType::Type6); break;
        case 6: data.emplace_back(DataType::Type7); break;
        case 7: data.emplace_back(DataType::Type8); break;
        case 8: data.emplace_back(DataType::Type9); break;
        case 9: data.emplace_back(DataType::Type10); break;
        case 10: data.emplace_back(DataType::Type11); break;
        case 11: data.emplace_back(DataType::Type12); break;
        case 12: data.emplace_back(DataType::Type13); break;
        case 13: data.emplace_back(DataType::Type14); break;
        case 14: data.emplace_back(DataType::Type15); break;
        case 15: data.emplace_back(DataType::Type16); break;
        case 16: data.emplace_back(DataType::Type17); break;
        case 17: data.emplace_back(DataType::Type18); break;
        case 18: data.emplace_back(DataType::Type19); break;
        case 19: data.emplace_back(DataType::Type20); break;
#else
#error "Unsupported TYPE_COUNT. Please set TYPE_COUNT to 3, 10, or 20."
#endif
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
#if TYPE_COUNT == 3
        case 0: objects.push_back(std::make_unique<Derived1>()); break;
        case 1: objects.push_back(std::make_unique<Derived2>()); break;
        case 2: objects.push_back(std::make_unique<Derived3>()); break;
#elif TYPE_COUNT == 10
        case 0: objects.push_back(std::make_unique<Derived1>()); break;
        case 1: objects.push_back(std::make_unique<Derived2>()); break;
        case 2: objects.push_back(std::make_unique<Derived3>()); break;
        case 3: objects.push_back(std::make_unique<Derived4>()); break;
        case 4: objects.push_back(std::make_unique<Derived5>()); break;
        case 5: objects.push_back(std::make_unique<Derived6>()); break;
        case 6: objects.push_back(std::make_unique<Derived7>()); break;
        case 7: objects.push_back(std::make_unique<Derived8>()); break;
        case 8: objects.push_back(std::make_unique<Derived9>()); break;
        case 9: objects.push_back(std::make_unique<Derived10>()); break;
#elif TYPE_COUNT == 20
        case 0: objects.push_back(std::make_unique<Derived1>()); break;
        case 1: objects.push_back(std::make_unique<Derived2>()); break;
        case 2: objects.push_back(std::make_unique<Derived3>()); break;
        case 3: objects.push_back(std::make_unique<Derived4>()); break;
        case 4: objects.push_back(std::make_unique<Derived5>()); break;
        case 5: objects.push_back(std::make_unique<Derived6>()); break;
        case 6: objects.push_back(std::make_unique<Derived7>()); break;
        case 7: objects.push_back(std::make_unique<Derived8>()); break;
        case 8: objects.push_back(std::make_unique<Derived9>()); break;
        case 9: objects.push_back(std::make_unique<Derived10>()); break;
        case 10: objects.push_back(std::make_unique<Derived11>()); break;
        case 11: objects.push_back(std::make_unique<Derived12>()); break;
        case 12: objects.push_back(std::make_unique<Derived13>()); break;
        case 13: objects.push_back(std::make_unique<Derived14>()); break;
        case 14: objects.push_back(std::make_unique<Derived15>()); break;
        case 15: objects.push_back(std::make_unique<Derived16>()); break;
        case 16: objects.push_back(std::make_unique<Derived17>()); break;
        case 17: objects.push_back(std::make_unique<Derived18>()); break;
        case 18: objects.push_back(std::make_unique<Derived19>()); break;
        case 19: objects.push_back(std::make_unique<Derived20>()); break;
#else
#error "Unsupported TYPE_COUNT. Please set TYPE_COUNT to 3, 10, or 20."
#endif
        }
    }
    return objects;
}