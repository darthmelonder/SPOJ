#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
using namespace std;
long int a[60000001];
std::vector <bool> b(100000001,true);
long int  Calcprimes ()
{
    long int i,j,k,l;
    a[0]=2;
    k=1;
    for (i=3;i<=10000;i+=2)
    {
        if (b[i]==true)
        {
            for (j=i*i;j<=100000000;j+=(2*i))
                b[j]=false;
        }
    }
    for (j=3;j<=100000000;j+=2)
     if (b[j]==true)
        a[k++]=j;
    return k;
}
long int Binarysearch (long int x,long int e)
{
    long int d=0,f=e;
    while (d<=e)
    {
        if (x<a[d])
            return d-1;
        if (x>a[e])
            return e;
        long int mid=(d+e)/2;
        if (x==a[mid])
            return mid;
         if (x<a[mid])
            e=mid-1;
         if (x>a[mid])
            d=mid+1;
    }
    return f;
}
int main()
{
  long int x,i,d,e;
  double b;
   e=Calcprimes();
  while (1)
  {
     scanf ("%ld",&x);
     if (x==0)
        break;
       b=x;
       d=Binarysearch(x,e-1);
       d++;
       b/=(double)log(x);
        double c;
          if (b>d)
           c=b-d;
          else
           c=d-b;
          c=(double)c/d;
          c*=100;
      printf ("%.1f\n",c);
  }
  return 0;
}
