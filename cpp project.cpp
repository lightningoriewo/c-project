using namespace std;

char calculateGrade(int score) {
    if (score >= 70) {
        return 'A';
    } else if (score >= 60) {
        return 'B';
    } else if (score >= 50) {
        return 'C';
    } else if (score >= 40) {
        return 'D';
    } else {
        return 'I';  // 'I' stands for Invalid score
    }
}

int main() {
    string fullName;
    int score;
    char grade;

    // Input student details
    cout << "Enter full name of the student: ";
    getline(cin, fullName);
    cout << "Enter score: ";
    cin >> score;

    // Calculate grade
    grade = calculateGrade(score);

    // Output full name and grade
    cout << "Student Name: " << fullName << endl;
    if (grade == 'I') {
        cout << "Score: " << score << " (Invalid score)" << endl;
    } else {
        cout << "Grade: " << grade << endl;
    }

    return 0;