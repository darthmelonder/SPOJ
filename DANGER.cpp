#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long int n,i,b;
    char s[5];
    while (1)
    {
        cin>>s;
        if (!strcmp(s,"00e0"))
            break;
        b=s[0]-'0';i=s[1]-'0';
        n=b*10+i;
        b=s[3]-'0';
        n*=pow(10,b);
        if (n==1 || n==0)
        {
            cout<<n<<endl;
            continue;
        }
        i=1;
        while (i<n)
            i*=2;
        b=n%(i/2);
        i=1+b*2;
        cout<<i<<endl;
    }
    return 0;
}
