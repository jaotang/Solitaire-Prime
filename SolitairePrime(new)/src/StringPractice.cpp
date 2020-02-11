#include "StringPractice.h"
#include <iostream>
#include <string>

using namespace std;

StringPractice::StringPractice()
{
    name = "placeholder";
    message = "sample text";
}


void StringPractice::getInput(string n, string msg){

    name = n;
    message = msg;

}
void StringPractice::displayMessage(){
    cout << name << " " << message << endl;
}
