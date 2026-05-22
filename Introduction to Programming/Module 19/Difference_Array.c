#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){

    scanf("%d",&n);
    int a[n];
    int b[n];
    int c[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i] = a[i];

    }
    for(int j=0;j<n-1;j++){
        for(int k=0;k<n-j-1;k++){
            int temp;
            if(b[k]>b[k+1]){
                temp = b[k];
                b[k] = b[k+1];
                b[k+1] = temp;
                
            }

        }
    }

    for(int j=0;j<n;j++){
        c[j] = abs(a[j] - b[j]);
    }
    for(int j=0;j<n;j++){
        printf("%d ",c[j]);
    }
    printf("\n");
    }

    return 0;
}
