// ------------------------------------------------------------------------------
// Copyright (c) 2011 GeometryFactory (FRANCE)
// Distributed under the Boost Software License, Version 1.0. (See accompany-
// ing file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
// ------------------------------------------------------------------------------ 


#ifndef SWIG_CGAL_SPATIAL_SEARCHING_TYPEDEFS_H
#define SWIG_CGAL_SPATIAL_SEARCHING_TYPEDEFS_H
 
#include <SWIG_CGAL/Kernel/Point_2.h>

typedef Fuzzy_sphere_wrapper <CGAL_FS_2,Point_2>  SWIG_FS_2;
typedef Fuzzy_iso_box_wrapper<CGAL_FB_2,Point_2>  SWIG_FB_2;
typedef Fuzzy_sphere_wrapper <CGAL_FS_3,Point_3>  SWIG_FS_3;
typedef Fuzzy_iso_box_wrapper<CGAL_FB_3,Point_3>  SWIG_FB_3;
typedef std::pair<Point_2,double> SWIG_PTD_2;
typedef std::pair<Point_3,double> SWIG_PTD_3;
//Orthogonal-incremental-nearest-2
typedef Kd_tree_wrapper  <CGAL_OI_T_2,Point_2,SWIG_FS_2,SWIG_FB_2 >       SWIG_OI_T_2;
typedef NN_search_wrapper_incremental<CGAL_OI_S_2,Point_2,SWIG_OI_T_2 >   SWIG_OI_S_2;
//Incremental-nearest-2
typedef Kd_tree_wrapper  <CGAL_I_T_2,Point_2,SWIG_FS_2,SWIG_FB_2 >        SWIG_I_T_2;
typedef NN_search_wrapper_incremental<CGAL_I_S_2,Point_2,SWIG_I_T_2 >     SWIG_I_S_2;
//Orthogonal-k-nearest-2
typedef Kd_tree_wrapper  <CGAL_OK_T_2,Point_2,SWIG_FS_2,SWIG_FB_2 >       SWIG_OK_T_2;
typedef NN_search_wrapper<CGAL_OK_S_2,Point_2,SWIG_OK_T_2 >               SWIG_OK_S_2;
//K-nearest-2
typedef Kd_tree_wrapper  <CGAL_K_T_2,Point_2,SWIG_FS_2,SWIG_FB_2 >        SWIG_K_T_2;
typedef NN_search_wrapper<CGAL_K_S_2,Point_2,SWIG_K_T_2 >                 SWIG_K_S_2;
//Orthogonal-incremental-nearest-3
typedef Kd_tree_wrapper  <CGAL_OI_T_3,Point_3,SWIG_FS_3,SWIG_FB_3 >       SWIG_OI_T_3;
typedef NN_search_wrapper_incremental<CGAL_OI_S_3,Point_3,SWIG_OI_T_3 >   SWIG_OI_S_3;
//Incremental-nearest-3
typedef Kd_tree_wrapper  <CGAL_I_T_3,Point_3,SWIG_FS_3,SWIG_FB_3 >        SWIG_I_T_3;
typedef NN_search_wrapper_incremental<CGAL_I_S_3,Point_3,SWIG_I_T_3 >     SWIG_I_S_3;
//Orthogonal-k-nearest-3
typedef Kd_tree_wrapper  <CGAL_OK_T_3,Point_3,SWIG_FS_3,SWIG_FB_3 >       SWIG_OK_T_3;
typedef NN_search_wrapper<CGAL_OK_S_3,Point_3,SWIG_OK_T_3 >               SWIG_OK_S_3;
//K-nearest-3
typedef Kd_tree_wrapper  <CGAL_K_T_3,Point_3,SWIG_FS_3,SWIG_FB_3 >        SWIG_K_T_3;
typedef NN_search_wrapper<CGAL_K_S_3,Point_3,SWIG_K_T_3 >                 SWIG_K_S_3;

#ifdef SWIGJAVA
typedef std::pair<Point_2,JavaData> SWIG_Point_WI_2;
typedef std::pair<Point_3,JavaData> SWIG_Point_WI_3;

typedef Fuzzy_sphere_wrapper <CGAL_FS_WI_2,SWIG_Point_WI_2>  SWIG_FS_WI_2;
typedef Fuzzy_iso_box_wrapper<CGAL_FB_WI_2,SWIG_Point_WI_2>  SWIG_FB_WI_2;
typedef Fuzzy_sphere_wrapper <CGAL_FS_WI_3,SWIG_Point_WI_3>  SWIG_FS_WI_3;
typedef Fuzzy_iso_box_wrapper<CGAL_FB_WI_3,SWIG_Point_WI_3>  SWIG_FB_WI_3;
typedef std::pair<SWIG_Point_WI_2,double> SWIG_PTD_WI_2;
typedef std::pair<SWIG_Point_WI_3,double> SWIG_PTD_WI_3;
//Orthogonal-incremental-nearest-2
typedef Kd_tree_wrapper  <CGAL_OI_T_WI_2,SWIG_Point_WI_2,SWIG_FS_WI_2,SWIG_FB_WI_2 >  SWIG_OI_T_WI_2;
typedef NN_search_wrapper_incremental<CGAL_OI_S_WI_2,Point_2,SWIG_OI_T_WI_2 >         SWIG_OI_S_WI_2;
//Incremental-nearest-2
typedef Kd_tree_wrapper  <CGAL_I_T_WI_2,SWIG_Point_WI_2,SWIG_FS_WI_2,SWIG_FB_WI_2 >   SWIG_I_T_WI_2;
typedef NN_search_wrapper_incremental<CGAL_I_S_WI_2,Point_2,SWIG_I_T_WI_2 >           SWIG_I_S_WI_2;
//Orthogonal-k-nearest-2
typedef Kd_tree_wrapper  <CGAL_OK_T_WI_2,SWIG_Point_WI_2,SWIG_FS_WI_2,SWIG_FB_WI_2 >  SWIG_OK_T_WI_2;
typedef NN_search_wrapper<CGAL_OK_S_WI_2,Point_2,SWIG_OK_T_WI_2 >                     SWIG_OK_S_WI_2;
//K-nearest-2
typedef Kd_tree_wrapper  <CGAL_K_T_WI_2,SWIG_Point_WI_2,SWIG_FS_WI_2,SWIG_FB_WI_2 >   SWIG_K_T_WI_2;
typedef NN_search_wrapper<CGAL_K_S_WI_2,Point_2,SWIG_K_T_WI_2 >                       SWIG_K_S_WI_2;
//Orthogonal-incremental-nearest-3
typedef Kd_tree_wrapper  <CGAL_OI_T_WI_3,SWIG_Point_WI_3,SWIG_FS_WI_3,SWIG_FB_WI_3 >  SWIG_OI_T_WI_3;
typedef NN_search_wrapper_incremental<CGAL_OI_S_WI_3,Point_3,SWIG_OI_T_WI_3 >         SWIG_OI_S_WI_3;
//Incremental-nearest-3
typedef Kd_tree_wrapper  <CGAL_I_T_WI_3,SWIG_Point_WI_3,SWIG_FS_WI_3,SWIG_FB_WI_3 >   SWIG_I_T_WI_3;
typedef NN_search_wrapper_incremental<CGAL_I_S_WI_3,Point_3,SWIG_I_T_WI_3 >           SWIG_I_S_WI_3;
//Orthogonal-k-nearest-3
typedef Kd_tree_wrapper  <CGAL_OK_T_WI_3,SWIG_Point_WI_3,SWIG_FS_WI_3,SWIG_FB_WI_3 >  SWIG_OK_T_WI_3;
typedef NN_search_wrapper<CGAL_OK_S_WI_3,Point_3,SWIG_OK_T_WI_3 >                     SWIG_OK_S_WI_3;
//K-nearest-3
typedef Kd_tree_wrapper  <CGAL_K_T_WI_3,SWIG_Point_WI_3,SWIG_FS_WI_3,SWIG_FB_WI_3 >   SWIG_K_T_WI_3;
typedef NN_search_wrapper<CGAL_K_S_WI_3,Point_3,SWIG_K_T_WI_3 >                       SWIG_K_S_WI_3;
#endif //SWIGJAVA

#endif //SWIG_CGAL_SPATIAL_SEARCHING_TYPEDEFS_H
