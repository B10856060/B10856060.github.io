#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float x,y;
	
	printf("請輸入x座標:");
	scanf("%f",&x);
	printf("請輸入y座標:");
	scanf("%f",&y);

	if(x>0 && y>0){
		printf("第一象限");
	}
		else if(x<0 && y>0){
			printf("第二象限");
		}
			else if(x<0 && y<0){
				printf("第三象限");
			}
				else if(x>0 && y<0){
					printf("第四象限");
				}
					else if(x!=0 && y==0){
						printf("x軸");
					}
						else if(x==0 && y!=0){
							printf("y軸");
						}
							else if(x==0 && y==0){
								printf("(0,0)原點");
							}
	return 0;
}
