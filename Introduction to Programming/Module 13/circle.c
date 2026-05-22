#include <stdio.h>

int main(void) {
    int w = 20;
    for(int i=0;i<w;i++){
        for(int j=0;j<w;j++){
            printf("*  ");
        }
        printf("\n");
    }
    return 0;
}
