#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next = NULL;

};
class List
{
    Node* head = NULL;
public:
    void push(int data);
    void print();
    void print_kth_elem_fromlast(int k);

};
int main()
{
    List myList;
    myList.push(1);
    myList.push(2);
    myList.push(3);
    myList.push(4);
    myList.push(5);
    myList.push(6);
    myList.push(7);
    myList.push(8);
    myList.push(9);
    myList.push(10);

    myList.print();
    myList.print_kth_elem_fromlast(4);

    return 0;
}
void List :: push(int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    if(head == NULL)
    {
        head = newNode;


    }
    else
    {
        Node* temp = head;
        while(temp->next != NULL)
        {

            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void List::print()
{
    Node* temp =head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void List::print_kth_elem_fromlast(int k)
{


    Node* start = head;
    Node* kth_end = head;
    for(int i=0; i<k; i++)
    {
        start = start->next;
    }
    while(start != NULL)
    {
        kth_end = kth_end->next;
        start = start->next;

    }
    cout<<kth_end->data<<" ";
}
