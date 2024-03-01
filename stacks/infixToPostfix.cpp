#include <iostream>
#include <stack>

using namespace std;

// int PushDecToOther(stack<int> &s, int DecValue, int base) {
//   while (DecValue) {
//     s.push(DecValue % base);
//     DecValue /= base;
//   }
//   return 1;
// }


// void PopDecFromOther(stack<int> &s) {
//     while (!s.empty()) {
//         int digit = s.top();
//         s.pop();
//         if (digit < 10) {
//             cout << digit;
//         } else {
//             char hexChar = 'A' + (digit - 10);
//             cout << hexChar;
//         }
//     }
// }

int PushDecToOther(stack<int> &s, int DecValue, int base) {
    while(DecValue) {
        s.push(DecValue%base);
        DecValue/=base;
    }
    return 1;
}

void PopDecFromOther(stack<int> &s) {
    while(!s.empty())  {
        int target = s.top();
        s.pop();
        if(target<10) {
            cout << target;
        } else {
            char sonOcCak='A'+(target-10);
            cout << sonOcCak;
        }
    }
}


int main() {
    stack<int> s;
  int DecValue, base;
  cout << "Nhap gia tri he thap phan: ";
  cin >> DecValue;

  cout << "Gia tri tuong ung cua " << DecValue << " o he 2 la: ";
  PushDecToOther(s, DecValue, 2);
  PopDecFromOther(s);
  cout << endl;

  cout << "Gia tri tuong ung cua " << DecValue << " o he 8 la: ";
  PushDecToOther(s, DecValue, 8);
  PopDecFromOther(s);
  cout << endl;

  cout << "Gia tri tuong ung cua " << DecValue << " o he 16 la: ";
  PushDecToOther(s, DecValue, 16);
  PopDecFromOther(s);
  cout << endl;

  return 0;
}
