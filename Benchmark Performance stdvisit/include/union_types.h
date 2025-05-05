#pragma once
#pragma warning(disable: 4324)  // Disable structure padding warning
#include <string>
#include "macros.h"

// ============= Types for enum+union approach =============

// Enum type for discriminating union types
enum class DataType {
#if TYPE_COUNT == 3
    Type1,
    Type2,
    Type3
#elif TYPE_COUNT == 10
    Type1,
    Type2,
    Type3,
    Type4,
    Type5,
    Type6,
    Type7,
    Type8,
    Type9,
    Type10
#elif TYPE_COUNT == 20
    Type1,
    Type2,
    Type3,
    Type4,
    Type5,
    Type6,
    Type7,
    Type8,
    Type9,
    Type10,
    Type11,
    Type12,
    Type13,
    Type14,
    Type15,
    Type16,
    Type17,
    Type18,
    Type19,
    Type20
#else
#error "Unsupported TYPE_COUNT. Please set TYPE_COUNT to 3, 10, or 20."
#endif
};

// Union data structure with type discrimination
struct alignas(64) UnionData {
    DataType type;

    // Constructors for different types
    UnionData(DataType t);
    int get() const;
};