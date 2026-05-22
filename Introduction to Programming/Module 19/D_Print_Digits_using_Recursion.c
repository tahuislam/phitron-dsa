#include <stdio.h>

void digit(int num){
    if(num!=0){
        digit(num/10);
        printf("%d ",num%10);
    }
}

int main(void) {
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }

    for(int i=0;i<n;i++){
        digit(ar[i]);
        printf("\n");
    }

    return 0;
}
