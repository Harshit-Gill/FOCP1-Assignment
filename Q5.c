#include <stdio.h>
int main(){
    int x,y;
    printf("Enter x coordinate: ");
    scanf("%d",&x);
    printf("Enter y coordinate: ");
    scanf("%d",&y);

    if(x==0 && y == 0)
         printf("The coordinates (%d,%d) lies on the origin",x,y);
    
    else if(x==0)
         printf("The coordinates (%d,%d) lies on the y-axis!!",x,y);

    else if(y==0)
         printf("The coordinates (%d,%d) lies on the x-axis!!",x,y);

    else if(x>0 && y>0)
        printf("The coordinates (%d,%d) lies in the First quadrant!!",x,y);
    
    else if(x<0 && y>0)
        printf("The coordinates (%d,%d) lies in the Second quadrant!!",x,y);
    
    else if(x<0 && y<0)
         printf("The coordinates (%d,%d) lies in the Third quadrant!!",x,y);

    else if(x>0 && y<0)
         printf("The coordinates (%d,%d) lies in the Fourth quadrant!!",x,y);

    return 0;
}