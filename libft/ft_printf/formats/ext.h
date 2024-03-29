/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ext.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusev <agusev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 19:33:21 by agusev            #+#    #+#             */
/*   Updated: 2019/04/25 22:22:35 by agusev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXT_H
# define EXT_H

# define ESC		"\x1b["
# define TERM		"m"
# define FCOUNT		39

typedef struct		s_format
{
	char			*abbr;
	char			*code;
	char			*description;
}					t_format;

static t_format		g_formats[FCOUNT] = {
	{"s", "1", "Strong"},
	{"d", "2", "Dim"},
	{"u", "4", "Underlined"},
	{"-a", "0", "Reset all attributes"},
	{"-s", "21", "Reset strong"},
	{"-d", "22", "Reset dim"},
	{"-u", "24", "Reset underlined"},
	{"fblack", "30", "Black text"},
	{"fred", "31", "Red text"},
	{"fgreen", "32", "Green text"},
	{"fyellow", "33", "Yellow text"},
	{"fblue", "34", "Blue text"},
	{"fmagenta", "35", "Magenta text"},
	{"fcyan", "36", "Cyan text"},
	{"flgray", "37", "Light gray text"},
	{"fdgray", "90", "Dark gray text"},
	{"flred", "91", "Light red text"},
	{"flgreen", "92", "Light green text"},
	{"flyellow", "93", "Light yellow text"},
	{"flblue", "94", "Light blue text"},
	{"flmagenta", "95", "Light magenta text"},
	{"flcyan", "96", "Light cyan text"},
	{"fwhite", "97", "White text"},
	{"bblack", "40", "Black background"},
	{"bred", "41", "Red background"},
	{"bgreen", "42", "Green background"},
	{"byellow", "43", "Yellow background"},
	{"bblue", "44", "Blue background"},
	{"bmagenta", "45", "Magenta background"},
	{"bcyan", "46", "Cyan background"},
	{"blgray", "47", "Light gray background"},
	{"bdgray", "100", "Dark gray background"},
	{"blred", "101", "Light red background"},
	{"blgreen", "102", "Light green background"},
	{"blyellow", "103", "Light yellow background"},
	{"blblue", "104", "Light blue background"},
	{"blmagenta", "105", "Light magenta background"},
	{"blcyan", "106", "Light cyan background"},
	{"bwhite", "107", "White background"}
};

static char			*g_nonprintable[32] = {
	"[NUL]", "[SOH]", "[STX]", "[ETX]", "[EOT]",
	"[ENQ]", "[ACK]", "[BEL]", "[BS]", "[TAB]",
	"[LF]", "[VT]", "[FF]", "[CR]", "[SO]",
	"[SI]", "[DLE]", "[DC1]", "[DC2]", "[DC3]",
	"[DC4]", "[NAK]", "[SYN]", "[ETB]", "[CAN]",
	"[EM]", "[SUB]", "[ESC]", "[FS]", "[GS]",
	"[RS]", "[US]"
};

#endif
