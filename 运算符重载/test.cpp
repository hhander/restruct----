#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>


//class Building
//{
//	friend class GoodGay;
//public:
//	string sittingroom;
//
//	Building();
//private:
//	string bedroom;
//
//
//};
//
//class GoodGay
//{
//public:
//	void visit();
//	GoodGay();
//
//
//public:
//	Building* building;
//
//
//};
//
//Building::Building()
//{
//	sittingroom = "����";
//	bedroom = "����";
//}
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
//
//void GoodGay::visit()
//{
//	cout << building->sittingroom<<endl;
//	cout << building->bedroom;
//}
//
//
//void test()
//{
//	GoodGay gg;
//	gg.visit();
//}
//
//
//int main()
//{
//	test();
//	return 0;
//}

//class Person
//{
//	friend void look(Person& p);
//	friend ostream& operator<<(ostream& out, Person& p);
//private:
//	int m_A;
//	int m_B;
//public:
//	Person()
//	{
//		m_A = 10;
//		m_B = 20;
//	}
//	Person& Add(Person& p)
//	{
//		Person tmp;
//		tmp.m_A = this->m_A + p.m_A;
//		tmp.m_B = this->m_B + p.m_B;
//		return tmp;
//	}
//
//
//
//	//Person operator+ (Person& p)
//	//{
//	//	Person tmp;
//	//	tmp.m_A = this->m_A + p.m_A;
//	//	tmp.m_B = this->m_B + p.m_B;
//	//	return tmp;
//	//}
//	//+----
//};
//
////Person operator+ (Person& p1, int p2)
////{
////	Person tmp;
////	tmp.m_A = p1.m_A + p2;
////	tmp.m_B = p1.m_B + p2;
////	return tmp;
////}
//
//ostream& operator<<(ostream& out, Person& p)
//{
//	out << "m_a = " << p.m_A << " m_b= " << p.m_B;
//	return out;
//}
//
//void look(Person& p)
//{
//	cout << p.m_A << p.m_B;
//}
//
//int main()
//{
//	//Person p1;
//	//Person p2;
//	//Person p3 = p1 + p2;
//	///*Person p3 = operator+(p1, p2);*/
//	//cout << p3.m_A << p3.m_B;
//	//Person p4 = p1 + 100;
//	//cout << p4.m_A << p4.m_B;
//	//Person p4;
//	//cout << p4 <<endl<<"sss";
//	Person p1, p2;
//	Person p3 = p1.Add(p2);
//	/*cout << p3;*/
//	/*look(p3);*/
//
//

//int main()
//{
//
//	int a = 0;
//	cout << ++(++a);
//
//	cout << a;
//}
//+-*/�ķ�������

//class Person
//{
//	friend void getinfo(Person& p);
//public:
//	Person()
//	{
//
//	}
//	Person(char* name, int age)//���ι���
//	{
//		this->name = new char[sizeof(name)];
//		this->name = name;
//		this->age = age;
//	}
//	/*~Person()
//	{
//		delete[]this->name;
//		this->name = NULL;
//	}*/
//
//private:
//	char* name;//���������������
//	int age;
//
//public:
//	Person operator+ (Person& p)
//	{
//		Person tmp;
//		tmp.name = strcat(this->name, p.name);
//		tmp.age = this->age + p.age;
//		return tmp;
//
//	}
//};
//void getinfo(Person& p)
//{
//	cout << p.name<<endl<<p.age;
//}
//
//int main()
//{
//	char n1[30] = "zhangsan";
//	char n2[30] = "lisi";
//	Person p1(n1, 20);
//	Person p2(n2, 30);
//	/*getname(p1);*/
//	Person p3 = p1 + p2;
//	getinfo(p3);
//	return 0;
//}

//#include<string>
//#include<string.h>
//class Person
//{
//	friend void getinfo(Person p);
//public:
//	Person()
//	{
//		age = 10;
//	}
//	Person(string name, int age)
//	{
//		this->age = age;
//		this->name = name;
//	}
//	Person operator+ (Person& p)
//	{
//		Person tmp;
//		tmp.name = this->name + p.name;
//		tmp.age = this->age + p.age;
//		return tmp;
//	}
//
//private:
//	int age;
//	string name;
//};
//
//void getinfo(Person p)
//{
//	cout << p.name << p.age;
//}
//
//
//int main()
//{
//
//	Person p1("zhangsan", 20);
//	Person p2("lisi", 30);
//	Person p3 = p1 + p2;
//	/*getinfo(p3);*/
//	
//	string a = "aaa";
//	string b = "bbb";
//	string c(b);
//	/*cout << c;*/
//	b = b + a;
//	cout << b;
//	string st(3, 'd');
//	cout << st;
//	cout << st.at(2);
//	cout<<st.size();
//




//class Person
//{
//	friend void test3();
//	friend ostream& operator<< (ostream& cout, Person& p);
//	/*friend void test1();*/
//private:
//	int age;
//	string name;
//public:
//	Person()
//	{
//
//	}
//	Person(string name, int age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//public:
//	Person operator+ (Person& p)
//	{
//		Person tmp;
//		tmp.age = this->age + p.age;
//		tmp.name = this->name + p.name;
//		return tmp;
//	}
//};
//
//ostream& operator<< (ostream& cout,Person& p)//cout<<p1;//����ostream& �Ա�����ʽ��Ӧ��
//{
//	cout << p.name << " " << p.age;
//	return cout;
//}
//
//
//void test2()//<<������
//{
//	Person p1("zhangsan", 20);
//	cout << p1 <<endl;
//}
//
//
//
////void test1()//+ - * / �����أ�
////{
////	Person p1("zhangsan", 10);
////	Person p2("lisi", 20);
////	Person p3 = p1 + p2;
////	Person p4 = p1.operator+(p2);
////	cout << p3.name << " " << p3.age;
////	
////
////}
//
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger m);
//	friend void test3();
//public:
//	MyInteger()
//	{
//		m_num = 0;
//	}
//public://<<������
//	//ostream& operator<<(ostream& cout)
//	//{
//	//	cout << this->m_num;
//	//	return cout;
//	//}
//	//ǰ��++����
//
//	MyInteger& operator++()
//	{
//		m_num++;
//		return *this;
//	}
//	//����++����
//
//	MyInteger operator++(int)
//	{
//		MyInteger tmp = *this;
//		m_num++;
//		return tmp;
//	}
//
//
//
//private:
//	int m_num;
//};
//
//ostream& operator<<(ostream& cout, MyInteger m)
//{
//	cout << m.m_num;
//	return cout;
//}
//
//
//void test3()
//{
//	MyInteger myint;
//	/*++(++myint);*/
//	/*myint << cout;*/
//	/*++(++myint);*/
//	/*myint++;*/
//	myint++;
//	myint++;
//	cout << (myint)++;
//	cout << myint;
//
//}
//
//
//
//int main()
//{
//	//test1();//�Ӽ��˳������أ�
//	/*test2();*/ //<<�����������
//	test3();//++ -- �����������
//
//	return 0;
//}


//string�������÷�

int main()
{
	string s1 = "abbbcdefbbcaabbc";
	string s2 = "rrrrr";
	//cout << s1.size()<<" "<<s2.size()<<endl;//������
	//string s3 = s1 + s2;
	//cout << s3<<endl;//׷�ӳ���
	//s2 = s2 + s1;//���Լ�׷�ӳ���
	//cout << s2 << endl;
	//s1.insert(2, s2);//��posΪ2��λ�ò���s2
	/*s1.insert(s1.begin()+1, s2.begin() + 1, s2.end());*///��s1��ʼ�ĵط�����s2��ʼ���������ַ�

	//s1.erase(2);
	//s2.erase(1);//��ȥpos�������е��ַ�

	/*s1.erase(s1.begin() + 2, s1.begin() + 4);*/ //����[2,4)֮����ַ�

	/*s1.erase(s1.begin() + 2);*///ɾ���ڶ�λ�õ��ַ�

	/*string s3 = s1.substr(2, 4);*/

	/*int pos;
	for (pos = 0;; pos++)
	{
		pos = s1.find("bbc", pos);
		if (pos == -1)
		{
			break;
		}
		cout << pos << endl;
	}*/


	int pos;
	pos = s1.find("bbc",3);
	cout << pos << endl;

}