#include <stdio.h>
#include <string.h>

int main(void){
	int len1,len2;//length of sentence and word
	char sentence[100];
	char word[20],*find;
	
	printf("Enter a sentence:");//get sentence from user
	gets(sentence);
	len1 = strlen(sentence);
	
	printf("Enter the word you want to delete:");//and get word for delete
	gets(word);
	len2 = strlen(word);
	
	find = strstr(sentence,word);//find a word from sentence
	
	while(find!=NULL){//delete process is here
		if(*(find+len2)==' ')
			strcpy(find,find+len2+1);
		else
			strcpy(find,find+len2);
		find = strstr(sentence,word);		
	}
	
	printf("The sentence is %s",sentence);//print new sentence
	
	return(0);
}
