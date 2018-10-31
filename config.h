/* user and group to drop privileges to */
static const char *user  = "ron";
static const char *group = "users";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "80f442",     /* after initialization */
	[INPUT] =  "f4e842",   /* during input */
	[FAILED] = "#f44242",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;
