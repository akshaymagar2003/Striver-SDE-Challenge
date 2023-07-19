#include <bits/stdc++.h>
using namespace std;

class LFUCache {
public:
    map<int, int> um;         
    vector<int> recentKeys; 
    int capacity;            

    LFUCache(int capacity) {
        this->capacity = capacity;
    }

    int get(int key) {
        auto it = um.find(key);
        if (it != um.end()) {
         
            auto pos = find(recentKeys.begin(), recentKeys.end(), key);
            recentKeys.erase(pos);
            recentKeys.push_back(key);
            return it->second;  
        }
        return -1; 
    }

    void put(int key, int value) {
        auto it = um.find(key);
        if (it != um.end()) {
            um[key] = value;
            auto pos = find(recentKeys.begin(), recentKeys.end(), key);
            recentKeys.erase(pos);
            recentKeys.push_back(key);
        } else {
            if (um.size() >= capacity) {
                int lruKey = recentKeys.front();  
                recentKeys.erase(recentKeys.begin());  
                um.erase(lruKey);               
            }
            um[key] = value;
            recentKeys.push_back(key);
        }
    }
};
