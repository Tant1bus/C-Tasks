#include <iostream>
#include <iomanip>
using namespace std;

struct Student {
	char name[51];
	char surname[51];
	unsigned int age;
	unsigned int grade;
	unsigned int mark_count;
	int* marks;
};
Student read_student() {
	Student st;
	cin >> st.name >> st.surname >> st.age >> st.grade >> st.mark_count;
	st.marks = new int[st.mark_count];
	for (unsigned int i = 0; i < st.mark_count; i++) {
		cin >> st.marks[i];
	}
	return st;
}
void print_student(Student &st) {
	cout << st.name << " " << st.surname << " " << st.age << " " << st.grade << " " << st.mark_count << endl;
	for (unsigned int i = 0; i < st.mark_count; i++) {
		cout << st.marks[i] << " ";
	}
	cout << endl;
}
double get_student_avg_mark(Student& st) {
	double avg, sum = 0;
	for (unsigned int i = 0; i < st.mark_count; i++) {
		sum += st.marks[i];
	}
	avg = sum / st.mark_count;
	return avg;
}
bool will_graduate(Student& st, int after_years) {
	if (st.grade + after_years > 11) return true;
	else return false;
}
int age_entrance(Student& st) {
	unsigned int a_e;
	a_e = 1 + st.age - st.grade;
	return a_e;
}
void add_mark(Student& st, int mark) {
	unsigned int new_mark_count = st.mark_count + 1;
	int* new_marks;
	new_marks = new int[new_mark_count];
	for (int i = 0; i < st.mark_count; i++) {
		new_marks[i] = st.marks[i];
	}
	new_marks[new_mark_count - 1] = mark;
	delete[] st.marks;
	st.marks = new_marks;
	st.mark_count = new_mark_count;

}
struct StudentJournal {
	int count;
	Student* data;
};
StudentJournal read_journal() {
	StudentJournal sj;
	cin >> sj.count;
	sj.data = new Student[sj.count];
	for (int i = 0; i < sj.count; i++) {
		sj.data[i] = read_student();
	}
	return sj;
}
void print_journal(StudentJournal sj) {
	cout << sj.count << endl;
	for (int i = 0; i < sj.count; i++) {
		print_student(sj.data[i]);
	}
}
void add_total_marks(StudentJournal& journal) {
	
	
}
int main() {
	/*for (int i = 0; i < 5; i++) {
		Student st = read_student();
		print_student(st);
		delete[] st.marks;
	}*/
	
	/*for (int i = 0; i < 5; i++) {
		Student st = read_student();
		cout << fixed << setprecision(6) << get_student_avg_mark(st) << endl;
	}*/
	
	/*int graduate_count = 0, a_y;
	cin >> a_y;
	for (int i = 0; i < 5; i++) {
		Student st = read_student();
		if (will_graduate(st, a_y)) graduate_count++;
	}
	cout << graduate_count;*/
	
	/*for (int i = 0; i < 5; i++) {
		Student st = read_student();
		cout << age_entrance(st) << endl;
	}*/

	/*for (int i = 0; i < 5; i++) {
		Student st = read_student();
		while (get_student_avg_mark(st) < 4.5) { add_mark(st, 5); }
		print_student(st);
	}*/

	StudentJournal sj = read_journal();
	int finmark = 0;
	int i = 0;
	while (i < sj.count) {
		print_student(sj.data[i]);
		i++;
		cout << finmark << endl;
	}
	

	

}
