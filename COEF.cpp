#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n,k,b,a[15],i;
    long int ans;
    a[0]=a[1]=1;
    for (i=2;i<14;i++)
        a[i]=i*a[i-1];
    while (scanf("%d%d",&n,&k)==2)
    {
        ans=1;
        for (i=0;i<k;i++)
        {
            cin>>b;
            ans*=a[b];
        }
        ans=a[n]/ans;
        cout<<ans<<endl;
    }
    return 0;
}
