/*------COUT----YAZDIRMA---------------------------------------------1-----------------------------------*/

/* #include <iostream>
#include <string>
using namespace std;
int main()
{
	string kelime = "merhaba";
	cout << kelime;
	return 0;
} */

/*---YAZDIRMA-----------------------------------------2------------------------------------*/

/* #include <iostream>
using namespace std;
int main()
{
	int x = 2;
	cout << x;
	int y = 4;
	cout << y;
	return 0;
} */

/*-----MATH-YAZDIRMA--TOPLAMA----------------------------------------3-----------------------------------------*/

/* #include <iostream>
using namespace std;
int main()
{
	cout << "7+3=" << endl << 7 + 3 << endl;
	return 0;
} */

/*---HESAPLAMA-CONST---------------------------------------------4--------------------------------------*/

/* #include <iostream>
using namespace std;
int main()
{
	cout << "Yari capi giriniz:";
	int yaricap;
	cin >> yaricap;
	const float pi = 3.14;
	cout << "Dairenin cevresi=" << pi * 2 * yaricap << endl; 

} */

/*---YAZDIRMA------------------------------------------------5----------------------------------------*/

/* #include <iostream>
using namespace std;
int main()
{
	int a = 9;
	double b = 5.2;
	const float c = 29.5;
	string str = "C++";
	char ch = '*';
	cout << "a=" << a << "b=" << b << "c=" << c;
	cout << "ch='" << ch << "'str=" << str << endl;
	a = b;
	b = c;
	cout << "a=" << a << "b=" << b << "c=" << c;
	cout << "ch'" << ch << "'str=" << str << endl;
	return 0;
} */

/*-----IF-KOMUTU-------------------------------------------------6--------------------------------------------*/

/* #include <iostream>
using namespace std;
int sayi = 5;
int main() {
	if (sayi < 10)
	{
cout << "Kosul dogrudur.";
cout << "Tebrikler.." << "\n";
}
return 0; } */

/*--IF-ELSE-KOMUTU--------------------------------------------7------------------------------------------------*/

/* #include <iostream>
using namespace std;
int main() {
	int sayi1,sayi2;
	cout << "birinci sayiyi giriniz:";
	cin >> sayi1;
	cout << "ikinci sayiyi giriniz:";
	cin >> sayi2;
	if (sayi1 > sayi2) {
		cout << "birinci sayi daha buyuktur" << endl;
	}
	else {
		cout << "ikinci sayi daha buyuktur." << endl;
	}
	return 0; } */

/*----IF-ELSE--------------------------------------------------8------------------------------------------------*/

/* #include <iostream>
using namespace std;
int main() {
	int sayi;
	cout << "Bir sayi giriniz:";
	cin >> sayi;
	if (sayi < 0)
		cout << "Negatif bir sayi girdiniz:"
		<< sayi << "\n";
	else
		cout << "Pozitif bir sayi girdiniz"
		<< sayi << "\n";
	return 0;
}  */

/*-----BOOL--------------------------------------------9------------------------------------------------------*/

/* #include <iostream>
using namespace std;
int main() {
	bool a = (6 < 3);
	bool b = (5 > 8);
	bool c =(10 <=10 );
	bool d = (12 >= 15);
	bool e = (1 == 1);
	bool f = (0 != 0);

	cout << "a degeri=" << a << endl;
	cout << "b degeri=" << b << endl;
	cout << "c degeri=" << c << endl;
	cout << "d degeri=" << d << endl;
	cout << "e degeri=" << e << endl;
	cout << "f degeri=" << f << endl;
	return 0; } */

/*---?-KULLANIMI---------------------------------------------------10------------------------------------------------------*/

/* #include <iostream>
using namespace std;
int main() {
	int a = 10, b = 5, c = 25,d=15, e, f;
	e = a > b ? a : c;
	f = c < d ? 9 : 13;
	cout << "e degeri=" << e << endl;
	cout << "f degeri=" << f << endl;
	return 0; } */

/*---IF-ELSE-IF------------------------------------------------11--------------------------------------------------------*/

/* #include <iostream>
using namespace std;
int basari;
char harfnot;
int main() {
	cout << "Basari notunu giriniz:";
	cin >> basari;
	if (basari >= 90)
		harfnot = 'A';
	else if (basari >= 80)
		harfnot = 'B';
	else if (basari >= 70)
		harfnot = 'C';
	else if (basari >= 60)
		harfnot = 'D';
	else
		harfnot = 'F';
	cout << "Ogrencinin Harf Notu:" << harfnot << endl; } */

/*-IF-ELSE---------------------------------------------------------12------------------------------------------------------*/

/* #include <iostream>
using namespace std;
int main() {
	int basari;
	cout << "Genel basari notunuzu giriniz:";
	cin >> basari;
	if (basari >= 50) {
		cout << "Tebrikler...Gectiniz."; }
	else if (basari < 50) {
		cout << "Uzgunum..Kaldiniz."; }
	return 0; } */

/*--YAZDIRMA--------------------------------------------------13------------------------------------------------------------ */

/* #include <iostream>
using namespace std;
int main() {
	int yil;
	cout << "Hangi yilda dogdunuz?";
	cin >> yil;
	cout << "Siz" << 2014 - yil << "yasindasiniz.";
	return 0;
} */ 

/*-------SWITCH-KULLANIMI----------------------------------------------14----------------------------------------------------*/

/* #include <iostream>
using namespace std;
int main()
{
	int i = 5, j = 6, k = 8;
	if ((k % i > 2) && (!(k - 2 < j)))
		cout << "Dogru" << endl;
	else cout << "Yanlis" << endl;
	switch (j) {
	case 5: case 7: cout << "Ilk asama" << endl;
		cout << i * j << endl;
		break;
	case 1: case 6: cout << "Ikinci asama" << endl;
		cout << j * k << endl;
		break;
	default: cout << "Ucuncu asama" << endl;
		cout << k * i << endl;

	}
	return 0;

 } */

/*--++ KULLANIMI----------------------------------------15------------------------------------------------------*/

/* #include <iostream>
using namespace std;
int main()
{
	int x = 5;
	cout << x++ * 3;
} */

/*---WHILE-KULLANIMI-----------------------------------------------------------------16--------------------------------------------------*/

/* include <iostream>
using namespace std;
int main()
{
	int sayi;
	cout << "Pozitif bir sayi giriniz:";
	cin >> sayi;
	while (sayi <= 0)
		cin >> sayi;
	cout << "Girdiginiz son sayi:" << sayi << endl;
	return 0;
} */

/*---DO-WHILE-KULLANIMI--------------------------------------------------17-------------------------------------------------------------*/

/* #include <iostream> 
using namespace std;
int main()
{
	int sayi;
	cout << "Pozitif bir sayi giriniz:";
	do
		cin >> sayi;

    while (sayi<=0);
	cout << "Girdiginiz son sayi:" << sayi << endl;
	return 0;
} */

/*--DO-WHILE-IF-KULLANIMI--------------------------------------------------18----------------------------------------------------------*/

/* #include <iostream>
using namespace std;
int main()
{
	int enbuyuk = 0, sayi, i = 0;
	cout << "10 pozitif sayi giriniz:";
	do {
		cin >> sayi;
		if (sayi > enbuyuk)
			enbuyuk = sayi;
		i++;
	} while (i < 10);
		cout<< "Girdiginiz en buyuk sayi:" << enbuyuk << endl;

	return 0;
} */

/*--FOR--KULLANIMI-----------------------------------------------------------19--------------------------------------------------*/

/* #include <iostream>
using namespace std;
int main()
{
	int sinavNot, enYuksek = 0;
	for ( int sayi=1 ; sayi <= 3 ; sayi++)
	{
		cout << "Ogrenci notunu giriniz:";
		cin >> sinavNot;
		if (sinavNot > enYuksek)
			enYuksek = sinavNot;
	}
	cout << "En yuksek not:" << enYuksek << endl;
	return 0;
} */

/*-----IF-ELSE-------------------------------------------20----------------------------------------------*/

/* #include <iostream>
using namespace std;

int main()
{
	int sinif;
	cout << "sinifinizi giriniz: ";
   cin >> sinif;

	if (sinif >= 1 && sinif <= 4) {
		cout << "ilkogretim";
	}
	else if (sinif >= 5 && sinif <= 8) {
		cout << "ortaogretim";
	}
	else if (sinif >= 9 && sinif <= 12) {
		cout << "lise";
	}
	else
		cout << "lise5";
} */

/*---------FAKTORIYEL---------------------------------------------21--------------------------------------------------*/

/* #include <iostream>
using namespace std;
int main()
{
	int sayi, fakt;
	for (int sayac = 1;sayac <= 2;sayac++) {
		cout << "Bir sayi giriniz:";
		cin >> sayi;
		fakt = 1;
		for (int i = 1;i <= sayi;i++)
			fakt *= i;
		cout << sayi << "!=" << fakt << endl;
	}
	return 0;
} */

/*---YAZDIRMA-----------------------------------------------------22-----------------------------------------------------*/

/*  #include <iostream>
using namespace std;
int main()
{
	char harf;
	int sayi;
	cout << "Noktayla biten 2 cumleyi satir satir giriniz." << endl;
	for (int i = 1;i <= 2;i++) {
		sayi = 0;cin >> harf;
		while (harf != '.') {
			if ((harf == 'A') || (harf == 'a'))
				sayi++;
			cin >> harf;
		}
		cout << i << ".cumlede" << sayi << "tane A harfi var." << endl;

	}
} */

/*-------FOR------------------------------------------------------------------23--------------------------------------------------------*/

/* #include <iostream>
using namespace std;

int main()
{
	for (int i = 1;i <= 10;i++)
		cout << i << "\n";
	return 0;

} */

/*------FOR-------------------------------------------------------------------------24-----------------------------------------------------*/

/* #include <iostream>
using namespace std;
int main(){
{
	for (int i = 0; i <= 10; i++) {
		cout << i * i << endl;
	}
	}
} */

/*-------FAKTORIYEL-WHILE---------------------------------------25------------------------------------------------------*/

/*  #include <iostream>
using namespace std;
int main() {
	int i = 1, sayi, faktoriyel = 1;
	cout << "Sayi:";
	cin >> sayi;
	while (i <= sayi)
	{
		faktoriyel *= i;
		i++;
	}
	cout << "Sonuc:" << faktoriyel << "\n";
	return 0;
} */

/*-----DO-WHILE----------------------------------------------26--------------------------------------------------*/

/* #include <iostream>
using namespace std;
int main()
{
	int sayi, i = 0;
	cout << "Bir sayi giriniz:";
	cin >> sayi;
	do {
		i++;
		cout << i;
	} while (i < sayi);
		cout << endl;
}  */
/*--------FOR-----------------------------------------------------------------27--------------------------------------------------------------*/

/* #include <iostream>
using namespace std;
int main()
{
	for (int i = 1;i < 100;i++)
	{
		cout << i << "\n";
		if (i ==5)
			break;
	}
} */

/*---FOR-IF--------------------------------------------------------------------------28--------------------------------------------------------*/

/* #include <iostream>
using namespace std;
int main()
{
	for (int i = 1;i < 15;i++)
	{
		if (i > 8 && i < 12)
			continue;
		cout << i << "\n";
	}
} */

/*-------WHILE----------------------------------------------------------------------29------------------------------------------------------*/

/* #include <iostream>
using namespace std;
int main()
{
	int i = 5, j;
	while (i >= 1) {
		j = 1;
		while (j <= 5) {
			cout << "*";
			j++;
		}
		cout << endl;
		i--;
	}
} */

/*-------IF-----------------------------------------------------------------------30----------------------------------------------------*/

/* #include <iostream>
using namespace std;
int main() {
	int sinavNot, gecen = 0, kalan = 0;

	cout << "Bir not giriniz";
	cin >> sinavNot;

	if (sinavNot >= 50) {
		cout << "Tebrikler,gectiniz.";
		gecen++;
	}
	else {
		cout << "Kaldiniz.";
		kalan++;
	}
	return 0;

} */

/*--------SWITCH-------------------------------------------------------31------------------------------------------------------------*/

/* #include	<iostream>
using namespace std;

int main()
{
	int gunNumarasi;

	cout << "Lutfen Gun Numarasini giriniz:";
	cin >> gunNumarasi;

	switch (gunNumarasi)
	{
	case 1:
		cout << "Gun Pazartesi";
		break;

	case 2:
		cout << "Gun Sali";
		break;

	case 3: 
		cout << "Gun Carsamba";
		break;

	case 4:
		cout << "Gun Persembe";
		break;

	case 5:
		cout << "Gun Cuma";
		break;

	case 6:
		cout << "Gun Cumartesi";
		break;

	case 7:
		cout << "Gun Pazar";
		break;

	default:
		cout << "Gecersiz Gun";
	}
	
} */ 

/*------CMATH-KUTUPHANESI-------------------------------------------32-----------------------------------------------*/


/* #include <iostream>
#include <cmath>
using namespace std;
int main()
{
	cout << "3 uzeri 5 = " << pow(3.0, 5.0) << endl;
	cout << "16'nin karekoku = " << sqrt(16.0) << endl;
	cout << "-8'in mutlak degeri = " << abs(-8) << endl;
	return 0;
} */

/*-----FAKTORIYEL-----------------------------------------------------------33----------------------------------------------------*/

/* #include <iostream>
using namespace std;

int fakt(int x)
{
	int f = 1;
	for (int i = 1 ; i<=x;i++)
		f *= i;
	return f;
}

int main()
{
	int n, sonuc;
	cout << "Bir sayi giriniz:";
	cin >> n;
	sonuc = (fakt(n) / 4) * (6 / fakt(n - 1)) + (fakt(n - 2) / 2) * (7 / fakt(n - 3));
	cout << "Sonuc = " << sonuc << endl;
	return 0;
} */

/*---FONKSIYON-FAKTORIYEL--------------------------------------34---------------------------------------------------------*/

/* #include <iostream>
using namespace std;
int fakt(int);
int main()
{
	int n, sonuc;
	cout << "Bir sayi giriniz :";
	cin >> n;
	sonuc = (fakt(n) / 4) * (6 / fakt(n - 1)) + (fakt(n - 2) / 2) * (7/ fakt(n - 3));
	cout << "sonuc =" << sonuc << endl;
	return 0;


}
int fakt(int x)
{
	int f = 1;
	for (int i = 1;i <= x;i++)
		f *= i;
	return f;
} */

/*-FONKSIYON-VOID--------------------------------------------------------35------------------------------------------------*/

/* #include <iostream>
using namespace std;
void mesaj(void);
int main()
{
	mesaj();
	return 0;
}
void mesaj(void)
{
	cout << "Kullaniciya mesaj ";
	cout << "ileten bir fonksiyon" << endl;
} */

/*-------VOID-------------------------------------------------------------------36----------------------------------------------*/

/* #include <iostream>
using namespace std;
void buyuk(float, float);
int main()
{
	float x, y;
	cout << "Iki deger giriniz:";
	cin >> x >> y;
	buyuk(x, y);
	return 0;
}
void buyuk(float a, float b)
{
	cout << "Sayilerin buyugu:";
	if (a > b)cout << a << endl;
	else cout << b << endl;
} */

/*-FONKSIYON-PROTOTIPI-------------------------------------------------------37--------------------------------------------*/

/* #include<iostream>
using namespace std;
double alan(void);
int main()
{
	double sonuc;
	sonuc = alan();
	cout << "Alan =" << sonuc << endl;
	return 0;
} 
double alan(void)
{
	double en, boy;
	cout << "Dikdortgenin en ve boyunu giriniz:";
	cin >> en >> boy;
	return en * boy;
} */

/*--VOID-PROTOTIP--------------------------------------------------------------------------38------------------------------------*/

/* #include <iostream>
using namespace std;
void fon(int x = 1, int y = 20)
{
	cout<< x << "" << y <<endl;
}
  int main()
{
	fon(5, 10);
	fon(5);
	fon();
	return 0;
} */

/*--.APPEND() KULLANIMI---------------------------------------------------------------39----------------------------------*/

/* #include <iostream>
#include <string>
using namespace std;

int main() {
	string firstName = "John ";
	string lastName = "Doe";
	string fullName = firstName.append(lastName);
	cout << fullName;
	return 0;
} */

/*---.size()-.lenght()-KULLANIMI----------------------------------40----------------------------------------------------------*/

/* #include <iostream>
#include <string>
using namespace std;

int main() {
	string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cout << "The length of the txt string is: " << txt.size();
	return 0;
} */

/*----DEGISKEN-TUTMA-----------------------------------41----------------------------------------------------------*/

/* #include <iostream>
#include <string>
using namespace std;

int main() {
	string myString = "Hello";
	cout << myString[1];
	return 0;
} */

/*--DEGISKEN-ICI-DEGISTIRME-----------------------------42--------------------------------------------------------------*/

/* #include <iostream>
#include <string>
using namespace std;

int main() {
	string myString = "Hello";
	myString[0] = 'J';
	cout << myString;
	return 0;
} */

/*---getline-KULLANIMI--------------------------43-----------------------------------------------------------------*/


/* #include <iostream>
#include <string>
using namespace std;

int main() {
	string fullName;
	cout << "Type your full name: ";
	getline(cin, fullName);
	cout << "Your name is: " << fullName;
	return 0;
} */

/*---STRING-ERISIMI----------------------44---------------------------------------------------------------------*/

/* #include <iostream>
#include <string>
using namespace std;

int main() {
	string cars[4] = { "Volvo", "BMW", "Ford", "Mazda" };
	cout << cars[0];
	return 0;
} */

/*----REFERANS-KULLANIMI---------------45--------------------------------------------------------------------*/

/* #include <iostream>
#include <string>
using namespace std;

int main() {
	string food = "Pizza";
	string& meal = food;

	cout << food << "\n";
	cout << meal << "\n";
	return 0;
} */

/*--PARAMETRE-KULLANIMI------------46-------------------------------------------------------------*/

/* #include <iostream>
#include <string>
using namespace std;

void myFunction(string fname) {
	cout << fname << " Refsnes\n";
}

int main() {
	myFunction("Liam");
	myFunction("Jenny");
	myFunction("Anja");
	return 0;
} */

/*--COKLU-PARAMETRE-------------------------------47-------------------------------------------------------*/

/* #include <iostream>
#include <string>
using namespace std;

void myFunction(string fname, int age) {
	cout << fname << " Refsnes. " << age << " years old. \n";
}

int main() {
	myFunction("Liam", 3);
	myFunction("Jenny", 14);
	myFunction("Anja", 30);
	return 0;
} */

/*----CLASS-KULLANIMI-------------------48----------------------------------------------------------------*/

/* #include <iostream>
#include <string>
using namespace std;

class MyClass {       
public:            
	int myNum;       
	string myString; 
};
int main() {
	MyClass myObj;  	
	myObj.myNum = 15;
	myObj.myString = "Some text";	
	cout << myObj.myNum << "\n";
	cout << myObj.myString;
	return 0;
} */

/*--CLASS-KULLANIMI-----------------------49-----------------------------------------------------------------*/

/* #include <iostream>
#include <string>
using namespace std;

class Car {
public:
	string brand;
	string model;
	int year;
};

int main() {
	Car carObj1;
	carObj1.brand = "BMW";
	carObj1.model = "X5";
	carObj1.year = 1999;

	Car carObj2;
	carObj2.brand = "Ford";
	carObj2.model = "Mustang";
	carObj2.year = 1969;

	cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
	cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
	return 0;
} */

/*-----------------50-----------------------------------------------------------------------------------------------------*/

/* #include <iostream>

using namespace std;

int fonksiyon1()
{
	cout << "Parametresiz Fonksiyon" << endl;
	return 0;
}
void fonksiyon2(int x)
{
	cout << "Tek Parametreli Fonksiyon" << endl;
}
float fonksiyon3(int y, int z)
{

	cout << "Iký Parametreli Fonksiyon" << endl;
	return 0;
}
 
int main() {
	fonksiyon1();
	fonksiyon2(4);
	fonksiyon3(2,9);
	

	return 0;


 }   */

/*--------51-----------------------------------------------------------------------------------------------------------------*/

/* #include <iostream>
using namespace std;

int hesapla(int a)
{
	return a * a;
}

double hesapla(double x)
{
	return x * x;
}

int main()
{
	cout << "1. fonksiyonu cagir = " << hesapla(17) << endl;
	cout << "2. fonksiyonu cagir = " << hesapla(6.2) << endl;
	return 0;
} */

/*----------52------------------------------------------------------------------------------------------------------------*/

/* #include <iostream>
using namespace std;

int a = 6, b = 10, c = 12;
void fun(int a, int& b, int c = 8)
{
	b *= 2;
	a += 3;
	c += 5;
	cout << a << b << c << endl;
}

void fun(int& a)
{
	a *= 2;
	c += ::a;
	cout << a << b << c << endl;

}

int main()
{
	fun(b);
	fun(b, a);
	fun(b, c, a);
	return 0;
} */






