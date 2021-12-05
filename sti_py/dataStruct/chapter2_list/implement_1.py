#!/usr/bin/python3
# Matrix Multiplication

N = 5
C = [[0] * N for row in range(N)]
#print(C)

def calculate_matrix(A, B):
    global C

    for i in range(N):
        for j in range(N):
            sum = 0
            for k in range(N):
                sum += A[i][k] * B[k][j]
            C[i][j] = sum

def output_matrix(matrix):
    for i in range(N):
        for j in range(N):
            print(' ', matrix[i][j], end='')
        print()

def output_result(A, B):
    global C
    print('\nContnent of Matrix A:')
    output_matrix(A)
    print('\nContnent of Matrix B:')
    output_matrix(B)
    print('\nContnent of Matrix C:')
    output_matrix(C)

def main():
    A = [[0] * N for row in range(N)]
    B = [[0] * N for row in range(N)]

    for i in range(N):
        for j in range(N):
            A[i][j] = j + 1

    for i in range(N):
        for j in range(N):
            B[i][j] = -(j - 5)

    calculate_matrix(A, B)
    output_result(A, B)

main()




