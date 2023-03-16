#include <stdio.h>
#include "ui.h"
#include "logic.h"

int main() {
	Student students[3] = {
		{"Alice", 0},
		{"Bob", 0},
		{"Charlie", 0}
	};
	UI ui;
	init_UI(&ui, students, 3);
	display_UI(&ui);
	mark_present(&students[0]);
	toggle_present(&students[1]);
	mark_absent(&students[2]);
	display_UI(&ui);
	free_UI(&ui);
	return 0;
}
