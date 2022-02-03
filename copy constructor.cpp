#include <iostream>

using namespace std;

class Number
{
        int num = 0;

public:
        Number(){};

        Number(int a) { num = a; };

        //when no copy constructor is found , compiler supplies its own copy constrctor
        Number(Number &obj)
        {
                cout << "copy constructor called\n";
                num = obj.num;
        }

        void display()
        {
                cout << "your number is  " << num << endl;
        };
};

int main()
{

        //declaring + defining at the same time of object - invoked the copy constructor

        Number x; //ERRO if default construtor not present this will show error

        Number z(400);
        z.display();

        x = z; //copy constructor not involved
        x.display();

        cout << endl;

        Number y(x); //copy constructor invoked
        y.display();

        cout << endl;
        Number z2 = y;
        z2.display();

        return 0;
}