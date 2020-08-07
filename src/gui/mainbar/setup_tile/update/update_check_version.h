/****************************************************************************
 *   July 28 00:23:05 2020
 *   Copyright  2020  Dirk Brosswick
 *   Email: dirk.brosswick@googlemail.com
 ****************************************************************************/
 
/*
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */
#ifndef _UPDATE_CHECK_VERSION_H
    #define _UPDATE_CHECK_VERSION_H

    #include <TTGO.h>

    #define FIRMWARE_HOST               "www.neo-guerillaz.de"
    #define FIRMWARE_HOST_PORT          80
    #define FIRMWARE_VERSION_FILE       "ttgo-t-watch2020_v1.version.json"

    #define UPDATE_JSON_BUFFER_SIZE     200

    uint64_t update_check_new_version();

#endif // _UPDATE_CHECK_VERSION_H