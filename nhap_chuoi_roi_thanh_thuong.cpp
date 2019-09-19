#include<stdio.h>
#include<string.h>
void lowercase(char s[]){
		printf("nhap chuoi\n");
      	scanf("%s",s);
		for (int i=0;i<strlen(s);i++){
		if(s[i]>=65&&s[i]<=90){
			printf("%c",s[i]+32);
		}
		else{
			printf("%c",s[i]);
		}
		}
	
}
int main(){
	char s[20];
	lowercase(s);
}
