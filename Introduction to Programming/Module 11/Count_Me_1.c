#include <stdio.h>

int main() {
    int n, by2=0, by3=0;
    scanf("%d", &n);
    int a[100001];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]%2==0 && a[i]%3==0){
            by2++;
        }else if(a[i]%2==0){
            by2++;
        }else if(a[i]%3==0){
            by3++;
        }
    }
    
    printf("%d %d", by2, by3);
    return 0;
}
