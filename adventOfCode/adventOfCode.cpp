// adventOfCode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    ifstream file("input.txt");
    if (!file.is_open()) {
        cout << "failed to open" << endl;
        return 1;
    }
    bool target = true;
    std::vector<int> v1;
    std::vector<int> v2;
    string mot;
    while (file >> mot) {
        if (target == true) {
            v1.push_back(stoi(mot));
        }
        else {
            v2.push_back(stoi(mot));
        }
        target = !target;
    }
    std::sort(v1.begin(),v1.end());
    std::sort(v2.begin(),v2.end());
    int s = 0;
    for (int i = 0;i < v1.size();i++) {
        s += abs(v1[i] - v2[i]);
    }
    cout << s << endl;
    cout << "Hello World!\n";
}
