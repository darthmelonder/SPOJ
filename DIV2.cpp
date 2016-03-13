#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
std::vector<bool>b(1000001,true);
std::vector<bool>c(1000001,true);
void Calcprimes()
{
    long int i,j,k;
    c[1]=false;
    c[2]=false;
    for (j=1,k=2*2;k<=1000000;j++,k=2*2*j)
        c[k]=false;
    k=1;
    for (i=3;i<1001;i+=2)
    {
        if (b[i]==true)
        {
          for (j=i*i;j<=1000000;j+=2*i)
            b[j]=false;
          for (j=1,k=i*i;k<=1000000;j++,k=i*i*j)
            c[k]=false;
        }
    }
    for (j=3;j<=1000000;j+=2)
        if (b[j]==true)
          c[j]=false;
}
int main()
{
    long int i,count1=0;
    Calcprimes();
    for (i=2;i<=1000000;i++)
        if (c[i]==true)
       {
        count1++;
        if (count1%108==0)
            printf ("%ld\n",i);
       }
    return 0;
}
