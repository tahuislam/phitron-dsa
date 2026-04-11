#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    if (n % 3 == 0) {
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}
