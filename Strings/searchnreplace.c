#include <stdio.h>
#include <string.h>
//int replacefunc(char str[], char search[],char replace[]){
//	len_search=strlen(search);
//	len_replace=strlen(replace);
//	
//	int i,j=0,k=0;
//	while(str[i]!='\0'){
//	if(str[i]!=' '){
//		if(str[i]==search[j]){
//			if(replace[k]!='\0'){
////				str[i]=replace[k];
//				j++;
//				k++;
//			}
//			else{
//				str[i]=' ';
//			}
//		}
//	else{
//		j=0;
//		k=0;
//	}
//	}
//	i++;	
//	}
//}
int Xstrcmp(char str[], char str1[]) {
    int i, j,k, flag = 0;
    for (i = 0; str[i] != '\0'; i++);
    for (j = 0; str1[j] != '\0'; j++);
    if (i == j) {
        for (k = 0; str[k] != '\0'; k++) {
            if (str[k] != str1[k]) {
                flag = 1;
                break;
            }
        }
        if (flag == 1) {
            return 0;  // Strings are not equal
        } else {
            return 1;  // Strings are equal
        }
    } else {
        return 0;  // Strings are not equal
    }
}
int main(){
	int i=0,j=0;
	char str[100],search[100],replace[100],cp[100];
	int searchindex=0;
	printf("Enter Your Text : ");
	gets(str);
	printf("Enter Searching String : ");
	gets(search);
	printf("Enter Replacing String : ");
	gets(replace);
	
	while(str[i]!='\0'){
		if(str[i]!=' '){
			cp[j]=str[i];
			j++;
		}
		else {
			cp[j]='\0';
			if(Xstrcmp(cp,search)){
				searchindex++;
			}
			j=0;
		}
			i++;
		}
		
	cp[j]='\0';
	if(Xstrcmp(cp,search)){
				searchindex++;
			}
	
	printf("The searching string occured %d times\n",searchindex);
//	replacefunc(str,search,replace);
//	printf("The String after replace is %s",str);
}
