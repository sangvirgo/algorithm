#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*

*/
struct Node {
    int data;
    Node *next;
};

typedef Node* node;

node makeNode(int x) {
    node temp=new Node();
    temp->data=x;
    temp->next=NULL;
    return temp;
}

void insertFirst(node &a, int x) {
    node temp=makeNode(x);
    if(a==NULL) {
        a=temp;
    }
    else {
        temp->next=a;
        a=temp;
    }
}
void insertLast(node &a, int x) {
    node temp=makeNode(x);
    if(a==NULL) {
        a=temp;
    }
    else {
        node q=a;
        while (q->next!=NULL)
        {
            q=q->next;
        }
        q->next=temp;
    }
}

void insertMiddle(node &a, int n, int pos, int x) {
    node temp=makeNode(x);
    if (pos <0 || pos >n+1)
    {
        cout << "invalid position!!!!" << endl;
        return ;
    }
    if(pos==0) {
        insertFirst(a, x); return;
    }
    if(pos==n) {
        insertLast(a, x); return;
    }
    if(a==NULL) {
        a=temp;
        return;
    }
    else {
        node p=a;
        for(int i(1); i<pos-1; i++) {
            p=p->next;
        }
        temp->next=p->next;
        p->next=temp;
    }
}

void deleteFirst(node &a) {
    if(a==NULL) return;
    else {
        node p=a;
        a=a->next;
        delete p;
    }
}

void deleteLast(node &a) {
    if (a == NULL) return;
    if (a->next == NULL) {
        delete a;
        a = NULL;
        return;
    }
    node p=a;
    while(p->next->next!=NULL) {
        p=p->next;
    }
    p->next=NULL;
}

void deleteMiddle(node &a, int k, int n) {
    if (a == NULL) return;
    if(k==0) {
        deleteFirst(a); return;
    }
    if(k==n) {
        deleteLast(a); return;
    }
    else {
        node p=a;
        for(int i(1); i<k; i++) {
            p=p->next;
        }
        node temp=p->next;
        p->next=p->next->next;
        delete temp;
    }
}

void changeValue(node &a, int begin, int after) {
    node p=a;
    while (p!=NULL)
    {
        if(p->data==begin) {
            p->data=after;
        }
        p=p->next;
    }
    
}

node deleteValueBig(node &a, int n, int k) {
    if(a==NULL) return NULL;
    node p = a;
    if(k<0 || k>=n) return NULL;
    int index(0);
    while (p!=NULL && index<k)
    {
        index++;
        p=p->next;
    }
    if (p == NULL) {
        return a;
    }

    int key=p->data;

    p=a;
    node result=NULL;
    while(p!=NULL) {
        if (p->data<=key)
        {
            insertLast(result, p->data);
        }
            p=p->next;
    }
    return result;
}


void insertpos(node a, int pos) {
    int cnt(0);
    while(a!=NULL) {
        if(pos==cnt) {
            cout << a->data << " ";
        }
        cnt++;
        a=a->next;
    }
}

void insert(node a) {
    while(a!=NULL) {
        cout << a->data << " ";
        a=a->next;
    }
}

int main() {
node head=NULL;
int n, pos; cin >>n ;
for(int i(0); i<n; i++) {
    int x;
    cin >>x;
    insertLast(head, x);
}
    int k; cin >>k;
    node result=deleteValueBig(head, n, k);
    insert(result);
return 0;
}