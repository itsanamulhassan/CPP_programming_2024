#include <bits/stdc++.h>
using namespace std;
class Person {
    public: 
    string name;
    int age;
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
    void print(){
        cout << "Will you marry me?" << endl;
    }
};
int main()
{
    Person lata("Lata", 32);
    cout << lata.name << " " << lata.age << endl;
    lata.print();


return 0;
}