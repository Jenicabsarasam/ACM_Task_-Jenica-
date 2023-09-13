#include <iostream>
using namespace std;
int main()
{
    long int t;
    cin >> t;
    for(long int a0 = 0; a0 < t; a0++)
  {
    long long int n,num,term3,term5,term15,sum,sum3,sum5,sum15;
    cin>>num;
    n=num-1;
    term3=n/3;
    term5=n/5;
    term15=n/15;
    sum3=(3*term3*term3+3*term3)/2;
    sum5=(5*term5*term5+5*term5)/2;
    sum15=(15*term15*term15+15*term15)/2;
    sum=sum3+sum5-sum15;
    cout<<sum<<'\n';
}
    
    return 0;
}
