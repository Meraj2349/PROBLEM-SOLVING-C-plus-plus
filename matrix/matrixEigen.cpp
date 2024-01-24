#include<bits/stdc++.h>

using namespace std;
class Matrix {
private:
    vector<vector<int>> data;
    int rows, cols;

public:
    Matrix(int rows, int cols) : rows(rows), cols(cols) {
        data.resize(rows, vector<int>(cols, 0));
    }

    void set(int i, int j, int value) {
        data[i][j] = value;
    }

    int get(int i, int j) const {
        return data[i][j];
    }

    Matrix operator+(const Matrix& other) const {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.set(i, j, data[i][j] + other.get(i, j));
            }
        }
        return result;
    }

    Matrix operator-(const Matrix& other) const {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.set(i, j, data[i][j] - other.get(i, j));
            }
        }
        return result;
    }

    Matrix operator*(const Matrix& other) const {
        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.cols; ++j) {
                for (int k = 0; k < cols; ++k) {
                    result.set(i, j, result.get(i, j) + data[i][k] * other.get(k, j));
                }
            }
        }
        return result;
    }

    void print() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int rows, cols;

    // Get dimensions of matrices
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    Matrix A(rows, cols);
    Matrix B(rows, cols);

    // Input for matrix A
    cout << "Enter elements for matrix A:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            int value;
            cin >> value;
            A.set(i, j, value);
        }
    }

    // Input for matrix B
    cout << "Enter elements for matrix B:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            int value;
            cin >> value;
            B.set(i, j, value);
        }
    }

    // Perform operations
    Matrix C = A + B;
    Matrix D = A - B;
    Matrix E = A * B;

    // Output results
    cout << "A + B:" << endl;
    C.print();

    cout << "A - B:" << endl;
    D.print();

    cout << "A * B:" << endl;
    E.print();

    return 0;
}
