// A driver program which can implement the Linked list standard functions 

#include<iostream>
#include"Node.h"
#include"List.h"
using namespace std;
int main() {

	List l;
	l.insert(131);
	l.insert(111);
	l.insert(0);
	l.insert(1);
	l.insert(8);
	l.insert(2);

	cout <<endl;
	l.print();
	//	/*l.sort();
	//	l.print();*/ 
	//
	//	cout << "\n>>>>>>>>>>>>>>>>>>>Calling Search function\n";
	//	cout << "\nEnter the value to search ";
	//	int opt1;
	//	cin >> opt1;
	//	int result = l.search(opt1);
	//	if (result == -1)
	//		cout << "Searched value has not been found\n";
	//	else
	//		cout << "Data has been fouond at Node " << result + 1<<endl;
	//
	//	cout << "\n>>>>>>>>>>>>>>>>>>>Calling Delete function\n";
	//	cout << "\nEnter the value to delete \n";
	//	int del;
	//	cin >> del;
	//
	//	if (l.delete_list(del) == true)
	//	{
	//		cout << "Node has been deleted\n";
	//		cout << "\nList after deleted\n";
	//		l.print();
	//	}
	//	
	//	else
	//		cout << "Node has not been deleted\n ";
	//	
	//
	//	cout << "\n>>>>>>>>>>>>>>>>>>>Calling Insert At function\n";
	//	if(l.insert_at(65, 7))
	//		cout<<"Node has been inserted\n";
	//	else
	//		cout << "Node has Not been inserted\n";
	//	l.print();
	//
	cout << "\n\nProgram has been ended\n";
	system("pause");
}