#include <string.h>
#include<stdio.h>
struct student{
    int roll;
    char name[10];
    float marks;
};
typedef struct student Student;
int main(){
    Student  s[10];
    int n,max,flag=0,searchIndex=0;
    char sname[10];
    printf("Enter the Number of Students : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){

        printf("Enter the record of student %d : \n",i+1);
        printf("Enter Roll : ");
        scanf("%d",&s[i].roll);
        printf("\nEnter The Name: ");
        scanf("%s",s[i].name);
        printf("\nEnter The marks: ");
        scanf("%f",&s[i].marks);
    }
    max=0;
    for(int i=0;i<n;i++){
        if(s[i].marks>s[max].marks){
            max=i;
        }

    }

    printf("ROLL\tNAME\tMARKS\n");
    // for(int i=0;i<n;i++){
    //    printf("%d\t%s\t%f\n",s[i].roll,s[i].name,s[i].marks);
    // }
    printf("%d\t%s\t%f\n",s[max].roll,s[max].name,s[max].marks);


    printf("Enter the name to search : ");
    scanf("%s",sname);
    for(int i = 0;i<=n;i++){
        if(strcmp(s[i].name,sname)==0){
            searchIndex=i;
            flag=1;
        }




    }
    if(flag){
        printf("%d\t%s\t%f\n",s[searchIndex].roll,s[searchIndex].name,s[searchIndex].marks);
    }
    else{
        printf("Roll number is not found");
    }

}
