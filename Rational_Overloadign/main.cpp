
#include"..\Rational_Overloadign\Rational.h"
#include <iostream>

using namespace std;

void main()
{

	Rational myrat(3, 4);

	myrat = myrat ^ 2;

	cout << myrat<<endl;

	Rational Test(1, 2);
	Rational Test2(1, 2);
	//Rational Ans(2, 3);

	Test++;
	cout << Test << endl;

	++Test2;
	cout << Test2 << endl;

	system("pause");

}