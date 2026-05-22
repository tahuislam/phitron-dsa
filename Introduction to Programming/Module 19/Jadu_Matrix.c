#include <stdio.h>
#include <stdbool.h>
int main(void) {
    int m,n;
    scanf("%d %d", &m,&n);
    int ar[m][n];
    bool flag = true;
    if(n==m){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                scanf("%d", &ar[i][j]);
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                bool isDiagonal = (i==j) || (j==n-1-i);
                if(isDiagonal){
                    if(ar[i][j]!=1){
                        flag = false;
                        break;
                    }
                }else{
                    if(ar[i][j]!=0){
                        flag = false;
                        break;
                    }
                }
            }
        }
    }else{
        flag = false;
    }
    if(flag == true){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}
