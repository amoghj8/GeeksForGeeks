// Sort elements by frequency

#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> array = {2, 5, 2, 8, 5, 6, 8, 8};
    map<int,pair<int,int>> m;
    for(int i=0;i<array.size();i++) {
        if(m.find(array[i])!=m.end()){
            m[array[i]].second++;
        }
        else {
            m[array[i]] = make_pair(i,1);
        }
    }
    vector<pair<int,pair<int,int>>> res;
    map<int,pair<int,int>>::iterator it;
    for(it=m.begin();it!=m.end();it++) {
        res.push_back(make_pair(it->first, it->second));
    }
    sort(res.begin(), res.end(), [](pair<int,pair<int,int>> a, pair<int,pair<int,int>> b) {
        if(a.second.second != b.second.second) {
            return a.second.second>b.second.second;
        }
        else {
            return a.second.first<b.second.first;
        }
    });
    for(auto p:res) {
        while(p.second.second){
            cout << p.first << "\t";
            p.second.second--;
        }
    }
    return 0;
}
