#include <iostream>
using namespace std;

int main()
{
    int first_largest = 0;
    int second_largest = 0;
    int myArray[5] = {44, 5, 23, 67, 12};
    for(int i = 0; i < 5; i++){
        if(myArray[i] > first_largest){
            second_largest = first_largest;
            first_largest = myArray[i];
        }
        else if(myArray[i] > second_largest){
            second_largest = myArray[i];
        }
    }
    
    cout<<"first largest element in array is: "<<first_largest<<endl;
    cout<<"second largest element in array is: "<<second_largest;
    
}
