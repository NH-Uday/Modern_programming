#include <iostream>

using namespace std;

class Book{
    private:
    string title;
    string author;
    string borrower;

    public:
        Book(string t,string a) : title{t},author{a},borrowe{} {}
        void borrowed(string b);
        void returned();
        void print();

};
void Book::borrowed(string b){
    if(borrowed.empty())
    borrower(b);
    else
        cout<<"Error book is already borrowed"<<endl;
}
void Book::returned(){
    if(!borrowed.empty())
        borrower.clear();
    else
        cout<<"Error book is not borrowed"<<endl;
}
void Book::print(){
    if(!borrowed.empty())
        borrower.clear();
    else
        cout<<"Error book is not borrowed"<<endl;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
