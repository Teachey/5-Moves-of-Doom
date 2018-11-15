
//{{BLOCK(Instructions)

//======================================================================
//
//	Instructions, 256x256@4, 
//	+ palette 256 entries, not compressed
//	+ 167 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 32x32 
//	Total size: 512 + 5344 + 2048 = 7904
//
//	Time-stamp: 2018-11-12, 07:03:37
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_INSTRUCTIONS_H
#define GRIT_INSTRUCTIONS_H

#define InstructionsTilesLen 5344
extern const unsigned short InstructionsTiles[2672];

#define InstructionsMapLen 2048
extern const unsigned short InstructionsMap[1024];

#define InstructionsPalLen 512
extern const unsigned short InstructionsPal[256];

#endif // GRIT_INSTRUCTIONS_H

//}}BLOCK(Instructions)
