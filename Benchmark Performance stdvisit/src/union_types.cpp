#include "../include/union_types.h"
#include <cstring>

UnionData::UnionData(DataType t, int v) : type(t) {
    a_value = v;
}

UnionData::UnionData(DataType t, double v) : type(t) {
    b_value = v;
}

UnionData::UnionData(DataType t, const std::string& v) : type(t) {
    strncpy_s(c_value, v.c_str(), sizeof(c_value) - 1);
    c_value[sizeof(c_value) - 1] = '\0';
}