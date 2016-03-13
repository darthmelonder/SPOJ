#include <iostream>
using namespace std;
const int INF = 0x7fffffff;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,r;
    long int a[52],i,j,c,b,min,d,p;
    while (1)
    {
        cin>>n>>r;
        if (n==0 && r==0)
            break;
        for (i=0;i<n;i++)
        {
            cin>>a[i];
            a[i]*=10;
        }
        b=0;d=1;
        for (i=1;i<=r;i++)
        {
            min=INF;
            for (j=0;j<n;j++)
           {
            cin>>c;
            if (c)
            {
             p=a[j]/c;
            if (min>p)
                min=p;
            }
           }
            if (min==INF)
            continue;
           if (b<min)
           {
            b=min;
            d=i;
           }
        }
       cout<<d<<" "<<b<<endl;
     }
     return 0;
}
