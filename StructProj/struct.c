#include<stdio.h>

struct Student {
	char studentId[10];
	char name[10];
	int grade;
	char major[100];
} s ;

int main() {
	
	strcpy(s.studentId, "931060635");
	strcpy(s.name, "Ȳ����");
	s.grade = 4;
	strcpy(s.major, "����Ʈ���� ���а�");
	printf("%s\n", s.studentId);
	printf("%s\n", s.name);
	printf("%s\n", s.major);
	printf("%d\n", s.grade);
	system("pause");
	return 0;
}