#include "../include/variant_types.h"

int Type1::get() const { return 1; }
int Type2::get() const { return 1; }
int Type3::get() const { return 1; }
int Type4::get() const { return 1; }
int Type5::get() const { return 1; }
int Type6::get() const { return 1; }
int Type7::get() const { return 1; }
int Type8::get() const { return 1; }
int Type9::get() const { return 1; }
int Type10::get() const { return 1; }
int Type11::get() const { return 1; }
int Type12::get() const { return 1; }
int Type13::get() const { return 1; }
int Type14::get() const { return 1; }
int Type15::get() const { return 1; }
int Type16::get() const { return 1; }
int Type17::get() const { return 1; }
int Type18::get() const { return 1; }
int Type19::get() const { return 1; }
int Type20::get() const { return 1; }

#if TYPE_COUNT == 3
double Visitor::operator()(const Type1& a) const { return a.get(); }
double Visitor::operator()(const Type2& b) const { return b.get(); }
double Visitor::operator()(const Type3& c) const { return c.get(); }
#elif TYPE_COUNT == 10
double Visitor::operator()(const Type1& a) const { return a.get(); }
double Visitor::operator()(const Type2& b) const { return b.get(); }
double Visitor::operator()(const Type3& c) const { return c.get(); }
double Visitor::operator()(const Type4& a) const { return a.get(); }
double Visitor::operator()(const Type5& b) const { return b.get(); }
double Visitor::operator()(const Type6& c) const { return c.get(); }
double Visitor::operator()(const Type7& a) const { return a.get(); }
double Visitor::operator()(const Type8& b) const { return b.get(); }
double Visitor::operator()(const Type9& c) const { return c.get(); }
double Visitor::operator()(const Type10& c) const { return c.get(); }
#elif TYPE_COUNT == 20
double Visitor::operator()(const Type1& a) const { return a.get(); }
double Visitor::operator()(const Type2& b) const { return b.get(); }
double Visitor::operator()(const Type3& c) const { return c.get(); }
double Visitor::operator()(const Type4& a) const { return a.get(); }
double Visitor::operator()(const Type5& b) const { return b.get(); }
double Visitor::operator()(const Type6& c) const { return c.get(); }
double Visitor::operator()(const Type7& a) const { return a.get(); }
double Visitor::operator()(const Type8& b) const { return b.get(); }
double Visitor::operator()(const Type9& c) const { return c.get(); }
double Visitor::operator()(const Type10& c) const { return c.get(); }
double Visitor::operator()(const Type11& a) const { return a.get(); }
double Visitor::operator()(const Type12& b) const { return b.get(); }
double Visitor::operator()(const Type13& c) const { return c.get(); }
double Visitor::operator()(const Type14& a) const { return a.get(); }
double Visitor::operator()(const Type15& b) const { return b.get(); }
double Visitor::operator()(const Type16& c) const { return c.get(); }
double Visitor::operator()(const Type17& a) const { return a.get(); }
double Visitor::operator()(const Type18& b) const { return b.get(); }
double Visitor::operator()(const Type19& c) const { return c.get(); }
double Visitor::operator()(const Type20& c) const { return c.get(); }
#else
#error "Unsupported TYPE_COUNT. Please set TYPE_COUNT to 3, 10, or 20."
#endif