#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

void reverseWords(char str[]);

int main() {
    char str[MAX_LENGTH];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = 0;

    reverseWords(str);

    printf("Reversed Sentence: %s\n", str);

    return 0;
}

void reverseWords(char str[]) {
    int start = 0, end = 0;
    int length = strlen(str);

    while (end <= length) {

        if (str[end] == ' ' || str[end] == '\0') {
            int wordEnd = end - 1;
            while (start < wordEnd) {
                char temp = str[start];
                str[start] = str[wordEnd];
                str[wordEnd] = temp;
                start++;
                wordEnd--;
            }
            start = end + 1;
        }
        end++;
    }
}
