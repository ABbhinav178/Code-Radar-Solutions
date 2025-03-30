#include<stdio.h>
int main(){
    int arr[],fre[100];
    int n ,i,j,count;
    csanf("%d",&n);
    arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        freq[i]=-1;

    }
    for(i=0;i<n;i++){
        count=1;
        if(freq[i]==-1){
            for(j=i;j<n;j++){
                if(arr[i]==arr[j])
                count++;
                freq[j]=0;
            }
        }
        freq[i]=count;
    }
}
