#pragma once
#include <string>
#include <memory>
#include "macros.h"

#if DATA_MEMBER == false
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

#elif DATA_MEMBER == true
// Base class with pure virtual interface
class BaseType {
public:
    explicit BaseType(int value);
    virtual ~BaseType() = default;
    virtual int getValue() const = 0;
    int value_;
};

class Derived1 : public BaseType {
public:
    explicit Derived1(int value);
    int getValue() const override;
};

class Derived2 : public BaseType {
public:
    explicit Derived2(int value);
    int getValue() const override;
};

class Derived3 : public BaseType {
public:
    explicit Derived3(int value);
    int getValue() const override;
};

class Derived4 : public BaseType {
public:
    explicit Derived4(int value);
    int getValue() const override;
};

class Derived5 : public BaseType {
public:
    explicit Derived5(int value);
    int getValue() const override;
};

class Derived6 : public BaseType {
public:
    explicit Derived6(int value);
    int getValue() const override;
};

class Derived7 : public BaseType {
public:
    explicit Derived7(int value);
    int getValue() const override;
};

class Derived8 : public BaseType {
public:
    explicit Derived8(int value);
    int getValue() const override;
};

class Derived9 : public BaseType {
public:
    explicit Derived9(int value);
    int getValue() const override;
};

class Derived10 : public BaseType {
public:
    explicit Derived10(int value);
    int getValue() const override;
};

class Derived11 : public BaseType {
public:
    explicit Derived11(int value);
    int getValue() const override;
};

class Derived12 : public BaseType {
public:
    explicit Derived12(int value);
    int getValue() const override;
};

class Derived13 : public BaseType {
public:
    explicit Derived13(int value);
    int getValue() const override;
};

class Derived14 : public BaseType {
public:
    explicit Derived14(int value);
    int getValue() const override;
};

class Derived15 : public BaseType {
public:
    explicit Derived15(int value);
    int getValue() const override;
};

class Derived16 : public BaseType {
public:
    explicit Derived16(int value);
    int getValue() const override;
};

class Derived17 : public BaseType {
public:
    explicit Derived17(int value);
    int getValue() const override;
};

class Derived18 : public BaseType {
public:
    explicit Derived18(int value);
    int getValue() const override;
};

class Derived19 : public BaseType {
public:
    explicit Derived19(int value);
    int getValue() const override;
};

class Derived20 : public BaseType {
public:
    explicit Derived20(int value);
    int getValue() const override;
};
#endif

