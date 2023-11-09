#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <string.h>

//����������� ��������� ����� c++

	//�������� ������ (std::array & std::vector) //�� ������ ��� ������������ - ��������� ���
	// 
	// ���� �� ��������, �� �� ��� ����
	// 
	//������� ������ -> std::list, std::forward_list, 
	//������� -> std::set, std::multi_set
	//�������� -> std::map, std::multi_map
	//  ������-������ -> std::hashtable
	// ����� 
	// ������� �������� ~> std::deque 
	// 
	// **������� -> std::stack � std::queue (���� ��� ������� �����)
	//

class Test {
public:
	Test() = default;
	Test(int a_val, double b_val) :a(a_val), b(b_val) {}; //����� ���������� ��� ���������

	int a;
	double b;
};



int main() {


	setlocale(LC_ALL, "ru");
	srand(time(NULL));


	int start{ 100 };
	int finish{ 1999999 };

	std::vector<int> linArr;
	std::list<int> linkList;
	std::deque<int> BustedList;


	for (size_t i = start; i < finish; i++)
	{
		//linArr.push_back(i); //��������� ������ � ���������

		//��� � ������ �� ������� ������� �����
		linArr.insert(linArr.begin(), i);
	}
	for (size_t i = start; i < finish; i++)
	{
		//linkList.push_back(i); //��������� ������ � ���������
		linkList.insert(linkList.begin(), i);
	}
	for (size_t i = start; i < finish; i++)
	{
		//BustedList.push_back(i); //��������� ������ � ���������
		BustedList.insert(BustedList.begin(), i);
	}


	for (size_t i = 0; i < linArr.size(); i++)
	{
		linArr.at(i) -= 1;
	}
	for (size_t i = 0; i < BustedList.size(); i++)
	{
		BustedList.at(i) -= 1;
	}


	//������� ������
	while (linArr.size()) {
		//linArr.pop_back(); �� 
		linArr.erase(linArr.begin());
	}
	while (BustedList.size()) {
		BustedList.erase(BustedList.begin());
	}



	return 0;
}