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
    int n,k,s,a[1001],i,sum;
    cin>>n>>k>>s;
    for (i=0;i<n;i++)
        cin>>a[i];
    qsort(a,n,sizeof(int),cmp);
    sum=0;
    for (i=n-1;i>=0;i--)
    {
        sum+=a[i];
        if (sum>=(s*k))
            break;
    }
    cout<<n-i<<endl;
    return 0;
}

