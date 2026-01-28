#include<stdio.h>
int main()
{
  float basicpay,hra,ta,GrossSalary, ProffesionalTax, NetSalary;

  printf("Enter Basic Pay:");
  scanf("%f", &basicpay);

  hra=0.10*basicpay;
  ta=0.05*basicpay;

  GrossSalary = basicpay+hra+ta;
  ProffesionalTax = 0.02*GrossSalary;
  NetSalary = GrossSalary-ProffesionalTax;

  printf("Basic Pay = %f", basicpay);
  printf("HRA = %f",hra);
  printf("TA = %f",ta);
  printf("Gross Salary = %f",GrossSalary);
  printf("Proffesional Tax = %f",ProffesionalTax);
  printf("Net Salary = %f",NetSalary);

}
