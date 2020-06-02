/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(pfb_interpolator_ccf.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(b5d91c997d6fec23021c8c0dd766e535)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/filter/pfb_interpolator_ccf.h>
// pydoc.h is automatically generated in the build directory
#include <pfb_interpolator_ccf_pydoc.h>

void bind_pfb_interpolator_ccf(py::module& m)
{

    using pfb_interpolator_ccf = ::gr::filter::pfb_interpolator_ccf;


    py::class_<pfb_interpolator_ccf,
               gr::sync_interpolator,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<pfb_interpolator_ccf>>(
        m, "pfb_interpolator_ccf", D(pfb_interpolator_ccf))

        .def(py::init(&pfb_interpolator_ccf::make),
             py::arg("interp"),
             py::arg("taps"),
             D(pfb_interpolator_ccf, make))


        .def("set_taps",
             &pfb_interpolator_ccf::set_taps,
             py::arg("taps"),
             D(pfb_interpolator_ccf, set_taps))


        .def("taps", &pfb_interpolator_ccf::taps, D(pfb_interpolator_ccf, taps))


        .def("print_taps",
             &pfb_interpolator_ccf::print_taps,
             D(pfb_interpolator_ccf, print_taps))

        ;
}