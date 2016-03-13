#include <iostream>
#include <cstdio>
using namespace std;
char s[5010];
int LCS1[3][5010],n;
int max (int a,int b)
{
    if (a>b)
        return a;
        return b;
}
void LCS ()
{
    int i,j;
    for (i=1;i<=n;i++)
    {
      for (j=1;j<=n;j++)
      {
        if (s[i-1]==s[n-j])
         LCS1[i%3][j]=1+LCS1[(i+2)%3][j-1];
       else
        LCS1[i%3][j]=max(LCS1[(i+2)%3][j],LCS1[i%3][j-1]);
      }
    }
}
int main()
{
    int i,j;
    scanf ("%d",&n);
    scanf ("%s",s);
        LCS();
        i=LCS1[n%3][n];
        printf ("%d\n",n-i);
    return 0;
}

