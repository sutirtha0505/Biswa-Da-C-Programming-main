#include <stdio.h>
int maze(int cr, int cc, int er, int ec)
{
    int rightWays, downWays;
    if(cr==er && cc==ec){
        return 1;
    }
    else if (cc != ec)
    {

        rightWays = maze(cr, cc + 1, er, ec);
    }
    else if (cr != er)
    {

        downWays = maze(cr + 1, cc, er, ec);
    }
    int totalWays = rightWays + downWays;
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
    int noOfWays = maze(1, 1, n, m);
    printf("The number of ways to reach the destination is : %d", noOfWays);
    return 0;
}