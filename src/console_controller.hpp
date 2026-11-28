#pragma once
#include "interfaces.hpp"

namespace FrogToad {
	/** @brief Translates blocking console input into model requests. */
	class ConsoleController : public IController {
	public:
		/** @brief Wait for a key. Request a move or a reset via the model. */
		void handleInput(BoardModel& model) override;
	};
}
