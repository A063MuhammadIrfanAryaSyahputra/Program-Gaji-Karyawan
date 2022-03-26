#include<iostream>
using namespace std;

class proses{
	public :
		int bulan;
		float total;
		float tambahan;
		
		void input(int a,string tim);
		void output(string tim);
		
}pro;

void proses::input(int a,string tim){
	
	cout<<endl;
	cout<<"Masukan Jumlah Bulan Terselesaikannya Tugas : ";
	cin>>pro.bulan;
	
	if(pro.bulan<=5){
		pro.total=a*pro.bulan;
		pro.tambahan=pro.total*0.06;
		
	}
	else{
		pro.total=a*pro.bulan;
		
	}
	pro.output(tim);
	
}

void proses::output(string tim){
	system("cls");
	cout<<"========================================"		<<endl;
	cout<<"           SLIP GAJI ANDA               "		<<endl;
	cout<<"========================================"		<<endl;
	cout<<"									"				<<endl;
	cout<<"	Developer : " <<tim								<<endl;
	cout<<"	Jumlah    : " <<pro.bulan<<" Bulan"				<<endl;
	cout<<" 	Tambahan  : " <<pro.tambahan<<" Juta"			<<endl;
	cout<<"	Gaji 	  : " <<pro.total+pro.tambahan<<" Juta" <<endl;
	cout<<"========================================"		<<endl;
		
}

int main(){
	int pilih;
	cout<<"========================================"		<<endl;
	cout<<"        PROGRAM GAJI DEVELOPER          "		<<endl;
	cout<<"========================================"		<<endl;
	cout<<" 									   "		<<endl;
	cout<<" TIM 1 22 JUTA  						   "		<<endl;
	cout<<" TIM 2 28 JUTA						   "		<<endl;
	cout<<" 									   "		<<endl;
	cout<<"========================================"		<<endl;
	
	cout<<"Masukan Pilihan Anda : ";
	cin>>pilih;
	if(pilih==1){
		pro.input(22,"TIM1");
	}
	else(pilih==2);{
		pro.input(28,"TIM2");
	}
}
