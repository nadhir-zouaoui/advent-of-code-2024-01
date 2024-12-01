// adventOfCode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>

int main()
{
    std::ifstream file("input.txt");
    if (!file.is_open()) {
        std::cout << "failed to open" << std::endl;
        return 1;
    }
    std::unordered_map<int, int> map2;
    std::string mot;
    std::vector<int> v1;
    while (file >> mot) {
        v1.push_back(stoi(mot));
        file >> mot;
        map2[stoi(mot)] += 1;
    }
    int s = 0;
    for (auto& i : v1)
    {
        s += i * map2[i];
    }
    std::cout << s << std::endl;
    std::cout << "Hello World!\n";
}
