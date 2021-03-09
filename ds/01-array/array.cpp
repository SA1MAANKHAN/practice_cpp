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

int insertBeginning(int array[] , int item , int size){



    int newArray[size+1];

    for (int i=0;i<size;i++){
        newArray[i+1] = array[i];
    }

    newArray[0] = item;

    cout << "your new array is : " << endl << endl;

     for (int j=0;j<size+1;j++){  
        cout << "[" << newArray[j] << "]" ;
    }

    cout<< " " << endl;

    return 0;
}

int insertAtEnd(int array[] , int item , int size){



    int newArray[size+1];

    for (int i=0;i<size;i++){
        newArray[i] = array[i];
    }

    newArray[size] = item;

  cout << "your new array is : " << endl << endl;

      for (int j=0;j<size+1;j++){  
        cout << "[" << newArray[j] << "]" ;
    }

    cout<< " " << endl;

    return 0;
}


int insertAtPos(int array[] , int item , int size , int pos){



    int newArray[size+1];

    for (int i=0;i<pos;i++){
        newArray[i] = array[i];
    }

    newArray[pos] = item;

   for (int i=pos;i<size;i++){
        newArray[i+1] = array[i];
    }

  cout << "your new array is : " << endl << endl;
  
    for (int j=0;j<size+1;j++){  
        cout << "[" << newArray[j] << "]" ;
    }

        cout<< " " << endl;

    return 0;
}

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
    int n , item,insert, insertEnd, insertItem , pos, Itemtodelete, posDelete , Itemtoupdate,  posUpdate ;

    cout << "enter size of array" << endl;
    cin>> n;

    int arr[n];

    cout << "Fill your array, enter " << n << " items" <<  endl ;
    
    for(int i=0;i<n;i++){ 
        cin>>arr[i];
    } 

    for(int i=0;i<n;i++){
        cout << "[" << arr[i] << "]" ;
    } 

    cout<< " " << endl;

    // SEARCH

    // cout << "enter item you want to find" << endl;
    // cin >> item ;

    // search( arr, item, n);

    // INSERT

    // cout << "enter item you want to insert in the beginng" << endl;
    // cin >> insert ;

    // insertBeginning(arr , insert, n); 

    // cout << "enter item you want to insert at the end" << endl;
    // cin >> insertEnd ;

    // insertAtEnd(arr , insertEnd, n); 

    // cout << "enter item you want to insert at specific position" << endl;
    // cin >> insertItem ;

    // cout << "enter postion you want to insert it at " << endl;
    // cin >> pos ;

    // insertAtPos(arr , insertItem, n , pos); 

    // DELETE
 
    // cout << "enter item you want to delete at specific position" << endl;
    // cin >> Itemtodelete ;

    // deleteItem(arr , Itemtodelete, n ); 

    // cout << "enter postion you want to delete it at " << endl;
    // cin >> posDelete ;

    // deleteAtPos(arr , posDelete , n); 

    // UPDATE

    // cout << "enter postion you want to update at" << endl;
    // cin >> posUpdate ;

    // cout << "enter element you want to update to" << endl;
    // cin >> Itemtoupdate ;

    // UpdateAtPos(arr , posUpdate , Itemtoupdate , n); 
       

    return 0;
}
