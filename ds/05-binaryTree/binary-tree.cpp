#include<iostream>
using namespace std;

struct node{
    int data;
    node* left = NULL;
    node* right = NULL;
};


int main(){

    node* root = NULL;
    node* newNode = new node;
    node* temp;

    int option;

    do{
        cout << "PRESS 1 FOR INSERTING DATA\n"  << "PRESS 2 FOR PRINTING \n"<< "PRESS 3 FOR DELETING\n" <<"PRESS 0 TO EXIT\n"<< endl;
        cin >> option;

        

    }while(option != 0); 
    

    return 0;
}