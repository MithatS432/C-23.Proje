#include <stdio.h>
#include <errno.h>
#include <string.h>

int main() {
    FILE *file = fopen("non_existent_file.txt", "r");
    if (file == NULL) {
        // Hata olu�tuysa, errno'yu kullanarak hata kodunu al�r�z
        perror("Dosya acilamadi");

        // strerror ile hata kodunu daha ayr�nt�l� bir �ekilde yazd�r�r�z
        printf("Hata mesaji: %s\n", strerror(errno));

        return 1;
    }

    // Dosya ba�ar�yla a��ld�ysa
    fclose(file);
    return 0;
}
