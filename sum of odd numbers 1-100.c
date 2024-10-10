#include <stdio.h>

int main() {
     int i;
     printf("sum of all even numbers between 1-100:");
     for( int i=1;i<=100;i++){
        if (i%2!=0){
            printf("sum of all even numbers:%d\n",i);
        }
     }
    return 0;
}
