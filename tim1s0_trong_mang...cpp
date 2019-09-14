#include<stdio.h>
void mang_sau_khi_sap_xep(int a[],int n){
		for (int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
}
}
for(int i=0;i<n;i++){
	printf("%3d",a[i]);
}

}

bool tim_kiem(int a[],int n, int x){  /// tim 1 so trong mang ko
	for(int i=0;i<n;i++){
		if(x==a[i]){
	}
	printf ("co so %d");
		return true;
	}
	printf ("khong co so %d");
	return false;
}

int main(){
	int ary[8]={1,2,5,4,8,6,7,9};
	mang_sau_khi_sap_xep(ary,8);
   

	return 0;
}
