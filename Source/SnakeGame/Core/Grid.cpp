// Snake Game, Copyright MusienkoBrothers. All Right Reserved.


#include "Core/Grid.h"

DEFINE_LOG_CATEGORY_STATIC(LogGrid, All, All);

using namespace Snake;

Grid::Grid(const FDim& Dim)
    : GridDim(FDim{Dim.Width + 2, Dim.Height + 2})
{
    /*
     * * * * * *
     * 0 0 0 0 *
     * 0 0 0 0 *
     * 0 0 0 0 *
     * * * * * *
     */

    GridCells.Init(ECellType::Empty, GridDim.Width * GridDim.Height);
    InitWalls();
    PrintDebug();
}

void Grid::InitWalls()
{
    for (int32 y = 0; y < GridDim.Height; y++)
    {
        for (int32 x = 0; x < GridDim.Width; x++)
        {
            if (x == 0 || x == GridDim.Width - 1 || y == 0 || GridDim.Height - 1)
            {
                GridCells[PosToIndex(x, y)] = ECellType::Wall;
            }
        }
    }
}

void Grid::PrintDebug()
{
#if !UE_BUILD_SHIPPING
    for (int32 y = 0; y < GridDim.Height; y++)
    {
        FString line;
        for (int32 x = 0; x < GridDim.Width; x++)
        {
            TCHAR symbol = '';
            switch (GridCells[PosToIndex(x, y)])
            {
                case ECellType::Empty: symbol = '0';
                    break;
                case ECellType::Wall: symbol = '*';
                    break;
            }
            line.AppendChar(symbol).AppendChar(' ');
        }
        UE_LOG(LogGrid, Display, TEXT("%s"), *line);
    }
#endif
}

int32 Grid::PosToIndex(int32 x, int32 y) const
{
    return x + y * GridDim.Width;
}
