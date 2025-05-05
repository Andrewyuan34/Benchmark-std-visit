#include "../include/union_types.h"
#include <cstring>

UnionData::UnionData(DataType t) : type(t) {}

int UnionData::get() const {
    return 1;
}