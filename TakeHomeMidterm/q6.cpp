#include <stdio.h>
#include <math.h>
int main(void)
{	
	FILE *br=fopen("branches.txt","r");
	FILE *ac=fopen("accounts.txt","r");
	
	double bran[4];// branches.txt has 4 braches
	double acc[100][2];
	int total_1234=0,total_2345=0,total_3456=0,total_4567=0;
	int counter=0;
	
	for(int i=0;i<4;i++){//taking branchs
		fscanf(br,"%lf",&bran[i]);
	}
	
	for(int j=0;j<1000;j++){//taking account datas and how much money has account 
		for(int k=0;k<2;k++){
		fscanf(ac,"%lf",&acc[j][k]);
		}
	}
	
	int op;// menu options
	
	printf("please choose branc\n1)=1234\n2)=2345\n3)=3456\n4)=4567\n");// menu
	scanf("%d",&op);
	
	if(op==1){
		
		for(int a=0;a<100;a++){
			int control=acc[a][0]/10000000;
			
			if(control==bran[0]){
				total_1234=total_1234+acc[a][1];//total money of accounts
				counter++;//counts how many accounts open
			}
		}		
			printf("branch %d has %d accounts and total money is %d",op,counter,total_1234);//display
	}
	
	else if(op==2){	
			for(int a=0;a<100;a++){
				int control=acc[a][0]/10000000;
				if(control==bran[1]){
					total_2345+=acc[a][1];
					counter++;
			}
		}
			printf("branch %d has %d accounts and total money is %d",op,counter,total_2345);
	}
	
	else if(op==3){
			for(int a=0;a<100;a++){
				int control=acc[a][0]/10000000;
				if(control==bran[2]){
					total_3456+=acc[a][1];
					counter++;
			}
		}
			printf("branch %d has %d accounts and total money is %d",op,counter,total_3456);
	}
	
	else if(op==4){
			for(int a=0;a<100;a++){
				int control=acc[a][0]/10000000;
				if(control==bran[3]){
					total_4567+=acc[a][1];
					counter++;
			}
		}
		printf("branch %d has %d accounts and total money is %d",op,counter,total_4567);
		
	}
	
	return(0);
}	
