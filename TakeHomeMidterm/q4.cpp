#include <stdio.h>
#include <string.h>
#define BLANK ' '

int startST(char string[],int size){//take words starting with 'ST'
	int count=0,i;
	
	if(string[0]=='s'||string[0]=='S')//s and S first
		if(string[1]=='t'||string[1]=='T')//t and T second
		count++;
	
	for(i=0;i<size;i++){
		if(string[i]==BLANK)//we jump to the word after i's the blank
			if(string[i+1]=='s'||string[i+1]=='S')
				if(string[i+2]=='t'||string[i+2]=='T')
				count++;	
	}
	
	return(count);
}

int numST(char string[],int size){//take total 'ST' from sentence and the doing same things
	int i,count=0;
	
	for(i=0;i<size;i++){
		if(string[i=='s'||string[i]=='S'])
			if(string[i+1]=='t'||string[i+1]=='T')
			count++;
	}   
   
   return(count);
}

int lastST(char string[],int size){//take words ending with 'ST' and doing same things
	int i,count=0;
	
		if(string[size-1]=='t'||string[size-1]=='T')
			if(string[size-2]=='s'||string[size-2]=='S')
			count++;
		
	for(i=0;i<size;i++){
		if(string[i]==BLANK)
			if(string[i-1]=='t'||string[i-1]=='T')
				if(string[i-2]=='s'||string[i-2]=='S')
				count++;	
		
	}
	
	return(count);
}

int main(void)
{
	int size;
	char sentence[100];
	
	printf("Enter sentence:\n");
	gets(sentence);//take the sentence
	
	size = strlen(sentence);//take the size of the words read
	
	printf("There are %d 'ST's in sentence .",numST(sentence,size));//print all numST, startST and lastST 
	printf("There are %d words starting with 'ST'",startST(sentence,size));
	printf("There are %d words ending with 'ST'",lastST(sentence,size));

	return(0);
	
}


