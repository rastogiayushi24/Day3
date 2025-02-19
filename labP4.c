#include <stdio.h>
#include <string.h>

#include <ctype.h>
// Function to check if a given string is a palindrome
int isPalindrome(char str[]) {
int left = 0;
int right = strlen(str) - 1;
while (left < right) {
// Ignore non-alphabetic characters and spaces
while (left < right && !isalnum(str[left])) {
left++;
}
while (left < right && !isalnum(str[right])) {
right--;
}
// Compare characters ignoring case
if (tolower(str[left]) != tolower(str[right])) {
return 0; // Not a palindrome
}
left++;
right--;
}
return 1; // It's a palindrome
}
#include <stdio.h>
// Function to find the most frequent element in an array
int mostFrequentElement(int arr[], int n) {
int frequency[100000] = {0};
int max_count = 0;
int most_frequent = arr[0];
// Count the frequency of each element
for (int i = 0; i < n; i++) {
frequency[arr[i]]++;
if (frequency[arr[i]] > max_count) {
max_count = frequency[arr[i]];
most_frequent = arr[i];
} else if (frequency[arr[i]] == max_count && arr[i] < most_frequent) {
most_frequent = arr[i];
}
}

return most_frequent;
}
int main() {
int n;
// Input the array size
printf("Enter array size: ");
scanf("%d", &n);
int arr[n];
// Input the array elements
printf("Enter elements: ");
for (int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
// Find and print the most frequent element
int result = mostFrequentElement(arr, n);
printf("Most Frequent Element: %d\n", result);
return 0;
}
