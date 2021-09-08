#include <bits/stdc++.h>
using namespace std;

void rightTriangle()
{
    for (int i = 1; i <= 5; ++i)
    {
        for (int j = 5; j > i; --j)
        {
            cout << " ";
        }

        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void downTriangle()
{
    for (int i = 1; i <= 5; ++i)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void rightDownTriangle()
{
    for (int i = 1; i <= 5; ++i)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }

        for (int j = 5; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void hollowRectangle()
{
    for (int i = 1; i <= 5; ++i)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i == 1 || i == 5 || j == 1 || j == 5)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
            cout << endl;
    }
}

void hollowDowntraingle() {
    for (int i = 5; i >=1; --i)
    {
        for (int j = 1; j <=5; j++)
        {
            if (i==5 || j==1 || j==i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            
        }
        cout << endl;
        
    }
    
}

int main()
{
    // rightTriangle();
    // downTriangle();
    // rightDownTriangle();
    // hollowRectangle();
    // hollowDowntraingle();
}
