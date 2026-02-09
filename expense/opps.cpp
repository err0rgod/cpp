#include <iostream>
#include <string>
using namespace std;
class teacher{
private:
    float salary;
public:
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
    teacher t1;
    teacher t2;
    t1.name = "Nirbhay";
    t1.dept = "CS";
    t1.subject = "C++";
    t1.setsal(200000);
    cout<<t1.getsal()<<endl;
    t1.getsal();
    return 0;
}