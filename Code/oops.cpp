#include <iostream>
#include <cmath>
using namespace std;



class Employee{
private:
    string Name;
    string Company;
    int Age;

public: 
    void setName(string name){ //setter------------------
        Name = name;
    }
    string getName(){   //getter---------------------
        return Name;
    }

     void setCompany(string company){ //setter------------------
        Company = company;
    }
    string getCompany(){   //getter---------------------
        return Company;
    }

     void setAge(int age){ //setter------------------
        Age = age;
    }
    int getAge(){   //getter---------------------
        return Age;
    }

    


    void introduceYourself(){
        cout << "Name : " << Name << endl;
        cout << "Company : "<< Company << endl;
        cout << "Age : " << Age << endl;
    }
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;

    }
};

int main(){

    Employee employee1 = Employee ("Shreyansh", "Amazon", 22);
    employee1.introduceYourself();

    employee1.setAge(25);
    std :: cout << employee1.getName() << " is " << employee1.getAge() << " years old." << std:: endl;
    
    return 0;
}