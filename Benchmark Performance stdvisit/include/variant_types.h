#pragma once
#include <variant>
#include <string>

// ============= Common Types for std::variant approach =============

struct TypeA {
    int value;
    explicit TypeA(int v);
    double getValue() const;
};

struct TypeB {
    double value;
    explicit TypeB(double v);
    double getValue() const;
};

struct TypeC {
    std::string value;
    explicit TypeC(std::string v);
    double getValue() const;
};

using VariantType = std::variant<TypeA, TypeB, TypeC>;

// ============= Visitor for std::visit approach =============
struct Visitor {
    double operator()(const TypeA& a) const;
    double operator()(const TypeB& b) const;
    double operator()(const TypeC& c) const;
};
