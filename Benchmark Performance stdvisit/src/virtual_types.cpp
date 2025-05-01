#include "../include/virtual_types.h"

// ============= Types for virtual polymorphism approach =============

DerivedA::DerivedA(int v) : value(v) {}

double DerivedA::getValue() const {
    return static_cast<double>(value);
}

DerivedB::DerivedB(double v) : value(v) {}

double DerivedB::getValue() const {
    return value;
}

DerivedC::DerivedC(std::string v) : value(std::move(v)) {}

double DerivedC::getValue() const {
    return std::stod(value);
}