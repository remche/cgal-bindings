// ------------------------------------------------------------------------------
// Copyright (c) 2011 GeometryFactory (FRANCE)
// Distributed under the Boost Software License, Version 1.0. (See accompany-
// ing file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
// ------------------------------------------------------------------------------ 


#ifndef SWIG_CGAL_KERNEL_LINE_3_H
#define SWIG_CGAL_KERNEL_LINE_3_H

#include <sstream>
#include <SWIG_CGAL/Kernel/typedefs.h>
#include <SWIG_CGAL/Kernel/Point_3.h>
#include <SWIG_CGAL/Kernel/Segment_3.h>
#include <SWIG_CGAL/Kernel/Plane_3.h>
#include <SWIG_CGAL/Kernel/Vector_3.h>
#include <SWIG_CGAL/Kernel/Direction_3.h>
#include <SWIG_CGAL/Kernel/Ray_3.h>

class Plane_3;

class SWIG_CGAL_KERNEL_DECL Line_3{
  EPIC_Kernel::Line_3 data;
public:
  #ifndef SWIG
  typedef EPIC_Kernel::Line_3 cpp_base;
  const cpp_base& get_data() const {return data;}
        cpp_base& get_data()       {return data;}
  Line_3(const cpp_base& base):data(base){}
  #endif

//Creation
  Line_3(){}
  Line_3(const Point_3& p, Point_3& q):data(p.get_data(),q.get_data()){}
  inline Line_3(const Point_3& p, Direction_3& d);
  inline Line_3(const Point_3& p, Vector_3& v);
  inline Line_3(const Segment_3& s);
  inline Line_3(const Ray_3& r);
//Operations
  SWIG_CGAL_FORWARD_CALL_AND_REF_1(Point_3,projection,Point_3)
  SWIG_CGAL_FORWARD_CALL_AND_REF_1(Point_3,point,int)
//Predicates
  SWIG_CGAL_FORWARD_CALL_0(bool,is_degenerate)
  SWIG_CGAL_FORWARD_CALL_1(bool,has_on,Point_3)
//Miscellaneous
  SWIG_CGAL_DECLARE_CALL_AND_REF_1(Plane_3,perpendicular_plane,Point_3)
  SWIG_CGAL_DECLARE_CALL_AND_REF_0(Line_3,opposite)
  SWIG_CGAL_DECLARE_CALL_AND_REF_0(Vector_3,to_vector)
  SWIG_CGAL_DECLARE_CALL_AND_REF_0(Direction_3,direction)
//equality functions
  bool equals(const Line_3& p){
    return data==p.get_data();
  }
  #ifdef NO_SWIG_OR_PYTHON
  bool __ne__(const Line_3& p){return !equals(p);}
  #endif
//I/O
  std::string toString(){
    std::stringstream sstr;
    sstr << data;
    return sstr.str();
  }
//Deep copy
  typedef Line_3 Self;
  Self deepcopy() const {return Self(data);}
  void deepcopy(const Self& other){data=other.get_data();}
};

#endif //SWIG_CGAL_KERNEL_LINE_3_H

//  Line_3<Kernel>  l.transform ( Aff_transformation_3<Kernel> t)

