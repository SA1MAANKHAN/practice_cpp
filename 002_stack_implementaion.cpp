#include<iostream>
using namespace std;
    class stack{
    private:
        int arr[5];
        int top;
    public:
      stack(){
        top = -1;
        for(int i=0;i<5;i++){
          arr[i]=0;
        }
      }
      bool isEmpty(){
        if (top == -1) {
          return true;
        }else{
          return false;
        }
      }
      bool isFull(){
        if (top == 4) {
          return true;
        }else{
          return false;
        }
      }
      void push(int value){
        if (isFull()) {
          std::cout << "Stack is full , OVERFLOW!" << '\n';
        }else{
          top++;
          arr[top]=value;
        }
      }
      int pop(){
        if (isEmpty()) {
          std::cout << "Stack is Empty , UNDERFLOW!" << '\n';
        }else{
          int popvalue = arr[top];
          arr[top] = 0;
          top--;
          return popvalue;
        }
        return 0;
      }
      int count(){
          return top+1;
        }
      int peek(int position){
         if (isEmpty()) {
           std::cout << "Stack is Empty , UNDERFLOW!" << '\n';
         }else{
         return arr[position];
        }
      }
      void change(int position , int value){
        arr[position] = value;
        std::cout << "Item changed at location" << position << '\n';
      }
      void display(){
        if (isEmpty()) {
          std::cout << "Stack is Empty , UNDERFLOW!" << '\n';
        }else{
          for(int i = top ; i>=0  ; i-- ){
            std::cout <<"postion:" <<  i << "value:" <<"arr[i]" << '\n';
          }
      }

    }
  };
int main(){
    stack s1;
    int option = 0, position , value;
    do{
      std::cout << "Select the operation you want Perform . Enter 0 for exit. " << '\n';
      std::cout << "Press 1 for Push" << '\n';
      std::cout << "Press 2 for Pop" << '\n';
      std::cout << "Press 3 for isEmpty" << '\n';
      std::cout << "Press 4 for isFull" << '\n';
      std::cout << "Press 5 for peek" << '\n';
      std::cout << "Press 6 for count" << '\n';
      std::cout << "Press 7 for change or update" << '\n';
      std::cout << "Press 8 for display" << '\n';
      std::cout << "Press 9 for Clear screen" << '\n';

      std::cin >> option;
    switch (option) {
      case 1:
          std::cout << "Enter the value you want to push" << '\n';
          std::cin >> value;
          s1.push(value);
          break;
      case 2:
          std::cout << "Pop function called - poped value:" <<s1.pop()<< '\n';
          break;
      case 3:
          if (s1.isEmpty()) {
          std::cout << "Stack is Empty" << '\n';
          }else{
          std::cout << "Stack is not Empty" << '\n';
          }
          break;
      case 4:
          if (s1.isFull()) {
          std::cout << "Stack is full" << '\n';
          }else{
          std::cout << "Stack is not full" << '\n';
          }
          break;
      case 5:
          std::cout << "Enter the postion of element you want to pick" << '\n';
          std::cin >> position;
          std::cout << "Peek funtion called - value at postion " << position << '\n' << s1.peek(position) << '\n';
          break;
      case 6:
          std::cout << "Number of elemets :" << s1.count()<< '\n';
          break;
      case 7:
          std::cout << "change funtion called " << '\n';
          std::cout << "Enter the postion of item you want to change" << '\n';
          std::cin >> position;
          std::cout << "Enter the value of the item you want to change" << '\n';
          std::cin >> value;
          s1.change(position,value);
          break;
      case 8:
          std::cout << "display funtion called" << '\n';
          s1.display();
          break;
      case 9:
          system("cls");
          break;
       default:
          std::cout << "Enter a proper option Number" << '\n';

      }
    }while (option != 0);
      return 0;
    }
