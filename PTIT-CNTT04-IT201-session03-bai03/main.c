#include <stdio.h>
#include <stdlib.h>

int main(void) {
    //nhap so luong phan tu
    int n=0;
    while (n<=0 || n>100) {
        printf("Please enter a number between 1 and 100\n");
        scanf("%d",&n);
    }
    //cap phat
    int *arr=(int *)malloc(n*sizeof(int));
    if (arr==NULL) {
        printf("Memory allocation error\n");
        return 1;
    }
    //nhap tung phan tu
    printf("Please enter array elements\n");
    for (int i=0;i<n;i++) {
        printf("phan tu thu arr[%d]: \n",i+1);
        scanf("%d",&arr[i]);
    }
    //tinh tong
    int sum=0;
    int tb;
    for (int i=0;i<n;i++) {
        sum+=arr[i];

    }
    tb=sum/n;
    printf("sum=%d\n",sum);
    printf("tb=%d\n",tb);
    free(arr);
    return 0;
}
