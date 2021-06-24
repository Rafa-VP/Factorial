#include <iostream>
using namespace std;
main (){
	
	/* Se desea calcular el factorial de un número.
		El factorial de 5 es 5 x 4 x 3 x 2 x 1
		El factorial de 6 es 6 x 5 x 4 x 3 x 2 x 1
		El factorial de 4 es 1 x 4 x 3 x 4 */
	
	char r;
	
	
	do{
		
		int x, num, fac=1;
	
	cout << "Ingrese un numero para realizar su factorial: ";
	cin >> num;
	
	for (x=1;x<=num;x++){
	
		fac = x*fac ;
		
	}
	
	cout << "El factorial de " << num << " es " << fac << endl;
	
	
	cout << endl;
	cout << endl;
	
	cout << "Desea repetir el proceso? s/n" << endl;
	cin >> r;
	
	cout << endl;
	cout << endl;
	
	
	
} 
	while (r=='s');
} 
