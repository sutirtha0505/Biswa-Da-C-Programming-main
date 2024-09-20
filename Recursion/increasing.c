#include <stdio.h>
void result(int s, int e){
    if(s>e) return;
       printf("%d\n",s);
       result(s+1,e);
}
int main(){
    int s,e;
    printf("Enter Starting Number : ");
    scanf("%d",&s);
    printf("Enter Ending Number: ");
    scanf("%d",&e);
    result(s,e);
    return 0;
}

// #include <stdio.h>
// void result(int s,int e){
//     if(e<s) return;
//     result(s,e-1);
//     printf("%d",e);
// }
// int main(){
//     int s,e;
//     printf("Enter a starting number : ");
//     scanf("%d",&s);
//     printf("Enter a ending number : ");
//     scanf("%d",&e);
//     result(s,e);
//     return 0;
// }