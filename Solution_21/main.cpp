#include <iostream>
#include <cmath>

using namespace std;
class Complex{
private:
    double re;
    double im;
public:
    Complex(double r=0,double i=0): re{r},im {i}{}
    double real() const {return re;}
    double imag() const {return im;}
    double abs() const {return sqrt(re * re +im * im);}
    friend ostream& operator<<(ostream& os, const Complex& c);
};
ostream& operator<<(ostream& os, const Complex& c){
    //os<<c.re<<'+'<<c.im<<'='<<endl;
    if(c.re != 0 || c.im == 0)
        os<<c.re;
    if(c.im != 0){
        if(c.im <0)
            os << '-';
            else if(c.re != 0)
            os<<'+';
        if (abs(c.im) != 1)
            os << abs(c.im);
        os<<'i';
    }
    return os;
}
int main()
{
    Complex c0;
    cout<<c0<<endl;
    Complex c1(3,4);
    cout<<c1<<endl;
    cout<<"="<<c1.real()<<'+'<<c1.imag()<<'i'<<endl;
    cout<<"abs(c1) ="<<c1.abs()<<endl;
}
