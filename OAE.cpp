#include <iostream>
using namespace std;
long long int pow1 (long long int a,long long int b)
{
    long long int ans=1;
    while (b>0)
    {
        if (b%2)
            ans=(ans*a)%314159;
        a=(a*a)%314159;
        b/=2;
    }
    return ans;
}
int main()
{
    long long int n,sum;
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n;
        sum=pow1(10,n-1)*5+pow1(8,n-1)*4;
        sum%=314159;
        cout<<sum<<endl;
    }
    return 0;
}
