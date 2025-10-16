#include <iostream>
using namespace std;

int main() {
	int tinggi;
	
	cout << "Nama : Saskia Alexandra Cintami Daulay" << endl;
	cout << "Kelas : XI RPL 2" << endl;
	cout<< "Masukkan tinggi segitiga: ";
	cin >> tinggi;
	
	for (int i = 1; i<= tinggi; i++) {
		// cetak spasi
		for (int j =1; j<= tinggi - i; j++) {
			cout << " ";
		}
		// cetak bintang
		for (int k = 1; k <= (2 * i - 1); k++) {
			cout << "*";
		}
		cout << endl; // pindah baris
	}
	
	return 0;
}