#include <bits/stdc++.h>
using namespace std;
#define p pair <int,int>
#define pb push_back
#define ll long long
long long M=1e9+7;
int arr[100100],hini,n,ind,to;
bool bsrch (int c)
{
    int i,j=0,k=arr[0];
    //cout<<c<<endl;
    j=1;
    for (i=1;i<n;i++)
        if (arr[i]-k>=c){k=arr[i];
          j++;}
    if (j>=to)
        return 1;
        return 0;
    //cout<<"$$"<<hini<<endl;
}
int main()
{
    int i,j,k,m,t,c,l;
    cin>>t;
    while (t--)
    {
        cin>>n>>to;
        for (i=0;i<n;i++)
            cin>>arr[i];
        sort (arr,arr+n);
        j=arr[0];k=arr[n-1];
        if (to==2)
        {
            cout<<arr[n-1]-arr[0]<<endl;
            return 0;
        }
         k=arr[n-1]-arr[0];
        j=0;
        int ho=INT_MAX;
        while (1){
        bool f=bsrch ((j+k)/2);
        if ((j+k)/2==ho)
            break;
        else
            ho=(j+k)/2;
        //cout<<j<<" "<<ind<<endl;
        if (f)
            j=(j+k)/2;
        else
            k=(j+k)/2;
        }
        cout<<j<<endl;
    }
    return 0;
}

