#pragma once
#include <string>
#include <memory>

// Base class with pure virtual interface
class BaseType {
public:
    virtual ~BaseType() = default;
    virtual double getValue() const = 0;
};

// Derived class for integer type
class DerivedA : public BaseType {
private:
    int value;
public:
    explicit DerivedA(int v);
    double getValue() const override;
};

// Derived class for double type
class DerivedB : public BaseType {
private:
    double value;
public:
    explicit DerivedB(double v);
    double getValue() const override;
};

// Derived class for string type
class DerivedC : public BaseType {
private:
    std::string value;
public:
    explicit DerivedC(std::string v);
    double getValue() const override;
};
