#include<stdio.h>
int main() {
    FILE *file;
    int n;
    char line[100];
    printf("Nhap so luong dong muon ghi vao file: ");
    scanf("%d", &n);
    file = fopen("bt05.txt", "w");
    if (file == NULL) {
        printf("Khong mo duoc file.\n");
        return 1; 
    }
    getchar();
    for (int i = 1; i <= n; i++) {
        printf("Nhap noi dung dong %d: ", i);
        fgets(line, sizeof(line), stdin); 
        fprintf(file, "%s", line);
    }
    fclose(file);
    file = fopen("bt05.txt", "r");
    if (file == NULL) {
        printf("Khong mo duoc file de doc.\n");
        return 1; 
    }
    printf("\nNoi dung file bt05.txt:\n");
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    fclose(file);
    return 0;
}


