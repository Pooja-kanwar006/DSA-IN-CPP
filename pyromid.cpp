#include <iostream>
using namespace std;
int main()
{
    // half pyromid
    int rows;
    cout << "enter no of rows" << endl;
    cin>>rows;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // inverted half pyramid
    cout<<"inverted pyramid";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows-i ; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // full pyramid
    cout<<"full pyramid"<<endl;

    for (int i = 0; i < rows; i++)
    {   
        
            for(int space=1;space<rows-i;space++){
            cout<<" ";}
            //for alternate space
            for(int st=0;st<i+1;st++){
            cout<<"* ";}
            // for end space
            
        
        cout << endl;
    }
    // inverted full pyramid
    cout << "inverted full pyramid" << endl;

    for (int i = 0; i < rows; i++)
    {

    // for space
    for (int space = 0; space < i; space++)
    {
        cout << " ";
    }
        // star
        for (int sta = 0; sta < rows-i ; sta++)
        {
            cout << "* ";
        }
       
        
        

        cout << endl;
    }

    return 0;
}
