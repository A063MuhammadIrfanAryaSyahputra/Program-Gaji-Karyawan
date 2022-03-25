#include <iostream>
#include <string>
using namespace std;

int main(){
	int a,b,bulan;
	long int bonus1,bonus2,c,d,total1, total2, normal1, normal2;
	cout<<"||==============================================================================================||\n";
	cout<<"||========================================Program menghitung====================================||\n";
	cout<<"||Gaji team 1 = 22 juta                                                                         ||\n";
	cout<<"||Gaji team 2 = 28 juta                                                                         ||\n";
	cout<<"||Bagi team yang dapat menyelesaikan dalam waktu kurang dari 5 bulan maka gaji ditambah 6%      ||\n";
	cout<<"||==============================================================================================||\n";
	
	cout<<"||Dalam berapa bulan team 1 dapat menyelesaikan tugasnya ? ";
	cin>>a;
	cout<<"||==============================================================================================||\n";
	
	if (a != 5){
		bonus1=0.06*22000000*a;
		c=22000000;
		total1=bonus1+c;
		
		cout<<"||Anda mendapatkan gaji bonus senilai "<<bonus1<<endl;
		cout<<"||Total Gaji Anda = " << total1<<endl;
		cout<<"||==============================================================================================||\n";
		
	}
	else{
		cout<<"||Team 1 mendapatkan gaji normal sebanyak 22 Juta "<<endl;
		cout<<"||=========================================================================================||\n";
	}
	
	cout<<"||Dalam berapa bulan team 2 dapat menyelesaikan tugasnya ?  ";
	cin>>b;
	
	if(b!=5){
		bonus2=0.06*28000000*b;
		d=28000000;
		total2=bonus2+d;
		cout<<"||Anda mendapatkan gaji bonus senilai "<<bonus2<<endl;
		cout<<"||Total Gaji Anda = " << total2<<endl;
		
	}
	
	else{
		cout<<"||Team 2 mendapatkan gaji normal sebanyak 28 Juta\n";
	}
	cout<<"||==============================================================================================||\n";
	return 0;
}
