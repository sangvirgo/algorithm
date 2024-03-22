#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
viet ham kiem rea xem cac key co trong danh sach co phai la thua so nguyen to khong
*/

typedef struct Node
{
    int Key;
    Node* pNext;
}NODE;

typedef struct List
{
    Node* pHead;
    Node* pTail;
}LIST;

Node* mergeList(List& a, List& b);

Node* CreateNode(int x) {
    Node *temp=new Node();
    temp->Key=x;
    temp->pNext=nullptr;
    return temp;
}



bool isPrime(int x) {
    if(x<=1) return false;
    for(int i=2; i<=sqrt(x); i++) {
        if(x%i==0) return false;
    }
    return true;
}

void insertLast(List& head, int x) {
    Node *newNode=CreateNode(x);
    if(head.pHead==nullptr) {
        head.pHead=newNode;
        head.pTail=newNode;
    } else {
        head.pTail->pNext=newNode;
        head.pTail=newNode;
    }
}

void print(List head) {
    Node* temp=head.pHead;
    while(temp!=nullptr) {
        cout << temp->Key << " ";
        temp=temp->pNext;
    }
    cout << endl;
}

bool checkPrimeKeys(List myList) {
    Node* currentNode = myList.pHead;
    while (currentNode != nullptr) {
        if (!isPrime(currentNode->Key)) {
            return false; // Nếu có ít nhất một số không phải là số nguyên tố, trả về false
        }
        currentNode = currentNode->pNext;
    }
    return true; // Nếu tất cả các số đều là số nguyên tố, trả về true
}

void Menu1(List &t) {
    List secondList;
    secondList.pHead = nullptr;
    secondList.pTail = nullptr;
    
    int choice;

    while (true) {
        cout << "-------- Menu --------" << endl;
        cout << "1. Insert last" << endl;
        cout << "2. Display list" << endl;
        cout << "3. Check Prime" << endl;
        cout << "4. Insert second list and merge" << endl;
        cout << "0. Exit" << endl;
        cout << "-----------------------------------------------------";
        cout << "\nEnter choice: ";
        cin >> choice; // Đọc lựa chọn từ người dùng

        switch (choice) {
            case 0:
                cout << "Exiting..." << endl;
                return; // Thoát khỏi chương trình
            case 1: {
                int data;
                cout << "Enter data: ";
                cin >> data;
                insertLast(t, data); // Thêm dữ liệu vào cây
                break;
            }
            case 2:
                cout << "-----------------------------------------------------";
                if (t.pHead==nullptr) {
                    cout << "List is empty" << endl;
                } else {
                    // Hiển thị dữ liệu của cây
                    cout << "List data:";
                    print(t);
                }
                cout << "-----------------------------------------------------";
                break;

            case 3: {
                cout << "-----------------------------------------------------";
                if(checkPrimeKeys(t)) cout << "All values are prime number" << endl;
                else cout << "Has at least one element that is not prime" << endl;
                cout << "-----------------------------------------------------";
                break; //Thêm break vào đây
            }

            case 4: {
                cout << "-----------------------------------------------------";
                cout << "Enter data for second list (-1 to stop): " << endl;
                int data;
                cin >> data;
                while (data != -1) {
                    insertLast(secondList, data);
                    cin >> data;
                }
                cout << "Second list data: ";
                print(secondList);
                
                // Merge two lists
                Node* mergedList = mergeList(t, secondList);
                cout << "Merged list data: ";
                print({mergedList, nullptr});
                cout << "-----------------------------------------------------";
                break;
            }
            default:
                cout << "-----------------------------------------------------";
                cout << "Invalid choice. Please try again." << endl;
        }
    }
}

Node* mergeList(List& a, List& b) {
    List result;
    result.pHead = result.pTail = nullptr;

    Node *currentA = a.pHead;
    Node *currentB = b.pHead;

    // Trường hợp đặc biệt khi một trong hai danh sách là rỗng
    if (currentA == nullptr) return b.pHead;
    if (currentB == nullptr) return a.pHead;

    // Chọn nút đầu tiên của danh sách chứa kết quả
    if (currentA->Key <= currentB->Key) {
        result.pHead = currentA;
        currentA = currentA->pNext;
    } else {
        result.pHead = currentB;
        currentB = currentB->pNext;
    }

    Node* currentResult = result.pHead;

    // Hợp nhất hai danh sách
    while (currentA != nullptr && currentB != nullptr) {
        if (currentA->Key <= currentB->Key) {
            currentResult->pNext = currentA;
            currentA = currentA->pNext;
        } else {
            currentResult->pNext = currentB;
            currentB = currentB->pNext;
        }
        currentResult = currentResult->pNext;
    }

    // Nếu một trong hai danh sách còn phần tử
    if (currentA != nullptr)
        currentResult->pNext = currentA;
    else
        currentResult->pNext = currentB;

    // Cập nhật pTail của danh sách kết quả
    while (currentResult->pNext != nullptr)
        currentResult = currentResult->pNext;
    result.pTail = currentResult;

    // Trả về danh sách kết quả đã hợp nhất
    return result.pHead;
}



int main() {
    // Khởi tạo danh sách liên kết
    List myList;
    myList.pHead = nullptr;
    myList.pTail = nullptr;

    Menu1(myList);

return 0;
}