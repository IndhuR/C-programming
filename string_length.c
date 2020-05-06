#include<stdio.h>
int strlen(char ptr[ ]){
	int count =0;
	while(ptr[count]!='\0')
	count++;
	return count;
}
int main(){
	char ptr[100];
	printf("enter any string :");
	scanf("%s",ptr);
	printf("\n");
	printf("%d",strlen(ptr));
	return 0;
}
