// HW4.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int sum(int*, int*);


int main() {
    int num;
    int* ptrnum = &num;
    int temp = 0;
    int* ptrtemp = &temp;

    cout << "How many nums would U like to plus " << endl;

    cin >> num;
    cout << endl;

    cout << sum(ptrnum, ptrtemp);
    cout << endl;



}

int sum(int* num, int* temp) {

    int f_num;
    cout << " input a num : ";
    cin >> f_num;
    cout << endl;
    *temp += f_num;

    (*num)--;

    if (*num == 0) {

        return *temp;
    }
    sum(num, temp);

}