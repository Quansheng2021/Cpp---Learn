#include <iostream>
using namespace std;

template <typename T ,int N>  

//����template �� class����ģ������.
//C++��һ������ǣ�����ʹ��typename����֮�⣬template�ڵ��κα�ʶ���Ŷ�����Ϊһ��ֵ������һ�����(����)��

//typename����������½�ֹʹ�ã�
//1,ģ�嶨��֮�⣬��typenameֻ������ģ��Ķ�����
//2,���޶����ͣ�����int��vector<int>֮��
//3,�����б��У�����template <class t> class c1 : t::innertype������t::innertypeǰ���typename
//4,���캯���ĳ�ʼ���б���
//----------------------------------------------------
//class Mydata {
//    static int value;
//    static int function();
//    typedef string str;
//};

//template <class T>
//void function()
//{
//    T::iterator* iter;  //�����������.����һ:T::iterator *iter;ʵ�ֳ˷���iterator����T��һ����Ա�������������һ��ָ�룬ָ��ָ�������ΪT::iterator��
//    .....
//}
//
//template <class T>
//class myData()
//{
//    typename T::iterator* iter;//����һ��ָ��,���ﲻ��ʹ��class
//    typedef typename iterator_traits<_Iter>::value_type  value _type;//����һ������
//    .....
//};
//----------------------------------------------------


void main() {
    //template <typename T ,int N>  
    //Error:templateֻ����ȫ�֣������ռ������������
    //����template��ʵ�֣���Ҫtemplate�е����з��Ŷ��ܹ����ⲿ���ӡ�
}