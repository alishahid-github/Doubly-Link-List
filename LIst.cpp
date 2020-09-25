//.cpp file to implement the Liked List class

#include<iostream>
#include"List.h"
using namespace std;

List::List()
{
	head = NULL;
}

Node* List::get_head() 
{
	return head; 
}
void  List::set_head(Node* h)
{ 
	head = h; 
}

void List::print() {

	Node* temp = head;		//traverse the head to nodes...
	while (temp != NULL) {
		cout << "The  List value= " << temp->get_data() << endl;
		temp = temp->get_next();
	}

}

bool List::insert(int d)
{
	Node* new_node = new Node(d);

	Node* temp = head;
	if (temp == NULL)
	{
		head = new_node;
		new_node = NULL;
		delete new_node;
		node_count++;
		return true;
	}
	else
	{
		while (temp->get_next() != NULL)
		{
			temp = temp->get_next();
		}
		new_node->set_prev(temp);
		temp->set_next(new_node);
		new_node = NULL;
		delete new_node;
		node_count++;
		return true;

	}
}

bool List::insert_at(int d, int pos)
{
	if (head == NULL)
		return false;
	else
	{
		if (!(pos <= node_count))
		{
			if (pos - node_count == 1)
			{
				
				Node* new_node = new Node(d);
				Node* temp = head;
				while (temp->get_next() != NULL)
				{
					temp = temp->get_next();
				}
				new_node->set_next(temp);
				temp->get_prev()->set_next(new_node);
				new_node->set_prev(temp->get_prev());
				node_count++;
				return true;
			}
			return false;
		}
			
		else
		{
			Node* temp = head;
			Node* new_node = new Node(d);
			for (int i=1; i<pos ; i++)
			{
				if (temp->get_next() == NULL)
					return false;
				else
					temp = temp->get_next();
			}

			if (temp->get_prev() != NULL)
			{
				new_node->set_next(temp);
				temp->get_prev()->set_next(new_node);
				new_node->set_prev(temp->get_prev());
			}
			else
			{
				head = new_node;
				head->set_next(temp);
			}
			new_node = NULL;
			delete new_node;
			node_count++;
			return true;
		}
	}
	
}

int List::search(int d) {

	Node* temp = head;
	int i = 0;
	if (temp == NULL)
		return -1;
	else
	{
		if (head->get_data() == d)
			return i;
	}
	while (temp->get_data() != d)
	{
		if (temp->get_next() == NULL)
			return -1;
		else
		{
			i++;
			temp = temp->get_next();
		}
	}
	return i;
}

bool List::delete_list(int d)
{
	Node* temp = head;
	if (temp == NULL)
		return false;
	else if (temp->get_data() == d)
	{
		head = temp->get_next();
		head->set_prev(NULL);
		node_count--;
		return true;
	}
	else
	{
		while (temp->get_data() != d)
		{
			if (temp->get_next() == NULL)
				return false;
			else
				temp = temp->get_next();
		}
		if (temp->get_next() != NULL)
			temp->get_prev()->set_next(temp->get_next());
		else
			temp->get_prev()->set_next(NULL);
		node_count--;
		return true;
	}
}

//void List::sort()
//{
//	----------------setting the node value in the array
//	int* temp_arr = new int(node_count);
//	Node* temp = head;
//	int i = 0;
//	while (temp != NULL)
//	{
//
//		temp_arr[i] = temp->get_data();
//		temp = temp->get_next();
//		i++;
//	}
//	-----------------------------------sorting algorithm
//	for (int i = 0; i < node_count; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			if (temp_arr[i] < temp_arr[j])
//			{
//				int temp = temp_arr[i];
//				temp_arr[i] = temp_arr[j];
//				temp_arr[j] = temp;
//			}
//		}
//	}
//	-----------------------------------setting value back in the nodes
//	Node* temp1 = head;
//	for (int i = 0; i < node_count; i++)
//	{
//		if (temp1 != NULL)
//		{
//			temp1->set_data(temp_arr[i]);
//			temp1 = temp1->get_next();
//		}
//	}
//	cout << "List has been sorted\n";
//}



