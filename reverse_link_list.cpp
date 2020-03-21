#include<iostream>
#include "singly_link_list.cpp"
using namespace std;
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
    mylist.print();
    mylist.revLinklist();
    mylist.print();


    return 0;
}
