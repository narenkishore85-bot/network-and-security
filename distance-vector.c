#include<stdio.h>
int dist[50][50],temp[50][50],n,i,j,k,x;
void dvr();
int main(){
    printf("\nEnter the number of nodes: ");
    scanf("%d",&n);
    printf("\nEnter the distance matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&dist[i][j]);
            dist[i][i]=0;
            temp[i][j]=j;
        }
        printf("\n");
    }
    dvr();
    printf("enter value of i & j: ");
    
}