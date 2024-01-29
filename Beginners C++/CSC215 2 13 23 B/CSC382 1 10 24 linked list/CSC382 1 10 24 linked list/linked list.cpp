// linked list using struct

#include <iostream>
using namespace std;

struct node
{
	int data;
	node* next;
};

//global variables
node* head = NULL;
node* current = NULL;


void insertFront(int num)
{
	struct node* newnode = new node;
	newnode->data = num;

	newnode->next = head;
	head = newnode;
	

}

void display()
{
	struct node* curr = head;
	while (curr != NULL)
	{
		cout << curr->data << endl;
		curr = curr->next;
	}
}


int main()
{
	int inputNum;
	
	current == head;
	for (int i = 1; i < 20; i++)
	{
		insertFront(i);
	}
	display();
}