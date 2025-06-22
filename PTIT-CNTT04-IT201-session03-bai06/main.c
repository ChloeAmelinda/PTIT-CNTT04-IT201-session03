#include <stdio.h>
#include <stdlib.h>


int main(void) {
    //nhap so luong ptu
    int n,m;
    printf("Enter the number : ");
    scanf("%d",&n);
    if (n<=0 || n>1000) {
        printf("Invalid Input");
        return 0;
    }
    //cap phat
    int *arr=(int *)malloc(n*sizeof(int));
    if (arr==NULL) {
        printf("Memory Allocation Failed");
        return 1;
    }
    //nhap so luong
    printf("Enter the array  \n");
    for (int i=0;i<n;i++) {
        printf("Enter element arr[%d] : ",i+1);
        scanf("%d",&arr[i]);
    }
    //nhap so luong phan tu muon them
    printf("Nhap so luong muon them : \n");
    scanf("%d",&m);
    if (m>0) {
        arr=(int *)realloc(arr,(n + m) * sizeof(int));
        if (arr==NULL) {
            printf("Memory Allocation Failed");
            return 1;
        }


        printf("Nhap phan tu muon them :");
        for (int i=0;i<m;i++) {
            printf("arr[%d]: ",n+i+1);
            scanf("%d",&arr[n+i]);
        }
        n+=m;
    }
    printf("Mang sau khi them : \n");
    for (int i=0;i<n;i++) {
        printf("%d ",arr[i]);
        if (i<n-1) {
            printf(" ");
        }
    }
    free(arr);
    return 0;

}
