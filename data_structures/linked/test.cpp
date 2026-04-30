#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
class LL
{
    Node *head;
    Node *tail;

public:
    LL()
    {
        head = tail = NULL;
    }

    void push_front(int val)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = tail = newnode;
            return;
        }
        else
        {
            newnode->next = head;
            head = newnode;
            return;
        }
    }
    void push_back(int val)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        return;
    }
    void pop_front()
    {
        Node *old = head;
        if (head == NULL)
            return;
        head = head->next;
        delete old;
        if (head == NULL)
        {
            tail = NULL;
        }
    }
    void pop_back()
    {
        if (head == NULL)
            return;
        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
        delete temp;
    }
    void insert(int pos, int val)
    {
        if (pos < 0)
            return;
        if (pos == 0)
            push_front(val);
        Node *temp = head;
        Node *newnode = new Node(val);
        for (int i = 0; i < pos; i++)
        {
            if (temp == NULL)
                return;
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
    void printl()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
    int find(int val)
    {
        Node *temp = head;
        int i = 0;
        while (temp)
        {
            if (temp->data == val)
                return i;
            i++;
            temp = temp->next;
        }
        return -1;
    }
};

int main()
{
    LL l1;
    l1.push_back(9);
    l1.push_back(5);
    l1.push_back(7);
    l1.push_back(1);
    // l1.pop_back();
    l1.printl();
    l1.push_back(12);
    cout << "After Inserting value ------------------***********************------------------------" << endl;
    cout << l1.find(7) << endl;

    return 0;
}