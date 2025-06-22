#include <stdio.h>
#include <stdlib.h>

int main(void) {
    //nhap so hang,so cot
    int row,col;
    while (row<0 || row >1000) {
        printf("Please enter a rol between 0 and 1000\n");
        scanf("%d",&row);
    }
    while (col<0 || col >1000) {
        printf("Please enter a col between 0 and 1000\n");
        scanf("%d",&col);
    }
    //cap phat
    int *arr=(int *)malloc(row *col* sizeof(int *));
    if (arr==NULL) {
        printf("Memory allocation error\n");
        return 1;
    }
    //nhap tung phan tu
    printf("Please enter the elements of the array\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("arr[%d][%d] = ",i+1,j+1);
            scanf("%d", &arr[i*col+j]);
        }
    }
    //tong duong cheo chinh
    if (row!=col) {
        printf("The array is not the same\n");
        return 0;
    }
    int cheochinh=0;
    int cheophu =0 ;
    for (int i = 0; i < row; i++) {
        cheochinh +=arr[i*col+i];
        cheophu += arr[i*col+ (col -1-i) ];
    }
    printf("tong cheo chinh : %d\n", cheochinh);
    printf("tong cheo phu : %d\n", cheophu);
    return 0;
}
//123
//456
//789