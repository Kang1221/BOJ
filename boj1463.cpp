//
// Created by 강연수 on 2023/05/08.
//

#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int cnt = 0;
    cin >> n;
    while(n-1 == 1){
        if(n%3==0)
            n = n / 3;
        else if(n%2==0)
            n = n / 2;
        else
            n--;
        cnt++;
    }

    cout << cnt;

}