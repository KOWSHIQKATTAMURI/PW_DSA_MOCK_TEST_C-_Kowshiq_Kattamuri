#include<bits/stdc++.h>
using namespace std;

int firstUniqChar(string s){
    unordered_map<char, pair<int, int>> kow;
    int x = s.size();
    for(int i = 0; i < s.size(); i++){
        kow[s[i]].first++;
        kow[s[i]].second = i;
    }
    for(auto it : kow){
       if(it.second.first == 1){
          x = min(x, it.second.second);
       }
    }
    return x == s.size() ? -1 : x;
}

int main(){
    string s;
    cin >> s;
    cout << firstUniqChar(s) << endl;
}
