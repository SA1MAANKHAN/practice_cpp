#include<iostream>
#include<queue>
#include<stack>
using namespace std;

struct node{
    int data;
    node* left = NULL;
    node* right = NULL;
};


int main(){

    node* root = NULL;
    node* ptr;

    int option;

    do{
        cout << "PRESS 1 FOR INSERTING DATA\n"  << "PRESS 2 FOR PRINTING \n"<< "PRESS 3 FOR SEARCH\n" <<"PRESS 0 TO EXIT\n"<< endl;
        cin >> option;

        if(option == 1){
            // insert

            node* newNode = new node();

            cout << "Enter the data you want to enter" << endl;
            cin >> newNode->data;

            cout << newNode->data << " was inserted" << endl; 



            if (root == NULL){

                root = newNode;

            }else{

                 queue<node*> queueTree ;
              
                queueTree.push(root);

                while(!queueTree.empty()){


                ptr = queueTree.front();
                queueTree.pop();

                if(ptr->left != NULL){
                    queueTree.push(ptr->left);
                }else{
                    ptr->left = newNode;
                    break;
                }

                 if(ptr->right != NULL){
                    queueTree.push(ptr->right);
                }else{
                    ptr->right = newNode;
                    break;
                }
            }

          } 
                
        }

        if(option == 2){
            
            // print
                stack<node*> queueTree ;
 
                queueTree.push(root);


                cout << root->data << " is the root" << endl;

                while(!queueTree.empty()){

                ptr = queueTree.top();
                queueTree.pop();

                if(ptr->left != NULL){
                    cout << "left child  ->" << ptr->left->data << endl; 
                    queueTree.push(ptr->left);
                }

                 if(ptr->right != NULL){
                    cout << "right child ->" << ptr->right->data << endl; 
                    queueTree.push(ptr->right);
                }        
                }
            }

        if(option == 3){

             queue<node*> queueTree ;
             bool found = false;

            int search;

            cout << "Enter the data you want to search" << endl;
            cin >> search;
                
              queueTree.push(root);

                while(!queueTree.empty()){

                    if(search == root->data){
                    found = true;
                    break;
                }

                ptr = queueTree.front();
                queueTree.pop();

                if(ptr->left != NULL){
                    if(ptr->left->data == search) {
                    found = true;
                    break;
                    }
                    queueTree.push(ptr->left);
                }

                 if(ptr->right != NULL){
                     if(ptr->right->data == search) {
                    found = true;
                    break;
                    }
                    queueTree.push(ptr->right);
                }        
                }

                if(found){
                    cout << search << " was found in the tree" << endl;
                }else{
                    cout << search << " was not found" << endl;
                }

        }

    }while(option != 0); 
    

    return 0;
}