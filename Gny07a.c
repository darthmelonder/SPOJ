#include <stdio.h>
#include <string.h>
int main ()
{
    int n,m,i,j,k;
    char s[100];
    scanf ("%d",&n);
    k=1;
    while (n--)
    {
        scanf ("%d",&m);
        scanf ("%s",s);
        j=strlen (s);
        printf ("%d ",k);
        k++;
        for (i=0;i<m-1;i++)
            printf ("%c",s[i]);
        for (i=m;i<j;i++)
            printf ("%c",s[i]);
        printf ("\n");
    }
}
