#include<iostream>
class Polynomial {
public:
    int *degCoeff;      // Name of your array (Don't change this)
    // Complete the class
    int cap;
    Polynomial() {
        degCoeff = new int[1];
        cap = 1;
        for(int i=0; i<cap; i++) {
            degCoeff[i]=0;
        }
    }

    Polynomial(Polynomial const &p) {
        this->degCoeff = new int[cap];
        for(int i=0; i<cap; i++) {
            this->degCoeff[i]=p.degCoeff[i];
        }
    }

    void setCoefficient(int degree, int coeff) {
        if(degree>=cap) {
            int *newDegCoeff = new int[degree+1];
            for(int i=0; i<degree+1; i++) {
                if(i<cap)
                    newDegCoeff[i] = degCoeff[i];
                else
                    newDegCoeff[i] = 0;
            }
            delete[] degCoeff;
            degCoeff = newDegCoeff;
            cap=degree+1;
        }
        degCoeff[degree]=coeff;
    }

    void print() {
        for(int i=0; i<this->cap; i++) {
            if(degCoeff[i])
                std::cout<<degCoeff[i]<<"x"<<i<<" ";
        }
        std::cout<<"\n";
    }

    Polynomial operator+(Polynomial const &P) {
        Polynomial ans;
        int smol = (this->cap < P.cap) ? this->cap : P.cap;
        int bigg = (this->cap > P.cap) ? this->cap : P.cap;
        for(int i=0; i<smol; i++) {
            ans.setCoefficient(i, this->degCoeff[i] + P.degCoeff[i]);
        }
        if(bigg==this->cap) {
            for(int i=smol; i<bigg; i++) {
                ans.setCoefficient(i, this->degCoeff[i]);
            }
        }
        else {
            for(int i=smol; i<bigg; i++) {
                ans.setCoefficient(i, P.degCoeff[i]);
            }
        }
        return ans;
    }

    Polynomial operator-(Polynomial const &P) {
        Polynomial ans;
        int smol = (this->cap < P.cap) ? this->cap : P.cap;
        int bigg = (this->cap > P.cap) ? this->cap : P.cap;
        for(int i=0; i<smol; i++) {
            ans.setCoefficient(i, this->degCoeff[i] - P.degCoeff[i]);
        }
        if(bigg==this->cap) {
            for(int i=smol; i<bigg; i++) {
                ans.setCoefficient(i, this->degCoeff[i]);
            }
        }
        else {
            for(int i=smol; i<bigg; i++) {
                ans.setCoefficient(i, P.degCoeff[i]);
            }
        }
        return ans;
    }

    void operator=(Polynomial const &p) {
        for(int i=0; i<p.cap; i++) {
            setCoefficient(i, p.degCoeff[i]);
        }
    }

    Polynomial operator*(Polynomial const &p) {
        Polynomial ans;
        ans.setCoefficient((this->cap - 1)+(p.cap-1), (this->degCoeff[this->cap-1])*(p.degCoeff[p.cap-1]));
        for(int i=0; i<this->cap; i++) {
            for(int j=0; j<p.cap; j++) {
                if(ans.degCoeff[i]) {
                    ans.degCoeff[i+j]+=(this->degCoeff[i]*p.degCoeff[j]);
                }
                else {
                    ans.setCoefficient(i+j, this->degCoeff[i]*p.degCoeff[j]);
                }
            }
        }
        return ans;
    }
};