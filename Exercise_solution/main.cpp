#include <iostream>
#include <string>
using namespace std;

template <class T>
T fourth(T x){
T y = x*x;
return y*y;
};

template <>
string fourth(string x){
cout<< "DBG: template space"<<endl;
string y = x+x;
return y+y;
};


int main()
{
    int i{4};
    double d{1.01};
    string s{"abcde"};
    cout<<"i^4"<<fourth(i)<<endl;
    cout<<"d^4"<<fourth(d)<<endl;
    cout<<"s^4"<<fourth(s)<<endl;
}
