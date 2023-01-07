#include <iostream>
using namespace std;

//insertion sort
/*
example input:
5
4 9 2 4 1

example output:
1 2 4 4 9
*/

/*
how insertion sort works:
it basically keeps a value and than compares it with the ones next to it until its sorted.
example: 6 7 5
it would take the 5 all the way down
example sorted: 5 6 7
*/

/*
insertion(array, size of array){
for(int i){
//use this for going through all the array elements;
while(true){
going through individual elements;
true if not sorted
}
}
//find way to return values.
}

Idea:
main{
int arr = unsorted array
call insertion, call selection
output
}
*/
// void insertion(int arr[], int size){
//   for(int i = 2; i<size-1; i++){
//     bool flag = false;
//     //how?
//     //use j
//     int j = i;
//     while(flag == false){
//       cout<<"Lol"<<arr[j]<<" "<<arr[j-1]<<" "<<arr[j+1]<<endl;
//       if(arr[j]<arr[j-1]){
//         cout<<"\n2";
//         int temp = arr[j];
//         arr[j] = arr[j-1];
//         arr[j-1] = arr[j];
//         j--;
//         continue;
//       }
//       if(arr[j]>arr[j+1]){
//         cout<<"\n3";
//         int temp = arr[j];
//         arr[j] = arr[j+1];
//         arr[j+1] = arr[j];
//         continue;
//       }
//       flag = true;
//     }
//   }
//   return;
// }

void insertion(int arr[], int size){
  for(int i = 0; i<size-1; i++){
    int j = size-i-1;
    while(j>0){
      // cout<<"Lol"<<arr[j]<<" "<<arr[j-1]<<" "<<arr[j+1]<<endl;
      if(arr[j]>arr[j+1] and arr[j+1]!=0){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        return insertion(arr, size);
        continue;
      }
      if(arr[j]<arr[j-1] and arr[j-1]!=0){
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
        j--;
        return insertion(arr, size);
        continue;
      }
      break;
    }
  }
}

/*
selection sort:
finds smallest value, then pushes it to the front!!!
*/

void selection(int arr[], int size){
  for(int i = 0; i<size-1; i++){
    int min = i;
    for(int j = size-1; j>i; j--){
      // cout<<"Lol"<<arr[j]<<" "<<arr[min]<<endl;
      if(arr[j]<arr[min]){
        min = j;
      }
    }
    if(min>i){
      int temp = arr[i];
      arr[i] = arr[min];
      arr[min] = temp;
    }
    //make while loop to find smallest value???
    // int j = i;
    // int k = size-i-2;
    // int temp = size-i-1;
    // int j = size-1;
    // int temp = arr[i];
    // int temp2;
    // while(j>i){
    //   cout<<"Lol"<<arr[j]<<" "<<arr[temp]<<endl;
    //   temp = min(arr[j], temp);
    //   temp2 = j;
    //   j--;
    // }
    // arr[temp2] = arr[i];
    // arr[i] = temp;
    // cout<<arr[temp2];
    // while(temp>=i){
    //   cout<<"Lol"<<arr[j]<<" "<<arr[temp]<<endl;
    //   int temp2 = arr[j];
    //   arr[j] = min(arr[temp], arr[j]);
    //   arr[temp] = temp2;
    //   temp--;
    //   // k--;
    // }
  }
  return;
}

//example sort
// void insertion(int arr[], int size){
//   for(int i = 0; i<size-1; i++){
//     bool flag = false;
//     int j = i+1;
//     while(j!=0 and j<5-1){
//       // cout<<"Lol"<<arr[j]<<" "<<arr[j-1]<<" "<<arr[j+1]<<endl;
//       if(arr[j]>arr[j+1]){
//         int temp = arr[j];
//         arr[j] = arr[j+1];
//         arr[j+1] = temp;
//         continue;
//       }
//       if(arr[j]<arr[j-1]){
//         int temp = arr[j];
//         arr[j] = arr[j-1];
//         arr[j-1] = temp;
//         j--;
//         continue;
//       }
//       break;
//     }
//   }
// }

//selection sort

int main() {
  //5-1-3 = 1
  int arr[5] = {4, 9, 2, 4, 1};
  int arr2[5] = {3, 9, 8, 2, 1};
  cout<<"Input:\n";
  for(int i = 0; i<5; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  for(int i = 0; i<5; i++){
    cout<<arr2[i]<<" ";
  }
  cout<<"\nOutput:"<<endl;
  insertion(arr, 5);
  selection(arr2, 5);
  for(int i = 0; i<5; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  for(int i = 0; i<5; i++){
    cout<<arr2[i]<<" ";
  }
}