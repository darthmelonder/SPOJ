#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
std::vector<bool>b(1000001,true);
long int a[600001];
long int  Calcprimes ()
{
    long int i,j,k;
    a[0]=2;
    k=1;
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
    return k;
}
int main()
{
    long int arr,b,k,t,c[8][2],d[8][2],i,j,p,q,x,sum;
    k=Calcprimes();
    t=0;
    while (1)
    {
        t++;
       scanf ("%ld %ld",&arr,&b);
       if (arr==0)
        break;
    p=q=0;
      for (i=0;i<k;i++)
      {
          if (arr%a[i]==0)
          {
              c[p][0]=a[i];
              c[p][1]=0;
              while (arr%a[i]==0)
              {
                  c[p][1]++;
                  arr/=a[i];
              }
              p++;
          }
          if (b%a[i]==0)
          {
              d[q][0]=a[i];
              d[q][1]=0;
              while (b%a[i]==0)
              {
                  d[q][1]++;
                  b/=a[i];
              }
              q++;
          }
          if (arr==1 && b==1)
            break;
      }
      x=sum=0;
      i=j=0;
      while (i<p && j<q)
      {
          x++;
          if (c[i][0]==d[j][0])
          {
              if (c[i][1]>d[j][1])
                sum+=c[i][1]-d[j][1];
              else
                sum+=d[j][1]-c[i][1];
            i++;
            j++;
          }
          else
          {
              if (c[i][0]>d[j][0])
              {
                  sum+=d[j][1];
                  j++;
              }
              else
              {
                  sum+=c[i][1];
                  i++;
              }
          }
      }
      while (i<p)
      {
          sum+=c[i][1];
          i++;
          x++;
      }
      while (j<q)
      {
          sum+=d[j][1];
          j++;
          x++;
      }
   printf ("%ld. %ld:%ld\n",t,x,sum);
   }
   return 0;
}
