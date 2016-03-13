#include <iostream>
using namespace std;
int Calcdig (int a,int b)
{
    int c=1;
    if (b==0)
        b=4;
    while (b--)
        c*=a;
    return (c%10);
}
int main()
{
    long long int b;
    int a,t;
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        if (b==0)
        {
         cout<<"1"<<endl;
         continue;
        }
        cout<<Calcdig(a%10,b%4)<<endl;
    }
    return 0;
}
