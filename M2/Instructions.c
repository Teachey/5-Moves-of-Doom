
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

const unsigned short InstructionsTiles[2672] __attribute__((aligned(4)))=
{
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0700,0x0000,0x2700,0x6107,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2057,0x7023,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0070,0x7077,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0750,0x0000,
	0x2700,0x0700,0x2700,0x7500,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0304,0x0523,0x0308,0x0072,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0060,0x0000,0x0085,0x0040,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0078,0x0000,0x0614,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0507,0x0000,
	0x0003,0x0000,0x0040,0x7003,0x6080,0x7307,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0080,
	0x0000,0x0000,0x4000,0x0027,0x0400,0x0023,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0003,0x0000,
	0x0003,0x0000,0x0403,0x7707,0x0703,0x7508,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0800,
	0x0000,0x0800,0x6700,0x8820,0x6700,0x0800,0x6000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0600,0x0000,0x1610,0x0040,0x0800,0x6085,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x7020,0x3080,0x1020,0x0077,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0001,0x0030,0x5001,0x0580,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0303,0x0500,0x0760,0x0500,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0600,0x0500,
	0x0000,0x0000,0x0570,0x0170,0x0570,0x0170,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0020,0x0570,0x0740,0x0570,0x0070,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0470,0x0077,0x0370,0x0808,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0003,0x0000,
	0x0000,0x0000,0x4000,0x7070,0x7000,0x8050,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0004,0x6200,0x6404,0x6620,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0202,0x0000,0x0007,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0700,
	0x0007,0x0000,0x0407,0x2770,0x0407,0x2770,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x3000,0x0000,0x3040,0x0020,0x3070,0x0370,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x2000,0x7074,0x6000,0x3070,0x8000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0007,0x8000,0x0077,0x7600,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x7803,0x8080,0x6703,0x7030,0x0003,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x7002,0x7000,0x7002,0x7000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0007,0x6007,0x0077,0x6037,0x0307,0x0007,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x5000,0x0000,0x5800,0x0020,0x5700,0x1070,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0500,0x0000,0x0000,0x0070,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0070,
	0x0000,0x0070,0x0040,0x0072,0x0640,0x0072,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x3014,0x6308,0x0840,0x0305,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0008,0x0000,0x0008,
	0x0002,0x1038,0x0050,0x3038,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0012,0x0070,0x0062,0x0070,0x1040,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0006,
	0x0007,0x0006,0x0077,0x0036,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0001,0x0000,0x0001,0x0000,
	0x0065,0x0000,0x0061,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0180,0x3075,0x0180,0x3020,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0306,0x0227,0x6000,0x0220,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x7010,0x0000,0x7010,0x0000,
	0x7010,0x0800,0x7010,0x0800,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0470,0x0000,0x0470,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0006,0x0007,0x0006,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x3037,0x0012,0x3034,0x0016,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0071,0x0100,0x0700,0x0300,0x0050,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0153,0x0000,0x0051,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x8005,0x8507,0x8005,0x8107,0x0005,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x2703,0x6503,0x2703,0x3603,0x0003,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x5000,0x1500,0x0000,0x1600,0x0000,0x1000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0300,0x0000,0x0700,
	0x0420,0x0200,0x0460,0x0200,0x0000,0x0700,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0007,0x0000,0x0000,0x0000,
	0x0070,0x1006,0x0070,0x1003,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x2306,0x0000,0x4306,0x0000,0x0001,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0002,0x0000,0x0002,0x0000,
	0x0702,0x0046,0x0762,0x0042,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0002,
	0x0000,0x0007,0x0000,0x0007,0x0000,0x0073,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0001,0x0000,0x0001,0x0000,
	0x3021,0x8020,0x5021,0x8000,0x8000,0x8070,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0770,0x0020,0x0770,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0705,0x0000,0x0008,
	0x0000,0x5005,0x0000,0x5005,0x0000,0x0007,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0600,0x0400,0x0300,0x0400,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0003,0x0000,0x0206,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0100,0x0000,0x0102,0x0108,
	0x0120,0x0608,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x8700,0x0000,
	0x7700,0x0000,0x7000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0700,0x0000,0x0000,0x0000,0x0070,0x0000,
	0x0070,0x0200,0x0100,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0070,0x0000,0x0070,0x0000,0x0070,
	0x0000,0x0070,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x7000,0x0000,0x7000,0x0440,0x7078,
	0x0870,0x7708,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0030,0x0740,
	0x0010,0x0740,0x0000,0x0700,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0830,0x0000,0x0800,0x0077,0x2801,
	0x0702,0x6803,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0220,0x0000,
	0x0270,0x0070,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4001,0x7000,
	0x4001,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0080,0x0000,0x0080,0x2803,
	0x0086,0x2000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0700,0x0000,0x0700,0x1300,0x0700,
	0x0000,0x0700,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0080,0x0000,0x0050,0x0500,0x0005,0x0500,
	0x0036,0x0500,0x0070,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x6000,0x0000,0x0700,0x0770,0x0708,
	0x0770,0x0700,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0200,0x0000,0x0200,0x0046,0x0270,
	0x0046,0x0270,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0074,
	0x0000,0x0077,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0007,0x0000,0x0007,0x0007,0x0007,
	0x0007,0x6007,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0030,0x0000,0x0030,0x0074,0x6030,
	0x0060,0x6030,0x0000,0x6000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x4000,0x0000,0x4820,0x1200,
	0x4810,0x7000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x3000,0x0060,
	0x0500,0x0060,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0700,0x0500,
	0x0700,0x0500,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x7404,0x3000,
	0x7207,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x7030,0x0101,
	0x7000,0x0501,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4707,0x1000,
	0x4807,0x0100,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x8000,0x7000,
	0x8000,0x7000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0007,0x0008,0x0007,0x0808,0x0607,
	0x0708,0x0207,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0006,0x7014,0x0140,
	0x0000,0x0007,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0300,0x0050,0x0306,0x0050,0x0500,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0700,0x7706,0x0700,0x7456,
	0x0000,0x0006,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0007,0x0000,0x0006,0x0000,0x7046,0x0070,0x8036,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0707,0x8048,0x2040,0x0018,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0020,0x0000,0x0020,0x0008,0x0027,0x3008,0x0027,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x5820,0x0070,0x5507,0x0010,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0700,0x0000,0x0702,0x0000,0x0780,0x0040,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0010,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x6007,0x6500,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x7000,0x0000,0x7007,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0007,0x0000,

	0x1002,0x6110,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x7107,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0070,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0070,0x0700,0x6000,0x7700,0x0801,0x7700,0x6207,0x0700,
	0x0000,0x0200,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x7700,0x7207,0x0700,0x0420,0x0708,0x7420,
	0x0000,0x0400,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x2000,0x0000,0x2000,0x7007,0x2005,0x7770,0x2070,0x7007,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0070,0x0760,0x0077,0x3100,0x0070,0x0100,0x0077,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x3070,0x0717,0x7770,0x0700,0x7070,0x0700,
	0x7000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0500,0x0000,0x7500,0x0860,0x0500,0x0778,0x7501,0x0720,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0007,0x7015,0x7007,0x0470,0x7007,0x7070,0x7007,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x1580,0x7075,0x0040,0x7107,0x0040,0x7107,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x7747,0x0000,0x7007,0x0070,0x7707,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0570,0x0000,0x0577,0x0570,0x6570,0x0770,0x0570,0x0870,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x1070,0x6700,0x5070,0x5000,0x5070,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0060,0x0000,0x7354,0x0070,0x7750,0x0070,0x7150,0x0070,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0003,0x0000,0x7073,0x0160,0x7003,0x7154,0x7080,0x3374,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x8000,0x0000,0x8707,0x8700,0x8007,0x0000,0x6707,0x6700,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0700,0x0373,0x7777,0x0703,0x0700,0x0703,0x0770,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0710,0x7430,0x0771,0x0210,0x0751,0x0210,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0050,0x0060,0x7810,0x0050,0x0810,0x2750,0x0810,0x0050,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x7077,0x7750,0x7046,0x0560,0x8170,0x0560,
	0x0070,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0780,0x0002,0x0770,0x0007,0x0740,0x0006,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0305,0x0000,
	0x7005,0x0700,0x0705,0x1000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x2730,0x7006,0x7000,0x8007,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x7000,
	0x7800,0x7308,0x1010,0x7000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0100,0x0000,
	0x6100,0x0700,0x7100,0x0110,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0070,0x0000,
	0x2070,0x5008,0x0070,0x0001,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0450,0x0080,0x0440,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x5000,0x0000,
	0x5700,0x3700,0x5750,0x7000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0700,0x0000,
	0x0770,0x3700,0x0701,0x0400,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0004,0x0000,
	0x0004,0x5037,0x0004,0x0170,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0140,0x0000,
	0x0143,0x0680,0x0143,0x1000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x1030,0x1000,0x5000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0177,0x0700,0x0087,0x0800,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0200,0x0000,
	0x0271,0x7270,0x0200,0x7700,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0460,0x0470,0x0760,0x0030,0x0700,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x1000,0x0024,0x0000,0x3077,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0076,0x0170,0x0134,0x0100,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0008,0x0000,
	0x5504,0x4000,0x5504,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0403,
	0x4772,0x0403,0x8074,0x0403,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0800,0x0678,0x0800,0x0770,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0166,0x6060,0x4427,0x7000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0400,0x0400,
	0x0760,0x0750,0x0770,0x0400,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0170,0x6078,0x0720,0x0077,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0008,0x0000,0x0007,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0007,0x0000,0x0080,0x8100,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0030,0x2070,0x0030,0x0770,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0270,0x7070,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2000,0x2008,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2007,0x0007,
	0x0000,0x8107,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0030,0x0070,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0673,0x7700,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x1000,0x2020,0x3000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x7005,0x0000,0x7005,0x7007,0x7005,0x0077,0x0000,0x0102,
	0x0000,0x0078,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0700,0x0007,0x2500,0x0008,0x2500,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0070,0x0000,0x0075,0x0070,0x0772,0x1408,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0400,0x5030,0x1430,0x5000,0x5420,0x5000,0x0000,
	0x5000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x7000,0x7003,0x0400,0x3007,0x0600,0x0000,
	0x0700,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0400,0x0070,0x0400,0x0040,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0040,0x0000,0x0040,0x0017,0x0040,0x0008,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0040,0x5004,0x1044,0x7000,0x8040,0x0000,0x0002,
	0x7000,0x0001,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0007,0x0000,0x0007,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0800,0x0005,0x3080,
	0x0105,0x3085,0x0105,0x3080,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x7000,0x0700,
	0x7000,0x0787,0x7000,0x0713,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0770,0x0700,0x7070,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x8000,0x0000,0x8000,0x0000,
	0x8703,0x8000,0x8703,0x5002,0x0003,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4000,
	0x0084,0x4007,0x0081,0x4007,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0200,0x0000,0x0200,
	0x0300,0x0200,0x0100,0x0200,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0080,0x0000,0x0080,
	0x0074,0x0780,0x0077,0x0780,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0020,0x0000,0x0040,0x0000,
	0x0040,0x0000,0x0040,0x0000,0x0000,0x0000,0x0000,0x0000,
};

const unsigned short InstructionsMap[1024] __attribute__((aligned(4)))=
{
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0001,0x0002,0x0003,
	0x0004,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0005,0x0006,0x0007,
	0x0008,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0009,0x000A,0x000B,0x000C,0x000D,0x000E,
	0x000F,0x0010,0x0011,0x0012,0x0013,0x0014,0x0015,0x0016,
	0x0017,0x0018,0x0019,0x001A,0x001B,0x001C,0x001D,0x001E,
	0x001F,0x0020,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0021,0x0022,0x0023,0x0024,0x0025,0x0026,
	0x0027,0x0028,0x0029,0x002A,0x002B,0x002C,0x002D,0x002E,
	0x002F,0x0030,0x0031,0x0032,0x0033,0x0034,0x0035,0x0036,
	0x0037,0x0038,0x0039,0x003A,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x003B,0x003C,0x003D,0x003E,0x003F,0x0040,
	0x0041,0x0042,0x0043,0x0044,0x0045,0x0046,0x0047,0x0048,
	0x0049,0x004A,0x004B,0x004C,0x004D,0x004E,0x004F,0x0050,
	0x0051,0x0052,0x0053,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0054,0x0055,0x0056,0x0057,0x0058,0x0059,
	0x005A,0x005B,0x005C,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x005D,0x005E,0x005F,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0060,0x0061,0x0062,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0063,0x0064,0x0065,0x0066,0x0067,0x0068,
	0x0069,0x006A,0x006B,0x006C,0x006D,0x006E,0x006F,0x0070,
	0x0071,0x0072,0x0073,0x0074,0x0075,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0076,0x0077,0x0078,0x0079,0x007A,0x007B,
	0x007C,0x007D,0x007E,0x007F,0x0080,0x0081,0x0082,0x0083,
	0x0084,0x0085,0x0086,0x0087,0x0088,0x0089,0x008A,0x008B,
	0x008C,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x008D,0x008E,0x008F,0x0090,0x0091,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0092,0x0093,0x0094,0x0095,0x0891,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0096,0x0097,0x0098,0x0099,0x009A,0x009B,
	0x009C,0x009D,0x009E,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x009F,0x00A0,0x00A1,0x00A2,0x00A3,0x00A4,
	0x00A5,0x00A6,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

const unsigned short InstructionsPal[256] __attribute__((aligned(4)))=
{
	0x0000,0x35AD,0x6318,0x1CE7,0x77BD,0x4A52,0x5AD6,0x7FFF,
	0x6F7B,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

//}}BLOCK(Instructions)
