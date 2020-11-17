#include <iostream> 
#include <iomanip> 
#include <time.h> 

using namespace std;

void Create(int* c, const int size, const int Low, const int High, int i) {
    if (i == size) {
        return;
    }
    c[i] = Low + rand() % (High - Low + 1);
    Create(c, size, Low, High, i + 1);
}


int Count(int* c, const int size, int i) {
    if (i == size) {
        return 0;
    }
    if ((c[i] % 6 == 0) || ((i + 1) % 5 != 0)) {
        return Count(c, size, i + 1) + 1;
    }
    return Count(c, size, i + 1);
}

void Print(int* c, const int size, int i) {
    if (i == size) {
        cout << endl;
        return;
    }
    cout << setw(4) << c[i];
    Print(c, size, i + 1);
}

void Replacing(int* c, const int size, int i) {
    if (i == size) {
        return;
    }
    if ((c[i] % 6 == 0) || ((i + 1) % 5 != 0)) {
        c[i] = 0;
    }
    Replacing(c, size, i + 1);
}

int Sum(int* c, const int size, int i) {
    if (i == size) {
        return 0;
    }
    if ((c[i] % 6 == 0) || ((i + 1) % 5 != 0))
    {
        return Sum(c, size, i + 1) + c[i];
    }
    return Sum(c, size, i + 1);
}

int main() {
    srand((unsigned)time(NULL));
    const int n = 25;
    int c[n];

    int Low = 4;
    int High = 72;

    Create(c, n, Low, High, 0);
    Print(c, n, 0);
    cout << "Sum = " << Sum(c, n, 0) << endl;
    cout << "\nCount = " << Count(c, n, 0) << endl;
    cout << endl;
    Replacing(c, n, 0);
    Print(c, n, 0);

    return 0;
}

