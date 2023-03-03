#include <iostream>
#include <string>
#include <vector>
#include <cstdint>

using namespace std;

size_t read_number(string prompt) {
    cout << prompt;
    size_t ret;
    cin >> ret;
    return ret;
}

template<typename INT>
void populate_vector(vector<INT>& v, size_t n) {
    for (auto i = 0; i < n; ++i) {
        v.emplace_back(i);
    }
}

template<typename INT>
vector<INT>&& populate_vector_ref(size_t n) {
    auto v = new vector<INT>;

    for (auto i = 0; i < n; ++i) {
        v->emplace_back(i);
    }

    return move(*v);
}

template<typename INT>
void print_vector(vector<INT>& v) {
    for (auto item: v) {
        cout << item << ", ";
    }
    cout << endl;
}

int main() {
    auto n = read_number("数字を入力してください > ");
    auto v = populate_vector_ref<uint32_t>(n);
    print_vector(v);

    return 0;
}