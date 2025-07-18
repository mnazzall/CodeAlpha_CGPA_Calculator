#include <iostream>
#include <iomanip>
using namespace std;



int main() {
    
    int numOfCoursesTaken = 0;
    
    cout<<"Enter the number of courses taken this semester: ";
    
    cin>> numOfCoursesTaken;
    
    
    int creditHour = 0; 
    float grade = 0.0; 
    
    int creditHours[numOfCoursesTaken];
    float grades[numOfCoursesTaken];
    
    int totalCredits = 0;
    float totalGradePoints = 0.0;
    
    
    for (int i = 0; i < numOfCoursesTaken; i++)
    {
    cout << "Enter the number of credit hours for course " << i + 1 << ": ";
    cin >> creditHour;

    cout << "Enter your grade in this course out of 4.0: ";
    cin >> grade;

    if (grade == 0.0)  
    {
        
        cout << "This course will be excluded from GPA calculation.\n";
        continue;  
    }

    creditHours[i] = creditHour;
    grades[i] = grade;

    totalCredits += creditHour;
    totalGradePoints += creditHour * grade;
    }

    float gpa = totalGradePoints / totalCredits;
    
    cout << fixed << setprecision(2);
   
    cout<<"Your GPA for this semester is "<<gpa<<endl;
    
    
    int passedHours = 0, newHours = 0;
    float previousCgpa = 0.0;
    
    cout<<"Enter your passed hours: ";
    cin>>passedHours;
   
   if(passedHours > 0)
   {
    cout<<"Enter your previous CGPA: ";
    cin>>previousCgpa;
   }   
   
    float cgpa = 0.0, totalCGPAgradePoints = 0.0, allTotalPoints = 0.0;
   
    if(previousCgpa == 0)
    {
        cgpa = gpa;
        
        cout << fixed << setprecision(2);
        
        cout<<"Your CPGA is "<<cgpa<<endl;
    }
    else
    {
        totalCGPAgradePoints = passedHours * previousCgpa;
        
        newHours = passedHours + totalCredits;
        
        allTotalPoints = totalCGPAgradePoints + totalGradePoints;
        
        cgpa = allTotalPoints / newHours;
        
        cout << fixed << setprecision(2);
        
        cout<<"Your CPGA is "<<cgpa<<endl;
        
    }
   
   
   
    return 0;
}
