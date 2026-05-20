#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "enter rows:";
    cin >> rows;
    
    for (int i = 0; i < rows; i++)
    {
        
        int k = 0;
        for (int j = 0; j < rows - i - 1; j++)
        {
            
            cout << " ";
        }
        for (int j = 0; j < (i+1 ); j++)
        {
            
            cout << i + j+1;
            k = i + j ;
        }
        for (int j = k; k > 1; j--)
        {
            cout << k;
            k--;
            
        }
        cout<<endl;
    }
    return 0;
}