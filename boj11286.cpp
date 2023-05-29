#include <bits/stdc++.h>
using namespace std;

//우선순위 큐에서는 클래스를 따로 만들어야함
class cmp{
    public :
    bool operator() (int a, int b){
        if(abs(a)!=abs(b))
            return abs(a) > abs(b); // 앞의 수가 크면 true 아니면 false
            
        return a>0 && b<0; //절대값이 같으면 앞+, 뒤- 인 경우만 true
            
    }
}; //세미콜론 붙이기


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    //우선순위 큐
    priority_queue <int, vector<int>, cmp> pq;
    
    int n;
    cin >> n;
    
    int x;
    while(n--){
        cin >> x;
        //0 나오면 pop
        if(x==0){
            if(pq.empty()) //비어있는데 pop하면 런타임에러
                cout << 0<< '\n';
            else{
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
        //아니면 push
        else 
            pq.push(x);
    }

}
