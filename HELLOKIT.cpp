#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[60];
    int n,i,j,k,temp;
    while (1)
    {
        cin>>s;
        if (s[0]=='.')
            break;
        cin>>n;
        for (i=0;s[i]!='\0';i++)
        {
            temp=i;
            for (j=i;s[j]!='\0';j++)
                cout<<s[j];
            for (j=0;j<n-1;j++)
                cout<<s;
            for (j=0;j<temp;j++)
                cout<<s[j];
            cout<<endl;
        }
    }
    return 0;
}
