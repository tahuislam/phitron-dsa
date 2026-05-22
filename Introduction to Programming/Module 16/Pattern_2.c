#include <stdio.h>

int main(void) {
    int r;
    scanf("%d", &r);
    for(int i=1;i<=r;i++){
        for(int k=0;k<=r-i-1;k++){
            printf(" ");
        }
        for(int j=i;j>0;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
