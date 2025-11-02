#include <stdio.h>
int main(){
    //using arithmetic operation
    int a=12,b=34;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Using arithmetic operations: %d,%d",a,b);

    //using bitwise XOR
    int x = 33, y = 56;
    if(x!=y){
        x = x^y;
        y = x^y;
        x = x^y;
    }
    printf("\nUsing bitwise XOR operations: %d,%d",x,y);

    //using pointer manipulation
    int m = 45, n = 87;
    int *p = m;
    m = n;
    n = p;
    printf("\nUsing pointer manipulation: %d,%d",m,n);

    //using temporary variable
    int c = 37, d = 52,temp = 0;
    temp = c;
    c = d;
    d = temp;
    printf("\nUsing temporary variable: %d,%d",c,d);

    return 0;

}