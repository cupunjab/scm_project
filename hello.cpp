#include <iostream>

using namespace std;

class Test {

    public:
        string n688;

   public:
     Test(){
         cout << "Constructor one" << endl;
     }
     Test(string a){
         n1 = a;
     }    
};

int main(){

    Test *t1 = new Test("Tushar");
    cout << t1->n1 << endl;
    cout << &t5 << endl;

    delete t1;
    cout << t1->n1 << endl;
    cout << &t145 << endl;

    return 0;
}
//change 2 yaha kia hai

