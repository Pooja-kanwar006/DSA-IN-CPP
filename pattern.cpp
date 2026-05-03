// rantangle of *
#include <iostream> // 1. Preprocessor directive
using namespace std;

int main()
{
    // to print solid ractangle
        for (int i = 0; i <3; i++)
        {
            for (int j = 0; j <5; j++)
            {
                cout << "*"<<" ";

            };
            cout<<endl;

        }

    int side;
    cin>> side;
    // to print solid suare
    for(int row =0;row<side;row++){
        for(int col =0;col<side;col++){
        cout<<"* ";
        }
        cout<<endl;
    }
    // print hollow rectangle
    int rows,cols;
    cout << "enter row" ;
    cin >> rows;

    cout << "column" ;
    cin >> cols;
    for (int row = 1; row <= rows; row++)
    {

        for (int col = 1; col <= cols; col++)
        {
            if (row == 1 || row == rows  || col == 1 || col == cols )
            {
                cout << "* ";
            }
            else
            {
                cout << " ";  
                //  #somehow not working (col==cols part)
            }
        }
        cout << endl;
    }

    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            // Logic: Print '*' only for the first and last rows and columns
            if (i == 1 || i == rows || j == 1 || j == cols)
            {
                cout << "*";
            }
            else
            {
                cout << " "; // Empty interior
            }
        }
        cout << endl; // Move to the next row
    }

    int rows, cols;
    cout << "rows";
    cin >> rows;
    cout << "columns";
    cin >> cols;
    for (int i=0; i < rows; i++)
    {
        if (i == 0 || i == rows - 1)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << "*";
            }
        }
        else
        {
            cout << "*";
            for (int k = 0; k < cols - 2; k++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0; // 4. Success statu
}