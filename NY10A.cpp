#include <iostream>
#   include <cstring>
using namespace std;
int Toss (char a,char b,char c)
{
    if (a=='H' && b=='H')
    {
        if (c=='H')
        return 7;
        else
        return 6;
    }
    else if (a=='H' && b=='T')
    {
        if (c=='H')
        return 5;
        else
        return 4;
    }
    else if (a=='T' && b=='H')
    {
        if (c=='H')
            return 3;
        else
            return 2;
    }
    else
    {
        if (c=='H')
            return 1;
        else
            return 0;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    int p,k,i,j,a[8];
    char s[41];
    cin>>p;
    while (p--)
    {
        cin>>k;
        cin>>s;
        memset (a,0,sizeof(a));
        for (i=0;i<38;i++)
        {
            j=Toss(s[i],s[i+1],s[i+2]);
            a[j]++;
        }
        cout<<k<<" ";
        for (i=0;i<8;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
}
