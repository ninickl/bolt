//
//  eigen_utils.hpp
//
//  Created By Davis Blalock on 3/2/16.
//  Copyright (c) 2016 Davis Blalock. All rights reserved.
//

#ifndef __EIGEN_UTILS_HPP
#define __EIGEN_UTILS_HPP

#ifdef BLAZE  // bazel can't deal with pretending stuff is in same dir
    #include "src/external/eigen/Dense"
#else
    #include "Dense"
#endif

namespace {

using Eigen::Map;
using Eigen::Dynamic;
using Eigen::RowMajor;
using Eigen::Matrix;

// ================================================================
// typealiases
// ================================================================

template<class T, int Rows=Eigen::Dynamic, int Cols=Eigen::Dynamic>
using RowMatrix = Eigen::Matrix<T, Rows, Cols, Eigen::RowMajor>;

template<class T, int Rows=Eigen::Dynamic, int Cols=Eigen::Dynamic>
using ColMatrix = Eigen::Matrix<T, Rows, Cols, Eigen::ColMajor>;

template<class T>
using ColVector = Eigen::Matrix<T, Eigen::Dynamic, 1>;

template<class T>
using RowVector = Eigen::Matrix<T, 1, Eigen::Dynamic, Eigen::RowMajor>;


} // anon namespace
#endif




