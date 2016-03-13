#include <iostream>
using namespace std;
long long int a[500001];
int b[5000001];
int main()
{
    int k,i;
    a[0]=0;
    for (i=1;i<500001;i++)
    {
        if (a[i-1]-i>0)
        {
            if (b[a[i-1]-i]==0)
            {
              a[i]=a[i-1]-i;
              b[a[i-1]-i]++;
            }
            else
           {
            a[i]=a[i-1]+i;
            b[a[i-1]+i]++;
           }
        }
        else
           {
            a[i]=a[i-1]+i;
            b[a[i-1]+i]++;
           }
    }
    while (1)
    {
        cin>>k;
        if (k==-1)
            break;
        cout<<a[k]<<endl;
    }
    return 0;
}
