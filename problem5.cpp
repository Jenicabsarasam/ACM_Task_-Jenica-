
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        long long largest = -1;  
    while (n % 2 == 0) 
    {
        largest = 2;
        n /= 2;
    }
    for (long long i = 3; i <= sqrt(n); i += 2) 
   {
        while (n % i == 0) 
       {
            largest = i;
            n /= i;
        }
    }
    if (n > 2) 
        largest = n;
  
    if (largest == -1) 
        cout << "1"<<"\n";
    else 
        cout << largest <<"\n";
 
    
    }
    return 0;
}
