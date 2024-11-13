#include "data-structures/linkedlist.h"
#include "data-structures/student.h"

void Excercise01();
void Excercise02();


void ExecutePractice02();

// Excercise01
Node<int>** GetNegativeItems(const List<int>* list, int& outLength);
Node<int>** GetPositiveItems(const List<int>* list, int& outLength);

Node<int>* GetLargestNegativeItem(const List<int>* list);
Node<int>* GetLargestOddItem(const List<int>* list);

// Excercise02
List<StudentPtr>* CreateStudentList();
StudentPtr GetHighestGPA(const List<StudentPtr>* list);
StudentPtr GetHighestGPAStudent(const List<StudentPtr>* list);
StudentPtr GetLowestGPAStudent(const List<StudentPtr>* list);
StudentPtr FindStudentById(const List<StudentPtr>* list, const int id);
void PrintStudents(const List<StudentPtr>* list);

