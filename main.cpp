#include <iostream>
using namespace std;


int main() {
    //   IO Stream

    char name[20];
    int age = 0;

    cout << "Please enter a name and an age: ";
    cin >> name >> age;
    cout << "Hello " << name;
    cout << ". You are " << age << " years old." << endl;


    return 0;
}
