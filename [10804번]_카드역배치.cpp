#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> arr(21,0);

void reverse(int a, int b) {
    while (a < b) {
        swap(arr[a++], arr[b--]);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    //초기 카드
    for (int i = 1; i < 21; i++) {
        arr[i] = i;
    }
  
    for (int i = 0; i < 10; i++) {
        cin >> a >> b;
        reverse(a, b);
    }

    //print result
    for (int i = 1; i < 21; i++) {
        cout<< arr[i]<<' ';
    }

    return 0;
}