#include<iostream>
using namespace std;

int main(){

    int row , col;

        cout << "enter the number of rows " << endl;
        cin>> row;

            cout << "enter the number of columns " << endl;
            cin>> col;

            int arr[row][col];

            int sparse[3][100];
            int sparseColumnPointer = 0;

            cout << "Fill your array, enter " << row*col << " items, column wise" <<  endl ;
    
            for(int i=0;i<row;i++){ 
                for(int j=0;j<col;j++){
                cin>>arr[i][j];
                }
            } 

            cout<< endl << " you entered " << endl;

              for(int i=0;i<row;i++){ 
                for(int j=0;j<col;j++){
                    cout << " [ " << arr[i][j] << " ] " ;
                }
                cout<<"\n";
            } 


        

            for(int i=0;i<row;i++){ 
                for(int j=0;j<col;j++){
                    if(arr[i][j] != 0){
                      sparse[0][sparseColumnPointer] = i;
                      sparse[1][sparseColumnPointer] = j;
                      sparse[2][sparseColumnPointer] = arr[i][j];

                      cout << "i: " << i << " j: " << j << " val : " << arr[i][j] << endl   ;

                      sparseColumnPointer++;
                    }
                }
                cout<<"\n";
            }

               cout << endl << "your sparse matrix is" << endl;

               for(int i=0;i<3;i++){ 
                for(int j=0;j<sparseColumnPointer;j++){
                     cout << " [ " << sparse[i][j] << " ] " ;
                }
                cout<<"\n";
            }  




    return 0;
}

