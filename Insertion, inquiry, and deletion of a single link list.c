#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#pragma warning(disable: 4996)

typedef struct _node
{
    int data; //데이터를 담을 공간
    struct _node* next; //연결의 도구
}Node;  
int main() {
    Node* head = NULL; //head와 tail은 연결을 추가 및 유지하기 위한것
    Node* tail = NULL;
    Node* cur = NULL; //참조 및 조회를 위한 것

    Node* newNode = NULL;
    int readData;

    while (1) {
        printf("자연수 입력: ");
        scanf("%d", &readData);
        if (readData < 1)
            break;

        //노드의 추가과정
        newNode = (Node*)malloc(sizeof(Node));
        newNode->data = readData;
        newNode->next = NULL;

        if (head == NULL)
            head = newNode;
        else
            tail->next = newNode;

        tail = newNode;

    }
    if (head == NULL)
        printf("저장된 자연수가 존재하지 않습니다.\n");
    else {
        cur = head;
        printf("%d", cur->data);
        while (cur->next != NULL) {
            cur = cur->next;
            printf("%d ", cur->data);
        }
    }
    return 0;
}