#ifndef SWIG_CGAL_KERNEL_POLYGON_2_H
#define SWIG_CGAL_KERNEL_POLYGON_2_H

#include <SWIG_CGAL/Common/Macros.h>
#include <SWIG_CGAL/Kernel/Segment_2.h>
#include <SWIG_CGAL/Kernel/enum.h>
#include <SWIG_CGAL/Common/Input_iterator.h>

DECLARE_CIRCULATOR_CLASS(Edge_const_circulator)

#include <CGAL/Polygon_2.h>
#include <boost/next_prior.hpp>

class SWIG_CGAL_KERNEL_DECL Polygon_2{
  CGAL::Polygon_2<EPIC_Kernel,std::vector<EPIC_Kernel::Point_2> > data;
public:
  #ifndef SWIG
  typedef CGAL::Polygon_2<EPIC_Kernel,std::vector<EPIC_Kernel::Point_2> > cpp_base;
  const cpp_base& get_data() const {return data;}
        cpp_base& get_data_ref()   {return data;}
  Polygon_2(const cpp_base& base):data(base){}
  #endif //SWIG  
//Creation
  Polygon_2();
//Modifiers
  void set( int pos, Point_2 x){data.set(boost::next(data.vertices_begin(),pos),x.get_data());}
  int insert( int i, Point_2 q){return std::distance(data.vertices_begin(),data.insert(boost::next(data.vertices_begin(),i),q.get_data()));}
  FORWARD_CALL_1(void,push_back,Point_2)
  FORWARD_CALL_0(void,clear)
  FORWARD_CALL_0(void,reverse_orientation)
  void erase ( int i) {data.erase(boost::next(data.vertices_begin(),i));}
  void erase (int i, int j){data.erase(boost::next(data.vertices_begin(),i),boost::next(data.vertices_begin(),j));}  
//Access Functions
  CGAL_Vertex_iterator<Polygon_2::cpp_base,Point_2>   vertices()   {return CGAL_Vertex_iterator<cpp_base,Point_2>(data.vertices_begin(),data.vertices_end());}
  CGAL_Edge_const_iterator<Polygon_2::cpp_base,Segment_2>  edges()      {return CGAL_Edge_const_iterator<cpp_base,Segment_2>(data.edges_begin(),data.edges_end());}
  CGAL_Vertex_circulator<Polygon_2::cpp_base,Point_2>        vertices_circulator()  {return CGAL_Vertex_circulator<cpp_base,Point_2>(data.vertices_circulator());}
  CGAL_Edge_const_circulator<Polygon_2::cpp_base,Segment_2>  edges_circulator()     {return CGAL_Edge_const_circulator<cpp_base,Segment_2>(data.edges_circulator());}
//Predicates
  FORWARD_CALL_0(bool,is_simple)
  FORWARD_CALL_0(bool,is_convex)
  FORWARD_CALL_0(Orientation,orientation)
  FORWARD_CALL_1(Oriented_side,oriented_side,Point_2)
  FORWARD_CALL_1(Bounded_side,bounded_side,Point_2)
  FORWARD_CALL_0(double,area)
  int left_vertex ()  {return std::distance(data.vertices_begin(),data.left_vertex());}
  int right_vertex()  {return std::distance(data.vertices_begin(),data.right_vertex());}
  int top_vertex()    {return std::distance(data.vertices_begin(),data.top_vertex());}
  int bottom_vertex() {return std::distance(data.vertices_begin(),data.bottom_vertex());}
  FORWARD_CALL_0(bool,is_counterclockwise_oriented)
  FORWARD_CALL_0(bool,is_clockwise_oriented)
  FORWARD_CALL_0(bool,is_collinear_oriented)
  FORWARD_CALL_1(bool,has_on_positive_side,Point_2)
  FORWARD_CALL_1(bool,has_on_negative_side,Point_2)
  FORWARD_CALL_1(bool,has_on_boundary,Point_2)
  FORWARD_CALL_1(bool,has_on_bounded_side,Point_2)
  FORWARD_CALL_1(bool,has_on_unbounded_side,Point_2)
//Random access methods
  FORWARD_CALL_AND_REF_1(Point_2,vertex,int)
  FORWARD_CALL_AND_REF_1(Segment_2,edge,int)
//Miscellaneous
  FORWARD_CALL_0(int,size)
  FORWARD_CALL_0(bool,is_empty)
//Globally defined operators
  bool equals(const Polygon_2&);
  #ifdef NO_SWIG_OR_PYTHON
  bool __ne__(const Polygon_2&);
  #endif  
//I/O
  std::string toString();
};
#endif //SWIG_CGAL_KERNEL_POLYGON_2_H

//  Bbox_2 bbox ()
//  Polygon_2<Traits,Container> transform ( Transformation t, Polygon_2<Traits,Container> p)
