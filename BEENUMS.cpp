#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int n,a,b;
    while (1)
    {
        cin>>n;
        if (n==-1)
            break;
        if (n==1)
        {
            cout<<"Y"<<endl;
            continue;
        }
        a=(n-1)*12+9;
        b=sqrt(a);
        if (b*b==a)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
    }
    return 0;
}
