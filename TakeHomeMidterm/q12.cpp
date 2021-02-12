#include <stdio.h>
#include <string.h>

struct date{
	int day;
	int mounth;
	int year;
}birhthdate;//structure of date

struct friends{
	char name[20];
	char surname[20];
	date birhthdate;
}fre[5];//there are 4 people in the article, we will take the last one as input if we want 
  
  
  int find(int text_day,int text_mounth,int text_year,int input_day,int input_mounth,int input_year){// return 0 keeps younger
	if(input_year>text_year){
		return 0;
	}
	else if(input_year<text_year){
		return 1;
	}
	else{
		if(input_mounth>text_mounth){
			return 0;
		}
		else if(input_mounth<text_mounth){
			return 1;
		}
		else{
			if(input_day>text_day){
				return 0;
			}
			else if(input_day<text_day){
				return 1;
			}
			else{
				return 2;
			}
					
		}
	}
	
}

  int main(void){
  	int i;
	FILE *ptr=fopen("info.txt","r");//friends.txt 
	FILE *b1ptr=fopen("younger.bin","w+b");
	FILE *b2ptr=fopen("older.bin","w+b");
	
	printf("please enter your name , surname & birthday\n");
	scanf("%s %s",fre[0].name,fre[0].surname);//comparing day goes to array index 0
	scanf("%d %d %d",&fre[0].birhthdate.day,&fre[0].birhthdate.mounth,&fre[0].birhthdate.year);
	printf("End\n");
	
	for( i=1;i<5;i++){
		fscanf(ptr,"%s %s ",fre[i].name,fre[i].surname);	
		fscanf(ptr,"%d %d %d",&fre[i].birhthdate.day,&fre[i].birhthdate.mounth,&fre[i].birhthdate.year );
		
		int status = find(fre[i].birhthdate.day,fre[i].birhthdate.mounth,fre[i].birhthdate.year,fre[0].birhthdate.day,fre[0].birhthdate.mounth,fre[0].birhthdate.year);
		
		printf("status: %d",status);
		
		if(status){//add  older
			int t1;
			
			t1=fre[i].birhthdate.day;
			fwrite(&t1,sizeof(int),1,b2ptr);
			t1=fre[i].birhthdate.mounth;
			fwrite(&t1,sizeof(int),1,b2ptr);
			t1=fre[i].birhthdate.year;
			fwrite(&t1,sizeof(int),1,b2ptr);
		
	}
		else if(status==2){//printing whose birthday  same
			printf("%s %s",fre[i].name,fre[i].surname);

			int t1;//when sending array value from fwrite probably writes address of array because of i use another integer
			
			t1=fre[i].birhthdate.day;
			fwrite(&t1,sizeof(int),1,b1ptr);
			t1=fre[i].birhthdate.mounth;
			fwrite(&t1,sizeof(int),1,b1ptr);
			t1=fre[i].birhthdate.year;
			fwrite(&t1,sizeof(int),1,b1ptr);
			
	}
		else{//add younger
			fwrite(&fre[i].name, sizeof(char), strlen(fre[i].name), b1ptr);
	}
		}
  	return(0);
  }
