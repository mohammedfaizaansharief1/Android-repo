#include<stdio.h>
int main(){
    int a,b,n;
    printf("Enter the numbers:");
    scanf("%d%d",&a,&b);
    for(int i=0;i<n;i++){
       if(i%2==0){
        printf("even numbers");
       }
       else{
        printf("odd numbers");
       }
    }
    return 0;
}