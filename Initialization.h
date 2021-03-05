#pragma once
namespace D_init {
    enum class Color
    {
        Black = 0,
        Blue = 1,
        Green = 2,
        Cyan = 3,
        Red = 4,
        Magenta = 5,
        Brown = 6,
        LightGray = 7,
        DarkGray = 8,
        LightBlue = 9,
        LightGreen = 10,
        LightCyan = 11,
        LightRed = 12,
        LightMagenta = 13,
        Yellow = 14,
        White = 15
    };

    int Width = 85;
    int height = 25;
}
namespace Init {
    // 1
    const int SIZE_1 = 10;
    int arr_1[SIZE_1] = { 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 };
    // 2
    const int SIZE_2 = 8;
    int arr_2[SIZE_2] = { 0 };
    // 3
    const int SIZE_3 = 5;
    int arr_3[SIZE_3] = { 1,1,1,2,1 };
    int arr_4[SIZE_3] = { 2,1,1,2,1 };
    int arr_5[SIZE_3] = { 10,1,2,3,4 };
    int arr_6[SIZE_3]{ 0 };
    int arr_7[SIZE_3] = { -10,-5,0,5,10 };
    int arr_8[SIZE_3] = { 40,-5,5,20,20 };
    int arr_9[SIZE_3] = { -2,2,0,2,-2 };
    // 4
    int N = -1;
    // 5
    int nightmare = -1;
}
