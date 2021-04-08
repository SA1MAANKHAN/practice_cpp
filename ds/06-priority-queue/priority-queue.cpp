#include<iostream>
using namespace std;

struct node{

    int data;
    int priority;
    node* next = NULL;

};

int main(){

    int option;
    int element;
    int subOption;

    node* head = NULL;
    node* ptr;


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

                while((ptr->next != NULL) && (ptr->next->priority < newNode->priority)){

              ptr = ptr->next;

                }

                 newNode->next = ptr->next;
                        ptr->next = newNode;
                 
                }
            }

            cout<< dataInput << " with priority " << priorityInput << " has been inserted!" << endl;

        }

        if(option == 2){

            if(head == NULL){
                cout << "Queue is empty, cant print anything" << endl;
            }else{
            // print 

        ptr = head;
        
        while(ptr != NULL){

            cout << " { " << ptr->priority << ", " << ptr-> data << ", " << ptr->next <<" } -->";

            ptr= ptr->next;
        
        }

        cout << "Null" << endl;
    }
    }

        if(option == 3){

            int subOption;

            if(head == NULL){
                cout << "Queue is empty, cant remove anything" << endl;
            }else{

                cout << "Press 1 for deleting element with highest priority\n" << "Press 2 for deleting element with lowest priority " <<endl;
                cin >> subOption;

                if(subOption==1){

                    cout << head->data << " with proprity " << head->priority << " has been deleted!" << endl;
            
                    head = head->next;
                }


                if(subOption==2){
                    ptr = head;

                    if(ptr->next == NULL){
                        cout << head->data << " with proprity " << head->priority << " has been deleted!" << endl;
                        head = NULL;
                    }else{

                        while(ptr ->next->next!= NULL){
        
                        ptr = ptr->next;

                        }


                        cout << ptr->next->data << " with proprity " << head->next->priority << " has been deleted!" << endl;
                        ptr->next = NULL;
                    }
    
                }
            }
        }

    }while(option != 0);

    return 0;
}