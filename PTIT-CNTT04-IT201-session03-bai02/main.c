#include <stdio.h>
#include <stdlib.h>

int main(void) {
    //Nhap so luong phan tu
    int n=0;
    while (n<=0 || n>100) {
        printf("Please input a number between 1 and 100\n");
        scanf("%d",&n);
    }
    //cap phat
    int *arr=(int *)malloc(n*sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed for arr\n");
        return -1;

    }
    //nhap tung phan tu
    printf("Please input array elements\n");
    for (int i = 0; i < n; i++) {
        printf("Please input number %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    //so lon nhat
    int max=arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i]>arr[i+1]) {
            max=arr[i];
        }
    }
    printf("Max number is: %d\n",max);
    free(arr);
    return 0;
}
