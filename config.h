/* user and group to drop privileges to */
static const char *user  = "ron";
static const char *group = "users";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "black",   /* during input */
	[FAILED] = "#f44242",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;
