#include <iostream>
#include <vector>
#include <cstdint>

using namespace std;

template<typename INT>
void populate_vector(vector<INT>& v, size_t n) {
    for (size_t i = 0; i < n; ++i) {
        v.emplace_back(i);
    }
}

template<typename INT>
void print_vector(vector<INT>& v) {
    for (auto item: v) {
        cout << item << ", ";
    }
    cout << endl;
}

int main() {
    vector<int16_t> v;
    populate_vector(v, 100);
    print_vector(v);

    return 0;
}