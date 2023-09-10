#include <iostream>
#include <string>
using namespace std;

void Method1();
void Method2();
void Method3();

int main ()
{    
    const int SIZE = 6;
    string Names[SIZE] =  { "Name1", "Name2", "Name3", "Name4", "Name5", "Name6" };
    
    cout << "In Main " << endl;
    
    for (int index = 0; index < SIZE ; index++)
    {          
       cout << Names[index] << endl;
    }

    Method1();
    cout << "In Main " << endl<<endl;
    Method3();
    cout << "In Main " << endl<<endl;

    std::cout <<"Press a key to exit" << endl; 

    return 0;

}

void Method1()
{ 
    cout << ("Break Point in Method1") << endl;
    Method2();
}

void Method2()
{
    cout <<("Break Point in Method2") << endl;  // BreakPoint
    cout <<("Break Point in Method2") << endl;  // BreakPoint
}

void Method3()
{
    cout <<("Break Point in Method3")<< endl;  // Breakpoint
}
