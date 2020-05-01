#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[1000];int count[10],i;
    scanf("%s",s);
    for(i=0;i<10;i++)
    count[i]=0;
    for(i=0;i<strlen(s);i++)
    { 
        switch(s[i]){
             case '0':count[0]++;break;
             case '1':count[1]++;break;
             case '2':count[2]++;break;
             case '3':count[3]++;break;
             case '4':count[4]++;break;
             case '5':count[5]++;break;
             case '6':count[6]++;break;
             case '7':count[7]++;break;
             case '8':count[8]++;break;
             case '9':count[9]++;break;

        }
    }
    for(i=0;i<10;i++)
    printf("%d ",count[i]);

    return 0;
}
