#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 srand(time(NULL));
	int i=0,j=0,inputNum,sequence[50]/*(�ƧǡA�Ψӷ���ޭ�)*/,avg[50];
	
	struct data1{
		int num;
		char name[3000];
	};
	
	struct data2{
		int en;
		int ch;
	};

	struct data{
		struct data1 data[51];
		struct data2 score[50];
	}s1;
	
	while(i<50){
		s1.data[i].name[0]=(rand()%26)+65;
		while(j<7){
			s1.data[i].name[++j]=(rand()%26)+97;
		}
		j=0;
		s1.score[i].en=(rand()%100)+1;
		s1.score[i].ch=(rand()%100)+1;
		avg[i]=(s1.score[i].en+s1.score[i].ch)/2;
		s1.data[i].num=i+1;
		sequence[i]=i;
		if(i<9){
			printf("�m�W�G%s �Ǹ��G %d �������Z�G%d\n",s1.data[i].name,s1.data[i].num,avg[i]);
		}else{
			printf("�m�W�G%s �Ǹ��G%d �������Z�G%d\n",s1.data[i].name,s1.data[i].num,avg[i]);
		}
		i++;
	}
	
	sort(avg,sequence);

	printf("-------------------------------------\n�̾ڥ������Z�Ѥj�ܤp�ƦC��G\n\n");

	for(i=0;i<10;i++){//�ƦC
		if(s1.data[sequence[i]].num<10){
			printf("�m�W�G%s �Ǹ��G%d  ��妨�Z�G%d �^�妨�Z�G%d �������Z�G%d\n",s1.data[sequence[i]].name,s1.data[sequence[i]].num,s1.score[sequence[i]].ch,s1.score[sequence[i]].en,avg[i]);
		}else{
			printf("�m�W�G%s �Ǹ��G%d ��妨�Z�G%d �^�妨�Z�G%d �������Z�G%d\n",s1.data[sequence[i]].name,s1.data[sequence[i]].num,s1.score[sequence[i]].ch,s1.score[sequence[i]].en,avg[i]);
		}
	}

	

	return 0;
}
int exchange(int n[],int j){
	int temp;
	temp=n[j];
	n[j]=n[j+1];
	n[j+1]=temp;
}
int sort(int avg[],int sequence){
		//�Ƨ� 
	int i,j;
	for(i=0;i<50;i++){
		for(j=0;j<49-i;j++){
			if(avg[j]<avg[j+1]){
				exchange(avg,j);
				exchange(sequence,j);
			}
		}
	}
}
