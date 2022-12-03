#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()
{
    char input[20];
    int sign, n, i;
    float result, nr, aux, c;
    while (1)
    {
        cout << "input:" << endl;
        scanf("%s", input);
        n = strlen(input);
        result, nr, aux, c =0;
        sign = 1, n, i = 0;
        while (i<n)
        {
            while (input[i] >= '0'&&input[i] <= '9')
            {
                nr = nr * 10 + (input[i] - '0');
                i++;
            }
            switch (input[i])
            {
            case '+': {

                if (!(input[i - 1] == '*') && !(input[i - 1] == '/'))
                {
                    if (c == 1)
                    {
                        result += aux*nr*sign;
                        aux = 0;
                    }
                    else if (c == 2)
                    {
                        result += aux / nr*sign;
                        aux = 0;
                    }
                    else
                    {
                        result += nr*sign;
                    }
                    nr = 0;
                    c = 0;
                }

                sign = 1;

                break;
            }
            case '-': {
                if (!(input[i - 1] == '*') && !(input[i - 1] == '/'))
                {
                    if (c == 1)
                    {
                        result += aux*nr*sign;
                        aux = 0;
                    }
                    else if (c == 2)
                    {
                        result += aux / nr*sign;
                        aux = 0;
                    }
                    else
                    {
                        result += nr*sign;
                    }
                    c = 0;
                    nr = 0;
                }
                sign = -1;
                break;
            }
            case '*': {
                if (!aux)
                {
                    aux = nr*sign;
                }
                else if (c == 2)
                {
                    aux /= nr*sign;
                }
                else
                {
                    aux *= nr*sign;
                }
                c = 1;
                nr = 0;
                sign = 1;
                break;
            }
            case '/': {
                if (!aux)
                {
                    aux = nr * sign;
                }
                else if (c == 1)
                {
                    aux *= nr*sign;
                }
                else
                {
                    aux /= nr*sign;
                }
                c = 2;
                nr = 0;
                sign = 1;
                break;
            }
            default:;
            }
            if (i >= (n - 1))
            {
                if (c == 1)
                {
                    result += aux*nr*sign;
                }
                else if (c == 2)
                {
                    result += aux / nr*sign;
                }
                else
                {
                    result += nr*sign;
                }
            }
            i++;
        }
        cout << "=" << result << endl;
        system("pause");
        system("cls");

    }

}
