#include <stdio.h>
#define MAX_SIZE 6
int main(void) {
    // int arr[MAX_SIZE] = {1,2,3,4,5};
    int arr[MAX_SIZE] = {1,2,3,4,5,6}, revIdx, temp;

    for(int i=0;i<MAX_SIZE;i++){
        revIdx = MAX_SIZE-(i+1);
        temp = arr[i];
        if(i != revIdx && revIdx != i+1 && revIdx != i-1){
            arr[i] = arr[revIdx];
            arr[revIdx] = temp;


        }else if(i == revIdx || revIdx == i+1 || revIdx == i-1){
            arr[i] = arr[revIdx];
            arr[revIdx] = temp;
            break;
        }
    }

    for(int i=0;i<MAX_SIZE;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
