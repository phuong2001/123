#include<stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if (a+b>c&&a+c>b&&b+c>a){
		printf("3 so la ba canh tam giac");
		int d;
		
		d=a+b+c;
		
		printf("%d la chu vi tam giac\n",d);
		
	
		int dientich;
		
		float e= (float)d/2;
		
		
		dientich=sqrt(e*(e-a)*(e-b)*(e-c));
		printf("%d ladien tich tam giac\n",dientich);
}
	else{
		printf("3 so khong la ba canh tam giac");
	}
	
	
	
	
	return 0;
	
}	
	
