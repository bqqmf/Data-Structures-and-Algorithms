#include <iostream>

using namespace std;

struct
{
	int data;
	Node *next;
};

/*
head의 주소와 삽입할 값이 주어졌을 때,
연결리스트의 맨 앞에 노드를 삽입하는 함수
*/
void push(Node** head_ref, int new_data)
{
	// 새로운 노드를 할당한다.
	Node* new_node = new Node();

	// 노드에 값을 넣는다.
	new_node->data = new_data;

	// 새로운 노드가 head가 가리키는 노드를 가리키게 한다.
	new_node->next = (*head_ref);

	// head가 새로운 노드를 가리키게 한다.
	(*head_ref) = new_node;
}

/*
이전 노드의 정보가 주어졌을 때, 그 뒤에 노드를 삽입하는 함수
*/
void insertAfter(Node* prev_node, int new_data)
{
	// 이전 노드가 NULL인지 확인
	if (prev_node == NULL)
	{
		cout<<"The given previous node cannot be NULL";
		return;
	}

	Node* new_node = new Node();

	new_node->data = new_data;

	// 새로운 노드가 이전 노드가 가리키던 노드를 가리키게 한다.
	new_node->next = prev_node->next;

	// 이전 노드가 새로운 노드를 가리키게 한다.
	prev_node->next = new_node;
}

/*
head의 주소와 삽입할 값이 주어졌을 때,
연결리스트의 맨 끝에 노드를 삽입하는 함수
*/
void append(Node** head_ref, int new_data)
{
	Node* new_node = new Node();

	Node *last = *head_ref; 

	new_node->data = new_data;

	// 마지막 노드는 아무것도 가리키지 않으므로 NULL.
	new_node->next = NULL;

	// 연결 리스트가 비었다면, head가 새 노드를 가리키게 한다.
	if (*head_ref == NULL)
	{
		*head_ref = new_node;
		return;
	}

	// 마지막 노드를 가리킬 때 까지 last를 옮긴다.
	while (last->next != NULL)
	{
		last = last->next;
	}

	// 마지막 노드가 새로운 노드를 가리키게 한다.
	last->next = new_node;
	return;
}

// head부터 연결리스트를 출력하는 함수
void printList(Node *node)
{
	while (node != NULL)
	{
		cout<<" "<<node->data;
		node = node->next;
	}
}

int main()
{
	Node* head = NULL;
	
	// 6->NULL
	append(&head, 6);
	
	// 7->6->NULL
	push(&head, 7);
	
	// 1->7->6->NULL
	push(&head, 1);
	
	// 1->7->6->4->NULL
	append(&head, 4);
	
	// 1->7->8->6->4->NULL
	insertAfter(head->next, 8);
	
	cout<<"Created Linked list is: ";
	printList(head);
	
	return 0;
}
