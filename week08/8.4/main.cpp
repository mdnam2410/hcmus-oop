#include "casau.h"
#include "chimse.h"
#include "daibang.h"

#include <iostream>
#include <tuple>

std::pair<int, long long> hash(char* string, int size, int m) {
    //long long k = string[0];
    int j = string[0] % m;
    int i = 1;
    while (i < size) {
        j = (j * (128 % m)) % m;
        //k *= 128;
        j = (j + string[i] % m) % m;
        //k += string[i];
        ++i;
    }
    
}


int main() {
    char string[] = "Tao dap chet me may a!";
    int size = sizeof(string) / sizeof(char);
    auto pair = hash(string, size, 41);
    std::cout << pair.first << ' ' << pair.second << '\n';
    return 0;
}