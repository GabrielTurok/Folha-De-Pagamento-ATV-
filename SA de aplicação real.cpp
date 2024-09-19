#include <iostream>
#include <cmath>
#include <cstdlib>



using namespace std;

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	cout << "Folha De Pagamento!\n";
	
	double SALBR = 0;
	double desc = 0;
	double desc1 = 0;
		
	cout << "Qual o valor da sua hora? \n";
	double $HORA = 0;
	cin >> $HORA;
	
	cout << "Qual a quantidade de horas trabalhadas no mes? \n";
	double HORAT = 0;
	cin >> HORAT;
	
	SALBR = $HORA * HORAT;
	
	
	if(SALBR >= 900 && SALBR <= 1500){
		desc = (SALBR * 0.05);
		desc1 = 5;
		
	}else if(SALBR >= 1500 && SALBR <= 2500){
		desc = (SALBR * 0.10);
		desc1 = 10;
	}else if(SALBR >= 2500){
		desc = (SALBR * 0.20);
		desc1 = 20;
	}
	
	double INSS = 0;
	INSS = SALBR * 0.10;
	double FGTS = 0;
	FGTS = SALBR * 0.11;
	double descontos = INSS + desc;
	double SAL = SALBR - descontos;
	
	cout << "Salário Bruto: (" << $HORA <<  " * " << HORAT << "): R$ " << SALBR << "\n";
	cout << "(-) IR (" << desc1 <<  "%): R$ " << desc << "\n";	
	cout << "(-) INSS (10%): R$ " << INSS << "\n";	
    cout << "FGTS (11%): R$ " << FGTS << "\n";
    cout << "Total de descontos: R$ " << descontos << "\n";
    cout << "Salário Liquido: R$ " << SAL << "\n";
    
  return 0; 
}
