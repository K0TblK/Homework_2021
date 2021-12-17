#include<iostream>

int main() {
    int Time1[3];
    int Time2[3];
    int diff[3];
    for (int i = 0; i < 3; ++i) {
        std::cin >> Time1[i];
    }
    for (int i = 0; i < 3; ++i){
        std::cin >> Time2[i];
        diff[i] = Time2[i]-Time1[i];
    }
    for (int i = 1; i < 3; ++i) {
        if (diff[i] < 0) {
            diff[i - 1] -= 1;
            diff[i] = 60 + diff[i];
        }
    }
    for (int i = 0; i < 3; ++i) {
        std::cout << diff[i] << " ";
    }
    return 0;
}
