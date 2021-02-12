#include <stdio.h>

void bubblesort(int arr[],int size){//take the size and content and sort it by bubblesort
	int x,temp;
	
	if(size==1){
		return;	
	}
	
	for(x=0;x<size-1;x++){//take the content individually
		if(arr[x]>arr[x+1]){//and sort it here
			temp = arr[x];
			arr[x] = arr[x+1];
			arr[x+1] = temp;	
		}	
	}
	
	bubblesort(arr,size-1);
}

int findLocation(int arr[],int size){//take the size and content again and locate them
	int i,y=0,index;
	
	if(size==0){
		return(-1);
	}
	if(arr[size]==arr[size-1]){
		return size;
	}
	else{
		findLocation(arr,size-1);
	}
}

int main(void)
{
	int size,i,pos,x;
	
	printf("Enter size:");//take size from user
	scanf("%d",&size);
	int arr[size];
	
	for(i=0;i<size;i++){
		scanf("%d\n",&arr[i]);
	}
	
	bubblesort(arr,size);//call the bubblesort and findLocation fuctions
	pos = findLocation(arr,size);
	
	printf("The position of last occurence is:%d",pos);
	
	for(x=0;x<size;x++){
		printf("%d\n",arr[x]);
	}
	
	return(0);
}

