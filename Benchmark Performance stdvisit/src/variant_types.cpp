#include "../include/variant_types.h"

TypeA::TypeA(int v) : value(v) {}
double TypeA::getValue() const { return static_cast<double>(value); }

TypeB::TypeB(double v) : value(v) {}
double TypeB::getValue() const { return value; }

TypeC::TypeC(std::string v) : value(std::move(v)) {}
double TypeC::getValue() const { return std::stod(value); }

double Visitor::operator()(const TypeA& a) const { return a.getValue(); }
double Visitor::operator()(const TypeB& b) const { return b.getValue(); }
double Visitor::operator()(const TypeC& c) const { return c.getValue(); }