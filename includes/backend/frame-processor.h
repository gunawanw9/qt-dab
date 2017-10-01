#
/*
 *
 *    Copyright (C) 2010 .. 2017
 *    Jan van Katwijk (J.vanKatwijk@gmail.com)
 *    Lazy Chair Computing
 *
 *    This file is part of the Qt-DAB
 *    Qt-DAB is free software; you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation; either version 2 of the License, or
 *    (at your option) any later version.
 *
 *    Qt-DAB is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with Qt-DAB; if not, write to the Free Software
 *    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */
#
#ifndef	__FRAME_PROCESSOR
#define	__FRAME_PROCESSOR

#include	<stdint.h>
#include	<stdio.h>

//
//	virtual class, just for providing a common base
//	for the real decoder classes

class	frameProcessor {
public:
		frameProcessor	(void);
virtual		~frameProcessor	(void);
virtual	void	addtoFrame	(uint8_t *);
};
#endif
