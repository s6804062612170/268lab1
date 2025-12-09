#include<stdio.h>

int main(){
	int a,b,c;
	scanf("%d",&a);
	printf("%.2f\n",(a*0.95));
	scanf("%d",&b);
	printf("%.2f\n",((a+b)*0.85));
	scanf("%d",&c);
	printf("%.2f\n",((a+b+c)*0.7));
	printf("%.2f\n",((a+b+c)*0.7)*1.07);
	
	return 0;
}
