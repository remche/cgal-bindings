// ------------------------------------------------------------------------------
// Copyright (c) 2011 GeometryFactory (FRANCE)
// Distributed under the Boost Software License, Version 1.0. (See accompany-
// ing file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
// ------------------------------------------------------------------------------ 


#ifndef SWIG_CGAL_MESH_3_MESH_DOMAINS_H
#define SWIG_CGAL_MESH_3_MESH_DOMAINS_H

template <class Base,class Polyhedron_base,class Index,class Surface_index,class Subdomain_index>
class Polyhedral_mesh_domain_3_wrapper
{
  Base data;
  typedef Polyhedral_mesh_domain_3_wrapper<Base,Polyhedron_base,Index,Surface_index,Subdomain_index> Self;
   //disable deep copy
  Self deepcopy();
  void deepcopy(const Self&); 
public:
  #ifndef SWIG
  typedef Base cpp_base;
  const cpp_base& get_data() const {return data;}
        cpp_base& get_data()       {return data;}
  #endif
  
//Polyhedral_mesh_domain_3_wrapper(const cpp_base& base):data(base){} commented because requires copy cstr which is private
  Polyhedral_mesh_domain_3_wrapper(const Polyhedron_base& poly):data(poly.get_data()){}

  SWIG_CGAL_FORWARD_CALL_1(Index,index_from_surface_index,Surface_index)
  SWIG_CGAL_FORWARD_CALL_1(Index,index_from_subdomain_index,Subdomain_index)
  SWIG_CGAL_FORWARD_CALL_1(Surface_index,surface_index,Index)
  SWIG_CGAL_FORWARD_CALL_1(Subdomain_index,subdomain_index,Index)
};

#endif // SWIG_CGAL_MESH_3_MESH_DOMAINS_H


