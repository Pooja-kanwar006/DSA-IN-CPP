#include <iostream>
using namespace std;
int main()
{
   int count;
   cout << "enter num";
   cin >> count;
//   using while loop
int i =count;
   while (i >= 1)
   {

      cout << i << endl;

      i--;
   }
// " using for loop"

for (int i = count; i >= 1; i--)
{
  
   cout << i << endl;
}

   return 0;
}