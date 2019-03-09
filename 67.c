#include <stdio.h>

int main()
{
 int n,f=1;
 scanf("%d",&n);
 while(n)
 {
     f=f*n;
     n--;
     
 }
  printf("%d",f);
    return 0;
}
