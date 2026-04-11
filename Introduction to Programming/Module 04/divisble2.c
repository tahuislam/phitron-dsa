#include <stdio.h>

int main(void) {
    int n = 1000;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        if(i%3 == 0 && i%7 == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}
