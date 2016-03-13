#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,h,w,a[101][101],i,j,max1;
    cin>>t;
    while (t--)
    {
        cin>>h>>w;
        for (i=0;i<h;i++)
            for (j=0;j<w;j++)
             cin>>a[i][j];
       for (i=h-2;i>=0;i--)
       {
           for (j=0;j<w;j++)
           {
               if (j<w-1 && j>0)
               {
                if (a[i+1][j]>a[i+1][j+1])
               {
                   if (a[i+1][j-1]>a[i+1][j])
                    a[i][j]+=a[i+1][j-1];
                   else
                    a[i][j]+=a[i+1][j];
               }
               else
               {
                   if (a[i+1][j-1]>a[i+1][j+1])
                    a[i][j]+=a[i+1][j-1];
                   else
                    a[i][j]+=a[i+1][j+1];
               }
               }
               else if (j==0)
               {
                   if (a[i+1][j]>a[i+1][j+1])
                    a[i][j]+=a[i+1][j];
                   else
                    a[i][j]+=a[i+1][j+1];
               }
               else
               {
                   if (a[i+1][j]>a[i+1][j-1])
                    a[i][j]+=a[i+1][j];
                   else
                    a[i][j]+=a[i+1][j-1];
               }
           }
       }
       i=0;
       max1=a[0][0];
       for (j=1;j<w;j++)
        if (a[i][j]>max1)
        max1=a[i][j];
       cout<<max1<<endl;
    }
    return 0;
}
