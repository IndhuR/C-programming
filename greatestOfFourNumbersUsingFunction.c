#include <stdio.h>

int max_of_four(int a,int b,int c,int d)
{
    int e[4]={a,b,c,d},k;
    k=e[0];
    for(int i=1;i<4;i++)
    {
if(k>e[i])
continue;
else
{ 
k=e[i];
continue;
}
    }
    return k;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

