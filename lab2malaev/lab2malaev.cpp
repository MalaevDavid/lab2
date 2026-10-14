#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    const char* files[] = { "file1.txt", "file2.txt", "file3.txt" };

    for (int i = 0; i < 3; ++i) {
        ofstream f(files[i]);
        for (int j = 0; j < 10; ++j) {
            f << rand() % 10 + 1 << (j < 9 ? " " : "\n");
        }
        cout << "Файл " << files[i] << " создан." << endl;
    }

    return 0;
}