#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main(){
    int x, index = 0;
    string husbu[] = {"Ryomen Sukuna", "Gamin Yoon", "Adachi Saneyasu", "Mikage Reo", "Akaashi Keiji", "Levi Ackerman", "Ryu HaeEon", "Miya Atsumu", "Nagi Seishiro", "Ryu Choran"};
    // gunakan tombol kanan dan kiri, untuk end program tekan tombol esc
    do {
        x = _getch();
        system("cls");
        if (x == 224) {
                x = _getch();
                switch (x) {
                    case 75:
                        if (index > 0) {
                            index--;
                        } else {
                            index = index;
                        }
                        cout << husbu[index] << endl;
                        break;
                    case 77:
                        if (index < 9) {
                            index++;
                        } else {
                            index = index;
                        }
                        cout << husbu[index] << endl;
                        break;
                }
        }
    } while (x != 27);
}