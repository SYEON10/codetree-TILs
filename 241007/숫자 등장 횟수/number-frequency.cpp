#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    unordered_map<int, int> map;


    while(n--){
        int element;
        cin >> element;

        if(map.find(element) == map.end()) {map[element] = 1;}
        else {map[element]++;}
    }

    while(m--){
        int element;
        cin >> element;

        if(map.find(element) == map.end()) cout << 0 << ' ';
        else cout << map[element] << ' ';
    }

    return 0;
}