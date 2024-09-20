#include<stdio.h>
#include <string.h>
#include<stdlib.h>
int main(){
    char str[100],ch;
    FILE *readFile,*writeFile;
    readFile = fopen("input.txt", "r");
    writeFile=fopen("output.txt","w");
    if(readFile == NULL){
        printf("File not found\n");
        exit(1);
    }else{
        printf("File opened successfully\n");
    }
    while(1){
        ch=fgetc(readFile);
        if(ch==EOF){
            break;
        }
        if(ch>='A' && ch<='Z'){
            ch=ch+32;
        }
        else if(ch>='a' && ch<='z'){
            ch=ch-32;
        }
        fputc(ch,writeFile);

    }

    fclose(readFile);
    fclose(writeFile);
}
