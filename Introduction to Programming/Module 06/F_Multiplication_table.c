#include <stdio.h>

int main(void) {
    int n, product;
    scanf("%d",&n);
    if(n>=1 && n<=50){
        for(int i=1;i<=12;i++){
            product = n*i;
            printf("%d * %d = %d\n", n, i, product);
        }
    }
    return 0;
}
