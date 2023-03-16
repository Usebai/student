#include <stdio.h>
#include "ui.h"

void init_UI(UI* ui, Student* students, int num_students) {
	ui->students = students;
	ui->num_students = num_students;
}

void display_UI(UI* ui) {
	printf("Name \t Present\n");
	printf("-------------------\n");
	for (int i = 0; i < ui->num_students; i++) {
		printf("%s \t %s\n", ui->students[i].name, ui->students[i].present ? "Yes" : "No");
	}
}

void free_UI(UI* ui) {
	ui->students = NULL;
	ui->num_students = 0;
}
