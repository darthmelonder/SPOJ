#include <iostream>
#include <cstring>
using namespace std;
int a[1000001];
int main()
{
    ios_base::sync_with_stdio(false);
    int t,c[2002];
    long int n,i,count;
    cin>>t;
    while (t--)
    {
        memset (c,0,sizeof(c));
        cin>>n;
        for (i=0;i<n;i++)
            cin>>a[i];
        if (n==1)
        {
            cout<<"YES"<<" "<<a[0]<<endl;
            continue;
        }
        if (n==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        for (i=0;i<n;i++)
            c[a[i]+1000]++;
        for (i=0;i<=2000;i++)
        {
            if (c[i]>n/2)
                break;
        }
        if (i>2000)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<" "<<i-1000<<endl;
    }
    return 0;
}
