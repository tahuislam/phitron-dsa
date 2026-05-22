#include <stdio.h>

int main(void) {
    int r,c;
    scanf("%d %d", &r, &c);
    int ar[r][c];
    // printf("%d %d", r, c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d", &ar[i][j]);
        }
        for(int j=c-1;j>=0;j--){
            printf("%d ", ar[i][j]);
        }
        printf("\n");

    }

    return 0;
}
