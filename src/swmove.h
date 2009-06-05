// Emacs style mode select -*- C++ -*-
//---------------------------------------------------------------------------
//
// $Id: swmove.h,v 1.2 2003/04/05 22:44:04 fraggle Exp $
//
// Copyright(C) 1984-2000 David L. Clark
// Copyright(C) 2001-2003 Simon Howard
//
// This program is free software; you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by the
// Free Software Foundation; either version 2 of the License, or (at your
// option) any later version. This program is distributed in the hope that
// it will be useful, but WITHOUT ANY WARRANTY; without even the implied
// warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See
// the GNU General Public License for more details. You should have
// received a copy of the GNU General Public License along with this
// program; if not, write to the Free Software Foundation, Inc., 59 Temple
// Place - Suite 330, Boston, MA 02111-1307, USA.
//
//---------------------------------------------------------------------------

#ifndef __SWMOVE_H__
#define __SWMOVE_H__

#include "sw.h"

extern void swmove();
extern SWBOOL moveplyr(OBJECTS *obp);
extern void interpret(OBJECTS *obp, int key);
extern SWBOOL movecomp(OBJECTS *obp);
extern SWBOOL movepln(OBJECTS *obp);
extern SWBOOL moveshot(OBJECTS *obp);
extern SWBOOL movebomb(OBJECTS *obp);
extern SWBOOL movemiss(OBJECTS *obp);
extern SWBOOL moveburst(OBJECTS *obp);
extern SWBOOL movetarg(OBJECTS *obt);
extern SWBOOL moveexpl(OBJECTS *obp);
extern SWBOOL movesmok(OBJECTS *obp);
extern SWBOOL moveflck(OBJECTS *obp);
extern SWBOOL movebird(OBJECTS *obp);
extern SWBOOL moveox(OBJECTS *ob);
extern SWBOOL crashpln(OBJECTS *obp);
extern SWBOOL hitpln(OBJECTS *obp);
extern SWBOOL insertx(OBJECTS *ob, OBJECTS *obp);
extern void deletex(OBJECTS *obp);

#endif


//---------------------------------------------------------------------------
//
// $Log: swmove.h,v $
// Revision 1.2  2003/04/05 22:44:04  fraggle
// Remove some useless functions from headers, make them static if they
// are not used by other files
//
// Revision 1.1.1.1  2003/02/14 19:03:31  fraggle
// Initial Sourceforge CVS import
//
//
// sdh 14/2/2003: change license header to GPL
// sdh 21/10/2001: added cvs tags
// sdh 19/10/2001: added header
//
//---------------------------------------------------------------------------

