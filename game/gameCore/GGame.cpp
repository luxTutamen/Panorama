//
// Created by myself on 1/16/20.
//

#include "GGame.h"
#include <GLFW/glfw3.h>


//  todo remove
GGame::GGame() : player() {

    this->isRunning = GL_TRUE;
    this->gameProps.lastCycleTime = glfwGetTime();

}