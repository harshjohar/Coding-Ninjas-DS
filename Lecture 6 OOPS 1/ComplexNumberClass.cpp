/**********
 
Following is the main function we are using internally.
Refer this for completing the ComplexNumbers class.
 
 
int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }
    
}
 
 ************/


class ComplexNumbers {
    // Complete this class
public:
	int r, i;    
    ComplexNumbers(int real, int imag) {
        this->r = real;
        this->i = imag;
    }
    
    void plus(ComplexNumbers c) {
        this->r += c.r;
        this->i += c.i;
        return;
    }
    
    void multiply(ComplexNumbers c) {
        int tr, ti;
        tr = this->r*c.r - this->i*c.i;
        ti = (this->r*c.i) + (this->i*c.r);
        this->r=tr;
        this->i=ti;
        // cout<<this->i<<endl;
        return;
    }
    
    void print() {
        if(this->i>0){
            cout<<this->r<<" + i"<<this->i;
        }
        else {
            cout<<this->r<<" - i"<<(this->i)*(-1);
        }
    }
};