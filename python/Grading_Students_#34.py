def SamsMethod(grades):
    for i in range(len(grades)):
        if grades[i] >= 38:
            if grades[i] % 5 >= 3:
                grades[i] = grades[i] + (5 - grades[i] % 5)
    return grades

n = int(input())
grades = []
for i in range(n):
    grades.append(int(input()))
result = SamsMethod(grades)

for i in range(len(result)):
    print(result[i])
