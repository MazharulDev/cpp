#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    cout << min(x,y) << endl;
    cout << max(x,y) << endl;

    cout << min({4,5,7,2}) << endl;
    cout << max({34,3,5,64,3}) << endl;
    swap(x,y);

    cout << x << " " << y << endl;
    return 0;
}