#include <stdio.h>
int main() {
    int a,b,c,i;
    printf("enter the table");
    scanf("%d",&a);
    printf("enter the no of series");
    scanf("%d",&b);
    for(i=1;i<=b;i++)
    {
    c=i*a;
    printf("\n%d*%d=%d",i,a,c);
}
    return 0;
    
}
