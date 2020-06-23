#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1,num2,lcd,gcd,i=1,max;
	printf("材计:");
	scanf("%d",&num1);
	printf("材计:");
	scanf("%d",&num2);
	
	if(num1<num2){
		max=num2;
	}
	else{
		max=num1;
	}
	
	while(i<=max){
		if(num1%i == 0 && num2%i == 0){
			gcd=i;
		}
		i++;
	}
	lcd=num1*num2/gcd;
	printf("\n%d㎝%d程そ:%d程そ:%d",num1,num2,gcd,lcd);
	return 0;
}
