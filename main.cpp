#include <iostream>
using namespace std;
int main() {
    unsigned int num;
    cout << "Введите целое число: ";
    cin >> num;
    unsigned int* ptr = &num;
    unsigned char* bytePtr = reinterpret_cast<unsigned char*>(ptr);
    cout << "Содержимое каждого байта числа " << num << ":\n";
    for (size_t i = 0; i < sizeof(unsigned int); ++i) {
        cout << "Байт " << i << ": " << static_cast<int>(bytePtr[i]) << endl;
    }
    return 0;
}