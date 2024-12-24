#include<stdio.h>
int main() {
    FILE *file1, *file2;
    char line[100];
    file1 = fopen("bt01.txt", "r");
    if (file1 == NULL) {
        printf("Khong mo duoc file bt01.txt.\n");
        return 1; 
    }
    file2 = fopen("bt06.txt", "w");
    if (file2 == NULL) {
        printf("Khong mo duoc file bt06.txt.\n");
        fclose(file1); 
        return 1; 
    }
    while (fgets(line, sizeof(line), file1) != NULL) {
        fprintf(file2, "%s", line); 
    }
    fclose(file1);
    fclose(file2);
    printf("Sao chep noi dung tu bt01.txt sang bt06.txt thanh cong.\n");
    return 0;
}



