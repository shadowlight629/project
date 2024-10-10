//ELECTRICAL BILL
/* Purity Thuo
7/10/24
*/


#include<stdio.h>
int main()
{

int customerID,customerName;
float Charge_per_unit, UnitConsumed,Total_charge, Charges;

printf("enter customerID");
scanf("%d",&customerID);

printf("enter customerName");
scanf("%d",&customerName);

printf("enter UnitConsumed");
scanf("%lf",&UnitConsumed);

if(UnitConsumed < 0){
			printf("Charges = 0");}
	else if(UnitConsumed <= 199)
		Charge_per_unit= UnitConsumed * 1.20;{
		printf("Charge_per_unit is: %2lf\n",Charge_per_unit);}
	else if(UnitConsumed <400){
		Charge_per_unit=UnitConsumed * 1.50;
		printf("Charge_per_unit is: %2lf\n",Charge_per_unit);}
	else if(UnitConsumed <600){
		Charge_per_unit=UnitConsumed * 1.80;
		printf("Charge_per_unit is: %2lf\n",Charge_per_unit);}
	else if(UnitConsumed >600){
		Charge_per_unit=UnitConsumed * 2.00;
		printf("Charge_per_unit is: %2lf\n",Charge_per_unit);}
		
	if(Charge_per_unit >400)
	Charges = Charge_per_unit * 1.15;
	printf("Totalcharge is: %2lf\n",Charges);
	


else if
return 0;
}