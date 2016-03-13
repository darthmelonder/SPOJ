#include <iostream>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(false);
    int n,a[10001],i;
    long int sum,count=0;
    while (1)
    {
    sum=0;
    count=0;
     cin>>n;
     if (n==-1)
        break;
    for (i=0;i<n;i++)
      {
        cin>>a[i];
        sum+=a[i];
      }
    if (sum%n)
    {
        cout<<"-1"<<endl;
        continue;
    }
    count=0;
    for (i=0;i<n;i++)
        if (a[i]>sum/n)
          count-=sum/n-a[i];
        cout<<count<<endl;
    }

}
