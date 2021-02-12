#include <stdio.h>
#include <string.h>

int main(void)
{
	int x;
	
	for(x=0;x<10;x++){
		int i=0,j=1,k,l1=0,l2=0,count=0,blank=0,m,n;
		char name[40];
		printf("Enter your name:");
		gets(name);//get the name 
		
		for(n=0;name[n];n++){////when we see a first gap, we get the first word
			if(name[n]==' ')
			blank++;
		}
		
		if(blank==1){
			printf("%s\n",name);//print a first name
		}
		else{
			int len = strlen(name);//get length
			
			while(name[i]!=' '){//l1==first name
				l1++;
				i++;
			}
			
			while(name[len-j]!=' '){//l2== second name
				l2++;
				j++;
			}
			
			for(k=0;k<len;k++){
				if(name[k]==' '&&name[k+l2+1]!='\0'){
					name[k+2]='.';
				
				int lenmid = len-l2-l1-blank;//lenmid is the middle name
				int w = len-l2;
				
				for(k=l1;k<lenmid+1;k++){
					name[k+3]=name[w];
					w++;
				}
				
				printf("%s\n",name);
				}
			}
		}
	}
	
	
	
	retu
}
