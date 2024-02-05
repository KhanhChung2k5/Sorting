#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
bool sudukudong(int my2DArray[100][100], int n) {
    for (int i = 0; i < n; i++) {
        bool danhDau[100] = { false };
        for (int j = 0; j < n; j++) {
            if (my2DArray[i][j] > 0) {
                if (danhDau[my2DArray[i][j]]) {
                    return false;
                }
                danhDau[my2DArray[i][j]] = true;
            }
        }
    }
    return true;
}
bool sudokucot(int my2DArray[100][100], int n) {
    for (int j = 0; j < n; j++) {
        bool danhDau[100] = { false };
        for (int i = 0; i < n; i++) {
            if (my2DArray[i][j] > 0) {
                if (danhDau[my2DArray[i][j]]) {
                    return false;
                }
                danhDau[my2DArray[i][j]] = true;
            }
        }
    }
    return true;
}
bool sudoku3to3(int my2DArray[100][100], int n) {
    // duyet vong for qua dong qua cot 
    // duyet qua o 3 to 3 
    // thoa dkieu dong cot thi duyet dk 3 to 3 
    for (int i = 0; i < n; i+=3) {
        for (int j = 0; j < n; j+=3) {
            bool danhDau[100] = { false };
            // duyet qua 3 to 3 
            for (int k = 0; k < 3; k++) {
                for (int h = 0; h < 3; h++) {
                    int temp = my2DArray[i + k][j + h];
                    if (temp > 0) {
                        if (danhDau[temp]) {
                            return false;
                        }
                        danhDau[temp] = true;
                    }
                }
            }
        }
    }
    return true;
}

bool isSoduku(int my2DArray[100][100], int n) {
    return sudukudong(my2DArray, n) && sudokucot(my2DArray, n) && sudoku3to3(my2DArray, n);
}

int main() {
    // Mở tệp
    int n = 9;
    ifstream inputFile("sudoku.txt");

    if (!inputFile.is_open()) {
        cerr << "Lỗi mở tệp." << endl;
        return 1;
    }

    // Đọc ma trận 2 chiều từ tệp
    //vector<vector<int>> my2DArray;

    int rows, cols;
    inputFile >> rows; // Giả sử dòng đầu tiên chứa kích thước

    // Đặt kích thước cho vector theo kích thước được chỉ định
    //my2DArray.resize(rows, vector<int>(cols));
    int my2DArray[100][100];

    // Đọc các phần tử vào vector
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            inputFile >> my2DArray[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << my2DArray[i][j] << " ";
        }
        cout << endl;
    }

    // Đóng tệp
    inputFile.close();

    // In ra màn hình ma trận 2 chiều
    cout << isSoduku(my2DArray, n);

    return 0;
}
