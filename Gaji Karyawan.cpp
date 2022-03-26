#include<iostream>
using namespace std;

class process{
	public :
		int bul;
		float tot, tbh;
		
		void input(int a,string tim);
		void output(string tim);
}prs;

void process::input(int a,string tim){
	
	cout<<endl;
	cout<<"Masukan Jumlah Bulan Terselesaikannya Tugas : ";
	cin>>prs.bul;
	
	if(prs.bul!=5){
		prs.tot=a*prs.bul;
		prs.tbh=prs.tot*0.06;
		
	}
	else{
		prs.tot=a*prs.bul;
		
	}
	prs.output(tim);
	
}

void process::output(string tim){
	system("cls");
	cout<<"||========================================||"    <<endl;
	cout<<"                SLIP GAJI                "		<<endl;
	cout<<"||========================================||"    <<endl;
	cout<<"||Developer : " <<tim<<"                        ||"				    <<endl;
	cout<<"||Jumlah    : " <<prs.bul<<" Bulan                     ||"				<<endl;
	cout<<"||Tambahan  : " <<prs.tbh<<" Juta                   ||"	            <<endl;
	cout<<"||Gaji 	    : " <<prs.tot+prs.tbh<<" Juta                  ||"       <<endl;
	cout<<"||========================================||"    <<endl;
		
}

int main(){
	int pilih;
	cout<<"||========================================||"		<<endl;
	cout<<"           PROGRAM GAJI + BONUS             "		<<endl;
	cout<<"||========================================||"		<<endl;
	cout<<"||            TEAM 1 22 JUTA              ||"		<<endl;
	cout<<"||            TEAM 2 28 JUTA	          ||"		<<endl;
	cout<<"||   Bonus 6% dari gaji pokok jika bisa   ||"		<<endl;
	cout<<"||   menyelesaikan kurang dari 5 bulan    ||"		<<endl;
	cout<<"||========================================||"		<<endl;
	
	cout<<"Masukan Team  : ";
	cin>>pilih;
	if(pilih==1){
		prs.input(22,"TIM1");
	}
	else(pilih==2);{
		prs.input(28,"TIM2");
	}
}
