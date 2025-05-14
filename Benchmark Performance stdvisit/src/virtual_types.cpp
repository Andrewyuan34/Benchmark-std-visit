#include "../include/virtual_types.h"

// ============= Types for virtual polymorphism approach =============

#if DATA_MEMBER == false
int Derived1::getValue() const {
    return 1;
}

int Derived2::getValue() const {
    return 2;
}

int Derived3::getValue() const {
    return 3;
}

int Derived4::getValue() const {
    return 4;
}

int Derived5::getValue() const {
    return 5;
}

int Derived6::getValue() const {
    return 6;
}

int Derived7::getValue() const {
    return 7;
}

int Derived8::getValue() const {
    return 8;
}

int Derived9::getValue() const {
    return 9;
}

int Derived10::getValue() const {
    return 10;
}

int Derived11::getValue() const {
    return 11;
}

int Derived12::getValue() const {
    return 12;
}

int Derived13::getValue() const {
    return 13;
}

int Derived14::getValue() const {
    return 14;
}

int Derived15::getValue() const {
    return 15;
}

int Derived16::getValue() const {
    return 16;
}

int Derived17::getValue() const {
    return 17;
}

int Derived18::getValue() const {
    return 18;
}

int Derived19::getValue() const {
    return 19;
}

int Derived20::getValue() const {
    return 20;
}

#elif DATA_MEMBER == true
BaseType::BaseType(int value) : value_(value) {}

Derived1::Derived1(int value) : BaseType(value) {}
int Derived1::getValue() const {
    return (1 + value_);
}

Derived2::Derived2(int value) : BaseType(value) {}
int Derived2::getValue() const {
    return (1 + value_);
}

Derived3::Derived3(int value) : BaseType(value) {}
int Derived3::getValue() const {
    return (1 + value_);
}

Derived4::Derived4(int value) : BaseType(value) {}
int Derived4::getValue() const {
    return (1 + value_);
}

Derived5::Derived5(int value) : BaseType(value) {}
int Derived5::getValue() const {
    return (1 + value_);
}

Derived6::Derived6(int value) : BaseType(value) {}
int Derived6::getValue() const {
    return (1 + value_);
}

Derived7::Derived7(int value) : BaseType(value) {}
int Derived7::getValue() const {
    return (1 + value_);
}

Derived8::Derived8(int value) : BaseType(value) {}
int Derived8::getValue() const {
    return (1 + value_);
}

Derived9::Derived9(int value) : BaseType(value) {}
int Derived9::getValue() const {
    return (1 + value_);
}

Derived10::Derived10(int value) : BaseType(value) {}
int Derived10::getValue() const {
    return (1 + value_);
}

Derived11::Derived11(int value) : BaseType(value) {}
int Derived11::getValue() const {
    return (1 + value_);
}

Derived12::Derived12(int value) : BaseType(value) {}
int Derived12::getValue() const {
    return (1 + value_);
}

Derived13::Derived13(int value) : BaseType(value) {}
int Derived13::getValue() const {
    return (1 + value_);
}

Derived14::Derived14(int value) : BaseType(value) {}
int Derived14::getValue() const {
    return (1 + value_);
}

Derived15::Derived15(int value) : BaseType(value) {}
int Derived15::getValue() const {
    return (1 + value_);
}

Derived16::Derived16(int value) : BaseType(value) {}
int Derived16::getValue() const {
    return (1 + value_);
}

Derived17::Derived17(int value) : BaseType(value) {}
int Derived17::getValue() const {
    return (1 + value_);
}

Derived18::Derived18(int value) : BaseType(value) {}
int Derived18::getValue() const {
    return (1 + value_);
}

Derived19::Derived19(int value) : BaseType(value) {}
int Derived19::getValue() const {
    return (1 + value_);
}

Derived20::Derived20(int value) : BaseType(value) {}
int Derived20::getValue() const {
    return (1 + value_);
}

#endif
