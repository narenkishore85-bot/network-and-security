#include<stdio.h>
#include<conio.h>
int main(){
    int w,i,f,frames[50];
    clrscr();
    printf("Enter window size:");
    scanf("%d",&w);
    printf("\nEnter number of frames to transmit: ");
    scanf("%d",&f);
    printf("\nEnter %d frames:",f);
    for(i=1;i<=f;i++){
        scanf("%d",&frames[i]);
        printf("\nWith sliding window protocol the frames will be sent in the following manner (assume no corruption of frames)\n\n");
        printf("After sending %d frames at each stage sender waits for acknowledgement sent by the receiver\n\n",w);
        for(i=1;i<=f;i++){
            if(i%w==0){
                printf("Acknowledgement of above framessent is receved by sender\n\n");
                printf("Acknowledgement of above frames sent is received by sender\n\n");
            }else{
                printf("%d",frames[i]);
            }if(f%w!=0){
                printf("\nAcknowledgement of above frames sent is recived by sender\n");

            }

        }
    }
    getch();
}