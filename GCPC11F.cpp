#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    int c,n,a[26],i,j,max;
    string s,str;
    cin>>c;
    getchar();
    while (c--)
    {
        memset(a,0,sizeof(a));
        getline (cin,s);
        for (i=0;s[i]!='\0';i++)
        {
            if (s[i]==' ')
                continue;
            a[s[i]-'A']++;
        }
        max=-1;
        for (i=0;i<26;i++)
        {
            if (max<a[i])
            {
              max=a[i];
              j=i;
            }
        }
        for (i=0;i<26;i++)
            if (max==a[i] && i!=j)
                break;
        if (i<26)
        {
            cout<<"NOT POSSIBLE"<<endl;
            continue;
        }
        if (j==4)
        {
            cout<<j-4<<" "<<s<<endl;
            continue;
        }
        else if (j<4)
            j=26+j-4;
        else
            j=j-4;
        for (i=0;s[i]!='\0';i++)
        {
            if (s[i]<91 && s[i]>64)
            {
             n=(s[i]-'A');
            str[i]=(n+26-j)%26+1+64;
            }
            else
                str[i]=s[i];
        }
        str[i]='\0';
        cout<<j<<" ";
        for (i=0;str[i]!='\0';i++)
            cout<<str[i];
        cout<<endl;
    }
    return 0;
}
