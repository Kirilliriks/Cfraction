#ifndef CFRACTION_CFRACTION_H
#define CFRACTION_CFRACTION_H

#include <iostream>
#include <string>

class Cfraction {
public:
    Cfraction(); // Конструктор по умолчанию
    Cfraction(int numerator, int denominator = 1); // Конструктор создающий объект по переданным значениям
    Cfraction(const Cfraction &value); // Конструктор копирования

    // Операции с числом
    Cfraction operator+(int value);
    Cfraction operator-(int value);
    Cfraction operator*(int value);
    Cfraction operator/(int value);
    Cfraction& operator+=(int value);
    Cfraction& operator-=(int value);
    Cfraction& operator*=(int value);
    Cfraction& operator/=(int value);
    Cfraction& operator++();
    Cfraction& operator--();
    Cfraction operator++(int);
    Cfraction operator--(int);

    // Операции с Cfraction
    Cfraction operator+(const Cfraction& cfraction);
    Cfraction operator-(const Cfraction& cfraction);
    Cfraction operator*(const Cfraction& cfraction);
    Cfraction operator/(const Cfraction& cfraction);
    Cfraction& operator+=(const Cfraction& cfraction);
    Cfraction& operator-=(const Cfraction& cfraction);
    Cfraction& operator*=(const Cfraction& cfraction);
    Cfraction& operator/=(const Cfraction& cfraction);

    operator double();

    Cfraction& operator()(int numerator, int denominator = 1);

    // Методы получения числения и знаминателя
    int getNumerator();
    int getDenominator();

    // Операции сравнения
    bool operator==(const Cfraction& cfraction);
    bool operator!=(const Cfraction& cfraction);
    bool operator<(Cfraction& cfraction);
    bool operator>(Cfraction& cfraction);
    bool operator<=(Cfraction& cfraction);
    bool operator>=(Cfraction& cfraction);

    // Оператор приведения к string, для удобства
    operator std::string();
private:
    int numerator;
    int denominator;
};


#endif //CFRACTION_CFRACTION_H
