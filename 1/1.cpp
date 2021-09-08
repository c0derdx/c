#include<bits/stdc++.h>
using namespace std;

int main() {
    cout << "Hello " <<" My name is Nik" << endl;
    char c = 'a';//single character only
    char g  = 'g';//single character only
    cout << (int) c <<endl; //typecasting converting char to int it will print the ascii value of c
    cout << c-g << endl;
    int a = 3;
    double b = 3.5;
    //long long int, long long
    // bool d = false;
    // bool d = 123;
    //in c ++ every number except 0 is true
    bool d = 0;
    cout << c << " " << a << " " << b << " " << d << endl;
    cout << a<< endl;
    cout << a++<< endl;
    cout << a<< endl;
    cout << ++a<< endl;
    //input
    cin >> a;
    cout << a << endl ;
    cin >> a >> b >> c;
    cout << a << " " << b << " " <<c;
}
