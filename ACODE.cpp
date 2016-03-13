#include <bits/stdc++.h>
using namespace std;
#define p pair <int,int>
#define pb push_back
#define ll long long
long long M=1e9+7;
ll dp[5100];
int main()
{
    ll i,j,k,l,n,m;
    string s;
    while (1){
    cin>>s;
    if (s[0]=='0')
        break;
    n=s.length();
    dp[0]=1;
    dp[1]=1;
    for (i=2;i<=n;i++)
    {
        j=s[i-1]-'0';
        k=s[i-2]-'0';
        l=k*10+j;
        dp[i]=0;
        if (j>=1 && j<=26)
        dp[i]+=dp[i-1];
        if (l>=1 && l<=26 && k!=0)
            dp[i]+=dp[i-2];
            //cout<<dp[i]<<endl;
    }
    cout<<dp[n]<<endl;
    }
    return 0;
}

