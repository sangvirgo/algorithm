#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
};

typedef Node* node;

node createNode(int x) {
    node temp=new Node();
    temp->data=x;
    temp->next=NULL;
    return temp;
}

void InsertLast(node &head, int x) {
    node temp=createNode(x);
    if(head==NULL) {
        head=temp;
        temp->next=head;
    }
    else {
        node p=head;
        while(p->next!=head) {
            p=p->next;
        }
        p->next=temp;
        temp->next=head;
    }
}

void print(const node head, int k) {
    if(head==NULL) {
        return;
    }

    node current=head;
    int count=0;
    vector<int> result;

    if(k==0) {
        while(current->next!=head) {
            cout << current->data << " ";
            current=current->next;
        }
    }

    while(count<k) {
        result.push_back(current->data);
        current=current->next;
        count++;
    }

    while(current!=head) {
        cout << current->data << " ";
        current=current->next;
    }
    for(auto it:result) {
        cout << it << " ";
    }
}

int main() {
    int n, k, temp;
    cin >> n;
    node head=NULL;
    for(int i=0; i<n; i++) {
        cin >> temp;
        InsertLast(head, temp);
    }
    cin >> k;
    print(head, k);
    return 0;
}