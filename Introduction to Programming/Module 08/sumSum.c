#include <stdio.h>

int main(void) {
    int n, posSum=0, negSum=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            posSum = posSum + arr[i];
        }else if(arr[i]<0){
            negSum += arr[i];
            
        }
    }
    printf("%d %d", posSum, negSum);
    return 0;
}
