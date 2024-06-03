#include <iostream>
#include <vector>
#include <string>

using namespace std;

class LectureDetails {
private:
    string lecturerName;
    string subjectName;
    string courseName;
    int numberOfLectures;

public:
    // Constructor to initialize the data members with default values
    LectureDetails() : lecturerName(""), subjectName(""), courseName(""), numberOfLectures(0) {}

    void setInitialValues(const string &lecturer, const string &subject, const string &course, int lectures) {
        lecturerName = lecturer;
        subjectName = subject;
        courseName = course;
        numberOfLectures = lectures;
    }

    void addLectureDetails(const string &lecturer, const string &subject, const string &course, int lectures) {
        lecturerName = lecturer;
        subjectName = subject;
        courseName = course;
        numberOfLectures = lectures;
    }

    void displayLectureDetails() const {
        cout << "Lecturer Name: " << lecturerName << endl;
        cout << "Subject Name: " << subjectName << endl;
        cout << "Course Name: " << courseName << endl;
        cout << "Number of Lectures: " << numberOfLectures << endl << endl;
    }
};

int main() {
    /* vector class is a class template for sequence containers. 
	A vector stores elements of a given type in a linear arrangement, */
    vector<LectureDetails> lectures(5);

    // Add initial details for 5 lecturers
    lectures[0].setInitialValues("Dr. John Smith", "Mathematics", "Engineering", 30);
    lectures[1].setInitialValues("Prof. Emily Brown", "Physics", "Science", 25);
    lectures[2].setInitialValues("Dr. Sarah Johnson", "Chemistry", "Science", 28);
    lectures[3].setInitialValues("Mr. Michael Lee", "Computer Science", "Engineering", 32);
    lectures[4].setInitialValues("Ms. Anna White", "Biology", "Medical", 26);
//if we use auto we dont need to input indices 
//loop will auto fetch the no. of times loop has to initiate.
    for (const auto &lecture : lectures) {
        lecture.displayLectureDetails();
    }

    return 0;
}

