#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(a>=1 && a<=1000000 && b>=1 && b<=1000000){
    if(a%b==0 || b%a==0){
        printf("Multiples");
    }else{
        printf("No Multiples");
    }
    }

    return 0;
}
