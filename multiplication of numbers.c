#include <stdio.h>
int main() {
    int a,i;
    printf("enter the number :");
    scanf("%d",&a);
    for( i=0;i<=20;i++)
    {
        printf("%d*%d=%d\n",a,i,i*a);
    }
    return 0;
    
}
