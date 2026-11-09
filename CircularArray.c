 #include <stdio.h>
 #define MAX 5
    int main(){
        int i;
        int arr[MAX];
        printf("enter 5 element: ");
        for(i=0;i<5;i++){
            scanf("%d",&arr[i]);
        }
        int index;
        printf("Enter from which index you want to print the array: ");
        scanf("%d",&index);
        printf("Array from index %d: ",index);
        for(i=0;i<5;i++){
            printf("%d ",arr[index]);
            index=(index+1)%MAX;
        }
    }