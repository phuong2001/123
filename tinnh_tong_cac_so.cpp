#include<stdio.h>
int main(){
	int n,s,m ;
	printf("nhap so\n");
	scanf("%d",&n);
	while(n>0){
    m=n%10;  
    s=s+m;  
    n=n/10;  
}  
printf("Tong so da cho = %d\n",s); 
		return 0;
		}
		
