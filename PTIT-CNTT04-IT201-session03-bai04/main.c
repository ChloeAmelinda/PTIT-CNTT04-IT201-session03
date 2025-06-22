#include <stdio.h>
#include <stdlib.h>

int main(void) {
    //nhap so hang so cot
    int row=0,col=0 ;
    while (row <=0 || row>1000) {
        printf("Please enter a number between 0 and 1000\n");
        scanf("%d",&row);
    }
    while (col <=0 || col>1000) {
        printf("Please enter a number between 0 and 1000\n");
        scanf("%d",&col);
    }
    //cap phat
    int *arr=(int *)malloc(row*col*sizeof(int));
    if (arr==NULL) {
        printf("Memory allocation failed for arr\n");
        return 1;
    }
    //nhap tung phan tu
    printf("Please enter the elements\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("arr[%d][%d] = ",i+1,j+1);
            scanf("%d",&arr[i*col+j]);
        }
    }
    //tim max,min
    int max=arr[0];
    int min=arr[0];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i*col +j]> max) {
                arr[i*col +j]=max;
            }
            if (arr[i*col +j]< min) {
               min= arr[i*col +j];
            }
        }
    }
    printf("Max = %d\n",max);
    printf("Min = %d\n",min);
    free(arr);
    return 0;
}
