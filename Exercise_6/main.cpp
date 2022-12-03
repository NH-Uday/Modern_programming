#include<stdio.h>
#include<string.h>
#include<conio.h>
#include <iostream>

using namespace std;

class Book
{
	private:
	string bookTitle;
	string Author;
	string Borrower;

	public:
    Book(string title, string author, string borrow){
        bookTitle=title;
        Author=author;
        Borrower=borrow;
    };

    void print();
    void borrowed(string bookname);
    void returned();
};
	void Book :: borrowed(string b)
	{
        if(bookTitle == b){
            cout<<"Borrowing possible \n";
        }
        else
        {
            cout<<"Borrowing not possible \n";
        }
	}
	void Book :: returned()
	{
        string bookname= "Twilight";

        if (bookname.compare("Twilight") == 0)
		cout << "Please return the book.\n" << endl;
        else
		cout<<"Book was returned.\n";

	}
	 void Book :: print()
	{
        cout<<bookTitle<<"\n"<<Author<<"\n"<<Borrower<<endl;
	}


int main()
{
	Book b1("Harry potter","J.K. Rowling","No");
	b1.print();
	b1.borrowed("Harry potter");
	Book b2 ("Lord of the ring","J.R.R. Tolkien","No");
	b2.print();
	b2.borrowed("Twilight");
	b2.returned();

	getch();
	return 0;
}
