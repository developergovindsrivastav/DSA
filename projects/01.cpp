#include <iostream>
using namespace std;
class empolyee
{
public:
    int id;
    string name;
    float salary;
    float workinghours;
    float experience;
    string post;
    float pension;
    friend void displayofemployee(empolyee o1);
    empolyee(int id, string name, string post, int experience, float workinghours, float salary)
    {
        this->id = id;
        this->workinghours = workinghours;
        this->experience = experience;
        this->name = name;
        this->salary = salary;
        this->post = post;
    }
    void pensioncalculate()
    {
        if (experience > 5)
        {
            pension = salary * 0.1;
        }
        else
        {
            pension = salary * 0.05;
        }
    }
};

class programmer : public empolyee
{
public:
    string language;
    bool isdsaknow;
    friend void displayofprogrammer(programmer o2);
    programmer(int id, string name, int experience, float workinghours, float salary, string language, bool isdsaknow) : empolyee(id, name, post, experience, workinghours, salary)
    {
        this->language = language;
        this->isdsaknow = isdsaknow;
        if (isdsaknow == true)
        {
            salary = salary + 5000;
        }
    }
};
void displayofemployee(empolyee o1)
{
    cout << "The id of employee is: " << o1.id << endl;
    cout << "The name of employee is: " << o1.name << endl;
    cout << "The post of employee is: " << o1.post << endl;
    cout << "The experience of employee is: " << o1.experience << endl;
    cout << "The working hours of employee is: " << o1.workinghours << endl;
    cout << "The salary of employee is: " << o1.salary << endl;
    cout << "The pension of employee is: " << o1.pension << endl;
}
void displayofprogrammer(programmer o2)
{
    cout << "The language of programmer is: " << o2.language << endl;
    cout << "The id of employee is: " << o2.id << endl;
    cout << "The name of employee is: " << o2.name << endl;
    cout << "The post of employee is: " << o2.post << endl;
    cout << "The experience of employee is: " << o2.experience << endl;
    cout << "The working hours of employee is: " << o2.workinghours << endl;
    cout << "The salary of employee is: " << o2.salary << endl;
    cout << "The pension of employee is: " << o2.pension << endl;

    cout << "The isdsa of programmer is: " << o2.isdsaknow << endl;
}
int main()
{
    empolyee haris(1000, "Haris", "Manager", 4, 9, 50000);
    haris.pensioncalculate();
   displayofemployee(haris);

    return 0;
}