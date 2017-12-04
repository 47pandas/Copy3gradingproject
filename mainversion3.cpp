#include<iostream>
#include<string>
#include<fstream>
#include<vector>

//using namespace std;

//std::ifstream input;

/////////////Class Grades Start/////////////////
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

/////////////Class Students Start////////////////
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
 

Course::Course(const std::string& filename)
{
     
}

Students Course::get_student(std::string id)
{
  std::string stuid, grade;
  for(int i = 0;i<5;i++)
  {
    {
      std::ifstream input1("csc1.txt");
      input1 >> stuid; 
      input1 >> grade;
      std::cout << "Student " << stuid << std::endl;
      std::cout << "CSC1 Grade is: " << grade << std::endl;
    }
  
    {
      std::ifstream input1("cis201.txt");
      input1 >> stuid;
      input1 >> grade;
      std::cout << "CIS201 Grade is: " << grade << std::endl;
    }
  
    {
      std::ifstream input1("eng108.txt");
      input1 >> stuid;
      input1 >> grade;
      std::cout << "ENG108 Grade is: " << grade << std::endl;
    }
 
    {
      std::ifstream input1("math90.txt");
      input1 >> stuid;
      input1 >> grade;
      std::cout << "MATH90 Grade is: " << grade << std::endl;
    }
  
    {
      std::ifstream input1("psy201.txt");
      input1 >> stuid;
      input1 >> grade;
      std::cout << "PSY201 Grade is: " << grade << std::endl;
    }
  }    
    /*
    std::ifstream input;
    
    input.open("csc1.txt");
    
    
    if(!input.fail())
    {
        while(!input.eof())
        { 
            std::string student_id;
            std::string grade;
            input >> student_id;
            input >> grade;
            if(input.eof())
              break;
          //  std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
            std::cout << "The id is: " << student_id << std::endl;
            std::cout << "CSC1 Grade is:  " << grade << std::endl;
           // std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
        }
    }
    
   input.close();
    class2.open("csc1.txt");
    
    if(!class2.fail())
    {
        while(!class2.eof())
        { 
            std::string student_id2;
            std::string grade2;
            class2 >> student_id2;
            class2 >> grade2;
            if(class2.eof())
              break;
            //std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
            //std::cout << "The id is: " << student_id << std::endl;
            std::cout << "CIS201 Grade is:  " << grade2 << std::endl;
            //std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << std::endl;
            //int thing;
            //std::cin >> thing;
        }
    }
*/
}

void Course::add_grades(Students & stu)
{

}

/////////////Class Course End/////////////////////


int main()
{
  
  Course classes("classes.txt");
  //please.list_students();
  //please.select_student();
  std::vector<std::string> students;
  students.push_back("00001");
  //students.push_back("00002");
  //students.push_back("00003");
  //students.push_back("00004");
  //students.push_back("00005");
  for(int i=0;i<students.size();i++)
  {
    Students s = classes.get_student(students[i]);  // extract the student data from the files that the class container will open
    s.print();  // print the student
  }

return 0;
}

