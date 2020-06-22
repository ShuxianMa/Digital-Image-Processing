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
	BYTE *Imagedata;//λͼ������
public:
	int imagew;//ͼƬ�Ŀ��
	int imageh;//ͼƬ�ĸ߶�
	int iYRGBnum;//1:�Ҷȣ�3����ɫ

	RGBQUAD palette[256];//��ɫ��

	 BYTE *pDataAt(int h, int Y0R0G1B2 = 0);//ָ��ͼ���h�е�λ�ã�Y0R0G1B2��ʾ���Ҷ�(Y)=0��R=0��G=1��B=2
	 BOOL AllocateMem();//Ϊͼ������ڴ�

	 BOOL LoadBMPFILE(const char *fname);
	 BOOL SaveBMPFILE(const char *fname);

	 HXLBMPFILE();
	 ~HXLBMPFILE();
};
#endif