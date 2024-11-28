#include<stdio.h>
int main(){
	int n, i, j;
	//khai bao mang
	int listnumbers[n];
	
	printf("hay nhap mot do dai cua mang : ");
	scanf("%d", &n);
	
    // nhap cac phan tu trong mang
    for(i=0; i<n; i++){
    	printf("listnumbers[%d] : ", i);
    	scanf("%d", &listnumbers[i]);
	}
	// nhap phan tu can kiem tra
	printf("Hay nhap phan tu can kiem tra : ");
	scanf("%d", &j);
	
	// kiem tra phan tu co xuat hien trong mang khong???
	int found = 0;
    for (i = 0; i < n; i++) {
        if (listnumbers[i] == j) {
            printf("Vi tri phan tu trong mang la %d.\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\Phan tu khong ton tai trong mang.\n");
    }

    return 0;
}
	
