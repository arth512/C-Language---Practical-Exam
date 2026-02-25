#include <stdio.h>
#include <ctype.h>   // tolower() ke liye

void countConsonants(char str[]) {
    int count[26] = {0};   // a se z tak ke liye count
    int i;
    char ch;

    for(i = 0; str[i] != '\0'; i++) {
        ch = tolower(str[i]);   // capital ko small me convert

        // check: alphabet hai aur vowel nahi hai
        if(ch >= 'a' && ch <= 'z') {
            if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
                count[ch - 'a']++;
            }
        }
    }

    // Result print karna
    printf("\nConsonants count:\n");
    for(i = 0; i < 26; i++) {
        if(count[i] > 0) {
            printf("%c : %d\n", i + 'a', count[i]);
        }
    }
}

int main() {
    char sentence[200];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    countConsonants(sentence);
}
