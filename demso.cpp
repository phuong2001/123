#include<stdio.h>
int main(){
	int n;
	int count=0;
	scanf("%d",&n);
	for (;n>0;){
		n=n/10;
		count++;
		}
		printf ("so chu so %d\n",count);
		return 0;
		}
		
