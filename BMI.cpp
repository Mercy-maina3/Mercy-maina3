/*NAME:MERCY NYAGUTHII
REG NO:BSE-05-0167/2024
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
float weight;
float height;
float BMI;
BMI=weight*height*height;

cout<<"enter your weight"<<endl;
cin>>weight;
cout<<"enter your height"<<endl;
cin>>height;
if(BMI<18.5){
BMI=weight*height*height;
cout<<"underweight"	<<endl;
}

else if(BMI >=18.5&&BMI <=  24.9){
BMI=weight*height*height;
cout<<"normalweight"	<<endl;
}
else if(BMI  >=25&&BMI <=  29.5){
BMI=weight*height*height;
cout<<"overweight"	<<endl;
}
else if(BMI>=30){
BMI=weight*height*height;
cout<<"obesity"	<<endl;
}
cout<<"your BMI is:"<<endl;
return 0;
}