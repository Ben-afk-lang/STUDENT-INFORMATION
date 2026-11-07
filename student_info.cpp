#include <iostream>
#include <string>

int main() 
{
    std::string name;
    int age = 0;
    int math = 0;
    int science = 0;
    int english = 0;
    int average = 0;
    std::string status = "PASSED";

    std::cout << "===== STUDENT INFORMATION =====" << std::endl;
    std::cout << "\n";

    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "\n";
    
    std::cout <<  "Enter your age: ";
    std::cin >> age;
    std::cout << "\n";
    std::cout << "\n";

    std::cout << "===== SUBJECT GRADES =====" << std::endl;
    std::cout << "\n";

    std::cout << "Math: ";
    std::cin >> math;
    std::cout << "\n";

    std::cout << "Science: ";
    std::cin >> science;
    std::cout << "\n";

    std::cout << "English: ";
    std::cin >> english;
    std::cout << "\n";

    double total = (math + science + english) / 3;

    if (total >= 75) {
        status = "PASSED";
    } else {
        status = "FAILED";
    }

    std::cout << "===== RESULT =====" << std::endl;
    std::cout << "\n";
    std::cout << "Student: " << name;
    std::cout << "\n";
    std::cout << "Age: " << age;
    std::cout << "\n";
    std::cout << "Average: " << total;
    std::cout << "\n";
    std::cout << "\n";
    
    std::cout << "Status: " << status;
    return 0;
}
