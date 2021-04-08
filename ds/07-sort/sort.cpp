#include<iostream>
using namespace std;

int swapItem(int x , int y){
    int temp;

    temp = x;
    x = y;
    y = temp;

    return x , y;
}

int merge(int* arr1 , int* arr2){

    

    int len1 = sizeof(arr1)/sizeof(arr1[0]);
    int len2 = sizeof(arr2)/sizeof(arr2[0]);

    int array[len1 + len2];

    int count = 0;

    int 

    while(count <= len1 + len2 ){





    

        if(arr1[i] > arr2[j]){
arr[]
        }

    }


     

}

int mergeSort(int array , int start, int end){

    if (start > end ){
        return array;
    }else{
     int mid = (start + end)/2;
     int subArray1 =   mergeSort(array, start , mid -1);
     int subArray2 =   mergeSort(array, mid , end);

     return merge(&subArray1 , &subArray2);
    }

}

int main(){

    int n;
    int option;
    int insert;

    cout << "enter size of array" << endl;
    cin>> n;

    int arr[n];
    cout << "Fill your array, enter " << n << " items" <<  endl ;
    
    for(int i=0;i<n;i++){ 
        cin>>arr[i];
    }

    
    
    do{

        cout << "Press 1 for bubble sort\nPress 2 for selection sort\nPress 3 for insertion sort\nPress 4 for shell sort\n" ;
        cin >> option;

        if (option == 1){
            // bubble sort 

            for (int i = 0; i < n; i++){

                for (int j = 0;j < n-1-i ; j++){

                    if(arr[j+1]<arr[j]){
                        int temp = arr[j+1];
                        arr[j+1] = arr[j];
                        arr[j] = temp;
                        
                    }
                }

                   for(int i=0;i<n;i++){
                            cout << "[" << arr[i] << "]" ;
                        }

                        cout << endl;
            }

            cout << "This is your array , sorted by bubble sort, trust me!" << endl;

            for(int i=0;i<n;i++){
                    cout << "[" << arr[i] << "]" ;
            }

            cout << endl;
        }

        if(option == 2){
            // selection sort 

            

            for (int i = 0 ; i < n ; i++ ){
                int minIndex  = i;

                for(int j = i ; j < n ; j++){
                
                    if(arr[minIndex] > arr[j]){
                        minIndex = j;
                        }
                    }

                    int temp = arr[minIndex];
                    arr[minIndex] = arr[i];
                    arr[i] = temp;

                    for(int i=0;i<n;i++){
                            cout << "[" << arr[i] << "]" ;
                        }

                        cout << endl;

                }

                cout << "This is your array , sorted by selection sort, trust me!" << endl;

                        for(int i=0;i<n;i++){
                            cout << "[" << arr[i] << "]" ;
                        }

                        cout << endl;

        }

        if(option == 3){
            // insertion sort

            for(int i = 1; i < n ; i++ ){

                insert = arr[i];

                for(int j =  0 ; j < i ; j++){

                 if(   arr[j] > insert){
                        int temp = arr[j];
                        arr[j] = arr[i];
                        arr[i] = temp;

                    }
                }

                for(int i=0;i<n;i++){
                            cout << "[" << arr[i] << "]" ;
                        }

                        cout << endl;

             
            }

              cout << "This is your array , sorted by insertion sort, trust me!" << endl;

                        for(int i=0;i<n;i++){
                            cout << "[" << arr[i] << "]" ;
                        }

                        cout << endl;

        }

        if(option == 4){
            // shell sort

            int gap = n;

            while (gap>0){

                gap = int(gap/2);



            for (int i = 0 ; i < n-gap ; i++){
                if(arr[i] > arr[i+ gap]){

                    int temp = arr[i];
                    arr[i] = arr[i + gap];
                    arr[i+gap] = temp;

                }
              }

                for(int i=0;i<n;i++){
                            cout << "[" << arr[i] << "]" ;
                        }

                        cout << endl;

            }

            for(int i = 1; i < n ; i++ ){

                insert = arr[i];

                for(int j =  0 ; j < i ; j++){

                 if(   arr[j] > insert){
                        int temp = arr[j];
                        arr[j] = arr[i];
                        arr[i] = temp;

                    }
                }

                for(int i=0;i<n;i++){
                            cout << "[" << arr[i] << "]" ;
                        }

                        cout << endl;

             
            }

              cout << "This is your array , sorted by insertion sort, trust me!" << endl;

                        for(int i=0;i<n;i++){
                            cout << "[" << arr[i] << "]" ;
                        }

                        cout << endl;

            
        }

        if(option == 5){
            // merge sort 







            
        }


        


    }while(option!= 0 );
    




    return 0;
}