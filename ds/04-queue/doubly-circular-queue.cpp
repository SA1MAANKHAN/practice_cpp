#include<iostream>
using namespace std;

int main(){

    int front = -1;
    int rear = -1;
    int size;
    int option;
    int element;
    int subOption;

    cout << "Enter the size of the queue" << endl;
    cin >> size;

    int queue[size];


    do{

    cout << "PRESS 1 FOR INSERTING\n"  << "PRESS 2 FOR PRINTING\n"<< "PRESS 3 FOR REMOVING\n"<< "PRESS 9 FOR PRINTING FRONT AND REAR\n" <<"PRESS 0 TO EXIT\n"<< endl;
    cin >> option;

    if(option == 1){

        cout << "PRESS 1 FOR INSERTING IN THE FRONT\n"  << "PRESS 2 FOR INSERTING IN THE END\n"<< endl;
        cin >> subOption;

        if(subOption == 1){

        //  INSERTING IN THE FRONT

        if((rear == size-1 && front == 0)||(rear+1 == front)){
            cout << "OVERFLOW!" << endl;
        }else{
            cout << "enter the elment you want to insert" <<endl ;
            cin >> element;

            if(front == -1 && rear == -1){
                front++;
                rear++;
                queue[rear] = element;
            }else{

            if(front == 0){
                front = size -1;
             queue[front] = element;
            }else{
            front--;
             queue[front] = element;
            }

            }
            cout << element << " was inserted" << endl;

        }
        }

        if(subOption == 2){

        //  INSERTING IN THE END

      if((rear == size-1 && front == 0)||(rear+1 == front)){
            cout << "OVERFLOW!" << endl;
        }else{
            cout << "enter the elment you want to insert" <<endl ;
            cin >> element;

            if(front == -1 && rear == -1){
                front++;
                rear++;
                queue[rear] = element;

            }else{

            if(rear == size-1){
                rear = 0;
             queue[rear] = element;

            }else{
            rear++;
             queue[rear] = element;

            }

            }
            cout << element << " was inserted" << endl;


        }

        }

   
            

    }


    if(option == 2){

        if(rear == -1 && front == -1){
            cout << "QUEUE IS EMPTY, CANT PRINT!" << endl;
        }else{

            int i = front; 

          do{

              cout<< " [ " << queue[i] << " ] ";
              if(i == size-1)
              {
               i = 0;   
              }else{
              i++;
              }
              
            }while(i!= front);
             
             cout <<endl;

        }
    }


        
    if(option == 3){

        cout << "PRESS 1 FOR DELETING FROM THE FRONT\n"  << "PRESS 2 FOR DELETING FROM THE END\n"<< endl;
        cin >> subOption;

          if(subOption == 1){

            
           if(rear == -1 && front == -1){
            cout << "UNDERFLOW!" << endl;
        }else{

            element = queue[front];
            queue[front] = 0;

            if(front == rear ){
                front = -1;
                rear = -1;
            }
            else{
                   if(front == size-1){
                         front = 0;
                    }else{
                    front++;
                    }
            }

            
            

            cout << element << " was popped" <<endl;
           


        }


        }

        if(subOption == 2){

              if(rear == -1 && front == -1){
                cout << "UNDERFLOW!" << endl;
                }else{

                element = queue[rear];
                queue[rear] = 0;

                if(front == rear ){
                    front = -1;
                    rear = -1;
                }
                else{
                    if(rear == 0){
                        rear = size-1;
                    }else{
                        rear--;
                    }
                }   

                cout << element << " was popped" <<endl;
           

        }


        }
    }

    if(option = 9){
         cout << endl << " front: " << front << " rear: " << rear << endl << endl;
    }

    }while(option != 0);

    return 0;
}