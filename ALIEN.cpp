#include <bits/stdc++.h>
using namespace std;
#define p pair <int,int>
#define pb push_back
#define ll long long
long long M=1e9+7;
ll arr[100100],cum[100100];
int main()
{
    ll i,j,t,k,n,m;
    scanf ("%lld",&t);
    while (t--)
    {
        scanf ("%lld %lld",&n,&m);
        for (i=0;i<n;i++)
            scanf ("%lld",&arr[i]);
        cum[0]=arr[0];
        for (i=1;i<n;i++)
            cum[i]=cum[i-1]+arr[i];
        int mini=INT_MAX;
        for (i=0;i<n;i++)
            if (cum[i]>m)
              break;
        if (i)
            mini=min (mini,cum[i-1]);
        int maxi=i;int sum=0;
        //cout<<i<<endl;
        if (mini==INT_MAX)
            i++;
        sum=arr[0];
        //cout<<"**"<<i<<endl;
        int count1=1;
        while (i<n){
            j=i;
        for (;i<n;i++)
            if (cum[i]-sum>m)
              break;
            if (maxi==i-count1)
                mini=min (mini,cum[i-1]-sum);
              if (maxi<i-count1)
        {maxi=i-count1;
        mini=cum[i-1]-sum;
        }
        sum+=arr[count1];
        count1++;
        if (i==j)
            i++;
        }
        if (maxi==0)
        {
            maxi=0;
            mini=0;
        }
        printf ("%d %d\n",mini,maxi);
    }
    return 0;
}

