// HW2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int sum(int, int);
int sum(int, int, int);
int sum(int, int, int, int);

int main() {
    int num;
    int a, b, c, d;
    cout << "How many nums would U like to plus " << endl;
    cout << "choose 2, 3, 4" << endl;
    cin >> num;
    cout << endl;

    switch (num) {
    case 2:
        cin >> a >> b;
        cout << sum(a, b);
        break;

    case 3:
        cin >> a >> b >> c;
        cout << sum(a, b, c);
        break;

    case 4:
        cin >> a >> b >> c >> d;
        cout << sum(a, b, c, d);
        break;

    default:
        cout << "check num plz" << endl;
        break;
    }



    cout << endl;



}

int sum(int a, int b) {
    return a + b;
}
int sum(int a, int b, int c) {
    return a + b + c;
}
int sum(int a, int b, int c, int d) {
    return a + b + c + d;
}