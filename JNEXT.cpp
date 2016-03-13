#include <bits/stdc++.h>
using namespace std;
int arr[1000010],pos[12];
int mt[12][3];
int main()
{
    int t,n,i,j,k,ind;
    scanf ("%d",&t);
    while (t--)
    {
        scanf ("%d",&n);
        for (i=0;i<n;i++)
            scanf ("%d",&arr[i]);
        if (next_permutation (arr,arr+n))
        {
            for (i=0;i<n;i++)
                printf ("%d",arr[i]);
        }
        else
            printf ("-1");
        printf ("\n");
    }
    return 0;
}
