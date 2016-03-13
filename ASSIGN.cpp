#include <bits/stdc++.h>
using namespace std;
long long int dp[2000100];
int countbits (int i,int n)
{
    int count1=0;
    while (n--)
    {
        count1+=(i&1);
        i/=2;
    }
    return count1;
}
int main()
{
    int t,n,i,j,k,a[30][30],count1;
    scanf ("%d",&t);
    while (t--)
    {
        scanf ("%d",&n);
        for (i=0;i<n;i++)
            for (j=0;j<n;j++)
             scanf ("%d",&a[i][j]);
        dp[0]=1;
        for (i=1;i<(1<<n);i++)
        {
            dp[i]=0;
            count1=countbits(i,n);
            for (j=0;j<n;j++)
            {
                if (a[count1-1][j] && ((i>>j)&1))
                    dp[i]+=dp[i&~(1<<j)];
            }
        }
        cout<<dp[(1<<n)-1]<<endl;
    }
    return 0;
}
