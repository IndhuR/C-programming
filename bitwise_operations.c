#include<stdio.h>
static long int count=0;
int max(int *arr,int k){
    int mx=0;
    for(int i=0;i<count;i++){
        if(mx<arr[i]&&arr[i]<k)
        mx=arr[i];
    }
    return mx;
}
int main(){
    int n,k;int and[1000],or[1000],xor[1000];
    scanf("%d%d",&n,&k);
    for(int a=1;a<=n;a++){
        for(int b=a+1;b<=n;b++){
            and[count]=a&b;
            or[count]=a|b;
            xor[count]=a^b;
            count++;

        }
    }
        printf("%d\n%d\n%d",max(and,k),max(or,k),max(xor,k));
    
}
