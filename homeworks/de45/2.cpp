#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
(Theo Wikipedia) Lucky Number (số may mắn) là số được định nghĩa theo quá
trình sau: bắt đầu với số nguyên dương x và tính tổng bình phương y các chữ số của x,
sau đó tiếp tục tính tổng bình phương các chữ số của y. Quá trình này lặp đi lặp lại cho
đến khi thu được kết quả là 1 thì dừng (tổng bình phương các chữ số của số 1 chính là
1) hoặc quá trình sẽ kéo dài vô tận. Số mà quá trình tính này kết thúc bằng 1 gọi là số
may mắn. Số có quá trình tính kéo dài vô tận là số không may mắn hay còn gọi là sad
number (số đen đủi). Ví dụ: 7 là số may mắn vì

72 = 49
42 + 92 = 97
92 + 72 = 130
12 + 32 + 02 = 10
12 + 02 = 1

• Những số may mắn dưới 500 là: 1, 7, 10, 13, 19, 23, 28, 31, 32, 44, 49, 68,
70, 79, 82, 86, 91, 94, 97, 100, 103, 109, 129, 130, 133, 139, 167, 176, 188, 190, 192,
193, 203, 208, 219, 226, 230, 236, 239, 262, 263, 280, 291, 293, 301, 302, 310, 313,
319, 320, 326, 329, 331, 338, 356, 362, 365, 367, 368, 376, 379, 383, 386, 391, 392,
397, 404, 409, 440, 446, 464, 469, 478, 487, 490, 496.
*/
vector<int> luckyNumber(500, 0);

struct TNODE
{
int Key;
struct TNODE *pLeft;
struct TNODE *pRight;
} *TREE;


bool findLuckyNumber(int data, set<int> &checkNum) {
    if(data==1) return 1;
    if(checkNum.count(data))  return 0;
    checkNum.insert(data);
    int sum=0;
    while(data!=0) {
        sum+=pow(data%10, 2);
        data/=10;
    }
    return findLuckyNumber(sum, checkNum);
}

void luckyNumberList() {
    for(int i=0; i<=500; i++) {
    set<int> checkNum;
        if(findLuckyNumber(i, checkNum)) luckyNumber[i]=1;
    }
}

void initTree(TNODE* t) {
    t==NULL;
}

void insertNode(TNODE* &t, int data) {
    if(!t) {
        t=new TNODE();
        t->Key=data;
        t->pLeft=NULL;
        t->pRight=NULL;
    } else if(t->Key>data) insertNode(t->pLeft, data);
    else insertNode(t->pRight, data);
}

void NLR(TNODE* &t) {
    if(!t) return;
    cout << t->Key << " ";
    NLR(t->pLeft);
    NLR(t->pRight);
}

int countLuckyNumber(TNODE* &t) {
    if(!t) return 0;
    if(luckyNumber[t->Key]) return 1;
    return countLuckyNumber(t->pLeft) +countLuckyNumber(t->pRight); 
}



int main() {
luckyNumberList();
TNODE* t;
initTree(t);
insertNode(t, 60);
insertNode(t, 25);
insertNode(t, 65);
insertNode(t, 19);
insertNode(t, 40);
insertNode(t, 62);
insertNode(t, 90);
insertNode(t, 68);
insertNode(t, 100);
insertNode(t, 12);
insertNode(t, 30);
insertNode(t, 44);
insertNode(t, 50);
cout << "NLR: ";
NLR(t);

cout << "\nThe lucky number: ";
for(int i=0; i<=500; i++) {
    if(luckyNumber[i]) cout << i << " ";
}

cout << "\nThe number of lucky numbers: " << countLuckyNumber(t);
return 0;
}