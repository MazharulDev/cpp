#include<iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    cin.ignore(); // not show s variable in the print, bcz after x then enter. so this enter ignore this line;
    char s[100]; // if space, then stop print others end
    cin.getline(s,100);// show include space
    cout << x << endl << s << endl;
    return 0;
}