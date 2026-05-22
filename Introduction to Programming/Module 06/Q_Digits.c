#include <stdio.h>

int main(void)
{
    int n, num, digit=0, count=0;
    scanf("%d", &n);
    if (n >= 1 && n <= 10)
    {

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &num);
            if (num >= 0 && num <= 1000000000)
            {
                for (int temp=num; temp != 0;temp/=10)
                {
                    
                    if(temp!=0){
                        count++;
                    }
                }
            }
            printf("%d = %d\n",num,  count);
        }
    }

    return 0;
}