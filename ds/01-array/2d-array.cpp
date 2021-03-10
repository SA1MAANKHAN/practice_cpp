#include<iostream>
using namespace std;


// Search
int search( int array[] ,int item , int size){

    
    for(int i=0; i<size; i++){

        if (array[i] == item){
            cout << item << " was found at " << i << endl;
        }
    }
    return 0;
}


// int insertAtEnd(int array[] , int item , int size){



//     int newArray[size+1];

//     for (int i=0;i<size;i++){
//         newArray[i] = array[i];
//     }

//     newArray[size] = item;

//   cout << "your new array is : " << endl << endl;

//       for (int j=0;j<size+1;j++){  
//         cout << "[" << newArray[j] << "]" ;
//     }

//     cout<< " " << endl;

//     return 0;
// }


// int insertAtPos(int array[] , int item , int size , int pos){



//     int newArray[size+1];

//     for (int i=0;i<pos;i++){
//         newArray[i] = array[i];
//     }

//     newArray[pos] = item;

//    for (int i=pos;i<size;i++){
//         newArray[i+1] = array[i];
//     }

//   cout << "your new array is : " << endl << endl;
  
//     for (int j=0;j<size+1;j++){  
//         cout << "[" << newArray[j] << "]" ;
//     }

//         cout<< " " << endl;

//     return 0;
// }

int deleteItem( int array[] ,int item , int size){

    
    for(int i=0; i<size; i++){

        if (array[i] == item){
            cout << item << " was deleted from " << i << endl;
            for (int j = i ; j < size -1 ; j++ ){
                array[j] = array[j+1];
            }
        }
    }

     cout << "your new array is : " << endl << endl;
  
    for (int j=0;j<size-1;j++){  
        cout << "[" << array[j] << "]" ;
    }

        cout<< " " << endl;

    return 0;
}

int deleteAtPos( int array[] ,int pos , int size){

    int item = array[pos];

      cout << "len is : " << size << endl;
    
            cout << item << " was deleted from " << pos << endl;
            for (int j = pos ; j < size -1 ; j++ ){
                array[j] = array[j+1];
            }

     cout << "your new array is : " << endl << endl;
  
    for (int j=0;j<size-1;j++){  
        cout << "[" << array[j] << "]" ;
    }

        cout<< " " << endl;

    return 0;
}

int UpdateAtPos( int array[] ,int pos ,int item, int size){

    
    array[pos] = item;

     cout << "your new array is : " << endl << endl;
  
    for (int j=0;j<size;j++){  
        cout << "[" << array[j] << "]" ;
    }

        cout<< " " << endl;

    return 0;
}

int main()
{
    int row , col , item,insert, insertEnd, insertItem , pos, Itemtodelete, posDelete , Itemtoupdate,  posUpdate, option ;

            cout << "enter the number of rows " << endl;
            cin>> row;

            cout << "enter the number of columns " << endl;
            cin>> col;

            int arr[row][col];

            cout << "Fill your array, enter " << row*col << " items, column wise" <<  endl ;
    
            for(int i=0;i<row;i++){ 
                for(int j=0;j<col;j++){
                cin>>arr[i][j];
                }
            } 

            cout<< " " << endl;

    do{


        cout << endl << "PRESS 1 FOR INSERTING ELEMENT\nPRESS 2 FOR PRINTING MATRIX\nPRESS 3 FOR DELETEING ELEMENT\nPRESS 4 FOR UPDATING ELEMENT\nPRESS 5 FOR SEARCH ELEMENT\nPRESS 0 TO EXIT\n" << endl;
        cin >> option;


        if(option == 1){
            //  INSERT
            cout << " You have alredy inserted , sorry" << endl;
        }

        if(option == 2){

            // PRINT

            for(int i=0;i<row;i++){ 
                for(int j=0;j<col;j++){
                    cout << " [ " << arr[i][j] << " ] " ;
                }
                cout<<"\n";
            } 
            
        }
        if(option == 3){

            // DELETE

            int rowDelete;
            int colDelete;

            cout << " Enter the row of the element you want to delete" << endl;
            cin >> rowDelete;

            cout << " Enter the column of the element you want to delete" << endl;
            cin >> colDelete;

            cout << arr[rowDelete-1][colDelete-1] << " was deleted " << endl;

            arr[rowDelete-1][colDelete-1] = 0;





            
        }
        if(option == 4){

            //  UPDATE

            int rowUpdate;
            int colUpdate;
            int elementUpdate;

            cout << " Enter the row of the element you want to Update" << endl;
            cin >> rowUpdate;

            cout << " Enter the column of the element you want to Update" << endl;
            cin >> colUpdate;

            cout << " Enter the element you want to Update it to" << endl;
            cin >> elementUpdate;



            cout << arr[rowUpdate-1][colUpdate-1] << " was Updated to " << elementUpdate << endl;

            arr[rowUpdate-1][colUpdate-1] = elementUpdate;
            
        }
        if(option == 5){

            //  SEARCH
            int item;
            // bool found = false;
            // int rowFound;
            // int colFound;


            cout << "enter item you want to find" << endl;
            cin >> item ;

            for(int i=0;i<row;i++){ 
                for(int j=0;j<col;j++){
                    if(arr[i][j] == item){
                        // found = true;
                        cout << item << " was found at " << i+1 << "x" <<j+1 <<endl;
                        
                    }
                }
                cout<<"\n";
            } 





            
            
        }

    }while(option != 0);

    return 0;
}
