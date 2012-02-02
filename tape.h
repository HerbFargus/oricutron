/*
**  Oricutron
**  Copyright (C) 2009-2011 Peter Gordon
**
**  This program is free software; you can redistribute it and/or
**  modify it under the terms of the GNU General Public License
**  as published by the Free Software Foundation, version 2
**  of the License.
**
**  This program is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**  GNU General Public License for more details.
**
**  You should have received a copy of the GNU General Public License
**  along with this program; if not, write to the Free Software
**  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
**
*/

#define TAPE_0_PULSE 416
#define TAPE_1_PULSE 208

void tape_eject( struct machine *oric );
void tape_rewind( struct machine *oric );
SDL_bool tape_load_tap( struct machine *oric, char *fname );
void tape_ticktock( struct machine *oric, int cycles );
void tape_setmotor( struct machine *oric, SDL_bool motoron );
void tape_patches( struct machine *oric );
