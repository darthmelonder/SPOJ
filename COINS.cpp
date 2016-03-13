#include <iostream>
#include <cmath>
using namespace std;
long long int a[1000001];
long long int max (long long int a,long long int b)
{
    if (a>b)
        return a;
    else
        return b;
}
long long int Chngcoin (long long int n)
{
    if (n<12)
     return n;
    if (n<1000001 && a[n])
    return (a[n]);
    else if (n<1000001)
    {
        a[n]=max(n,(Chngcoin(n/2)+Chngcoin(n/3)+Chngcoin(n/4)));
       return (a[n]);
    }
    else
        return (max(n,(Chngcoin(n/2)+Chngcoin(n/3)+Chngcoin(n/4))));
}
int main()
 {
     long long int n,sum,i;
     while ((cin>>n)>0)
     {
         cout<<Chngcoin(n)<<endl;
     }
     return 0;
 }
