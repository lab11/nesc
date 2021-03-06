/* This file is part of the nesC compiler.
   Copyright (C) 2002 Intel Corporation

The attached "nesC" software is provided to you under the terms and
conditions of the GNU General Public License Version 2 as published by the
Free Software Foundation.

nesC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with nesC; see the file COPYING.  If not, write to
the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
Boston, MA 02110-1301 USA.  */

#ifndef NESC_CPP_H
#define NESC_CPP_H

#include "parser.h"

void save_cpp_option(const char *option, const char *arg);
void preprocess_init(void);

void start_macro_saving(void);
void end_macro_saving(void);

struct cpp_token;
struct cpp_reader;

void save_pp_dir(const char *dir);
void save_pp_file_start(const char *path);
void save_pp_file_end(void);
void save_pp_token(const struct cpp_token *tok);
void save_pp_line_change(struct cpp_reader *pfile, const struct cpp_token *token);

#endif
