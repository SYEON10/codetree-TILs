#include <iostream>
#include <queue>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    priority_queue<int> q;

    int n;
    cin >> n;

    while(n--){
        int x;
        cin >> x;

        if(x == 0){
            if(q.empty()){
                cout << 0 << '\n';
            }
            else{
                cout << q.top() << '\n';
                q.pop();
            }
        }

        q.push(x);
    }

    return 0;
}