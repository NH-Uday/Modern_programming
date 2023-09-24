#include <iostream>

using namespace std;

enum class carUsage{privateCar,company,taxi};

class vehicle{
protected:
    int yearOfmanufacture;
    int numberOfseats;
public:
    vehicle(int yom,int s):{yearOfmanufacture{yom},numberOfseats{s}{}
};
class Motorvehicle : public vehicle{
protected:
    string licencePlatenumber;
    int enginePower;
public:
    Motorvehicle(int yom,int s,string lpn, int ep){vehicle{yom,s},licencePlatenumber{lpn},enginePower{ep}{}
};
/*ostream& operator <<(ostream&os, const vehicle& v){
            return os<<"vehicle: "<<"built in: "<<c.yearOfmanufacture<<endl;
}
ostream& operator <<(ostream&os, const car& c){
            return os<<"car: "<<"built in: "<<c.yearOfmanufacture<<endl;
}*/
ostream& operator <<(ostream&os, const car& c){
            os<<"car: "<<"built in: "<<c.yearOfmanufacture<<endl;
}
class car:public Motorvehicle{
private:
    carUsage kindOfusage;
public:
    car(int yom, int s, string lpn, int ep,carUsage cu):Motorvehicle{yom,s,lpn,ep},kindOfusage{cu}{
    }
    friend ostream operator<<(ostream&os, const car& c)
};
class bus:public vehicle{
private:
    int maxStanding;
public:
    bus(int yom,int s,int nc,int tg):vehicle{yom,s},numberOfcoaches{nc},trackgauge{tg}{}
};
class train:public vehicle{
private:
    int numberOfcoaches;
    int trackGauge;
};

int main()
{
    //carUsage cu;
    //cu=carUsage::taxi;
    //cout<<(int)cu<<endl;
    car c{2022,"W AB 2022"5,95,carUsage::privateCar};
}
