/*
 * $Id$
 *
Copyright (c) 2001 Stephane Conversy, Jean-Daniel Fekete and Ecole des
Mines de Nantes.
All rights reserved.
 
This software is proprietary information of Stephane Conversy,
Jean-Daniel Fekete and Ecole des Mines de Nantes.  You shall use it
only in accordance with the terms of the license agreement you
accepted when downloading this software.  The license is available in
the file licence.txt and at the following URL:
http://www.emn.fr/info/image/Themes/Indigo/licence.html

 */
/*
** this file is based on SGI's glu implementation
*/

/*
** License Applicability. Except to the extent portions of this file are
** made subject to an alternative license as permitted in the SGI Free
** Software License B, Version 1.1 (the "License"), the contents of this
** file are subject only to the provisions of the License. You may not use
** this file except in compliance with the License. You may obtain a copy
** of the License at Silicon Graphics, Inc., attn: Legal Services, 1600
** Amphitheatre Parkway, Mountain View, CA 94043-1351, or at:
** 
** http://oss.sgi.com/projects/FreeB
** 
** Note that, as provided in the License, the Software is distributed on an
** "AS IS" basis, with ALL EXPRESS AND IMPLIED WARRANTIES AND CONDITIONS
** DISCLAIMED, INCLUDING, WITHOUT LIMITATION, ANY IMPLIED WARRANTIES AND
** CONDITIONS OF MERCHANTABILITY, SATISFACTORY QUALITY, FITNESS FOR A
** PARTICULAR PURPOSE, AND NON-INFRINGEMENT.
** 
** Original Code. The Original Code is: OpenGL Sample Implementation,
** Version 1.2.1, released January 26, 2000, developed by Silicon Graphics,
** Inc. The Original Code is Copyright (c) 1991-2000 Silicon Graphics, Inc.
** Copyright in any portions created by third parties is as indicated
** elsewhere herein. All Rights Reserved.
** 
** Additional Notice Provisions: The application programming interfaces
** established by SGI in conjunction with the Original Code are The
** OpenGL(R) Graphics System: A Specification (Version 1.2.1), released
** April 1, 1999; The OpenGL(R) Graphics System Utility Library (Version
** 1.3), released November 4, 1998; and OpenGL(R) Graphics with the X
** Window System(R) (Version 1.3), released October 19, 1998. This software
** was created using the OpenGL(R) version 1.2.1 Sample Implementation
** published by SGI, but has not been independently verified as being
** compliant with the OpenGL(R) version 1.2.1 Specification.
**
*/


#ifndef __gluEllipse__
#define __gluEllipse__

#include <svgl/config.hpp>
#ifdef WIN32
#include <windows.h>
#endif
#if defined (__APPLE__)
#include <OpenGL/glu.h>
#else
#include <GL/glu.h>
#endif

namespace svgl {
  struct GLUquadric {
    GLint 	normals;
    GLboolean	textureCoords;
    GLint	orientation;
    GLint	drawStyle;
    void	(*errorCallback)( GLint );
    
    GLUquadric() : normals(GLU_NONE), textureCoords(GL_FALSE), orientation(GLU_OUTSIDE), drawStyle(GLU_FILL), errorCallback(0) {}
  };

  void
  gluEllipse(GLUquadric *qobj, GLdouble innerRadiusX, GLdouble innerRadiusY, GLdouble outerRadiusX, GLdouble outerRadiusY,
	     GLint slices, GLint loops);

  void
  gluPartialEllipse(GLUquadric *qobj, GLdouble innerRadiusX, GLdouble innerRadiusY, 
		       GLdouble outerRadiusX, GLdouble outerRadiusY, GLint slices, GLint loops,
		    GLdouble startAngle, GLdouble sweepAngle);


}

#endif // __gluEllipse__
