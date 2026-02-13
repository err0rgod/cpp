#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

public:
    node(int data1)
    {
        data = data1;
        next = NULL;
    }
};
class ll
{
    node *head;
    node *tail;

public:
    ll()
    {
        head = tail = NULL;
    }   
    void push_front(int val)
    {
        node *newnode = new node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            newnode->next = head;
            head = newnode;
        }
    }
    void push_back(int val)
    {
        node *newnode = new node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }
    void pop_front()
    {
        if (head == NULL)
        {
            cout << "List is already empty";
            return;
        }
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    void pop_back()
    {
        node *temp = head;
        while (temp)
        {
            if (temp->next == tail)
            {
                cout << "Deleting " << tail->data << endl;
                delete tail;
                tail = temp;
                cout << " and tail is pointing to " << tail->data << endl;
                temp->next = NULL;
            }
            else
            {
                temp = temp->next;
            }
        }
    }
    void reversell(){
        node* prev =NULL;
        node* current = head;
        node* next = NULL;
        while(current){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        
    }
    void insertll(int val, int index)
    {
        if (index < 0)
            return;
        if (index == 0)
        {
            push_front(val);
            return;
        }
        node *temp = head;
        for (int i = 0; i < index - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Invalid Position hai bro" << endl;
                return;
            }
            temp = temp->next;
        }
        node *newnode = new node(val);
        newnode->next = temp->next;
        temp->next = newnode;
    }
    void printll()
    {
        node *temp = head;
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\nLinked List printed succesfully";
    }
    int find(int val)
    {
        node *temp = head;
        int index = 0;
        while (temp)
        {
            if (temp->data == val)
                return index;
            if (temp->next == NULL)
                return -1;
            temp = temp->next;
            index++;
        }
        return -1;
    }
};

int main()
{
    ll l1;
    // vector<int> array = {1,2,4,2,3,5,3};

    l1.push_front(1);
    l1.push_front(2);
    l1.push_front(4);
    l1.push_front(9);
    l1.push_back(67);
    cout << " Insertion succesfull\n";
    // l1.pop_front();
    // l1.pop_back();
    l1.insertll(23, 1);
    // int index = l1.find(23);
    l1.printll();
    l1.reversell();
    l1.printll();
    // cout << "The value 23 is at : " << index << endl;
}