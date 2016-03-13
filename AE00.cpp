#include <bits/stdc++.h>
using namespace std;
#define p pair <int,int>
#define pb push_back
#define ll long long
long long M=1e9+7;
ll arr[10010];
ll ans[10010];
void sqrtt(ll n)
{
    ll i;
  for (i=1;i<=n;i++)
    arr[i]=sqrt(i);
}
int main()
{
    ll i,j,k,n,m;
    cin>>n;
    sqrtt(n);
    for (i=1;i<=n;i++)
        ans[i]=1;
    k=sqrt(n);
   // cout<<"**"<<endl;
    for (i=2;i<=k;i++)
    {
        for (j=i*2;j<=n;j+=i)
        {if (i<=arr[j])
            ans[j]+=1;
        }
    }
    for (i=2;i<=n;i++)
       ans[i]+=ans[i-1];
    cout<<ans[n]<<endl;
    return 0;
}
