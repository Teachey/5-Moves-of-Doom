#include <stdlib.h>
#include <stdio.h>
#include "myLib.h"
#include "Cena2k15.h"
#include "miniGamesBg.h"
#include "miniGamesBgPause.h"
#include "Instructions.h"
#include "CenaWins.h"
#include "LesnarWins.h"
#include "badSprites.h"

// Prototypes
void initialize();

// State Prototypes
void goToStart();
void start();
void goToInstructions();
void instructions();
void goToGame();
void game();
void goToPause();
void pause();
void goToWin();
void win();
void goToLose();
void lose();

// States for state machine
enum {START, INSTRUCTIONS, GAME, PAUSE, WIN, LOSE};
int state;

typedef struct {
    int row;
    int col;
    int rdel;
    int cdel;
    int width;
    int height;
    int aniCounter;
    int aniState;
    int prevAniState;
    int curFrame;
    int numFrames;
} ANISPRITE;

ANISPRITE jumpman;

// States for sprites
enum {JUMPUP, JUMPDOWN, JUMPCHILL};

// Button Variables
unsigned short buttons;
unsigned short oldButtons;

OBJ_ATTR shadowOAM[128];

// Random Seed
int seed;

// Text Buffer
char buffer[41];
char otherBuffer[41];

int main() {

    initialize();

    while(1) {

        // Update button variables
        oldButtons = buttons;
        buttons = BUTTONS;

        // State Machine
        switch(state) {

            case START:
                start();
                break;
            case INSTRUCTIONS:
                instructions();
                break;
            case GAME:
                game();
                break;
            case PAUSE:
                pause();
                break;
            case WIN:
                win();
                break;
            case LOSE:
                lose();
                break;
        }
    }
    return 0;
}

// Sets up GBA
void initialize() {
    REG_DISPCTL = MODE0 | BG0_ENABLE;
    // Set up Background 0
    REG_BG0CNT = BG_4BPP | BG_CHARBLOCK(0);
    // Set up the first state
    goToStart();
}

// Sets up the start state
void goToStart() {
    REG_BG0CNT = BG_4BPP | BG_CHARBLOCK(0) | BG_SCREENBLOCK(31) | BG_SIZE_SMALL;
    DMANow(3, Cena2k15Pal, PALETTE, Cena2k15PalLen/2);
    DMANow(3, Cena2k15Tiles, &CHARBLOCK[0], Cena2k15TilesLen/2);
    DMANow(3, Cena2k15Map, &SCREENBLOCK[31], Cena2k15MapLen/2);
    waitForVBlank();
    state = START;
    // Begin the seed randomization
    seed = 0;
}

// Runs every frame of the start state
void start() {
    seed++;
    // Lock the framerate to 60 fps
    waitForVBlank();
    // State transitions
    if (BUTTON_PRESSED(BUTTON_START)) {
        // Seed the random generator
        srand(seed);
        goToInstructions();
        //initGame();
    }
}

// Sets up the instructions state
void goToInstructions() {
    REG_BG0CNT = BG_4BPP | BG_CHARBLOCK(0) | BG_SCREENBLOCK(31) | BG_SIZE_SMALL;
    DMANow(3, InstructionsPal, PALETTE, InstructionsPalLen/2);
    DMANow(3, InstructionsTiles, &CHARBLOCK[0], InstructionsTilesLen/2);
    DMANow(3, InstructionsMap, &SCREENBLOCK[31], InstructionsMapLen/2);
    waitForVBlank();
    state = INSTRUCTIONS;
    // Begin the seed randomization
    seed = 0;
}

// Runs every frame of the start state
void instructions() {
    seed++;
    // Lock the framerate to 60 fps
    waitForVBlank();
    // State transitions
    if (BUTTON_PRESSED(BUTTON_START)) {
        // Seed the random generator
        srand(seed);
        goToGame();
        //initGame();
    }
    else if (BUTTON_PRESSED(BUTTON_SELECT)) {
        goToStart();
    }
}

// Sets up the game state
void goToGame() {
    REG_BG0CNT = BG_4BPP | BG_CHARBLOCK(0) | BG_SCREENBLOCK(28) | BG_SIZE_LARGE;
    DMANow(3, miniGamesBgPal, PALETTE, miniGamesBgPalLen/2);
    DMANow(3, miniGamesBgTiles, &CHARBLOCK[0], miniGamesBgTilesLen/2);
    DMANow(3, miniGamesBgMap, &SCREENBLOCK[28], miniGamesBgMapLen/2);
    waitForVBlank();
    state = GAME;
    DMANow(3, badSpritesTiles, &CHARBLOCK[4], badSpritesTilesLen/2);
    DMANow(3, badSpritesPal, SPRITEPALETTE, badSpritesPalLen/2);
    hideSprites();
    REG_DISPCTL = MODE0 | BG0_ENABLE | SPRITE_ENABLE;
    jumpman.width = 32;
    jumpman.height = 32;
    jumpman.rdel = 1;
    jumpman.cdel = 1;
    jumpman.row = SCREENHEIGHT/2-jumpman.width/2;
    jumpman.col = SCREENWIDTH/2-jumpman.height/2;
    /*  === Animation Variables ===
    *   aniCounter: Used to count how many frames have passed
    *   curFrame: which frame of animation jumpman is in (row in spritesheet)
    *   numFrames: the total number of frames
    *   aniState: which state of animation jumpman is in (column in spritesheet)
    */
    jumpman.aniCounter = 0;
    jumpman.curFrame = 0;
    //jumpman.numFrames = 3;  //number of rows in usenti

    jumpman.aniState = JUMPDOWN;
}

// Runs every frame of the game state
void game() {

    if (jumpman.aniState != JUMPCHILL) {
        jumpman.prevAniState = jumpman.aniState;
        jumpman.aniState = JUMPCHILL;
    }

    // Change the animation frame every 20 frames of gameplay
    //if(jumpman.aniCounter % 20 == 0) {
        //jumpman.curFrame = 4;
        if (jumpman.curFrame >= jumpman.numFrames) {
            //jumpman.curFrame = 0;
        }

   // }

    // Control movement and change animation state
    if(BUTTON_HELD(BUTTON_L)) {
        jumpman.curFrame = 0;
        jumpman.aniState = JUMPUP;
    }
    if(BUTTON_HELD(BUTTON_R)) {
        jumpman.curFrame = 0;
        jumpman.aniState = JUMPDOWN;
    }
    if(BUTTON_HELD(BUTTON_A)) {
        jumpman.curFrame = 1;
        jumpman.aniState = JUMPUP;
    }
    if(BUTTON_HELD(BUTTON_B)) {
        jumpman.curFrame = 1;
        jumpman.aniState = JUMPDOWN;
    }

    if (jumpman.aniState == JUMPCHILL) {
        //jumpman.curFrame = 0;
        jumpman.aniState = jumpman.prevAniState;
    } else {
        jumpman.aniCounter++;
    }


    shadowOAM[0].attr0 = jumpman.row | ATTR0_SQUARE;
    shadowOAM[0].attr1 = jumpman.col | ATTR1_MEDIUM;
    shadowOAM[0].attr2 = ATTR2_TILEID(jumpman.curFrame * 4,
        jumpman.aniState * 4);

    waitForVBlank();

    DMANow(3, shadowOAM, OAM, 128 * 4);

    // State transitions
    if (BUTTON_PRESSED(BUTTON_START)) {
        goToPause();
    }
    else if (BUTTON_PRESSED(BUTTON_UP)) {
        goToWin();
    }
    else if (BUTTON_PRESSED(BUTTON_DOWN)) {
        goToLose();
    }
}

// Sets up the pause state
void goToPause() {
    hideSprites();
    waitForVBlank();
    DMANow(3, shadowOAM, OAM, 128 * 4);
    REG_BG0CNT = BG_4BPP | BG_CHARBLOCK(0) | BG_SCREENBLOCK(31) | BG_SIZE_SMALL;
    DMANow(3, miniGamesBgPausePal, PALETTE, miniGamesBgPausePalLen/2);
    DMANow(3, miniGamesBgPauseTiles, &CHARBLOCK[0], miniGamesBgPauseTilesLen/2);
    DMANow(3, miniGamesBgPauseMap, &SCREENBLOCK[31], miniGamesBgPauseMapLen/2);
    waitForVBlank();
    state = PAUSE;
}

// Runs every frame of the pause state
void pause() {
    // Lock the framerate to 60 fps
    waitForVBlank();
    // State transitions
    if (BUTTON_PRESSED(BUTTON_START))
        goToGame();
    else if (BUTTON_PRESSED(BUTTON_SELECT))
        goToStart();
}

// Sets up the win state
void goToWin() {
    hideSprites();
    waitForVBlank();
    DMANow(3, shadowOAM, OAM, 128*4);
    REG_BG0CNT = BG_4BPP | BG_CHARBLOCK(0) | BG_SCREENBLOCK(31) | BG_SIZE_SMALL;
    DMANow(3, CenaWinsPal, PALETTE, CenaWinsPalLen/2);
    DMANow(3, CenaWinsTiles, &CHARBLOCK[0], CenaWinsTilesLen/2);
    DMANow(3, CenaWinsMap, &SCREENBLOCK[31], CenaWinsMapLen/2);
    waitForVBlank();
    state = WIN;
}

// Runs every frame of the win state
void win() {
    // Lock the framerate to 60 fps
    waitForVBlank();
    // State transitions
    if (BUTTON_PRESSED(BUTTON_START))
        goToStart();
}

// Sets up the lose state
void goToLose() {
    hideSprites();
    waitForVBlank();
    DMANow(3, shadowOAM, OAM, 128*4);
    REG_BG0CNT = BG_4BPP | BG_CHARBLOCK(0) | BG_SCREENBLOCK(31) | BG_SIZE_SMALL;
    DMANow(3, LesnarWinsPal, PALETTE, LesnarWinsPalLen/2);
    DMANow(3, LesnarWinsTiles, &CHARBLOCK[0], LesnarWinsTilesLen/2);
    DMANow(3, LesnarWinsMap, &SCREENBLOCK[31], LesnarWinsMapLen/2);
    waitForVBlank();
    state = LOSE;
}

// Runs every frame of the lose state
void lose() {
    // Lock the framerate to 60 fps
    waitForVBlank();
    // State transitions
    if (BUTTON_PRESSED(BUTTON_START))
        goToStart();
}