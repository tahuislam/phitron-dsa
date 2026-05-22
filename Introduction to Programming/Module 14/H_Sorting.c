#include <stdio.h>

int main(void) {
    int n,swap=0;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n-1;i++){
        printf("%d - %d\n",a[i],a[i+1]);
        if(a[i]>a[i+1]){

            int temp=0;
            temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
            swap++;

    }
    if(i==n-2 && swap == 0){
        i=0;
        swap = 0;
    }
    }
    for(int i=0;i<n;i++){
    printf("%d ", a[i]);
    }
    return 0;
}

//unfinished do it now
