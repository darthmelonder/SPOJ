#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int t,n,i,j,k;
    int flag;
    cin>>t;
    while (t--)
    {
        cin>>n;
        if (n<=1)
        {
            cout<<"1 0"<<endl;
            continue;
        }
        j=2;
        flag=1;
        for (i=0;;i++)
           {
               if (flag && n%j)
               {
                   k=i;
                   flag=0;
               }
               if (j>=n)
                break;
               j*=2;
           }
           if (j==n)
            k=i+1;
        cout<<j<<" "<<i+1-k<<endl;
    }
    return 0;
}
