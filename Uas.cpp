#include <iostream>
#include <string>
#include<math.h>
using namespace std;
float totalsigmaX, totalsigmaY, powerX, powerY, totalsigmaXY, total,  sigmaXY, kuadratXtotal, kuadratYtotal, r;
int main(){
	int jumlah, x[100], y[100];
	cout << "jumlah data: ";cin >> jumlah;	
	for (int i=0;i<jumlah;i++){
		cout << "Data "<<i+1<<". "<<endl;
		cout << "X: ";cin >> x[i];
		if (x<0){
		cout << "MASUKAN BILANGAN SAMA DENGAN ATAU LEBIH DARI 0!!!!!"<<endl;
		}
		cout << "Y: ";cin >> y[i];
		if (y<0){
			cout << "MASUKAN BILANGAN SAMA DENGAN ATAU LEBIH DARI 0!!!!!"<<endl;
		}
		totalsigmaX=totalsigmaX+x[i];
		totalsigmaY=totalsigmaY+y[i]; 
		sigmaXY=x[i]*y[i];
		powerX=pow(x[i],2);
		kuadratXtotal=kuadratXtotal+powerX;
		powerY=pow(y[i],2);
		kuadratYtotal=kuadratXtotal+powerY;
		cout << "Total Sigma XY: " << sigmaXY << endl;
		total = total+sigmaXY;
	}
	totalsigmaXY=totalsigmaX+totalsigmaY;
	cout << "Sigma X: " << totalsigmaX <<	endl;
	cout << "Sigma Y: " << totalsigmaY <<	endl;
	cout << "Sigma X+Y: "<< totalsigmaXY << endl;
	cout << "X kuadrat: " << powerX << endl;
	cout << "Total sigma X*Y: "<< total << endl;
	r= (total-totalsigmaXY)/sqrt(kuadratXtotal)-pow(totalsigmaX,2)*sqrt(kuadratYtotal)-pow(totalsigmaY,2);
	cout << "niali korelasi r: " << r << endl;
	cout << "Nilai koefisien determinasi :" << pow(r,2)*100/100 << endl;
	if (r>0){
		cout << "Hubungan Antara Variabel X dan Y adalah positif, dimana jika nilai X bertambah, maka nilai Y pun bertambah sebaliknya, dan juga sebaliknya" << endl;
	}else if (r<0){
		cout << "Hubungan Antara Variabel X dan Y adalah negatif, dimana jika X bertambah, maka nilai Y oun mengecil, dan juga sebaliknya" << endl;
	}else if (r=0){
		cout << "Tidak ada hubungan antara Variable X dan Y" << endl;
	}
	}
		
		
float sigmaXYs(int _X, int _Y){
	float hasil=0;
	hasil = _X*_Y;
	return hasil;
}
