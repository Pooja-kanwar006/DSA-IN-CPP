#include <iostream>
using namespace std;
int studentGrade(int marks)
{
    if (marks >= 90)
    {
        cout << "A";
    }
    else if (marks >= 80)
    {
        cout << "B";
    }
    else if (marks >= 70)
    {
        cout << "c";
    }
    else if (marks >= 60)
    {
        cout << "D";
    }
    else
    {
        cout << "F";
    }
}
int main()
{
    int marks;
    cout << "enter marks";
    cin >> marks;
    studentGrade(marks) ;
}