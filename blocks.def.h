//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"| ", "setxkbmap -query | grep 'layout' | tr -s ' ' | cut -d ' ' -f 2", 0, 10},
	{"VOL: ", "volgetpulse", 0, 15},
	{"", "date '+%a %b %d %Y %H:%M |'", 1, 1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
