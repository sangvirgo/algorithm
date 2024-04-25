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

void initList(LIST &a) {
    a.pHead=a.pTail=nullptr;
}

NODE* createNode(int x) {
    NODE* p=new NODE;
    p->Key=x;
    p->pNext=nullptr;
    return p;
}

void addLastNode(LIST &a, int x) {
    NODE* temp = createNode(x);
    if(a.pHead==nullptr) {
        a.pHead=a.pTail=temp;
    } else {
        a.pTail->pNext=temp;
        a.pTail=temp;
    }
}

void display(LIST& a) {
    NODE* temp=a.pHead;
    while(temp!=nullptr) {
        cout << temp->Key << " ";
        temp=temp->pNext;
    }
    cout << endl;
}

void inputList(LIST &a) {
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

// void deleteNode(LIST &a) {
//     NODE* current = a.pHead;
//     NODE* previous=nullptr;
//     while(current!=nullptr) {
//         if(isArmstrong(current->Key)) {
//             // the node is at the top
//             if(previous==nullptr) {
//                 a.pHead=current->pNext;
//                 delete current;
//                 current=a.pHead;
//             } else {
//                 previous->pNext=current->pNext;
//                 // the node is at the end
//                 if(current->pNext==nullptr) {
//                     a.pTail=previous;
//                 }
//                 delete current;
//                 current=previous->pNext;
//             } 
//         } else {
//             // if it is not an armstrong number, ignore it
//             previous=current;
//             current=current->pNext;
//         }
//     }
// }

void deleteNode(LIST& a) {
    NODE* current=a.pHead;
    NODE* previous=nullptr;

    while(current!=nullptr) {
        if(isArmstrong(current->Key)) {
            if(previous==nullptr) {
                a.pHead=current->pNext;
                delete current;
                current=a.pHead;
            } else {
                previous->pNext=current->pNext;
                NODE* temp = current;
                current = current->pNext;
                delete temp;
            } 
        } else {
            previous=current;
            current=current->pNext;
        }
    }
}



int main() {
    LIST a;
    initList(a);
    inputList(a);
    deleteNode(a);
    cout << "the result: ";
    display(a); // Gọi display(a) để hiển thị danh sách ra màn hình
    return 0;
}