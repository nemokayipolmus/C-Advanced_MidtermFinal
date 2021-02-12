#include <stdio.h>

int main(void)
{
	int grades[50][5];//define 50*5 matrix
	
	FILE *inp;
	inp = fopen("grades.txt","r");//open grades.txt
	
	if(inp==NULL)
		printf("File cannot be open");
	
	else{
		int i;
		
		for(i=0;i<50;i++){//We take the grades of 50 students
			int st;
			st = fscanf(inp,"%d",&grades[i][2]);
		
		if(st==25){//we look at whether these 50 students got 25 points
			int f=fscanf(inp,"%d",grades[i][3]);
			printf("Fourth quiz:%d\n",f);
		}	
		else
			printf("No student who got 25 points from the 3rd quiz ");
		}
	}	
	
	return(0);
}
