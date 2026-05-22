#include <stdio.h>

int main(void) {
    int t, m1, m2, d, dayNew, dayLess;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%d %d %d", &m1, &m2, &d);
        dayNew = (d*m1)/(m1+m2);
        dayLess = d - dayNew;
        printf("%d\n", dayLess);
    }
    return 0;
}
