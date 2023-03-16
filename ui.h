#ifndef UI_H
#define UI_H

typedef struct {
	char name[20];
	int present;
} Student;

typedef struct {
	Student* students;
	int num_students;
} UI;

void init_UI(UI* ui, Student* students, int num_students);
void display_UI(UI* ui);
void free_UI(UI* ui);

#endif
