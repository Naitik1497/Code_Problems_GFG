/* Structure of Student class
class Student {
  public:
    string name;
    int marks;

    Student(string n, int m) {
        name = n;
        marks = m;
    }
};
*/
class Solution {
  public:
    static bool compareStudents(const Student& a, const Student& b) {
        if (a.marks != b.marks) {
            return a.marks > b.marks; // Descending order of marks
        }
        return a.name < b.name; // Lexicographical order if marks are equal
    }

    vector<Student> sortMarks(vector<Student>& arr) {
        sort(arr.begin(), arr.end(), compareStudents);
        return arr;
    }
};