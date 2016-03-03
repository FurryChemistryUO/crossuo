/****************************************************************************
**
** MulReader.h
**
** Copyright (C) September 2015 Hotride
**
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation; either version 2 of the License, or
** (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
*****************************************************************************
*/
//---------------------------------------------------------------------------
#ifndef MulReaderH
#define MulReaderH
//---------------------------------------------------------------------------
//������� �������
class TMulReader
{
private:
public:
	TMulReader() {}
	~TMulReader() {}

	TTextureObject *ReadGump(TIndexObject &io);
	TTextureObject *ReadArt(WORD ID, TIndexObject &io);
	TTextureObject *ReadTexture(WORD ID, TIndexObject &io);
	TTextureObject *ReadLight(WORD ID, TIndexObject &io);
	
	bool GumpPixelsInXY(TIndexObject &io, int width, int height, int CheckX, int CheckY);
	bool ArtPixelsInXY(WORD ID, TIndexObject &io, int width, int height, int CheckX, int CheckY);
};
//---------------------------------------------------------------------------
extern TMulReader MulReader;
//---------------------------------------------------------------------------
#endif