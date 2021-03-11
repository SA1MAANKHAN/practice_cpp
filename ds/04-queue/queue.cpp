#include<iostream>
using namespace std;

int main(){

    int front = -1;
    int rear = -1;
    int size;
    int option;
    int element;

    cout << "Enter the size of the queue" << endl;
    cin >> size;

    int queue[size];


    do{

    cout << "PRESS 1 FOR INSERTING\n"  << "PRESS 2 FOR PRINTING\n"<< "PRESS 3 FOR REMOVING\n" <<"PRESS 0 TO EXIT\n"<< endl;
    cin >> option;

    if(option == 1){

        if(rear == size-1){
            cout << "OVERFLOW!" << endl;
        }else{

            if(front == -1 && rear == -1){
                front++;
            }

            cout << "enter the elment you want to insert" <<endl ;
            cin >> element;

            queue[rear+1] = element;
            rear++;

            cout << element << " was inserted" << endl;
            
        }

    }


    if(option == 2){

 if(rear == -1 && front == -1){
            cout << "QUEUE IS EMPTY, CANT PRINT!" << endl;
        }else{


         cout << endl;
        for(int i=0; i<=rear;i++){
            cout << queue[i] << " | " ;
        }
        cout << endl<< endl;
        }
    }


        
    if(option == 3){

        if(rear == -1 && front == -1){
            cout << "UNDERFLOW!" << endl;
        }else{

            
            element = queue[front];

            if(front == 0 && rear == 0){
                front--;
            }
            // shift
            for(int i=0;i<rear;i++){
                queue[i] = queue[i+1];
            }
            
            rear--;

            cout << element << " was popped" <<endl;

        }

    }

    }while(option != 0);

    return 0;
}