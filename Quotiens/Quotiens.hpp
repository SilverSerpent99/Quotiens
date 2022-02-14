#pragma once
class Quotiens;

Quotiens operator+(Quotiens a, Quotiens b);
Quotiens operator-(Quotiens a, Quotiens b);
Quotiens operator*(Quotiens a, Quotiens b);
Quotiens operator/(Quotiens a, Quotiens b);

class Quotiens
{
public:
	Quotiens(int n, int d);


	//A terv annyira bare bones, hogy nincsenek benne getterek. viszont akarom �ket haszn�lni tesztel�shez
	//�gyhogy itt a k�dban lesznek
	int get_N();
	int get_D();

	double get_Value();

private:
	int n;
	int d;

};
