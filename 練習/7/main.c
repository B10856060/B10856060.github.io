#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,c;
	printf("�п�J�ʪ����q:");
	scanf("%d",&x);
	if(x<6 && x>0){
		c=199+(x*50);
		printf("�B�O+���y�B�z�O=%d",c);
	}
	else if(x>5){
		c=199+((5*50)+((x-5)*30));
		printf("�B�O+���y�B�z�O=%d",c);
	}
	return 0;
}
