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
int Fraction::removedFractions_ = 0;

Fraction::Fraction() {
    denominator_ = 1;
    numerator_ = 0;
}

Fraction::Fraction(int numerator, int denominator, std::string name) : fractionName_(std::move(name)){
    numerator_ = numerator;
    denominator_ = denominator;
}



void Fraction::setNumerator(int val) {
    numerator_ = val;
}

[[nodiscard]] int Fraction::getNumerator() const {
    return numerator_;
}

void Fraction::setDenominator(int val) {
    denominator_ = val;
}

[[nodiscard]] int Fraction::getDenominator() const {
    return denominator_;
}

void Fraction::print() const{
    std::cout << numerator_ << "/" << denominator_ << "\n";
}

    Fraction::~Fraction() {
        removedFractions_++;
    }

int Fraction::removedFractions() {
    return removedFractions_;

}

[[nodiscard]] std::string Fraction::getFractionName() const {
    return fractionName_;
}

int Fraction::getInvalidDenominatorValue() {
    return invalidDenominatorValue;
}

void Fraction::save(ostream &os) const{
    os << numerator_ << "/" << denominator_;
}

void Fraction::load(istream &is) {
    char slash;
    is >> numerator_ >> slash >> denominator_;
}

