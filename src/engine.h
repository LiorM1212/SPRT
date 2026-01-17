#define NAME_LENGTH_LIMIT 50
#define FILEPATH_LENGTH_LIMIT 150

/* Create struct for an engine that includes its name and its filepath. */
struct engine{
	char name[NAME_LENGTH_LIMIT];
	char filepath[FILEPATH_LENGTH_LIMIT];
};
