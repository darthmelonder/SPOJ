#include <bits/stdc++.h>
using namespace std;
#define p pair <int,int>
#define pb push_back
#define ll long long
long long M=1e9+7;
int arr[510][510],ans[510][510],n,m;
int dp[510][510];
/*int rec (int i,int j)
{
    if (i==n-1 && j==m-1){
            dp[i][j]=ans[n-1][m-1];
        return arr[n-1][m-1];
    }
    int a,b;
    a=b=INT_MIN;
    if (i+1<n)
    {
        if (!dp[i+1][j]){
     a=rec (i+1,j);
     dp[i+1][j]=a;}
     else
        a=dp[i+1][j];
    }
    if (j+1<m){
            if (!dp[i][j+1]){
        b=rec (i,j+1);
        dp[i][j+1]=b;}
        else
            b=dp[i][j+1];
    }
    a=max(a,b);
    return min (a,ans[i][j]);
}*/
int main()
{
    int i,j,k,t;
    scanf ("%d",&t);
    while (t--)
    {
        scanf ("%d%d",&n,&m);
        for (i=0;i<n;i++)
            for (j=0;j<m;j++)
            {
              //cout<<"$$"<<endl;
              scanf ("%d",&arr[i][j]);
            dp[i][j]=0;}
        //cout<<"++"<<endl;
        dp[n-1][m-1]=1;
        for (i=n-2;i>=0;i--)
            dp[i][m-1]=max(1,dp[i+1][m-1]-arr[i][m-1]);
        for (i=m-2;i>=0;i--)
            dp[n-1][i]=max (1,dp[n-1][i+1]-arr[n-1][i]);
        for (i=n-2;i>=0;i--)
        {
            for (j=m-2;j>=0;j--)
                dp[i][j]=max(1,min(dp[i][j+1]-arr[i][j],dp[i+1][j]-arr[i][j]));
        }
        printf ("%d\n",dp[0][0]);
        /*for (i=1;i<n;i++)
            for (j=0;j<m;j++)
        {
            ans[i][j]=0;
             if (j-1>=0)
                ans[i][j]=max(ans[i][j],ans[i][j-1]);
                if (i-1>=0)
                ans[i][j]=max(ans[i][j],ans[i-1][j]);
            ans[i][j]+=arr[i][j];
            //cout<<ans[i][j]<<endl;
        }*/
    }
    return 0;
}

