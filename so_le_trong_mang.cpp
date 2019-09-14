#include<stdio.h>
int so_le(int a[]){
for (int i=0;i<a[i];i++){
	if (a[i]%2==1){
		printf("%d la so le\n",a[i]);
	}
}
}
int main(){
   int a[8]={1,2,3,4,5,6,7,8};
   so_le(a);
	
	return 0;
}
