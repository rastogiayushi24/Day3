#include <stdio.h>
#define MAX_STUDENTS 100
#define MAX_SUBJECTS 100
void calculateTotalMarks(int marks[][MAX_SUBJECTS], int n, int m, int totalMarks[]) {
for (int i = 0; i < n; i++) {
totalMarks[i] = 0;
for (int j = 0; j < m; j++) {
totalMarks[i] += marks[i][j];
}
}
}
void sortStudents(int totalMarks[], int n, int sortedIndices[]) {
for (int i = 0; i < n; i++) {
sortedIndices[i] = i;
}
for (int i = 0; i < n - 1; i++) {
for (int j = 0; j < n - i - 1; j++) {
if (totalMarks[sortedIndices[j]] < totalMarks[sortedIndices[j + 1]]) {
int temp = sortedIndices[j];
sortedIndices[j] = sortedIndices[j + 1];
sortedIndices[j + 1] = temp;
}
}
}
}
int main() {
int n, m;
int marks[MAX_STUDENTS][MAX_SUBJECTS];
int totalMarks[MAX_STUDENTS];
int sortedIndices[MAX_STUDENTS];
printf("Enter number of students: ");
scanf("%d", &n);
printf("Enter number of subjects: ");
scanf("%d", &m);
printf("Enter marks:\n");

for (int i = 0; i < n; i++) {
printf("Student %d: ", i + 1);
for (int j = 0; j < m; j++) {
scanf("%d", &marks[i][j]);
}
}
calculateTotalMarks(marks, n, m, totalMarks);
sortStudents(totalMarks, n, sortedIndices);
printf("Sorted students based on total marks:\n");
for (int i = 0; i < n; i++) {
int studentIndex = sortedIndices[i];
printf("Student %d: Total Marks = %d\n", studentIndex + 1,
totalMarks[studentIndex]);
}
return 0;
}
