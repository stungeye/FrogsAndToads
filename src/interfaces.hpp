#pragma once
#include "board_model.hpp"

namespace FrogToad {
    /** @brief Presents game state without changing the model. */
    class IView {
    public:
        virtual ~IView() = default;

        /**
         * @brief Render the current model.
         * @param model Read-only reference of @c BoardModel to render.
         */
        virtual void draw(const BoardModel& model) = 0;
    };

    /** @brief Translates input into model requests. */
    class IController {
    public:
        virtual ~IController() = default;

        /**
         * @brief Handle input: Apply a move or reset the model.
         * @param model Current game model. 
         */
        virtual void handleInput(BoardModel& model) = 0;
    };
}
