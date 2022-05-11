#include <iostream>

using namespace std;

class Student
{
public:
    string name;
    int rno;
public:

    Student(){
        name = "Tanya";
        rno = 2;
    };

    void showName(){
        cout << name<<endl;
    }
    void showRollno()
    {
      
        cout<<rno<<endl;
    }
};
int main()
{
   Student s1;
     s1.showName();
     s1.showRollno();
        
    return 0;
}