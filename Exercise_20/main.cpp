#include <iostream>
#include <string>
#include <locale>

using namespace std;
class Address{

private:
    string street;
    string houseNumber;
    string postCode;
    string city;
    string country;
public:
    Address(string s="Max-Horkheimer Straße",string h="16",string p="42119",string ct="Wuppertal",string cn="Deutschland") : street{s},houseNumber{h},postCode{p},city{ct},country{cn}{}

    string getstreet() {return street; }
    string gethouseNumber() {return houseNumber; }
    string getpostCode() {return postCode; }
    string getcity(){return city; }
    string getcountry() {return country; }
    friend ostream& operator<<(ostream& os, Address& a);
};
class Person : public Address{
private:
    string givenName;
    string familyName;
public:
    Person(string gn,string fn){
        givenName=gn;
        familyName=fn;
    }
    void setgivenName(string gn) {givenName=gn; }
    void setfamilyName(string fn) {familyName=fn; }
    string getgivenName() {return givenName; }
    string getfamilyName() {return familyName; }

    friend ostream& operator<<(ostream& os, Person& p);

    void moveTo(){
        cout<<givenName<<" "<<familyName<<" moves to "<<Address::getstreet()<<" "<<Address::gethouseNumber()<<" "<<Address::getpostCode()<<" "<<Address::getcity()<<" "<<Address::getcountry()<<endl;
    }
};

ostream& operator<<(ostream& os, Address& a){
    return os <<"Street = "<<a.street<<" houseNumber = "<<a.houseNumber<<" Postcode= "<<a.postCode<<" City = "<<a.city<<" Country = "<<a.country<<endl;
}
ostream& operator<<(ostream& os, Person& p){
    return os <<"Given name = "<<p.givenName<<" Family name = "<<p.familyName<<endl;
}

int main()
{
    Address a1;
    cout<<a1<<endl;
    Person p1("Nahin","Uday");
    cout<<p1<<endl;
    Person p2("Fady","Azer");
    cout<<p2<<endl;
    p1.moveTo();
    p2.moveTo();
}
