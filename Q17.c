#include <stdio.h>
int main(){
    int n;
    printf("How many elements in array: ");
    scanf("%d",&n);

    int arr[n],i;

    for(i=0;i<n;i++){
        printf("Enter array element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Array before deletion:\n");
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }printf("\n");

    int position,mid;

    printf("From where do you want to delete element?\n");
    printf("1. Front\n2. Middle\n3. End\n");
    scanf("%d",&position);

    if(n==0){
        printf("Array is empty, no elements to delete!");
    }

    if(position==1){ 
        for(i=0;i<n-1;i++){
            arr[i] = arr[i+1];
        }
        n--;
    }

    else if(position==2){
        mid = n/2;
        for(i=mid;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        n--;
    }

    else if(position==3){
        n--;
    }
    else{
        printf("Invalid position!");
        return 0;
    }
    

    printf("Array after deletion:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;


}