// Patterns: Observer
// author:  Holger Arndt
// version: 17.01.2023

#include <iostream>
#include <list>
#include <string>

using namespace std;

class Observer;

class Subject
{
private:
  list<Observer*> observers;
protected:
  Subject() {} // make this class abstract-like
public:
  void attach(Observer* obs) { observers.push_back(obs); }
  void detach(Observer* obs) { observers.remove(obs); }
  void notify();
};

class Stock : public Subject
{
private:
  string name;
  double price;
public:
  Stock(string n, double p) : name{n}, price{p} {}
  string getName() const { return name; }
  double getPrice() const { return price; }
  void setPrice(double p)
  {
    price = p;
    notify();
  }
};

class Observer
{
public:
  virtual void update() = 0;
  virtual ~Observer() {}
};

class Investor : public Observer
{
private:
  string name;
  const Stock* mystock;
public:
  Investor(string n, const Stock* st) : name{n}, mystock{st} {}
  virtual void update() override
  {
    cout << name << " was notified: New price for " << mystock->getName()
         << ": " << mystock->getPrice() << endl;
  }
};

void Subject::notify()
{
  for (auto o : observers)
    o->update();
}

int main()
{
  Stock tcom{"Deutsche Telekom", 19.06};
  Investor inv1{"Mr. Höttges", &tcom};
  tcom.attach(&inv1);
  Investor inv2{"Mr. Powell", &tcom};
  tcom.attach(&inv2);

  tcom.setPrice(19.86);
  tcom.setPrice(19.9);
}
