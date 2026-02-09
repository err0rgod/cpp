#include <iostream>
#include <string>
using namespace std;
class teacher{
private:
    float salary;
public:
    teacher(string name,string dept, string subject, float salary){
        this-> name = name;
        this-> dept = dept;
        this->salary =salary;
        this->subject = subject ;
    }
    //data / 
    string name;
    string dept;
    string subject;
    //memeber functions / methods
    void changedept(string newdept){
        dept = newdept;
    }

    //setter function
    void setsal(float s){
        salary = s;
    }

    //getter function
    float getsal(){
        return salary;
    }
};

int main()
{
    teacher t1("Nirbhay" ,"CS","C++",300000);
    cout << t1.name<<endl;
    return 0;
}