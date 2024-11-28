#include<stdio.h>
int main(){
	int n;
	printf("Hay nhap mot so nguyen 1---5 : ");
	scanf("%d", &n);
    int list[n][n];
	
	printf("Nhap ca phan tu cho mang 2 chieu : \n");
    for (int i = 0; i<n; i++) {
        for (int j = 0; j < n; j++) {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &list[i][j]);
        }
    }
    printf("Mang 2 chieu duoi ma tran vuong :\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", list[i][j]);
        }
        printf("\n"); 
    }
    
	
	return 0;
}
