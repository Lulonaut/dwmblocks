//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "ncspot_info",                        10,      0},
	{"", "get_volume",                     		5,      0},
	{"", "get_ram_usage",                     	5,      0},
	{"", "status",                             10,      0},
	{"", "date +'%d.%m.%Y %T'",					1,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 1;
