#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*

*/

typedef struct Node {
    int Key;
    Node* pNext;
} NODE;
typedef struct List {
    Node* pHead;
    Node* pTail;
} LIST;

int countNumber(int n) {
    int count=0;
    while(n!=0) {
        n/=10;
        count++;
    }
    return count;
}

bool isArmstrong(int n) {
    int count=countNumber(n);
    int sum=0;
    int temp=n;
    while(n!=0) {
        sum+=pow(n%10,count);
        n/=10;
    }
    return sum==temp;
}

void initList(List* &a) {
    a=new List();
    a->pHead=a->pTail=nullptr;
}

NODE* createNode(int x) {
    Node* temp =new Node();
    temp->Key=x;
    temp->pNext=nullptr;
    return temp;
}

void addLastNode(List* &a, int x) {
    Node* temp=createNode(x);
    if(a->pHead==nullptr) {
        a->pHead=a->pTail=temp;
    } else {
        a->pTail->pNext=temp;
        a->pTail=temp;
    }
}


void display(List* &a) {
    Node* temp=a->pHead;
    while(temp!=nullptr) {
        cout << temp->Key << " ";
        temp=temp->pNext;
    }
    cout << endl;
}

void inputList(List* &a) {
    cout << "Enter values (-1 to stop): ";
    int x;
    cin >> x;
    while (x != -1) {
        addLastNode(a, x);
        cout <<  "input: ";
        cin >> x;
    }
    display(a);
}


void deleteNode(List* &a) {
    Node* cur=a->pHead;
    Node* pre=nullptr;
    while(cur!=nullptr) {
        if(isArmstrong(cur->Key)) {
            if(pre==nullptr) {
                a->pHead=cur->pNext;
                delete cur;
                cur=a->pHead;
            } else {
                pre->pNext=cur->pNext;
                delete cur;
                cur=pre->pNext;
            }
        } else {
            pre=cur;
            cur=cur->pNext;
        }
    }
}



int main() {
    List* a;
    initList(a);
    inputList(a);
    deleteNode(a);
    cout << "the result: ";
    display(a); // Gọi display(a) để hiển thị danh sách ra màn hình
    return 0;
}