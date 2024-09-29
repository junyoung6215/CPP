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
//����ڷκ��� ������Ű ���� �Է¹ޱ�
do{
	cout<<"Give me your height in inches, weight in pounds, and age in years"<<endl
	<<"and I will give you your  hat zize, jacket size(inches at chest) and your waist size in inches."<<endl;

	cin>> height>>weight>>age;
	//�Է¹��� ������ �Լ� ȣ�� 
	hatSize(height, weight);
	jacketSize(height, weight, age);
	waistSize(weight, age);
	//�Լ� ȣ�� ��� ���
	cout<<"hat size = "<<hatSize(height, weight)<<endl;
	cout<<"jacket size = "<<jacketSize(height, weight, age)<<endl;
	cout<<"waist size = "<<waistSize( weight, age)<<endl;
	cout<<endl;
	cout<<"enter Y or y to repeat. any other character ends."<<endl;
	cin>>answer;
}while(askUser(answer));
return 0;
}

//���ڻ����� ����Լ�
double hatSize(int height, int weight)
{
	return 2.9* double(weight)/height;
}
//���ϻ����� ����Լ�
double jacketSize(int height, int weight, int age)
{
double jacket=double(height)*weight/288;
if(age>=40){(jacket+=0.125*(age-30)/10);}
return jacket;
}
//�㸮������ ����Լ�
double waistSize(int weight, int age)
{
double waist=double(weight)/5.7;
if((age-28)/2>0){waist+=0.1*((age-28)/2);}
return waist;
}
//����ڰ� ������� ����� �Լ�
bool askUser(char answer)
{
	return(answer=='Y'||answer=='y');
}