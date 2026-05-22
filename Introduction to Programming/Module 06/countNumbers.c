#include <stdio.h>

int main(void) {
    int n;
    long long int num = 0, even = 0, odd = 0, pos = 0, neg = 0;
    scanf("%lld", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &num);
        if(num % 2 == 0) {
            even++;
        } else {
            odd++;
        }
        if(num>=0){
            pos++;
        } else if(num<0){ {
            neg++;
        }
    }
    printf("Even: %lld\n", even);
    printf("Odd: %lld\n", odd);
    printf("Positive: %lld\n", pos);
    printf("Negative: %lld\n", neg);
    return 0;
}
}

//THIS IS UNFINISHED
