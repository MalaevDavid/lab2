#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));

    for (int i = 1; i <= 3; ++i) {
        string filename = "file" + to_string(i) + ".txt";
        ofstream outFile(filename);

        if (!outFile.is_open()) {
            cerr << "Ошибка открытия файла " << filename << endl;
            continue;
        }

        for (int j = 0; j < 10; ++j) {
            int randomNum = rand() % 10 + 1;
            outFile << randomNum;
            if (j < 9) outFile << " ";
        }
        outFile << endl;
        outFile.close();
        cout << "Файл " << filename << " создан." << endl;
    }

    return 0;
}