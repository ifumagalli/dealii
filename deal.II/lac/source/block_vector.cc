//----------------------------  block_vector.cc  ---------------------------
//    $Id$
//    Version: $Name$
//
//    Copyright (C) 2000 by the deal.II authors
//
//    This file is subject to QPL and may not be  distributed
//    without copyright and license information. Please refer
//    to the file deal.II/doc/license.html for the  text  and
//    further information on this license.
//
//----------------------------  block_vector.cc  ---------------------------

#include <lac/block_vector.templates.h>

// explicit instantiations
template class BlockVector<2,double>;
template class BlockVector<3,double>;

template class BlockVector<2,float>;
template class BlockVector<3,float>;
