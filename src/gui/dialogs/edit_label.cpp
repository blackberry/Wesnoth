/* $Id: edit_label.cpp 48877 2011-03-13 07:49:35Z mordante $ */
/*
   Copyright (C) 2010 - 2011 by Ignacio Riquelme Morelle <shadowm2006@gmail.com>
   Part of the Battle for Wesnoth Project http://www.wesnoth.org/

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY.

   See the COPYING file for more details.
*/

#define GETTEXT_DOMAIN "wesnoth-lib"

#include "gui/dialogs/edit_label.hpp"

#include "gui/widgets/settings.hpp"

namespace gui2 {

/*WIKI
 * @page = GUIWindowDefinitionWML
 * @order = 2_edit_label
 *
 * == Edit label ==
 *
 * Dialog for editing gamemap labels.
 *
 * @begin{table}{dialog_widgets}
 *
 * title & & label & m &
 *         Dialog title label. $
 *
 * label & & text_box & m &
 *         Input field for the map label. $
 *
 * team_only_toggle & & toggle_button & m &
 *         Checkbox for whether to make the label visible to the player's team
 *         only or not. $
 *
 * @end{table}
 */

REGISTER_DIALOG(edit_label)

tedit_label::tedit_label(std::string& label, bool& team_only)
{
	register_text2("label", true, label, true);
	register_bool2("team_only_toggle", true, team_only);
}

}

