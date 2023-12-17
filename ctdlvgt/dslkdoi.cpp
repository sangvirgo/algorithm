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
    doulist temp = new douList;  // Tạo một đối tượng douList mới và gán địa chỉ của nó cho con trỏ temp.
    temp->head = new Node;  // Tạo một nút mới và gán địa chỉ của nó cho thành phần head của temp.
    temp->head->data = x;  // Gán giá trị x cho thành phần data của nút head.
    temp->head->pre = NULL;  // Không có nút trước nút head, nên gán con trỏ pre của nút head bằng NULL.
    temp->head->next = NULL;  // Không có nút sau nút head, nên gán con trỏ next của nút head bằng NULL.
    temp->tail = temp->head;  // Gán con trỏ tail của danh sách về nút head, vì danh sách chỉ có một nút.

    return temp;  // Trả về đối tượng douList mới, chứa địa chỉ của danh sách liên kết kép đã tạo.
}


void insertFirst(doulist &a, int x) {
    node temp = new Node;  // Tạo một nút mới (node) và gán địa chỉ của nó cho con trỏ temp.
    temp->data = x;  // Gán giá trị x cho thành phần data của nút temp.
    temp->next = a->head;  // Gán con trỏ next của temp bằng con trỏ head của danh sách liên kết a.
    temp->pre = NULL;  // Không có nút trước temp, nên gán con trỏ pre của temp bằng NULL.

    // Kiểm tra xem danh sách liên kết có rỗng không.
    if (a->head != NULL) {
        a->head->pre = temp;  // Nếu danh sách không rỗng, gán con trỏ pre của nút đầu tiên về temp.
    } else if (a->tail == NULL) {
        a->tail = temp;  // Nếu danh sách trống, gán con trỏ tail của danh sách về temp.
    }

    a->head = temp;  // Gán con trỏ head của danh sách về temp, temp giờ là đầu danh sách.
}


void insertLast(doulist &a, int x) {
    node temp = new Node;  // Tạo một nút mới.
    temp->data = x;  // Gán giá trị x cho thành phần data của nút temp.
    temp->next = NULL;  // Không có nút tiếp theo, vì nút temp sẽ là nút cuối cùng.
    temp->pre = NULL;  // Không có nút trước nút temp.

    if (a->head == NULL) {  // Kiểm tra nếu danh sách đang rỗng.
        a->head = temp;  // Nếu rỗng, gán nút temp làm đầu danh sách.
        a->tail = temp;  // Nếu rỗng, gán nút temp làm cuối danh sách.
    } else {
        temp->pre = a->tail;  // Gán con trỏ pre của temp là nút cuối cùng hiện tại.
        a->tail->next = temp;  // Gán con trỏ next của nút cuối cùng là temp.
        a->tail = temp;  // Gán con trỏ tail của danh sách về temp, temp giờ là nút cuối cùng.
    }
}

void insertMiddle(doulist &a, int pos, int x, int n) {
    if (pos == 0) {
        insertFirst(a, x);  // Gọi hàm chèn vào đầu nếu vị trí là 0.
    } else if (pos == n) {
        insertLast(a, x);  // Gọi hàm chèn vào cuối nếu vị trí là cuối cùng.
    } else {
        node p = a->head;
        for (int i(1); i < pos; i++) {
            p = p->next;  // Duyệt đến vị trí cần chèn.
        }
        node temp = new Node;  // Tạo một nút mới.
        temp->data = x;  // Gán giá trị x cho thành phần data của nút temp.
        temp->next = p->next;  // Gán con trỏ next của temp là con trỏ next của nút hiện tại.
        temp->pre = p;  // Gán con trỏ pre của temp là nút hiện tại.
        p->next->pre = temp;  // Gán con trỏ pre của nút tiếp theo là temp.
        p->next = temp;  // Gán con trỏ next của nút hiện tại là temp.
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