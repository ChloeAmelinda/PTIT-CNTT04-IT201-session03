#include <stdio.h>
#include <stdlib.h>

int main(void) {
    //nhap so luong row,col
    int row=0;
    while (row<= 0 || row>1000) {
        printf("Nhap row: ");
        scanf("%d", &row);
    }
    int column=0;
    while (column<= 0 || column>1000) {
        printf("Nhap column: ");
        scanf("%d", &column);
    }
    //cap phat
    int *arr = (int*)malloc(row*column*sizeof(int));
    if (arr == NULL) {
        printf("Malloc Error");
        return 1;
    }
    //nhap tung phan tu
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("a[%d][%d] = ", i+1, j+1);
            scanf("%d", &arr[i*column+j]);
        }
    }
    //nhap hang can tim
    int foundRow ,sum = 0;
    printf("Found row:");
    scanf("%d", &foundRow);
    if (foundRow  <=0 || foundRow >= row) {
        printf("ko ton tai hang can tim ");
        return 0;
    }


    for (int j = 0; j < column; j++) {
            sum += arr[(foundRow-1)*column+j];

    }
    printf("Sum: %d\n", sum);
free(arr);
    return 0;
}
