#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float x,y;
	
	printf("�п�Jx�y��:");
	scanf("%f",&x);
	printf("�п�Jy�y��:");
	scanf("%f",&y);

	if(x>0 && y>0){
		printf("�Ĥ@�H��");
	}
		else if(x<0 && y>0){
			printf("�ĤG�H��");
		}
			else if(x<0 && y<0){
				printf("�ĤT�H��");
			}
				else if(x>0 && y<0){
					printf("�ĥ|�H��");
				}
					else if(x!=0 && y==0){
						printf("x�b");
					}
						else if(x==0 && y!=0){
							printf("y�b");
						}
							else if(x==0 && y==0){
								printf("(0,0)���I");
							}
	return 0;
}
