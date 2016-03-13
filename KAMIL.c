#include <stdio.h>
main(){int count=1;char s;while((s=getchar())!=-1){if(s=='\n'){printf("%d\n",count);count=1;}if(s=='T'||s=='D'||s=='F'||s=='L')count*=2;}return 0;}
