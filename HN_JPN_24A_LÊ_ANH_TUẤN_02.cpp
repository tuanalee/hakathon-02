#include <stdio.h>


#define MAX_SIZE 100


int main() {
    int arr[MAX_SIZE];
    int soPhanTu = 0;
    int luachon;

    do {
        printf("   Menu  \n");
        printf("1. Nhap so phan tu va gia tri cho mang\n");
        printf("2. In ra cac gia tri phan tu trong mang\n");
        printf("3. Dem so luong cac phan tu chan le trong mang\n");
        printf("4. Tim gia tri lon thu 2 trong mang\n");
        printf("5. Them mot phan tu vao dau mang\n");
        printf("6. xoa phan tu\n");
        printf("7. Sap xep mang theo thu tu giam dan (Insertion sort)\n");
        printf("8. Tim kiem phan tu trong mang\n");
        printf("9. In toan bo so nguyen to trong mang da duoc binh phuong\n");
        printf("10. Sap xep theo thu tu giam dan (Bubble sort)\n");
        printf("11. Thoat chuong trinh\n");
        printf(" Moi ban lua chon: ");
        scanf("%d", &luachon);

        if (luachon == 1) {
            
            printf("Nhap so phan tu: ");
            scanf("%d", &soPhanTu);
            if (soPhanTu > MAX_SIZE) soPhanTu = MAX_SIZE;
            printf("Nhap gia tri cac phan tu:\n");
            for (int i = 0; i < soPhanTu; i++) {
                printf("Phan tu %d: ", i + 1);
                scanf("%d", &arr[i]);
            }
        } else if (luachon == 2) {
            
            printf("Gia tri cac phan tu trong mang: ");
            for (int i = 0; i < soPhanTu; i++) {
                printf("[%d] ", arr[i]);
            }
            printf("\n");
        } else if (luachon == 4) {
           
            int first = arr[0], second = -1;
            for (int i = 1; i < soPhanTu; i++) {
                if (arr[i] > first) {
                    second = first;
                    first = arr[i];
                } else if (arr[i] > second && arr[i] != first) {
                    second = arr[i];
                }
            }
            if (second == -1) {
                printf("Khong co gia tri lon thu 2 trong mang\n");
            } else {
                printf("Gia tri lon thu 2 trong mang: %d\n", second);
            }
        } else if (luachon == 5) {
            
            if (soPhanTu < MAX_SIZE) {
                int phanTu;
                printf("Nhap phan tu can them: ");
                scanf("%d", &phanTu);
                for (int i = soPhanTu - 1; i >= 0; i--) {
                    arr[i + 1] = arr[i];
                }
                arr[0] = phanTu; 
                soPhanTu++;
                printf("Mang sau khi them: ");
                for (int i = 0; i < soPhanTu; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            } else {
                printf("Mang da day!\n");
            }
        } else if (luachon == 6) {
            
            int chiSo;
            printf("Nhap chi so phan tu can xoa (0 den %d): ", soPhanTu - 1);
            scanf("%d", &chiSo);
            if (chiSo < 0 || chiSo >= soPhanTu) {
                printf("Chi so khong hop le!\n");
            } else {
                for (int i = chiSo; i < soPhanTu - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                soPhanTu--;
                printf("Mang sau khi xoa: ");
                for (int i = 0; i < soPhanTu; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }
        } else if (luachon == 7) {
            
            for (int i = 1; i < soPhanTu; i++) {
                int key = arr[i];
                int j = i - 1;
                while (j >= 0 && arr[j] < key) {
                    arr[j + 1] = arr[j];
                    j--;
                }
                arr[j + 1] = key;
            }
            printf("Mang sau khi sap xep theo thu tu giam dan: ");
            for (int i = 0; i < soPhanTu; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
        
    } while (luachon != 11);

    printf("Cam on ban da su dung chuong trinh!\n");
    return 0;
}
