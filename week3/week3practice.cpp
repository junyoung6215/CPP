#include <iostream>
using namespace std;

double hatSize(int height, int weight);
double jacketSize(int height, int weight, int age);
double waistSize(int weight, int age);
bool askUser(char answer);

int main()
{
	int height, weight, age;
	char answer;
	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(2);
//사용자로부터 몸무게키 나이 입력받기
do{
	cout<<"Give me your height in inches, weight in pounds, and age in years"<<endl
	<<"and I will give you your  hat zize, jacket size(inches at chest) and your waist size in inches."<<endl;

	cin>> height>>weight>>age;
	//입력받은 값으로 함수 호출 
	hatSize(height, weight);
	jacketSize(height, weight, age);
	waistSize(weight, age);
	//함수 호출 결과 출력
	cout<<"hat size = "<<hatSize(height, weight)<<endl;
	cout<<"jacket size = "<<jacketSize(height, weight, age)<<endl;
	cout<<"waist size = "<<waistSize( weight, age)<<endl;
	cout<<endl;
	cout<<"enter Y or y to repeat. any other character ends."<<endl;
	cin>>answer;
}while(askUser(answer));
return 0;
}

//모자사이즈 계산함수
double hatSize(int height, int weight)
{
	return 2.9* double(weight)/height;
}
//자켓사이즈 계산함수
double jacketSize(int height, int weight, int age)
{
double jacket=double(height)*weight/288;
if(age>=40){(jacket+=0.125*(age-30)/10);}
return jacket;
}
//허리사이즈 계산함수
double waistSize(int weight, int age)
{
double waist=double(weight)/5.7;
if((age-28)/2>0){waist+=0.1*((age-28)/2);}
return waist;
}
//사용자가 계속할지 물어보는 함수
bool askUser(char answer)
{
	return(answer=='Y'||answer=='y');
}