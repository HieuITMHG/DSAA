#include <iostream>
#include <cstdlib>
#include <ctime>
#include <set>

using namespace std;

int main() {
    srand(time(0));

    int m;
    cout << "Nhap so luong so muon tao ngau nhien: ";
    cin >> m;

    set<int> generatedNumbers;

    while (m > 0) {
        int randomNumber = rand() % 100000 + 1;

        // Check if the number is already generated
        while (generatedNumbers.count(randomNumber) > 0) {
            randomNumber = rand() % 100000 + 1;
        }

        generatedNumbers.insert(randomNumber);
        cout << randomNumber << " ";
        m--;
    }

    return 0;
}
