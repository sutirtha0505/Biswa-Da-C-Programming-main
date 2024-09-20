#include <stdio.h>
int maze(int n, int m)
{
    int downWays=0;
    int rightways=0;
    if(n==1&&m==1){
        return 1;
    }
    else if(n==1){
        rightways+=maze(n,m-1);
    }
    else if(m==1){
        downWays+=maze(n-1,m);
    }
    else{
        downWays=maze(n-1,m);
        rightways+=maze(n,m-1);
    }
    int totalWays=downWays+rightways;
    return totalWays;
}
int main()
{
    int n;
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    int m;
    printf("Enter the number of columns : ");
    scanf("%d", &m);
    int noOfWays = maze(n, m);
    printf("The number of ways to reach the destination is : %d", noOfWays);
    return 0;
}