	.cpu arm7tdmi
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 1
	.eabi_attribute 30, 2
	.eabi_attribute 34, 0
	.eabi_attribute 18, 4
	.file	"main.c"
	.text
	.align	2
	.global	goToStart
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToStart, %function
goToStart:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	mov	r2, #67108864
	mov	r1, #7936
	push	{r4, lr}
	mov	r3, #256
	ldr	r4, .L4
	strh	r1, [r2, #8]	@ movhi
	mov	r0, #3
	mov	r2, #83886080
	ldr	r1, .L4+4
	mov	lr, pc
	bx	r4
	mov	r3, #6976
	mov	r2, #100663296
	ldr	r1, .L4+8
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r2, .L4+12
	ldr	r1, .L4+16
	mov	r3, #1024
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r3, .L4+20
	mov	lr, pc
	bx	r3
	mov	r3, #0
	ldr	r1, .L4+24
	ldr	r2, .L4+28
	str	r3, [r1]
	str	r3, [r2]
	pop	{r4, lr}
	bx	lr
.L5:
	.align	2
.L4:
	.word	DMANow
	.word	Cena2k15Pal
	.word	Cena2k15Tiles
	.word	100726784
	.word	Cena2k15Map
	.word	waitForVBlank
	.word	state
	.word	seed
	.size	goToStart, .-goToStart
	.align	2
	.global	initialize
	.syntax unified
	.arm
	.fpu softvfp
	.type	initialize, %function
initialize:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	mov	r3, #67108864
	mov	r1, #256
	mov	r2, #0
	strh	r1, [r3]	@ movhi
	strh	r2, [r3, #8]	@ movhi
	b	goToStart
	.size	initialize, .-initialize
	.align	2
	.global	goToInstructions
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToInstructions, %function
goToInstructions:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	mov	r2, #67108864
	mov	r1, #7936
	push	{r4, lr}
	mov	r3, #256
	ldr	r4, .L9
	strh	r1, [r2, #8]	@ movhi
	mov	r0, #3
	mov	r2, #83886080
	ldr	r1, .L9+4
	mov	lr, pc
	bx	r4
	mov	r3, #2672
	mov	r2, #100663296
	ldr	r1, .L9+8
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r2, .L9+12
	ldr	r1, .L9+16
	mov	r0, #3
	mov	r3, #1024
	mov	lr, pc
	bx	r4
	ldr	r3, .L9+20
	mov	lr, pc
	bx	r3
	mov	r0, #1
	mov	r2, #0
	ldr	r1, .L9+24
	ldr	r3, .L9+28
	str	r0, [r1]
	str	r2, [r3]
	pop	{r4, lr}
	bx	lr
.L10:
	.align	2
.L9:
	.word	DMANow
	.word	InstructionsPal
	.word	InstructionsTiles
	.word	100726784
	.word	InstructionsMap
	.word	waitForVBlank
	.word	state
	.word	seed
	.size	goToInstructions, .-goToInstructions
	.align	2
	.global	start
	.syntax unified
	.arm
	.fpu softvfp
	.type	start, %function
start:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	ldr	r4, .L18
	ldr	r3, [r4]
	ldr	r2, .L18+4
	add	r3, r3, #1
	str	r3, [r4]
	mov	lr, pc
	bx	r2
	ldr	r3, .L18+8
	ldrh	r3, [r3]
	tst	r3, #8
	beq	.L11
	ldr	r3, .L18+12
	ldrh	r3, [r3]
	tst	r3, #8
	beq	.L17
.L11:
	pop	{r4, lr}
	bx	lr
.L17:
	ldr	r0, [r4]
	ldr	r3, .L18+16
	mov	lr, pc
	bx	r3
	pop	{r4, lr}
	b	goToInstructions
.L19:
	.align	2
.L18:
	.word	seed
	.word	waitForVBlank
	.word	oldButtons
	.word	buttons
	.word	srand
	.size	start, .-start
	.align	2
	.global	goToGame
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToGame, %function
goToGame:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, lr}
	mov	r2, #56320
	mov	r5, #67108864
	ldr	r4, .L22
	strh	r2, [r5, #8]	@ movhi
	mov	r3, #256
	mov	r2, #83886080
	ldr	r1, .L22+4
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r3, .L22+8
	mov	r2, #100663296
	ldr	r1, .L22+12
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r2, .L22+16
	ldr	r1, .L22+20
	mov	r0, #3
	mov	r3, #1024
	mov	lr, pc
	bx	r4
	ldr	r3, .L22+24
	mov	lr, pc
	bx	r3
	mov	ip, #2
	ldr	r0, .L22+28
	mov	r3, #16384
	str	ip, [r0]
	ldr	r2, .L22+32
	ldr	r1, .L22+36
	mov	r0, #3
	mov	lr, pc
	bx	r4
	ldr	r2, .L22+40
	ldr	r1, .L22+44
	mov	r0, #3
	mov	r3, #256
	mov	lr, pc
	bx	r4
	ldr	r3, .L22+48
	mov	lr, pc
	bx	r3
	mov	r3, #4352
	mov	r2, #1
	mov	r0, #32
	mov	lr, #64
	mov	r1, #0
	mov	ip, #104
	strh	r3, [r5]	@ movhi
	ldr	r3, .L22+52
	str	lr, [r3]
	str	r0, [r3, #16]
	str	r0, [r3, #20]
	str	ip, [r3, #4]
	str	r2, [r3, #8]
	str	r2, [r3, #12]
	str	r2, [r3, #28]
	str	r1, [r3, #24]
	str	r1, [r3, #36]
	pop	{r4, r5, r6, lr}
	bx	lr
.L23:
	.align	2
.L22:
	.word	DMANow
	.word	miniGamesBgPal
	.word	9456
	.word	miniGamesBgTiles
	.word	100720640
	.word	miniGamesBgMap
	.word	waitForVBlank
	.word	state
	.word	100728832
	.word	badSpritesTiles
	.word	83886592
	.word	badSpritesPal
	.word	hideSprites
	.word	jumpman
	.size	goToGame, .-goToGame
	.align	2
	.global	instructions
	.syntax unified
	.arm
	.fpu softvfp
	.type	instructions, %function
instructions:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	ldr	r4, .L36
	ldr	r3, [r4]
	ldr	r2, .L36+4
	add	r3, r3, #1
	str	r3, [r4]
	mov	lr, pc
	bx	r2
	ldr	r3, .L36+8
	ldrh	r3, [r3]
	tst	r3, #8
	beq	.L25
	ldr	r2, .L36+12
	ldrh	r2, [r2]
	tst	r2, #8
	beq	.L34
.L25:
	tst	r3, #4
	beq	.L24
	ldr	r3, .L36+12
	ldrh	r3, [r3]
	tst	r3, #4
	beq	.L35
.L24:
	pop	{r4, lr}
	bx	lr
.L35:
	pop	{r4, lr}
	b	goToStart
.L34:
	ldr	r0, [r4]
	ldr	r3, .L36+16
	mov	lr, pc
	bx	r3
	pop	{r4, lr}
	b	goToGame
.L37:
	.align	2
.L36:
	.word	seed
	.word	waitForVBlank
	.word	oldButtons
	.word	buttons
	.word	srand
	.size	instructions, .-instructions
	.align	2
	.global	goToPause
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToPause, %function
goToPause:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, lr}
	ldr	r3, .L40
	ldr	r5, .L40+4
	mov	lr, pc
	bx	r3
	ldr	r4, .L40+8
	mov	lr, pc
	bx	r5
	mov	r3, #512
	mov	r2, #117440512
	ldr	r1, .L40+12
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r2, #67108864
	mov	r1, #7936
	mov	r3, #256
	strh	r1, [r2, #8]	@ movhi
	mov	r0, #3
	mov	r2, #83886080
	ldr	r1, .L40+16
	mov	lr, pc
	bx	r4
	ldr	r3, .L40+20
	mov	r2, #100663296
	ldr	r1, .L40+24
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #1024
	ldr	r2, .L40+28
	ldr	r1, .L40+32
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	lr, pc
	bx	r5
	mov	r2, #3
	ldr	r3, .L40+36
	pop	{r4, r5, r6, lr}
	str	r2, [r3]
	bx	lr
.L41:
	.align	2
.L40:
	.word	hideSprites
	.word	waitForVBlank
	.word	DMANow
	.word	shadowOAM
	.word	miniGamesBgPausePal
	.word	9360
	.word	miniGamesBgPauseTiles
	.word	100726784
	.word	miniGamesBgPauseMap
	.word	state
	.size	goToPause, .-goToPause
	.align	2
	.global	pause
	.syntax unified
	.arm
	.fpu softvfp
	.type	pause, %function
pause:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, .L54
	push	{r4, lr}
	mov	lr, pc
	bx	r3
	ldr	r3, .L54+4
	ldrh	r3, [r3]
	tst	r3, #8
	beq	.L43
	ldr	r2, .L54+8
	ldrh	r2, [r2]
	tst	r2, #8
	beq	.L52
.L43:
	tst	r3, #4
	beq	.L42
	ldr	r3, .L54+8
	ldrh	r3, [r3]
	tst	r3, #4
	beq	.L53
.L42:
	pop	{r4, lr}
	bx	lr
.L53:
	pop	{r4, lr}
	b	goToStart
.L52:
	pop	{r4, lr}
	b	goToGame
.L55:
	.align	2
.L54:
	.word	waitForVBlank
	.word	oldButtons
	.word	buttons
	.size	pause, .-pause
	.align	2
	.global	goToWin
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToWin, %function
goToWin:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, lr}
	ldr	r3, .L58
	ldr	r5, .L58+4
	mov	lr, pc
	bx	r3
	ldr	r4, .L58+8
	mov	lr, pc
	bx	r5
	mov	r3, #512
	mov	r2, #117440512
	ldr	r1, .L58+12
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r2, #67108864
	mov	r1, #7936
	mov	r3, #256
	strh	r1, [r2, #8]	@ movhi
	mov	r0, #3
	mov	r2, #83886080
	ldr	r1, .L58+16
	mov	lr, pc
	bx	r4
	ldr	r3, .L58+20
	mov	r2, #100663296
	ldr	r1, .L58+24
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #1024
	ldr	r2, .L58+28
	ldr	r1, .L58+32
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	lr, pc
	bx	r5
	mov	r2, #4
	ldr	r3, .L58+36
	pop	{r4, r5, r6, lr}
	str	r2, [r3]
	bx	lr
.L59:
	.align	2
.L58:
	.word	hideSprites
	.word	waitForVBlank
	.word	DMANow
	.word	shadowOAM
	.word	CenaWinsPal
	.word	5600
	.word	CenaWinsTiles
	.word	100726784
	.word	CenaWinsMap
	.word	state
	.size	goToWin, .-goToWin
	.align	2
	.global	win
	.syntax unified
	.arm
	.fpu softvfp
	.type	win, %function
win:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, .L67
	push	{r4, lr}
	mov	lr, pc
	bx	r3
	ldr	r3, .L67+4
	ldrh	r3, [r3]
	tst	r3, #8
	beq	.L60
	ldr	r3, .L67+8
	ldrh	r3, [r3]
	tst	r3, #8
	beq	.L66
.L60:
	pop	{r4, lr}
	bx	lr
.L66:
	pop	{r4, lr}
	b	goToStart
.L68:
	.align	2
.L67:
	.word	waitForVBlank
	.word	oldButtons
	.word	buttons
	.size	win, .-win
	.align	2
	.global	goToLose
	.syntax unified
	.arm
	.fpu softvfp
	.type	goToLose, %function
goToLose:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, lr}
	ldr	r3, .L71
	ldr	r5, .L71+4
	mov	lr, pc
	bx	r3
	ldr	r4, .L71+8
	mov	lr, pc
	bx	r5
	mov	r3, #512
	mov	r2, #117440512
	ldr	r1, .L71+12
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r2, #67108864
	mov	r1, #7936
	mov	r3, #256
	strh	r1, [r2, #8]	@ movhi
	mov	r0, #3
	mov	r2, #83886080
	ldr	r1, .L71+16
	mov	lr, pc
	bx	r4
	ldr	r3, .L71+20
	mov	r2, #100663296
	ldr	r1, .L71+24
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	r3, #1024
	ldr	r2, .L71+28
	ldr	r1, .L71+32
	mov	r0, #3
	mov	lr, pc
	bx	r4
	mov	lr, pc
	bx	r5
	mov	r2, #5
	ldr	r3, .L71+36
	pop	{r4, r5, r6, lr}
	str	r2, [r3]
	bx	lr
.L72:
	.align	2
.L71:
	.word	hideSprites
	.word	waitForVBlank
	.word	DMANow
	.word	shadowOAM
	.word	LesnarWinsPal
	.word	6432
	.word	LesnarWinsTiles
	.word	100726784
	.word	LesnarWinsMap
	.word	state
	.size	goToLose, .-goToLose
	.align	2
	.global	game
	.syntax unified
	.arm
	.fpu softvfp
	.type	game, %function
game:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	ldr	r3, .L107
	ldr	r2, [r3, #28]
	cmp	r2, #2
	movne	r1, #2
	push	{r4, lr}
	strne	r2, [r3, #32]
	ldr	r2, .L107+4
	ldrh	r2, [r2, #48]
	strne	r1, [r3, #28]
	ands	r2, r2, #512
	streq	r2, [r3, #36]
	streq	r2, [r3, #28]
	ldr	r2, .L107+4
	ldrh	r2, [r2, #48]
	ands	r2, r2, #256
	moveq	r1, #1
	streq	r1, [r3, #28]
	ldr	r1, .L107+4
	streq	r2, [r3, #36]
	ldrh	r2, [r1, #48]
	ands	r2, r2, #1
	bne	.L77
	mov	r0, #1
	ldrh	r1, [r1, #48]
	tst	r1, #2
	str	r2, [r3, #28]
	str	r0, [r3, #36]
	movne	r1, #128
	beq	.L79
.L78:
	ldr	r2, [r3, #24]
	add	r2, r2, #1
	str	r2, [r3, #24]
.L81:
	ldr	r2, [r3, #4]
	mvn	r2, r2, lsl #17
	mvn	r2, r2, lsr #17
	ldr	r4, .L107+8
	ldr	r0, [r3]
	strh	r2, [r4, #2]	@ movhi
	strh	r0, [r4]	@ movhi
	strh	r1, [r4, #4]	@ movhi
	ldr	r3, .L107+12
	mov	lr, pc
	bx	r3
	mov	r1, r4
	mov	r3, #512
	mov	r2, #117440512
	mov	r0, #3
	ldr	r4, .L107+16
	mov	lr, pc
	bx	r4
	ldr	r3, .L107+20
	ldrh	r3, [r3]
	tst	r3, #8
	beq	.L82
	ldr	r2, .L107+24
	ldrh	r2, [r2]
	tst	r2, #8
	beq	.L102
.L82:
	tst	r3, #64
	beq	.L83
	ldr	r2, .L107+24
	ldrh	r2, [r2]
	tst	r2, #64
	beq	.L103
.L83:
	tst	r3, #128
	beq	.L73
	ldr	r3, .L107+24
	ldrh	r3, [r3]
	tst	r3, #128
	beq	.L104
.L73:
	pop	{r4, lr}
	bx	lr
.L77:
	ldrh	r2, [r1, #48]
	tst	r2, #2
	bne	.L105
.L79:
	mov	r2, #1
	mov	r1, #132
	str	r2, [r3, #36]
	str	r2, [r3, #28]
	b	.L78
.L105:
	ldr	r2, [r3, #28]
	ldr	r1, [r3, #36]
	cmp	r2, #2
	lsl	r1, r1, #5
	bne	.L106
	ldr	r2, [r3, #32]
	add	r1, r2, r1
	lsl	r1, r1, #18
	lsr	r1, r1, #16
	str	r2, [r3, #28]
	b	.L81
.L102:
	pop	{r4, lr}
	b	goToPause
.L104:
	pop	{r4, lr}
	b	goToLose
.L103:
	pop	{r4, lr}
	b	goToWin
.L106:
	add	r1, r2, r1
	lsl	r1, r1, #18
	lsr	r1, r1, #16
	b	.L78
.L108:
	.align	2
.L107:
	.word	jumpman
	.word	67109120
	.word	shadowOAM
	.word	waitForVBlank
	.word	DMANow
	.word	oldButtons
	.word	buttons
	.size	game, .-game
	.section	.text.startup,"ax",%progbits
	.align	2
	.global	main
	.syntax unified
	.arm
	.fpu softvfp
	.type	main, %function
main:
	@ Function supports interworking.
	@ Volatile: function does not return.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	mov	r3, #67108864
	mov	r1, #256
	mov	r2, #0
	push	{r4, r7, fp, lr}
	strh	r1, [r3]	@ movhi
	strh	r2, [r3, #8]	@ movhi
	ldr	r3, .L121
	mov	lr, pc
	bx	r3
	ldr	r6, .L121+4
	ldr	r8, .L121+8
	ldr	r5, .L121+12
	ldr	fp, .L121+16
	ldr	r10, .L121+20
	ldr	r9, .L121+24
	ldr	r7, .L121+28
	ldr	r4, .L121+32
.L110:
	ldr	r2, [r6]
	ldrh	r3, [r8]
.L111:
	strh	r3, [r5]	@ movhi
	ldrh	r3, [r4, #48]
	strh	r3, [r8]	@ movhi
	cmp	r2, #5
	ldrls	pc, [pc, r2, asl #2]
	b	.L111
.L113:
	.word	.L112
	.word	.L114
	.word	.L115
	.word	.L116
	.word	.L117
	.word	.L117
.L117:
	mov	lr, pc
	bx	r7
	b	.L110
.L116:
	ldr	r3, .L121+36
	mov	lr, pc
	bx	r3
	b	.L110
.L115:
	mov	lr, pc
	bx	r9
	b	.L110
.L114:
	mov	lr, pc
	bx	r10
	b	.L110
.L112:
	mov	lr, pc
	bx	fp
	b	.L110
.L122:
	.align	2
.L121:
	.word	goToStart
	.word	state
	.word	buttons
	.word	oldButtons
	.word	start
	.word	instructions
	.word	game
	.word	win
	.word	67109120
	.word	pause
	.size	main, .-main
	.text
	.align	2
	.global	lose
	.syntax unified
	.arm
	.fpu softvfp
	.type	lose, %function
lose:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	b	win
	.size	lose, .-lose
	.comm	otherBuffer,41,4
	.comm	buffer,41,4
	.comm	seed,4,4
	.comm	shadowOAM,1024,4
	.comm	oldButtons,2,2
	.comm	buttons,2,2
	.comm	jumpman,44,4
	.comm	state,4,4
	.ident	"GCC: (devkitARM release 47) 7.1.0"
