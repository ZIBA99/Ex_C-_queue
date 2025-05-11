#include <bits/stdc++.h> // 모든 표준 라이브러리를 포함
using namespace std;

int main(void) {
  ios::sync_with_stdio(0); // C 표준 입출력과 C++ 입출력 동기화를 끊어 속도 향상
  cin.tie(0); // cin과 cout의 묶음을 해제 -> 출력 지연 방지

  queue<int> Q; // 정수형 큐 선언
  int n;
  cin >> n; // 명령어 개수 입력

  while(n--){ // n번 반복
    string q;
    cin >> q; // 명령어 입력

    if(q == "push"){ // push 명령어: 큐의 뒤에 원소 추가
      int val;
      cin >> val;
      Q.push(val);
    }
    else if(q == "pop"){ // pop 명령어: 큐의 앞에서 원소 제거 및 출력
      if(Q.empty()) // 큐가 비어 있으면
        cout << -1 << '\n'; // -1 출력
      else{
        cout << Q.front() << '\n'; // 맨 앞 원소 출력
        Q.pop(); // 맨 앞 원소 제거
      }
    }
    else if(q == "size"){ // size 명령어: 큐의 크기 출력
      cout << Q.size() << '\n';
    }
    else if(q == "empty"){ // empty 명령어: 비어있으면 1, 아니면 0 출력
      cout << Q.empty() << '\n';
    }    
    else if(q == "front"){ // front 명령어: 맨 앞 원소 출력
      if(Q.empty()) // 비어있으면
        cout << -1 << '\n';
      else
        cout << Q.front() << '\n';
    }
    else{ // back 명령어: 맨 뒤 원소 출력
      if(Q.empty()) // 비어있으면
        cout << -1 << '\n';
      else
        cout << Q.back() << '\n';
    }
  }
}
