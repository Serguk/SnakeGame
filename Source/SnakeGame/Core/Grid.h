// Snake Game, Copyright MusienkoBrothers. All Right Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Types.h"

namespace Snake
{
    class Grid
    {
    public:
        Grid(const FDim& dim);
        FDim GetDim() const {return GridDim; }

    private:
        const FDim GridDim;
        TArray<ECellType> GridCells;

        void InitWalls();
        void PrintDebug();
        FORCEINLINE int32 PosToIndex(int32 x, int32 y) const;
    };
}
