#include <memory>

int main() {
    int* a = new int[256];
    int* p = std::assume_aligned<256>(a);
    delete[] a;
}
