#include<stdio.h>
int main(){
	int x[12],s,i;
	int a;
	for(int i=0;i<12;i++){
		scanf("%d",&x[i]);
}
	s=0;
	int count=0;
	for (int i=0;i<12;i++){
	s=s+x[i];
	count++;
}
a=s/count;
printf ("la trung binh %d",a);
	return 0;
}
