//====================================================
//     File data
//====================================================
/**
 * @file game.cpp
 * @author Gianluca Bianco (biancogianluca9@gmail.com)
 * @date 2022-12-25
 * @copyright Copyright (c) 2022 Gianluca Bianco under the MIT license.
 */

//====================================================
//     Headers
//====================================================

// Windows
#include <windows/game.hpp>

// States
#include <states/game.hpp>

// Entities
#include <entities/body.hpp>

namespace snake::state{

    //====================================================
    //     Game (constructor)
    //====================================================
    /**
     * @brief Main constructor of the Game class.
     * 
     * @param game_window The window to which the state is drawn.
     */
    Game::Game( window::GameWindow* game_window ): 
        game_window( game_window ){
            
        // Default move up
        this -> body.moveSmoothly( 0.f, - this -> body.speedV );
    }

    //====================================================
    //     drawState
    //====================================================
    /**
     * @brief Method used to draw the current state.
     * 
     */
    void Game::drawState() {

        // Clear the window
        this -> game_window -> clear( this -> background_color );

        // Drawing entities
        drawEntities();

        // Display the state
        this -> game_window -> display();
    }

    //====================================================
    //     drawEntities
    //====================================================
    /**
     * @brief Method used to draw the state entities.
     * 
     */
    void Game::drawEntities() {

        // Drawing the snake body entity
        this -> body.update();
        game_window -> draw( this -> body );   
    }
}