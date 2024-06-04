#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
                    60
               25        65
          19       40   
       12       30    44
                         50
*/
vector<int> vtFriendlyNumber(100, 0);
struct TNODE {
    int key;
    struct TNODE *pLeft;
    struct TNODE *pRight;
} *TREE;

int gcd(int a, int b) {
    if(b==0) return a;
    return gcd(b, a%b);
}

int reverseNumber(int n) {
    int result=0;
    while(n!=0) {
        result=result*10+n%10;
        n/=10;
    }
    return result;
}


void friendlyNumber() {
    for(int i=1; i<=99; i++) {
        if(gcd(i, reverseNumber(i))==1) {
            vtFriendlyNumber[i]=vtFriendlyNumber[reverseNumber(i)]=1;
        }
    }
}

void initTree(TNODE* &t) {
    t=nullptr;
}

bool isEmptyTree(TNODE* &t) {
    return (t==nullptr);
}

TNODE* createTree(int &x) {
    TNODE* temp=new TNODE();
    temp->key=x;
    temp->pLeft=NULL;
    temp->pRight=NULL;
    return temp;
}

void addTree(TNODE* &t, int x) {
    if(isEmptyTree(t)) {
        t=createTree(x);
    } else {
        if(x<t->key) addTree(t->pLeft, x);
        else addTree(t->pRight, x);
    }
}

void NLR(TNODE* &t) {
    if(!isEmptyTree(t)) {
        cout << t->key<< ", ";
        NLR(t->pLeft);
        NLR(t->pRight);
    }
}

int countLeafNodes(TNODE* &t) {
    if(!isEmptyTree(t)) {
        if(t->pLeft==nullptr || t->pRight==nullptr) return 1;
        else return countLeafNodes(t->pLeft) + countLeafNodes(t->pRight);
    } else return 0;
}

int countNodeOneByOne(TNODE* &t) {
    if(isEmptyTree(t)) return 0;
    if((t->pLeft==nullptr && t->pRight!=nullptr) || (t->pLeft!=nullptr && t->pRight==nullptr)) return 1;
    else return countNodeOneByOne(t->pLeft) + countNodeOneByOne(t->pRight);
}

int heightOfTree(TNODE* t) {
    if(isEmptyTree(t)) return 0;
    int leftHeight=heightOfTree(t->pLeft);
    int rightHeight=heightOfTree(t->pRight);
    return max(leftHeight, rightHeight) +1;
}

//print cac node tren tung muc
void printLevel(TNODE* &t, int start, int level) {
    if(isEmptyTree(t)) return ;
    if(start==level) cout << t->key << " ";
    else {
        start++;
        printLevel(t->pLeft, start, level);
        printLevel(t->pRight, start, level);
    }
}

void printLevelMain(TNODE* &t) {
    int height=heightOfTree(t);
    cout << "Print level of tree\n";
    for(int i=0; i<height; i++) {
        cout << "Level " << i << ": ";
        printLevel(t, 0, i);
    }
}

// length from root to x
int lengthOfPath(TNODE* &t, int x) {
    if(isEmptyTree(t)) return -1;
    if(t->key==x) return 0;
    if(x<t->key) {
        int temp=lengthOfPath(t->pLeft, x);
        if(temp!=-1) return temp+1;
    } else {
        int temp=lengthOfPath(t->pRight, x);
        if(temp!=-1) return temp+1;
    } 
    return -1;
}


// kt cay nhi phan dung


// Nếu cây rỗng, nó không phải là một cây nhị phân đúng.
// Nếu một nút không có con trái và con phải, nó là một nút lá và là một phần của cây nhị phân đúng.
// Nếu một nút có cả hai con, kiểm tra các con của nó xem chúng có phải là cây nhị phân đúng không.
// Nếu một nút có một con trái hoặc một con phải, nó không phải là một cây nhị phân đúng.
bool isStricklyBinaryTree(TNODE* t) {
    if(isEmptyTree(t)) return true;
    if(t->pLeft==nullptr && t->pRight==nullptr) return true;
    if(t->pLeft!=nullptr && t->pRight!=nullptr) {
        return isStricklyBinaryTree(t->pLeft) && isStricklyBinaryTree(t->pRight);
    }
    return false;
}

// tim node chua x
TNODE* findX(TNODE* t, int x) {
    if(isEmptyTree(t)) return 0;
    if(x==t->key) return t;
    if(x<t->key) findX(t->pLeft, x);
    else findX(t->pRight, x);
}


// find min value of tree
void minValueOfTree(TNODE* t) {
    while(t->pLeft!=nullptr) {
        t=t->pLeft;
    }
    cout << "\nMin of tree: " << t->key<< endl;
}

void minValueOfRightTree(TNODE* t) {
    minValueOfTree(t->pRight);
}


// delete node

// leaf tree
void deleteLeafTree(TNODE* &t, int x) {
    if(isEmptyTree(t)) return ;
    if(t->key==x && t->pLeft==nullptr && t->pRight==nullptr) {
        delete t;
        t=nullptr;
        return;
    }
    if(t->key<x) deleteLeafTree(t->pRight, x);
    else deleteLeafTree(t->pLeft, x);
}

// xoa node voi mot con
void deleteWithOneChild(TNODE* &t, int x) {
    if(isEmptyTree(t)) return ;
    if((t->key==x && t->pLeft==nullptr && t->pRight!=nullptr)) {
        t->key=t->pRight->key;
        delete t->pRight;
        t->pRight=nullptr;
        return;
    }
    if(t->key==x && t->pRight==nullptr && t->pLeft!=nullptr) {
        t->key=t->pLeft->key;
        delete t->pLeft;
        t->pLeft=nullptr;
        return;
    }
    if(t->key<x) deleteWithOneChild(t->pRight, x);
    else deleteWithOneChild(t->pLeft, x);
}

int main() {
friendlyNumber();
TNODE* t;
initTree(t);
addTree(t, 60);
addTree(t, 25);
addTree(t, 65);
addTree(t, 19);
addTree(t, 40); 
addTree(t, 62);
addTree(t, 90);
addTree(t, 68);
addTree(t, 100);
addTree(t, 12);
addTree(t, 30); 
addTree(t, 44);
addTree(t, 50); 
cout << "NLR: ";
NLR(t);
cout << "\nThe sum of leaf node: " << countLeafNodes(t) << endl;
cout << "The sum of child nodes that have only left or right node: " << countNodeOneByOne(t)<< endl;
cout << "The height of tree: " << heightOfTree(t) << endl;
printLevelMain(t);

int x = 44; // Giá trị cần tìm đường đi
cout << "\nThe length of path from root to " << x << ": " << lengthOfPath(t, x) << endl;

cout << "Is strickly binary tree: " << isStricklyBinaryTree(t);

cout << "\nNode contain x that have key: "; 
TNODE* nodeX=findX(t, x);
cout << nodeX->key;


// min
minValueOfTree(t);
minValueOfRightTree(t);


// delete leaf

// deleteLeafTree(t, 50);
// cout << "\nNLR: ";
// NLR(t);


// delete node with one child
deleteWithOneChild(t, 44);
cout << "\nNLR: ";
NLR(t);
return 0;
}