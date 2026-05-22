#include <stdio.h>

int main(void)
{
    int m, n;
    scanf("%d %d", &m, &n);
    int ar[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &ar[i][j]);
            if(i==m-1){
                printf("%d ", ar[i][j]);
                if(j==n-1){
                                        printf("\n");
                }
            }
        }

    }
    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if(j==n-1){
                printf("%d ", ar[i][j]);

            }
        }
    }


    return 0;
}
