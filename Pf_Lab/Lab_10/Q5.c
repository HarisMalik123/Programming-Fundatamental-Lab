#include<stdio.h>
#include<stdlib.h>
struct Emp{
char empname[20];
float empsal;
char empid[10];

};
struct organisation{
char organisation_name[20];
char organisation_number[10];
struct Emp Employee;
};
int main(){
struct organisation org;

printf("Enter  Organization Name\n");
scanf("%s",&org.organisation_name);
printf("Enter Organization Number\n ");
scanf("%s",&org.organisation_number);
printf("Enter Employee Name\n");
scanf("%s",&org.Employee.empname);
printf("Enter Employee id\n");
scanf("%s",&org.Employee.empid);
printf("Enter Employee Salary\n");
scanf("%f",&org.Employee.empsal);
printf("*************************************\n");
printf("Organizaton Name: %s\n",org.organisation_name);
printf("Organizaton Number: %s\n",org.organisation_number);
printf("Employee Name : %s\n",org.Employee.empname);
printf("Employee ID : %s\n",org.Employee.empid);
printf("Employee Salary : %.2f\n",org.Employee.empsal);

}