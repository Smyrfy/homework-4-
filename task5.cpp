#include <iostream>
#include <vector>

using namespace std;

void snakePattern(int rows, int cols) {
    vector<vector<int>> matrix(rows, vector<int>(cols, 0));
    
    int num = 1;

    for (int i = 0; i < rows; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = num++;
            }
        } else { 
            for (int j = cols - 1; j >= 0; j--) {
                matrix[i][j] = num++;
            }
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;
    
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    
    snakePattern(rows, cols);
    
    return 0;
}

