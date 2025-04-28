#include <stdio.h>
#include <errno.h>
#include <string.h>

int main() {
    FILE *file = fopen("non_existent_file.txt", "r");
    if (file == NULL) {
        // Hata oluþtuysa, errno'yu kullanarak hata kodunu alýrýz
        perror("Dosya acilamadi");

        // strerror ile hata kodunu daha ayrýntýlý bir þekilde yazdýrýrýz
        printf("Hata mesaji: %s\n", strerror(errno));

        return 1;
    }

    // Dosya baþarýyla açýldýysa
    fclose(file);
    return 0;
}
