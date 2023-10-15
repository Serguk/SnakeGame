// Snake Game, Copyright MusienkoBrothers. All Right Reserved.

#pragma once

#include "CoreMinimal.h"

namespace Snake
{
    //Dimension -- grid size
    struct FDim
    {
        int32 Width;
        int32 Height;
    };

    // what is inside the grid's elements
    enum class ECellType 
    {
        Empty = 0,
        Wall
        // Food
        // Snake
    };

    // configuration game
    struct FSettings
    {
        FDim GridSize;
    };
}