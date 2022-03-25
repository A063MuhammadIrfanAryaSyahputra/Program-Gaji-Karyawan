#include <iostream>
#include <string>
using namespace std;

int main(){
	int a,b;
	long int bonus1,bonus2,c,d;
	cout<<"Program menghiotung gaji\n";
	cout<<"Gaji team 1 = 22 juta\n";
	cout<<"Gaji team 2 = 28 juta\n";
	cout<<"Bagi team yang dapat menyelesaikan dalam wakti kurang dari 5 bulan maka gaji ditambah 6%\n";
	cout<<"=============================================================\n";
	
	cout<<"apakah team 1 dapat menyelesaikan kurang dalam 5 bulan? (1/0) : ";
	cin>>a;
	cout<<"==================================================================\n";
	if (a == 1){
		bonus1=0.06*22000000;
		c=22000000;
		cout<<"Anda mendapatkan gaji bonus senilai "<<bonus1<<endl;
		cout<<"Total Gaji Anda = " << bonus1+c<<endl;
		cout<<"==================================================\n";
	if (a == 1){
		bonus1=0.06*22000000;
		c=22000000;
		cout<<"Anda mendapatkan gaji bonus senilai "<<bonus1<<endl;
		cout<<"Total Gaji Anda = " << bonus1+c<<endl;
		cout<<"==================================================\n";	
	}
	else{
		cout<<"Anda mendapatkan gaji normal\n";
	}
