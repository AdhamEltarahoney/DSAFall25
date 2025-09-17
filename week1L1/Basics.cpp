#include <iostream>
#include <vector>
using namespace std;

// creating functions
// lets create a function that adds 2 integers
int add(int a, int b){
    return a+b;
}

int main() {
    // cout << "Hello World!"<< endl;

    // // # a variable that stores an integer
    // int age = 0;
    // float GPA = 3.5;
    // char grade = 'A';
    // // input and output
    // cout << "WHat is your age? "<<endl;
    // cin >> age;
    // cout << "You entered age as: "<< age<<endl;
    // // declaring an array
    // // array of integers
    // static arrays
    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++){
        cout << arr[i] << " ";

    }
    cout<<endl;
    // create dynamic arrays
    // In c++, you create dynamic arrays through the usage of vectors

    // vector<int> nums = {10, 20, 30, 40};
    // // you can also insert elements using the .push_back function
    // nums.push_back(50);
    // // now nums = 10, 20, 30, 40, 50

    // cout<< "the vector elements are: "<<endl;

    // for (int n : nums){
    //     cout<< n<< endl;
    // }
    
    // for num in nums:
    //     print num (python equivelant)

    // // conditional statements
    // int age = 30;
    // if (age >= 18){
    //     cout<< "you are an adult"<<endl;
    // }
    // else{
    //     cout<<"You are not an adult"<<endl;
    // }
    // // implementing while loops
    // int count = 5;
    // while (count > 0){
    //     cout<<count<<endl;
    //     count -= 1;
    // }
    cout<< "The addition between 3 and 4 is: "<<add(3, 4)<<endl;


    
    return 0;
}
