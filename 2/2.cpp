#include<bits/stdc++.h>
using namespace std;


int main() {
    cout<< 7/2<< endl;
    cout<< 7/2.5 <<endl;
    //calculation always done in higher data type
    //double > float > long long int > long int > int > characters
    cout << 'c' +1 <<endl; //it will increase the ascii value of c by 1
    // int a = 3/2.0;
    double a = 3/2.0;
    cout << a << endl;
    cout << 7/2 *3 <<endl;
    cout << 3 * 7/2 <<endl;

    // int, char , long int, long long int, float, double

    //ranges

    // ~10^9 < int < 10^9
    // ~10^12 < long int < 10^12
    // ~10^18 < long long int < 10^18

    //overflow

    // int b = 100000;
    // int c = 100000;
    // int d = b*c;
    // long int b = 100000;
    // long int c = 100000;
    // long int d = b*c;
    int b = 100000;
    int c = 100000;
    // long int d = b*c;
    long int d = b* 1LL *c;
    // double b = 100000;
    // double c = 100000;
    // double d = b*c;
    // cout << fixed << setprecision(0)<<d << endl; fixed is used to remove scientific notation, setprecision is used to show the no. of digits after decimal
    cout << d << endl;
    int mx = INT_MAX;
    cout << mx<<endl;
    cout << mx + 1<<endl;
}