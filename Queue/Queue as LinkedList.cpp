#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

/*
MADE BY: HA
This module implements the Queue (INT NUMBERS ONLY) DS using a linked list the class got 3 methods:
OPs:
1. Enqueue: New node and the pointer is null.
2. Dequeue: head points to the next node and the first node is deleted.
3. printList: to print the elements in the list and the list size.
(FIFO)
*/

class QueueAsLinkedList{
    private:
        Node* head;
        int listSize = 0;
    public:
        QueueAsLinkedList(){
            head = nullptr;
        }
        void Enqueue(int value){
            Node* newNode = new Node();
            newNode->data = value;
            newNode->next = nullptr;

            if (head == nullptr){
                head = newNode;
                listSize++;
                cout << "Inserted: " << value << " at the end of the Queue." << endl;
                return;
            }
            Node* ptr = head;
            while (ptr->next != nullptr)
                ptr = ptr->next;
            ptr->next = newNode;
            listSize++;
            cout << "Inserted: " << value << " at the end of the Queue." << endl;
        }
        void Dequeue(){
            if (head == nullptr){
                cout << "The Queue is empty, Insert an element first!" << endl;
                return;
            }
            Node* ptr = head;
            head = head->next;
            delete ptr;
            listSize--;
            cout << "Deleted the first element from the Queue." << endl;
        }
        void printList(){
            if (head == nullptr){
                cout << "The Queue is empty." << endl;
                return;
            }
            cout << "Your Queue: " << endl;
            Node* ptr = head;
            cout << "Head -> ";
            for (int i = 0;i < listSize;++i){
                cout << ptr->data << " -> ";
                ptr = ptr->next;
            }
            cout << "NULL" << endl;
            cout << "Queue size: " << listSize << endl;
            cout << endl;
        }
};