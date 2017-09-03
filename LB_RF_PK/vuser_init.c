/*
        PowerTerm for HP Performance Software for Windows 2000/XP/2003/Vista
        Version: 9.1.0
        Copyright (C) 1994-2007 ERICOM Software Ltd.
*/

/*
 * init.c
 *
 * A standard template file for RTE VuGen.
 */

#include <lrrte.h>

vuser_init()
{
		/* *** The terminal type is VT 420-8. */
	TE_connect(
		"comm-type = telnet;"
		"host-name = 172.31.53.83;"
		"terminal-id = ;"
		"set-window-size = true;"
		"security-type = unsecured;"
		"terminal-type = vt420-8;"
		"terminal-model = vt420;"
		"login-command-file = ;"
		"terminal-setup-file = ;"
		, 60000);
	if (TE_errno != TE_SUCCESS) 
		return -1;
    TE_wait_text("login: ", 90);
	TE_type("yumrf<kReturn>");
	//TE_type("rtx0001<kReturn>");
	lr_think_time(1);
	TE_wait_text("Password: ", 90);
	TE_type("Yum1234!<kReturn>");
	lr_think_time(1);
    TE_wait_text("[yumrf@SGH1VWMS08 ~]",90);  
	TE_type("rf<kReturn>");
    return 0;
}
