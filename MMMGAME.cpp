#include <iostream>
using namespace std;
int main()
{
    int t,n,a[50],i;
    long long int sum;
    cin>>t;
    while (t--)
    {
        cin>>n;
        sum=0;
        for (i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum^a[i];
        }
        if ((sum==1 && n<=1) || (sum==0 && n>1))
            cout<<"Brother"<<endl;
        else
            cout<<"John"<<endl;
    }
}
