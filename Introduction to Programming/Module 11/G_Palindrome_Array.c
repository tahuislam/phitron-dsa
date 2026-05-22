#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int a[n], revIdx = n-1, halfSize = n/2+1;

    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(int i=0;i<halfSize;i++){

        if(i>=(revIdx-i)){
            printf("YES\n");
            break;
        }else if(a[i] == a[revIdx-i]){
            continue;
        }else if(a[i] != a[revIdx-i]){
            printf("NO\n");
            break;
        }
    }
    return 0;
}
