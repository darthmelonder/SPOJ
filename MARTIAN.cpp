#include <bits/stdc++.h>
using namespace std;
int dp[600][600],a[600][600],b[600][600];
void follow (int n,int m)
{
    int i,j,k,l,p;
    for (i=0;i<=n;i++)
        dp[i][0]=0;
    for (i=0;i<=m;i++)
        dp[0][i]=0;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=m;j++)
        {
            k=l=0;
            for (p=0;p<i;p++)
                k+=b[p][j-1];
             for (p=0;p<j;p++)
                l+=a[i-1][p];
             dp[i][j]=max (k+dp[i][j-1],l+dp[i-1][j]);
        }
    }
}
int main()
{
    int n,m,i,j,k;
    while (1)
    {
        scanf ("%d%d",&n,&m);
        if (n==0 && m==0)
            break;
        for (i=0;i<n;i++)
            for (j=0;j<m;j++)
              scanf ("%d",&a[i][j]);
        for (i=0;i<n;i++)
            for (j=0;j<m;j++)
              scanf ("%d",&b[i][j]);
        follow (n,m);
        cout<<dp[n][m]<<endl;
    }
    return 0;
}
