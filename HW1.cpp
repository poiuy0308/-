// HW1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int sum(int, int);

int main() {
    int a, b;
    cout << "input two numbers" << endl;
    cin >> a >> b;
    cout << endl;

    cout << sum(a, b);

}

int sum(int a, int b) {
    return a + b;
}