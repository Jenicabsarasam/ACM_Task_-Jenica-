#include<iostream>
using namespace std;
int main()
{
  int i,n,sumOfMultiples=0;
  cout<<"Enter the no.of elements";
  cin>>n;
  for(i=1;i<n;i++)
    if((i%3==0)||(i%5==0))
        sumOfMultiples=sumOfMultiples+i;  
cout<<"Sum of multiples of 3 or 5 less than "<<n<<" is "<<sumOfMultiples;
}