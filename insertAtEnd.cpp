#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
class LinkList
{
    Node *head;

public:
    LinkList()
    {
        head = NULL;
    }
    void insetAtEnd(int data)
    {
        if (head == NULL)
        {
            cout << "LIST IS EMPTY SO THIS IS OUR FIRST NODE INTO LIST "
                 << "\n";
            Node *newNode = new Node(data);
            head = newNode;
        }
        else
        {
            Node *temp = head;
            Node *newNode = new Node(data);
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            cout << "VALUES ARE INSERTED AT THE END \n";
        }
    }
    void print()
    {
        if (head == NULL)
        {
            cout << "WE CAN NOT PRINT THE VALUES BECAUSE LINK LIST IS EMPTY ";
        }
        else
        {
            Node *temp = head;
            while (temp != NULL)
            {
                /* code */
                cout << endl;
                cout << temp->data;
                // cout << endl;
                temp = temp->next;
            }
        }
    }
};
int main()
{
    LinkList l;
    l.insetAtEnd(1);
    l.insetAtEnd(2);
    l.insetAtEnd(3);
    l.insetAtEnd(4);
    l.insetAtEnd(5);
    l.insetAtEnd(6);
    cout << "PRINT THE VALUES \n ";
    l.print();
}