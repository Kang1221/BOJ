#include <bits/stdc++.h>
using namespace std;

int n,m;
int arr[10];
bool isused[10];


void func(int k){
    if(k == m){ //m개를 모두 다 골랐으면
        for(int i=0; i<m; i++)
            cout << arr[i] << ' '; //출력
        cout << '\n';
        return;
    }

    for(int i=1; i<= n; i++){
        if(!isused[i]){ //사용안했으면
            arr[k] = i; //추가하고
            isused[i] = 1; //사용했음을 표시
            func(k+1); //다음을 정하러가기
            isused[i] = 0; //i에 대한 것은 다 확인했으니까 사용하지 않은 상태로
        }
    }
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >>m;
    func(0);

}
