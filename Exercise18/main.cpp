#include<stdio.h>
#include<string.h>
#include<conio.h>
#include <iostream>

using namespace std;

class Glass
{
	private:
	unsigned int Volume;
	unsigned int Content;


	public:
    void setVolume(unsigned int v) {
      Volume = v;
    }
    int getVolume() {
      return Volume;
    }

    void setContent(unsigned int c) {
      Content = c;
    }
    int getContent() {
      return Content;
    }
    void print()
	{
        cout<<Volume<<"\n"<<Content<<endl;
	}
	void filln(unsigned int fi){
	    if(fi>Volume){
            cout<<"overflow"<<endl;
	    }else{
	        cout<<"Adjustable"<<endl;
	    }
	}
	int drink(unsigned int dr){
        unsigned int left;
        if(Content==0){
            cout<<"glass empty"<<endl;
        }
        else{
            left=Content-dr;
            cout<<left;
        }
	}
};


int main()
{
	Glass g1;
	Glass g2;
	g1.setVolume(100);
	g1.setContent(0);
	g2.setVolume(100);
	g2.setContent(70);
	g1.print();
	g1.filln(92);
	g1.filln(102);
	g1.drink(5);
	g2.drink(10);

	getch();
	return 0;
}
