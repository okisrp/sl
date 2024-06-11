/* user and group to drop privileges to */
static const char *user  = "root";
static const char *group = "wheel";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#1e1e2e",     /* after initialization */
	[INPUT] =  "#1e66f5",   /* during input */
	[FAILED] = "#d20f39",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
