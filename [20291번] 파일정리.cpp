#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    string input, sub;
    map <string, int> file;
    
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> input;
        //Ȯ���� �и�
        size_t pos = input.rfind('.'); 
        sub = input.substr(pos+1);
        //�ش��ϴ� Ȯ���� ���� �߰�
        file[sub]++;
    }

    //map ���
    map<string, int>::iterator iter;
    for (iter = file.begin(); iter != file.end(); ++iter)
        cout << iter->first << ' ' << iter->second << '\n';
    return 0;
}