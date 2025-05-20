#include "../include/variant_types.h"
#include <vector>

#if DATA_MEMBER == false
int Type1::get() const { return 1; }
//int Type1::index() { return 0; }

int Type2::get() const { return 2; }
//int Type2::index() { return 1; }

int Type3::get() const { return 3; }
//int Type3::index() { return 2; }

int Type4::get() const { return 4; }
//int Type4::index() { return 3; }

int Type5::get() const { return 5; }
//int Type5::index() { return 4; }

int Type6::get() const { return 6; }
//int Type6::index() { return 5; }

int Type7::get() const { return 7; }
int Type8::get() const { return 8; }
int Type9::get() const { return 9; }
int Type10::get() const { return 10; }
int Type11::get() const { return 11; }
int Type12::get() const { return 12; }
int Type13::get() const { return 13; }
int Type14::get() const { return 14; }
int Type15::get() const { return 15; }
int Type16::get() const { return 16; }
int Type17::get() const { return 17; }
int Type18::get() const { return 18; }
int Type19::get() const { return 19; }
int Type20::get() const { return 20; }

Type1::Type1(int value) : value_(value) {}
int Type1::get() const {
	std::vector<int> a{ 1, 2, 23, 432423, 432423, 213213, 1, 32, 324, 4243, 4321421, 242222, 32323 };
	int sum = 0;
	for (const int var : a) {
		sum += var;
	}
	return (9 + value_ + sum);
	//return (1 + value_); }
}
//int Type1::index() { return 0; }

Type2::Type2(int value) : value_(value) {}
int Type2::get() const {
	std::vector<int> a{ 1, 2, 23, 432423, 432423 };
	int sum = 0;
	for (const int var : a) {
		sum += var;
	}
	return (5 + value_ + sum);
	//return (1 + value_); 
}
//int Type2::index() { return 1; }

Type3::Type3(int value) : value_(value) {}
int Type3::get() const { return (1 + value_); }
//int Type3::index() { return 2; }

Type4::Type4(int value) : value_(value) {}
int Type4::get() const { return (1 + value_); }
//int Type4::index() { return 3; }

Type5::Type5(int value) : value_(value) {}
int Type5::get() const {
	/*std::vector<int> a{1, 2, 23, 432423, 432423};
	int sum = 0;
	for (const int var : a) {
		sum += var;
	}
	return (5 + value_ + sum); */
	return (1 + value_);
}
//int Type5::index() { return 4; }
#elif DATA_MEMBER == true
Type1::Type1(int value) : value_(value) {}
int Type1::get() const { 
	/*std::vector<int> a{1, 2, 23, 432423, 432423, 213213, 1, 32, 324, 4243, 4321421, 242222, 32323};
	int sum = 0;
	for (const int var : a) {
		sum += var;
	}
	return (9 + value_ + sum);*/
	return (1 + value_); 
	}
//int Type1::index() { return 0; }

Type2::Type2(int value) : value_(value) {}
int Type2::get() const { return (1 + value_); }
//int Type2::index() { return 1; }

Type3::Type3(int value) : value_(value) {}
int Type3::get() const { 
	/*std::vector<int> a{1, 2, 23, 4333, 423, 213213, 1, 32, 324, 4243, 41421, 2222};
	int sum = 0;
	for (const int var : a) {
		sum += var;
	}
	return (1 + value_ + sum);*/
	return (1 + value_); 
	}
//int Type3::index() { return 2; }

Type4::Type4(int value) : value_(value) {}
int Type4::get() const { return (1 + value_); }
//int Type4::index() { return 3; }

Type5::Type5(int value) : value_(value) {}
int Type5::get() const { return (1 + value_); }
//int Type5::index() { return 4; }

Type6::Type6(int value) : value_(value) {}
int Type6::get() const { return (1 + value_); }
//int Type6::index() { return 5; }

Type7::Type7(int value) : value_(value) {}
int Type7::get() const { return (1 + value_); }

Type8::Type8(int value) : value_(value) {}
int Type8::get() const { return (1 + value_); }

Type9::Type9(int value) : value_(value) {}
int Type9::get() const { return (1 + value_); }

Type10::Type10(int value) : value_(value) {}
int Type10::get() const { return (10 + value_); }

Type11::Type11(int value) : value_(value) {}
int Type11::get() const { return (11 + value_); }

Type12::Type12(int value) : value_(value) {}
int Type12::get() const { return (12 + value_); }

Type13::Type13(int value) : value_(value) {}
int Type13::get() const { return (13 + value_); }

Type14::Type14(int value) : value_(value) {}
int Type14::get() const { return (14 + value_); }

Type15::Type15(int value) : value_(value) {}
int Type15::get() const { return (15 + value_); }

Type16::Type16(int value) : value_(value) {}
int Type16::get() const { return (16 + value_); }

Type17::Type17(int value) : value_(value) {}
int Type17::get() const { return (17 + value_); }

Type18::Type18(int value) : value_(value) {}
int Type18::get() const { return (18 + value_); }

Type19::Type19(int value) : value_(value) {}
int Type19::get() const { return (19 + value_); }

Type20::Type20(int value) : value_(value) {}
int Type20::get() const { return (20 + value_); }
#endif

#if TYPE_COUNT == 2
int Visitor::operator()(const Type1& a) const { return a.get(); }
int Visitor::operator()(const Type2& a) const { return a.get(); }
#elif TYPE_COUNT == 3
int Visitor::operator()(const Type1& a) const { return a.get(); }
int Visitor::operator()(const Type2& a) const { return a.get(); }
int Visitor::operator()(const Type3& a) const { return a.get(); }
#elif TYPE_COUNT == 4
int Visitor::operator()(const Type1& a) const { return a.get(); }
int Visitor::operator()(const Type2& a) const { return a.get(); }
int Visitor::operator()(const Type3& a) const { return a.get(); }
int Visitor::operator()(const Type4& a) const { return a.get(); }
#elif TYPE_COUNT == 5
int Visitor::operator()(const Type1& a) const { return a.get(); }
int Visitor::operator()(const Type2& a) const { return a.get(); }
int Visitor::operator()(const Type3& a) const { return a.get(); }
int Visitor::operator()(const Type4& a) const { return a.get(); }
int Visitor::operator()(const Type5& a) const { return a.get(); }
#elif TYPE_COUNT == 6
int Visitor::operator()(const Type1& a) const { return a.get(); }
int Visitor::operator()(const Type2& a) const { return a.get(); }
int Visitor::operator()(const Type3& a) const { return a.get(); }
int Visitor::operator()(const Type4& a) const { return a.get(); }
int Visitor::operator()(const Type5& a) const { return a.get(); }
int Visitor::operator()(const Type6& a) const { return a.get(); }
#elif TYPE_COUNT == 7
int Visitor::operator()(const Type1& a) const { return a.get(); }
int Visitor::operator()(const Type2& a) const { return a.get(); }
int Visitor::operator()(const Type3& a) const { return a.get(); }
int Visitor::operator()(const Type4& a) const { return a.get(); }
int Visitor::operator()(const Type5& a) const { return a.get(); }
int Visitor::operator()(const Type6& a) const { return a.get(); }
int Visitor::operator()(const Type7& a) const { return a.get(); }
#elif TYPE_COUNT == 8
int Visitor::operator()(const Type1& a) const { return a.get(); }
int Visitor::operator()(const Type2& a) const { return a.get(); }
int Visitor::operator()(const Type3& a) const { return a.get(); }
int Visitor::operator()(const Type4& a) const { return a.get(); }
int Visitor::operator()(const Type5& a) const { return a.get(); }
int Visitor::operator()(const Type6& a) const { return a.get(); }
int Visitor::operator()(const Type7& a) const { return a.get(); }
int Visitor::operator()(const Type8& a) const { return a.get(); }
#elif TYPE_COUNT == 9

int Visitor::operator()(const Type1& a) const { return a.get(); }

int Visitor::operator()(const Type2& a) const { return a.get(); }

int Visitor::operator()(const Type3& a) const { return a.get(); }

int Visitor::operator()(const Type4& a) const { return a.get(); }

int Visitor::operator()(const Type5& a) const { return a.get(); }

int Visitor::operator()(const Type6& a) const { return a.get(); }

int Visitor::operator()(const Type7& a) const { return a.get(); }

int Visitor::operator()(const Type8& a) const { return a.get(); }

int Visitor::operator()(const Type9& a) const { return a.get(); }
#elif TYPE_COUNT == 10
int Visitor::operator()(const Type1& a) const { return a.get(); }
int Visitor::operator()(const Type2& a) const { return a.get(); }
int Visitor::operator()(const Type3& a) const { return a.get(); }
int Visitor::operator()(const Type4& a) const { return a.get(); }
int Visitor::operator()(const Type5& a) const { return a.get(); }
int Visitor::operator()(const Type6& a) const { return a.get(); }
int Visitor::operator()(const Type7& a) const { return a.get(); }
int Visitor::operator()(const Type8& a) const { return a.get(); }
int Visitor::operator()(const Type9& a) const { return a.get(); }
int Visitor::operator()(const Type10& a) const { return a.get(); }
#elif TYPE_COUNT == 20
int Visitor::operator()(const Type1& a) const { return a.get(); }
int Visitor::operator()(const Type2& a) const { return a.get(); }
int Visitor::operator()(const Type3& a) const { return a.get(); }
int Visitor::operator()(const Type4& a) const { return a.get(); }
int Visitor::operator()(const Type5& a) const { return a.get(); }
int Visitor::operator()(const Type6& a) const { return a.get(); }
int Visitor::operator()(const Type7& a) const { return a.get(); }
int Visitor::operator()(const Type8& a) const { return a.get(); }
int Visitor::operator()(const Type9& a) const { return a.get(); }
int Visitor::operator()(const Type10& a) const { return a.get(); }
int Visitor::operator()(const Type11& a) const { return a.get(); }
int Visitor::operator()(const Type12& a) const { return a.get(); }
int Visitor::operator()(const Type13& a) const { return a.get(); }
int Visitor::operator()(const Type14& a) const { return a.get(); }
int Visitor::operator()(const Type15& a) const { return a.get(); }
int Visitor::operator()(const Type16& a) const { return a.get(); }
int Visitor::operator()(const Type17& a) const { return a.get(); }
int Visitor::operator()(const Type18& a) const { return a.get(); }
int Visitor::operator()(const Type19& a) const { return a.get(); }
int Visitor::operator()(const Type20& a) const { return a.get(); }
#else
#error "Unsupported TYPE_COUNT. Please set TYPE_COUNT to 3, 10, or 20."
#endif