#include "Cfraction.h"

Cfraction::Cfraction() {
    this->numerator = 0;
    this->denominator = 1;
}

Cfraction::Cfraction(int numerator, int denominator) {
    if (denominator == 0) {
        std::cout << "Denominator cannot be zero" << std::endl;
        system("pause");
        exit(0);
    }
    this->numerator = numerator;
    this->denominator = denominator;
}

Cfraction::Cfraction(const Cfraction &value) {
    this->numerator = value.numerator;
    this->denominator = value.denominator;
}

Cfraction Cfraction::operator+(int value) {
    return Cfraction(numerator + denominator * value, denominator);
}

Cfraction Cfraction::operator-(int value) {
    return Cfraction(numerator - denominator * value, denominator);
}

Cfraction Cfraction::operator*(int value) {
    return Cfraction(numerator * value, denominator);
}

Cfraction Cfraction::operator/(int value) {
    if (value == 0) {
        std::cout << "Division by zero will result in an error" << std::endl;
        system("pause");
        exit(0);
    }
    return Cfraction(numerator, denominator * value);
}

Cfraction& Cfraction::operator+=(int value) {
    numerator += denominator * value;
    return *this;
}

Cfraction &Cfraction::operator-=(int value) {
    numerator -= denominator * value;
    return *this;
}

Cfraction &Cfraction::operator*=(int value) {
    numerator *= value;
    return *this;
}

Cfraction &Cfraction::operator/=(int value) {
    if (value == 0) {
        std::cout << "Division by zero will result in an error" << std::endl;
        system("pause");
        exit(0);
    }
    denominator *= value;
    return *this;
}

Cfraction &Cfraction::operator++() {
    numerator++;
    return *this;
}

Cfraction &Cfraction::operator--() {
    numerator--;
    return *this;
}

Cfraction Cfraction::operator++(int) {
    Cfraction temp(*this);
    ++*this;
    return temp;
}

Cfraction Cfraction::operator--(int) {
    Cfraction temp(*this);
    --*this;
    return temp;
}

Cfraction Cfraction::operator+(const Cfraction &cfraction) {
    if (denominator == cfraction.denominator)
        return Cfraction(numerator + cfraction.numerator, denominator);
    int numerator = this->numerator;
    int denominator = this->denominator;
    numerator *= cfraction.denominator;
    numerator += cfraction.numerator * denominator;
    denominator *= cfraction.denominator;
    return Cfraction(numerator, denominator);
}

Cfraction Cfraction::operator-(const Cfraction &cfraction) {
    if (denominator == cfraction.denominator)
        return Cfraction(numerator - cfraction.numerator, denominator);
    int numerator = this->numerator;
    int denominator = this->denominator;
    numerator *= cfraction.denominator;
    numerator -= cfraction.numerator * denominator;
    denominator *= cfraction.denominator;
    return Cfraction(numerator, denominator);
}

Cfraction Cfraction::operator*(const Cfraction &cfraction) {
    return Cfraction(numerator * cfraction.numerator, denominator * cfraction.denominator);
}

Cfraction Cfraction::operator/(const Cfraction &cfraction) {
    return Cfraction(numerator * cfraction.denominator, denominator * cfraction.numerator);
}

Cfraction &Cfraction::operator+=(const Cfraction &cfraction) {
    if (denominator == cfraction.denominator) {
        numerator += cfraction.numerator;
        return *this;
    }
    numerator *= cfraction.denominator;
    numerator += cfraction.numerator * denominator;
    denominator *= cfraction.denominator;
    return *this;
}

Cfraction &Cfraction::operator-=(const Cfraction &cfraction) {
    if (denominator == cfraction.denominator) {
        numerator -= cfraction.numerator;
        return *this;
    }
    numerator *= cfraction.denominator;
    numerator -= cfraction.numerator * denominator;
    denominator *= cfraction.denominator;
    return *this;
}

Cfraction &Cfraction::operator*=(const Cfraction &cfraction) {
    numerator *= cfraction.numerator;
    denominator *= cfraction.denominator;
    return *this;
}

Cfraction &Cfraction::operator/=(const Cfraction &cfraction) {
    numerator *= cfraction.denominator;
    denominator *= cfraction.numerator;
    return *this;
}

Cfraction::operator double() {
    return (double)numerator / denominator;
}

Cfraction& Cfraction::operator()(int numerator, int denominator) {
    if (denominator == 0) {
        std::cout << "Denominator cannot be zero" << std::endl;
        system("pause");
        exit(0);
    }
    this->numerator = numerator;
    this->denominator = denominator;
    return *this;
}

int Cfraction::getNumerator() {
    return numerator;
}

int Cfraction::getDenominator() {
    return denominator;
}

bool Cfraction::operator==(const Cfraction &cfraction) {
    return numerator == cfraction.numerator && denominator == cfraction.denominator;
}

bool Cfraction::operator!=(const Cfraction &cfraction) {
    return numerator != cfraction.numerator || denominator != cfraction.denominator;
}

bool Cfraction::operator<(Cfraction &cfraction) {
    return (double)*this < (double)cfraction;
}

bool Cfraction::operator>(Cfraction &cfraction) {
    return (double)*this > (double)cfraction;
}

bool Cfraction::operator<=(Cfraction &cfraction) {
    return (double)*this <= (double)cfraction;
}

bool Cfraction::operator>=(Cfraction &cfraction) {
    return (double)*this >= (double)cfraction;
}


//
Cfraction::operator std::string() {
    return std::to_string(numerator) + "/" + std::to_string(denominator);
}
