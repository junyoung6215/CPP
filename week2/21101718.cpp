#include <iostream>
using namespace std;

int main()
{
	int num=0;
	double guess;
	double lastguess;
	double r;
	//����ڷκ��� n�Է� �ޱ� 
cout<<"Enter a positive number: ";
cin>> num;
	//�ʱ� guess ����� 
	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(2);
	guess=num/2.0;
	lastguess=0;
	//�ݺ��� ����
	//�ݺ� ��������(1% �̳� ��Ȯ��)
	while(((lastguess-guess)/guess)>0.01||((guess-lastguess)/guess)>0.01)
	{//r����ϱ� 
	lastguess=guess;
	r=num/guess;
	//���ο� guess ����ϱ� 
	guess=(guess+r)/2;
	
	cout<<"loop"<<endl;
	}
	//��� ����ϱ�
	cout<<"The square root of num is approximately "<<guess<<endl;

	return 0;
}
