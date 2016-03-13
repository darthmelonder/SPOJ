#include <iostream>
#include <cstring>
using namespace std;
char s[2010],str[2010];
int edist[2010][2010],n,m;
int min (int a,int b,int c)
{
    if (a<b)
    {
        if (a<c)
        return a;
        return c;
    }
    else
    {
        if (b<c)
        return b;
        return c;
    }
}
void Levdist ()
{
    int i,j,edit;
    for (j=0;j<=m;j++)
        edist[0][j]=j;
    for (i=1;i<=n;i++)
        edist[i][0]=i;
    for (i=1;i<=n;i++)
        for (j=1;j<=m;j++)
       {
           edit=1;
          if (s[i-1]==str[j-1])
            edit=0;
          edist[i][j]=min (edist[i-1][j]+1,edist[i][j-1]+1,edist[i-1][j-1]+edit);
       }
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cin>>s;
        cin>>str;
        n=strlen(s);
        m=strlen(str);
        Levdist();
        cout<<edist[n][m]<<endl;
    }
    return 0;
}
