#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,i;
    long long int c[33];
    c[0]=1;
    c[1]=0;
    c[2]=3;
    c[3]=0;
    for (i=4;i<32;i++)
        {
            if (i%2)
            c[i]=0;
            else
                c[i]=c[i-2]*4-c[i-4];
        }
    while (1)
    {
        cin>>n;
        if (n==-1)
            break;
        cout<<c[n]<<endl;
    }
    return 0;
}
