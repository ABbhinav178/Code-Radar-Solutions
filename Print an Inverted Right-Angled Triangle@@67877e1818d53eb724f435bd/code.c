#include<stdio.h>
int main(){
    int row,cols;
    printf("enter the number of row");
    scanf("%d",&row);
    printf("enter the number of cols ");
    scanf("%d",&cols);
    for(int i = 1 ; i <=row; i--){
        for (int j = 1; j<=cols; j++)
        {
            printf("%-5d",i*j);
        }
        printf("\n");
    }


    return 0;
}