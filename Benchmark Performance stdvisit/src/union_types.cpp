#include "../include/union_types.h"

#if DATA_MEMBER == false

UnionData::UnionData(DataType t) : type(t) {}
int UnionData::get() const { return 1; }

#elif DATA_MEMBER == true
UnionData::UnionData(DataType t, int value) : type(t), value_(value) {}

int UnionData::get() const {
    return (1 + value_);
}
#endif
