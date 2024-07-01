#include <bits/stdc++.h>
using namespace std;

// 1. k번째 원소를 확인/변경하기 위해 O(k)가 필요함
// 2. 임의의 위치에 원소를 추가/임의 위치의 원소 제거는 O(1)
// 3. 원소들이 메모리 상에 연속해있지 않아 Cache hit rate가 낮지만 할당이 다소 쉬움

// singly linked list 단일 연결 리스트
// doubly linked list 이중 연결 리스트
// circular linked list 원형 연결 리스트

// 배열, 연결 리스트 선형 자료구조
// 트리, 그래프, 해쉬 비선형 자료구조

struct NODE {
    struct NODE *prev, *next;
    int data;
};

const int MX = 1000005;
int dat[MX], pre[MX], nxt[MX];
int unused = 1;

void traverse() {
    int cur = nxt[0];
    while(cur != -1) {
        cout << dat[cur] << ' ';
        cur = nxt[cur];
    }
    cout << "\n\n";
}

int main() {
    fill(pre, pre+MX, -1);
    fill(pre, pre+MX, -1);
    return 0;
}