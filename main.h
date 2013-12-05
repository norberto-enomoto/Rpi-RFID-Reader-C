#define UNUSED_PIN -1
#define PINS_COUNT 26
#define FRAME_SIZE 26
#define MIDDLE_FRAME 13
#define READERS_COUNT_MAX 8
#define BIT_TIMEOUT 4000000
#define SECOND_IN_NS 1000000000

void initProgram(void);
void initReaders(void);
void createCardReader(char* , int, int, void*, void*);
void updateArrays(CardReader*);
int parityCheck(char**);
