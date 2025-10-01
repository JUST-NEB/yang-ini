#include <stdio.h>

int main() {
    char name[101];  // sesuai constraints: max 100 karakter
    fgets(name, sizeof(name), stdin);

    // hapus newline di akhir input (kalau ada)
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == '\n') {
            name[i] = '\0';
            break;
        }
    }

    printf("Congrats \"%s\" for joining the CS department at BINUS.\n", name);
    return 0;
}