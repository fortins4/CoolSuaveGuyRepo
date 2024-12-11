#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct AlphabetCounts {
    int count;
    char currLetter;
};

void Counting(struct AlphabetCounts alphabet[]) {
    FILE *fptr;
    fptr = fopen("fairytale.txt", "r");
    char text[1000];
    fgets(text, 1000, fptr);
    int length = strlen(text);

    for(int n = 0; n <length; n++)
    {
        char let = text[n];
        let = tolower(let);

        for(int x = 0; x<26; x++) {
            if(let == alphabet[x].currLetter) {
                alphabet[x].count++;
                break;
            }
        }
    }

    fclose(fptr);
}

int main() {
    struct AlphabetCounts alphabet[26];

    for(int k = 0; k<26; k++) {
        alphabet[k].currLetter = 'a' + k;
        alphabet[k].count = 0;
    }

    Counting(alphabet);

    printf("Letter counts:\n");
    for (int x = 0; x<26; x++) {
        printf("%c: %d\n", alphabet[x].currLetter, alphabet[x].count);
    }

    return 0;
}