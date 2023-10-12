// Snake Game, Copyright MusienkoBrothers. All Right Reserved.

#pragma once

#include "CoreMinimal.h"

namespace Snake
{
    //Dimension -- grid size
    struct Dim 
    {
        int32 width;
        int32 height;
    };

    // what is inside the grid's elements
    enum class CellType 
    {
        Empty = 0,
        Wall
        // Food
        // Snake
    };

    // configuration game
    struct Settings
    {
        Dim gridSize;
    };
}