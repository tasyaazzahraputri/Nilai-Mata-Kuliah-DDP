#include<iostream>
using namespace std;

int main (){
	
	int nilai_DDP;
	
	cout<<"##############Nilai Mata Kuliah DDP#############\n";
	cout<<"Masukkan Nilai Mata Kuliah DDP anda: ";cin>>nilai_DDP;


	if (nilai_DDP < 50){
		cout <<"F\n";
	}else if (nilai_DDP <= 56){
		cout <<"E\n";
	}else if (nilai_DDP <= 61){
		cout << "D\n";
	}else if (nilai_DDP <= 66){
		cout << "C\n";
	}else if (nilai_DDP <= 71){
		cout << "B\n";
	}else if (nilai_DDP < 76){
		cout << "B+\n";
	}else {
		cout << "A\n";
	}
	
	return 0;
}
