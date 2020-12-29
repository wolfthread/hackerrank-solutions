def roundUp(grade):
    nextMult = grade
    if grade >= 38:
        if grade % 5 == 0:
            nextMult = grade + 5
        else:
            while nextMult % 5 != 0:
                nextMult += 1
        if nextMult - grade < 3 and grade >= 38:
            grade = nextMult
    return grade

grades = []

n = int(input())
for i in range(n):
    grades.append(int(input()))

newGrades = []
for grade in grades:
    newGrades.append(roundUp(grade))
for new_grade in newGrades:
    print(new_grade)

        