//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	/*Update Interval*/	/*Update Signal*/
	{"Volumn:", 	"~/scripts/statusbar/volumn",		0,		9},
	{"Bright:", 	"~/scripts/statusbar/brightness",	0,		10},
	{"Battery:", 	"~/scripts/statusbar/battery",		5,		3},
	{"", 		"~/scripts/statusbar/clock",		2,		1},
//	{"", "~/bin/statusbar/battery",						5,		0},
//	{"🌡", "sensors | awk '/^temp1:/{print $2}'",				5,		0},
//	{"", "~/bin/statusbar/clock",						5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
