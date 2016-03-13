#include <iostream>
#include <cstdio>
using namespace std;
long int a[1001][1001];
int main()
{
    ios_base::sync_with_stdio(false);
    long int n,i,j,k=0;
    long long int sum,sum1,sumr[1001],sumc[1001];
    while (1)
    {
        scanf ("%ld",&n);
        if (n==0)
            break;
        for (i=0;i<n;i++)
        {
            sumc[i]=0;
            sumr[i]=0;
        }
        sum=0;
        for (i=0;i<n;i++)
        {
            for (j=0;j<n;j++)
            {
                scanf ("%ld",&a[i][j]);
                sum+=a[i][j];
                sumc[j]+=a[i][j];
                sumr[i]+=a[i][j];
            }
        }
        sum1=0;
        for (i=0;i<n;i++)
        {
            if (sumr[i]>sumc[i])
                sum1+=sumr[i]-sumc[i];
        }
        k++;
        printf ("%ld. %lld %lld\n",k,sum,sum1);
    }
    return 0;
}
