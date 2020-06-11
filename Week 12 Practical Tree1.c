#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#pragma warning(disable: 4996)

typedef struct TreeNode {
    struct TreeNode* left;
    int data;
    struct TreeNode* right;
}TreeNode;

TreeNode* makeTreeNode() {
    TreeNode* nd = (TreeNode*)malloc(sizeof(TreeNode));
    nd->left = NULL;
    nd->right = NULL;
    return nd;
}
void setData(TreeNode* bt, int data) {
    bt->data = data;
}
void createLeft(TreeNode* p, TreeNode* s) {
    if (p->left != NULL)
        free(p->left);
    p->left = s;
}
void createRight(TreeNode* p, TreeNode* s) {
    if (p->right != NULL)
        free(p->right);

    p->right = s;
}
void printTree(TreeNode* bt) {
    //둘다 존재
    if (bt->left != NULL && bt->right != NULL)
        printf("%d %d %d\n", bt->data, bt->left->data, bt->right->data);
    //왼쪽만 존재
    else if (bt->left != NULL && bt->right == NULL)
        printf("%d %d\n", bt->data, bt->left->data);
    //오른쪽만 존재
    else if (bt->left == NULL && bt->right != NULL)
        printf("%d %d\n", bt->data, bt->right->data);
    //아무것도 존재x
    else {
        printf("%d\n", bt->data);
    }
}

int main() {
    int N;
    TreeNode* F1 = makeTreeNode();
    TreeNode* F2 = makeTreeNode();
    TreeNode* F3 = makeTreeNode();
    TreeNode* F4 = makeTreeNode();
    TreeNode* F5 = makeTreeNode();
    TreeNode* F6 = makeTreeNode();
    TreeNode* F7 = makeTreeNode();
    TreeNode* F8 = makeTreeNode();

    //데이터 저장
    setData(F1, 20);
    setData(F2, 30);
    setData(F3, 50);
    setData(F4, 70);
    setData(F5, 90);
    setData(F6, 120);
    setData(F7, 130);
    setData(F8, 80);

    createLeft(F1, F2);
    createRight(F1, F3);

    createLeft(F2, F4);
    createRight(F2, F5);

    createRight(F3, F6);

    createLeft(F6, F7);
    createRight(F6, F8);

    scanf("%d", &N);
    if (N == 1)
        printTree(F1);
    else if (N == 2)
        printTree(F2);
    else if (N == 3)
        printTree(F3);
    else if (N == 4)
        printTree(F4);
    else if (N == 5)
        printTree(F5);
    else if (N == 6)
        printTree(F6);
    else if (N == 7)
        printTree(F7);
    else if (N == 8)
        printTree(F8);
    else
        printf("-1\n");
    return 0;
}