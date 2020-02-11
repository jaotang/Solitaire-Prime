#ifndef STRINGPRACTICE_H
#define STRINGPRACTICE_H
#include <string>

using namespace std;
class StringPractice
{
    private:
        string name;
        string message;

    public:
        StringPractice();
        void getInput(string , string);
        void displayMessage();

};

#endif // STRINGPRACTICE_H
