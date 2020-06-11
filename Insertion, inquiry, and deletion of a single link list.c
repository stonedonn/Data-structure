#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#pragma warning(disable: 4996)

typedef struct _node
{
    int data; //�����͸� ���� ����
    struct _node* next; //������ ����
}Node;  
int main() {
    Node* head = NULL; //head�� tail�� ������ �߰� �� �����ϱ� ���Ѱ�
    Node* tail = NULL;
    Node* cur = NULL; //���� �� ��ȸ�� ���� ��

    Node* newNode = NULL;
    int readData;

    while (1) {
        printf("�ڿ��� �Է�: ");
        scanf("%d", &readData);
        if (readData < 1)
            break;

        //����� �߰�����
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
        printf("����� �ڿ����� �������� �ʽ��ϴ�.\n");
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