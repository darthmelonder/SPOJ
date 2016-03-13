#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>
using namespace std;
void merge (double arr[],int l, int m, int r)
{
     int i,  j, k;
     int n1 = m - l + 1;
      int n2 =  r - m;

    /* create temp arrays */
     double L[n1], R[n2];

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
void mergeSort( double arr[], int l, int r)
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
    int t,n,i;
    long int c;
    char s[50];
    double a,d[1001],min;
    cin>>t;
    while (t--)
    {
        cin>>n;
        for (i=0;i<n;i++)
            cin>>s>>d[i];
        mergeSort(d,0,n-1);
        min=d[n-1]-d[0];
        for (i=1;i<n;i++)
        {
            a=(360+d[i-1])-d[i];
            if (min>a)
                min=a;
        }
        min*=12;
        c=ceil(min);
        cout<<c<<endl;
    }
    return 0;
}
