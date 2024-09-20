//For example, if the segment connecting the points (2,5) and (6,10) is 5/4, then a third point (10,15) has a slope of (15 - 10) / (10 - 6) = 5/4. The segment connecting (10,15) and (2,5) also has a slope of 10/8 or 5/4, so these three points are collinear.
#include<stdio.h>
int main(){
	float x1,y1,x2,y2,x3,y3;
	printf("------------------Welcome--------------------\n");
	printf("Enter the value of x1 : ");
	scanf("%f",&x1);
	printf("Enter the value of y1 : ");
	scanf("%f",&y1);
	printf("Enter the value of x2 : ");
	scanf("%f",&x2);
	printf("Enter the value of y2 : ");
	scanf("%f",&y2);
	printf("Enter the value of x3 : ");
	scanf("%f",&x3);
	printf("Enter the value of y3 : ");
	scanf("%f",&y3);
	float u1=y2-y1;
	float d1=x2-x1;
	float r1=u1/d1;
	float u2=y3-y2;
	float d2=x3-x2;
	float r2=u2/d2;
	float u3=y3-y1;
	float d3=x3-x1;
	float r3=u3/d3;
	if(r1==r2 && r1==r3){
		printf("Congratulations!!\n%.2f %.2f ,%.2f %.2f and %.2f %.2f are fall in a staright line",x1,y1,x2,y2,x3,y3);
	}
	else{
		printf("Sorry@@\nThree points are not fall in straight line");
	}


}

