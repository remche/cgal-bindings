// ------------------------------------------------------------------------------
// Copyright (c) 2011 GeometryFactory (FRANCE)
// Distributed under the Boost Software License, Version 1.0. (See accompany-
// ing file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
// ------------------------------------------------------------------------------ 


#ifndef SWIG_CGAL_JAVA_EXCEPTION_H
#define SWIG_CGAL_JAVA_EXCEPTION_H

#ifndef SWIG 
#include <SWIG_CGAL/Java/global_functions.h>
#include <iostream>
 
bool throwJavaException(const char* msg)
{
  jclass exception = JNU_GetEnv()->FindClass("java/lang/Exception");
  if(!exception) {
    std::cerr << "Cannot find class \"java.lang.Exception\","
              << " and cannot throw java exception!\n";
  }
  else if(JNU_GetEnv()->ThrowNew(exception, msg) != 0)
  {
    std::cerr << 
      "Call to JNU_GetEnv()->ThrowNew(JNU_GetEnv()->FindClass(\"java.lang.Exception\"), msg)"
      " failed\n";
  }
  else {
    return true;
  }
  std::cerr << "msg is:\n" << msg << "\n";
  return false;
}
#endif


#define JNI_THROW_ON_ERROR(JOBJECT,METHOD,WITH) \
  if (JOBJECT==NULL) throwJavaException((std::string("Error in " #METHOD " -- ")+WITH).c_str());

#endif //SWIG_CGAL_JAVA_EXCEPTION_H
