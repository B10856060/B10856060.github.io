#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num=6,i;
	int inputNum[]={1,23,56,44,36,58};
	struct node{
		int id;
		int data;
		struct node *next;
	};
	typedef struct node NODE;
	NODE *first,*current,*previous;
	for(i=0;i<num;i++){(NODE) 
		current=(NODE *)malloc(sizeof(NODE)); //malloc�O�@�ӵ����}�C�Ŷ�����//
		current->data=inputNum[i];
		current->id=i+1;
		if(i==0){
			first=current;
		}else{
			previous->next=current;
		}
		current->next=NULL;
		previous=current;
	}
	current=first;
	while(current!=NULL){
		printf("ID=%d,data=%d\n",current->id,current->data);
		current=current->next;
	}
	return 0;
}
