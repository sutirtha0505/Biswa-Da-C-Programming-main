#include <stdio.h>
#include<string.h>
int main(){
	char str[100];
	int i,s=0,f=1,l=0;
printf("Enter a Text: ");
scanf("%[^\n]s",&str);
printf("Entered String is %s\n",str);	
for(i=0;str[i]!='\0';i++){
	if(str[i]==' '){
	s++;	
	}

}
i=0;
while(str[i]!='\0'){
	if(f==1){
		if(str[i]>='a' && str[i]<='z')
			str[i]=str[i]-32;
			
		printf("%c",str[i]);
		f=0;
	}
	else if(str[i]==' '){
		printf(".");
	f=1;
	l++;	
	}
	else if(f==0 && l==s){
	if(str[i]>=65&&str[i]<=90)
        str[i]=str[i]+32;
        
	printf("%c",str[i]);		
	}
	i++;
}
}
