#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,x,i,j,k,l,m;
    scanf ("%lld",&t);
    while (t--)
    {
       scanf ("%lld",&n);
       i=0;
       if (n<=30)
       j=10*n;
       else j=n;
       l=INT_MAX;
       m=0;
       double e=2.71828182845904;
       double pi=3.14159265358979;
       while (i<j){
            k=(i+j)/2;
            if (l==k)
                break;
       double de=sqrt (pi*2*k);
       double df=(double)(k/e);
       de=(double)((double)log(de)/log(10));
       df=(double)((double)log(df)/log(10));
       df*=k;
       de=(double)de+df;
       x=ceil(de);
       if (x>n)
        j=k;
       else{
        i=k;
        m=max(m,k);}
       l=k;
       }
       printf ("%lld\n",m);
    }
    return 0;
}
