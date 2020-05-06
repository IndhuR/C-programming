#include<stdio.h>
#include<math.h> 
#include<string.h>
int main(){
	char arr[100];
	int num,total=0,act=0;
	scanf("%s",arr);
	for(int i=0;i<strlen(arr);i++){
		num=(int)arr[i]-48;
		act=act*10+num;
		total+=pow(num,3);
		
	}
	if(act==total)
	printf("It is an amstrong number");
	else
	printf("It is not an amstrong number");
	return 0;
	
}
