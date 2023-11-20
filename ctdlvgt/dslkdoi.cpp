#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
danh sách liên kết đôi
*/

struct Node {
    int data;
    Node *next;
    Node *pre;
};

typedef Node* node;

struct douList {
    node head;
    node tail;
};

typedef douList* doulist;

doulist createDouList(int x) {
    doulist temp=new douList;
    temp->head=new Node;
    temp->head->data=x;
    temp->head->pre=NULL;
    temp->head->next=NULL;
    temp->tail=temp->head;
    return temp;
};

void insertFirst(doulist &a, int x) {
    node temp=new Node;
    temp->data=x;
    temp->next=a->head;
    temp->pre=NULL;

        if(a->head!=NULL) {
            a->head->pre=temp;
        }
        else if(a->tail=NULL) {
            a->tail=temp;
        }
        a->head=temp;
}

void insertLast(doulist &a, int x) {
    node temp=new Node;
    temp->data=x;
    temp->next=NULL;
    temp->pre=NULL;

    if(a->head==NULL) {
        a->head=temp;
        a->tail=temp;
    }
    else {
        temp->pre=a->tail;
        a->tail->next=temp;
        a->tail=temp;
    }
}

void insertMiddle(doulist &a, int pos, int x, int n) {
    if(pos==0) insertFirst(a, x);
    else if(pos==n) insertLast(a, x);
    else {node p=a->head;
    for(int i(1); i<pos; i++) {
        p=p->next;
    }
    node temp=new Node;
    temp->data=x;
    temp->next=p->next;
    temp->pre=p;
    p->next->pre=temp;
    p->next=temp;
    }
}

void deleteFirst(doulist &a) {
    if(a->head==NULL) return;
    node temp=a->head;
    if(a->head->next!=NULL) {
    a->head=a->head->next;
    a->head->pre=NULL;
    }
    else {
        a->head=NULL;
        a->tail=NULL;
    }
    delete temp;
}

void deleteLast(doulist &a) {
    if(a->head==NULL) return;
    node temp=a->tail;
    if(a->head->next!=NULL) {
        node p=a->head;
        while(p->next->next!=NULL) {
            p=p->next;
        }
        p->next=NULL;
        a->tail=p;
    }
    else {
        a->head=NULL;
        a->tail=NULL;
    }
    delete temp;
}

void deleteMiddle(doulist &a, int pos, int n) {
    if(pos==0) {
        deleteFirst(a);
        return;
    }
    if(pos==n-1) {
        deleteLast(a);
        return;
    }
    else {
        node p=a->head;
        int count = 0;
        for(node  i = a->head; i != NULL; i = i->next) {
            if(count==pos-1)
            {
                i->next = i->next->next;
                delete i->next->pre;
                break;
            }
            count++;
        } 
        // node temp=p->next;
        // temp=temp->next;
        // if(temp->next!=NULL) {
        //     temp->next->pre=p;
        // }
        // delete temp;
    }
}

void insertList(doulist a) {
    node temp=a->head;
    while(temp!=NULL) {
        cout << temp->data << " " ;
        temp=temp->next;
    }
}


int main() {
int n; cin >>n ;
int x; cin >> x;
doulist head=createDouList(x);
for(int i(1); i<n; i++) {
    int y; 
    cin >> y;
    insertLast(head, y);
}
int pos; cin >> pos;
deleteMiddle(head, pos, n);
insertList(head);
return 0;
}