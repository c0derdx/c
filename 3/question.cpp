#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
    cin>>T;
while(T>0) {
int n;
    cin>> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
        }
        for (int j = 1; j<= 2*n-2*i; j++)
        {
            cout<<"#";
        }
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    T--; 
}

}