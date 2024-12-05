#include <stdio.h>
#define MAX_SIZE  100

int main(){

    int arr[MAX_SIZE];
    int soPhanTu = 0;
    int luachon;

    do{
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

          if (luaChon == 1){
            printf("Nhap so phan tu: ");
            scanf("%d", &soPhanTu);
            if (soPhanTu > MAX_SIZE) {
                printf("So phan tu vuot qua gioi han!\n");
                soPhanTu = MAX_SIZE;
            }
            printf("Nhap gia tri cac phan tu:\n");
            for (int i = 0; i < soPhanTu; i++) {
                printf("Phan tu %d: ", i + 1);
                scanf("%d", &arr[i]);
            }
            else if( luachon == 2){
                printf(" Gia tri cac phan tu la: ");
                for( int i = 0; i < soPhanTu; i++){
                    printf("[%d]", &arr[i]);
                }
                printf(" \n");
            }
            } else if (luaChon == 6) {
            int chiSo;
            printf("Nhap chi so phan tu can xoa (0 den %d): ", soPhanTu - 1);
            scanf("%d", &chiSo);
            if (chiSo < 0 || chiSo >= soPhanTu) {
                printf("Chi so khong hop le!\n");
            } else {
                for (int i = chiSo; i < soPhanTu - 1; i++) {
                    mang[i] = mang[i + 1];
                }
                soPhanTu--;
            }
            } else if (luaChon == 5) {
            if (soPhanTu < MAX_SIZE) {
                int phanTu;
                printf("Nhap phan tu can them: ");
                scanf("%d", &phanTu);
                for( int i = soPhanTu -1; i >=0; i--){
                    arr[i + 1] = arr[i];                }
                mang[soPhanTu] = phanTu;
                soPhanTu++;
        
            } else {
                printf("Mang da day!\n");
            }
            } else if (luaChon == 7) {
            for (int i = 0; i < soPhanTu - 1; i--){
                    if( arr[i] > arr[i -1]){
                        int temp = arr[i];
                        arr[i] = arr [i - 1];
                        arr[i]-1 = temp;
                    }
                }
            }
            printf("Mang da duoc sap xep theo thu tu giam dan (Insertion sort).\n");

               
            }

                

            }


           

          
        

    




    return 0;
}