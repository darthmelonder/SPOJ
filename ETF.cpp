#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    long int t,n,i,l;
    long long int ans;
    scanf ("%ld",&t);
    while (t--)
    {
        scanf ("%ld",&n);
            ans=n;
            if (n%2==0)
            {
                while (n%2==0)
                    n/=2;
                ans-=ans/2;
            }
            for (i=3;i*i<=n;i+=2)
            {
                if (n%i==0)
                {
                    while (n%i==0)
                        n/=i;
                    ans-=ans/i;
                }
                if (n==1)
                    break;
            }
            if (n>1)
                ans-=ans/n;
        printf ("%ld\n",ans);
    }
    return 0;
}
