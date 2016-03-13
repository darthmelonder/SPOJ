#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[103];
    int i,n,count1,count2,count3;
    cin>>s;
        if (!strcmp("000",s))
        {
            cout<<"SHOOT"<<endl;
            return 0;
        }
    count1=count2=count3=0;
    n=strlen(s);
    for (i=1;i<n;i++)
    {
        if (s[i]=='1' && s[i-1]=='0')
            count1++;
        if (s[i]=='0' && s[i-1]=='0')
           count2++;
    }
    if (s[0]=='1' && s[n-1]=='0')
        count1++;
    if (s[0]=='0' && s[i-1]=='0')
        count2++;
    for (i=0;i<n;i++)
        if (s[i]=='0')
          count3++;
    double a=(double)count2/(count1+count2);
    double b=(double)count3/n;
    if (b>a)
        cout<<"ROTATE"<<endl;
    else if (a>b)
        cout<<"SHOOT"<<endl;
    else
        cout<<"EQUAL"<<endl;
    return 0;
}
