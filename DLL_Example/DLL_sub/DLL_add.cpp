﻿// DLL_sub.cpp : 定义 DLL 的导出函数。
//

#include "pch.h"
#include "framework.h"
#include "DLL_add.h"



// 这是导出函数的一个示例。
DLLADD_API int add_fun(int a, int b)
{
    return a + b;
}


