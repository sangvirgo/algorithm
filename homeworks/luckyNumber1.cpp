#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
cấu trúc hangd đợi trong dslk

*/
struct Node
{
    int data;
    Node *next;
};
typedef Node* node;
// kiểm tra rỗng
bool empty(node a) {
    return a==NULL;
}
//tạo node
node makeNode(int x) {
    node temp=new Node();
    temp->data=x;
    temp->next=NULL;
    return temp;
}
// thêm vào đầu
void push(node &a, int x) {
    node temp=makeNode(x);
    if(empty(a)) {
        a=temp;
    }
    else {
        temp->next=a;
        a=temp;
    }
}
// xóa phâng tử cuối dslk cũng là phầng tử ở đàu của hàng đợi
void pop(node &a) {
    node p=a;
    if (empty(a)) 
    {
        return ;
    }
    else if(a->next==NULL) {
        delete a;
        a=NULL;
    }
    else {
        while(p->next->next!=NULL) {
            p=p->next;
        }
        delete p->next;
        p->next=NULL;
    }
}

//lấy ra phần tử đứng cuối
int front(node a) {
    while(a->next!=NULL) {
        a=a->next;
    }
    return a->data;
}

int main() {
// tạo ra lạp phát 6 8 66 68 86 88 666 888....
node back=NULL;
push(back, 6);
push(back, 8);
vector<long long> lp;
while (1)
{
    int top=front(back); // lấy node cuối (6) // sau đó xóa lun node đó
    pop(back);
    string s=to_string(top);
    if(s.size()==9) { 
        break;
    }
    lp.push_back(top);
    push(back, top*10+6);
    push(back, top*10+8);
}
for(auto it:lp) {
    cout << it << " " ;
}
return 0;
}