#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("�D�جO:f(n)=2f(n-1)-5");
	int x;
	printf("\n�п�J�@�Ӽƭ�:");
	scanf("%d",&x);
	printf("\n��J���ƭ�:%d,��Xf(n)=%d",x,f(x));
	return 0;
}
	int f(x){
		if(x!=0){
			return 2*f(x-1)-5;
		}
		else{
			return 3;
		}
	}
