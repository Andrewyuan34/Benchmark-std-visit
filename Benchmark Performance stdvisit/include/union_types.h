#pragma once
#pragma warning(disable: 4324)  // Disable structure padding warning
#include <string>

// ============= Types for enum+union approach =============

// Enum type for discriminating union types
enum class DataType {
    Type_A,
    Type_B,
    Type_C
};

// Union data structure with type discrimination
struct alignas(64) UnionData {
    DataType type;
    union {
        int a_value;
        double b_value;
        char c_value[32];  // Fixed-size buffer for string
    };

    // Constructors for different types
    UnionData(DataType t, int v);
    UnionData(DataType t, double v);
    UnionData(DataType t, const std::string& v);
};