// HW3.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int sum(int);


int main() {
    int num;

    cout << "How many nums would U like to plus " << endl;

    cin >> num;
    cout << endl;

    cout << sum(num);
    cout << endl;



}
int sum(int num) {
    int temp = 0;
    int f_num;
    for (int i = 0; i < num; i++) {
        cout << " input a num : ";
        cin >> f_num;
        cout << endl;
        temp += f_num;
    }
    return temp;
}

