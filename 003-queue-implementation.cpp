#include<iostream>
using namespace std;

class queue{
  private:
    int rear;
    int front;
    int arr[5];

  public:
    queue(){
     front = -1;
     rear  = -1;
     for (int i=0 ; i<5 ; i++){
       arr[i]=0;
     }
    }

    bool isEmpty(){
      if (front == -1 && rear == -1){
        return true;
      }else{
        return false;
      }
    }
    bool isFull(){
      if (rear == 4){
        return true;
      }else{
        return false;
      }
    }
    void enqueue(int value){
      if(isFull()){
        std::cout << "Queue is full ----- OVERFLOW!-----" << '\n';
        return;
      }else if(isEmpty()){
        rear = 0;
        front = 0;
        arr[rear]=value;
      }else{
        rear++;
        arr[rear]=value;
      }
    }
    int dequeue(){
      if(isEmpty()){
        std::cout << "Queue is EMPTY ----- UNDERFLOW!-----" << '\n';
        return 0;
      }else if(rear == front){
        int x;
        x = arr[front];
        arr[front]= 0;
        rear = -1;
        front = -1;
        return x;
      }else{
        int x;
        x = arr[front];
        arr[front]= 0;
        front++;
        return x;
      }
      }
      int count(){
        return (rear-front)+1;
      }
      void display(){
        std::cout << "All the values are : \n" << '\n';
        for (int i=0 ; i <5 ;i++){
          std::cout << arr[i] << '\n';
        }
      }


};

int main(){
  queue q1;
  int option, value , front ,rear , arr[5];

  do{
    std::cout << "Select the operation you want Perform . Enter 0 for exit. " << '\n';
    std::cout << "Press 1 for enqueue" << '\n';
    std::cout << "Press 2 for dequeue" << '\n';
    std::cout << "Press 3 for isEmpty" << '\n';
    std::cout << "Press 4 for isFull" << '\n';
    std::cout << "Press 5 for count" << '\n';
    std::cout << "Press 6 for display" << '\n';
    std::cout << "Press 7 for Clear screen" << '\n';

    std::cin >> option;
  switch (option) {
    case 1:
      std::cout << "Enter an item to Enqueue in the Queue  " << '\n';
      std::cin >> value;
      q1.enqueue(value);
        break;
    case 2:
      std::cout << "Dequeue operation selected : \n Removed item is : " << q1.dequeue() <<'\n';
        break;
    case 3:
      if (q1.isEmpty()) {
        std::cout << "Queue is Empty" << '\n';
      }else{
        std::cout << "Queue is not Empty" << '\n';
      }
        break;
    case 4:
      if (q1.isFull()) {
        std::cout << "Queue is Full" << '\n';
      }else{
        std::cout << "Queue is not Full" << '\n';
      }
        break;
    case 5:
        std::cout << "Count operation selected \n Number of elements in Queue is ---- " << q1.count() << '\n';
         break;
    case 6:
        std::cout << "Displaying all elements in the Queue" << '\n';
        q1.display();
        break;
    case 7:
        system("cls");
        break;
     default:
        std::cout << "Enter a proper option Number" << '\n';

    }
  }while (option != 0);
  return 0;
}
