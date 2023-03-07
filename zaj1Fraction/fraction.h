#ifndef TASK1_FRACTION_H
#define TASK1_FRACTION_H

#include <iosfwd>
#include <string>

/** @file fraction.h
@brief Zaimplementuj podaną na zajęciach klasę reprezentującą ulamek:
1. Nazwa klasy `Fraction`.
   1. Następnie usuń makro: `UNIMPLEMENTED_classFraction`
2. Do klasy dodaj pola protected typu całkowitego:
   - `numerator_` (licznik)
   - `denominator_` (mianownik).
   1. Następnie usuń makro `UNIMPLEMENTED_numeratorAndDenominator`
3. Do klasy dodaj konstruktor bezparametrowy (może być też z wartościami domyślnymi),
   który ustawi wartości licznika na `0` i mianownika na `1`.
   1. Następnie usuń makro `UNIMPLEMENTED_defaultConstructor`
4. Do klasy dodaj konstruktor z parametrami (może być modyfikacja powyższego),
   który ustawi licznik i mianownik na podstawie podanych argumentów funkcji,
   - wartością domyślną dla mianownika ma być `1`.
   1. Następnie usuń makro `UNIMPLEMENTED_constructorWhichInitialiseFields`
5. Do klasy dodaj zestaw metod dostępowych/modyfikujących obiekty klasy -tzw. gettery i settery,
   które umożliwią modyfikacje i pobranie wartości licznika i mianownika
   1. Następnie usuń makro `UNIMPLEMENTED_gettersAndSetters`,
6. Do klasy dodaj metodę `print()`, wypisującą atrybuty obiektu na konsolę w formie `"licznik/mianownik\n"`
   1. Następnie usuń makro `UNIMPLEMENTED_printFunction`
7. Do klasy dodaj statyczny atrybut `removedFractions_`
   i metodę statyczną: `removedFractions()` zwracającą ten atrybut
   Skladowa ta powinna byc incrementowana w destruktorze.
   1. Następnie usuń makro `UNIMPLEMENTED_counterOfDestructedFractions`
8. Dodaj do klasy metody `save(std::ostream& os)` i `load(std::istream& is)`,
   zapisujące/odczytujące zawartość obiektu do przekazanego jako parametr strumienia wyjściowego/wejściowego,
   w formacie `"licznik/mianownik"`. Metoda wczytująca może założyć, że format danych będzie poprawny
   (nie trzeba obslugiwac bledow).
   1. Następnie usuń makro `UNIMPLEMENTED_readWrite`.
9. Proszę dodanie stałej odzwierciedlającej nazwę ułamka o nazwie `fractionName_`,
   powinna być `protected`. Do niej proszę dodać metodę stałą:
   `getFractionName()`.
   1. Następnie usuń makro `UNIMPLEMENTED_fractionNameSettableFromConstructor`
10. Do klasy dodaj dwie stałe:
   - stała statyczna odzwierciedlajaca niedopuszczalna wartość mianownika: `invalidDenominatorValue`
   - metodę statyczną zwracającą powyższe: `getInvalidDenominatorValue()`
   - stałą statyczną czasu kompilacji (constexpr) odzwierciedlajaca domyślna wartość mianownika: `defaultDenominatorValue`
   - metodę constexpr `getDefaultDenominatorValue()` zwracającą powyższe.
   1. Następnie usuń makro `UNIMPLEMENTED_fractionConstStaticFields`
____________________________________________________________________________________
Po implementowaniu powyższych poleceń i zmiany wartości poniższych makr powinno przechodzić
coraz więcej testów dostępnych w pliku @ref fractionTests.cpp.
____________________________________________________________________________________
# Pytania po implementacji ćwiczenia:
@note A. Jaka jest różnica między składowymi: `const static` a `static`?
@note B. Jaka jest różnica między składowymi: `const static` a `constexpr static`?
**/



#define UNIMPLEMENTED_readWrite
#define UNIMPLEMENTED_fractionNameSettableFromConstructor
#define UNIMPLEMENTED_fractionConstStaticFields

/** class PtrCStringVector
 *  @brief Klasa Fraction, którą należy poniżej zaimplementować zgodnie z instrukcją **/

// .. TODO:

#endif // TASK1_FRACTION_H

class Fraction {
protected:
    int numerator_, denominator_;
    static int removedFractions_;
public:
    Fraction();
    explicit Fraction(int numerator, int denominator = 1);
    ~Fraction();
    void setNumerator(int val);
    int getNumerator();
    void setDenominator(int val);
    int getDenominator();
    void print();
    int removedFractions();
    void save(std::ostream& os);
    void load(std::istream& is);
};
