#include <iostream>

class MyClass{
    private:
        int age;
        std::string name;
        std::string company;
    public:
        void IntroduceYourSelf()
        {
            std::cout << "Name - " << name << std::endl;
            std::cout << "Company - " << company << std::endl;
            std::cout << "Age - " << age << std::endl;
        }
        //Constructor

        MyClass(int Age, std::string Name, std::string Company)
        {
            age = Age;
            name = Name;
            company = Company;
        }
        // getters and setters
        void setAge(int Age)
        {
            age = Age;
        }
        int getAge()
        {
            return (age);
        }
        void setName(std::string Name)
        {
            name = Name;
        }
        std::string getName()
        {
            return name;
        }
        void setCompany(std::string Company)
        {
            company = Company;
        }
        std::string getCompany()
        {
            return company;
        }
};

int main()
{
    MyClass obj1 = MyClass(25, "Saldina", "YT-CodeBeauty");
    obj1.IntroduceYourSelf();

    obj1.setAge(22);
   obj1.setName("fred");
    std::cout<< obj1.getName()<< " is " << obj1.getAge() << " years old " << " works in " << obj1.getCompany()<< std::endl;

    return (0);
}
