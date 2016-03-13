#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;
std::vector<bool>b(100000001,true);
std::vector<long int>a(10000001,0);
void Calcprimes ()
{
    long int i,j,k;
    a[0]=2;
    k=1;
    for (i=3;i<=10000;i+=2)
    {
        if (b[i]==true)
        {
          for (j=i*i;j<=100000000;j+=2*i)
            b[j]=false;
        }
    }
    for (i=3;i<=100000000;i+=2)
        if (b[i]==true)
          a[k++]=i;
}
int main()
{
    long long int n;
    long int count1,i,l;
    Calcprimes();
    while (1)
    {
        scanf ("%lld",&n);
        if (n==0)
            break;
        if (n==1)
        {
            printf ("1^1\n");
            continue;
        }
        l=sqrt(n);
        for (i=0;a[i]<=l;i++)
        {
            if (n%a[i]==0)
            {
                count1=0;
                while (n%a[i]==0)
                {
                    count1++;
                    n/=a[i];
                }
                printf ("%ld^%ld ",a[i],count1);
            }
            if (n==1)
                break;
        }
        if (n>1)
            printf ("%lld^1",n);
        printf ("\n");
    }
    return 0;
}
