// Created Date: 19-07-21
#include <stdlib.h>
#include<stdio.h>
#include<string.h>
int palindromeCheck(char str[]){
    char reverse[100];
    int length=strlen(str);
    for(int i=0,j=length-1;j>=0;i++,j--){
        reverse[i]=str[j];
    }
    reverse[length]='\0';
    if(strcmp(str,reverse)==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    FILE *readFile,*writeFile;
    readFile=fopen("input.txt","r");
    writeFile=fopen("Palindrome.txt","w");
    if(readFile==NULL){
        printf("File not found\n");
        exit(1);
    }
    else{
        printf("File opened successfully\n");
    }
    char str[100];
    fputs("Pallindrome Strings are:\n",writeFile);
    while(fgets(str,79,readFile)!=NULL){
        str[strcspn(str, "\n")] = '\0';
        if(palindromeCheck(str)){
            fputs(str,writeFile);
            fputs("\n",writeFile);
        }
    }
    fclose(readFile);
    fclose(writeFile);

}
