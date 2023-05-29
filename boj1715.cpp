#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    //우선순위 큐
    priority_queue <int, vector<int>, greater<int>> pq;
    
    //input
    int n, x;
    cin >> n;
    while(n--){
        cin >> x;
        pq.push(x);
    }
    
    int result = 0;
    while(pq.size() > 1){
        
        //작은 원소 두개 빼고
        int a = pq.top(); 
        pq.pop();
        int b = pq.top(); 
        pq.pop();
        
        //결과값 추가
        result += a + b;
        
        //둘의 합 push
        pq.push(a+b); 
    }
    cout << result;
}
