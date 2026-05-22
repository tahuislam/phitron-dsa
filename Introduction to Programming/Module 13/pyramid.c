#include <stdio.h>

int main(void) {
    int w, h, stars, s;
    scanf("%d",&w);
    h=(w/2)+1;
    s = w/2;
    for(int i=0;i<h;i++){
        // for(int k=s-i; k>0;k--){
        //     printf(" ");
        // }
        for(int k=0; k<s-i;k++){
            printf(" ");
        }

        stars = (i*2)+1;
        for(int j=0;j<stars;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
