#include <stdio.h>

int main()
{
   int a,b,i,d;
   printf("enter the number ");
   scanf("%d",&a);
   for(i=1;i<=a;i++)
   {
       if(a%i==0)
       {
           printf("\nthe factor's are %d",i);
       }
   }
    return 0;
}

