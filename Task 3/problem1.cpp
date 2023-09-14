#include <iostream>
using namespace std;
int sumOfOdd(int a[]);
int main()
{
int a[100],i,total;
cout<<"Enter the elements";
for(i=0;i<100;i++)
cin>>a[i];
total=sumOfOdd(a);
cout<<"Sum of elements is : "<<total;
return 0;
}
int sumOfOdd(int a[])
{
int i,s=0;
for(i=0;i<100;i++)
if(a[i]%2==1)
{s=s+a[i];}
return s;
}