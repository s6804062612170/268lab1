#include <stdio.h>

int main(){
	float mid,final,q1,q2,lab,sit;
	scanf("%f%f%f%f%f%f",&mid,&final,&q1,&q2,&lab,&sit);
//	mid=75 ;final=85;
//	q1=40 ;q2= 45;5
//	lab=16;sit=15;
	printf("%10s=%8f => %f\n","Mid",mid,(mid*30)/100);
	printf("%10s=%8f => %f\n","Final",final,(final*35)/120);
	printf("%10s=%8f => %f\n","Q1",q1,(q1*12)/60);
	printf("%10s=%8f => %f\n","Q2",q2,(q2*13)/60);
	printf("%10s=%8f => %f\n","Lab",lab,(lab*5)/16);
	printf("%10s=%8f => %f\n","Sit",sit,(lab*5)/16);


	return 0;
}
