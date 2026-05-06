#include <iostream>
using namespace std;
int main(){

int number ;
cout<<"enter num:"<<endl;
cin>>number;
if(number==0){
cout<<"factorial is : "<<number<<endl;}
else if(number==1){
cout<<"factorial is: "<<number<<endl;}
else{
int fac=1;
for(int i =1;i<=number;i++){
fac*=i;
}
cout<<"factorial is: "<<fac<<endl;
}

return 0;}