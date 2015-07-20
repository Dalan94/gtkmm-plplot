/*
Copyright (C) 2015 Tom Schoonjans

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef GTKMMPLPLOTLINESTYLE_H
#define GTKMMPLPLOTLINESTYLE_H

namespace Gtk {
  namespace PLplot {
    enum LineStyle {
      NONE = 0,
      CONTINUOUS,
      SHORT_DASH_SHORT_GAP,
      LONG_DASH_LONG_GAP,
      LONG_DASH_SHORT_GAP,
      LONG_DASH_SHORT_GAP_SHORT_DASH_SHORT_GAP,
      LONG_DASH_SHORT_GAP_LONG_DASH_SHORT_GAP,
      SHORT_DASH_SHORT_GAP_MEDIUM_DASH_MEDIUM_GAP_LONG_DASH_LONG_GAP,
      SHORT_DASH_SHORT_GAP_MEDIUM_DASH_SHORT_GAP_LONG_DASH_SHORT_GAP
    };
  }
}
#endif