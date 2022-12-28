//====================================================
//     File data
//====================================================
/**
 * @file snake.hpp
 * @author Gianluca Bianco (biancogianluca9@gmail.com)
 * @date 2022-12-27
 * @copyright Copyright (c) 2022 Gianluca Bianco under the MIT license.
 */

//====================================================
//     Preprocessor directives
//====================================================
#pragma once
#ifndef SNAKE_GAME_SNAKE_ENTITY
#define SNAKE_GAME_SNAKE_ENTITY

//====================================================
//     Headers
//====================================================

// Windows
#include <windows/game_window.hpp>

// Entities
#include <entities/entity.hpp>

// SFML
#include <SFML/Graphics/RectangleShape.hpp>

namespace snake::entity{

    //====================================================
    //     Body
    //====================================================
    /**
     * @brief Class used to construct the snake entity.
     * 
     */
    class Snake: public Entity{

        //====================================================
        //     Public
        //====================================================
        public:

            // Constructors
            Snake();

            // Methods
            void update();
            void moveSmoothly( const float dir_x, const float dir_y );
            void draw( window::GameWindow* game_window ) const override;

            // Variables
            float speedV = 0.1f;

        //====================================================
        //     private
        //====================================================
        private:

            // Variables
            sf::RectangleShape body;
            float direction_x;
            float direction_y;
    };
}

#endif