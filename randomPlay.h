//
// Created by 2w6f8c on 2019/5/20.
//

#ifndef GOBANG_RANDOMPLAY_H
#define GOBANG_RANDOMPLAY_H

#include "def.h"
#include <windows.h>

/**
 * 电脑随机下棋，仅用于测试
 * @param chessPoints
 * @return
 */
POINT RandomPlay(int chessPoints[BOARD_CELL_NUM + 1][BOARD_CELL_NUM + 1]);

#endif //GOBANG_RANDOMPLAY_H
