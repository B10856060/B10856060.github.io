#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[5],i,j;
	srand(time(NULL));
	printf("�Ƨǫe:");
	for(i=0;i<5;i++){
		a[i]=(rand() % 1000) +1;
		printf("%d  ",a[i]);
	}
	printf("\n");

		sort(a); //��Ҧ���a�a�J�禡//
	
	return 0;
}
int sort(int b[]){ //�禡// 
	int i,j,temp; //����w�ƧǤ�j�p// 
	for(i=0;i<5;i++){
		for(j=0;j<4-i;j++){
			if(b[j]<b[j+1]){
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	}
	printf("�Ƨǫ�:"); 
	for(i=0;i<5;i++){
		printf("%d  ",b[i]); //�ƧǦn���Ʀr// 
	}
}
