#include<stdio.h>
#include<stdlib.h>
void main(){
    int i,n,r,a;
    n=5;
    printf("The number of packet are:%d\n",n);
    for(i=1;i<=n;i++){
        printf("The packets sent is:%d\n",i);
        r=rand()%2;
        if(r==1){
            a=rand()%2;
            if(a==1){
                printf("acknowledgement number:%d\n",i+1);
            }else{
                printf("no acknowledgement number:%d\n");
                i--;
            }
        }else{
            printf("timeout,resend\n");
            i--;
        }
    }
}