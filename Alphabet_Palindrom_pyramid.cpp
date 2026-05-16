#include <iostream>
using namespace std;
int main()
{

    int rows;
    cout << "enter row";

    cin >> rows;
   
   
    for (int i = 0; i < rows; i++)
    {
        int half = (2 * i / 2);
        char alpha = 65;
        for (int col = 0; col < (2*i+1); col++)
        {
            if (col < half)
            {

                cout << alpha;
                alpha++;
            }
            else
            {
               
                cout << alpha;
                if(col!=i*2){alpha--;}
                 
            }
        }
        cout << endl;
    }
}