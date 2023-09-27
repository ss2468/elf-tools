/* Copyright (C) 2023 Nunuhara Cabbage <nunuhara@haniwa.technology>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://gnu.org/licenses/>.
 */

#ifndef ELF_TOOLS_CLI_H
#define ELF_TOOLS_CLI_H

#include "nulib/command.h"

extern struct command cmd_elf;
extern struct command cmd_arc;
extern struct command cmd_arc_extract;
extern struct command cmd_arc_list;
extern struct command cmd_mes;
extern struct command cmd_mes_compile;
extern struct command cmd_mes_decompile;

void set_game(const char *name);

#endif // ELF_TOOLS_CLI_H