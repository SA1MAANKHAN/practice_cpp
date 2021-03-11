#include<iostream>
using namespace std;


    bool checkOverflow(int top, int size){

        if(top == size-1){
            return true;
        }else{
        return false;

        }

    };

    bool checkUnderflow(int top){

        if(top == -1){
            return true;
        }else{
        return false;
        }

    };

int main(){

    int top = -1;
    int size;
    int option;
    int element;

    cout << "Enter the size of the stack" << endl;
    cin >> size;

    int stack[size];


    do{

    cout << "PRESS 1 FOR PUSHING\n" << "PRESS 2 FOR POPING\n" << "PRESS 3 FOR PRINTING\n" <<"PRESS 0 TO EXIT\n"<< endl;
    cin >> option;

    if(option == 1){

        if(checkOverflow(top,size)){
            cout << "OVERFLOW!" << endl;
        }else{

            cout << "enter the elment you want to push" <<endl ;
            cin >> element;

            cout << element << " was pushed" << endl;

            stack[top+1] = element;
            top++;
            
        }

        

    }

    if(option == 2){

        if(checkUnderflow(top)){
            cout << "UNDERFLOW!" << endl;
        }else{

            element = stack[top];
            top--;

            cout << element << " was popped" << endl;

        }

    }

    if(option == 3){
        for(int i = top;i>=0;i--){
            cout << "| " << stack[i] << " |" <<endl;
        }
    }


        

    }while(option != 0);

    return 0;
}