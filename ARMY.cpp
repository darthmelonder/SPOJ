#include <iostream>
using namespace std;
int a[1000001],b[1000001];
int main ()
{
    ios_base::sync_with_stdio(false);
    int t,n,m,i,max1,max2;
    cin>>t;
    while (t--)
    {
        cin>>n>>m;
        for (i=0;i<n;i++)
            cin>>a[i];
         for (i=0;i<m;i++)
            cin>>b[i];
            max1=a[0];
        for (i=1;i<n;i++)
            if (max1<a[i])
            max1=a[i];
            max2=b[0];
           for (i=1;i<m;i++)
            if (max2<b[i])
            max2=b[i];
        if (max1>=max2)
            cout<<"Godzilla"<<endl;
        else
            cout<<"MechaGodzilla"<<endl;
    }
    return 0;
}
