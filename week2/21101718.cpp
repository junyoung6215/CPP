#include <iostream>
using namespace std;

int main()
{
	int num=0;
	double guess;
	double lastguess;
	double r;
	//사용자로부터 n입력 받기 
cout<<"Enter a positive number: ";
cin>> num;
	//초기 guess 만들기 
	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(2);
	guess=num/2.0;
	lastguess=0;
	//반복문 시작
	//반복 종료조건(1% 이내 정확도)
	while(((lastguess-guess)/guess)>0.01||((guess-lastguess)/guess)>0.01)
	{//r계산하기 
	lastguess=guess;
	r=num/guess;
	//새로운 guess 계산하기 
	guess=(guess+r)/2;
	
	cout<<"loop"<<endl;
	}
	//결과 출력하기
	cout<<"The square root of num is approximately "<<guess<<endl;

	return 0;
}
