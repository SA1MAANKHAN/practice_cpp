#include<iostream>
using namespace std;

struct node {
    node* next = NULL;
    int data;
};

int main(){
    node* head = NULL;
    node* ptr;

    int element;
    int option;
    int subOption;
    

    do {
    cout << endl << "PRESS 1 FOR APPENDING NODE\nPRESS 2 FOR PRINTING LINKED LIST\nPRESS 3 FOR DELETEING NODE\nPRESS 4 FOR UPDATING NODE\nPRESS 5 FOR SEARCHING NODE\nPRESS 0 TO EXIT\n" << endl;
    cin >> option;

    if(option == 1){

        cout << "enter the elment you want to append" <<endl ;
        cin >> element;

        node* newNode = new node;
        newNode->data = element;

         cout << endl << "PRESS 1 FOR Inserting at LAST\nPRESS 2 FOR Inserting FIRST NODE\nPRESS 3 FOR Inserting at SOME OTHER PLACE \n" << endl;
        cin >> subOption;

       

        if(subOption == 1){

            if(head == NULL){

                head = newNode;

                cout << "INSERTED FIRST NODE: " << endl;
                cout << "node-data ->" << head->data << endl;
                cout << "node-next ->" << head->next << endl;

            }else{
                ptr = head;
                while(ptr->next != NULL){
                    ptr = ptr->next;
                }
                ptr->next = newNode;
                ptr = ptr->next;

                cout << "INSERTED NODE: " << endl;
                cout << "node-data ->" << ptr->data << endl;
                cout << "node-next ->" << ptr->next << endl;
            }
         }

        if(subOption == 2){

                newNode -> next = head;
                head = newNode;
         }
        if(subOption == 3){
            ptr = head;
            int insertAfter;

                cout << endl << "Enter the value you want to insert after" << endl;
                cin >> insertAfter;

                do {
                if(ptr->data == insertAfter){
                    newNode->next = ptr->next;
                    ptr->next = newNode;
                }
                ptr = ptr->next;
            }while(ptr->next != NULL);

        }
}

    if(option == 2){

        node* ptr = head;
            while(ptr != NULL){
                cout << " ( " << ptr->data << " , " << ptr->next<<" ) ---> ";
                ptr = ptr -> next;
            }
         
    }    
    if(option == 3){
        cout << endl << "PRESS 1 FOR DELETEING FIRST NODE\nPRESS 2 FOR DELETEING LAST NODE\nPRESS 3 FOR DELETEING SOME OTHER NODE \n" << endl;
        cin >> subOption;

        if(subOption == 1){
            head = head->next;
        }
        if(subOption == 2){
        
            ptr = head;
            while(ptr->next->next != NULL){
                ptr = ptr->next;
            }
            ptr->next = NULL;
        }
        if(subOption == 3){

        ptr = head;
        int deleteData;
        // deleting some other node 
        cout << endl << "Enter the value you want to delete" << endl;
        cin >> deleteData;

       do {
                if(ptr->next->data == deleteData){
                    ptr->next = ptr->next->next;
                }
                ptr = ptr->next;
       }while(ptr->next != NULL);
        
        }
    }

    if(option == 4){
        ptr = head;
        int oldValue;
        int newValue;
        cout <<"Enter the Value you want to update" << endl;
        cin >> oldValue;

        cout <<"Enter the Value you it to update to" << endl;
        cin >> newValue;



         while(ptr->next!= NULL){
                if(ptr->data == oldValue){
                ptr->data = newValue;
                   
                }
                ptr = ptr->next;
       }
    }

    if(option == 5){
            // searching node
            ptr = head;
            int searchValue;
            bool exists = false;
            
            cout <<"Enter the Value you want to check/search" << endl;
            cin >> searchValue;

            while(ptr->next!= NULL){
                    if(ptr->data == searchValue){
                    exists = true;
                    }
                    ptr = ptr->next;
            }

            if(exists){
                cout << endl << "****  " << searchValue << " exists in the list ****" << endl;
            }
            if(!exists){
                cout << endl << "****  " << searchValue << " does not exists in the list ****" << endl;
            }

        }


     }while (option != 0);
   
  
    
    return 0;    
}
