#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void Xstrcat(char str[], char str1[]){
    int i;
    for(i=0;str[i]!='\0';i++);
    for(int j=0;str1[j]!='\0';j++){
        str[i]=str1[j];
        i++;
    }
    str[i]='\0';
}
int main(){
char str[100],str1[100];
printf("Enter Your text : ");
gets(str);
printf("Enter Your text : ");
gets(str1);
Xstrcat(str,str1);
printf("The concatenated string is : %s",str);
return 0;
}
