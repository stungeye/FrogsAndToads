#include "console_controller.hpp"
#include <conio.h>

namespace FrogToad{
	void ConsoleController::handleInput(BoardModel& model) {
		static_assert(BoardModel::BoardSize <= 9,
			"Single-character commands support at most nine board cells.");

		const int key{ _getch() };

		if (key == 'r' || key == 'R') {
			model.reset();
			return;
		}

		if (key < '1' || key > '9' || key > '0' + BoardModel::BoardSize) {
			return;
		}

		// Numbered keys select zero-based cells by subtracting '1'.
		// In this way, '1' maps to 0, '2' to 1, '3' to 2, etc.
		model.tryMove(key - '1');
	}
}
