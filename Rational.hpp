// 有理数計算ライブラリ
// Rational Caliculation Light Library
// Copyright 2017 Paalon
// License MIT

#ifndef Rational_hpp
#define Rational_hpp

class Rational {
private:
    int numarator;
    int denominator;
public:
    Rational();
    Rational(int numarator, int denominator);

    Rational operator+(Rational r2);
    Rational operator-(Rational r2);
    Rational operator*(Rational r2);
    Rational operator/(Rational r2);
    Rational operator+=(Rational r2);
    Rational operator-=(Rational r2);
    Rational operator*=(Rational r2);
    Rational operator/=(Rational r2);
    Rational operator<(Rational r2);
    Rational operator>(Rational r2);
    Rational operator==(Rational r2);
    Rational operator!=(Rational r2);
    Rational operator<=(Rational r2);
    Rational operator>=(Rational r2);

    void print();
    int int_value();
    float float_value();
    double double_value();
};

#endif /* Rational.hpp */
