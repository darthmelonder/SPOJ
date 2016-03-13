#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
std::vector<bool>b(1000001,true);
long int a[500001];
void Calcprimes()
{
    long int i,j,k;
    b[1]=false;
    k=1;
    a[0]=2;
    for (i=3;i<=1000;i+=2)
    {
        if (b[i]==true)
        {
           for (j=i*i;j<=1000000;j+=2*i)
              b[j]=false;
        }
    }
    for (j=3;j<=1000000;j+=2)
        if (b[j]==true)
          a[k++]=j;
}
int main()
{
    long int i,j,n,count1,ans,d,count2=0;
    Calcprimes();
    for (i=3;i<=1000000;i++)
    {
        if (b[i]==true && i%2!=0)
            continue;
        n=i;
        ans=1;
        for (j=0;a[j]*a[j]<=n;j++)
        {
            if (n%a[j]==0)
            {
                count1=0;
                while (n%a[j]==0)
                {
                    count1++;
                    n/=a[j];
                }
                ans*=(count1+1);
            }
            if (n==1)
                break;
        }
        if (n>1)
          ans*=2;
        for (j=0;a[j]*a[j]<=ans;j++)
        {
            if (ans%a[j]==0)
                break;
        }
        if (ans%a[j]==0)
        d=ans/a[j];
        else
        continue;
        if ((b[d]==true && d%2!=0) && (d!=a[j]))
        {
            count2++;
            if (count2%9==0)
            printf ("%ld\n",i);
        }
    }
    return 0;
}
