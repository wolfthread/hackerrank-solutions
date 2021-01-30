#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int marks_summation(int* marks, int number_of_students, char gender) {
    // Begin Solution
    //---------------------------------------------------------------------------------------
    int girls = 0;
    int boys = 0;
    for (int i = 0; i < number_of_students; i+=2) {
        boys += marks[i];
    }
    for (int i = 1; i < number_of_students + 1; i+=2) {
        girls += marks[i];
    }
    if (gender == 'g') {
        return girls;
    } else if (gender == 'b') {
        return boys;
    }
    return 0;
    //---------------------------------------------------------------------------------------
    // End Solution  
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}