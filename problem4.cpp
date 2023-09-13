#include <iostream>
#include<vector>
using namespace std;
int main()
{
    long int t;
    cin >> t;
    for(long int a0 = 0; a0 < t; a0++)
    {
        long int n;
        cin >> n;
        vector<long int> ar;
        ar.push_back(1);
        ar.push_back(2);
        long int i,sum=2,nextTerm=0;
        for(i=2;ar[i-1]+ar[i-2]<n;i++)
        {
          nextTerm=ar[i-1]+ar[i-2];
          if (nextTerm%2==0)
          sum=sum+nextTerm;
          ar.push_back(nextTerm);
        } 
        cout<<sum<<"\n";
        
    }
    return 0;
}
