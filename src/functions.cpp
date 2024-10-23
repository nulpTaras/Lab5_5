//
// Created by Taras Neridnyi on 24.10.2024.
//


#include <iostream>
using namespace std;

int find_mod(int b, int p, int m, int level, int &depth) {
    if (level > depth) {
        depth = level;
    }
    cout << "lvl= " << level << " ";
    if (p == 0) {
        return 1;
    }
    if (p % 2 == 0) {
        int half = find_mod(b, p / 2, m, level + 1, depth);
        return (half * half) % m;
    } else {
        int half = find_mod(b, (p - 1) / 2, m, level + 1, depth);
        return (b * ((half * half) % m)) % m;
    }
}


