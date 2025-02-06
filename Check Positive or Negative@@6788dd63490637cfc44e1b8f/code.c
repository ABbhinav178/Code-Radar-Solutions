int main(){
    int num;
    printf("enter  the number:");
    scanf("%d",&num);
    switch (num >0){
        case 1:
        printf("postive");
        break;
        case 0:
        switch (num <0){
            case 1:
            printf("negative");
            break;
            
            
        }
    }
    return 0;
}