#include<stdio.h>
#include<conio.h>
#include<math.h>
int n,r;
struvt frame{
    char ack;
    int data;
}frm[10];
int sender(void);
void recvfrm(void);
void resend(void);
void resend1(void);
void goback(void);
void selective(void);
int main(){
    int c;
    clrscr();
    do{

        printf("\n\n1.selective repeat ARQ\n2.goback ARQ\n3.exit");
        printf("\nEnter your choice: ");
        scanf("%d",&c);
        switch(c){
            case 1:selective();
                break;
            case 2:goback();
                break;
            case 3:exit(0);
                break;
        }
    }while(c!=4);
}
void goback(){
    sender();
    recvfrm();
    resend1();
    printf("\nall packets are sent sucessfully\n");
}
void selective(){
    frm[r].arc='y';
    printf("\nThe recived packed is %d",frm[r].data);
}
int sender(){
    int i;
    printf("\nEnter the no. of packets to be sent:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nEnter the no of packets to be sent: ");
        scanf("%d",&frm[i].data);
        frm[i].ack='y';
    }
    return 0;
}
void recvfrm(){
    int i;
    rand();
    r=rand()%n;
    frm[r].ack='n'
    for(i=0;i<n;i++){
        if(frm[i].ack=='n')
        printf("\nThe packets number %d is not recived\n",r);
    }
}
void resend(){
    printf("\nresend packets %d",r);
    sleep(2);
    frm[r].ack='y';
    printf("\nThe reciver packet is %d",frm[r].data);
}
void resend1(){
    int i;
    printf("\nresend from packet %d",r);
    for(i=r;i<n;i++){
        sleep(2);
        frm[i].ack='y';
        printf("\nRecived data of parent  %d ",i,frm[i].data);
    }
}