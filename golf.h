#ifndef GOLF_H
#define GOLF_H

const int Len = 40;
struct golf
{
    char fullname[Len];
    int handicap;
};

void setgolf(golf & g, const char * name, int hc);
int setgolf(golf & g);
void showgolf(const golf & g);
void handicap(golf & g, int hc);

//...............................
class Golf
{
private:
	static const int Len = 40;
	char fullname[Len];
	int handicap;
public:
	Golf(); // # default constructor
	//Golf(const char * name = "Heyyou", int hc = 0);
	//~Golf();
	int setGolf();
};
//...............................

#endif // GOLF_H
