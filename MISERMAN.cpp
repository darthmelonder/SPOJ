#include <iostream>
using namespace std;
int main()
{
    int n, m,a[102][102],i,j,max;
    cin>>n>>m;
    for (i=0;i<n;i++)
        for (j=0;j<m;j++)
        cin>>a[i][j];
    for (i=n-2;i>=0;i--)
    {
        for (j=0;j<m;j++)
        {
            if (j==0)
            {
                if (a[i+1][j]>a[i+1][j+1])
                  a[i][j]+=a[i+1][j+1];
                else
                    a[i][j]+=a[i+1][j];
            }
            else if (j<n-1)
            {
                if (a[i+1][j]>a[i+1][j+1])
                {
                    if (a[i+1][j+1]>a[i+1][j-1])
                        a[i][j]+=a[i+1][j-1];
                    else
                        a[i][j]+=a[i+1][j+1];
                }
                else
                {
                    if (a[i+1][j-1]>a[i+1][j])
                        a[i][j]+=a[i+1][j];
                    else
                        a[i][j]+=a[i+1][j-1];
                }
            }
            else
            {
                if (a[i+1][j-1]<a[i+1][j])
                    a[i][j]+=a[i+1][j-1];
                else
                    a[i][j]+=a[i+1][j];
            }
        }
     }
     max=a[0][0];
    for (i=1;i<m;i++)
        if (max>a[0][i])
        max=a[0][i];
    cout<<max<<endl;
    return 0;
}
