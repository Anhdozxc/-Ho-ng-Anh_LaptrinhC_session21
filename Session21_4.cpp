#include<stdio.h>

int main() {
    FILE *file;
    char line[100];
    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Khong mo duoc file.\n");
        return 1; 
    }
    if (fgets(line, sizeof(line), file) != NULL) {
        printf("Dau tien trong file: %s", line);
    } else {
        printf("File rong hoac khong doc duoc dong dau tien.\n");
    }
    fclose(file);
    return 0;
}


