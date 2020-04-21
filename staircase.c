#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            if(j>=num-1-i)
            printf("#");
            else
            printf(" ");
        }printf("\n");
    }
    return 0;
}
