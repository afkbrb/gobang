#ifndef GAME_UTIL

#define GAME_UTIL

#include <windows.h>
#include <stdio.h>
#include "def.h"

// 获取一小格宽度和高度
HRESULT GetCellWidthAndHeight(POINT ptLeftTop, int cxClient, int cyClient, int *cxCell, int *cyCell);

// 将实际坐标转化为逻辑坐标，这里需要进行实际点到棋盘点的转化
HRESULT
ExChangeLogicalPosition(POINT actualPostion, POINT ptLeftTop, int cxClient, int cyClient, POINT *logicalPostion);

// 将逻辑坐标转化为实际坐标
HRESULT ExchangeActualPosition(POINT logicalPos, int cxCell, int cyCell, POINT ptLeftTop, POINT *actualPos);

// 判断当前逻辑点的指定方向上是否有相邻点
HRESULT
IsSidewardHasSamePoint(POINT point, GameDirection direction,
                       BOOLEAN *bSame, POINT *movedPoint);

// 计算当前方向过去的同类棋子的个数
HRESULT CountSameDircetionPointsNumber(POINT point,
                                      GameDirection direction, int *count);

// 判定是否胜利
HRESULT IsSomeoneWin(int *winner);

// 打印棋盘
void PrintBoard();

#endif // !GAME_UTIL
