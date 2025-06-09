﻿#include <iostream>
#include "add.h"
#include "dive.h"
#include "mod.h"
#include "mul.h"
#include "sub.h"

int main()
{
    int x = 0;
    int y = 0;


    std::cout << "첫번째 수를 입력하세요";
    std::cin >> x;
    std::cout << "두번째 수를 입력하세요";
    std::cin >> y;

    printf("입력된 수 x[ %d ] y[ %d ]\n", x, y);
    printf("add[ %d ] sub[ %d ] mul[ %d ] dive [ %d ] mod[ %d ]\n", add(x, y), sub(x, y), mul(x, y), dive(x, y), mod(x, y));

}