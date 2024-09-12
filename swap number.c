#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter  value of a :");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    c=b;
    b=a;
    a=c;
    printf("swap numbers: %d \n",a);
    printf("swap numbers: %d \n",b);
    return 0;
}
