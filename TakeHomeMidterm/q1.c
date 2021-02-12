#include <stdio.h>
#include <string.h>

int main(void)
{
	int x=0;
	
	while(x<10){	
		int i,j=0,length,m,count=0;
		char first[40],last[40],mid[40]="";//we define 3 type of name 
		
		printf("Enter name:");
		gets(first);//take name
		
		length = strlen(first);//take length first
		i = length-1;
		
		while(first[i]!=' '){//when we see a first gap, we get the first word
			i--;
			count++;
		}
		
		m = length-count;//we subtract the length of the first word from the total length
		
		while(first[m]!= '\0'){	//get second word
			last[j] = first[m];
			j++;
			m++;
			count++;
		}
		
		m = length-count;//substract length of first and second word from total length
		
		while(first[m]!= '\0'){//get third word if there exist
			last[j]=first[m];
			j++;
			m++;
		}
		
		for(i=0;i<count;i++){//reverse process
			first(strlen(first)-1) = '\0';
		}
		
		strcat(mid,last);
		printf("New version of name: %s\n",strcat(mid,first));//print new reversed version of name
		
		x++;
	}
	
	return(0);
}
