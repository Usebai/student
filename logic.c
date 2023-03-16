#include "logic.h"

void mark_present(Student* student) {
	student->present = 1;
}

void mark_absent(Student* student) {
	student->present = 0;
}

void toggle_present(Student* student) {
	student->present = !student->present;
}
