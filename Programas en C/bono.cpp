#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   ?? venta3;
   ?? sueldo5;
   ?? venta5;
   ?? sueldo4;
   ?? venta4;
   ?? venta2;
   ?? sueldo;
   ?? venta1;
   ?? sueldo1;
   ?? sueldo2;
   ?? sueldo3;

   sueldo =7500;
   raptor_prompt_variable_zzyz ="Ingresa el valor de la Venta1";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> venta1;
   if (venta1>=2000)
   {
      sueldo1 =sueldo*0.05;
      sueldo =sueldo+sueldo1;
   }
   else
   {
      sueldo1 =0;
   }
   raptor_prompt_variable_zzyz ="Ingresa el valor de la Venta2";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> venta2;
   if (venta2>=2000)
   {
      sueldo2 =sueldo*0.05;
      sueldo =sueldo+sueldo2;
   }
   else
   {
      sueldo2 =0;
   }
   raptor_prompt_variable_zzyz ="Ingresa el valor de la Venta3";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> venta3;
   if (venta3>=2000)
   {
      sueldo3 =sueldo*0.05;
      sueldo =sueldo+sueldo3;
   }
   else
   {
      sueldo3 =0;
   }
   raptor_prompt_variable_zzyz ="Ingresa el valor de la Venta4";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> venta4;
   if (venta4>=2000)
   {
      sueldo4 =sueldo*0.05;
      sueldo =sueldo+sueldo4;
   }
   else
   {
      sueldo4 =0;
   }
   raptor_prompt_variable_zzyz ="Ingresa el valor de la Venta5";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> venta5;
   if (venta5>=2000)
   {
      sueldo5 =sueldo*0.05;
      sueldo =sueldo+sueldo5;
   }
   else
   {
      sueldo5 =0;
   }
   sueldo =sueldo+sueldo1+sueldo2+sueldo3+sueldo4+sueldo5;
   cout << "Tu sueldo final es de: $"+sueldo << endl;
   return 0;
}
