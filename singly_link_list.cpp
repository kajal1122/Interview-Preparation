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
    int cntLength();
    void revLinklist();

};
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
int List :: cntLength()
{
    int cnt = 0;
    if(head == NULL)
    {
        return 0;
    }

    else
    {
        Node* temp = head;
        while(temp != NULL)
        {
            cnt++;
            temp = temp->next;
        }
    }
    return cnt;
}

void List :: revLinklist()
{
    Node* prev = NULL;
    Node* next = NULL;
    Node* curr = head;
    while(curr != NULL)
    {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }
    head = prev;
}
