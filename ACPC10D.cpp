#include <bits/stdc++.h>
using namespace std;
#define p pair <int,int>
#define pb push_back
#define ll long long
ll M=1e9+7;
ll arr[10010][3];
int main()
{
    cout<<"***"<<endl;
    ll i,j,k,n,m;
    k=1;
    cout<<"**"<<endl;
    while (1){
    cin>>n;
    if (!n)
      break;
    for (i=0;i<n;i++)
    {
        for (j=0;j<3;j++)
            cin>>arr[i][j];
    }
    ll d[100100][3];
    d[0][0]=d[0][2]=M;
    d[0][1]=arr[0][1];
    for (i=1;i<n;i++)
    {
        d[i][0]=min (d[i-1][0],d[i-1][1])+arr[i][0];
        d[i][1]=min (d[i-1][0],d[i-1][1]);
        d[i][1]=min (d[i-1][1],d[i-1][2]);
        d[i][1]+=arr[i][1];
        d[i][2]=min (d[i-1][1],d[i-1][2]);
        d[i][2]+=arr[i][2];
    }
    cout<<k<<". "<<d[n-1][1]<<endl;
    k++;
    }
    return 0;
}

