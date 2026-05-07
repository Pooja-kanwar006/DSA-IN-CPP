#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "enter no of rows: " << endl;
    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {if(i==0||j==0||j==rows-i-1){
        cout<<"* ";}else{cout<<"  ";}
        }cout<<endl;
    }
}