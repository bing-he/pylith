c -*- Fortran -*-
c
c~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
c
c  PyLith by Charles A. Williams
c  Copyright (c) 2003-2006 Rensselaer Polytechnic Institute
c
c  Permission is hereby granted, free of charge, to any person obtaining
c  a copy of this software and associated documentation files (the
c  "Software"), to deal in the Software without restriction, including
c  without limitation the rights to use, copy, modify, merge, publish,
c  distribute, sublicense, and/or sell copies of the Software, and to
c  permit persons to whom the Software is furnished to do so, subject to
c  the following conditions:
c
c  The above copyright notice and this permission notice shall be
c  included in all copies or substantial portions of the Software.
c
c  THE  SOFTWARE IS  PROVIDED  "AS  IS", WITHOUT  WARRANTY  OF ANY  KIND,
c  EXPRESS OR  IMPLIED, INCLUDING  BUT NOT LIMITED  TO THE  WARRANTIES OF
c  MERCHANTABILITY,    FITNESS    FOR    A   PARTICULAR    PURPOSE    AND
c  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
c  LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
c  OF CONTRACT, TORT OR OTHERWISE,  ARISING FROM, OUT OF OR IN CONNECTION
c  WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
c
c~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
c
c
      subroutine infel(v,va,vv,dvv,io)
c
c...  subroutine to compute local shape functions and derivatives for
c     infinite elements
c
      include "implicit.inc"
c
c...  subroutine arguments
c
      integer io
      double precision v,va,vv,dvv
c
c...  defined constants
c
      include "rconsts.inc"
c
c...  intrinsic functions
c
      intrinsic abs
c
c...  local variables
c
      double precision sgn,fac,fac1
c
c*      write(6,*) "Hello from infel_f!"
c
      vv=half*(one+va*v)
      dvv=half*va
      if(io.eq.0) return
      sgn=one
      if(io.eq.1) sgn=-one
      fac=one-sgn*v
      fac1=half*abs(va+sgn)
      vv=fac1+two*v*va/fac
      dvv=two*va/(fac*fac)
      return
      end
c
c version
c $Id: infel.f,v 1.1 2004/07/07 15:29:00 willic3 Exp $
c
c Generated automatically by Fortran77Mill on Wed May 21 14:15:03 2003
c
c End of file 
