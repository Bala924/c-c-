#include <stdio.h>
#include <string.h>

void char_frequency(char city[], int freq[]) {
    int i;
    for (i = 0; i < strlen(city); i++) {
        freq[city[i] - 'a']++;
    }
}

int main() {
    char city[] = "hydrabad";
    int freq[26] = {0};
    char_frequency(city, freq);

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("%c-%d ", i + 'a', freq[i]);
        }
    }

    return 0;
}
