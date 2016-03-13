#include <bits/stdc++.h>
using namespace std;
#define p pair <int,int>
#define pb push_back
#define ll long long
long long M=1e9+7;
int main()
{
    int i,j,k,t,n,m;
    int arr[1010],barr[1010];
    cin>>t;
    while (t--)
    {
        cin>>n;
        for (i=0;i<n;i++)
            cin>>arr[i];
        sort (arr,arr+n);
        cin>>m;
        for (i=0;i<m;i++)
            cin>>barr[i];
        sort (barr,barr+m);
        i=0;j=0;
        k=INT_MAX;
        while (i<n && j<m)
        {
            k=min (k,abs (arr[i]-barr[j]));
            if (arr[i]<barr[j])
                i++;
            else
                j++;
        }
        cout<<k<<endl;
    }
    return 0;
}

