#include <iostream>
#include <fstream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int sum = 0;
  	int licznik = 0;
  	for (int i = 0; i < 20; i++) {
    	for (int j = 0; j < 21; j++) {
      		if (tab[i][j] == '1' && j != 20) sum++;
      		if (j == 20) {
        		if (sum % 2 == 0 && tab[i][j] == '1') licznik++;  //suma_jedynek %2 ==0
        		if (sum % 2 == 1 && tab[i][j] == '0') licznik++; 
      		}
    	}
    	sum = 0;
  	}
  	return licznik;
}
	return 0;
}
