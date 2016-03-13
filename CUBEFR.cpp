#include <iostream>
using namespace std;
long long int a[1000003];
int main()
{
    ios_base::sync_with_stdio(false);
    long long int t,i;
    long long int n,j,k;
    cin>>t;
    for (i=2;i<=100;i++)
    {
        if (a[i]==0)
      {
        j=i*i*i;
        for (k=1;;k++)
        {
            n=j*k;
            if (n>1000000)
                break;
            a[n]=-1;
        }
      }
    }
    k=1;
    for (j=1;j<=1000000;j++)
    {
        if (a[j]==0)
            a[j]=k++;
    }
    k=0;
    while (t--)
    {
        k++;
        cin>>n;
        cout<<"Case "<<k<<": ";
        if (a[n]==-1)
            cout<<"Not Cube Free"<<endl;
        else
            cout<<a[n]<<endl;
    }
    return 0;
}
