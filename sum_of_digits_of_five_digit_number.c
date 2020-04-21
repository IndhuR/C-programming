#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    int n,i,sum;
    scanf("%d", &n);
    do{
        i=n%10;
        n=n/10;
        sum+=i;

    
    }while(n>9);
    printf("%d",sum+n);

}
