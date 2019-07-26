//
// Created by shidongxuan on 19-6-26.
//
#include <iostream>

using namespace std;

class Matrix {
private:
    int row;
    int col;
    int arr[1000][1000];
public:
    void show();
    void transform();
    void input();
    Matrix(int i,int j);
};

Matrix::Matrix(int i, int j) {
    row = i;
    col = j;
}

void Matrix::show() {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout <<" "<< arr[i][j];
        }
        cout << endl;
    }
}

void Matrix::transform() {
    for (int i = 0; i < row; ++i) {
        for (int j = i+1; j < row; ++j) {
            int tmp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = tmp;
        }
    }
    int tmp = row;
    row = col;
    col = tmp;
}

void Matrix::input() {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cin >> arr[i][j];
        }
    }
}

int main(){
    int r,c;
    cin>>r>>c;
    Matrix m(r,c); // 初始大小 2行3列
    m.input();
    cout<<"datas before:"<<endl;
    m.show();
    m.transform();
    cout<<"datas after:"<<endl;
    m.show();
}
