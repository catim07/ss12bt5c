#include<stdio.h>
int check(int a){
	if(a<=1){
		return 0;
	}
	for(int i=2;i*i<a;i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int num1,num2;
	printf("moi ban nhap so thu nhat: ");
	scanf("%d",&num1);
	printf("moi ban nhap so thu hai: ");
	scanf("%d",&num2);
	if(check(num1)){
		printf("so %d la so nguyen to\n",num1);
	}else{
		printf("so %d ko phai la so nguyen to\n",num1);
	}
	if(check(num2)){
		printf("so %d la so nguyen to\n",num2);
	}else{
		printf("so %d ko phai la so nguyen to\n",num2);
	}
	return 0;
}
