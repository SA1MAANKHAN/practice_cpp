#include<iostream>
using namespace std;

struct node{

    int data;
    int priority;
    node* next;

};

int main(){

    int option;
    int element;
    int subOption;

    node* head = NULL;
    node* ptr;
    node* newNode = new node;


    do{

        cout << endl << "PRESS 1 FOR INSERTING NODE\nPRESS 2 FOR PRINTING LINKED LIST\nPRESS 3 FOR DELETEING NODE\nPRESS 4 FOR UPDATING NODE\nPRESS 5 FOR SEARCHING NODE\nPRESS 0 TO EXIT\n" << endl;
        cin >> option;

        if(option == 1){

            int dataInput;
            int priorityInput;

            cout << "Enter the data and then its priority " << endl;
            cin >> dataInput;
            cin >> priorityInput;

            node* newNode = new node;

            newNode->data = dataInput;
            newNode->priority = priorityInput;

            ptr = head;

            if(head == NULL){
                head = newNode;

            }else{

                if(ptr->priority > newNode->priority){
                    newNode->next = ptr;
                    head = newNode;
                }else{

                while(ptr->next != NULL){

                    if(ptr->next->priority > newNode->priority){
                        newNode->next = ptr->next;
                        ptr->next = newNode;
                    }

                    ptr = ptr->next;

                }
                 
                }
            }

            cout<< dataInput << " with priority " << priorityInput << " has been inserted!" << endl;

        }

        if(option == 2){
            // print 

        ptr = head;
        
        while(ptr != NULL){

            cout << " { " << ptr->priority << ", " << ptr-> data << " } -->";

            ptr= ptr->next;
        
        }

        cout << "Null" << endl;
        
                }

        

    }while(option != 0);

    return 0;
}