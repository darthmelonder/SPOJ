#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
int cmp (const void* a,const void* b)
{
    return (*(int*)a-*(int*)b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    long long int t,n,sum,i,a[100001];
    char s[1000];
    cin>>t;
    while (t--)
    {
        cin>>n;
        for (i=0;i<n;i++)
            cin>>s>>a[i];
        qsort (a,n,sizeof(long long int),cmp);
        sum=0;
        for (i=0;i<n;i++)
        {
            if (a[i]<i+1)
            sum+=(i+1-a[i]);
            else
                sum+=a[i]-i-1;
        }
        cout<<sum<<endl;
    }
    return 0;
}
