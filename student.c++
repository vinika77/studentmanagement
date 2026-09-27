#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

// Creating class Student
class Student
{
public:
    string name;
    int roll;
    float marks;
    string course;

    // to save data in file
    void saveToFile(ofstream &file)
    {
        file << name << "|" << roll << "|" << marks << "|" << course << endl;
    }

    // Function to take student input
    void input()
    {
        cout << "Enter your full name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter your roll number: ";
        cin >> roll;

        cout << "Enter marks: ";
        cin >> marks;

        cout << "Enter course: ";
        cin >> course;
    }

    // Function to display student information
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Marks: " << marks << endl;
        cout << "Course: " << course << endl;
    }

    // Function to calculate grade
    void CalculateGrade()
    {
        if (marks >= 90)
            cout << "Grade: A+" << endl;
        else if (marks >= 80)
            cout << "Grade: A" << endl;
        else if (marks >= 60)
            cout << "Grade: B" << endl;
        else if (marks >= 50)
            cout << "Grade: C" << endl;
        else if (marks >= 40)
            cout << "Grade: D" << endl;
        else
            cout << "Grade: Fail" << endl;
    }
};

int main()
{
    // Vector to store students
    vector<Student> students;

    int choice;

    // Menu keeps running until user chooses Exit
    while (true)
    {
        cout << "\n===== STUDENT MANAGEMENT SYSTEM =====" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display Students" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Update Student" << endl;
        cout << "5. Delete Student" << endl;
        cout << "6. Save Data" << endl;
        cout << "7. Exit" << endl;

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        // ================= ADD STUDENT =================
        case 1:
        {
            int n;

            cout << "\nHow many students do you want to add? ";
            cin >> n;

            for (int i = 0; i < n; i++)
            {
                Student s;

                cout << "\n--- Student " << i + 1 << " ---" << endl;

                s.input();

                students.push_back(s);
            }

            cout << "\nStudent(s) added successfully!" << endl;

            break;
        }

        // ================= DISPLAY STUDENTS =================
        case 2:
        {
            if (students.empty())
            {
                cout << "\nNo students available!" << endl;
            }
            else
            {
                cout << "\n===== ALL STUDENTS =====" << endl;

                for (int i = 0; i < students.size(); i++)
                {
                    cout << "\n--- Student " << i + 1 << " ---" << endl;

                    students[i].display();
                    students[i].CalculateGrade();
                }
            }

            break;
        }

        // ================= SEARCH STUDENT =================
        case 3:
        {
            int searchRoll;
            bool found = false;

            cout << "\nEnter roll number to search: ";
            cin >> searchRoll;

            for (int i = 0; i < students.size(); i++)
            {
                if (students[i].roll == searchRoll)
                {
                    cout << "\n===== STUDENT FOUND =====" << endl;

                    students[i].display();
                    students[i].CalculateGrade();

                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "\nStudent not found!" << endl;
            }

            break;
        }

        // ================= UPDATE STUDENT =================
        case 4:
        {
            int updateRoll;
            bool updated = false;

            cout << "\nEnter roll number to update: ";
            cin >> updateRoll;

            for (int i = 0; i < students.size(); i++)
            {
                if (students[i].roll == updateRoll)
                {
                    cout << "\nStudent found!" << endl;

                    cout << "Enter new name: ";
                    cin.ignore();
                    getline(cin, students[i].name);

                    cout << "Enter new roll: ";
                    cin >> students[i].roll;

                    cout << "Enter new marks: ";
                    cin >> students[i].marks;

                    cout << "Enter new course: ";
                    cin >> students[i].course;

                    cout << "\nStudent updated successfully!" << endl;

                    updated = true;
                    break;
                }
            }

            if (!updated)
            {
                cout << "\nStudent not found!" << endl;
            }

            break;
        }

        // ================= DELETE STUDENT =================
        case 5:
        {
            int deleteRoll;
            bool deleted = false;

            cout << "\nEnter roll number to delete: ";
            cin >> deleteRoll;

            for (int i = 0; i < students.size(); i++)
            {
                if (students[i].roll == deleteRoll)
                {
                    students.erase(students.begin() + i);

                    cout << "\nStudent deleted successfully!" << endl;

                    deleted = true;
                    break;
                }
            }

            if (!deleted)
            {
                cout << "\nStudent not found!" << endl;
            }

            break;
        }

        case 6:
        {
            ofstream file("students.txt");

            if (!file)
            {
                cout << "\nFile could not be opened!" << endl;
                break;
            }

            for (int i = 0; i < students.size(); i++)
            {
                students[i].saveToFile(file);
            }

            file.close();

            cout << "\nStudents saved successfully!" << endl;

            break;
        }

            // ================= EXIT =================
        case 7:
        {
            cout << "\nThank you for using Student Management System!" << endl;

            return 0;
        }

        // ================= INVALID CHOICE =================
        default:
        {
            cout << "\nInvalid choice! Please try again." << endl;
        }
        }
    }

    return 0;
}