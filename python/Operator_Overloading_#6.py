class Matrix(object):
    def __init__(self, matrix):
        self.matrix = matrix

    def __add__(self, other):
        result = []
        for i in range(len(self.matrix)):
            row = []
            for j in range(len(self.matrix[0])):
                row.append(self.matrix[i][j] + other.matrix[i][j])
            result.append(row)
        return Matrix(result)

    def __str__(self):
        result = ""
        for i in range(len(self.matrix)):
            for j in range(len(self.matrix[0])):
                result += str(self.matrix[i][j]) + " "
            result += "\n"
        return result
        

T = int(input())
for i in range(T):
    N, M = map(int, input().split())
    A = []
    a = list(map(int, input().split()))
    for i in range(0, len(a), N):
        A.append(a[i:i+N])
    B = []
    b = list(map(int, input().split()))
    for i in range(0, len(b), N):
        B.append(b[i:i+N])
    matrix_a = Matrix(A)
    matrix_b = Matrix(B)
    print(matrix_a + matrix_b)
