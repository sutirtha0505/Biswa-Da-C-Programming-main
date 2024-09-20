
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int Xstrlen(char str[]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    return count;

}
void Xstrcat(char str[], char str1[]){
    int i;
    for(i=0;str[i]!='\0';i++);
    for(int j=0;str1[j]!='\0';j++){
        str[i]=str1[j];
        i++;
    }
    str[i]='\0';
}
int Xstrcmp(char str[], char str1[]){
    int i,j,flag=0;
    for(i=0;str[i]!='\0';i++);
    for(j=0;str1[j]!='\0';j++);
    if(i==j){
        for(int k=0;str[k]!='\0';k++){
            if(str[k]!=str1[k]){
                flag=1;
                break;

            }
        }
        if(flag==1){
            // printf("The strings are not equal");
            return 1;
        }
        else{
            // printf("The strings are equal");
            return 0;
        }

    }
    else{
        // printf("The strings are not equal");
        return 1;
    }

}
void Xstrcpy(char str1[], char str[]){
    int i;
    for(i=0;str[i]!='\0';i++){
        str1[i]=str[i];
    }
    str1[i+1]="\0";
}
int main(){
char str[100],str1[100];
printf("Enter Your text : ");
gets(str);// scanf("%[^\n]s",&str);
// printf("The string : %s",str);
printf("Enter Your text : ");
gets(str1);// scanf("%[^\n]s",&str1);
// printf("The string : %s",str1);
Xstrcat(str,str1);
printf("The concatenated string is : %s",str);
//int length=Xstrlen(str);
// printf("\nThe length of the string is : %d",length);
// if(Xstrcmp(str,str1)){
//     printf("The string is not equal");
// }
// else{
//     printf("The string is equal");
// }
// Xstrcpy(str1,str);
// printf("The copied string is : %s",str1);
}
