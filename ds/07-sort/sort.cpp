#include<iostream>
using namespace std;


int merge(int *array, int start, int mid, int end) {
   int i, j, k, len1, len2;

   len1 = mid+1-start;
   len2 = end-mid;
   int arr1[len1], arr2[len2];


   for(i = 0; i<len1; i++){
      arr1[i] = array[start+i];
   }

   for(j = 0; j<len2; j++){
      arr2[j] = array[mid+1+j];
   }

   i = 0; 
   j = 0; 
   k = start;

   while(i < len1 && j<len2) {
      if(arr1[i] <= arr2[j]) {
         array[k] = arr1[i];
         i++;
      }else{
         array[k] = arr2[j];
         j++;
      }
      k++;
   }
   while(i<len1) {       
      array[k] = arr1[i];
      i++; k++;
   }
   while(j<len2) {     
      array[k] = arr2[j];
      j++; k++;
   }

return 0;

}


int mergeSort(int* array , int start, int end){

int mid;

    if (start >= end ){
        return 0;
    }else{

        mid = (start +end) /2;

        mergeSort(array, start, mid);
        mergeSort(array, mid+1, end);

    merge(array, start, mid, end);

     return 0;
    }

}

int quickSort(int* arr, int pivot, int p, int q){

    if(arr[p]>arr[pivot]){

       int temp = arr[p];
       arr[p] = arr[pivot];
       arr[pivot] = temp;
    
    }else{
     p++;
    }

    if(arr[q]<arr[pivot]){

       int temp = arr[q];
       arr[q] = arr[pivot];
       arr[pivot] = temp;
    
    }else{
     q++;
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

        cout << "Press 1 for bubble sort\nPress 2 for selection sort\nPress 3 for insertion sort\nPress 4 for shell sort\nPress 5 for merge sort\nPress 6 for quick sort\n" ;
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

        mergeSort(arr, 0, n-1);

         cout << "This is your array , sorted by merge sort, trust me!" << endl;

                        for(int i=0;i<n;i++){
                            cout << "[" << arr[i] << "]" ;
                        }

                        cout << endl;
            
        }

        if(option == 6){

    int pivot = 0 ;
    int p = 0;
    int q = n; 

        quickSort(arr, pivot, p, q)

        }


        


    }while(option!= 0 );
    




    return 0;
}