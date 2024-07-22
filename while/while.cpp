#include <iostream>
#include<cstdlib>
using namespace std;


int main()
{
    cout << "\ntask1" << endl;
	int num = 0;
	while (num<=128)
	{
		num += 1;
		cout << (char)num;
	}
	cout << "\ntask2" << endl;
	int i;
	cout << "ulduzlarin sayini daxil edin;";
	cin >> i;
	while (i > 0) {
		cout << "*";
		i--;
	}
	cout << "\ntask3" << endl;
	int k = 1;
	while (k < 50) {
		if (k % 2 == 0) {
			cout << k << " ";
		}
		k++;
	}
	cout << "\ntask4" << endl;
	int min, max;
	cout << "baslangici daxil edin;";
	cin >> min;
	cout << "son daxil edin;";
	cin >> max;
	int cem = 0;
	int hasil = 1;
	while (min < max) {
		if (min % 2 == 0) {
			cem += min;
		}
		else {
			hasil *= min;	
		}
		min++;
	}
	cout << "cutlerin cemi;" << cem << endl;
	cout << "teklerin hasili;" << hasil << endl;
	cout << "\ntask5" << endl;
	int j=1;
	while (j < 50) {
		if (j % 3 == 0) {
			cout << j << " ";
		}
		j++;
	}
	cout << "\ntask6" << endl;
	int eded;
	cout << "ededi daxil edin;";
	cin >> eded;
	int faktorial= 1;
	while (eded > 0) {
		faktorial *= eded;
		eded--;
	}
    cout << faktorial;
	cout << "\ntask7" << endl;
	int num;
	cout << "ededi daxil edin:";
	cin >> num;
	int quvvet;
	cout << "quvveti daxil edin : ";
	cin >> quvvet;
	int quv = 1;
	while (quvvet>0) {
		quv *= num;
		quvvet--;
	}
	cout << quv;
	cout << "\ntask8" << endl;
	int number;
	cout << "eded daxil edin:";
	cin >> number;
	int reqem = 0;
	int reqem_cem=0;
	while (number > 0) {
		int b = number % 10;
		number /= 10;
		reqem++;
		reqem_cem += b;
	}	
	cout << "reqemlerinin cemi;" << reqem_cem << endl;
	cout << "reqemlerinin sayi;" << reqem << endl;
	cout << "\ntask10" << endl;
	int c;
	cout << "eded daxil edin:";
	cin >> c;
	int bolunen=1;
	while (bolunen <= c) {
		if (c % bolunen == 0) {
			cout << bolunen << " ";
		}
		bolunen++;
	}
	cout << "\ntask12" << endl;
	int e;
	cout << "eded daxil edin:";
	cin >> e;
	int teklik = e % 10;
	e /= 10;
	while (e > 0) {
		int f = e % 10;
		if (teklik - 1 == f) {
			cout << "var";
			break;
		}
		e /= 10;
		teklik = f;
	}
	cout << "\ntask13" << endl;
	int numm;
	cout << "eded daxil edin:";
	cin >> numm;
	int tekl = numm % 10;
	numm /= 10;
	while (numm > 0) {
		int z = numm % 10;
		if (tekl >= numm) {
			cout << "var";
			break;
		}
		numm /= 10;
		tekl = z; 
	}
	
	cout << "\ntask14" << endl;
	int a;
	cout << "eded daxil edin:";
	cin >> a;
	while (a) {
		int random = (rand() % 10);
		if (a == random) {
			cout << random << " ";
			cout << "ededi tapdiniz.";
			break;
		}
		else {
			cout << random << " ";
			cout << "sehvdir.";
		}
	}


}

