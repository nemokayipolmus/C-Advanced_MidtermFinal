#include<stdio.h>

int isPrime(int num,int i){  //check a number that is divisible only by itself and 1
							 
	if(num<2)				
		return 0;			
    if(i==1){				
        return 1;
    }else{
       if(num%i==0)		
         return 0;
       else
         isPrime(num,i-1);
    }
}


void disp_bin(FILE* out){//display the content of primes.bin
	int arr[500];
	int size = fread(arr,sizeof(int),500,out);
	
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);

}

int main(){
	FILE *input;	
	input = fopen("others.bin", "wb");
	
	for (int i = 0; i < 100; i++)
		fwrite(&i, sizeof(int), 1, input);
		fclose(input);
	
	input = fopen("others.bin", "rb");//read nums from other.bin
	if(input==NULL)
		printf("It failed to open the file.");
		
	else{

		int nums[500];
		int size = fread(nums, sizeof(int), 500, input);//received numbers are sent to the array
		FILE *output = fopen("primes.bin","wb");
		
		for(int i=0;i<size;i++){//checks if numbers are prime individually
			if(isPrime(nums[i],(int)nums[i]/2)==1){
				fwrite(&nums[i],sizeof(int),1,output);
			}
		}
		
		fclose(output);
		output = fopen("primes.bin","rb");
		disp_bin(output);//print primes.bin 
	}

    return 0;
}
