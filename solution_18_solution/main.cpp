#include <iostream>

using namespace std;

class Glass{
private:
    unsigned int volume;
    unsigned int content;
public:
    Glass(unsigned int v=100,unsigned int c=100) : volume{v},content{c}
    {
        if(content > volume)
            cout<<"Error: wrong glass constructed"<<endl;
            content=volume;
    }
    void fillIn(unsigned int fi);
    unsigned int drink(unsigned int dr);
    unsigned int getVolume()const {return volume; }
    unsigned int getContent()const {return content; }

    void print() const;
    friend ostream& operator<<(ostream& os,const Glass& g);
};

unsigned int Glass::drink(unsigned int dr){
    if(dr>content)
        dr=content;
    content-=dr;
    return dr;

}

void Glass::fillIn(unsigned int fi){
    if(content+fi>volume)
        content=volume;
    else
        content+=fi;

}

void Glass::print() const
{
    cout<<*this<<endl;
    //cout<<"glass(volume= "<<volume<<", "<<"content= "<<content<<')'<<endl;
}
ostream& operator<<(ostream& os, const Glass& g){
    return os <<"glass (volume = "<<g.volume<<", "<<"content= "<<g.content<<')'<<endl;
}
int main()
{
    Glass g1{200,180};
    g1.print();
    cout<<g1<<endl;
    Glass g2{200,280};
    g2.print();
    Glass g3{200};
    g3.print();
    Glass g4;
    g4.print();
    g1.fillIn(10);
    cout<<"after filling in 10: "<<g1<<endl;
    g1.fillIn(400);
    cout<<"after filling 400: "<<g1<<endl;
    cout<<"try to drink"<<170<<", could drink"<<g1.drink(170)<<"now"<<g1<<endl;
}
