#include <stdio.h>
#include <string.h>
// Function to reverse individual words in a sentence
void reverseWords(char str[]) {

int start = 0, end = 0, length = strlen(str);
while (end <= length) {
if (str[end] == ' ' || str[end] == '\0') {
int left = start, right = end - 1;
while (left < right) {
char temp = str[left];
str[left] = str[right];
str[right] = temp;
left++;
right--;
}
start = end + 1;
}
end++;
}
}
int main() {
char sentence[100];
printf("Enter a sentence: ");
fgets(sentence, sizeof(sentence), stdin);
// Remove newline character if present
sentence[strcspn(sentence, "\n")] = '\0';
reverseWords(sentence);
printf("Reversed Sentence: %s\n", sentence);
return 0;
}
