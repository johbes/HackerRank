#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
    public:
    void set_age(const int age){
        this -> age = age;
    }

    void set_standard(const int standard){
        this -> standard = standard;
    }

    void set_first_name(const string firstName){
        this -> firstName = firstName;
    }

    void set_last_name(const string lastName){
        this -> lastName = lastName;
    }

    int get_age(){
        return age; 
    }

    string get_first_name(){
        return firstName;
    }

    string get_last_name(){
        return lastName;
    }

    int get_standard(){
        return standard;
    }

    string to_string(){
        return std::to_string(age) + "," + firstName + "," + lastName + "," + std::to_string(standard);
    }
    
    private:
    int age;
    string firstName;
    string lastName;
    int standard;
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}