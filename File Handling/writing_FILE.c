// #include<stdio.h>
// #include <string.h>
// #include<stdlib.h>
// int main(){
//     char str[100];
//     FILE *file;
//     file = fopen("test.txt", "w");
//     if(file == NULL){
//         printf("File not found\n");
//     }else{
//         printf("File opened successfully\n");
//     }
//     printf("Enter the text to write in the file : \n");
//     while(strlen(gets(str))>0){
//         fprintf(file,"%s",str);
//         fprintf(file,"%s","\n");
//     }



//     fclose(file);
// }
#include<stdio.h>
#include <string.h>
#include<stdlib.h>

int main(){
    char str[100];
    FILE *file;
    file = fopen("test.txt", "w");
    if(file == NULL){
        printf("File not found\n");
        return 1;
    }else{
        printf("File opened successfully\n");
    }
    printf("Enter the text to write in the file : \n");
    while(fgets(str, sizeof(str), stdin) != NULL && str[0] != '\n'){
        fprintf(file,"%s",str);
    }
    fclose(file);
    return 0;
}
