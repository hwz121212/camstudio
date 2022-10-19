// stdafx.cpp : source file that includes just the standard includes
// vscap.pch will be the pre-compiled header   
// .. Remark: Although vscap.cpp and vscap.h are renamed and are now recorder.???, this vscap.pch file is still created and still use the old naming either.
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

#include "Localization\Localization.cpp"



DWORD COLORREFtoARGB(COLORREF colorref, BYTE byte)
{
	BYTE r = BYTE(GetRValue(colorref));
	BYTE g = BYTE(GetGValue(colorref));
	BYTE b = BYTE(GetBValue(colorref));

	DWORD temp = byte;
	temp <<= 24;
	//DWORD argb = 0xff000000 + (r << 16) + (g << 8) + b;
	DWORD argb = temp + (r << 16) + (g << 8) + b;
	return argb;
}