#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
#define INF 0x7fffffff;
int cmp (const void* a,const void* b)
{
    return (*(int*)a-*(int*)b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    int t,k,n,i;
    long long int a[20001],min;
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        k--;
        for (i=0;i<n;i++)
            cin>>a[i];
         if (k==0)
        {
            cout<<"0"<<endl;
            continue;
        }
        qsort (a,n,sizeof(long long int),cmp);
        min=INF;
        for (i=0;i<n-k;i++)
        {
            if (min>a[i+k]-a[i])
                min=a[i+k]-a[i];
        }
        cout<<min<<endl;
    }
    return 0;
}
