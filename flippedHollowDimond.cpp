#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "enter rows:";
    cin >> rows;
    for (int i = 0; i < (rows); i++)
    {
        // first half
        // 1.star
        for (int j = 0; j < rows - i ; j++)
        {
            cout << "*";
        }

        // 2.spaces
        for (int j = 0; j < i+1; j++)
        {
            cout << "  ";
        }
        // 3.star
        for (int j = 0; j < rows - i ; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    //2nd half
    for (int i = 0; i < (rows); i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < rows - i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout<<endl;
    }
}