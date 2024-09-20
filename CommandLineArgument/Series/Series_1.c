#include <stdio.h>

int main() {
    int n,sum=0;
    printf("Enter a Number : ");
    scanf("%d",&n);
    int init=3;
    for(int i=1;i<=n;i++){
        sum=sum+init;
        
        init+=3;
    }
    printf("%d ",sum);

    return 0;
}
//3+6+9+12+15+18+21+24+27+30(10)