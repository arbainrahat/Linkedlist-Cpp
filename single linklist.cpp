#include<iostream>
using namespace std;

	struct node
	{
		int data;            //create node
		node *nextlink;
	};

	node *start=NULL;
	node *cursor=NULL;         //Global Variables
	node *newnode;

	void create_node()
	{
		if (start == NULL)
		{
			start = new node;                       //Add nodes
			cout << "Enter Data=\n";
			cin >> start->data;
			start->nextlink = NULL;
		}
		else

		{
			cursor = start;
			while (cursor->nextlink != NULL)
			{
				cursor = cursor->nextlink;
			}
			newnode = new node;
			cout <<"Enter Data\n";
			cin >> newnode->data;
			newnode->nextlink = NULL;
			cursor->nextlink = newnode;
		}
	}
	void print()
	{
		cursor = start;									//Print(Traversing)
		cout << "The list as follows :\n";
		while (cursor != NULL) {
			cout << cursor->data << "   ";
			cursor = cursor->nextlink;
		}
	}

	int main() {
		cout << "Enter Size of Linklist\n";
		int size;
		cin >> size;
		int i = 0;
		while (i < size) {
			create_node();
			i = i + 1;
		}
		print();
		cout << "\n\n";
		cin.get();
		system("pause");
	}