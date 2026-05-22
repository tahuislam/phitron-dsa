#include <stdio.h>

int main(void) {
    char x;
    scanf("%c", &x);
    if(x>=48 && x<=57){
        printf("IS DIGIT");
    }else if(x>=65 && x<=89){
        printf("ALPHA");
        printf("\nIS CAPITAL");
    }else if(x>=97 && x<=122){
        printf("ALPHA");
        printf("\nIS SMALL");

    }
    return 0;
}
