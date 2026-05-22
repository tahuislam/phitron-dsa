#include <stdio.h>
int main(void) {
    int n,m;
    scanf("%d %d", &n, &m);
    int a[100005];
    int freq[100005];
    for( int i = 0; i<n;i++){
        scanf("%d",&a[i]);
            
    }
    for(int i=0; i<n; i++){
        int val = a[i];
        if(val<=m){
            freq[val]++;
        }
    }
    for (int i = 1; i <=m; i++)
    {
        printf("%d\n",freq[i]);
    }
    return 0;
}
