#include <stdio.h>

int main()
{
    int number;
    unsigned long long factorial =1;
    printf("enter a number :");
    scanf("%d",&number);
    
    if (number < 0){
        printf("factorial does not  exist %d\n",number);
    }
    else{
        for(int i=1; i<= number;++i){
            factorial*1;
        }
        printf("factorial of exists %d\n",number,factorial);
    }
    return 0;
}
