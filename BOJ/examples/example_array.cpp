#include <bits/stdc++.h>
using namespace std;

// int a[21];
// int b[21][21];

// 배열 초기화 방법
// 1. cstring 헤더에 있는 memset 함수(비추천))
// 0이나 -1이 아닌 다른 값이 넣을 경우, 오동작한다.
// 2차원 이상의 배열을 함수의 인자로 넘기는 경우, 잘못 동작한다.
// memset(a, 0, sizeof a);
// memset(b, 0, sizeof b);

// 2. for문 사용은 실수할 일이 없으므로 무난하다.
// 3. fill 함수 가장 추천
// fill (a, a+21, 0);
// for(int i = 0 ; i < 21; i ++) fill(b[i], b[i]+21 ,0);

void insert(int idx, int num, int arr[], int& len) {
    len += 1;
    int t1 = 0, t2 = num;
    for(int i = idx ; i < len ; i ++) {
        if (t1 == 0) {
            t1 = arr[i];
            arr[i] = t2;
        } else {
            t2 = arr[i];
            arr[i] = t1;
            t1 = 0;
        }
    }
}

void erase(int idx, int arr[], int& len) {
    for(int i = idx ; i < len ; i ++) {
        arr[i] = arr[i+1];
    }
    len -= 1;
}

void printArr(int arr[], int& len) {
    for(int i = 0; i < len; i ++) cout << arr[i] << ' ';
    cout << "\n\n";
}

void solution_insert(int idx, int num, int arr[], int& len) {
    // 값 추가시 모든 값을 오른쪽으로 밀어야 하므로,
    // 오른쪽부터 시작시 추가적인 메모리 사용을 하지 않아도 된다.
    // i>= idx 일 경우, -1이 될 수 있으므로 index 에러가 발생할 수 있다.
    for(int i = len; i > idx; i--) {
        arr[i] = arr[i - 1];
    }
    arr[idx] = num;
    len++;
}

void solution_erase(int idx, int arr[], int& len) {
    len--;
    for(int i = idx; i < len ; i ++) arr[i] = arr[i+1];
}

void insert_test() {
    cout << "***** insert_test *****\n";
    int arr[10] = {10, 20, 30};
    int len = 3;

    insert(3, 40, arr, len);
    printArr(arr, len);
    insert(1, 50, arr, len);
    printArr(arr, len);
    insert(0, 15, arr, len);
    printArr(arr, len);
}

void erase_test() {
    cout << "***** erase_test *****\n";
    int arr[10] = {10, 50, 40, 30, 70, 20};
    int len = 6;
    erase(4, arr, len);
    printArr(arr, len);
    erase(1, arr, len);
    printArr(arr, len);
    erase(3, arr, len);
    printArr(arr, len);
}

int main(void) {
    // int arr[10] = {10, 50, 40, 30, 70, 20};
    // int len = 6;
    // insert(3, 60, arr, len);
    // erase(4, arr, len);
    insert_test();
    erase_test();
    
}