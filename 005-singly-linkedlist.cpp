#include<iostream>
using namespace std;

class node{
public:
  int key;
  int data;
  node* next;

  node(){
    key = 0;
    data = 0;
    next = NULL;
  }
  node(int k , int d){
    key = k;
    data = d;
  }

};
class singlylinkedlist{
private:
public:
  node* head;

  singlylinkedlist(){
    head = NULL;
  }
  singlylinkedlist(node* n){
    head = n;
  }
  // traversing
  node* nodeExist(int k){
    node* temp = NULL;
    node* ptr = head;
   while (ptr != NULL) {
      if (ptr -> key == k) {
        temp = ptr;
      }
      ptr = ptr -> next;

    }

  return temp;
  }
  // appending
  void appendnode(node* n){
    if(nodeExist(n -> key) != NULL){
      std::cout << "Node already exists with key valye" << n->key<<"Append another node woth different key value" << '\n';
    }else{
      if(head == NULL){
        head = n;
        cout << "Node Appended" << endl;
      }
      else{
        node* ptr = head;
        while (ptr ->next != NULL) {
          ptr = ptr ->next;
        }
        ptr -> next = n;
        std::cout << "Node Appended" << '\n';
      }
    }
  }
  // prepending
  void prependNode(node* n){
    if(nodeExist(n->key)!=NULL){
      std::cout << "Node Already exists with same key , Append another node with differnet key" << '\n';
    }else{
      n->next = head;
      head = n;
    }
  }
  // inserting
  void insertnodeafter(int k , node* n){
  node* ptr = nodeExist(k);
  if(ptr == NULL){
    std::cout << "NO node exists with key value " << k << '\n';
  }else{
    if(nodeExist(n->key)!=NULL){
      std::cout << "Node Already exists with same key , Append another node with differnet key" << '\n';
    }else{
      n->next = ptr -> next ;
      ptr->next = n;
      std::cout << "Node Inserted" << '\n';
    }
   }
  }
  // delete
  void deltenodebykey(int k){
    if(head == NULL){
      std::cout << "list already empty" << '\n';
    }else if(head != NULL){
      if(head -> key == k){
        head = head -> next;
        std::cout << "Node unlinked with keys value" << '\n';
      }
      else{
        node* temp = NULL;
        node* prevptr = head;
        node* currentptr = head->next;
        while(currentptr != NULL){
          if(currentptr -> key == k){
            temp = currentptr;
            currentptr = NULL;
          }else{
            prevptr = prevptr -> next;
            currentptr = currentptr ->next;
          }
        }
        if(temp != NULL){
          prevptr -> next = temp -> next;
          std::cout << "Node unlinked with key : " << k << '\n';
        }else{
          cout << "node doesnt exist with key value" << k << endl;
        }
      }
    }
  }
  // updating
  void updatenodebykey(int k , int d) {
    node* ptr = nodeExist(k);
    if(ptr != NULL){
      ptr -> data = d;
      std::cout << "Node data updated!" << '\n';
    }else{
      std::cout << "Node doesnt exists with key" << k <<  '\n';
    }
  }
  // printing
  void printList(){
    if(head == NULL){
      std::cout << "NO NODES in the list" << '\n';
    }else{
      std::cout << "singly linked list values" << '\n';
      node* temp = head;
    while(temp != NULL){
      std::cout << "(" << temp->key << "," << temp->data<<")--> ";
      temp = temp -> next;
    }
   }
  }

};

int main(){
singlylinkedlist s;
  int option;
  int key1 , k1 ,data1 ;

  do{
    std::cout << endl << endl <<"Select the operation you want Perform . Enter 0 for exit. " << '\n';
    std::cout << "Press 1 for appendnode()" << '\n';
    std::cout << "Press 2 for prependNode()" << '\n';
    std::cout << "Press 3 for insertnodeafter()" << '\n';
    std::cout << "Press 4 for deltenodebykey()" << '\n';
    std::cout << "Press 5 for updatenodebykey()" << '\n';
    std::cout << "Press 6 for printList()" << '\n';
    std::cout << "Press 7 for Clear screen" << '\n';
// taking input from user
    std::cin >> option;
    node* n1 = new node();
    // node 1;
  switch (option) {
    case 0:
        std::cout << "Exiting......" << '\n';
        break;
        case 1:
            cout << "Append Node Operation \nEnter key & data of the Node to be Appended" << endl;
            cin >> key1;
            cin >> data1;
            n1 -> key = key1;
            n1 -> data = data1;
            s.appendnode(n1);
            //cout<<n1.key<<" = "<<n1.data<<endl;
            break;

          case 2:
            cout << "Prepend Node Operation \nEnter key & data of the Node to be Prepended" << endl;
            cin >> key1;
            cin >> data1;
            n1 -> key = key1;
            n1 -> data = data1;
            s.prependNode(n1);
            break;

          case 3:
            cout << "Insert Node After Operation \nEnter key of existing Node after which you want to Insert this New node: " << endl;
            cin >> k1;
            cout << "Enter key & data of the New Node first: " << endl;
            cin >> key1;
            cin >> data1;
            n1 -> key = key1;
            n1 -> data = data1;

            s.insertnodeafter(k1, n1);
            break;

          case 4:

            cout << "Delete Node By Key Operation - \nEnter key of the Node to be deleted: " << endl;
            cin >> k1;
            s.deltenodebykey(k1);

            break;
          case 5:
            cout << "Update Node By Key Operation - \nEnter key & NEW data to be updated" << endl;
            cin >> key1;
            cin >> data1;
            s.updatenodebykey(key1, data1);

            break;
          case 6:
            s.printList();

            break;
          case 7:
            system("cls");
            break;
          default:
            cout << "Enter Proper Option number " << endl;
          }

        } while (option != 0);

        return 0;
      }
