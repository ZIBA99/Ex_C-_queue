#include <stdio.h>
#include <string.h>

#define MAX 10000 // 스택의 최대 크기

int stack[MAX];  // 스택을 저장할 배열
int top = -1;    // 스택의 가장 위를 가리키는 인덱스 (비어있을 때는 -1)

int main() {
    int n, val;
    char cmd[6]; // 명령어를 저장할 문자열
    scanf("%d", &n); // 명령어의 개수 입력

    while (n--) {
        scanf("%s", cmd); // 명령어 입력

        if (strcmp(cmd, "push") == 0) { // push 명령
            scanf("%d", &val);          // 푸시할 값 입력
            stack[++top] = val;         // 스택에 값 저장
        } 
        else if (strcmp(cmd, "pop") == 0) { // pop 명령
            if (top == -1)                 // 스택이 비어있다면
                printf("-1\n");
            else
                printf("%d\n", stack[top--]); // 가장 위의 값 출력 후 제거
        } 
        else if (strcmp(cmd, "size") == 0) { // size 명령
            printf("%d\n", top + 1);         // 현재 스택의 크기 출력
        } 
        else if (strcmp(cmd, "empty") == 0) { // empty 명령
            printf("%d\n", top == -1 ? 1 : 0); // 비어있으면 1, 아니면 0
        } 
        else if (strcmp(cmd, "top") == 0) { // top 명령
            if (top == -1)
                printf("-1\n");
            else
                printf("%d\n", stack[top]); // 가장 위의 값 출력
        }
    }

    return 0;
}
