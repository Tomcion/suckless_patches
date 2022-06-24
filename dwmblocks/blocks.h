//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "get_brightness",              0,		11},
	{"", "dwmblocks_get_volume",        0,		10},
    {" ", "date +%R",					30,		0},
	{"", "get_battery",					10,		0},
	{"", "echo ' '",                   0,      0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
