#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y=1;
	
	while(y!=0){
	printf("\n�п�J�Ĥ@�Ӿ��:");
	scanf("%d",&x);
	printf("�п�J�ĤG�Ӿ��:");
	scanf("%d",&y);	
	printf("x/y���l��:%d",mod(x,y));
	}
	
	return 0;
}
	int mod(int x,int y){
		return x%y;
	}
	
