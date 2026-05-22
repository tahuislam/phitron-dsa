#include <stdio.h>

int main() {
    int x, firstDigit;
    scanf("%d", &x);
    if(x>999 && x<=9999){
        for (int i = 0; x >0 ; i++)
        {
            firstDigit = x;
            x = x/10;
        }
        if(firstDigit % 2 == 0){
            printf("EVEN");
        }else{
            printf("ODD");
        }
    }

    

    return 0;
}