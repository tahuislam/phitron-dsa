#include <stdio.h>

int main(void) {
    int n,num,larger=0;
    scanf("%d",&n);
    if(n>=0){
    for(int i=0;i<n; i++){
    scanf("%d",&num);
    if(num>=larger){
        larger = num;
    }
    }
    printf("%d", larger);
}
    return 0;
}