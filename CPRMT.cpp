#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
     char a[1002],b[1002];
    int c[26],d[26],i,j,n,m;
    while ((scanf("%s %s",a,b))!=EOF)
    {
        memset(c,0,sizeof(c));
        memset(d,0,sizeof(d));
        n=strlen(a);
        m=strlen(b);
        for (i=0;i<n;i++)
            c[a[i]-'a']++;
        for (i=0;i<m;i++)
               d[b[i]-'a']++;
            for (i=0;i<26;i++)
            {
                if (c[i]>=d[i])
                {
                    for (j=0;j<d[i];j++)
                    {
                        char z=i+'a';
                        cout<<z;
                    }
                }
                else
                {
                    for (j=0;j<c[i];j++)
                    {
                        char z=i+'a';
                        cout<<z;
                    }
                }
            }
            cout<<endl;
    }
    return 0;
}
