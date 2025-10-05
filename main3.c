#include <stdio.h>
#include <string.h>

int main() {
    char data[100];
    int checksum = 0, i;

    printf("Enter some text: ");
    scanf("%s", data);

    for(i = 0; i < strlen(data); i++) {
        checksum += data[i];
    }

    printf("Checksum value: %d\n", checksum);

    return 0;
}

