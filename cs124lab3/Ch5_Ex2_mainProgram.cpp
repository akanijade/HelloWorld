//Programming Exercise 2: Test Program

#include <iostream>
#include "unorderedLinkedList.h"

using namespace std;

int main()
{
	unorderedLinkedList<int> list;
	int num;

	cout << "Enter numbers ending with -999" << endl;
	cin >> num;

	while (num != -999)
	{
		list.insertLast(num);
		cin >> num;
	}

	cout << endl;

	cout << "List: ";
	list.print();
	cout << endl;
	cout << "Length of the list: " << list.length() << endl;

	list.deleteAll(2);
	list.print();
	std::cout << std::endl;
	list.deleteSmallest();
	list.print();
	std::cout << std::endl;
	

	// TBA test deleteSmallest and deleteAll

	return 0;
}



