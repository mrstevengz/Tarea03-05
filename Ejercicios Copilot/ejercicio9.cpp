#include <iostream>
#include <vector>

using namespace std;

// Function to multiply two matrices
vector<vector<int>> multiplyMatrices(vector<vector<int>>& matrixA, vector<vector<int>>& matrixB) {
    int rowsA = matrixA.size();
    int colsA = matrixA[0].size();
    int rowsB = matrixB.size();
    int colsB = matrixB[0].size();

    if (colsA!= rowsB) {
        cout << "Error: Matrices are not compatible for multiplication." << endl;
        exit(1);
    }

    vector<vector<int>> result(rowsA, vector<int>(colsB, 0));

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    return result;
}

int main() {
    int rowsA, colsA, rowsB, colsB;

    cout << "Enter the number of rows for matrix A: ";
    cin >> rowsA;
    cout << "Enter the number of columns for matrix A: ";
    cin >> colsA;

    cout << "Enter the number of rows for matrix B: ";
    cin >> rowsB;
    cout << "Enter the number of columns for matrix B: ";
    cin >> colsB;

    vector<vector<int>> matrixA(rowsA, vector<int>(colsA, 0));
    vector<vector<int>> matrixB(rowsB, vector<int>(colsB, 0));

    cout << "Enter the elements of matrix A:" << endl;
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            cin >> matrixA[i][j];
        }
    }

    cout << "Enter the elements of matrix B:" << endl;
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            cin >> matrixB[i][j];
        }
    }

    vector<vector<int>> result = multiplyMatrices(matrixA, matrixB);

    cout << "The resulting matrix is:" << endl;
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[0].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}