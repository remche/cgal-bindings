// ------------------------------------------------------------------------------
// Copyright (c) 2011 GeometryFactory (FRANCE)
// Distributed under the Boost Software License, Version 1.0. (See accompany-
// ing file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
// ------------------------------------------------------------------------------ 


#ifndef SWIG_CGAL_GENERIC_ITERATOR_H
#define SWIG_CGAL_GENERIC_ITERATOR_H

//This file contains general classes that can be used when nothing in
//done for a specific target languages to handle input and output iterators.

#include <vector>

template<class Container,class Object>
class General_iterator{
  typename Container::cpp_iterator cur;
  typename Container::cpp_iterator end;
  
public:
  typedef Object value_type;

  General_iterator(
    typename Container::cpp_iterator cur_,
    typename Container::cpp_iterator end_
  ):cur(cur_),end(end_){}
   
  General_iterator __iter__(){return *this;}
  
  value_type next()
  {
    if (cur!=end)
      return *cur++;
    #ifdef SWIGPYTHON
    throw Stop_iteration();
    #endif
    return value_type();
  }
  
  bool hasNext(){
    return cur!=end;
  }
};


template <class Object>
class Output_iterator{
  std::vector<Object> data;
  
public:
  typedef typename std::vector<Object>::iterator cpp_iterator;
  typedef General_iterator<Output_iterator<Object>,Object > iterator;


  std::vector<Object>& get_data(){return data;}
  
  iterator objects(){
    return iterator(data.begin(),data.end());
  }
};


#endif //SWIG_CGAL_GENERIC_ITERATOR_H
