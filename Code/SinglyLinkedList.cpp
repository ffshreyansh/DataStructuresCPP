#include <iostream>
using namespace std;

struct node
{
    int item;
    node *next;
};
class SLL
{
private:
    node *start;

public:
    SLL();
    void insertAtStart(int);
};

void SLL::insertAtStart(int data)
{
    node *n = new node;
    n->item = data;
    n->next = start;
}

SLL::SLL()
{
    start = nullptr;
}