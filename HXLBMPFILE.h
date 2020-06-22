#pragma once

#include"stdio.h"
#include"math.h"
#include"windows.h"
#include<iostream>
using namespace std;

#ifndef HXLBMPFILEH
#define HXLBMPFILEH

class _declspec(dllexport) HXLBMPFILE 
{
	BYTE *Imagedata;//位图数据域
public:
	int imagew;//图片的宽度
	int imageh;//图片的高度
	int iYRGBnum;//1:灰度，3：彩色

	RGBQUAD palette[256];//调色板

	 BYTE *pDataAt(int h, int Y0R0G1B2 = 0);//指向图像第h行的位置，Y0R0G1B2表示：灰度(Y)=0，R=0，G=1，B=2
	 BOOL AllocateMem();//为图像分配内存

	 BOOL LoadBMPFILE(const char *fname);
	 BOOL SaveBMPFILE(const char *fname);

	 HXLBMPFILE();
	 ~HXLBMPFILE();
};
#endif