#include <string.h>

int main ( ) {

    int i, space;
    char str[]="Hello Good Morning Welcome To PSR";

    for (i=0; i<strlen(str); i++) {
        if (str[i]==' ') {
            space++;
            printf("%d\t", space);
        }
    }
    return 0;
}
