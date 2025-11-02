#include <stdio.h>
int main(){
    int choice;
    printf("What do you want? \n1. Binary to Decimal\n2. Decimal to Binary\n==> ");
    scanf("%d",&choice);

    if(choice==1){
        long long binary;
        int decimal = 0, i = 0, remainder;
        printf("Enter a binary number: ");
        scanf("%lld",&binary);

        while(binary!=0){
            remainder = binary % 10;
            binary /= 10;
            decimal += remainder*(1<<i);
            i++;
        }
        printf("decimal equivalent: %d\n",decimal);
    }
    else if(choice == 2){
        int deci;
        long long bin = 0;
        int rem, j = 1;
        printf("Enter a decimal number: ");
        scanf("%d", &deci);

        while (deci!=0){
            rem = deci%2;
            deci /= 2;
            bin += rem*j;
            j *= 10;
        }
        printf("binary equivalent: %lld\n",bin);
    }
    else{
        printf("Invalid input! please select either 1 or 2");
    }
    return 0;
}