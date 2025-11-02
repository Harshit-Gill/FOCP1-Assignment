#include<stdio.h>
int main(){
    int i , sum = 0 , y ;
    
    printf("Enter the number you want to check: ");
    scanf("%d",&i);
    
    y = i;
    
    while(i>0){
        int x = i%10;
        sum = sum + x*x*x ;
        i = i/10 ;
    }
    if(sum==y)
        printf("The given number is an armstrong number");
    
    else
        printf("The given number is not an armstrong number");
    
        return 0;

}