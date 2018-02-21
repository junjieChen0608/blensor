/*
 * ***** BEGIN GPL LICENSE BLOCK *****
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * ***** END GPL LICENSE BLOCK *****
 */

/** \file blender/editors/interface/interface_regions_intern.h
 *  \ingroup edinterface
 *
 * Share between interface_region_*.c files.
 */

#ifndef __INTERFACE_REGIONS_INTERN_H__
#define __INTERFACE_REGIONS_INTERN_H__

#define MENU_PADDING (int)(0.2f * UI_UNIT_Y)

/* interface_region_menu_popup.c */
unsigned int ui_popup_menu_hash(const char *str);

/* interface_regions_intern.h */
ARegion *ui_region_temp_add(bScreen *sc);
void     ui_region_temp_remove(struct bContext *C, bScreen *sc, ARegion *ar);

#endif  /* __INTERFACE_REGIONS_INTERN_H__ */
