#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/**
Giả sử cây nhị phân tìm kiếm đã được tạo trước đó. Viết hàm
đếm tất cả các node có chứa Key đều là số Palindrome.
 Số Palindrome (hoặc Palindromic)
• (Theo Wikipedia) Là một số vẫn giữ nguyên giá trị khi các chữ
số của nó được đảo ngược. Hay nói cách khác là số đối xứng.
• 30 số thập phân palindrome đầu tiên là: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
 11, 22, 33, 44, 55, 66, 77, 88, 99, 101 , 111, 121, 131, 141, 151, 161,
171, 181, 191, 202, ... 
 */


struct TNODE
{
int Key;
struct TNODE *pLeft;
struct TNODE *pRight;
} *TREE;

bool Palindrome(int data) {
    int result=0, temp=data;
    while(temp!=0) {
	result=result*10+temp%10;
	temp/=10;
    }
    return result==data;
}



void initTree(TNODE* t) {
    t==NULL;
}

void insertNode(TNODE* &t, int data) {
     if(!t) {
	t=new TNODE();
	t->key=data;
	t->pLeft=NULL;
	t->pRight=NULL;
     } else {
	if(data<t->key) insertNode(t->pLeft, data);
	else insertNode(t->pRight, data);
     }
}

void NLR(TNODE* &t) {
    if(!t) return;
    cout << t->Key << " ";
    NLR(t->pLeft);
    NLR(t->pRight);
}

int countPalindrome(TNODE* &t) {
	if(Palindrome(t->key)) return 1;
	return countPalindrome(t->pLeft) + countPalindrome(t->pRight);
}

int main() {
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



cout << countPalindrome(t);
return 0;
} 

