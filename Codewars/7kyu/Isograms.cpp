#include <string>
#include <iostream>
bool is_isogram(std::string str) {
    for (int i=0; i < (int)str.length();++i) {
        for (int j=i+1; j < (int)str.length(); ++j) {
            if (std::tolower(str[i]) == std::tolower(str[j])) {
                return false;
            }
        }
    }
    return true;
}
