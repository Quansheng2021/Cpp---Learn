#include <iostream>
using namespace std;

class IF_Consume
{
public:
	virtual void consume() = 0;
};

class little_Ming :public IF_Consume {
public:
	virtual void consume() override {
		cout << "С��������" << endl;
	}
};

class Mam
{
public:
	void GiveAllowance(IF_Consume* MoneyTar) {
		cout << "�����Ǯ��" << endl;
		MoneyTar->consume();
	}
};


void main() {
	Mam InsMam1;
	little_Ming* InsMing1=new little_Ming();
	InsMam1.GiveAllowance(InsMing1);
};


