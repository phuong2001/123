#include<stdio.h>
int so_trong_fibonnassi(int a[]){
    int n;
	scanf ("%d",&n);
	int x1=1,x2=1,x3=2;
	int i=4;
	while (i<=n){
		x1=x2;
		x2=x3;
		x3=x1+x2;
		i++;
		}
		printf ("so thu%d trong day: %d\n",n,x3);
	}
int main(){
	int a[8]={1,2,3,4,5,6,7,8};
 so_trong_fibonnassi(a);
	return 0;
}
