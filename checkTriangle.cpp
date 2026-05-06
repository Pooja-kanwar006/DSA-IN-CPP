#include <iostream>
using namespace std;
int main()
{
cout<<"enter side 1"<<endl;
int side1;
int side2;
int side3;
cin>>side1;
cout << "enter side2" << endl;
cin>>side2;
cout << "enter side 3" << endl;
cin>>side3;

if(side1+side2>side3 && side1+side3>side2 && side2+side3>side1){
 cout<<"it is a valid triangle";
}
else
{
    cout << "it is not a valid triangle";
}
}