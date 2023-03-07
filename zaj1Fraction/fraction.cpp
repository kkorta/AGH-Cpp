#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

#include "fraction.h"

//#ifdef UNIMPLEMENTED_classFraction
//#ifndef _MSC_FULL_VER // if not Visual Studio Compiler
//    #warning "Klasa jest do zaimplementowania. Instrukcja w pliku naglowkowym"
//#else
//    #pragma message ("Klasa jest do zaimplementowania. Instrukcja w pliku naglowkowym")
//#endif
//#endif // UNIMPLEMENTED_classFraction
Fraction::Fraction() {
    denominator_ = 1;
    numerator_ = 0;
}

Fraction::Fraction(int numerator, int denominator) {
    numerator_ = numerator;
    denominator_ = denominator;
}

void Fraction::setNumerator(int val) {
    numerator_ = val;
}

int Fraction::getNumerator() {
    return numerator_;
}

void Fraction::setDenominator(int val) {
    denominator_ = val;
}

int Fraction::getDenominator() {
    return denominator_;
}

void Fraction::print() {
    cout << numerator_ << "/" << denominator_ << "\n";
}

Fraction::~Fraction() {
    removedFractions_++;
}

int Fraction::removedFractions() {
    return removedFractions_;

}