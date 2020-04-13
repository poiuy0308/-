// HW5.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int hello_world(int);


int main() {
    int n;

    cout << "input n plz " << endl;

    cin >> n;
    cout << endl;

    cout << hello_world(n);
    cout << endl;



}

int hello_world(int n) {
    int i = 0;
    //case a
    /*for (int i = 0; i < n; i++) {
        cout << "Hello world " << endl;
    }*/
    //case b
    /*while (i < n) {
        cout << "Hello world " << endl;
        i += 1;
    }*/
    //case c
    /*do {
        cout << "Hello world " << endl;
        i++;
    } while (i < n);*/

    return 0;
}