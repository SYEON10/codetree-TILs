#include <iostream>
#include <queue>
#include <cmath>

using namespace std;

struct compare{
    bool operator()(pair<int, int> a, pair<int, int> b){
        int a_distance = abs(a.first) + abs(a.second);
        int b_distance = abs(b.first) + abs(b.second);
        if(a_distance != b_distance) return a_distance > b_distance;
        else if(a.first != b.first) return a.first > b.first;
        else return a.second > b.second;

    }
};

int main() {
    // 여기에 코드를 작성해주세요.
    priority_queue<pair<int, int>, vector<pair<int, int>>, compare> pq;

    int n, m;
    cin >> n >> m;

    while(n--){
        int x, y;
        cin >> x >> y;
        pq.push({x, y});
    }

    while(m--){
        pq.push({pq.top().first + 2, pq.top().second + 2});
        pq.pop();
    }

    cout << pq.top().first << " " << pq.top().second;


    return 0;
}