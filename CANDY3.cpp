#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int t,n,sum,a,b;
    cin>>t;
    while (t--)
    {
        cin>>n;
        b=n;
        sum=0;
        while (b--)
        {
            cin>>a;
            sum+=a;
            sum%=n;
        }
        if (sum%n==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
