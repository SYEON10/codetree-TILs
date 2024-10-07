#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    unordered_map<int, int> map;

    while(n--){
        string cmd;
        cin >> cmd;

        int a, b;

        if(cmd == "add"){
            cin >> a >> b;
            map[a] = b;
        }
        if(cmd == "find"){
            cin >> a;
            if(map.find(a) == map.end()){
                cout << "None" << '\n';
            }
            else cout << (map.find(a))->second << '\n';
        }
        if(cmd == "remove"){
            cin >> a;
            map.erase(a);
        }
    }

    return 0;
}