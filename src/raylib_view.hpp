#pragma once
#include "interfaces.hpp"
#include "raylib.h"

namespace FrogToad {
    /**
     * @brief Presents the board with Raylib.
     * Construct after InitWindow() and destroy before CloseWindow(). 
     * If using Raylib textures, you should load them in the
     * constructor and unload them in the destructor.
     */
    class RaylibView : public IView {
    public:
        /** @brief Render the current model using already loaded resources. */
        void draw(const BoardModel& model) override;

        /** @brief Window width in pixels, available before view construction. */
        static int windowW();
        /** @brief Window height in pixels, available before view construction. */
        static int windowH();
    };
}
