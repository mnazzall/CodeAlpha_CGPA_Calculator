# CodeAlpha_CGPA_Calculator

A simple C++ console application to calculate both GPA for the current semester and overall CGPA based on the student's academic history.

##  Features:

- Input number of courses taken during the semester.
- Input grade (out of 4.0) and credit hours for each course.
- Automatically excludes courses with a grade of 0.0 from GPA calculation.
- Computes semester GPA.
- Accepts previous CGPA and passed hours to calculate overall CGPA.
- Displays final CGPA and semester GPA with precision.

##  How It Works:

1. Enter how many courses you’ve taken this semester.
2. For each course:
   - Enter the credit hours.
   - Enter your grade (on a 4.0 scale).
3. The program will calculate your semester GPA.
4. You can also enter your previously passed credit hours and CGPA.
5. The program will calculate and display your updated CGPA.

##  Sample Output:

Enter the number of courses taken this semester: 3
Enter the number of credit hours for course 1: 3
Enter your grade in this course out of 4.0: 3.7
Enter the number of credit hours for course 2: 2
Enter your grade in this course out of 4.0: 4.0
Enter the number of credit hours for course 3: 3
Enter your grade in this course out of 4.0: 0.0
This course will be excluded from GPA calculation.
Your GPA for this semester is 3.82
Enter your passed hours: 30
Enter your previous CGPA: 3.5
Your CPGA is 3.58
