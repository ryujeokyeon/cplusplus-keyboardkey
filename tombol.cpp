#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main(){
    int x;
    // atas 27, bawah 80, kanan 77, kiri 75, esc 27
    do {
        x = _getch();
        system("cls");
        if (x == 224) {
                x = _getch();
                switch (x) {
                    case 72:
                        cout << "anda menekan tombol arah atas" << endl;
                        break;
                    case 80:
                        cout << "anda menekan tombol arah bawah" << endl;
                        break;
                    case 75:
                        cout << "anda menekan tombol arah kiri" << endl;
                        break;
                    case 77:
                        cout << "anda menekan tombol arah kanan" << endl;
                        break;
                }
        } else {
            cout << "anda menekan tombol/karakter: " << (char) x << endl;
        }
    } while (x != 27);
    cout << "t esc, program selesai. " << (char) x << endl;
}