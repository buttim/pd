/*
	SuperCollider real time audio synthesis system
    Copyright (c) 2002 James McCartney. All rights reserved.
	http://www.audiosynth.com

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef _SC_Constants_
#define _SC_Constants_

#include <math.h>

#ifndef __FP__
const double pi     = acos(-1.);
#endif
const double pi2    = pi * .5;
const double pi32   = pi * 1.5;
const double twopi  = pi * 2.;
const double rtwopi = 1. / twopi;
const double log001 = log(0.001);
const double log01  = log(0.01);
const double log1   = log(0.1);
const double rlog2  = 1./log(2.);
const double sqrt2  = sqrt(2.);
const double rsqrt2 = 1. / sqrt2;

// used to truncate precision
const float truncFloat = (float)(3. * pow(2,22));
const double truncDouble = 3. * pow(2,51);

const float kBadValue = 1e20f; // used in the secant table for values very close to 1/0

#endif
