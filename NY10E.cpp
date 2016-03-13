#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,p,i,j,t;
    long long a[65][11],sum,k;
    i=2;t=10;
    sum=0;
    for (j=0;j<10;j++)
    {
        a[i][j]=t;
        t--;
        sum+=a[i][j];
    }
    a[i][j]=sum;
    for (i=3;i<65;i++)
    {
        k=sum;
        sum=0;
        for (j=0;j<10;j++)
        {
            if (j>0)
                k-=a[i-1][j-1];
          a[i][j]=k;
          sum+=a[i][j];
        }
        a[i][j]=sum;
    }
    cin>>n;
    while (n--)
    {
        cin>>t>>p;
        if (p==1)
        {
            cout<<t<<" 10"<<endl;
            continue;
        }
        cout<<t<<" "<<a[p][10]<<endl;
    }
    return 0;
}
