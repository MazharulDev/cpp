#include<iostream>
using namespace std;

int main()
{
    int x;
    char b;
    cin >> x >> b;
    cout << x << endl << b << endl;
    int ascii = b;
    cout << ascii << endl;

    cout << (int)b << endl; // easy way for type casting


    return 0;
}