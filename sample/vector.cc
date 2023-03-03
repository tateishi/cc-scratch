#include <iostream>
#include <string>
#include <vector>
#include <cstdint>

using namespace std;

size_t read_number(const string prompt) {
    cout << prompt;
    size_t ret;
    cin >> ret;
    return ret;
}

template<typename INT>
void populate_vector(vector<INT>& v, const size_t n) {
    for (auto i = 0; i < n; ++i) {
        v.emplace_back(i);
    }
}

template<typename INT>
vector<INT>&& populate_vector_ref(const size_t n) {
    auto v = new vector<INT>;

    for (auto i = 0; i < n; ++i) {
        v->emplace_back(i);
    }

    return move(*v);
}

template<typename INT>
void print_vector(const vector<INT>& v) {
    for (auto item: v) {
        cout << item << ", ";
    }
    cout << endl;
}

void populate_and_print(const size_t n) {
    print_vector(populate_vector_ref<uint32_t>(n));
}

int main() {
    auto n = read_number("数字を入力してください > ");
    auto v = populate_vector_ref<uint32_t>(n);
    print_vector(v);
//    populate_and_print(n);

    return 0;
}