#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int n,x,y;
    cin>>n;
    while (n--)
    {
        cin>>x>>y;
        if (x==y)
        {
            if (x%2)
                cout<<x*2-1<<endl;
            else
                cout<<x*2<<endl;
        }
        else if (x==y+2)
        {
            if (x%2)
                cout<<x+y-1<<endl;
            else
                cout<<x+y<<endl;
        }
        else
            cout<<"No Number"<<endl;
    }
    return 0;
}
