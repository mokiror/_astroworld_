#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <string.h>

//стандартные коллекции языка c++

	//линейный массив (std::array & std::vector) //не знаешь что использовать - используй это
	// 
	// если не подходит, то всё что ниже
	// 
	//связный список -> std::list, std::forward_list, 
	//деревья -> std::set, std::multi_set
	//бинарные -> std::map, std::multi_map
	//  красно-черные -> std::hashtable
	// графы 
	// деревья отрезков ~> std::deque 
	// 
	// **очереди -> std::stack и std::queue (если рил очередь нужна)
	//

class Test {
public:
	Test() = default;
	Test(int a_val, double b_val) :a(a_val), b(b_val) {}; //этого достаточно для коллекций

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
		//linArr.push_back(i); //отправлем данные в коллекцию

		//как и пушбэк но требует указния места
		linArr.insert(linArr.begin(), i);
	}
	for (size_t i = start; i < finish; i++)
	{
		//linkList.push_back(i); //отправлем данные в коллекцию
		linkList.insert(linkList.begin(), i);
	}
	for (size_t i = start; i < finish; i++)
	{
		//BustedList.push_back(i); //отправлем данные в коллекцию
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


	//очистка памяти
	while (linArr.size()) {
		//linArr.pop_back(); фу 
		linArr.erase(linArr.begin());
	}
	while (BustedList.size()) {
		BustedList.erase(BustedList.begin());
	}



	return 0;
}