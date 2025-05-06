#pragma once
#include <variant>
#include <string>
#include "macros.h"

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




#if TYPE_COUNT == 3
using VariantType = std::variant<Type1, Type2, Type3>;
struct Visitor {
    int operator()(const Type1& a) const;
    int operator()(const Type2& a) const;
    int operator()(const Type3& a) const;
};
#elif TYPE_COUNT == 10
using VariantType = std::variant<Type1, Type2, Type3, Type4, Type5, Type6, Type7, Type8, Type9, Type10>;
struct Visitor {
    int operator()(const Type1& a) const;
    int operator()(const Type2& a) const;
    int operator()(const Type3& a) const;
    int operator()(const Type4& a) const;
    int operator()(const Type5& a) const;
    int operator()(const Type6& a) const;
    int operator()(const Type7& a) const;
    int operator()(const Type8& a) const;
    int operator()(const Type9& a) const;
    int operator()(const Type10& a) const;
};
#elif TYPE_COUNT == 20
using VariantType = std::variant<
    Type1, Type2, Type3, Type4, Type5, Type6, Type7, Type8, Type9, Type10,
    Type11, Type12, Type13, Type14, Type15, Type16, Type17, Type18, Type19, Type20>;
struct Visitor {
    int operator()(const Type1& a) const;
    int operator()(const Type2& a) const;
    int operator()(const Type3& a) const;
    int operator()(const Type4& a) const;
    int operator()(const Type5& a) const;
    int operator()(const Type6& a) const;
    int operator()(const Type7& a) const;
    int operator()(const Type8& a) const;
    int operator()(const Type9& a) const;
    int operator()(const Type10& a) const;
    int operator()(const Type11& a) const;
    int operator()(const Type12& a) const;
    int operator()(const Type13& a) const;
    int operator()(const Type14& a) const;
    int operator()(const Type15& a) const;
    int operator()(const Type16& a) const;
    int operator()(const Type17& a) const;
    int operator()(const Type18& a) const;
    int operator()(const Type19& a) const;
    int operator()(const Type20& a) const;
};
#else
#error "Unsupported TYPE_COUNT. Please set TYPE_COUNT to 3, 10, or 20."
#endif

