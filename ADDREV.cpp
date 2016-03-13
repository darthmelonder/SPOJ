#include <iostream>
using namespace std;
long long int Rev (long long int a)
{
    long long int x=0;
    int b;
    while (a!=0)
    {
        b=a%10;
        x=x*10+b;
        a/=10;

    }
    return x;
}
int main()
{
    ios_base::sync_with_stdio(false);
    long long int a,b,c,d;
    int n;
    cin>>n;
    while (n--)
    {
        cin>>a>>b;
        c=Rev(a);
        d=Rev(b);
        a=Rev(c+d);
        cout<<a<<endl;
    }
    return 0;
}
