#include<iostream>
using namespace std;
int simpleArraySum(int ar[],int n);
int main()
{
  int i,n;
  cout<<"Enter the no.of elelments";
  cin>>n;
  int ar[n];
  cout<<"Enter the elements of array";
  for(i=0;i<n;i++)
  cin>>ar[i];
  cout<<"Sum is  "<<simpleArraySum(ar,n);

}
int simpleArraySum(int ar[],int n)
{ 
    int i,sum=0;
    for(i=0;i<n;i++)
    sum=sum+ar[i];
    return sum;
}
