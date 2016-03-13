#include <bits/stdc++.h>
using namespace std;
#define p pair <int,int>
#define pb push_back
#define ll long long
long long M=1e9+7;
int main()
{
    int i,j,k,n,m,t,l;
    char s[110];
    //string d[110];
    scanf ("%d",&t);
    char ch;
    //scanf ("%c",&ch);
    while (t--)
    {
        cin>>s;
        n=strlen(s);
        if (n==1)
        {
            printf ("YES\n");
            continue;
        }
        /*k=0;
        for (i=0;i<n-1;i++)
        {
            for (j=2;j<=n-i;j++)
            d[k++]=s.substr(i,j);
        }
        for (i=0;i<k;i++)
            cout<<d[i]<<endl;
        for (i=0;i<k;i++)
        {
            int x=d[i].length();
            for (j=0;j<k;j++)
            {
                int y=d[j].length();
                if (y!=x)
                    continue;
                int z=x-1;
                for (l=0;l<y;l++)
                    if (d[j][l]!=d[i][z--])
                        break;
                if (l==y)
                    break;
            }
          if (j==k)
          break;
        }
        */i=0;j=n-1;
        while (i<j)
        {
            if (s[i]!=s[j])
                break;
            i++;
            j--;
        }
        if (i<j)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}

