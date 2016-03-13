#include <iostream>
using namespace std;
long long int k,l;
int a[1000001];
void CalcWinner ()
{
    long int i;
    a[0]=0;
    for (i=1;i<1000001;i++)
    {
        a[i]=0;
        if (a[i-1]==0)
            a[i]=1;
         if (i-k>=0)
        {
            if (a[i-k]==0)
                a[i]=1;
        }
         if (i-l>=0)
        {
            if (a[i-l]==0)
                a[i]=1;
        }
    }
    /*for (i=0;i<1000001;i++)
    {
        if (a[i]==0)
        {
            a[i+1]=1;
            if (i+1>=k)
            {
              if (a[i+1-k]!=0)
                 a[i+1]=1;
               else
                 a[i+1]=0;
            }
            if (i+1>=l && a[i+1]==1)
            {
                if (a[i+1-l]!=0)
                    a[i+1]=1;
                else
                    a[i+1]=0;
            }
            if (i+k>=l)
           {
            if (a[i+k-l]!=0)
            a[i+k]=1;
            else
            a[i+k]=0;
           }
           else
            a[i+k]=0;
            if (i+l>=k)
           {
            if (a[i+l-k]!=0)
            a[i+l]=1;
            else
            a[i+l]=0;
           }
           else
            a[i+l]=0;
       }
       else
       {
           a[i+1]=0;
            if (i+1>=k)
            {
              if (a[i+1-k]!=1)
                 a[i+1]=0;
               else
                 a[i+1]=1;
            }
            if (i+1>=l && a[i+1]==0)
            {
                if (a[i+1-l]!=1)
                    a[i+1]=0;
                else
                    a[i+1]=1;
            }
            if (i+k>=l)
           {
            if (a[i+k-l]!=0)
            a[i+k]=0;
            else
            a[i+k]=1;
           }
           else
            a[i+k]=1;
            if (i+l>=k)
           {
            if (a[i+l-k]!=1)
            a[i+l]=0;
            else
            a[i+l]=1;
           }
           else
            a[i+l]=1;
       }
    }*/
}
int main()
{
    int b[52];
    long int n;
    int m,i;
    cin>>k>>l>>m;
    CalcWinner ();
    for (i=0;i<m;i++)
    {
        cin>>n;
        b[i]=a[n];
    }
    for (i=0;i<m;i++)
    {
        if (b[i]==1)
            cout<<"A";
        else
            cout<<"B";
    }
    cout<<endl;
}
