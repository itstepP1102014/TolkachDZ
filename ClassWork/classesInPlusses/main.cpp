#include <iostream>

using namespace std;
        /*
class Persona
{
private:
        char name[128];
        int age;
        enum Sex {male, female} sex;
public:
        char * whatIsYourName()const;
        int howOldAreYou()const;
        void celebrateBirthday();
        Persona(char name[128], int age, Sex sex);

};

int main()
{


Persona vasia("VasiaIvanov", 22, Sex::male);

cout<<vasia.whatIsYourName();
cout<<vasia.howOldAreYou();
vasia.celebrateBirthday();

return 0;
}

            */



    /* // решение для гибкости интерфейса
class A
{
public:
    int &x();

private:
    int x_;

};

int &A::x()
{
    return x_;
}

int main()
{
    A a;
    a.x()=5;
    cout<<a.x();
    return 0;
}
        */

     /*   //class A in new life  не получится счётчик на обращение к "х"

class A
{
public:
    int x;
};

int main()
{
    A a;
    a.x=5;
    cout<<a.x;
    return 0;
}

*/

























