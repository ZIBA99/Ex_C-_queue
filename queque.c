#include <stdio.h>
#include <string.h>

#define MAX 10000 // 큐의 최대 크기

int queue[MAX];       // 큐를 저장할 배열
int front = 0, rear = 0; // front: 큐의 앞, rear: 큐의 뒤

int main() {
    int n, val;
    char cmd[6]; // 명령어 저장
    scanf("%d", &n); // 명령어 개수 입력

    while (n--) {
        scanf("%s", cmd); // 명령어 입력

        if (strcmp(cmd, "push") == 0) { // push 명령
            scanf("%d", &val);          // 큐에 넣을 값 입력
            queue[rear++] = val;        // rear에 값 저장 후 rear 증가
        } 
        else if (strcmp(cmd, "pop") == 0) { // pop 명령
            if (front == rear)              // 큐가 비어 있으면
                printf("-1\n");
            else
                printf("%d\n", queue[front++]); // front 값 출력 후 front 증가
        } 
        else if (strcmp(cmd, "size") == 0) { // size 명령
            printf("%d\n", rear - front);   // 큐의 크기 = rear - front
        } 
        else if (strcmp(cmd, "empty") == 0) { // empty 명령
            printf("%d\n", front == rear ? 1 : 0); // 비어있으면 1, 아니면 0
        } 
        else if (strcmp(cmd, "front") == 0) { // front 명령
            if (front == rear)
                printf("-1\n");
            else
                printf("%d\n", queue[front]); // 가장 앞의 값 출력
        } 
        else if (strcmp(cmd, "back") == 0) { // back 명령
            if (front == rear)
                printf("-1\n");
            else
                printf("%d\n", queue[rear - 1]); // 가장 뒤의 값 출력
        }
    }

    return 0;
}
