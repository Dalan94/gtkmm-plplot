[![Build Status](https://travis-ci.org/tschoonj/gtkmm-plplot.svg?branch=master)](https://travis-ci.org/tschoonj/gtkmm-plplot)[![Build status](https://ci.appveyor.com/api/projects/status/6i04opv34tn6i4sh?svg=true)](https://ci.appveyor.com/project/tschoonj/gtkmm-plplot)

# Gtkmm-PLplot

Gtkmm-PLplot is a simple plotting library that brings the power of PLplot to Gtkmm. It does so by relying on the Gtk::DrawingArea widget whose drawing signal uses PLplot's extcairo plotting device to generate publication quality plots on your screen...

Currently this library is under heavy development but it should already be useful for simple two-dimensional graphs. The API should not be considered to be stable at all and will be changed without warning...

Gtkmm-PLplot is licensed under the GPLv3.

**Important: currently I am preparing to release v2.0.0. This version will introduce several backwards incompatible changes due to bad design decisions I made in v1.0.0 (I am a lousy C++ programmer but I am learning...). This will bring the API more in line with what the Gtkmm API. Apart from this, I will also be changing the license from GPLv3 to LGPLv3...**

## Features

* Create plots using two std::vector, std::valarray and boost::multi_array objects.
* Zoom in by dragging a selection box.
* Support for two-dimensional plots, polar plots, contour plots with or without shaded regions, three-dimensional line plots
* Supports multiple, independently controlled plots on a single canvas.
* Extensive use of libsigc++ signals
* Highly extensible

## Requirements

* Gtkmm (minimum 3.0.0)
* PLplot (at least 5.10.0 but earlier versions may also work, the C++ bindings are required)
* a C++11 compiler (GCC, clang...)
* Boost (optional)

## Supported platforms

Development occurs mostly on a Mac but I will ensure it also runs properly on Windows and Linux...

## Documentation

I have generated documentation with Doxygen. Have a look at http://tschoonj.github.io/gtkmm-plplot.

## Downloads

Tarballs can be found [here](http://lvserver.ugent.be/gtkmm-plplot)

## TODO
* plsurf3d, plmesh
* histograms
* ...

Tom Schoonjans