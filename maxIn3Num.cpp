#include <iostream>
using namespace std;
int main()
{
    cout << "enter  1st num" << endl;
    int a;
    int b;
    int c;
    cin >> a;
    cout << "enter 2nd num" << endl;
    cin >> b;
    cout << "enter  3 num" << endl;
    cin >> c;
    if (a > b && a > c)
    {
        cout << "max num: " << a << endl;
    }
    else if (b > c && b > a)
    {
        cout << "max num: " << b << endl;
    }
    else if (c > a && c > b)
    {
        cout << "max num: " << c << endl;
    }
    
}
