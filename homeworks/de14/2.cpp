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

int main() {
friendlyNumber();
TNODE* t;
initTree(t);
addTree(t, 60);
addTree(t, 25);
addTree(t, 65);
addTree(t, 19);
addTree(t, 40); 
addTree(t, 12);
addTree(t, 30); 
addTree(t, 44);
addTree(t, 50); 
cout << "NLR: ";
NLR(t);
cout << "\nThe sum of leaf node: " << countLeafNodes(t) << endl;
cout << "The sum of child nodes that have only left or right node: " << countNodeOneByOne(t)<< endl;
cout << "The height of tree: " << heightOfTree(t) << endl;
return 0;
}