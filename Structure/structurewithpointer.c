#include <stdio.h>
struct student{
    int roll;
    char name[10];
    float marks;
};
typedef struct student Student;
int main(){
    Student  *s1,*s2;
    s1=(Student *)malloc(sizeof(Student));
    s2=(Student *)malloc(sizeof(Student));
}
