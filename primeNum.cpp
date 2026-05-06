#include <iostream>
using namespace std;
int main()
{

    int number;
    cout << "enter num" << endl;
    cin >> number;
    if (number == 1)
    {
        cout << "entered number is not a prime number";
    }

    else if (number == 2)
    {
        cout << "entered number is a prime number";
    }
    else
    {
        if (number % 2 == 0)
        {
            cout << "entered number is not a prime number"<<endl;
        }
        else
        {
            cout << "entered number is a prime number"<<endl;
        }
    }

cout<<endl;
// method 2
   bool Prime = 1;
  

    for (int i = 2; i < number; i++)
    {

        if ((number % i) == 0)
        {
            Prime = 0;
        }
        
    }
    if (Prime)
    {
        cout << "prime h bhai";
    }
    else
    {
        cout << "na bhai ";
    }

    return 0;
}