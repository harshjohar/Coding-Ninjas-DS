#include<iostream>
using namespace std;

class Fraction {
    int numerator;
    int denominator;
public:
    Fraction(int num, int denom) {
        this->numerator = num;
        this->denominator = denom;
    }

    int getNumerator() {
        return this->numerator;
    }

    int getDenominator() {
        return this->denominator;
    }

    int setNumerator(int num) {
        this->numerator = num;
    }

    int setDenominator(int den) {
        this->denominator = den;
    }

    void print() {
        cout<<this->numerator<<" / "<<denominator<<endl;
    }

    void simplify() {
        int gcd = 1;
        int j = min(this->numerator, this->denominator);
        for(int i=0; i<=j; i++) {
            if(this->numerator % i ==0 and this->denominator%i==0) {
                gcd = i;
            }
        }
        this->numerator /= gcd;
        this->denominator /= gcd;
    }

    void addin(Fraction const &f2) {
        int lcm = denominator * f2.denominator;
        int x = lcm/denominator;
        int y = lcm/f2.denominator ;
        
        int num = x*numerator + y*(f2.numerator);

        numerator = num;
        denominator = lcm;
        simplify();
    }

    Fraction add(Fraction const &f2) {
        int lcm = denominator * f2.denominator;
        int x = lcm/denominator;
        int y = lcm/f2.denominator ;
        
        int num = x*numerator + y*(f2.numerator);

        Fraction F(num, lcm);
        F.simplify();
        return F;
    }

    Fraction multiply(Fraction const &f2) {
        int num = numerator*f2.numerator;
        int den = denominator*f2.denominator;
        Fraction F(num, den);
        F.simplify();
    }

    Fraction operator+(Fraction const &f2) {
        int lcm = denominator * f2.denominator;
        int x = lcm/denominator;
        int y = lcm/f2.denominator ;
        
        int num = x*numerator + y*(f2.numerator);

        Fraction F(num, lcm);
        F.simplify();
        return F;
    }

    Fraction operator*(Fraction const &f2) {
        int num = numerator*f2.numerator;
        int den = denominator*f2.denominator;
        Fraction F(num, den);
        F.simplify();
    }

    bool operator==(Fraction const &f2) {
        // equivalent fractions are not equal here
        return (numerator==f2.numerator and denominator==f2.denominator);
    }

    // pre increment
    Fraction& operator++() {
        numerator+=denominator;
        simplify();
        return *this;
    }
    // post increment
    Fraction& operator++(int) {
        Fraction fnew(numerator, denominator);
        numerator+=denominator;
        simplify();
        fnew.simplify();
        return fnew;
    }
    // += operator
    void operator+=(Fraction const &f2) {
        int lcm = denominator * f2.denominator;
        int x = lcm/denominator;
        int y = lcm/f2.denominator ;
        
        int num = x*numerator + y*(f2.numerator);

        numerator = num;
        denominator=lcm;
        simplify();
    }
};