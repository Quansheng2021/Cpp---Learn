#include <iostream>

/*�º�������
��������γ�������ͨ����֮�⣬�������Ǻ���ָ�루C �����о;�����ô�ã�������û��ʲô�ֶ��ܴ��溯��ָ���أ������С�

����һ���࣬�����涨����ĳ��������������Ķ�����Ϊ��������Σ���ô�ں����о��ܵ���������еķ���

���и��򵥵ķ����𣿴𰸻����С�
����һ���࣬���������غ��������������������Ķ�����Ϊ��������Σ���ô�ں�����ͬ���ܵ������ط���������ķ���
����˵���º������Ƿ���ĺ�������������һ�����������ϵĺ���������һ�����е�������������أ��������к����Ĺ��ܡ�*/

class Compare {
private:
	int m_Number;
public:

	//��ʵ���캯������ð�ź���ĳ�ʼ�����൱��������ͨ��ֵ���������ַ�ʽ��
	// ���Դ�ð�ŵĿ��Կ��������Ÿ�ֵ����ð�ŵ����Ǹ�ֵ�������ֵ��
	//�������ַ�ʽ����������ڣ����Ÿ�ֵ���ڸ����������ڴ�ռ��ͬʱ�������г�ʼ����
	//����ֵ�������ֵ�����ȷ����ڴ�ռ䣬Ȼ���ٳ�ʼ����˵���׾��ǳ�ʼ����ʱ����ͬ��
	
	Compare(int num) : m_Number(num) {}

	int b;

	bool operator()(int other)
	{
		b = other;
		return m_Number > other;
	}

	int PriVal() {
		return m_Number;
	}

	int otherVal() {
		return b;
	}

};


void swapFunc(int a, int b);

int main()
{
	Compare cmp(10);
	std::cout <<cmp.PriVal()<< std::endl;
	std::cout << cmp.otherVal() << std::endl;

	std::cout << cmp(11) << std::endl;
	std::cout << cmp.PriVal() << std::endl;
	std::cout << cmp.otherVal() << std::endl;
	std::cout << cmp(9) << std::endl;
	std::cout << cmp.PriVal() << std::endl;
	std::cout << cmp.otherVal() << std::endl;


	std::cout << "--------------" << std::endl;
	int swapAA = 1;
	int swapBB = 9;
	swapFunc(swapAA, swapBB);
	std::cout << "swap����������" << std::endl;
	std::cout << swapAA << swapBB << std::endl;

	std::cin.get();
	return 0;


}