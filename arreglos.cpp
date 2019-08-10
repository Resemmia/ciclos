#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int n,i=0,x;
   cin>>n;
   int a[n];

   while(i<n)
   {
       cin>>x;
       a[i]=x;
       i++;
   }
   i=0;
   while(i<n)
   {
       cout<<a[i]<<" ";
       i++;
   }



    return 0;
}
