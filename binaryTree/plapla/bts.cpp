#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*

*/

struct node
{
    int data;
    struct node *pLeft;
    struct node *pRight;
}; 

typedef struct node* TREE;

void initTree(TREE &t) {
    t=nullptr;
}

bool isEmptyTree(TREE &t) {
    return (t==nullptr);
}

TREE CreateNode(int x) {
    TREE temp=new node();
    temp->data=x;
    temp->pLeft=NULL;
    temp->pRight=NULL;
    return temp;
}

void addNode(TREE &t, int x) {
    if(isEmptyTree(t)) {
        t=CreateNode(x);
    } else {
        if(t->data>x) {
            addNode(t->pLeft, x);
        } else if(t->data<x) {
            addNode(t->pRight, x);
        }
    }
}

void NLR(TREE &t) {
    if(!isEmptyTree(t)) {
        cout << t->data << " ";
        NLR(t->pLeft);
        NLR(t->pRight);
    }
}

void LNR(TREE &t) {
    if(!isEmptyTree(t)) {
        NLR(t->pLeft);
        cout << t->data << " ";
        NLR(t->pRight);
    }
}

void Menu(TREE &t) {
    int choice;

    while (true) {
        system("cls");
        cout << "-------- Menu --------" << endl;
        cout << "1. Enter data" << endl;
        cout << "2. Display NLR" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice; // Đọc lựa chọn từ người dùng

        switch (choice) {
            case 0:
                cout << "Exiting..." << endl;
                return; // Thoát khỏi chương trình
            case 1: {
                int data;
                cout << "Enter data: ";
                cin >> data;
                addNode(t, data); // Thêm dữ liệu vào cây
                break;
            }
            case 2:
                if (isEmptyTree(t)) {
                    cout << "Tree is empty" << endl;
                } else {
                    // Hiển thị dữ liệu của cây
                    cout << "Tree data:";
                    NLR(t);
                    cout << endl;
                }
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
}





int main() {
TREE t;
initTree(t);
Menu(t);
return 0;
}