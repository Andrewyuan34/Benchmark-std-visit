#pragma once
#include <variant>
#include <string>

#pragma once
#include <variant>
#include <string>

// ============= Common Types for std::variant approach =============
struct Type1 { int get() const; };
struct Type2 { int get() const; };
struct Type3 { int get() const; };
struct Type4 { int get() const; };
struct Type5 { int get() const; };
struct Type6 { int get() const; };
struct Type7 { int get() const; };
struct Type8 { int get() const; };
struct Type9 { int get() const; };
struct Type10 { int get() const; };
struct Type11 { int get() const; };
struct Type12 { int get() const; };
struct Type13 { int get() const; };
struct Type14 { int get() const; };
struct Type15 { int get() const; };
struct Type16 { int get() const; };
struct Type17 { int get() const; };
struct Type18 { int get() const; };
struct Type19 { int get() const; };
struct Type20 { int get() const; };

// ============= Toggle: Choose number of types =============
// Set TYPE_COUNT to 3, 10, or 20
#ifndef TYPE_COUNT
#define TYPE_COUNT 20
#endif

#if TYPE_COUNT == 3
using VariantType = std::variant<Type1, Type2, Type3>;
struct Visitor {
    double operator()(const Type1& a) const;
    double operator()(const Type2& b) const;
    double operator()(const Type3& c) const;
};
#elif TYPE_COUNT == 10
using VariantType = std::variant<Type1, Type2, Type3, Type4, Type5, Type6, Type7, Type8, Type9, Type10>;
struct Visitor {
    double operator()(const Type1& a) const;
    double operator()(const Type2& b) const;
    double operator()(const Type3& c) const;
    double operator()(const Type4& d) const;
    double operator()(const Type5& e) const;
    double operator()(const Type6& f) const;
    double operator()(const Type7& g) const;
    double operator()(const Type8& h) const;
    double operator()(const Type9& i) const;
    double operator()(const Type10& j) const;
};
#elif TYPE_COUNT == 20
using VariantType = std::variant<
    Type1, Type2, Type3, Type4, Type5, Type6, Type7, Type8, Type9, Type10,
    Type11, Type12, Type13, Type14, Type15, Type16, Type17, Type18, Type19, Type20>;
struct Visitor {
    double operator()(const Type1& a) const;
    double operator()(const Type2& b) const;
    double operator()(const Type3& c) const;
    double operator()(const Type4& d) const;
    double operator()(const Type5& e) const;
    double operator()(const Type6& f) const;
    double operator()(const Type7& g) const;
    double operator()(const Type8& h) const;
    double operator()(const Type9& i) const;
    double operator()(const Type10& j) const;
    double operator()(const Type11& k) const;
    double operator()(const Type12& l) const;
    double operator()(const Type13& m) const;
    double operator()(const Type14& n) const;
    double operator()(const Type15& o) const;
    double operator()(const Type16& p) const;
    double operator()(const Type17& q) const;
    double operator()(const Type18& r) const;
    double operator()(const Type19& s) const;
    double operator()(const Type20& t) const;
};
#else
#error "Unsupported TYPE_COUNT. Please set TYPE_COUNT to 3, 10, or 20."
#endif

