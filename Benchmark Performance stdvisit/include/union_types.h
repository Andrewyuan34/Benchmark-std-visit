#pragma once
#pragma warning(disable: 4324)  // Disable structure padding warning
#include <string>
#include "macros.h"

// ============= Types for enum+union approach =============

// Enum type for discriminating union types
enum class DataType {
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
};

// Union data structure with type discrimination
#if DATA_MEMBER == false
struct UnionData {
    explicit UnionData(DataType t);
    DataType type;

    // Constructors for different types
    int get() const;
};
#elif DATA_MEMBER == true
struct UnionData {
    DataType type;
    int value_;

    // Constructors for different types
    explicit UnionData(DataType t, int value);
    int get() const;
};
#endif

