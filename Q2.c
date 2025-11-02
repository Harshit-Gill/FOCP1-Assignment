#include <stdio.h>
int main(){
    int a,b;
    printf("Enter number A: ");
    scanf("%d",&a);
    printf("Enter number B: ");
    scanf("%d",&b);

    //using iterative method
    while(a != b){
        if(a>b)
            a = a - b;
        else
            b = b - a;
    }
    printf("The HCF of A and B is %d!",a);

    return 0;
}