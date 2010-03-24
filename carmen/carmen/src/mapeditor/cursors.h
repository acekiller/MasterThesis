/*********************************************************
 *
 * This source code is part of the Carnegie Mellon Robot
 * Navigation Toolkit (CARMEN)
 *
 * CARMEN Copyright (c) 2002 Michael Montemerlo, Nicholas
 * Roy, Sebastian Thrun, Dirk Haehnel, Cyrill Stachniss,
 * and Jared Glover
 *
 * CARMEN is free software; you can redistribute it and/or 
 * modify it under the terms of the GNU General Public 
 * License as published by the Free Software Foundation; 
 * either version 2 of the License, or (at your option)
 * any later version.
 *
 * CARMEN is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied 
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 * PURPOSE.  See the GNU General Public License for more 
 * details.
 *
 * You should have received a copy of the GNU General 
 * Public License along with CARMEN; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place, 
 * Suite 330, Boston, MA  02111-1307 USA
 *
 ********************************************************/

#ifndef CARMEN_CURSORS_H
#define CARMEN_CURSORS_H

#define cross_width 15
#define cross_height 15
static unsigned char cross_bits[] = {
   0x00, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00,
   0x80, 0x00, 0xfe, 0x3f, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00, 0x80, 0x00,
   0x80, 0x00, 0x80, 0x00, 0x00, 0x00};

#define crossmsk_width 15
#define crossmsk_height 15
static unsigned char crossmsk_bits[] = {
   0xc0, 0x01, 0xc0, 0x01, 0xc0, 0x01, 0xc0, 0x01, 0xc0, 0x01, 0xc0, 0x01,
   0xff, 0x7f, 0xff, 0x7f, 0xff, 0x7f, 0xc0, 0x01, 0xc0, 0x01, 0xc0, 0x01,
   0xc0, 0x01, 0xc0, 0x01, 0xc0, 0x01};

#define point_width 16
#define point_height 16
#define point_x_hot 3
#define point_y_hot 1
static unsigned char point_bits[] = {
   0x00, 0x00, 0x08, 0x00, 0x18, 0x00, 0x38, 0x00, 0x78, 0x00, 0xf8, 0x00,
   0xf8, 0x01, 0xf8, 0x03, 0xf8, 0x07, 0xf8, 0x00, 0xd8, 0x00, 0x88, 0x01,
   0x80, 0x01, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00};

#define pointmsk_width 16
#define pointmsk_height 16
static unsigned char pointmsk_bits[] = {
   0x0c, 0x00, 0x1c, 0x00, 0x3c, 0x00, 0x7c, 0x00, 0xfc, 0x00, 0xfc, 0x01,
   0xfc, 0x03, 0xfc, 0x07, 0xfc, 0x0f, 0xfc, 0x0f, 0xfc, 0x01, 0xdc, 0x03,
   0xcc, 0x03, 0x80, 0x07, 0x80, 0x07, 0x00, 0x03};

#define pour_width 16
#define pour_height 16
static unsigned char pour_bits[] = {
   0x00, 0x00, 0x60, 0x01, 0x90, 0x1a, 0x48, 0x3c, 0x28, 0x78, 0x10, 0x70,
   0x68, 0x68, 0x04, 0x64, 0x02, 0x62, 0x04, 0x61, 0x88, 0x20, 0x50, 0x20,
   0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

#define pourmsk_width 16
#define pourmsk_height 16
static unsigned char pourmsk_bits[] = {
   0xe0, 0x01, 0xf0, 0x1f, 0xf8, 0x3f, 0xfc, 0x7f, 0xfc, 0xff, 0xf8, 0xff,
   0xfc, 0xff, 0xfe, 0xff, 0xff, 0xf7, 0xfe, 0xf3, 0xfc, 0x71, 0xf8, 0x70,
   0x70, 0x70, 0x20, 0x30, 0x00, 0x10, 0x00, 0x00};

#define select_width 19
#define select_height 19
static unsigned char select_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0xf8, 0x00, 0x00, 0xf8, 0x01,
   0x00, 0xf4, 0x01, 0x00, 0xe2, 0x01, 0x00, 0x81, 0x00, 0x80, 0x40, 0x00,
   0x40, 0x20, 0x00, 0x20, 0x10, 0x00, 0x10, 0x08, 0x00, 0x28, 0x04, 0x00,
   0xf4, 0x02, 0x00, 0x7c, 0x01, 0x00, 0xbc, 0x00, 0x00, 0x7e, 0x00, 0x00,
   0x1e, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00};

#define selectmsk_width 19
#define selectmsk_height 19
static unsigned char selectmsk_bits[] = {
   0x00, 0x70, 0x00, 0x00, 0xf8, 0x00, 0x00, 0xfc, 0x01, 0x00, 0xfc, 0x03,
   0x00, 0xfe, 0x03, 0x00, 0xe7, 0x03, 0x80, 0xc3, 0x01, 0xc0, 0xe1, 0x00,
   0xe0, 0x70, 0x00, 0x70, 0x38, 0x00, 0x38, 0x1c, 0x00, 0x3c, 0x0e, 0x00,
   0xfe, 0x07, 0x00, 0xfe, 0x03, 0x00, 0xfe, 0x01, 0x00, 0xff, 0x00, 0x00,
   0x7f, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x07, 0x00, 0x00};

#endif