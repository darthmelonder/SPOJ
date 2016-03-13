#include <iostream>
#include <cstring>
using namespace std;
char str[6100],s[6100];
long long int LCS1[6101][6101],n;
long long int max (long long int a,long long int b)
{
    if (a>b)
        return a;
    else
        return b;
}
void LCS ()
{
    long long int i,j;
    for (i=0;i<=n;i++)
    {
      for (j=0;j<=n;j++)
      {
       if (i==0 || j==0)
        LCS1[i][j]=0;
        else if (s[i-1]==str[j-1])
         LCS1[i][j]=1+LCS1[i-1][j-1];
       else
        LCS1[i][j]=max(LCS1[i][j-1],LCS1[i-1][j]);
      }
    }
}
int main()
{
    long long int t,i,j;
    cin>>t;
    while (t--)
    {
        cin>>s;
        n=strlen(s);
        for (i=n-1;i>=0;i--)
            str[n-1-i]=s[i];
        str[n]='\0';
        LCS();
        i=LCS1[n][n];
        cout<<n-i<<endl;
    }
    return 0;
}
