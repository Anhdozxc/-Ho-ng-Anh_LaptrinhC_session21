#include<stdio.h>
int main() {
    FILE *file;
    char chuoi[100];
    file = fopen("bt01.txt", "a");
    if (file == NULL) {
        printf("Khong mo duoc file.\n");
        return 1; 
    }
    printf("Nhap chuoi ban muon them vao file: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    fprintf(file, "%s", chuoi);
    fclose(file);
    printf("Da them chuoi vao file thanh cong.\n");
    return 0;
}


