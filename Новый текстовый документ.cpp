#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int calculateDiagonalSum(int matrix[10][7]) {
    int sum = 0;
    for (int i = 0; i < 10; ++i) {               // функция суммирования чисел
        sum += matrix[i][6 - i];
    }
    return sum;
}

int main() {
    setlocale(LC_ALL, "RU");
        const int rows = 10;
        const int cols = 7;             // создание кол-ва столбцов и сток 
        int matrix[rows][cols];                

        int num = 1;
        for (int i = 0; i < rows; ++i) { //
            for (int j = 0; j < cols; ++j) {
                matrix[i][j] = num;
                num++;
            }
        }

        // Вывод двумерного массива на экран
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << matrix[i][j] << "\t";
            }
            std::cout << std::endl;
        }
        int diagonalSum = calculateDiagonalSum(matrix);
        std::cout << "Сумма : " << diagonalSum << std::endl;

	return 0;
}
