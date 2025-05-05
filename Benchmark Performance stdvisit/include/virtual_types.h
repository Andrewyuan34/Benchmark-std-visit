#pragma once
#include <string>
#include <memory>
#include "macros.h"

// Base class with pure virtual interface
class BaseType {
public:
    virtual ~BaseType() = default;
    virtual int getValue() const = 0;
};

class Derived1 : public BaseType {
public:
    explicit Derived1() = default;
    int getValue() const override;
};

// Derived class for double type
class Derived2 : public BaseType {
public:
    explicit Derived2() = default;
    int getValue() const override;
};

class Derived3 : public BaseType {
public:
    explicit Derived3() = default;
    int getValue() const override;
};

// Derived class for integer type
class Derived4 : public BaseType {
public:
    explicit Derived4() = default;
    int getValue() const override;
};

class Derived5 : public BaseType {
public:
    explicit Derived5() = default;
    int getValue() const override;
};

class Derived6 : public BaseType {
public:
    explicit Derived6() = default;
    int getValue() const override;
};

class Derived7 : public BaseType {
public:
    explicit Derived7() = default;
    int getValue() const override;
};

class Derived8 : public BaseType {
public:
    explicit Derived8() = default;
    int getValue() const override;
};

class Derived9 : public BaseType {
public:
    explicit Derived9() = default;
    int getValue() const override;
};

class Derived10 : public BaseType {
public:
    explicit Derived10() = default;
    int getValue() const override;
};

class Derived11 : public BaseType {
public:
    explicit Derived11() = default;
    int getValue() const override;
};

// Derived class for double type
class Derived12 : public BaseType {
public:
    explicit Derived12() = default;
    int getValue() const override;
};

class Derived13 : public BaseType {
public:
    explicit Derived13() = default;
    int getValue() const override;
};

// Derived class for integer type
class Derived14 : public BaseType {
public:
    explicit Derived14() = default;
    int getValue() const override;
};

class Derived15 : public BaseType {
public:
    explicit Derived15() = default;
    int getValue() const override;
};

class Derived16 : public BaseType {
public:
    explicit Derived16() = default;
    int getValue() const override;
};

class Derived17 : public BaseType {
public:
    explicit Derived17() = default;
    int getValue() const override;
};

class Derived18 : public BaseType {
public:
    explicit Derived18() = default;
    int getValue() const override;
};

class Derived19 : public BaseType {
public:
    explicit Derived19() = default;
    int getValue() const override;
};

class Derived20 : public BaseType {
public:
    explicit Derived20() = default;
    int getValue() const override;
};