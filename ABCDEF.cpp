#include <iostream>
#include <cstring>
using namespace std;
int x[1000001],y[1000001];
void merge ( int arr[],int l, int m, int r)
{
     int i,  j, k;
     int n1 = m - l + 1;
      int n2 =  r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for(i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for(j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0;
    j = 0;
    k = l;
   while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the sub-array
  of arr to be sorted */
void mergeSort( int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2; //Same as (l+r)/2, but avoids overflow for large l and h
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    long long int count=0,n,i,j,k,l,m,p;
    int s[101];
    cin>>n;
    memset (s,0,sizeof(s));
    for (i=0;i<n;i++)
        cin>>s[i];
    l=0;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
          for (k=0;k<n;k++)
            x[l++]=s[i]*s[j]+s[k];
        }
    }
    m=0;
    for (i=0;i<n;i++)
    {

        for (j=0;j<n;j++)
        {
          for (k=0;k<n;k++)
             {
                if (s[k]==0)
                    continue;
                y[m++]=(s[i]+s[j])*s[k];
             }
         }
    }
    mergeSort(x,0,l-1);
    mergeSort  (y,0,m-1);
    i=0;
    j=0;
    while (i<l && j<m)
    {
        if (x[i]==y[j])
        {
            k=i+1;
           while (x[k]==x[i])
            k++;
           p=j+1;
           while (y[p]==y[j])
            p++;
            count+=(p-j)*(k-i);
            i=k;
            j=p;
        }
        else if (x[i]>y[j])
            j++;
        else
            i++;
    }
    cout<<count<<endl;
}
