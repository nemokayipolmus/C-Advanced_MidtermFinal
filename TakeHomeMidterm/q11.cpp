#include <stdio.h>
#include <string.h>

void ra(char arr[],int pos,int size){//take sentence size and pos from main
	int i;
	
	if(pos==size){
		return;
	}
	
	for(i=pos;i<size;i++){//Editing individual pos until you sync size
		printf("%c",arr[i]);
	}
	
	printf("\n");//jump line
	
	ra(arr,pos+1,size);
}

void rb(char arr[],int pos,int size){//take sentence size and pos from main
	int j;
	
	if(pos>=size)
		return;
		
	for(j=pos;j<size;j++){//Editing individual pos until you sync
		printf("%c",arr[j]);
	}
	
	printf("\n");//jump line
	
	rb(arr,pos+1,size-1);	
}

int main(void){
	int size,size2;
	char arr[] = "THE EXAM";//take the sentences 
	char arr2[] = "THE EXAM IS VERY EASY";
	
	size = strlen(arr);//take the sentence's sizes
	size2 = strlen(arr2);
	
	ra(arr,0,size);//call ra and rb fuctions
	rb(arr2,0,size2);
	
	return(0);
}
