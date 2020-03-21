#include<bits/stdc++.h>
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
    void push_loop(int k);
    bool check_loop();
    void print();

};
int main()
{
    List mylist;
    mylist.push(1);
    mylist.push(2);
    mylist.push(3);
    mylist.push(4);
    mylist.push(5);
    mylist.push(6);
    mylist.push(7);
    mylist.push(8);
    mylist.print();
    if( mylist.check_loop() == 1)
    {
        cout<<"Loop"<<endl;


    }
    else
    {
        cout<<"No LOOP"<<endl;
    }
    mylist.push_loop(3);
    if( mylist.check_loop() == 1)
    {
        cout<<"Loop"<<endl;


    }
    else
    {
        cout<<"No LOOP"<<endl;
    }



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

void List :: push_loop(int k)
{
   Node* temp = head;
   int cnt = 0;

   while(cnt < k)
   {
       temp = temp->next;
       cnt++;
   }
   Node* loop_ref = temp;

   while(temp->next != NULL)
   {
       temp = temp->next;
   }
   temp->next = loop_ref;

}
bool List :: check_loop()
{
    Node* temp = head;
    unordered_set <Node*> s;
    while(temp != NULL)
    {
        if(s.find(temp) != s.end())

        {
            return true;
        }
        s.insert(temp);
        temp = temp->next;
    }
    return false;
}
