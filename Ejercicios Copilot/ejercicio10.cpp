#include <iostream>
#include <vector>

using namespace std;

int main(){
    int rows, cols;
    cout << "Enter the numbers of rows: ";
    cin >> rows;
    cout << "Enter the numbers of columns: ";
    cin >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));
    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0;i < rows; i++) {
        for (int j = 0; i < rows; i++){
            cin >> matrix [i][j];
        }
    }

    vector<vector<int>> transpose(cols, vector<int>(rows));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; i < rows; i++){
            transpose[j][i] = matrix [i][j];
        }
    }
    cout << "The matrix is: " << endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; i < rows; i++){
            cout << transpose [i][j] << " ";
        }
        cout << endl;
    }
    
    
}
