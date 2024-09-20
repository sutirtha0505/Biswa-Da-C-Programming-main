#include<stdio.h>
int main(){
    int wordCount=0,charCount=0,lineCount=0;
    FILE *rf;
    rf=fopen("input.txt","r");
    if(rf==NULL){
        printf("File not found");
        return 0;
    }
    while(1){
        char ch=fgetc(rf);
        if(ch!=EOF){
            if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')){
                charCount++;
            }
            if(ch==32||ch=='\t'||ch=='\n'){
                wordCount++;
            }
            if(ch=='\n'){
                lineCount++;
            }
        }
        else{
            break;
        }
    }
    printf("Number of character,word,line is : %d,%d,%d\n",charCount,wordCount,lineCount);
    fclose(rf);
}
