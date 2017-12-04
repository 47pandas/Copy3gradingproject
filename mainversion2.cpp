#include<iostream>
#include<string>
#include<fstream>
#include<vector>

//using namespace std;

//std::ifstream input;

class Grades
{
  public:
    Grades(const std::string& course,const std::string& grade);
    std::string get_course();
    std::string get_grade();
    void print() const;
  private:
    std::string m_course;
    std::string m_grade;
};

class Students
{
  public:
    Students(const std::string& id);
    //void list_students();
    //std::string select_student();
    std::vector<Grades> get_grade();
    void add_grade(const Grades& grade);
    void print() const;
  private:
    std::string studentid;
    std::vector<Grades> m_grades;
};

class Course
{
  public:
    Course(const std::string& filename);
    std::vector<std::string> get_classes();
    Students get_student(std::string id);
    void add_grades(Students & stu);
  private:
    std::vector<std::string> m_classes;
};
 
int main()
{
  
  Course classes("classes.txt");
  //please.list_students();
  //please.select_student();
  std::vector<std::string> students;
  students.push_back("00001");
  students.push_back("00002");
  students.push_back("00003");
  students.push_back("00004");
  students.push_back("00005");
  for(int i=0;i<students.size();i++)
  {
    Students s = classes.get_student(students[i]);  // extract the student data from the files that the class container will open
    s.print();  // print the student
  }

return 0;
}

/////////////Class Students Start////////////////
Students::Students(const std::string& id)
{

}

/*void Students::list_students()
{
   std::cout << "List of current students" << std::endl;
   input.open("StudentIDs.txt");
       if(!input.fail())
    {
        while(!input.eof())
        {
            std::string student_id;
            input >> student_id;
            if(input.eof())
              break;
            std::cout << "The id is: " << student_id << std::endl;
        }
    }
}*/

/*std::string Students::select_student()
{
  std::cout << "Please enter Student ID ";
  std::string id;
  getline(std::cin, id);
  //Code goes here
  std::cout << "Information Processing " << id << std::endl;
  //^^^^^
  return id;
}*/


void Students::add_grade(const Grades& grade)
{

}    

void Students::print() const
{

}
/////////////Class Students End///////////////////
/////////////Class Course Start///////////////////
Course::Course(const std::string& filename)
{
     
}

Students Course::get_student(std::string id)
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
    classes.close;
}

void Course::add_grades(Students & stu)
{

}

/////////////Class Course End/////////////////////
/////////////Class Grades Start/////////////////
Grades::Grades(const std::string& course,const std::string& grade)
{
  
}
    
std::string Grades::get_course()
{
  std::cout << "getting course" << std::endl;
}

std::string Grades::get_grade()
{
  std::cout << "getting grades" << std::endl;
}
void Grades::print() const
{
  std::cout << "Print function" << std::endl;
}
/////////////Class Grades End///////////////////