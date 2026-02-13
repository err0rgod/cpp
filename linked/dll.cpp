#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int data)
    {
        val = data;
        next = prev = NULL;
    }
};

class dll
{
    Node *head;
    Node *tail;

public:
    dll()
    {
        head = tail = NULL;
    }
    void push_front(int val)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
    }
    void print()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->val << endl;
            temp = temp->next;
        }
    }
    void rprint(){
        Node* temp = tail;
        while(temp){
            cout << temp->val << endl;
            temp = temp->prev;
        }
    }
    void push_back(int val){
        Node* newnode = new Node(val);
        if(tail == NULL){
            head = tail = newnode;
        }
        else{
            newnode->prev = tail;
            tail->next = newnode;
            tail = newnode;
        }
    }
};

int main()
{
    dll dl;
    dl.push_back(3);
    dl.push_back(9);
    dl.push_back(7);
    dl.push_back(1);
    dl.push_back(34);
    dl.rprint();
}