//
// Copyright 2017 Paalon
// License MIT

#include "Rational.hpp"

#include <iostream>
#include <cstdlib>
int pgcd(int m, int n) {
  if (m < n) return pgcd(n, m);
  int r = m % n;
  if (r == 0) {
    return n;
  }
  return pgcd(n, r);
}
int gcd(int m, int n) {
  int am = std::abs(m);
  int an = std::abs(n);
  int r = pgcd(an, am);
  if (n < 0) {
    r = -r;
  }
  return r;
}

Rational::Rational() {
}
Rational::Rational(int numarator, int denominator) {
  int g = gcd(numarator, denominator);
  numarator /= g;
  denominator /= g;
  this->numarator = numarator;
  this->denominator = denominator;
}
void Rational::print() {
  std::cout << numarator << "/" << denominator << std::endl;
}
Rational Rational::operator+(Rational r2) {
  int a1 = numarator;
  int b1 = denominator;
  int a2 = r2.numarator;
  int b2 = r2.denominator;
  int a = a1*b2 + a2*b1;
  int b = b1*b2;
  int g = gcd(a, b);
  a /= g;
  b /= g;
  Rational r(a, b);
  return r;
}

Rational Rational::operator-(Rational r2) {
  int a1 = numarator;
  int b1 = denominator;
  int a2 = r2.numarator;
  int b2 = r2.denominator;
  int a = a1*b2 - a2*b1;
  int b = b1*b2;
  int g = gcd(a, b);
  a /= g;
  b /= g;
  Rational r(a, b);
  return r;
}

Rational Rational::operator*(Rational r2) {
  int a1 = numarator;
  int b1 = denominator;
  int a2 = r2.numarator;
  int b2 = r2.denominator;
  int a = a1*a2;
  int b = b1*b2;
  int g = gcd(a, b);
  a /= g;
  b /= g;
  Rational r(a, b);
  return r;
}

Rational Rational::operator/(Rational r2) {
  int a1 = numarator;
  int b1 = denominator;
  int a2 = r2.numarator;
  int b2 = r2.denominator;
  int a = a1*b2;
  int b = b1*a2;
  int g = gcd(a, b);
  a /= g;
  b /= g;
  Rational r(a, b);
  return r;
}

int Rational::int_value() {
  int r = numarator / denominator;
  return r;
}

float Rational::float_value() {
  float r = (double)numarator / (double)denominator;
  return r;
}

double Rational::double_value() {
  double r = (double)numarator / (double)denominator;
  return r;
}
