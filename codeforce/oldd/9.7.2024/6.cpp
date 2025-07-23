#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
You are given a four-digit pin code consisting of digits from 0
 to 9
 that needs to be entered. Initially, the cursor points to the digit 1
. In one second, you can perform exactly one of the following two actions:

Press the cursor to display the current digit,
Move the cursor to any adjacent digit.

The image above shows the device you are using to enter the pin code. For example, for the digit 5
, the adjacent digits are 4
 and 6
, and for the digit 0
, there is only one adjacent digit, 9
.

Determine the minimum number of seconds required to enter the given four-digit pin code.

Input
Each test consists of multiple test cases. The first line contains a single integer t
 (1≤t≤104
) - the number of the test cases. This is followed by their description.

The single line of each test case describes the pin code as a string of length 4
, consisting of digits from 0
 to 9
.

Output
For each test case, output the minimum number of seconds required to enter the given pin code.

Example
inputCopy
10
1111
1236
1010
1920
9273
0000
7492
8543
0294
8361
outputCopy
4
9
31
27
28
13
25
16
33
24
Note
In the first test case, the cursor needs to be pressed 4
 times.

In the second test case, it can be done in 9
 seconds as follows:

Press the cursor.
Move the cursor to the digit 2
.
Press the cursor.
Move the cursor to the digit 3
.
Press the cursor.
Move the cursor to the digit 4
.
Move the cursor to the digit 5
.
Move the cursor to the digit 6
.
Press the cursor.

*/

// 1010 31
// 1-0: 9
// 0-1: 9
// 1-0: 9

// 0294 33 *
// 1-0: 9
// 0-2: 8
// 2-9: 7
// 9-4: 5

// 8361 24
// 1-8: 7
// 8-3: 5
// 3-6: 3
// 6-1: 5


// 8543 16
// 1-8: 7
// 8-5: 3
// 5-4: 1
// 4-3: 1

// 1920 27
// 1-9: 8
// 9-2: 7
// 2-0: 8

int calcDistance(int &pre, int &cur) {
    if(pre==cur) {
        return 0;
    } else {
        return abs(cur-pre);
    }
}

int main() {
int t; cin >> t;

while(t--) {
    string pin; cin >> pin;
    int totalTime=4, previousPin=1;
    for(char it: pin) {
        int currentPin=it-'0';
        if(currentPin==0) currentPin=10;
        totalTime+=calcDistance(previousPin, currentPin);
        previousPin=currentPin;
    }
    cout << totalTime<< endl;
}
return 0;
}