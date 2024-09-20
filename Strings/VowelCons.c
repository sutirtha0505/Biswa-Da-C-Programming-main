#include<stdio.h>
void wordCounter(char str[],int *vowelCount,int *consonantCount){
    char *ptr=str;

    while(*ptr!='\0'){
      char  ch=*ptr;
      if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')){

      if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
         ( *vowelCount)++;
      }
      else {
          (*consonantCount)++;
      }

      }
      *ptr++;
    }
}
int main(){
    char str[100];
    int vowelCount=0,consonantCount=0;
    printf("Enter the String : ");
    gets(str);
    wordCounter(str,&vowelCount,&consonantCount);
    printf("Vowel Count : %d\nConsonant Count : %d\n",vowelCount,consonantCount);
}
