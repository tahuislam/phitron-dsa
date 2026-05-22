#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        long long M,a,b,c;
        long long total=1;
            scanf("%lld %lld %lld %lld",&M,&a,&b,&c);
            total = a*b*c;
        if(M%total!=0 || total ==0){
            printf("-1\n");
        }else{
            long long fourth_factor = M/total;
            printf("%lld\n",fourth_factor);

        }
        
    }

    return 0;
}
