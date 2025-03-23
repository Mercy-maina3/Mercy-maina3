/*NAME:MERCY NYAGUTHII
REG NO:BSE-05-0167/2024
*/
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double salary,bonus;
	int yearsofservice;
	//prompt user to input
	cout<<"enter yor salary:"<<endl;
	cin>>salary;
	cout<<"enter your years of service:"<<endl;
	cin>>yearsofservice;
	if(yearsofservice<6){
		bonus=0.08*salary;
	}
	else if(yearsofservice>=6<=10){
		bonus=0.1*salary;
	}
	else
	{
bonus=0.12*salary;
	}
	return 0;
}