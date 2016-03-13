#include <iostream>
using namespace std;
int m,n,a[2002],b[2002],LCS[2002][2002];
int max (int a,int b)
{
    if (a>b)
        return a;
    else
        return b;
}
int findLCS ()
{
    for (int i=0;i<=m;i++)
        LCS[i][0]=0;
    for (int j=0;j<=n;j++)
        LCS[0][j]=0;
    for (int i=1;i<=m;i++)
    {
        for (int j=1;j<=n;j++)
        {
            if (a[i]==b[j])
                LCS[i][j]=1+LCS[i-1][j-1];
            else
                LCS[i][j]=max(LCS[i-1][j],LCS[i][j-1]);
        }
    }
    return LCS[m][n];
}
int main()
{
    ios_base::sync_with_stdio(false);
    int t,max,s,i;
    cin>>t;
    while (t--)
    {
        cin>>a[1];
        for (i=1;a[i]!=0;i++)
            cin>>a[i+1];
        m=i-1;
        max=-1;
        while (1)
        {
            cin>>b[1];
          for (i=1;b[i]!=0;i++)
            cin>>b[i+1];
          if (i==1)
            break;
          n=i-1;
          s=findLCS();
          if (s>max)
            max=s;
        }
        cout<<max<<endl;
    }
  return 0;
}
