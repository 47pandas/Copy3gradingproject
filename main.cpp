/*
 Name: Nathan Emigh
 Email: 47Pandas@gmail.com
 Professor: Tonning
 Description:
*/
#include<iostream>
#include<string>
#include<fstream>

class Student
{
    public:
      Student();
      void print();
      void read();
    
    private:
    
};

class Courses
{
    public:
      Courses();
    
    private:

};
void process_student(std::string id)
{
    std::ifstream classes;
    std::cout << "Opening classes.txt " << std::endl;
    classes.open("classes.txt");
    std::cout << "Opened classes.txt " << std::endl;
    std::cout << " ----------- " << std::endl;
    std::cout << "Starting While loop " << std::endl;
    while(!classes.eof())
    {
        std::cout << "creating string classname " << std::endl;
        std::string classname;
        std::cout << "getline start " << std::endl;
        std::getline(classes,classname);
        std::cout << "if statement break start " << std::endl;
        if(classes.eof())
            break;
        std::cout << "ifstream class_file created " << std::endl;
        std::ifstream class_file;
        std::cout << " connecting txt to open class file " << std::endl;
        classname += ".txt";
        std::cout << "opening class file " << std::endl;
        class_file.open(classname.c_str());
        std::cout << "starting if statement if it doesnt fail " << std::endl;
        if(!class_file.fail())
        {
            std::cout << "will open the class file: " << classname << std::endl;
            std::cout << "and will look for the student id: " << id << std::endl;
            std::cout << "it will then get the grade from the line that the " << std::endl;
            std::cout << "id is on, to then use that to build the report. : " << std::endl;
        }
        else
        {
            std::cout << "The file " << classname << " cannot be opened" << std::endl;
        }
    }

}

int main()
{
    std::cout << "running Main" << std::endl;
    std::string student_id;
    
    student_id = "00001";
    std::cout << "Processes student started " << std::endl;
    process_student(student_id);
    std::cout << "Processing student finished " << std::endl;
    return 0;
}