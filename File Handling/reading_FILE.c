#include<stdio.h>
int main(){
    FILE *file;
    file = fopen("test.txt", "r");
    if(file == NULL){
        printf("File not found\n");
    }else{
        printf("File opened successfully\n");
    }
    while(1){
        char c = fgetc(file);
        if(c == EOF){
            break;
        }
        printf("%c",c);
    }
    fclose(file);
    return 0;
}
