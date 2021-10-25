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

void parallelogram() {
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j <=i; ++j)
        {
            cout << " ";
        }
        
        for (int j = 1; j <= 5; ++j)
        {
            cout << "*";
        }

        cout <<endl;
        
    }
    
}

void mirroredParallelogram() {

    for (int i = 1; i <=5; ++i)
    {
        for (int j = 5; j >i; --j)
        {
            cout << " ";
        }

        for (int j = 1; j<= 5; j++)
        {
            cout << "*";
        }

        cout <<endl;
        
        
    }

}

void pyramid(){
    for (int i = 1; i <=5; ++i)
    {
        for (int j = 5; j >i; --j)
        {
            cout << " ";
        }

        for (int j = 1; j<= 2*i - 1; j++)
        {
            cout << "*";
        }

        cout <<endl;      
        
    }
    
}

void invertedPyramid(){
    for (int i = 0; i <5; ++i)
    {
        for (int j = 1; j <=i; ++j)
        {
            cout << " ";
        }

        for (int j = 5; j>= 2*i-3; j--)
        {
            cout << "*";
        }

        cout <<endl;      
        
    }
    
}

void pascalTriangle(){
        
}

void butterflyPattern() {
    int n;
    cin>> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<"* ";
        }
        for (int j = 1; j<= 2*n-2*i; j++)
        {
            cout<<"  ";
        }
        for (int j = 1; j <=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<"* ";
        }
        for (int j = 1; j<= 2*n-2*i; j++)
        {
            cout<<"  ";
        }
        for (int j = 1; j <=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
}

void questionPattern() {
    int n;
    cin>> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<" # ";
        }
        for (int j = 1; j<= 2*n-2*i; j++)
        {
            cout<<" * ";
        }
        for (int j = 1; j <=i; j++)
        {
            cout<<" # ";
        }
        cout<<endl;
    }    
}

int main()
{
    // rightTriangle();
    // downTriangle();
    // rightDownTriangle();
    // hollowRectangle();
    // hollowDowntraingle();
    // parallelogram();
    // mirroredParallelogram();
    // pyramid();
    // invertedPyramid();
    // pascalTriangle();
    // butterflyPattern();
    questionPattern();
}
