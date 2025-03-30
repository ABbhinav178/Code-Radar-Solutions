#include<stdio.h>
int main(){
    int n,sec_large,large;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>sec_large && arr[i]<large){
            sec_large=arr[i];
        }
    }
    printf("%d",sec_large);

}