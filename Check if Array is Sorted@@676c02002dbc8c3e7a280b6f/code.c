#include<stdio.h>
int issorted(int arr[],int n){
    
    for(i=0;i<n-1;i++){
       if(arr[i]>arr[i+1]){
        return 0; //not sorted
    } 
}
return 1;
}
int main(){
    scamf("%d",&n);
    int arr[n];
    for(int ii=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    if(issorted(arr,n)){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }
}