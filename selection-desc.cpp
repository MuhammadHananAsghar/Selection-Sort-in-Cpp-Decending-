// CREATED BY MUHAMMAD HANAN ASGHAR
// PYTHONIST
#include <iostream>
using namespace std;

class SelectionSort{
  private:
  int *arr;
  int arraySize;
  public:
  SelectionSort(int size){
    arr = new int[size];
    arraySize = size;
  }
  void Insert(){
    for(int i=0;i<arraySize;i++){
      cout<<"Enter Data - "<<i<<" : ";
      cin>>arr[i];
    }
  }
  void Display(){
    for(int i=0;i<arraySize;i++){
      cout<<arr[i]<<" - ";
    }
  }
  void Sort(){
    int min,loc,j=0;
    int temp;
    for(int i=0;i<(arraySize-1);i++){
      min = arr[i];
      loc = i;
      for(j = i+1;j<arraySize;j++){
        if(min<arr[j]){
          min = arr[j];
          loc = j;
        }
      }
      temp = arr[i];
      arr[i] = arr[loc];
      arr[loc] = temp;
    }
  }
};

int main() {
  SelectionSort s(5);
  s.Insert();
  cout<<endl;
  s.Display();
  cout<<endl;
  s.Sort();
  cout<<endl;
  s.Display();
}
