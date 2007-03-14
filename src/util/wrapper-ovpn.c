#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

#ifndef WWWUID
# define WWWUID 33
#endif

#ifndef PERL
# define PERL "/usr/bin/perl"
#endif

#ifndef WRAPPEROVPNPERLAPP
# define WRAPPEROVPNPERLAPP "/usr/libexec/schulkonsole/bin/wrapper-ovpn.pl"
#endif


const uid_t c_www_user = WWWUID;


const char* c_perl = PERL;
const char* c_wrapper_perl = WRAPPEROVPNPERLAPP;



/* extern char **environ; */


int
main()
{
	uid_t uid;


	uid = getuid();

	if (uid != c_www_user) {
		return -3;
	}

	/* clear environment */
	clearenv();
	/* environ = NULL; */

	execl(c_perl, c_perl, c_wrapper_perl, NULL);


	return -6;
}