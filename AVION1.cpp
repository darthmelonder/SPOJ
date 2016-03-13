#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int t=1,b[6],i,j,flag,n;
    char s[11];
    j=0;
    while (t<6)
    {
        cin>>s;
        n=strlen(s);
        flag=0;
        for (i=0;i<n;i++)
        {
            if (s[i]=='F' && s[i+1]=='B' && s[i+2]=='I')
            {
                flag=1;
                break;
            }
        }
        if (flag==1)
            b[j++]=t;
        t++;
    }
    if (j==0)
    {
        cout<<"HE GOT AWAY!"<<endl;
    }
    else
    {
        for (i=0;i<j;i++)
            cout<<b[i]<<" ";
        cout<<endl;
    }
    return 0;
}
