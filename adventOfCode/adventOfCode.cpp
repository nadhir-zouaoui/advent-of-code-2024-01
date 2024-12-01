// adventOfCode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>

int main()
{
    std::ifstream file("input.txt");
    if (!file.is_open()) {
        std::cout << "failed to open" << std::endl;
        return 1;
    }
    bool target = true;
    std::vector<int> v1;
    std::vector<int> v2;
    std::string line;
    while (getline(file, line)) {
        std::istringstream ss(line);
        std::string mot;
        ss >> mot;
        v1.push_back(stoi(mot));
        ss >> mot;
        v2.push_back(stoi(mot));
    }
    std::sort(v1.begin(),v1.end());
    std::sort(v2.begin(),v2.end());
    int s = 0;
    for (int i = 0;i < v1.size();i++) {
        s += abs(v1[i] - v2[i]);
    }
    std::cout << s << std::endl;
    std::cout << "Hello World!\n";
}
