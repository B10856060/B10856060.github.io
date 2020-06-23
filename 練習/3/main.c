#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[5],i,j;
	srand(time(NULL));
	printf("排序前:");
	for(i=0;i<5;i++){
		a[i]=(rand() % 1000) +1;
		printf("%d  ",a[i]);
	}
	printf("\n");

		sort(a); //把所有的a帶入函式//
	
	return 0;
}
int sort(int b[]){ //函式// 
	int i,j,temp; //做氣泡排序比大小// 
	for(i=0;i<5;i++){
		for(j=0;j<4-i;j++){
			if(b[j]<b[j+1]){
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	}
	printf("排序後:"); 
	for(i=0;i<5;i++){
		printf("%d  ",b[i]); //排序好的數字// 
	}
}
