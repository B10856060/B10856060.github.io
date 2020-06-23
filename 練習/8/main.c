#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y=1;
	
	while(y!=0){
	printf("\n請輸入第一個整數:");
	scanf("%d",&x);
	printf("請輸入第二個整數:");
	scanf("%d",&y);	
	printf("x/y的餘數:%d",mod(x,y));
	}
	
	return 0;
}
	int mod(int x,int y){
		return x%y;
	}
	
