#include <iostream>

using namespace std;


int main()
{
    int space, l;

    cout <<"Enter the number of lines: ";
    cin >> l;

    for(int i = 1, k = 0; i <= l; ++i, k = 0)
    {
        for(space = 1; space <= l-i; ++space)
        {
            cout <<"  ";
        }

        while(k != 2*i-1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }
    return 0;
}