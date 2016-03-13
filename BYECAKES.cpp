#include <iostream>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    int a[8],b[5],i,max1;
    while (1)
    {
        for (i=0;i<8;i++)
            cin>>a[i];
        if (a[0]==-1)
            break;
        max1=-1;
        for (i=0;i<4;i++)
        {
            if (a[i]/a[i+4]>=max1)
            {
                max1=a[i]/a[i+4];
                if (a[i]%a[i+4])
                max1++;
            }
        }
        for (i=0;i<4;i++)
        {
            b[i]=max1*a[i+4]-a[i];
        }
        for (i=0;i<4;i++)
            cout<<b[i]<<" ";
        cout<<endl;
    }
    return 0;
}
