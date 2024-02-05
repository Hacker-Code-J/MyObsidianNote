---

excalidraw-plugin: parsed
tags: [excalidraw]

---
==⚠  Switch to EXCALIDRAW VIEW in the MORE OPTIONS menu of this document. ⚠==


# Text Elements
1 byte ^X56hz9Bs

AES ^8vDp1G0N

128-bit = 16 x 8-bit ^KUPiPgkH

= ^yfSpEw70

8-bit ^LuKWpZK9

Key Schedule 128 ^Pq9HER06

128-bit ^1V1JEToc

1408-bit = 44 X 32-bit ^CkumrwLf

.
.
. ^chPbylAe

KeySchedule128(const u8* uKey, u32* rKey) ^PvPYaUZy

0 ^QdgKowt2

1 ^2i9gmtGq

2 ^8mqEh0CH

3 ^eUwVI6or

4 ^DLsHc56w

5 ^s6OV9AZJ

6 ^tHsNmMB5

7 ^kGdmLr1x

8 ^AEh1fE2M

9 ^c6csVKkK

10 ^NPfed90H

11 ^GDayvvTo

12 ^8hGtClaI

13 ^CDIA1u84

14 ^wLKvEoWD

15 ^MaVieSbt

Round Key 1 ^G2BFPmuY

Round Key 2 ^6iJtYb9L

Round Key 3 ^59pQIttz

0 ^UsKk9xVU

1 ^t93piEDc

2 ^CcANw0KC

3 ^Pus9s5Ye

4 ^iDjPIGMN

5 ^qFDqYGZm

6 ^6ghGHdv5

7 ^rcFGGcUZ

8 ^gpf7DSxv

9 ^nVyIUaLZ

10 ^lveMVwJH

11 ^bAvsXx9H

12 ^Dfana7Bg

13 ^UlsUrtU9

14 ^4P4TXm50

15 ^IXQka8y7

12 ^P8VCoxUe

13 ^JPFCL3nc

14 ^Dj3wbrB4

15 ^t2fAhJfi

12 ^I8WM8kUg

13 ^ciq4QxHc

14 ^qEcQXzuq

15 ^VmE1syYR

S(12) ^GPduDjMG

S(13) ^MJk1FqJd

S(14) ^hMuyCd7j

S(15) ^OxyJBaFp

u32 RotWord(u32 word) {
    return (word << 0x08) | (word >> 0x18);
} ^rAHdZk8h

u32 SubWord(u32 word) {
    return (u32)s_box[word >> 0x18] << 0x18 |
           (u32)s_box[(word >> 0x10) & 0xFF] << 0x10 |
           (u32)s_box[(word >> 0x08) & 0xFF] << 0x08 |
           (u32)s_box[word & 0xFF];
} ^ujqJBsSe

0x00 ^5wImJJ0m

0x00 ^Dbxs3AFr

0x00 ^crrPM4oH

rCon ^1P6LCTvL

const u32 rCon[10] = {
    0x01000000, 0x02000000, 0x04000000, 0x08000000,
    0x10000000, 0x20000000, 0x40000000, 0x80000000,
    0x1b000000, 0x36000000
}; ^MpSaWiDY

S-Box ^qQriX36K

0 ^ZK9a8EGd

1 ^2KEudYCt

2 ^Uzw6Zs2q

3 ^sbyhaapY

4 ^d9lgH6Uj

5 ^OtCVx475

6 ^On4VVzGd

7 ^wDZCj1mv

8 ^1ILhft1I

9 ^PlMpawax

10 ^qGtHEW9P

11 ^dWnFrOYi

12 ^326CNhCE

13 ^x7Dlj2co

14 ^ovwnJFCW

15 ^q6GUF9u9

Round Key 4 ^tX3u2on1

Round Key 5 ^FQVjoKb8

Round Key 6 ^pckWkLuJ

Round Key 7 ^anx2hvn7

rCon ^lHksGS0U

0x00 ^YPLmGpat

0x00 ^zVlYTVfm

0x00 ^U2mBYeKR

S-Box ^wET1qKD9

Round Key 8 ^m0ezH3Oj

Round Key 9 ^5PuxRCMp

Round Key 10 ^qAytf4Rf

Round Key 11 ^jN0h2ljL

Round Key 4 ^uzyiGpr8

Round Key 5 ^rzgGssfI

Round Key 6 ^rwTE9J4B

Round Key 7 ^xGWhIIMO

Add Round Key ^mub3E6qc

0 ^pJQ0CuBI

4 ^jvqHJuZE

8 ^aWNYUn9Y

12 ^IS5lRJss

1 ^me7Y3IYm

5 ^aeHahhYa

9 ^ko0zGmRs

13 ^sp7nJrmL

2 ^WETHB3tI

6 ^5BSuKiTC

10 ^jBfV6Tle

14 ^f3M2BTXb

3 ^JXLh0jHX

7 ^ra9L2sR7

11 ^XCsGsuNJ

15 ^4sLpLDNn

void AddRoundKey(u8* state, const u32* rKey) {
    for (int i = 0; i < 16; i++) {
        state[i] ^= (rKey[i / 4] >> (8 * (3 - (i % 4)))) & 0xFF;
    }
} ^rBty1FUY

void KeySchedule128(const u8* uKey, u32* rKey) {
    u32 temp;
    for (int i = 0; i < 4; i++) {
        rKey[i] = (u32)uKey[4*i] << 0x18 | 
                  (u32)uKey[4*i+1] << 0x10 | 
                  (u32)uKey[4*i+2] << 0x08 | 
                  (u32)uKey[4*i+3];
    }
    
    for (int i = 4; i < (10 + 1) * 4; i++) {
        temp = rKey[i - 1];
        if (i % 4 == 0)
            temp = SubWord(RotWord(temp)) ^ rCon[(i / 4) - 1];
        temp = SubWord(temp);
        }
    rKey[i] = rKey[i - Nk] ^ temp;
    }
} ^4gEp7Bez

0 ^WQ1Jfewx

4 ^VDOHv0nf

8 ^hPdu9tYa

12 ^7746ZMaB

1 ^iLP3frdV

5 ^QHL8s9OJ

9 ^3ydTREHg

13 ^pc5LHUSq

2 ^sdnqkUIf

6 ^s8ZDHI1j

10 ^lqeDDaGy

14 ^eIEeIrGx

3 ^bsr8eXAy

7 ^UNXpxfRS

11 ^ovnjIW79

15 ^OLYx1I0H

Round Key 0 ^R6wZEpVL

rk0 ^oLcQ06yj

0 ^Cy1IcBBh

1 ^XpbWomov

2 ^uBO1zGAV

3 ^aiWGzXB4

4 ^UAsneJEV

5 ^YT9DkOC4

6 ^PDO0kcB8

7 ^Y4upUvRV

8 ^SjraG8Mh

9 ^wvfAT0UF

10 ^hxXt6nOM

11 ^Zm2dYOgG

12 ^zd0kS7F5

13 ^mALY3FUa

14 ^ZTHIxM0V

15 ^wP13ocYp

rk1 ^CqxVBHPk

rk2 ^436ATPAG

rk3 ^cq6JsVjr

void SubBytes(u8* state) {
    for (int i = 0; i < 16; i++)
        state[i] = sbox[state[i]];
}

void InvSubBytes(u8* state) {
    for (int i = 0; i < 16; i++) {
        state[i] = inv_sbox[state[i]];
} ^2yMKYsjW

SubBytes / InvSubBytes ^TJn8ng4F

state ^v0T7WGvL

state ^s1FyVshv

state ^1rRBI44w

state ^B9MmRg3c

state ^IsWGI9q6

state ^LgMdus1x

state ^WnOUltCs

state ^A8FJ1ytX

state ^EBhc1PYq

state ^gLZSPaMC

state ^QluQfgo8

state ^vuvJdsjs

state ^rwzN1CIv

state ^4movLlf4

state ^NHhCevxK

state ^Rt7KqTsm

S-Box ^4zQdRfuT

15 ^kI9RoiCS

0 ^1GxVv9YB

3 ^GWrHOqRW

4 ^GyA7mPIH

7 ^sYjQssem

8 ^PhCUOJ1G

11 ^n66wNJ6w

12 ^TwPqlrfp

1 byte ^Ea9UXp9H

= ^rK8iB5IN

8-bit ^WcOQLb7B

16-byte = 128-bit ^YbhCtNw3

state ^7eFTjbdB

AddRoundKey ^3BaP7oYv

rk[0] ^JW9xvPVz

rk[1] ^U20mtaQi

rk[2] ^nUiBFIEv

rk[3] ^fMUpw44x

state ^LDypkBqW

u8 x 16 ^R49EeUX5

SIZE: u32 x 4
MAP: (u8, u32) -> u8 ^zEUZfm6P

s ^okvvyhCg

s ^b9XmUWqy

s ^pglTQxtk

s ^RkNva8NE

s ^SFtuqNRS

s ^iB0WsqMu

s ^Jkk1Mius

s ^0kQJCyGy

s ^qk0sXtl3

s ^nCHPDDa0

s ^07AQIfTZ

s ^mP4Qq5LR

s ^V78mwhHG

s ^V5UwHsUa

s ^EeGlCde0

s ^cwktfDqM

SubBytes ^eV5WmyIA

SIZE: u8 x 16
MAP: u8 -> u8 ^6y5Ml238

ShiftRows ^23ziavq3

%%
# Drawing
```json
{
	"type": "excalidraw",
	"version": 2,
	"source": "https://github.com/zsviczian/obsidian-excalidraw-plugin/releases/tag/2.0.20",
	"elements": [
		{
			"id": "APAg-6aUEzQC_uNTJwEsR",
			"type": "arrow",
			"x": 1942.8615416254656,
			"y": 124.5988996589557,
			"width": 1.0892729063748448,
			"height": 175.37293792634694,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 1964506619,
			"version": 117,
			"versionNonce": 1230094229,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1707109565871,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.0892729063748448,
					175.37293792634694
				]
			],
			"lastCommittedPoint": [
				1.0892729063748448,
				175.37293792634694
			],
			"startBinding": {
				"elementId": "KtSbW9Txes0U092nD7ZOO",
				"focus": 0.03171761680685734,
				"gap": 1
			},
			"endBinding": {
				"elementId": "lwgCTA_hOWW_rffQoyOgW",
				"focus": -0.03287344823714701,
				"gap": 1.5719574996975325
			},
			"startArrowhead": null,
			"endArrowhead": "arrow"
		},
		{
			"id": "PfgenV-bJX_cPND-Bvy3W",
			"type": "arrow",
			"x": 1945.0400874382153,
			"y": -177.12969540687106,
			"width": 1.0892729063748448,
			"height": 230.925856151463,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"seed": 1781749013,
			"version": 211,
			"versionNonce": 1623585755,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1707109842584,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					191.71203152196932
				],
				[
					-1.0892729063748448,
					230.925856151463
				]
			],
			"lastCommittedPoint": [
				-1.0892729063748448,
				230.925856151463
			],
			"startBinding": {
				"elementId": "7zhfm18FYdvCNuyoDE4Ef",
				"gap": 1.1917629534399339,
				"focus": 0.030352671059147844
			},
			"endBinding": {
				"elementId": "KtSbW9Txes0U092nD7ZOO",
				"focus": -0.024607784567854906,
				"gap": 5.5842465550458655
			},
			"startArrowhead": null,
			"endArrowhead": "arrow"
		},
		{
			"type": "rectangle",
			"version": 288,
			"versionNonce": 746521845,
			"isDeleted": false,
			"id": "VTjG5SxmWSFnDpFAY7rS9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -943.2792672709834,
			"y": -440.6811428410505,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1401465809,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "X56hz9Bs"
				}
			],
			"updated": 1707109565871,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 201,
			"versionNonce": 580366555,
			"isDeleted": false,
			"id": "X56hz9Bs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -936.4282029658281,
			"y": -420.7301105793522,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 57.19993591308594,
			"height": 25,
			"seed": 1488520209,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565871,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "1 byte",
			"rawText": "1 byte",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "VTjG5SxmWSFnDpFAY7rS9",
			"originalText": "1 byte",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "text",
			"version": 158,
			"versionNonce": 949788245,
			"isDeleted": false,
			"id": "8vDp1G0N",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -936.9986294491008,
			"y": -579.3488553475676,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 188.56149291992188,
			"height": 121.64671426157575,
			"seed": 552365905,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565871,
			"link": null,
			"locked": false,
			"fontSize": 97.3173714092606,
			"fontFamily": 1,
			"text": "AES",
			"rawText": "AES",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "AES",
			"lineHeight": 1.25,
			"baseline": 85
		},
		{
			"type": "text",
			"version": 272,
			"versionNonce": 599973243,
			"isDeleted": false,
			"id": "KUPiPgkH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -545.0673734340171,
			"y": -739.7977626482053,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 200.1797637939453,
			"height": 25,
			"seed": 741130207,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565871,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "128-bit = 16 x 8-bit",
			"rawText": "128-bit = 16 x 8-bit",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "128-bit = 16 x 8-bit",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 382,
			"versionNonce": 343935925,
			"isDeleted": false,
			"id": "KrqBL1n6048IqX_vG1md0",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -825.8425707889755,
			"y": -438.22112638178567,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 825513969,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565871,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 113,
			"versionNonce": 2082436635,
			"isDeleted": false,
			"id": "yfSpEw70",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -860.3915385272771,
			"y": -426.7700941200874,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 21.334671020507812,
			"height": 43.23341531544564,
			"seed": 1144325265,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565871,
			"link": null,
			"locked": false,
			"fontSize": 34.58673225235651,
			"fontFamily": 1,
			"text": "=",
			"rawText": "=",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "=",
			"lineHeight": 1.25,
			"baseline": 30
		},
		{
			"type": "line",
			"version": 100,
			"versionNonce": 1884212501,
			"isDeleted": false,
			"id": "wMOBRhIT8HbgXbkYLGEE5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -790.83303888111,
			"y": -437.7700941200874,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 65,
			"seed": 363213265,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565871,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					65
				]
			]
		},
		{
			"type": "line",
			"version": 119,
			"versionNonce": 446692027,
			"isDeleted": false,
			"id": "1G8ulxiFi_6Mw9jtgzxie",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -772.2234042370226,
			"y": -437.81281044721175,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 65,
			"seed": 646041521,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565871,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					65
				]
			]
		},
		{
			"type": "line",
			"version": 163,
			"versionNonce": 1535009397,
			"isDeleted": false,
			"id": "wL1VzrER3krzqvYMQEj7U",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -809.0656204489214,
			"y": -438.2705139876016,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 65,
			"seed": 971944337,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565871,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					65
				]
			]
		},
		{
			"type": "line",
			"version": 121,
			"versionNonce": 1810295643,
			"isDeleted": false,
			"id": "7gy1GX35Ft74B8zvBEyCH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -825.5148657509662,
			"y": -405.07284796313627,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.72335270600149,
			"height": 1.081396830366998,
			"seed": 1965315953,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565871,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					70.72335270600149,
					-1.081396830366998
				]
			]
		},
		{
			"type": "text",
			"version": 140,
			"versionNonce": 1523862485,
			"isDeleted": false,
			"id": "LuKWpZK9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -814.4811849647499,
			"y": -458.96108003040024,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 49.35993957519531,
			"height": 25,
			"seed": 1539134321,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565871,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "8-bit",
			"rawText": "8-bit",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "8-bit",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 367,
			"versionNonce": 608618491,
			"isDeleted": false,
			"id": "cNKxMshdM9QvQnb1zEP3h",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -531.90525992187,
			"y": -503.9126411057267,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2019313969,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565871,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 702,
			"versionNonce": 1046874421,
			"isDeleted": false,
			"id": "RaTrcx5YuKvNwI0MZpeQX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -529.8998565623995,
			"y": -619.4659851413558,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 96047121,
			"groupIds": [
				"E8lXjutXLj9TGdkJLjRWy"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565871,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 737,
			"versionNonce": 1237455003,
			"isDeleted": false,
			"id": "g476AUJprXbLdbAbvkNrv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -457.89985656239946,
			"y": -620.4659851413558,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1896834545,
			"groupIds": [
				"E8lXjutXLj9TGdkJLjRWy"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565871,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 778,
			"versionNonce": 932780693,
			"isDeleted": false,
			"id": "gEgyLTAmjqx5q3Km_Kns4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -385.89985656239946,
			"y": -621.4659851413558,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 49250257,
			"groupIds": [
				"E8lXjutXLj9TGdkJLjRWy"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565871,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 829,
			"versionNonce": 2114667835,
			"isDeleted": false,
			"id": "KIpQRZcek03Llwrai1gBj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -313.89985656239946,
			"y": -620.4659851413558,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2037472689,
			"groupIds": [
				"E8lXjutXLj9TGdkJLjRWy"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565871,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 174,
			"versionNonce": 790822901,
			"isDeleted": false,
			"id": "Pq9HER06",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -942.186407279952,
			"y": -308.28620635892577,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 355.95050048828125,
			"height": 52.50135083986754,
			"seed": 680648127,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565871,
			"link": null,
			"locked": false,
			"fontSize": 42.00108067189403,
			"fontFamily": 1,
			"text": "Key Schedule 128",
			"rawText": "Key Schedule 128",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Key Schedule 128",
			"lineHeight": 1.25,
			"baseline": 36
		},
		{
			"type": "rectangle",
			"version": 578,
			"versionNonce": 142927323,
			"isDeleted": false,
			"id": "lbUQKqC9lWXHdbwXCYPfN",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -945.462239769681,
			"y": -166.84290649241234,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 319669439,
			"groupIds": [
				"F4yXK2E895H37IDC85831",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "QdgKowt2"
				}
			],
			"updated": 1707109565872,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 83,
			"versionNonce": 1527331157,
			"isDeleted": false,
			"id": "QdgKowt2",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -916.8912047614007,
			"y": -146.89187423071405,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 13.759994506835938,
			"height": 25,
			"seed": 703549553,
			"groupIds": [
				"F4yXK2E895H37IDC85831",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565872,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "0",
			"rawText": "0",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "lbUQKqC9lWXHdbwXCYPfN",
			"originalText": "0",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 613,
			"versionNonce": 541160059,
			"isDeleted": false,
			"id": "CbTn2oL88hnizUtTql36v",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -873.462239769681,
			"y": -167.84290649241234,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 328520927,
			"groupIds": [
				"F4yXK2E895H37IDC85831",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "2i9gmtGq"
				}
			],
			"updated": 1707109565872,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 83,
			"versionNonce": 346113717,
			"isDeleted": false,
			"id": "2i9gmtGq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -840.7212065924554,
			"y": -147.89187423071405,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.4199981689453125,
			"height": 25,
			"seed": 79292881,
			"groupIds": [
				"F4yXK2E895H37IDC85831",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565872,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "1",
			"rawText": "1",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "CbTn2oL88hnizUtTql36v",
			"originalText": "1",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 654,
			"versionNonce": 1979935515,
			"isDeleted": false,
			"id": "TnZU6tFgQBzRWuptsS1to",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -801.4622397696809,
			"y": -168.84290649241234,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1829036287,
			"groupIds": [
				"F4yXK2E895H37IDC85831",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "8mqEh0CH"
				}
			],
			"updated": 1707109565872,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 83,
			"versionNonce": 1854973973,
			"isDeleted": false,
			"id": "8mqEh0CH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -773.1312026251701,
			"y": -148.89187423071405,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 14.239990234375,
			"height": 25,
			"seed": 1792583473,
			"groupIds": [
				"F4yXK2E895H37IDC85831",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565872,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "2",
			"rawText": "2",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "TnZU6tFgQBzRWuptsS1to",
			"originalText": "2",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 705,
			"versionNonce": 2117947323,
			"isDeleted": false,
			"id": "YGLzkuY862dKTXada6NUZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -729.4622397696809,
			"y": -167.84290649241234,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 283011359,
			"groupIds": [
				"F4yXK2E895H37IDC85831",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "eUwVI6or"
				}
			],
			"updated": 1707109565872,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 83,
			"versionNonce": 181198197,
			"isDeleted": false,
			"id": "eUwVI6or",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -700.8211974371818,
			"y": -147.89187423071405,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 13.619979858398438,
			"height": 25,
			"seed": 255133841,
			"groupIds": [
				"F4yXK2E895H37IDC85831",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565872,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "3",
			"rawText": "3",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "YGLzkuY862dKTXada6NUZ",
			"originalText": "3",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 640,
			"versionNonce": 2064752731,
			"isDeleted": false,
			"id": "ZhezDouLl32dVbMP5ZDSj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -942.462239769681,
			"y": -100.84290649241234,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1821502783,
			"groupIds": [
				"F4yXK2E895H37IDC85831",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "DLsHc56w"
				}
			],
			"updated": 1707109565872,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 83,
			"versionNonce": 815490773,
			"isDeleted": false,
			"id": "DLsHc56w",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -913.4112014044671,
			"y": -80.89187423071405,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.79998779296875,
			"height": 25,
			"seed": 583568881,
			"groupIds": [
				"F4yXK2E895H37IDC85831",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565872,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "4",
			"rawText": "4",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "ZhezDouLl32dVbMP5ZDSj",
			"originalText": "4",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 675,
			"versionNonce": 1179835643,
			"isDeleted": false,
			"id": "VhG6DmnMNcAGPuIfM2PqJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -870.462239769681,
			"y": -101.84290649241234,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1803545951,
			"groupIds": [
				"F4yXK2E895H37IDC85831",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "s6OV9AZJ"
				}
			],
			"updated": 1707109565872,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 83,
			"versionNonce": 579978293,
			"isDeleted": false,
			"id": "s6OV9AZJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -841.191200183764,
			"y": -81.89187423071405,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.3599853515625,
			"height": 25,
			"seed": 178042705,
			"groupIds": [
				"F4yXK2E895H37IDC85831",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565872,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "5",
			"rawText": "5",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "VhG6DmnMNcAGPuIfM2PqJ",
			"originalText": "5",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 716,
			"versionNonce": 1535346075,
			"isDeleted": false,
			"id": "-0NIJYkTtNahrlzS6ib4I",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -798.4622397696808,
			"y": -102.84290649241234,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 955836799,
			"groupIds": [
				"F4yXK2E895H37IDC85831",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "tHsNmMB5"
				}
			],
			"updated": 1707109565872,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 83,
			"versionNonce": 882210197,
			"isDeleted": false,
			"id": "tHsNmMB5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -769.4112014044669,
			"y": -82.89187423071405,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.79998779296875,
			"height": 25,
			"seed": 1439368369,
			"groupIds": [
				"F4yXK2E895H37IDC85831",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565872,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "6",
			"rawText": "6",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "-0NIJYkTtNahrlzS6ib4I",
			"originalText": "6",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 767,
			"versionNonce": 567679547,
			"isDeleted": false,
			"id": "mx_mvg8AXggpRtvxOxAdQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -726.4622397696808,
			"y": -101.84290649241234,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1111318943,
			"groupIds": [
				"F4yXK2E895H37IDC85831",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "kGdmLr1x"
				}
			],
			"updated": 1707109565872,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 83,
			"versionNonce": 568064757,
			"isDeleted": false,
			"id": "kGdmLr1x",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -696.3912047614004,
			"y": -81.89187423071405,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 10.759994506835938,
			"height": 25,
			"seed": 1937569297,
			"groupIds": [
				"F4yXK2E895H37IDC85831",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565872,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "7",
			"rawText": "7",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "mx_mvg8AXggpRtvxOxAdQ",
			"originalText": "7",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 630,
			"versionNonce": 1982667483,
			"isDeleted": false,
			"id": "pYmfsxpE_Kc8UhWlg8FL2",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -943.462239769681,
			"y": -33.84290649241234,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2021512639,
			"groupIds": [
				"F4yXK2E895H37IDC85831",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "AEh1fE2M"
				}
			],
			"updated": 1707109565872,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 83,
			"versionNonce": 585815125,
			"isDeleted": false,
			"id": "AEh1fE2M",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -915.6612014044671,
			"y": -13.891874230714052,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 15.29998779296875,
			"height": 25,
			"seed": 686558065,
			"groupIds": [
				"F4yXK2E895H37IDC85831",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565872,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "8",
			"rawText": "8",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "pYmfsxpE_Kc8UhWlg8FL2",
			"originalText": "8",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 666,
			"versionNonce": 1964705659,
			"isDeleted": false,
			"id": "QCFUzJZqo2GEkwRi5TS5A",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -871.462239769681,
			"y": -34.84290649241234,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1390069215,
			"groupIds": [
				"F4yXK2E895H37IDC85831",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "c6csVKkK"
				}
			],
			"updated": 1707109565872,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 80,
			"versionNonce": 1134002613,
			"isDeleted": false,
			"id": "c6csVKkK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -842.1012038458733,
			"y": -14.891874230714052,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.17999267578125,
			"height": 25,
			"seed": 698774449,
			"groupIds": [
				"F4yXK2E895H37IDC85831",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565872,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "9",
			"rawText": "9",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "QCFUzJZqo2GEkwRi5TS5A",
			"originalText": "9",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 706,
			"versionNonce": 81944603,
			"isDeleted": false,
			"id": "3v3ShA7h3yriV7NJwRC7D",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -799.4622397696808,
			"y": -35.84290649241234,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 275034623,
			"groupIds": [
				"F4yXK2E895H37IDC85831",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "NPfed90H"
				}
			],
			"updated": 1707109565872,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 82,
			"versionNonce": 2030535445,
			"isDeleted": false,
			"id": "NPfed90H",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -773.6012038458731,
			"y": -15.891874230714052,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.17999267578125,
			"height": 25,
			"seed": 626197777,
			"groupIds": [
				"F4yXK2E895H37IDC85831",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565872,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "10",
			"rawText": "10",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "3v3ShA7h3yriV7NJwRC7D",
			"originalText": "10",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 757,
			"versionNonce": 527803579,
			"isDeleted": false,
			"id": "sGQUIVQPggy2bjcHgt1Uq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -727.4622397696808,
			"y": -34.84290649241234,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 974920223,
			"groupIds": [
				"F4yXK2E895H37IDC85831",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "GDayvvTo"
				}
			],
			"updated": 1707109565872,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 82,
			"versionNonce": 2008045685,
			"isDeleted": false,
			"id": "GDayvvTo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -697.4312056769278,
			"y": -14.891874230714052,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 10.839996337890625,
			"height": 25,
			"seed": 114967633,
			"groupIds": [
				"F4yXK2E895H37IDC85831",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565872,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "11",
			"rawText": "11",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "sGQUIVQPggy2bjcHgt1Uq",
			"originalText": "11",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 613,
			"versionNonce": 1551324507,
			"isDeleted": false,
			"id": "dgTWZYvDEn7gjrvtpNih3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -942.462239769681,
			"y": 32.15709350758766,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1693548095,
			"groupIds": [
				"F4yXK2E895H37IDC85831",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "8hGtClaI"
				}
			],
			"updated": 1707109565872,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 82,
			"versionNonce": 1230471637,
			"isDeleted": false,
			"id": "8hGtClaI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -916.8412017096429,
			"y": 52.10812576928595,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.659988403320312,
			"height": 25,
			"seed": 708383633,
			"groupIds": [
				"F4yXK2E895H37IDC85831",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565872,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "12",
			"rawText": "12",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "dgTWZYvDEn7gjrvtpNih3",
			"originalText": "12",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 648,
			"versionNonce": 993653243,
			"isDeleted": false,
			"id": "1vA0SOrwjTs2NrBLIly_j",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -870.462239769681,
			"y": 31.15709350758766,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 868572767,
			"groupIds": [
				"F4yXK2E895H37IDC85831",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "CDIA1u84"
				}
			],
			"updated": 1707109565872,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 82,
			"versionNonce": 588414773,
			"isDeleted": false,
			"id": "CDIA1u84",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -844.5311965216546,
			"y": 51.10812576928595,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.03997802734375,
			"height": 25,
			"seed": 1283683025,
			"groupIds": [
				"F4yXK2E895H37IDC85831",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565872,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "13",
			"rawText": "13",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "1vA0SOrwjTs2NrBLIly_j",
			"originalText": "13",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 689,
			"versionNonce": 750779035,
			"isDeleted": false,
			"id": "3f1Q_e2YF1cP-2OpQM5ja",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -798.4622397696808,
			"y": 30.15709350758766,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 426261119,
			"groupIds": [
				"F4yXK2E895H37IDC85831",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "wLKvEoWD"
				}
			],
			"updated": 1707109565872,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 82,
			"versionNonce": 2068238485,
			"isDeleted": false,
			"id": "wLKvEoWD",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -772.1212004889395,
			"y": 50.10812576928595,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 18.219985961914062,
			"height": 25,
			"seed": 1271751185,
			"groupIds": [
				"F4yXK2E895H37IDC85831",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565872,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "14",
			"rawText": "14",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "3f1Q_e2YF1cP-2OpQM5ja",
			"originalText": "14",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 740,
			"versionNonce": 1572597563,
			"isDeleted": false,
			"id": "Ehw_J5RUv-cZACwvOHQOj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -726.4622397696808,
			"y": 31.15709350758766,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1520079519,
			"groupIds": [
				"F4yXK2E895H37IDC85831",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "MaVieSbt"
				}
			],
			"updated": 1707109565872,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 82,
			"versionNonce": 1604974069,
			"isDeleted": false,
			"id": "MaVieSbt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -699.9011992682364,
			"y": 51.10812576928595,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 17.779983520507812,
			"height": 25,
			"seed": 1730863441,
			"groupIds": [
				"F4yXK2E895H37IDC85831",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565872,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "15",
			"rawText": "15",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "Ehw_J5RUv-cZACwvOHQOj",
			"originalText": "15",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "text",
			"version": 286,
			"versionNonce": 1083199451,
			"isDeleted": false,
			"id": "1V1JEToc",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -833.8120945081341,
			"y": -208.1616267289922,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 69.01992797851562,
			"height": 25,
			"seed": 1469346417,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565872,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "128-bit",
			"rawText": "128-bit",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "128-bit",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "text",
			"version": 433,
			"versionNonce": 188837717,
			"isDeleted": false,
			"id": "CkumrwLf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -361.05077768945876,
			"y": -205.52691236871544,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 233.15972900390625,
			"height": 25,
			"seed": 2139075615,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565872,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "1408-bit = 44 X 32-bit",
			"rawText": "1408-bit = 44 X 32-bit",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "1408-bit = 44 X 32-bit",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1398,
			"versionNonce": 1464835195,
			"isDeleted": false,
			"id": "VSe42cW8xv4ihymaGevEr",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -714.3028783914484,
			"y": 698.2233100393096,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 163755551,
			"groupIds": [
				"MGPCIMhso9xvLU4rxKq8X",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "KNXaJgnDmAgnSZ6cgiXOG",
					"type": "arrow"
				}
			],
			"updated": 1707109565872,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1434,
			"versionNonce": 1013103797,
			"isDeleted": false,
			"id": "fbHKwgW8VRRMmp832_gQq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -642.3028783914484,
			"y": 697.2233100393096,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1030003263,
			"groupIds": [
				"MGPCIMhso9xvLU4rxKq8X",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "FxeOUATNQnZtQYZGw0-RB",
					"type": "arrow"
				},
				{
					"id": "FKwvPef7AZM8B0nyNjAtO",
					"type": "arrow"
				}
			],
			"updated": 1707109565872,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1472,
			"versionNonce": 1035752731,
			"isDeleted": false,
			"id": "Rf-fVMwyCy9ucg7LFvdDK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -570.3028783914484,
			"y": 696.2233100393096,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1198848607,
			"groupIds": [
				"MGPCIMhso9xvLU4rxKq8X",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "FxeOUATNQnZtQYZGw0-RB",
					"type": "arrow"
				}
			],
			"updated": 1707109565872,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1524,
			"versionNonce": 1253269013,
			"isDeleted": false,
			"id": "cQ7OraStRgSbzPhID7wA9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -498.3028783914484,
			"y": 697.2233100393096,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1287935615,
			"groupIds": [
				"MGPCIMhso9xvLU4rxKq8X",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565872,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 409,
			"versionNonce": 1934162363,
			"isDeleted": false,
			"id": "chPbylAe",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -886.6103534499986,
			"y": 2372.2339094707845,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.4799957275390625,
			"height": 75,
			"seed": 265931839,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565872,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": ".\n.\n.",
			"rawText": ".\n.\n.",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": ".\n.\n.",
			"lineHeight": 1.25,
			"baseline": 68
		},
		{
			"type": "rectangle",
			"version": 1152,
			"versionNonce": 2099827573,
			"isDeleted": false,
			"id": "JMR2KrUhSZMu32fIXVHgM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -716.7311259246325,
			"y": 1723.343294273217,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 763359793,
			"groupIds": [
				"Q7x36DCUlwepWI5KxwLB6",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565872,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1187,
			"versionNonce": 1696074331,
			"isDeleted": false,
			"id": "HwCCNRBEY9owL3Fh31N1K",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -644.7311259246325,
			"y": 1722.343294273217,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 839156753,
			"groupIds": [
				"Q7x36DCUlwepWI5KxwLB6",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565872,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1228,
			"versionNonce": 537435349,
			"isDeleted": false,
			"id": "_t--f7ZWmzE9i_gKP1iXz",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -572.7311259246325,
			"y": 1721.343294273217,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1071372785,
			"groupIds": [
				"Q7x36DCUlwepWI5KxwLB6",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565872,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1279,
			"versionNonce": 939263739,
			"isDeleted": false,
			"id": "cAaREmsr1RQFxOD4M7cpq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -500.73112592463247,
			"y": 1722.343294273217,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 671970257,
			"groupIds": [
				"Q7x36DCUlwepWI5KxwLB6",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565872,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 161,
			"versionNonce": 1525168693,
			"isDeleted": false,
			"id": "PvPYaUZy",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -769.0810922624197,
			"y": -248.04515213826375,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 480.46875,
			"height": 24,
			"seed": 1935541215,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565872,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "KeySchedule128(const u8* uKey, u32* rKey)",
			"rawText": "KeySchedule128(const u8* uKey, u32* rKey)",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "KeySchedule128(const u8* uKey, u32* rKey)",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "text",
			"version": 376,
			"versionNonce": 1383559067,
			"isDeleted": false,
			"id": "G2BFPmuY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -99.86085054722275,
			"y": -82.44116574674052,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 114.71987915039062,
			"height": 25,
			"seed": 616467775,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565872,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "Round Key 1",
			"rawText": "Round Key 1",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Round Key 1",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "text",
			"version": 400,
			"versionNonce": 1185754005,
			"isDeleted": false,
			"id": "6iJtYb9L",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -99.61961678397302,
			"y": -14.342582714687467,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 123.53987121582031,
			"height": 25,
			"seed": 1367899263,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565872,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "Round Key 2",
			"rawText": "Round Key 2",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Round Key 2",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "text",
			"version": 398,
			"versionNonce": 649905211,
			"isDeleted": false,
			"id": "59pQIttz",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -97.00044051350915,
			"y": 53.75600031736536,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 122.91986083984375,
			"height": 25,
			"seed": 234882481,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565872,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "Round Key 3",
			"rawText": "Round Key 3",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Round Key 3",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "ellipse",
			"version": 114,
			"versionNonce": 1133310197,
			"isDeleted": false,
			"id": "_a2f6IYyTmH1CCQUigtWB",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -968.1384888176515,
			"y": -178.63698097097887,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 337.8737388898013,
			"height": 79.88487624913904,
			"seed": 901797393,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565872,
			"link": null,
			"locked": false
		},
		{
			"type": "arrow",
			"version": 317,
			"versionNonce": 471189947,
			"isDeleted": false,
			"id": "r38MEanYqMIomByPnbHWE",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -632.8839261983138,
			"y": -134.11098437309806,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 217.3916304484768,
			"height": 0,
			"seed": 1565184479,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109842578,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "sFLsuIm_dUPnTBebsF0qo",
				"gap": 9.580367695652626,
				"focus": 0.0014331493623033261
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					217.3916304484768,
					0
				]
			]
		},
		{
			"type": "ellipse",
			"version": 181,
			"versionNonce": 252512853,
			"isDeleted": false,
			"id": "NlX4MGamw7KhIEddvvm3-",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -972.7220472909626,
			"y": -109.88360387130996,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 337.8737388898013,
			"height": 79.88487624913904,
			"seed": 319704095,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565873,
			"link": null,
			"locked": false
		},
		{
			"type": "arrow",
			"version": 462,
			"versionNonce": 2076891739,
			"isDeleted": false,
			"id": "M2SaF_sosiZmlPCNJp6MR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -638.7770728068566,
			"y": -65.35760727342918,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 222.62998298940397,
			"height": 2.6191762704635835,
			"seed": 80572479,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109842578,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "4xmzxtGFQzETfmpGHwzRg",
				"gap": 13.235161763268252,
				"focus": -0.1794695880681101
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					222.62998298940397,
					2.6191762704635835
				]
			]
		},
		{
			"type": "ellipse",
			"version": 199,
			"versionNonce": 436402101,
			"isDeleted": false,
			"id": "b9d0zshBVgjEZKqcTumyG",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -966.1741066148038,
			"y": -43.09460897448875,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 337.8737388898013,
			"height": 79.88487624913904,
			"seed": 2011415711,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565873,
			"link": null,
			"locked": false
		},
		{
			"type": "arrow",
			"version": 556,
			"versionNonce": 265606907,
			"isDeleted": false,
			"id": "KNXaJgnDmAgnSZ6cgiXOG",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -630.919543995466,
			"y": 1.4313876233920553,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 215.42724824562902,
			"height": 8.881784197001252e-16,
			"seed": 291494079,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109842578,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "tV_SB2EWl4r3T_ko8R6Z8",
				"gap": 11.580367695652626,
				"focus": -0.07691172349065863
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					215.42724824562902,
					8.881784197001252e-16
				]
			]
		},
		{
			"type": "ellipse",
			"version": 165,
			"versionNonce": 513030421,
			"isDeleted": false,
			"id": "5BnOn6lb6xl0gLRfrkdkH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -967.4836947500355,
			"y": 23.694385922332344,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 337.8737388898013,
			"height": 79.88487624913904,
			"seed": 170073713,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565873,
			"link": null,
			"locked": false
		},
		{
			"type": "arrow",
			"version": 439,
			"versionNonce": 1454784411,
			"isDeleted": false,
			"id": "7v_Is6QWj1QHfGJcuRGPl",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -632.229132130698,
			"y": 66.9107943849815,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 216.73683638086095,
			"height": 0,
			"seed": 569911377,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109842578,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "v7_p_Y3YbNgMRaF3xT7Lg",
				"gap": 12.580367695652626,
				"focus": -0.06086929888572524
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					216.73683638086095,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1379,
			"versionNonce": 1983270517,
			"isDeleted": false,
			"id": "G6DLWkPDPkaQx2uaBwReK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -60.99134721211999,
			"y": 621.3565315868109,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 525470897,
			"groupIds": [
				"c3Y3l-_yk7vUmgo2BDWrC",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "1P6LCTvL"
				}
			],
			"updated": 1707109565873,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 251,
			"versionNonce": 1777581915,
			"isDeleted": false,
			"id": "1P6LCTvL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -48.97781495042169,
			"y": 641.8075638485092,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1761994449,
			"groupIds": [
				"c3Y3l-_yk7vUmgo2BDWrC",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565873,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "rCon",
			"rawText": "rCon",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "G6DLWkPDPkaQx2uaBwReK",
			"originalText": "rCon",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1415,
			"versionNonce": 799979477,
			"isDeleted": false,
			"id": "vVdHLJUvugsrkkfkgCkHf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 11.00865278788001,
			"y": 620.3565315868109,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 128929425,
			"groupIds": [
				"c3Y3l-_yk7vUmgo2BDWrC",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "5wImJJ0m"
				}
			],
			"updated": 1707109565873,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 308,
			"versionNonce": 1905859579,
			"isDeleted": false,
			"id": "5wImJJ0m",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 23.02218504957831,
			"y": 640.8075638485092,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1022335761,
			"groupIds": [
				"c3Y3l-_yk7vUmgo2BDWrC",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565873,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "0x00",
			"rawText": "0x00",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "vVdHLJUvugsrkkfkgCkHf",
			"originalText": "0x00",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1457,
			"versionNonce": 1695741237,
			"isDeleted": false,
			"id": "iFihDn5Yiwf_57DNwSLN4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 83.00865278788001,
			"y": 619.3565315868109,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1523143793,
			"groupIds": [
				"c3Y3l-_yk7vUmgo2BDWrC",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "Dbxs3AFr"
				}
			],
			"updated": 1707109565873,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 306,
			"versionNonce": 1638524059,
			"isDeleted": false,
			"id": "Dbxs3AFr",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 95.02218504957831,
			"y": 639.8075638485092,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 958819199,
			"groupIds": [
				"c3Y3l-_yk7vUmgo2BDWrC",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565873,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "0x00",
			"rawText": "0x00",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "iFihDn5Yiwf_57DNwSLN4",
			"originalText": "0x00",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1505,
			"versionNonce": 1372096149,
			"isDeleted": false,
			"id": "AEyDpTSayPmbMji_1v_kX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 155.00865278788,
			"y": 620.3565315868109,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 744988241,
			"groupIds": [
				"c3Y3l-_yk7vUmgo2BDWrC",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "crrPM4oH"
				}
			],
			"updated": 1707109565873,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 305,
			"versionNonce": 1910020411,
			"isDeleted": false,
			"id": "crrPM4oH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 167.0221850495783,
			"y": 640.8075638485092,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 219385585,
			"groupIds": [
				"c3Y3l-_yk7vUmgo2BDWrC",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565873,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "0x00",
			"rawText": "0x00",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "AEyDpTSayPmbMji_1v_kX",
			"originalText": "0x00",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 683,
			"versionNonce": 679799797,
			"isDeleted": false,
			"id": "sFLsuIm_dUPnTBebsF0qo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -405.9119280541844,
			"y": -166.5155094586044,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1027337905,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "UsKk9xVU"
				},
				{
					"id": "r38MEanYqMIomByPnbHWE",
					"type": "arrow"
				}
			],
			"updated": 1707109565873,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 188,
			"versionNonce": 1065859547,
			"isDeleted": false,
			"id": "UsKk9xVU",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -377.34089304590407,
			"y": -146.56447719690613,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 13.759994506835938,
			"height": 25,
			"seed": 1376579729,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565873,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "0",
			"rawText": "0",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "sFLsuIm_dUPnTBebsF0qo",
			"originalText": "0",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 717,
			"versionNonce": 692954453,
			"isDeleted": false,
			"id": "1OPbMYSm7OZQ_x7e45nLk",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -333.9119280541844,
			"y": -167.5155094586044,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 220378737,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "t93piEDc"
				}
			],
			"updated": 1707109565873,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 188,
			"versionNonce": 399099515,
			"isDeleted": false,
			"id": "t93piEDc",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -301.17089487695876,
			"y": -147.56447719690613,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.4199981689453125,
			"height": 25,
			"seed": 1363460177,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565873,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "1",
			"rawText": "1",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "1OPbMYSm7OZQ_x7e45nLk",
			"originalText": "1",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 758,
			"versionNonce": 2004366005,
			"isDeleted": false,
			"id": "VMclSn6Wrwg4KGUe6ziBp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -261.9119280541844,
			"y": -168.5155094586044,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1011519025,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "CcANw0KC"
				}
			],
			"updated": 1707109565873,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 188,
			"versionNonce": 23150363,
			"isDeleted": false,
			"id": "CcANw0KC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -233.5808909096736,
			"y": -148.56447719690613,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 14.239990234375,
			"height": 25,
			"seed": 1159438353,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565873,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "2",
			"rawText": "2",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "VMclSn6Wrwg4KGUe6ziBp",
			"originalText": "2",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 809,
			"versionNonce": 799675413,
			"isDeleted": false,
			"id": "vwHIBncpIfHM0bHsYtUZM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -189.9119280541844,
			"y": -167.5155094586044,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 430929393,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "Pus9s5Ye"
				}
			],
			"updated": 1707109565873,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 188,
			"versionNonce": 113288123,
			"isDeleted": false,
			"id": "Pus9s5Ye",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -161.27088572168532,
			"y": -147.56447719690613,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 13.619979858398438,
			"height": 25,
			"seed": 1024298961,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565873,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "3",
			"rawText": "3",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "vwHIBncpIfHM0bHsYtUZM",
			"originalText": "3",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 745,
			"versionNonce": 1037617525,
			"isDeleted": false,
			"id": "4xmzxtGFQzETfmpGHwzRg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -402.9119280541844,
			"y": -100.51550945860441,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1699573169,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "iDjPIGMN"
				},
				{
					"id": "M2SaF_sosiZmlPCNJp6MR",
					"type": "arrow"
				}
			],
			"updated": 1707109565873,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 188,
			"versionNonce": 1074426971,
			"isDeleted": false,
			"id": "iDjPIGMN",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -373.8608896889705,
			"y": -80.56447719690613,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.79998779296875,
			"height": 25,
			"seed": 429297553,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565873,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "4",
			"rawText": "4",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "4xmzxtGFQzETfmpGHwzRg",
			"originalText": "4",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 779,
			"versionNonce": 1934217941,
			"isDeleted": false,
			"id": "NH0Mif3kCIjOEb_cAVDJH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -330.9119280541844,
			"y": -101.51550945860441,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 270562673,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "qFDqYGZm"
				}
			],
			"updated": 1707109565873,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 188,
			"versionNonce": 487665915,
			"isDeleted": false,
			"id": "qFDqYGZm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -301.64088846826735,
			"y": -81.56447719690613,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.3599853515625,
			"height": 25,
			"seed": 1278386001,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565873,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "5",
			"rawText": "5",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "NH0Mif3kCIjOEb_cAVDJH",
			"originalText": "5",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 820,
			"versionNonce": 1553117237,
			"isDeleted": false,
			"id": "WCw5H7yWGGssyomqGqdm8",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -258.9119280541844,
			"y": -102.51550945860441,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2082770225,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "6ghGHdv5"
				}
			],
			"updated": 1707109565873,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 188,
			"versionNonce": 1867995547,
			"isDeleted": false,
			"id": "6ghGHdv5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -229.86088968897047,
			"y": -82.56447719690613,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.79998779296875,
			"height": 25,
			"seed": 392019729,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565873,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "6",
			"rawText": "6",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "WCw5H7yWGGssyomqGqdm8",
			"originalText": "6",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 871,
			"versionNonce": 1469637013,
			"isDeleted": false,
			"id": "eGxon2JwwRvqv-_VlAmQX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -186.9119280541844,
			"y": -101.51550945860441,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1012249841,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "rcFGGcUZ"
				}
			],
			"updated": 1707109565873,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 188,
			"versionNonce": 873426491,
			"isDeleted": false,
			"id": "rcFGGcUZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -156.84089304590407,
			"y": -81.56447719690613,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 10.759994506835938,
			"height": 25,
			"seed": 1318317777,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565873,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "7",
			"rawText": "7",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "eGxon2JwwRvqv-_VlAmQX",
			"originalText": "7",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 735,
			"versionNonce": 1771169525,
			"isDeleted": false,
			"id": "tV_SB2EWl4r3T_ko8R6Z8",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -403.9119280541844,
			"y": -33.51550945860441,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1420815537,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "gpf7DSxv"
				},
				{
					"id": "KNXaJgnDmAgnSZ6cgiXOG",
					"type": "arrow"
				}
			],
			"updated": 1707109565873,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 188,
			"versionNonce": 505147099,
			"isDeleted": false,
			"id": "gpf7DSxv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -376.1108896889705,
			"y": -13.564477196906125,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 15.29998779296875,
			"height": 25,
			"seed": 374419089,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565873,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "8",
			"rawText": "8",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "tV_SB2EWl4r3T_ko8R6Z8",
			"originalText": "8",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 770,
			"versionNonce": 1426276437,
			"isDeleted": false,
			"id": "Gpl7A_cxVB2PpHKDax_wg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -331.9119280541844,
			"y": -34.51550945860441,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2049913969,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "nVyIUaLZ"
				}
			],
			"updated": 1707109565873,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 185,
			"versionNonce": 1611619195,
			"isDeleted": false,
			"id": "nVyIUaLZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -302.5508921303767,
			"y": -14.564477196906125,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.17999267578125,
			"height": 25,
			"seed": 605126225,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565873,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "9",
			"rawText": "9",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "Gpl7A_cxVB2PpHKDax_wg",
			"originalText": "9",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 810,
			"versionNonce": 1875013045,
			"isDeleted": false,
			"id": "1m3GJgZe-e9yIILsnFZhn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -259.9119280541844,
			"y": -35.51550945860441,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1389333553,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "lveMVwJH"
				}
			],
			"updated": 1707109565873,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 187,
			"versionNonce": 908866587,
			"isDeleted": false,
			"id": "lveMVwJH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -234.05089213037672,
			"y": -15.564477196906125,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.17999267578125,
			"height": 25,
			"seed": 2119228945,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565873,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "10",
			"rawText": "10",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "1m3GJgZe-e9yIILsnFZhn",
			"originalText": "10",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 861,
			"versionNonce": 955576085,
			"isDeleted": false,
			"id": "nZiY4j6iIHkJ2UqCpoeBM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -187.9119280541844,
			"y": -34.51550945860441,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 898429937,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "bAvsXx9H"
				}
			],
			"updated": 1707109565873,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 187,
			"versionNonce": 811923643,
			"isDeleted": false,
			"id": "bAvsXx9H",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -157.8808939614314,
			"y": -14.564477196906125,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 10.839996337890625,
			"height": 25,
			"seed": 1015762385,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565873,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "11",
			"rawText": "11",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "nZiY4j6iIHkJ2UqCpoeBM",
			"originalText": "11",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 741,
			"versionNonce": 789595253,
			"isDeleted": false,
			"id": "v7_p_Y3YbNgMRaF3xT7Lg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -402.9119280541844,
			"y": 32.48449054139559,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1784900529,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "Dfana7Bg"
				},
				{
					"id": "7v_Is6QWj1QHfGJcuRGPl",
					"type": "arrow"
				}
			],
			"updated": 1707109565873,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 210,
			"versionNonce": 1012672859,
			"isDeleted": false,
			"id": "Dfana7Bg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -377.29088999414626,
			"y": 52.435522803093875,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.659988403320312,
			"height": 25,
			"seed": 1195167121,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565873,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "12",
			"rawText": "12",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "v7_p_Y3YbNgMRaF3xT7Lg",
			"originalText": "12",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 775,
			"versionNonce": 1708781013,
			"isDeleted": false,
			"id": "24MUQuspixyJkvDhTcSCZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -330.9119280541844,
			"y": 31.484490541395587,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1783559025,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "UlsUrtU9"
				}
			],
			"updated": 1707109565873,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 210,
			"versionNonce": 1868842491,
			"isDeleted": false,
			"id": "UlsUrtU9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -304.980884806158,
			"y": 51.435522803093875,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.03997802734375,
			"height": 25,
			"seed": 400645457,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565873,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "13",
			"rawText": "13",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "24MUQuspixyJkvDhTcSCZ",
			"originalText": "13",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 816,
			"versionNonce": 1550281525,
			"isDeleted": false,
			"id": "aWbYRtuD6CDddMT4kD2FR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -258.9119280541844,
			"y": 30.484490541395587,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 525044529,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "4P4TXm50"
				}
			],
			"updated": 1707109565873,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 210,
			"versionNonce": 276811419,
			"isDeleted": false,
			"id": "4P4TXm50",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -232.57088877344313,
			"y": 50.435522803093875,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 18.219985961914062,
			"height": 25,
			"seed": 2029321489,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565873,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "14",
			"rawText": "14",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "aWbYRtuD6CDddMT4kD2FR",
			"originalText": "14",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 867,
			"versionNonce": 320748693,
			"isDeleted": false,
			"id": "wOA80GM63oHMkFP_RZgPz",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -186.9119280541844,
			"y": 31.484490541395587,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 609563377,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "IXQka8y7"
				}
			],
			"updated": 1707109565873,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 210,
			"versionNonce": 1650541371,
			"isDeleted": false,
			"id": "IXQka8y7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -160.35088755274,
			"y": 51.435522803093875,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 17.779983520507812,
			"height": 25,
			"seed": 1173597393,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565873,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "15",
			"rawText": "15",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "wOA80GM63oHMkFP_RZgPz",
			"originalText": "15",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 822,
			"versionNonce": 1639178741,
			"isDeleted": false,
			"id": "0iprlmXQCS5sbqkDf4axb",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -400.48316364848904,
			"y": 151.35831209129617,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1685201457,
			"groupIds": [
				"-4EoIPXPXepczspvZCZuW",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "P8VCoxUe"
				},
				{
					"id": "sQz2lLZa_oTWO7niHLFOG",
					"type": "arrow"
				}
			],
			"updated": 1707109565873,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 290,
			"versionNonce": 761996251,
			"isDeleted": false,
			"id": "P8VCoxUe",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -374.8621255884509,
			"y": 171.30934435299446,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.659988403320312,
			"height": 25,
			"seed": 724612113,
			"groupIds": [
				"-4EoIPXPXepczspvZCZuW",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565873,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "12",
			"rawText": "12",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "0iprlmXQCS5sbqkDf4axb",
			"originalText": "12",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 855,
			"versionNonce": 221109077,
			"isDeleted": false,
			"id": "2D2V8_nAns5YvyFz6dBFJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -328.48316364848904,
			"y": 150.35831209129617,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 604113393,
			"groupIds": [
				"-4EoIPXPXepczspvZCZuW",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "JPFCL3nc"
				}
			],
			"updated": 1707109565873,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 290,
			"versionNonce": 162525307,
			"isDeleted": false,
			"id": "JPFCL3nc",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -302.5521204004626,
			"y": 170.30934435299446,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.03997802734375,
			"height": 25,
			"seed": 133014481,
			"groupIds": [
				"-4EoIPXPXepczspvZCZuW",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565874,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "13",
			"rawText": "13",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "2D2V8_nAns5YvyFz6dBFJ",
			"originalText": "13",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 898,
			"versionNonce": 501328053,
			"isDeleted": false,
			"id": "i6g8j_hxmWHBLRkKCXP7K",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -256.48316364848904,
			"y": 149.35831209129617,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 51052977,
			"groupIds": [
				"-4EoIPXPXepczspvZCZuW",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "Dj3wbrB4"
				}
			],
			"updated": 1707109565874,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 290,
			"versionNonce": 1760700699,
			"isDeleted": false,
			"id": "Dj3wbrB4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -230.14212436774778,
			"y": 169.30934435299446,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 18.219985961914062,
			"height": 25,
			"seed": 1384227729,
			"groupIds": [
				"-4EoIPXPXepczspvZCZuW",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565874,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "14",
			"rawText": "14",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "i6g8j_hxmWHBLRkKCXP7K",
			"originalText": "14",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 947,
			"versionNonce": 1970588181,
			"isDeleted": false,
			"id": "35DR2Xz0U1TVPJOalZOY8",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -184.48316364848904,
			"y": 150.35831209129617,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 579406193,
			"groupIds": [
				"-4EoIPXPXepczspvZCZuW",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "t2fAhJfi"
				}
			],
			"updated": 1707109565874,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 291,
			"versionNonce": 1621380539,
			"isDeleted": false,
			"id": "t2fAhJfi",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -157.92212314704466,
			"y": 170.30934435299446,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 17.779983520507812,
			"height": 25,
			"seed": 745059153,
			"groupIds": [
				"-4EoIPXPXepczspvZCZuW",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565874,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "15",
			"rawText": "15",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "35DR2Xz0U1TVPJOalZOY8",
			"originalText": "15",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1252,
			"versionNonce": 618446709,
			"isDeleted": false,
			"id": "m8enJcjRj3nDJjjmOnWMG",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -183.46272159113835,
			"y": 311.11995955036895,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2032178097,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "I8WM8kUg"
				},
				{
					"id": "sQz2lLZa_oTWO7niHLFOG",
					"type": "arrow"
				},
				{
					"id": "cQL51qEhqRvIcOnV7OtU3",
					"type": "arrow"
				}
			],
			"updated": 1707109565874,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 719,
			"versionNonce": 870899291,
			"isDeleted": false,
			"id": "I8WM8kUg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -157.84168353110022,
			"y": 331.07099181206723,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.659988403320312,
			"height": 25,
			"seed": 1410659729,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565874,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "12",
			"rawText": "12",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "m8enJcjRj3nDJjjmOnWMG",
			"originalText": "12",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1075,
			"versionNonce": 39782613,
			"isDeleted": false,
			"id": "mOsdpN84jcolJQltVagfI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -399.57211134213173,
			"y": 310.11995955036895,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2044861297,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "ciq4QxHc"
				},
				{
					"id": "3ThecQRfNwVu63AHZIpEo",
					"type": "arrow"
				}
			],
			"updated": 1707109565874,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 508,
			"versionNonce": 496130811,
			"isDeleted": false,
			"id": "ciq4QxHc",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -373.6410680941053,
			"y": 330.07099181206723,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.03997802734375,
			"height": 25,
			"seed": 449807697,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565874,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "13",
			"rawText": "13",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "mOsdpN84jcolJQltVagfI",
			"originalText": "13",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1121,
			"versionNonce": 2140218933,
			"isDeleted": false,
			"id": "fPwM_ke_72ENhIxe9jNua",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -327.57211134213173,
			"y": 309.11995955036895,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1916056369,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "qEcQXzuq"
				}
			],
			"updated": 1707109565874,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 508,
			"versionNonce": 1512260507,
			"isDeleted": false,
			"id": "qEcQXzuq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -301.2310720613905,
			"y": 329.07099181206723,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 18.219985961914062,
			"height": 25,
			"seed": 1685660945,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565874,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "14",
			"rawText": "14",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "fPwM_ke_72ENhIxe9jNua",
			"originalText": "14",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1170,
			"versionNonce": 1062770581,
			"isDeleted": false,
			"id": "X78EcPP5HZcB-FF35O3lg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -255.57211134213173,
			"y": 310.11995955036895,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1561615089,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "VmE1syYR"
				},
				{
					"id": "wulaPBkXhgjVfRDMsi-Gq",
					"type": "arrow"
				}
			],
			"updated": 1707109565874,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 509,
			"versionNonce": 1909332027,
			"isDeleted": false,
			"id": "VmE1syYR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -229.01107084068735,
			"y": 330.07099181206723,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 17.779983520507812,
			"height": 25,
			"seed": 1821234385,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565874,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "15",
			"rawText": "15",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "X78EcPP5HZcB-FF35O3lg",
			"originalText": "15",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 928,
			"versionNonce": 1810554101,
			"isDeleted": false,
			"id": "xphzrAFJmNv5V7Zj7k0l_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -402.2514925685174,
			"y": 542.6463585959667,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1462409265,
			"groupIds": [
				"YtpKmzywCCVYRu5IuCLyt",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "GPduDjMG"
				},
				{
					"id": "uPkQn0-NHWG4aCUu4FJVw",
					"type": "arrow"
				}
			],
			"updated": 1707109565874,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 401,
			"versionNonce": 1114986715,
			"isDeleted": false,
			"id": "GPduDjMG",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -390.24043986004176,
			"y": 562.597390857665,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.87995910644531,
			"height": 25,
			"seed": 1533700625,
			"groupIds": [
				"YtpKmzywCCVYRu5IuCLyt",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565874,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "S(12)",
			"rawText": "S(12)",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "xphzrAFJmNv5V7Zj7k0l_",
			"originalText": "S(12)",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 966,
			"versionNonce": 1288533589,
			"isDeleted": false,
			"id": "7KvVIU7ufc6gIYoNuaoyv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -330.2514925685174,
			"y": 541.6463585959667,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1335164913,
			"groupIds": [
				"YtpKmzywCCVYRu5IuCLyt",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "MJk1FqJd"
				},
				{
					"id": "qJrsCj2P22LnrZOgS_lNZ",
					"type": "arrow"
				}
			],
			"updated": 1707109565874,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 399,
			"versionNonce": 1235977595,
			"isDeleted": false,
			"id": "MJk1FqJd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -317.9304346720535,
			"y": 561.597390857665,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.25994873046875,
			"height": 25,
			"seed": 1907481041,
			"groupIds": [
				"YtpKmzywCCVYRu5IuCLyt",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565874,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "S(13)",
			"rawText": "S(13)",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "7KvVIU7ufc6gIYoNuaoyv",
			"originalText": "S(13)",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1005,
			"versionNonce": 483779509,
			"isDeleted": false,
			"id": "7y0_8af0ZH_KEUw5oi7Pm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -258.2514925685174,
			"y": 540.6463585959667,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1389918129,
			"groupIds": [
				"YtpKmzywCCVYRu5IuCLyt",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "hMuyCd7j"
				},
				{
					"id": "tKzdGLLrICj5kd7lNxLHs",
					"type": "arrow"
				}
			],
			"updated": 1707109565874,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 400,
			"versionNonce": 783490587,
			"isDeleted": false,
			"id": "hMuyCd7j",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -245.52043863933864,
			"y": 560.597390857665,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 45.43995666503906,
			"height": 25,
			"seed": 1966102929,
			"groupIds": [
				"YtpKmzywCCVYRu5IuCLyt",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565874,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "S(14)",
			"rawText": "S(14)",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "7y0_8af0ZH_KEUw5oi7Pm",
			"originalText": "S(14)",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1056,
			"versionNonce": 539600149,
			"isDeleted": false,
			"id": "YGYy6YOQVch2RUZqQiJxT",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -186.2514925685174,
			"y": 541.6463585959667,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 703659889,
			"groupIds": [
				"YtpKmzywCCVYRu5IuCLyt",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "OxyJBaFp"
				},
				{
					"id": "AmLh0OPqdpaaW07rh-UMs",
					"type": "arrow"
				}
			],
			"updated": 1707109565874,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 401,
			"versionNonce": 209625787,
			"isDeleted": false,
			"id": "OxyJBaFp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -173.3004374186355,
			"y": 561.597390857665,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 44.99995422363281,
			"height": 25,
			"seed": 794945873,
			"groupIds": [
				"YtpKmzywCCVYRu5IuCLyt",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565874,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "S(15)",
			"rawText": "S(15)",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "YGYy6YOQVch2RUZqQiJxT",
			"originalText": "S(15)",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "text",
			"version": 291,
			"versionNonce": 2050898549,
			"isDeleted": false,
			"id": "rAHdZk8h",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -1054.628756950065,
			"y": 168.01837826628275,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 503.90625,
			"height": 72,
			"seed": 594015249,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565874,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "u32 RotWord(u32 word) {\n    return (word << 0x08) | (word >> 0x18);\n}",
			"rawText": "u32 RotWord(u32 word) {\n    return (word << 0x08) | (word >> 0x18);\n}",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "u32 RotWord(u32 word) {\n    return (word << 0x08) | (word >> 0x18);\n}",
			"lineHeight": 1.2,
			"baseline": 67
		},
		{
			"type": "text",
			"version": 287,
			"versionNonce": 2075169627,
			"isDeleted": false,
			"id": "ujqJBsSe",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -1060.9047254978107,
			"y": 315.30720324780725,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 632.8125,
			"height": 144,
			"seed": 1581171263,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565874,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "u32 SubWord(u32 word) {\n    return (u32)s_box[word >> 0x18] << 0x18 |\n           (u32)s_box[(word >> 0x10) & 0xFF] << 0x10 |\n           (u32)s_box[(word >> 0x08) & 0xFF] << 0x08 |\n           (u32)s_box[word & 0xFF];\n}",
			"rawText": "u32 SubWord(u32 word) {\n    return (u32)s_box[word >> 0x18] << 0x18 |\n           (u32)s_box[(word >> 0x10) & 0xFF] << 0x10 |\n           (u32)s_box[(word >> 0x08) & 0xFF] << 0x08 |\n           (u32)s_box[word & 0xFF];\n}",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "u32 SubWord(u32 word) {\n    return (u32)s_box[word >> 0x18] << 0x18 |\n           (u32)s_box[(word >> 0x10) & 0xFF] << 0x10 |\n           (u32)s_box[(word >> 0x08) & 0xFF] << 0x08 |\n           (u32)s_box[word & 0xFF];\n}",
			"lineHeight": 1.2,
			"baseline": 139
		},
		{
			"type": "ellipse",
			"version": 432,
			"versionNonce": 1138303957,
			"isDeleted": false,
			"id": "E2ukN-cbMz8AY25jZUiVk",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -277.2342744381758,
			"y": 632.9491319172672,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 39.55483662710749,
			"height": 40.38757002978338,
			"seed": 748033343,
			"groupIds": [
				"fn3Tb1h4fWSo0MiB8dN_w",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565874,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 408,
			"versionNonce": 1553690619,
			"isDeleted": false,
			"id": "7yXa6tPC6BnzLfTNyFJH_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -258.49777287796707,
			"y": 633.7818653199431,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0.8327334026759315,
			"height": 39.55483662710749,
			"seed": 933936785,
			"groupIds": [
				"fn3Tb1h4fWSo0MiB8dN_w",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565874,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0.8327334026759315,
					39.55483662710749
				]
			]
		},
		{
			"type": "line",
			"version": 431,
			"versionNonce": 1628430645,
			"isDeleted": false,
			"id": "it844jhyaZJKIbcRd-LEy",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -276.4015410354999,
			"y": 652.9347335814899,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.30573652309357,
			"height": 0.4163667013380199,
			"seed": 1252891039,
			"groupIds": [
				"fn3Tb1h4fWSo0MiB8dN_w",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565874,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					38.30573652309357,
					-0.4163667013380199
				]
			]
		},
		{
			"type": "text",
			"version": 309,
			"versionNonce": 1631697051,
			"isDeleted": false,
			"id": "MpSaWiDY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -1058.4751759373355,
			"y": 525.2678473412899,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 597.65625,
			"height": 120,
			"seed": 1571643519,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565874,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "const u32 rCon[10] = {\n    0x01000000, 0x02000000, 0x04000000, 0x08000000,\n    0x10000000, 0x20000000, 0x40000000, 0x80000000,\n    0x1b000000, 0x36000000\n};",
			"rawText": "const u32 rCon[10] = {\n    0x01000000, 0x02000000, 0x04000000, 0x08000000,\n    0x10000000, 0x20000000, 0x40000000, 0x80000000,\n    0x1b000000, 0x36000000\n};",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "const u32 rCon[10] = {\n    0x01000000, 0x02000000, 0x04000000, 0x08000000,\n    0x10000000, 0x20000000, 0x40000000, 0x80000000,\n    0x1b000000, 0x36000000\n};",
			"lineHeight": 1.2,
			"baseline": 115
		},
		{
			"type": "line",
			"version": 258,
			"versionNonce": 390591125,
			"isDeleted": false,
			"id": "cmtiQGkbF8oGk8dX-4GVs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -235.81934137126643,
			"y": 653.9843250415397,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 172.44898687148373,
			"height": 0,
			"seed": 247328543,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565874,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					172.44898687148373,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 564,
			"versionNonce": 1465249083,
			"isDeleted": false,
			"id": "CLdrue7i49kja87QBDzSN",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -376.18042382145313,
			"y": 419.71558694786904,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 238.74999999999986,
			"height": 80.00000000000006,
			"seed": 1289824671,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "qQriX36K"
				},
				{
					"id": "3ThecQRfNwVu63AHZIpEo",
					"type": "arrow"
				},
				{
					"id": "C8qtbqvQdOlGOzbDdwCYD",
					"type": "arrow"
				},
				{
					"id": "wulaPBkXhgjVfRDMsi-Gq",
					"type": "arrow"
				},
				{
					"id": "cQL51qEhqRvIcOnV7OtU3",
					"type": "arrow"
				},
				{
					"id": "uPkQn0-NHWG4aCUu4FJVw",
					"type": "arrow"
				},
				{
					"id": "qJrsCj2P22LnrZOgS_lNZ",
					"type": "arrow"
				},
				{
					"id": "tKzdGLLrICj5kd7lNxLHs",
					"type": "arrow"
				},
				{
					"id": "AmLh0OPqdpaaW07rh-UMs",
					"type": "arrow"
				}
			],
			"updated": 1707109565874,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 520,
			"versionNonce": 1664538613,
			"isDeleted": false,
			"id": "qQriX36K",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -286.1022988214532,
			"y": 447.71558694786904,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 2000937969,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565874,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "S-Box",
			"rawText": "S-Box",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "CLdrue7i49kja87QBDzSN",
			"originalText": "S-Box",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "arrow",
			"version": 388,
			"versionNonce": 997807323,
			"isDeleted": false,
			"id": "sQz2lLZa_oTWO7niHLFOG",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -364.0746953859841,
			"y": 218.72990803654153,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 221.2499999999999,
			"height": 88.74999999999994,
			"seed": 178014833,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109842579,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "0iprlmXQCS5sbqkDf4axb",
				"gap": 2.469531421848785,
				"focus": 0.4531723849793141
			},
			"endBinding": {
				"elementId": "m8enJcjRj3nDJjjmOnWMG",
				"gap": 3.6400515138274727,
				"focus": 0.4679641221015967
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					20,
					23.749999999999943
				],
				[
					206.2499999999999,
					61.24999999999994
				],
				[
					221.2499999999999,
					88.74999999999994
				]
			]
		},
		{
			"type": "line",
			"version": 213,
			"versionNonce": 249696597,
			"isDeleted": false,
			"id": "upFM7FvFGerpqaV6cGyK8",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -296.5746953859841,
			"y": 219.97990803654147,
			"strokeColor": "#f08c00",
			"backgroundColor": "transparent",
			"width": 158.7499999999999,
			"height": 21.25,
			"seed": 1136648511,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565874,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					15,
					16.25
				],
				[
					144.9999999999999,
					16.25
				],
				[
					158.7499999999999,
					-5
				]
			]
		},
		{
			"type": "arrow",
			"version": 134,
			"versionNonce": 1426201211,
			"isDeleted": false,
			"id": "rEdRblIaUYF95zhimHN1d",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -231.5746953859841,
			"y": 238.72990803654147,
			"strokeColor": "#f08c00",
			"backgroundColor": "transparent",
			"width": 60,
			"height": 43.75,
			"seed": 1768365279,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565874,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					-57.5,
					25
				],
				[
					-60,
					43.75
				]
			]
		},
		{
			"type": "line",
			"version": 131,
			"versionNonce": 127868597,
			"isDeleted": false,
			"id": "yzLCYDQG-5JugNyfqK9er",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -369.0746953859841,
			"y": 311.2299080365415,
			"strokeColor": "#f08c00",
			"backgroundColor": "transparent",
			"width": 156.25,
			"height": 23.75,
			"seed": 1856285457,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565874,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					21.25,
					-23.75
				],
				[
					136.25,
					-23.75
				],
				[
					156.25,
					-3.75
				]
			]
		},
		{
			"type": "arrow",
			"version": 665,
			"versionNonce": 713198043,
			"isDeleted": false,
			"id": "3ThecQRfNwVu63AHZIpEo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -367.8246953859841,
			"y": 376.2299080365414,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 20.814747812966743,
			"height": 42.23567891132757,
			"seed": 1142458001,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109842581,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "mOsdpN84jcolJQltVagfI",
				"gap": 1.2078839627758953,
				"focus": 0.3815010707788613
			},
			"endBinding": {
				"elementId": "CLdrue7i49kja87QBDzSN",
				"gap": 1.2500000000000284,
				"focus": -0.45766423357664093
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					15,
					32.5
				],
				[
					20.814747812966743,
					42.23567891132757
				]
			]
		},
		{
			"type": "arrow",
			"version": 685,
			"versionNonce": 2062194299,
			"isDeleted": false,
			"id": "C8qtbqvQdOlGOzbDdwCYD",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -293.406208274677,
			"y": 373.435836728139,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.3296550777989182,
			"height": 42.529750219729976,
			"seed": 2038724721,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109842581,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "CLdrue7i49kja87QBDzSN",
				"gap": 3.7500000000000284,
				"focus": -0.33212428259986865
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					-0.48790893796666523,
					27.59360395072622
				],
				[
					-1.3296550777989182,
					42.529750219729976
				]
			]
		},
		{
			"type": "arrow",
			"version": 886,
			"versionNonce": 1743261467,
			"isDeleted": false,
			"id": "wulaPBkXhgjVfRDMsi-Gq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -222.48356304175564,
			"y": 376.0220240737655,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.0984553878599854,
			"height": 42.274072722602625,
			"seed": 2122963601,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109842581,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "X78EcPP5HZcB-FF35O3lg",
				"gap": 1,
				"focus": 0.049160654516874326
			},
			"endBinding": {
				"elementId": "CLdrue7i49kja87QBDzSN",
				"gap": 1.4194901515008667,
				"focus": 0.2604295889978678
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					-0.4833880592765354,
					27.337926453598868
				],
				[
					-1.0984553878599854,
					42.274072722602625
				]
			]
		},
		{
			"type": "arrow",
			"version": 859,
			"versionNonce": 334328763,
			"isDeleted": false,
			"id": "cQL51qEhqRvIcOnV7OtU3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -151.73099831441527,
			"y": 377.2101842062025,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 17.827375997965817,
			"height": 39.642074960601406,
			"seed": 442619167,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109842581,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "m8enJcjRj3nDJjjmOnWMG",
				"gap": 1.1881601324369626,
				"focus": -0.20189137607087237
			},
			"endBinding": {
				"elementId": "CLdrue7i49kja87QBDzSN",
				"gap": 2.8633277810651236,
				"focus": 0.45745022034457833
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					-10.113493135061901,
					25.18720790145244
				],
				[
					-17.827375997965817,
					39.642074960601406
				]
			]
		},
		{
			"type": "arrow",
			"version": 282,
			"versionNonce": 790447195,
			"isDeleted": false,
			"id": "uPkQn0-NHWG4aCUu4FJVw",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -346.9877147681199,
			"y": 500.77176344339034,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.16301279015886,
			"height": 40.00884027391055,
			"seed": 1866212433,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109842581,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "CLdrue7i49kja87QBDzSN",
				"gap": 1.056176495521271,
				"focus": 0.46411343409713757
			},
			"endBinding": {
				"elementId": "xphzrAFJmNv5V7Zj7k0l_",
				"gap": 1.8657548786658253,
				"focus": -0.425226064112459
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					-14.7400990482829,
					25.26874122562765
				],
				[
					-23.16301279015886,
					40.00884027391055
				]
			]
		},
		{
			"type": "arrow",
			"version": 830,
			"versionNonce": 1095368955,
			"isDeleted": false,
			"id": "qJrsCj2P22LnrZOgS_lNZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -295.8946121468161,
			"y": 503.08436761172425,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.3296550777989182,
			"height": 36.21256491332292,
			"seed": 537676497,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109842581,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "CLdrue7i49kja87QBDzSN",
				"gap": 3.3687806638551763,
				"focus": 0.3166841665687965
			},
			"endBinding": {
				"elementId": "7KvVIU7ufc6gIYoNuaoyv",
				"gap": 2.3494260709195487,
				"focus": -0.11762472551238423
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					-0.48790893796666523,
					21.276418644319165
				],
				[
					-1.3296550777989182,
					36.21256491332292
				]
			]
		},
		{
			"type": "arrow",
			"version": 864,
			"versionNonce": 871770523,
			"isDeleted": false,
			"id": "tKzdGLLrICj5kd7lNxLHs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -223.16254910671887,
			"y": 501.7007162821128,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.3296550777989182,
			"height": 36.21256491332292,
			"seed": 1245414033,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109842581,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "CLdrue7i49kja87QBDzSN",
				"gap": 1.9851293342437373,
				"focus": -0.28767993246922224
			},
			"endBinding": {
				"elementId": "7y0_8af0ZH_KEUw5oi7Pm",
				"gap": 2.7330774005309877,
				"focus": -0.09856773327461703
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					-0.48790893796666523,
					21.276418644319165
				],
				[
					-1.3296550777989182,
					36.21256491332292
				]
			]
		},
		{
			"type": "arrow",
			"version": 737,
			"versionNonce": 475283003,
			"isDeleted": false,
			"id": "AmLh0OPqdpaaW07rh-UMs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -170.5907059430537,
			"y": 501.23412664512597,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.761883595232234,
			"height": 35.91849360492057,
			"seed": 713447313,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109842581,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "CLdrue7i49kja87QBDzSN",
				"gap": 1.518539697256898,
				"focus": -0.45562589427303624
			},
			"endBinding": {
				"elementId": "YGYy6YOQVch2RUZqQiJxT",
				"gap": 4.493738345920178,
				"focus": 0.4019006378744657
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					13.947135782265491,
					26.18281469359306
				],
				[
					19.761883595232234,
					35.91849360492057
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1147,
			"versionNonce": 987442587,
			"isDeleted": false,
			"id": "PQLcG1Wnx6qOLrYlmErry",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -398.13890918612617,
			"y": 696.752444412929,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 47883551,
			"groupIds": [
				"V4cG-I6sWvcThGu-YhWEq",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "ZK9a8EGd"
				}
			],
			"updated": 1707109565874,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 651,
			"versionNonce": 1441549717,
			"isDeleted": false,
			"id": "ZK9a8EGd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -369.56787417784585,
			"y": 716.7034766746273,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 13.759994506835938,
			"height": 25,
			"seed": 1269213503,
			"groupIds": [
				"V4cG-I6sWvcThGu-YhWEq",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565874,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "0",
			"rawText": "0",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "PQLcG1Wnx6qOLrYlmErry",
			"originalText": "0",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1187,
			"versionNonce": 133743163,
			"isDeleted": false,
			"id": "AhQj6LTq7JZpeC6n6LRuG",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -326.13890918612617,
			"y": 695.752444412929,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 10299743,
			"groupIds": [
				"V4cG-I6sWvcThGu-YhWEq",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "2KEudYCt"
				}
			],
			"updated": 1707109565874,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 659,
			"versionNonce": 580375285,
			"isDeleted": false,
			"id": "2KEudYCt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -293.39787600890054,
			"y": 715.7034766746273,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.4199981689453125,
			"height": 25,
			"seed": 789489023,
			"groupIds": [
				"V4cG-I6sWvcThGu-YhWEq",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565874,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "1",
			"rawText": "1",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "AhQj6LTq7JZpeC6n6LRuG",
			"originalText": "1",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1219,
			"versionNonce": 1371194075,
			"isDeleted": false,
			"id": "1Dh982GiS7dhvwiTFuk9J",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -254.13890918612623,
			"y": 694.752444412929,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1715183007,
			"groupIds": [
				"V4cG-I6sWvcThGu-YhWEq",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "Uzw6Zs2q"
				}
			],
			"updated": 1707109565874,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 650,
			"versionNonce": 1315679317,
			"isDeleted": false,
			"id": "Uzw6Zs2q",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -225.80787204161544,
			"y": 714.7034766746273,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 14.239990234375,
			"height": 25,
			"seed": 2035585471,
			"groupIds": [
				"V4cG-I6sWvcThGu-YhWEq",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "2",
			"rawText": "2",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "1Dh982GiS7dhvwiTFuk9J",
			"originalText": "2",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1275,
			"versionNonce": 1622388603,
			"isDeleted": false,
			"id": "52BwDS_de3DoKOLqwLO-9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -182.13890918612623,
			"y": 695.752444412929,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 24773087,
			"groupIds": [
				"V4cG-I6sWvcThGu-YhWEq",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "sbyhaapY"
				}
			],
			"updated": 1707109565875,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 649,
			"versionNonce": 2034063797,
			"isDeleted": false,
			"id": "sbyhaapY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -153.49786685362716,
			"y": 715.7034766746273,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 13.619979858398438,
			"height": 25,
			"seed": 532442623,
			"groupIds": [
				"V4cG-I6sWvcThGu-YhWEq",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "3",
			"rawText": "3",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "52BwDS_de3DoKOLqwLO-9",
			"originalText": "3",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1208,
			"versionNonce": 1193674779,
			"isDeleted": false,
			"id": "VI7ZNT_4vjSb5vqh26klb",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -395.13890918612594,
			"y": 781.580623501418,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2132563487,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "d9lgH6Uj"
				}
			],
			"updated": 1707109565875,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 652,
			"versionNonce": 741497621,
			"isDeleted": false,
			"id": "d9lgH6Uj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -366.08787082091203,
			"y": 801.5316557631163,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.79998779296875,
			"height": 25,
			"seed": 378157631,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "4",
			"rawText": "4",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "VI7ZNT_4vjSb5vqh26klb",
			"originalText": "4",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1242,
			"versionNonce": 721702075,
			"isDeleted": false,
			"id": "XeuOFNFaenGf29aeUHjkA",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -323.13890918612594,
			"y": 780.580623501418,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 719755871,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "OtCVx475"
				}
			],
			"updated": 1707109565875,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 653,
			"versionNonce": 801124469,
			"isDeleted": false,
			"id": "OtCVx475",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -293.8678696002089,
			"y": 800.5316557631163,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.3599853515625,
			"height": 25,
			"seed": 285341311,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "5",
			"rawText": "5",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "XeuOFNFaenGf29aeUHjkA",
			"originalText": "5",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1301,
			"versionNonce": 1341193563,
			"isDeleted": false,
			"id": "IR2WwYA03uYLHsMhwLxpV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -251.13890918612594,
			"y": 779.580623501418,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 798805663,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "On4VVzGd"
				}
			],
			"updated": 1707109565875,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 670,
			"versionNonce": 564943317,
			"isDeleted": false,
			"id": "On4VVzGd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -222.08787082091203,
			"y": 799.5316557631163,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.79998779296875,
			"height": 25,
			"seed": 1097310911,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "6",
			"rawText": "6",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "IR2WwYA03uYLHsMhwLxpV",
			"originalText": "6",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1336,
			"versionNonce": 1631492603,
			"isDeleted": false,
			"id": "GLy3yauI7XwMSCoRaXIlL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -179.13890918612594,
			"y": 780.580623501418,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1459811039,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "wDZCj1mv"
				}
			],
			"updated": 1707109565875,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 652,
			"versionNonce": 1259099957,
			"isDeleted": false,
			"id": "wDZCj1mv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -149.06787417784562,
			"y": 800.5316557631163,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 10.759994506835938,
			"height": 25,
			"seed": 419380991,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "7",
			"rawText": "7",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "GLy3yauI7XwMSCoRaXIlL",
			"originalText": "7",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1162,
			"versionNonce": 2079302299,
			"isDeleted": false,
			"id": "2nJoWgN4c5HqNjbxrNqLp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -396.1389091861263,
			"y": 939.1912353647684,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1239222047,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "1ILhft1I"
				}
			],
			"updated": 1707109565875,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 616,
			"versionNonce": 910534805,
			"isDeleted": false,
			"id": "1ILhft1I",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -368.33787082091237,
			"y": 959.1422676264667,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 15.29998779296875,
			"height": 25,
			"seed": 135056191,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "8",
			"rawText": "8",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "2nJoWgN4c5HqNjbxrNqLp",
			"originalText": "8",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1197,
			"versionNonce": 2025232187,
			"isDeleted": false,
			"id": "65p3rI6p03_7zdxNnMV1e",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -324.1389091861263,
			"y": 938.1912353647684,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1341066079,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "PlMpawax"
				}
			],
			"updated": 1707109565875,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 614,
			"versionNonce": 84790773,
			"isDeleted": false,
			"id": "PlMpawax",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -294.7778732623186,
			"y": 958.1422676264667,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.17999267578125,
			"height": 25,
			"seed": 1037322111,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "9",
			"rawText": "9",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "65p3rI6p03_7zdxNnMV1e",
			"originalText": "9",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1237,
			"versionNonce": 1979054043,
			"isDeleted": false,
			"id": "V-CAX5UuLVFB2dyLuMS7m",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -252.13890918612583,
			"y": 937.1912353647684,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 268238751,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "qGtHEW9P"
				}
			],
			"updated": 1707109565875,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 616,
			"versionNonce": 107628373,
			"isDeleted": false,
			"id": "qGtHEW9P",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -226.27787326231817,
			"y": 957.1422676264667,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.17999267578125,
			"height": 25,
			"seed": 1754903487,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "10",
			"rawText": "10",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "V-CAX5UuLVFB2dyLuMS7m",
			"originalText": "10",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1289,
			"versionNonce": 566248571,
			"isDeleted": false,
			"id": "K_HGbQwqgqi75KdxtGevh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -180.13890918612594,
			"y": 938.1912353647684,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1338696671,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "dWnFrOYi"
				}
			],
			"updated": 1707109565875,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 613,
			"versionNonce": 212898997,
			"isDeleted": false,
			"id": "dWnFrOYi",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -150.10787509337297,
			"y": 958.1422676264667,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 10.839996337890625,
			"height": 25,
			"seed": 1973489663,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "11",
			"rawText": "11",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "K_HGbQwqgqi75KdxtGevh",
			"originalText": "11",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1154,
			"versionNonce": 1138228507,
			"isDeleted": false,
			"id": "Z1mDhmthLqFTgqAX8l6gN",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -397.49243157218757,
			"y": 1092.271563649028,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 874297375,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "326CNhCE"
				}
			],
			"updated": 1707109565875,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 623,
			"versionNonce": 59127317,
			"isDeleted": false,
			"id": "326CNhCE",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -371.87139351214944,
			"y": 1112.2225959107263,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.659988403320312,
			"height": 25,
			"seed": 1361992767,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "12",
			"rawText": "12",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "Z1mDhmthLqFTgqAX8l6gN",
			"originalText": "12",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1188,
			"versionNonce": 128950715,
			"isDeleted": false,
			"id": "jvPhiBToyamdRNP05anJb",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -325.49243157218757,
			"y": 1091.271563649028,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 11959391,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "x7Dlj2co"
				}
			],
			"updated": 1707109565875,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 624,
			"versionNonce": 1172351861,
			"isDeleted": false,
			"id": "x7Dlj2co",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -299.56138832416116,
			"y": 1111.2225959107263,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.03997802734375,
			"height": 25,
			"seed": 646289535,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "13",
			"rawText": "13",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "jvPhiBToyamdRNP05anJb",
			"originalText": "13",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1228,
			"versionNonce": 107590235,
			"isDeleted": false,
			"id": "jWqwuoYZqj6GZeTfdhJKH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -253.49243157218712,
			"y": 1090.271563649028,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1482436767,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "ovwnJFCW"
				}
			],
			"updated": 1707109565875,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 624,
			"versionNonce": 872772821,
			"isDeleted": false,
			"id": "ovwnJFCW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -227.15139229144586,
			"y": 1110.2225959107263,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 18.219985961914062,
			"height": 25,
			"seed": 535479487,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "14",
			"rawText": "14",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "jWqwuoYZqj6GZeTfdhJKH",
			"originalText": "14",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1281,
			"versionNonce": 282636027,
			"isDeleted": false,
			"id": "6q-FkqtJWU9GrUC3b-RgU",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -181.49243157218723,
			"y": 1091.271563649028,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2094126303,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "q6GUF9u9"
				}
			],
			"updated": 1707109565875,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 622,
			"versionNonce": 160043573,
			"isDeleted": false,
			"id": "q6GUF9u9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -154.93139107074285,
			"y": 1111.2225959107263,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 17.779983520507812,
			"height": 25,
			"seed": 648143103,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "15",
			"rawText": "15",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "6q-FkqtJWU9GrUC3b-RgU",
			"originalText": "15",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "ellipse",
			"version": 796,
			"versionNonce": 964630427,
			"isDeleted": false,
			"id": "SdsJgS7G80Nrx7JQI-8dd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -587.9783246234346,
			"y": 788.1394064876538,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 39.55483662710749,
			"height": 40.38757002978338,
			"seed": 721251857,
			"groupIds": [
				"vUE29rFNArtQBD42DY_-m",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 805,
			"versionNonce": 1934885781,
			"isDeleted": false,
			"id": "DZmgmMjL---geMw7dKsin",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -569.2418230632258,
			"y": 788.9721398903296,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0.8327334026759315,
			"height": 39.55483662710749,
			"seed": 1042777073,
			"groupIds": [
				"vUE29rFNArtQBD42DY_-m",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0.8327334026759315,
					39.55483662710749
				]
			]
		},
		{
			"type": "line",
			"version": 804,
			"versionNonce": 512715835,
			"isDeleted": false,
			"id": "efe0zbV39rJA2pOHGTOhb",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -587.1455912207587,
			"y": 808.1250081518767,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.30573652309357,
			"height": 0.4163667013380199,
			"seed": 1934876113,
			"groupIds": [
				"vUE29rFNArtQBD42DY_-m",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					38.30573652309357,
					-0.4163667013380199
				]
			]
		},
		{
			"type": "line",
			"version": 244,
			"versionNonce": 1704511733,
			"isDeleted": false,
			"id": "IVKtOy2t2uQzqT6_HQ0kM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -257.53595134981924,
			"y": 558.2251634706354,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.1767611930305293,
			"height": 151.80219390093862,
			"seed": 1052980305,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					1.1767611930305293,
					151.80219390093862
				]
			]
		},
		{
			"type": "arrow",
			"version": 1672,
			"versionNonce": 1944857819,
			"isDeleted": false,
			"id": "FxeOUATNQnZtQYZGw0-RB",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -276.3641304383093,
			"y": 651.1892977200478,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 296.06124122844915,
			"height": 43.269239211365175,
			"seed": 609501713,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "Rf-fVMwyCy9ucg7LFvdDK",
				"focus": -1.057595095656369,
				"gap": 2.1224932753100347
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					-267.1247908179291,
					5.88380596515276
				],
				[
					-296.06124122844915,
					43.269239211365175
				]
			]
		},
		{
			"type": "text",
			"version": 875,
			"versionNonce": 836624981,
			"isDeleted": false,
			"id": "tX3u2on1",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -848.5384186334808,
			"y": 715.1787752670319,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 122.09986877441406,
			"height": 25,
			"seed": 390446175,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "Round Key 4",
			"rawText": "Round Key 4",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Round Key 4",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "line",
			"version": 723,
			"versionNonce": 1294457211,
			"isDeleted": false,
			"id": "iLWVmG5RSjN9Ia_gl_Oc6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -545.7960593624504,
			"y": 808.3677949601554,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 149.40228723502685,
			"height": 0,
			"seed": 1126083775,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					149.40228723502685,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1623,
			"versionNonce": 1559809973,
			"isDeleted": false,
			"id": "4gjnqruxPAr935lCDhOCW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -712.8286997646093,
			"y": 857.9687639774148,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1146891761,
			"groupIds": [
				"1BFbCMyWT2ZnFdA-vHeVS",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1657,
			"versionNonce": 663024155,
			"isDeleted": false,
			"id": "dRaD4n5r0kgdVpthGYzOR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -640.8286997646093,
			"y": 856.9687639774148,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1633896401,
			"groupIds": [
				"1BFbCMyWT2ZnFdA-vHeVS",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "FKwvPef7AZM8B0nyNjAtO",
					"type": "arrow"
				},
				{
					"id": "QQQl5DniOl6Kp0NfEYGXT",
					"type": "arrow"
				}
			],
			"updated": 1707109565875,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1698,
			"versionNonce": 890179861,
			"isDeleted": false,
			"id": "-uCUY8cl4a4kmgyXQAcf_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -568.8286997646093,
			"y": 855.9687639774148,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1714169265,
			"groupIds": [
				"1BFbCMyWT2ZnFdA-vHeVS",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1750,
			"versionNonce": 871757499,
			"isDeleted": false,
			"id": "FEs77KmfrfFKVRif8BuZt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -496.82869976460927,
			"y": 856.9687639774148,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2111719313,
			"groupIds": [
				"1BFbCMyWT2ZnFdA-vHeVS",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 959,
			"versionNonce": 664151669,
			"isDeleted": false,
			"id": "FQVjoKb8",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -851.7712847787639,
			"y": 872.5707068190758,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 121.65986633300781,
			"height": 25,
			"seed": 45165937,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "Round Key 5",
			"rawText": "Round Key 5",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Round Key 5",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "arrow",
			"version": 162,
			"versionNonce": 1629316955,
			"isDeleted": false,
			"id": "FKwvPef7AZM8B0nyNjAtO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -568.200906309881,
			"y": 753.5675215137036,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.1767611930305293,
			"height": 110.61555214486998,
			"seed": 1184005265,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "fbHKwgW8VRRMmp832_gQq",
				"focus": -1.0656442046466081,
				"gap": 3.199907558170821
			},
			"endBinding": {
				"elementId": "dRaD4n5r0kgdVpthGYzOR",
				"focus": 0.9887906732928035,
				"gap": 1.7257289313316733
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.1767611930305293,
					78.84299993304558
				],
				[
					0,
					110.61555214486998
				]
			]
		},
		{
			"type": "ellipse",
			"version": 846,
			"versionNonce": 1465094101,
			"isDeleted": false,
			"id": "NcbtnYd4-gjglu7Py2ttV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -586.7644559138283,
			"y": 953.6720603494757,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 39.55483662710749,
			"height": 40.38757002978338,
			"seed": 1028003761,
			"groupIds": [
				"ML84EVCfJk8iAtNg17agu",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 855,
			"versionNonce": 625853435,
			"isDeleted": false,
			"id": "D3So75ZzvoUzXrdUfLmsY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -568.0279543536197,
			"y": 954.5047937521515,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0.8327334026759315,
			"height": 39.55483662710749,
			"seed": 15333777,
			"groupIds": [
				"ML84EVCfJk8iAtNg17agu",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0.8327334026759315,
					39.55483662710749
				]
			]
		},
		{
			"type": "line",
			"version": 854,
			"versionNonce": 1918684469,
			"isDeleted": false,
			"id": "yMTj4-YDK6JCG7z0B7JHX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -585.9317225111525,
			"y": 973.6576620136987,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.30573652309357,
			"height": 0.4163667013380199,
			"seed": 1299619697,
			"groupIds": [
				"ML84EVCfJk8iAtNg17agu",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					38.30573652309357,
					-0.4163667013380199
				]
			]
		},
		{
			"type": "line",
			"version": 773,
			"versionNonce": 143232155,
			"isDeleted": false,
			"id": "QjGqp5U-W86TAQ1VSEmWx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -544.5821906528444,
			"y": 973.9004488219773,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 149.40228723502685,
			"height": 0,
			"seed": 288590161,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					149.40228723502685,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1673,
			"versionNonce": 1209491093,
			"isDeleted": false,
			"id": "xWkDcbP3dTH5gtqOYXgLE",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -711.6148310550033,
			"y": 1023.5014178392366,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 91764529,
			"groupIds": [
				"LOixYzbi6_UceBQdKDTkN",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1707,
			"versionNonce": 1854095675,
			"isDeleted": false,
			"id": "e-IvxbiaFq6eCwvemX87I",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -639.6148310550033,
			"y": 1022.5014178392366,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1286351121,
			"groupIds": [
				"LOixYzbi6_UceBQdKDTkN",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "QQQl5DniOl6Kp0NfEYGXT",
					"type": "arrow"
				},
				{
					"id": "iCKla5JLyQ8Po6MYN2Y1O",
					"type": "arrow"
				}
			],
			"updated": 1707109565875,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1748,
			"versionNonce": 523813877,
			"isDeleted": false,
			"id": "uDoZ-LleBDzqYS5ZPs5Zk",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -567.6148310550033,
			"y": 1021.5014178392366,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1346821873,
			"groupIds": [
				"LOixYzbi6_UceBQdKDTkN",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1800,
			"versionNonce": 547185115,
			"isDeleted": false,
			"id": "92QSupTod2-wdp1tUMkpW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -495.61483105500326,
			"y": 1022.5014178392366,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1590679761,
			"groupIds": [
				"LOixYzbi6_UceBQdKDTkN",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1010,
			"versionNonce": 1271299413,
			"isDeleted": false,
			"id": "pckWkLuJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -850.5574160691577,
			"y": 1038.1033606808976,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 122.09986877441406,
			"height": 25,
			"seed": 165582513,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "Round Key 6",
			"rawText": "Round Key 6",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Round Key 6",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "arrow",
			"version": 264,
			"versionNonce": 401239675,
			"isDeleted": false,
			"id": "QQQl5DniOl6Kp0NfEYGXT",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -566.9870376002749,
			"y": 919.1001753755254,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.1767611930305293,
			"height": 110.61555214486998,
			"seed": 1142593681,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "dRaD4n5r0kgdVpthGYzOR",
				"focus": -1.055996718691851,
				"gap": 2.939597640937791
			},
			"endBinding": {
				"elementId": "e-IvxbiaFq6eCwvemX87I",
				"focus": 0.9887906732928068,
				"gap": 1.725728931331787
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.1767611930305293,
					78.84299993304558
				],
				[
					0,
					110.61555214486998
				]
			]
		},
		{
			"type": "ellipse",
			"version": 835,
			"versionNonce": 85330613,
			"isDeleted": false,
			"id": "0VNMfwSiISxrIa1A94chz",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -585.5876947207977,
			"y": 1105.474254250414,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 39.55483662710749,
			"height": 40.38757002978338,
			"seed": 267067473,
			"groupIds": [
				"CgxWTbbaEtb9bItXc9az2",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565875,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 844,
			"versionNonce": 120383259,
			"isDeleted": false,
			"id": "A5grY-8wejyhkH30Gj5N7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -566.8511931605891,
			"y": 1106.30698765309,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0.8327334026759315,
			"height": 39.55483662710749,
			"seed": 388296241,
			"groupIds": [
				"CgxWTbbaEtb9bItXc9az2",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565876,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0.8327334026759315,
					39.55483662710749
				]
			]
		},
		{
			"type": "line",
			"version": 843,
			"versionNonce": 2077027349,
			"isDeleted": false,
			"id": "9DKz-FG6SGppyVgO19uh7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -584.7549613181219,
			"y": 1125.459855914637,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.30573652309357,
			"height": 0.4163667013380199,
			"seed": 363462673,
			"groupIds": [
				"CgxWTbbaEtb9bItXc9az2",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565876,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					38.30573652309357,
					-0.4163667013380199
				]
			]
		},
		{
			"type": "line",
			"version": 762,
			"versionNonce": 618089403,
			"isDeleted": false,
			"id": "dGjivOEMROOXLOLOKDnpy",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -543.4054294598137,
			"y": 1125.7026427229157,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 149.40228723502685,
			"height": 0,
			"seed": 158455281,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565876,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					149.40228723502685,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1663,
			"versionNonce": 803250549,
			"isDeleted": false,
			"id": "8hfOuhefLOPXkt4aJ1XHH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -710.4380698619726,
			"y": 1175.3036117401753,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1166274513,
			"groupIds": [
				"Bq7PT9135Ih2Eul1SEqQy",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "pnBDFq-SkcyjBmWQawjmS",
					"type": "arrow"
				}
			],
			"updated": 1707109565876,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1695,
			"versionNonce": 889986139,
			"isDeleted": false,
			"id": "Xq9pMJ1wOQQLmFjfo3GtW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -638.4380698619726,
			"y": 1174.3036117401753,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1341640113,
			"groupIds": [
				"Bq7PT9135Ih2Eul1SEqQy",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "iCKla5JLyQ8Po6MYN2Y1O",
					"type": "arrow"
				}
			],
			"updated": 1707109565876,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1737,
			"versionNonce": 110537429,
			"isDeleted": false,
			"id": "_AN6xTtyMNzzw00Q-7RRs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -566.4380698619726,
			"y": 1173.3036117401753,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2146758545,
			"groupIds": [
				"Bq7PT9135Ih2Eul1SEqQy",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565876,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1789,
			"versionNonce": 1402853627,
			"isDeleted": false,
			"id": "_gmaNF9uKDxm8p_kNfmgQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -494.4380698619726,
			"y": 1174.3036117401753,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1538446705,
			"groupIds": [
				"Bq7PT9135Ih2Eul1SEqQy",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565876,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1000,
			"versionNonce": 545556533,
			"isDeleted": false,
			"id": "anx2hvn7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -849.3806548761271,
			"y": 1189.9055545818364,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 120.05987548828125,
			"height": 25,
			"seed": 913899345,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565876,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "Round Key 7",
			"rawText": "Round Key 7",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Round Key 7",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "arrow",
			"version": 244,
			"versionNonce": 2114912667,
			"isDeleted": false,
			"id": "iCKla5JLyQ8Po6MYN2Y1O",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -565.8102764072443,
			"y": 1070.902369276464,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.1767611930305293,
			"height": 110.61555214486998,
			"seed": 245296433,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565876,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "e-IvxbiaFq6eCwvemX87I",
				"focus": -1.0606669000062645,
				"gap": 2.90249012436243
			},
			"endBinding": {
				"elementId": "Xq9pMJ1wOQQLmFjfo3GtW",
				"focus": 0.9887906732928068,
				"gap": 1.725728931331787
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.1767611930305293,
					78.84299993304558
				],
				[
					0,
					110.61555214486998
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1556,
			"versionNonce": 1871690133,
			"isDeleted": false,
			"id": "oWtJhPxzFZ4PaxSeQIuzt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -1030.7650830051734,
			"y": 1723.4173480794234,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1545718321,
			"groupIds": [
				"MG1HYzzY2Xe9Iu6o_ERdR",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565876,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1592,
			"versionNonce": 1569855035,
			"isDeleted": false,
			"id": "ux2Ph34ULyvqCAYBbml4d",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -958.7650830051734,
			"y": 1722.4173480794234,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1588288529,
			"groupIds": [
				"MG1HYzzY2Xe9Iu6o_ERdR",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "pshAUl4HjUwa1iOg0ikAk",
					"type": "arrow"
				},
				{
					"id": "k6NNWhTUUYUWJdvu58tiI",
					"type": "arrow"
				}
			],
			"updated": 1707109565876,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1630,
			"versionNonce": 216907509,
			"isDeleted": false,
			"id": "370P94UIlP6XqwfFwJlFp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -886.7650830051736,
			"y": 1721.4173480794234,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1642574321,
			"groupIds": [
				"MG1HYzzY2Xe9Iu6o_ERdR",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "pshAUl4HjUwa1iOg0ikAk",
					"type": "arrow"
				}
			],
			"updated": 1707109565876,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1682,
			"versionNonce": 1359582939,
			"isDeleted": false,
			"id": "-efOCrBKOQF-aQOS-gM8U",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -814.7650830051736,
			"y": 1722.4173480794234,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1256082385,
			"groupIds": [
				"MG1HYzzY2Xe9Iu6o_ERdR",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565876,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1539,
			"versionNonce": 1327765589,
			"isDeleted": false,
			"id": "NnL5BBm7ujIzOeum4UpQm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -377.4535518258451,
			"y": 1646.5505696269242,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1906747825,
			"groupIds": [
				"6SeonlPS9akfHz2b6yqRj",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "lHksGS0U"
				}
			],
			"updated": 1707109565876,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 410,
			"versionNonce": 923272059,
			"isDeleted": false,
			"id": "lHksGS0U",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -365.44001956414684,
			"y": 1667.0016018886226,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1063799697,
			"groupIds": [
				"6SeonlPS9akfHz2b6yqRj",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565876,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "rCon",
			"rawText": "rCon",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "NnL5BBm7ujIzOeum4UpQm",
			"originalText": "rCon",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1575,
			"versionNonce": 537413045,
			"isDeleted": false,
			"id": "TMZC3ypCY0bmDlwblAbK5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -305.4535518258451,
			"y": 1645.5505696269242,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 207270257,
			"groupIds": [
				"6SeonlPS9akfHz2b6yqRj",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "YPLmGpat"
				}
			],
			"updated": 1707109565876,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 467,
			"versionNonce": 2010111003,
			"isDeleted": false,
			"id": "YPLmGpat",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -293.44001956414684,
			"y": 1666.0016018886226,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1036344145,
			"groupIds": [
				"6SeonlPS9akfHz2b6yqRj",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565876,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "0x00",
			"rawText": "0x00",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "TMZC3ypCY0bmDlwblAbK5",
			"originalText": "0x00",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1617,
			"versionNonce": 314558229,
			"isDeleted": false,
			"id": "Q0M_qR4FtEjnIAvYRGKKN",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -233.45355182584512,
			"y": 1644.5505696269242,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 603965745,
			"groupIds": [
				"6SeonlPS9akfHz2b6yqRj",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "zVlYTVfm"
				}
			],
			"updated": 1707109565876,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 465,
			"versionNonce": 1330880699,
			"isDeleted": false,
			"id": "zVlYTVfm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -221.44001956414684,
			"y": 1665.0016018886226,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 410090257,
			"groupIds": [
				"6SeonlPS9akfHz2b6yqRj",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565876,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "0x00",
			"rawText": "0x00",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "Q0M_qR4FtEjnIAvYRGKKN",
			"originalText": "0x00",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1665,
			"versionNonce": 968891509,
			"isDeleted": false,
			"id": "uyIbg57dPQvIaB-bturF9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -161.45355182584512,
			"y": 1645.5505696269242,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1536291057,
			"groupIds": [
				"6SeonlPS9akfHz2b6yqRj",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "U2mBYeKR"
				}
			],
			"updated": 1707109565876,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 464,
			"versionNonce": 1463144795,
			"isDeleted": false,
			"id": "U2mBYeKR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -149.44001956414684,
			"y": 1666.0016018886226,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 854108881,
			"groupIds": [
				"6SeonlPS9akfHz2b6yqRj",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565876,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "0x00",
			"rawText": "0x00",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "uyIbg57dPQvIaB-bturF9",
			"originalText": "0x00",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1411,
			"versionNonce": 1020184021,
			"isDeleted": false,
			"id": "7B4Y93ba_dsM8fQWaZdd3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -499.9249262048635,
			"y": 1336.3139975904826,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1192044721,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "pnBDFq-SkcyjBmWQawjmS",
					"type": "arrow"
				},
				{
					"id": "E1rIEShU3ukygteRFCBCp",
					"type": "arrow"
				}
			],
			"updated": 1707109565876,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1234,
			"versionNonce": 1355345403,
			"isDeleted": false,
			"id": "4rjexAtlOYI-qgPCgBX1P",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -716.0343159558569,
			"y": 1335.3139975904826,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 728592497,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "ucSVUnr6sTgMDh4dlQseB",
					"type": "arrow"
				}
			],
			"updated": 1707109565876,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1280,
			"versionNonce": 788611893,
			"isDeleted": false,
			"id": "izvQvPHNFT37rRDjerTFe",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -644.0343159558569,
			"y": 1334.3139975904826,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1051641905,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565876,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1329,
			"versionNonce": 789542555,
			"isDeleted": false,
			"id": "7EfzfZFiixgD6915Am6Cv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -572.0343159558569,
			"y": 1335.3139975904826,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1741500401,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "dMbpFMNHP2tyF9ZsoLC7I",
					"type": "arrow"
				}
			],
			"updated": 1707109565876,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1088,
			"versionNonce": 616371349,
			"isDeleted": false,
			"id": "2Tn-gdG7m0arwoUXVpPUr",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -718.7136971822425,
			"y": 1567.8403966360804,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2126817201,
			"groupIds": [
				"nNyEfqSr3CbmzVaLaTgpJ",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "vRQxJjxiPi7S9Zp5uRvRo",
					"type": "arrow"
				}
			],
			"updated": 1707109565876,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1126,
			"versionNonce": 1622928187,
			"isDeleted": false,
			"id": "URoXy_A3vaDPKEti6Erz_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -646.7136971822425,
			"y": 1566.8403966360804,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 210841457,
			"groupIds": [
				"nNyEfqSr3CbmzVaLaTgpJ",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "FX9knH0b-ddgBnZyDGbMG",
					"type": "arrow"
				}
			],
			"updated": 1707109565876,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1165,
			"versionNonce": 163035637,
			"isDeleted": false,
			"id": "FECfrKN36DJ3HXG4s8Zxq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -574.7136971822425,
			"y": 1565.8403966360804,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 187615025,
			"groupIds": [
				"nNyEfqSr3CbmzVaLaTgpJ",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "xdJUpovqeIcAOB38b0Ono",
					"type": "arrow"
				}
			],
			"updated": 1707109565876,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1216,
			"versionNonce": 1513147355,
			"isDeleted": false,
			"id": "RuEn-IMt4siwDQKqDpqTX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -502.7136971822425,
			"y": 1566.8403966360804,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 630812401,
			"groupIds": [
				"nNyEfqSr3CbmzVaLaTgpJ",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "L2S740wAupGAq6PCP_eWT",
					"type": "arrow"
				}
			],
			"updated": 1707109565876,
			"link": null,
			"locked": false
		},
		{
			"type": "ellipse",
			"version": 590,
			"versionNonce": 922137429,
			"isDeleted": false,
			"id": "XgUubOCSJdMAU8lR1sB2j",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -593.696479051901,
			"y": 1658.143169957381,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 39.55483662710749,
			"height": 40.38757002978338,
			"seed": 2009933489,
			"groupIds": [
				"2T-voWQqG_7g49aoZQraJ",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565876,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 566,
			"versionNonce": 1602263163,
			"isDeleted": false,
			"id": "BZYq5WIptsMpW-GsBNj2V",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -574.9599774916921,
			"y": 1658.9759033600567,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0.8327334026759315,
			"height": 39.55483662710749,
			"seed": 364325009,
			"groupIds": [
				"2T-voWQqG_7g49aoZQraJ",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565876,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0.8327334026759315,
					39.55483662710749
				]
			]
		},
		{
			"type": "line",
			"version": 589,
			"versionNonce": 1221558453,
			"isDeleted": false,
			"id": "Rwd3t_ky_qPk1rHnOTjcv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -592.863745649225,
			"y": 1678.1287716216036,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.30573652309357,
			"height": 0.4163667013380199,
			"seed": 1321594481,
			"groupIds": [
				"2T-voWQqG_7g49aoZQraJ",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565876,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					38.30573652309357,
					-0.4163667013380199
				]
			]
		},
		{
			"type": "line",
			"version": 416,
			"versionNonce": 242077979,
			"isDeleted": false,
			"id": "uK7G_lDSFXbdkWQUXHBnP",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -552.2815459849916,
			"y": 1679.1783630816535,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 172.44898687148373,
			"height": 0,
			"seed": 1774254161,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565876,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					172.44898687148373,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 722,
			"versionNonce": 887595541,
			"isDeleted": false,
			"id": "ynNVa6RY3E2WTsAukMm_c",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -692.6426284351783,
			"y": 1444.9096249879826,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 238.74999999999986,
			"height": 80.00000000000006,
			"seed": 1753204273,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "wET1qKD9"
				},
				{
					"id": "ucSVUnr6sTgMDh4dlQseB",
					"type": "arrow"
				},
				{
					"id": "H3mhNi6ESvuqHfN1mipNL",
					"type": "arrow"
				},
				{
					"id": "dMbpFMNHP2tyF9ZsoLC7I",
					"type": "arrow"
				},
				{
					"id": "E1rIEShU3ukygteRFCBCp",
					"type": "arrow"
				},
				{
					"id": "vRQxJjxiPi7S9Zp5uRvRo",
					"type": "arrow"
				},
				{
					"id": "FX9knH0b-ddgBnZyDGbMG",
					"type": "arrow"
				},
				{
					"id": "xdJUpovqeIcAOB38b0Ono",
					"type": "arrow"
				},
				{
					"id": "L2S740wAupGAq6PCP_eWT",
					"type": "arrow"
				}
			],
			"updated": 1707109565876,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 680,
			"versionNonce": 678098363,
			"isDeleted": false,
			"id": "wET1qKD9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -602.5645034351784,
			"y": 1472.9096249879826,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 636082193,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565876,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "S-Box",
			"rawText": "S-Box",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "ynNVa6RY3E2WTsAukMm_c",
			"originalText": "S-Box",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "arrow",
			"version": 595,
			"versionNonce": 540317557,
			"isDeleted": false,
			"id": "pnBDFq-SkcyjBmWQawjmS",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -680.5368999997092,
			"y": 1243.9239460766553,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 221.2499999999999,
			"height": 88.74999999999977,
			"seed": 871804401,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565876,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "8hfOuhefLOPXkt4aJ1XHH",
				"focus": 0.5735782820243694,
				"gap": 3.7182698130833387
			},
			"endBinding": {
				"elementId": "7B4Y93ba_dsM8fQWaZdd3",
				"focus": 0.4679641221015979,
				"gap": 3.640051513827416
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					20,
					23.749999999999943
				],
				[
					206.2499999999999,
					61.24999999999994
				],
				[
					221.2499999999999,
					88.74999999999977
				]
			]
		},
		{
			"type": "line",
			"version": 371,
			"versionNonce": 479888987,
			"isDeleted": false,
			"id": "w79KytQ3lVec4pRPL6JcD",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -613.0368999997092,
			"y": 1245.173946076655,
			"strokeColor": "#f08c00",
			"backgroundColor": "transparent",
			"width": 158.7499999999999,
			"height": 21.25,
			"seed": 2041432017,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565876,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					15,
					16.25
				],
				[
					144.9999999999999,
					16.25
				],
				[
					158.7499999999999,
					-5
				]
			]
		},
		{
			"type": "arrow",
			"version": 292,
			"versionNonce": 1962664149,
			"isDeleted": false,
			"id": "7sbKxHgErvy4DMunzp7Gt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -548.0368999997092,
			"y": 1263.923946076655,
			"strokeColor": "#f08c00",
			"backgroundColor": "transparent",
			"width": 60,
			"height": 43.75,
			"seed": 287745457,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565876,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					-57.5,
					25
				],
				[
					-60,
					43.75
				]
			]
		},
		{
			"type": "line",
			"version": 289,
			"versionNonce": 1372521211,
			"isDeleted": false,
			"id": "eclalww_DY0ynDlQVEWle",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -685.5368999997092,
			"y": 1336.423946076655,
			"strokeColor": "#f08c00",
			"backgroundColor": "transparent",
			"width": 156.25,
			"height": 23.75,
			"seed": 1703462801,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565876,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					21.25,
					-23.75
				],
				[
					136.25,
					-23.75
				],
				[
					156.25,
					-3.75
				]
			]
		},
		{
			"type": "arrow",
			"version": 1103,
			"versionNonce": 1162264283,
			"isDeleted": false,
			"id": "ucSVUnr6sTgMDh4dlQseB",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -684.2868999997092,
			"y": 1401.423946076655,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 20.81474781296663,
			"height": 42.23567891132757,
			"seed": 285977969,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109842582,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "4rjexAtlOYI-qgPCgBX1P",
				"focus": 0.3815010707788637,
				"gap": 1.207883962776009
			},
			"endBinding": {
				"elementId": "ynNVa6RY3E2WTsAukMm_c",
				"gap": 1.25,
				"focus": -0.4576642335766534
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					14.999999999999979,
					32.499999999999886
				],
				[
					20.81474781296663,
					42.23567891132757
				]
			]
		},
		{
			"type": "arrow",
			"version": 1014,
			"versionNonce": 2036345723,
			"isDeleted": false,
			"id": "H3mhNi6ESvuqHfN1mipNL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -609.8684128884022,
			"y": 1398.6298747682526,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.3296550777988614,
			"height": 42.529750219729976,
			"seed": 2062997329,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109842582,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "ynNVa6RY3E2WTsAukMm_c",
				"gap": 3.75,
				"focus": -0.3321242825998672
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					-0.48790893796666523,
					27.59360395072622
				],
				[
					-1.3296550777988614,
					42.529750219729976
				]
			]
		},
		{
			"type": "arrow",
			"version": 1324,
			"versionNonce": 216204315,
			"isDeleted": false,
			"id": "dMbpFMNHP2tyF9ZsoLC7I",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -538.9457676554807,
			"y": 1401.2160621138792,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.0984553878599854,
			"height": 42.27407272260257,
			"seed": 899794225,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109842582,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "7EfzfZFiixgD6915Am6Cv",
				"focus": 0.04916065451687672,
				"gap": 1.0000000000001137
			},
			"endBinding": {
				"elementId": "ynNVa6RY3E2WTsAukMm_c",
				"gap": 1.419490151500895,
				"focus": 0.2604295889978645
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					-0.48338805927647854,
					27.337926453598868
				],
				[
					-1.0984553878599854,
					42.27407272260257
				]
			]
		},
		{
			"type": "arrow",
			"version": 1297,
			"versionNonce": 667011259,
			"isDeleted": false,
			"id": "E1rIEShU3ukygteRFCBCp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -468.1932029281404,
			"y": 1402.404222246316,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 17.82737599796576,
			"height": 39.64207496060135,
			"seed": 477361937,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109842582,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "7B4Y93ba_dsM8fQWaZdd3",
				"focus": -0.20189137607087285,
				"gap": 1.1881601324370195
			},
			"endBinding": {
				"elementId": "ynNVa6RY3E2WTsAukMm_c",
				"gap": 2.863327781065209,
				"focus": 0.457450220344579
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					-10.113493135061901,
					25.18720790145244
				],
				[
					-17.82737599796576,
					39.64207496060135
				]
			]
		},
		{
			"type": "arrow",
			"version": 722,
			"versionNonce": 1335818587,
			"isDeleted": false,
			"id": "vRQxJjxiPi7S9Zp5uRvRo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -663.4499193818452,
			"y": 1525.9658014835038,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.163012790158675,
			"height": 40.00884027391078,
			"seed": 837086449,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109842582,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "ynNVa6RY3E2WTsAukMm_c",
				"gap": 1.0561764955211856,
				"focus": 0.46411343409714445
			},
			"endBinding": {
				"elementId": "2Tn-gdG7m0arwoUXVpPUr",
				"focus": -0.42522606411245667,
				"gap": 1.865754878665598
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					-14.740099048282715,
					25.268741225627878
				],
				[
					-23.163012790158675,
					40.00884027391078
				]
			]
		},
		{
			"type": "arrow",
			"version": 1270,
			"versionNonce": 835524091,
			"isDeleted": false,
			"id": "FX9knH0b-ddgBnZyDGbMG",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -612.3568167605413,
			"y": 1528.2784056518378,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.3296550777989182,
			"height": 36.212564913323035,
			"seed": 1031546577,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109842582,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "ynNVa6RY3E2WTsAukMm_c",
				"gap": 3.3687806638552047,
				"focus": 0.3166841665687963
			},
			"endBinding": {
				"elementId": "URoXy_A3vaDPKEti6Erz_",
				"focus": -0.11762472551237865,
				"gap": 2.3494260709195487
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					-0.48790893796669366,
					21.276418644319392
				],
				[
					-1.3296550777989182,
					36.212564913323035
				]
			]
		},
		{
			"type": "arrow",
			"version": 1304,
			"versionNonce": 760127131,
			"isDeleted": false,
			"id": "xdJUpovqeIcAOB38b0Ono",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -539.624753720444,
			"y": 1526.8947543222264,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.3296550777989182,
			"height": 36.212564913323035,
			"seed": 701572273,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109842583,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "ynNVa6RY3E2WTsAukMm_c",
				"gap": 1.9851293342437657,
				"focus": -0.28767993246922235
			},
			"endBinding": {
				"elementId": "FECfrKN36DJ3HXG4s8Zxq",
				"focus": -0.09856773327460973,
				"gap": 2.7330774005309877
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					-0.48790893796666523,
					21.276418644319392
				],
				[
					-1.3296550777989182,
					36.212564913323035
				]
			]
		},
		{
			"type": "arrow",
			"version": 1177,
			"versionNonce": 483791675,
			"isDeleted": false,
			"id": "L2S740wAupGAq6PCP_eWT",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -487.0529105567789,
			"y": 1526.4281646852396,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.76188359523229,
			"height": 35.91849360492074,
			"seed": 579561105,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109842583,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "ynNVa6RY3E2WTsAukMm_c",
				"gap": 1.5185396972569833,
				"focus": -0.45562589427303674
			},
			"endBinding": {
				"elementId": "RuEn-IMt4siwDQKqDpqTX",
				"focus": 0.4019006378744658,
				"gap": 4.493738345919951
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					13.947135782265491,
					26.18281469359306
				],
				[
					19.76188359523229,
					35.91849360492074
				]
			]
		},
		{
			"type": "ellipse",
			"version": 954,
			"versionNonce": 443268021,
			"isDeleted": false,
			"id": "ZAeEMPYrdcuW_vy-8TqlL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -904.4405292371597,
			"y": 1813.3334445277674,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 39.55483662710749,
			"height": 40.38757002978338,
			"seed": 442984561,
			"groupIds": [
				"Kpq9ZnfsQDxZdlN07suah",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565876,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 963,
			"versionNonce": 1611056667,
			"isDeleted": false,
			"id": "RjbqlI-8cPAAbqCDD2igx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -885.7040276769509,
			"y": 1814.1661779304432,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0.8327334026759315,
			"height": 39.55483662710749,
			"seed": 1998795345,
			"groupIds": [
				"Kpq9ZnfsQDxZdlN07suah",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565876,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0.8327334026759315,
					39.55483662710749
				]
			]
		},
		{
			"type": "line",
			"version": 962,
			"versionNonce": 491027733,
			"isDeleted": false,
			"id": "iB8PTZNnFTVg5hHJf6x1k",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -903.6077958344838,
			"y": 1833.3190461919903,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.30573652309357,
			"height": 0.4163667013380199,
			"seed": 1099612209,
			"groupIds": [
				"Kpq9ZnfsQDxZdlN07suah",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565876,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					38.30573652309357,
					-0.4163667013380199
				]
			]
		},
		{
			"type": "line",
			"version": 402,
			"versionNonce": 622676667,
			"isDeleted": false,
			"id": "Sfip0JwOH6h5-SoukXTJ3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -573.9981559635444,
			"y": 1583.4192015107492,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.1767611930305293,
			"height": 151.80219390093862,
			"seed": 1468371473,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565876,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					1.1767611930305293,
					151.80219390093862
				]
			]
		},
		{
			"type": "arrow",
			"version": 2001,
			"versionNonce": 1044255349,
			"isDeleted": false,
			"id": "pshAUl4HjUwa1iOg0ikAk",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -592.8263350520344,
			"y": 1676.3833357601616,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 296.06124122844915,
			"height": 43.269239211365175,
			"seed": 1846224881,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565876,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "370P94UIlP6XqwfFwJlFp",
				"focus": -1.0575950956563709,
				"gap": 2.1224932753100347
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					-267.1247908179291,
					5.88380596515276
				],
				[
					-296.06124122844915,
					43.269239211365175
				]
			]
		},
		{
			"type": "text",
			"version": 1035,
			"versionNonce": 1513765723,
			"isDeleted": false,
			"id": "m0ezH3Oj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -1165.000623247206,
			"y": 1740.3728133071456,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 124.59986877441406,
			"height": 25,
			"seed": 790823377,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565876,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "Round Key 8",
			"rawText": "Round Key 8",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Round Key 8",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "line",
			"version": 881,
			"versionNonce": 706608085,
			"isDeleted": false,
			"id": "-YkqwoQowRgSAf-wdjWBn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -862.2582639761755,
			"y": 1833.561833000269,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 149.40228723502685,
			"height": 0,
			"seed": 400859057,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565876,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					149.40228723502685,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1781,
			"versionNonce": 196089851,
			"isDeleted": false,
			"id": "zBzPYUdEtgzHLmIFBbJAL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -1029.2909043783343,
			"y": 1883.1628020175285,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 376930705,
			"groupIds": [
				"4mHOl9uK99L6WIagr-VeU",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1815,
			"versionNonce": 1492760885,
			"isDeleted": false,
			"id": "ydcHzs8H5_mnMSWHW_lbg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -957.2909043783343,
			"y": 1882.1628020175285,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1746085745,
			"groupIds": [
				"4mHOl9uK99L6WIagr-VeU",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "k6NNWhTUUYUWJdvu58tiI",
					"type": "arrow"
				},
				{
					"id": "PgF1s0tWwutD_KeLkv3YZ",
					"type": "arrow"
				}
			],
			"updated": 1707109565877,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1856,
			"versionNonce": 394354843,
			"isDeleted": false,
			"id": "ayOKl1i8hMUzhzW_FD2W_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -885.2909043783344,
			"y": 1881.1628020175285,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 922685777,
			"groupIds": [
				"4mHOl9uK99L6WIagr-VeU",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1908,
			"versionNonce": 607570581,
			"isDeleted": false,
			"id": "6dy2PMg8IDbC5yyaIwLpo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -813.2909043783344,
			"y": 1882.1628020175285,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2022883121,
			"groupIds": [
				"4mHOl9uK99L6WIagr-VeU",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1119,
			"versionNonce": 2002818363,
			"isDeleted": false,
			"id": "5PuxRCMp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -1168.233489392489,
			"y": 1897.7647448591892,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 121.47987365722656,
			"height": 25,
			"seed": 188068113,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "Round Key 9",
			"rawText": "Round Key 9",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Round Key 9",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "arrow",
			"version": 662,
			"versionNonce": 478851061,
			"isDeleted": false,
			"id": "k6NNWhTUUYUWJdvu58tiI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -884.6631109236062,
			"y": 1778.7615595538173,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.1767611930305293,
			"height": 110.61555214486998,
			"seed": 341796593,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "ux2Ph34ULyvqCAYBbml4d",
				"focus": -1.0656442046466053,
				"gap": 3.1999075581707075
			},
			"endBinding": {
				"elementId": "ydcHzs8H5_mnMSWHW_lbg",
				"focus": 0.9887906732928006,
				"gap": 1.7257289313315596
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.1767611930305293,
					78.84299993304558
				],
				[
					0,
					110.61555214486998
				]
			]
		},
		{
			"type": "ellipse",
			"version": 1004,
			"versionNonce": 1253062107,
			"isDeleted": false,
			"id": "myzgx_R-Nd2imragSaion",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -903.2266605275535,
			"y": 1978.8660983895893,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 39.55483662710749,
			"height": 40.38757002978338,
			"seed": 513237201,
			"groupIds": [
				"2JzQd7MsffE6AK5fqePFO",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1013,
			"versionNonce": 536537429,
			"isDeleted": false,
			"id": "sDGZ2yzHsSs1yItMWyyLM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -884.4901589673449,
			"y": 1979.698831792265,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0.8327334026759315,
			"height": 39.55483662710749,
			"seed": 2004164273,
			"groupIds": [
				"2JzQd7MsffE6AK5fqePFO",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0.8327334026759315,
					39.55483662710749
				]
			]
		},
		{
			"type": "line",
			"version": 1012,
			"versionNonce": 545440379,
			"isDeleted": false,
			"id": "PGUcTcnvGqnV7BMfx5UBB",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -902.3939271248777,
			"y": 1998.8517000538127,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.30573652309357,
			"height": 0.4163667013380199,
			"seed": 1302339729,
			"groupIds": [
				"2JzQd7MsffE6AK5fqePFO",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					38.30573652309357,
					-0.4163667013380199
				]
			]
		},
		{
			"type": "line",
			"version": 931,
			"versionNonce": 803010229,
			"isDeleted": false,
			"id": "GLA6i0Z0TtYonTIhKPv-d",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -861.0443952665695,
			"y": 1999.0944868620913,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 149.40228723502685,
			"height": 0,
			"seed": 248505969,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					149.40228723502685,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1831,
			"versionNonce": 26917659,
			"isDeleted": false,
			"id": "e80THfR6TawMf3UGZC0vK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -1028.0770356687285,
			"y": 2048.695455879351,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 97251409,
			"groupIds": [
				"2tdMrao_AsRto7uhDW2lr",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1865,
			"versionNonce": 114710549,
			"isDeleted": false,
			"id": "PEwrwrV6DjII9AFHLiArA",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -956.0770356687285,
			"y": 2047.695455879351,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 946585137,
			"groupIds": [
				"2tdMrao_AsRto7uhDW2lr",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "PgF1s0tWwutD_KeLkv3YZ",
					"type": "arrow"
				},
				{
					"id": "vtrQSGz5NKL6Mp7_2ddW-",
					"type": "arrow"
				}
			],
			"updated": 1707109565877,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1906,
			"versionNonce": 980066235,
			"isDeleted": false,
			"id": "k4L3HGpFyesjLsf1ue_3U",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -884.0770356687284,
			"y": 2046.695455879351,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 93769745,
			"groupIds": [
				"2tdMrao_AsRto7uhDW2lr",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1958,
			"versionNonce": 1859947893,
			"isDeleted": false,
			"id": "CBqWVCPJ3Uy7KgySIfKIt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -812.0770356687284,
			"y": 2047.695455879351,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 54830577,
			"groupIds": [
				"2tdMrao_AsRto7uhDW2lr",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1177,
			"versionNonce": 1695871067,
			"isDeleted": false,
			"id": "qAytf4Rf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -1176.433710227127,
			"y": 2063.2973987210107,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 128.47987365722656,
			"height": 25,
			"seed": 477937617,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "Round Key 10",
			"rawText": "Round Key 10",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Round Key 10",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "arrow",
			"version": 764,
			"versionNonce": 1463097045,
			"isDeleted": false,
			"id": "PgF1s0tWwutD_KeLkv3YZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -883.449242214,
			"y": 1944.2942134156392,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.1767611930305293,
			"height": 110.61555214486998,
			"seed": 1867947441,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "ydcHzs8H5_mnMSWHW_lbg",
				"focus": -1.0559967186918477,
				"gap": 2.939597640937677
			},
			"endBinding": {
				"elementId": "PEwrwrV6DjII9AFHLiArA",
				"focus": 0.9887906732928091,
				"gap": 1.7257289313319006
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.1767611930305293,
					78.84299993304558
				],
				[
					0,
					110.61555214486998
				]
			]
		},
		{
			"type": "ellipse",
			"version": 993,
			"versionNonce": 862727419,
			"isDeleted": false,
			"id": "9ovZVZw0H2G6yg_ERqj2D",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -902.0498993345228,
			"y": 2130.6682922905275,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 39.55483662710749,
			"height": 40.38757002978338,
			"seed": 1794752401,
			"groupIds": [
				"JmtYym5irRcHZiq_RudY-",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1002,
			"versionNonce": 712340533,
			"isDeleted": false,
			"id": "PbPukWwmW-blhRANZl5jb",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -883.3133977743142,
			"y": 2131.5010256932037,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0.8327334026759315,
			"height": 39.55483662710749,
			"seed": 765306225,
			"groupIds": [
				"JmtYym5irRcHZiq_RudY-",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0.8327334026759315,
					39.55483662710749
				]
			]
		},
		{
			"type": "line",
			"version": 1001,
			"versionNonce": 2029180315,
			"isDeleted": false,
			"id": "cmT62qTtgl_ceU0FDzznJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -901.217165931847,
			"y": 2150.653893954751,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.30573652309357,
			"height": 0.4163667013380199,
			"seed": 579456849,
			"groupIds": [
				"JmtYym5irRcHZiq_RudY-",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					38.30573652309357,
					-0.4163667013380199
				]
			]
		},
		{
			"type": "line",
			"version": 920,
			"versionNonce": 1686316437,
			"isDeleted": false,
			"id": "Z0rHdqViUlHNRWP1Z76_K",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -859.8676340735389,
			"y": 2150.8966807630295,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 149.40228723502685,
			"height": 0,
			"seed": 1612037425,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					149.40228723502685,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1821,
			"versionNonce": 1960536635,
			"isDeleted": false,
			"id": "BLMdjxigvOvtIlN5my1AW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -1026.9002744756976,
			"y": 2200.497649780289,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1168699153,
			"groupIds": [
				"NpQI8LhDGmCfy47pwMSsX",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "qSAGjT1N8kso52lIZ_Ls2",
					"type": "arrow"
				}
			],
			"updated": 1707109565877,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1853,
			"versionNonce": 1754508021,
			"isDeleted": false,
			"id": "_ZWzOXORT66jxNFngvCtr",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -954.9002744756976,
			"y": 2199.497649780289,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1505420529,
			"groupIds": [
				"NpQI8LhDGmCfy47pwMSsX",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "vtrQSGz5NKL6Mp7_2ddW-",
					"type": "arrow"
				}
			],
			"updated": 1707109565877,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1895,
			"versionNonce": 1544055515,
			"isDeleted": false,
			"id": "xyFMnhWdy419pjP17xfzZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -882.9002744756978,
			"y": 2198.497649780289,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1741889233,
			"groupIds": [
				"NpQI8LhDGmCfy47pwMSsX",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1947,
			"versionNonce": 388793429,
			"isDeleted": false,
			"id": "X44GtWa45Pix4hh1p_QPR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -810.9002744756978,
			"y": 2199.497649780289,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1586044081,
			"groupIds": [
				"NpQI8LhDGmCfy47pwMSsX",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1160,
			"versionNonce": 588011387,
			"isDeleted": false,
			"id": "jN0h2ljL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -1165.8428594898523,
			"y": 2215.0995926219503,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 120.13987731933594,
			"height": 25,
			"seed": 1837391505,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "Round Key 11",
			"rawText": "Round Key 11",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Round Key 11",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "arrow",
			"version": 744,
			"versionNonce": 606286261,
			"isDeleted": false,
			"id": "vtrQSGz5NKL6Mp7_2ddW-",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -882.2724810209694,
			"y": 2096.096407316578,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.1767611930305293,
			"height": 110.61555214486998,
			"seed": 1669096561,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "PEwrwrV6DjII9AFHLiArA",
				"focus": -1.060666900006268,
				"gap": 2.9024901243625436
			},
			"endBinding": {
				"elementId": "_ZWzOXORT66jxNFngvCtr",
				"focus": 0.9887906732928035,
				"gap": 1.7257289313316733
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.1767611930305293,
					78.84299993304558
				],
				[
					0,
					110.61555214486998
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1194,
			"versionNonce": 136949787,
			"isDeleted": false,
			"id": "Nee0tSWB4N8M2T4wLX3pV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -714.0054609576404,
			"y": 1801.2065032610021,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1545749457,
			"groupIds": [
				"wxrSITGGZD5cs75k6c7l7",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1229,
			"versionNonce": 748499733,
			"isDeleted": false,
			"id": "EAiUrgoGfzOWJHkymYhdg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -642.0054609576404,
			"y": 1800.2065032610021,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 665559473,
			"groupIds": [
				"wxrSITGGZD5cs75k6c7l7",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1270,
			"versionNonce": 1565717691,
			"isDeleted": false,
			"id": "LF0wwTTS13HZU8F33nm6v",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -570.0054609576404,
			"y": 1799.2065032610021,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1510884241,
			"groupIds": [
				"wxrSITGGZD5cs75k6c7l7",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1321,
			"versionNonce": 219154549,
			"isDeleted": false,
			"id": "27Tr8iuXmAmB_C5hfLk3b",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -498.00546095764037,
			"y": 1800.2065032610021,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1333897585,
			"groupIds": [
				"wxrSITGGZD5cs75k6c7l7",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1194,
			"versionNonce": 304784731,
			"isDeleted": false,
			"id": "WCBVPkAP564cIPVzmuc6Z",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -711.6519385715792,
			"y": 1965.9530702852767,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 127255167,
			"groupIds": [
				"ILLenH8a-xrckLQFrYjLW",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1229,
			"versionNonce": 2000761301,
			"isDeleted": false,
			"id": "OceF7aJ3oGGmybpujjdpg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -639.6519385715792,
			"y": 1964.9530702852767,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 970398367,
			"groupIds": [
				"ILLenH8a-xrckLQFrYjLW",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1270,
			"versionNonce": 2114142715,
			"isDeleted": false,
			"id": "aAxkqIoZUI8nZ56fOg3YB",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -567.6519385715792,
			"y": 1963.9530702852767,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 645426879,
			"groupIds": [
				"ILLenH8a-xrckLQFrYjLW",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1321,
			"versionNonce": 1212559157,
			"isDeleted": false,
			"id": "9s_EddkveqHXJUiNJEMqV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -495.6519385715792,
			"y": 1964.9530702852767,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2014985951,
			"groupIds": [
				"ILLenH8a-xrckLQFrYjLW",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1225,
			"versionNonce": 1776241307,
			"isDeleted": false,
			"id": "rYmLJF-NqxbjKQ0GpyAXp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -709.2984161855181,
			"y": 2118.9320253792457,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1962956639,
			"groupIds": [
				"ro7azRWT_I_bikDT0LNWe",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1260,
			"versionNonce": 512000149,
			"isDeleted": false,
			"id": "hTq5MJ6LmNMTcXdjmY2f2",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -637.2984161855181,
			"y": 2117.9320253792457,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1255936895,
			"groupIds": [
				"ro7azRWT_I_bikDT0LNWe",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1301,
			"versionNonce": 1517371195,
			"isDeleted": false,
			"id": "XRES7vMZ8wbsl-X6Cebbj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -565.2984161855181,
			"y": 2116.9320253792457,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1110133663,
			"groupIds": [
				"ro7azRWT_I_bikDT0LNWe",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1352,
			"versionNonce": 800171509,
			"isDeleted": false,
			"id": "vuT_Mc5IOaQZbxhSh4pq1",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -493.29841618551814,
			"y": 2117.9320253792457,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1461616575,
			"groupIds": [
				"ro7azRWT_I_bikDT0LNWe",
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1019,
			"versionNonce": 438018011,
			"isDeleted": false,
			"id": "uzyiGpr8",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -411.5500199864397,
			"y": 1742.4912967826854,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 122.09986877441406,
			"height": 25,
			"seed": 1017525311,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "Round Key 4",
			"rawText": "Round Key 4",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Round Key 4",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "text",
			"version": 1056,
			"versionNonce": 1590894421,
			"isDeleted": false,
			"id": "rzgGssfI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -406.8429752143177,
			"y": 1814.2737295575478,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 121.65986633300781,
			"height": 25,
			"seed": 556677951,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "Round Key 5",
			"rawText": "Round Key 5",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Round Key 5",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "text",
			"version": 1045,
			"versionNonce": 49343611,
			"isDeleted": false,
			"id": "rwTE9J4B",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -404.4894528282566,
			"y": 1984.9041025469744,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 122.09986877441406,
			"height": 25,
			"seed": 231232575,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "Round Key 6",
			"rawText": "Round Key 6",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Round Key 6",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "text",
			"version": 1051,
			"versionNonce": 306080949,
			"isDeleted": false,
			"id": "xGWhIIMO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -400.9591692491649,
			"y": 2139.0598188339745,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 120.05987548828125,
			"height": 25,
			"seed": 660255729,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "Round Key 7",
			"rawText": "Round Key 7",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Round Key 7",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "arrow",
			"version": 331,
			"versionNonce": 145990939,
			"isDeleted": false,
			"id": "qSAGjT1N8kso52lIZ_Ls2",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -1006.3810833239639,
			"y": 2273.546475180992,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 221.2499999999999,
			"height": 88.74999999999994,
			"seed": 1365111185,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "BLMdjxigvOvtIlN5my1AW",
				"focus": 0.7824283402516379,
				"gap": 8.146760877305951
			},
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					20,
					23.749999999999943
				],
				[
					206.2499999999999,
					61.24999999999994
				],
				[
					221.2499999999999,
					88.74999999999994
				]
			]
		},
		{
			"type": "line",
			"version": 293,
			"versionNonce": 1234767381,
			"isDeleted": false,
			"id": "uT07cFZGYJ59LCIPokwWR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -938.8810833239639,
			"y": 2274.7964751809914,
			"strokeColor": "#f08c00",
			"backgroundColor": "transparent",
			"width": 158.7499999999999,
			"height": 21.25,
			"seed": 1554749297,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					15,
					16.25
				],
				[
					144.9999999999999,
					16.25
				],
				[
					158.7499999999999,
					-5
				]
			]
		},
		{
			"type": "arrow",
			"version": 214,
			"versionNonce": 47598011,
			"isDeleted": false,
			"id": "xEr-ptJFohsa1QbjwvEo6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -873.8810833239639,
			"y": 2293.5464751809914,
			"strokeColor": "#f08c00",
			"backgroundColor": "transparent",
			"width": 60,
			"height": 43.75,
			"seed": 1594458449,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					-57.5,
					25
				],
				[
					-60,
					43.75
				]
			]
		},
		{
			"type": "line",
			"version": 211,
			"versionNonce": 1943569269,
			"isDeleted": false,
			"id": "zbTmEmpULqy6tYaISRx0k",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -1011.3810833239639,
			"y": 2366.0464751809914,
			"strokeColor": "#f08c00",
			"backgroundColor": "transparent",
			"width": 156.25,
			"height": 23.75,
			"seed": 365899569,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					21.25,
					-23.75
				],
				[
					136.25,
					-23.75
				],
				[
					156.25,
					-3.75
				]
			]
		},
		{
			"type": "text",
			"version": 867,
			"versionNonce": 914053723,
			"isDeleted": false,
			"id": "4gEp7Bez",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -1753.1551425711925,
			"y": -161.1939665514509,
			"strokeColor": "#12b886",
			"backgroundColor": "transparent",
			"width": 726.5625,
			"height": 432,
			"seed": 754421425,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "void KeySchedule128(const u8* uKey, u32* rKey) {\n    u32 temp;\n    for (int i = 0; i < 4; i++) {\n        rKey[i] = (u32)uKey[4*i] << 0x18 | \n                  (u32)uKey[4*i+1] << 0x10 | \n                  (u32)uKey[4*i+2] << 0x08 | \n                  (u32)uKey[4*i+3];\n    }\n    \n    for (int i = 4; i < (10 + 1) * 4; i++) {\n        temp = rKey[i - 1];\n        if (i % 4 == 0)\n            temp = SubWord(RotWord(temp)) ^ rCon[(i / 4) - 1];\n        temp = SubWord(temp);\n        }\n    rKey[i] = rKey[i - Nk] ^ temp;\n    }\n}",
			"rawText": "void KeySchedule128(const u8* uKey, u32* rKey) {\n    u32 temp;\n    for (int i = 0; i < 4; i++) {\n        rKey[i] = (u32)uKey[4*i] << 0x18 | \n                  (u32)uKey[4*i+1] << 0x10 | \n                  (u32)uKey[4*i+2] << 0x08 | \n                  (u32)uKey[4*i+3];\n    }\n    \n    for (int i = 4; i < (10 + 1) * 4; i++) {\n        temp = rKey[i - 1];\n        if (i % 4 == 0)\n            temp = SubWord(RotWord(temp)) ^ rCon[(i / 4) - 1];\n        temp = SubWord(temp);\n        }\n    rKey[i] = rKey[i - Nk] ^ temp;\n    }\n}",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "void KeySchedule128(const u8* uKey, u32* rKey) {\n    u32 temp;\n    for (int i = 0; i < 4; i++) {\n        rKey[i] = (u32)uKey[4*i] << 0x18 | \n                  (u32)uKey[4*i+1] << 0x10 | \n                  (u32)uKey[4*i+2] << 0x08 | \n                  (u32)uKey[4*i+3];\n    }\n    \n    for (int i = 4; i < (10 + 1) * 4; i++) {\n        temp = rKey[i - 1];\n        if (i % 4 == 0)\n            temp = SubWord(RotWord(temp)) ^ rCon[(i / 4) - 1];\n        temp = SubWord(temp);\n        }\n    rKey[i] = rKey[i - Nk] ^ temp;\n    }\n}",
			"lineHeight": 1.2,
			"baseline": 427
		},
		{
			"type": "text",
			"version": 380,
			"versionNonce": 88231125,
			"isDeleted": false,
			"id": "R6wZEpVL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -100.55639211248217,
			"y": -155.28192658871,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 123.05987548828125,
			"height": 25,
			"seed": 1887437727,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "Round Key 0",
			"rawText": "Round Key 0",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Round Key 0",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 924,
			"versionNonce": 544560891,
			"isDeleted": false,
			"id": "O0Bhhgsk7xNKBfMMLTpP5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -128.89748479898526,
			"y": -743.4829588504082,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1183865876,
			"groupIds": [
				"0ZQ-qIpRfJ1gByD50hfey"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "Cy1IcBBh"
				}
			],
			"updated": 1707109565877,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 450,
			"versionNonce": 1298917941,
			"isDeleted": false,
			"id": "Cy1IcBBh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -100.32644979070493,
			"y": -723.5319265887099,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 13.759994506835938,
			"height": 25,
			"seed": 634632596,
			"groupIds": [
				"0ZQ-qIpRfJ1gByD50hfey"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "0",
			"rawText": "0",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "O0Bhhgsk7xNKBfMMLTpP5",
			"originalText": "0",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 986,
			"versionNonce": 2135343003,
			"isDeleted": false,
			"id": "SIJEszWcPuByqg68LtEWV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -125.89748479898526,
			"y": -677.4829588504082,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1338992404,
			"groupIds": [
				"0ZQ-qIpRfJ1gByD50hfey"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "XpbWomov"
				}
			],
			"updated": 1707109565877,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 443,
			"versionNonce": 221961109,
			"isDeleted": false,
			"id": "XpbWomov",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -93.15645162175962,
			"y": -657.5319265887099,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.4199981689453125,
			"height": 25,
			"seed": 1761174676,
			"groupIds": [
				"0ZQ-qIpRfJ1gByD50hfey"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565877,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "1",
			"rawText": "1",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "SIJEszWcPuByqg68LtEWV",
			"originalText": "1",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 978,
			"versionNonce": 488772667,
			"isDeleted": false,
			"id": "xkYV-egBG5CVGkV0SF01R",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -126.89748479898526,
			"y": -610.4829588504082,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 386380308,
			"groupIds": [
				"0ZQ-qIpRfJ1gByD50hfey"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "uBO1zGAV"
				}
			],
			"updated": 1707109565877,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 443,
			"versionNonce": 1290051829,
			"isDeleted": false,
			"id": "uBO1zGAV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -98.56644765447446,
			"y": -590.5319265887099,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 14.239990234375,
			"height": 25,
			"seed": 1492144020,
			"groupIds": [
				"0ZQ-qIpRfJ1gByD50hfey"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565878,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "2",
			"rawText": "2",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "xkYV-egBG5CVGkV0SF01R",
			"originalText": "2",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 959,
			"versionNonce": 1508496603,
			"isDeleted": false,
			"id": "U6LxCRDgrDyc4wuA2rpfs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -125.89748479898526,
			"y": -544.4829588504082,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1592343828,
			"groupIds": [
				"0ZQ-qIpRfJ1gByD50hfey"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "aiWGzXB4"
				}
			],
			"updated": 1707109565878,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 442,
			"versionNonce": 1911470677,
			"isDeleted": false,
			"id": "aiWGzXB4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -97.25644246648618,
			"y": -524.5319265887099,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 13.619979858398438,
			"height": 25,
			"seed": 1651014292,
			"groupIds": [
				"0ZQ-qIpRfJ1gByD50hfey"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565878,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "3",
			"rawText": "3",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "U6LxCRDgrDyc4wuA2rpfs",
			"originalText": "3",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 959,
			"versionNonce": 1966113147,
			"isDeleted": false,
			"id": "iZs3-bWW4tKIgIk17mJle",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -56.89748479898526,
			"y": -744.4829588504082,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2116290580,
			"groupIds": [
				"K8MYz1mi6ZFI0-TlJJ-7c"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "UAsneJEV"
				}
			],
			"updated": 1707109565878,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 446,
			"versionNonce": 355379125,
			"isDeleted": false,
			"id": "UAsneJEV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -27.846446433771334,
			"y": -724.5319265887099,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.79998779296875,
			"height": 25,
			"seed": 101836180,
			"groupIds": [
				"K8MYz1mi6ZFI0-TlJJ-7c"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565878,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "4",
			"rawText": "4",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "iZs3-bWW4tKIgIk17mJle",
			"originalText": "4",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1021,
			"versionNonce": 406362651,
			"isDeleted": false,
			"id": "9YjVn27GnCYMVymX07gMG",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -53.89748479898526,
			"y": -678.4829588504082,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1600656148,
			"groupIds": [
				"K8MYz1mi6ZFI0-TlJJ-7c"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "YT9DkOC4"
				}
			],
			"updated": 1707109565878,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 443,
			"versionNonce": 415885589,
			"isDeleted": false,
			"id": "YT9DkOC4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -24.62644521306821,
			"y": -658.5319265887099,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.3599853515625,
			"height": 25,
			"seed": 1486655636,
			"groupIds": [
				"K8MYz1mi6ZFI0-TlJJ-7c"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565878,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "5",
			"rawText": "5",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "9YjVn27GnCYMVymX07gMG",
			"originalText": "5",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1011,
			"versionNonce": 536125115,
			"isDeleted": false,
			"id": "fPhZCDfHV0j3PiVBzFmRC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -54.89748479898526,
			"y": -611.4829588504082,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 23420436,
			"groupIds": [
				"K8MYz1mi6ZFI0-TlJJ-7c"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "PDO0kcB8"
				}
			],
			"updated": 1707109565878,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 445,
			"versionNonce": 2117467765,
			"isDeleted": false,
			"id": "PDO0kcB8",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -25.846446433771334,
			"y": -591.5319265887099,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.79998779296875,
			"height": 25,
			"seed": 45644692,
			"groupIds": [
				"K8MYz1mi6ZFI0-TlJJ-7c"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565878,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "6",
			"rawText": "6",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "fPhZCDfHV0j3PiVBzFmRC",
			"originalText": "6",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 994,
			"versionNonce": 654774107,
			"isDeleted": false,
			"id": "bYWVmReW-Dg1GdFw13nvR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -53.89748479898526,
			"y": -545.4829588504082,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1993074964,
			"groupIds": [
				"K8MYz1mi6ZFI0-TlJJ-7c"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "Y4upUvRV"
				}
			],
			"updated": 1707109565878,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 444,
			"versionNonce": 2084071381,
			"isDeleted": false,
			"id": "Y4upUvRV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -23.826449790704928,
			"y": -525.5319265887099,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 10.759994506835938,
			"height": 25,
			"seed": 1091937940,
			"groupIds": [
				"K8MYz1mi6ZFI0-TlJJ-7c"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565878,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "7",
			"rawText": "7",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "bYWVmReW-Dg1GdFw13nvR",
			"originalText": "7",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1001,
			"versionNonce": 1338141691,
			"isDeleted": false,
			"id": "NgP41yD6esFsXj8eUVt-o",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 13.484871235833452,
			"y": -745.4829588504082,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1716237332,
			"groupIds": [
				"tu_SSKRZ21fBeh7CsBPWq"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "SjraG8Mh"
				}
			],
			"updated": 1707109565878,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 445,
			"versionNonce": 1424401717,
			"isDeleted": false,
			"id": "SjraG8Mh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 41.28590960104738,
			"y": -725.5319265887099,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 15.29998779296875,
			"height": 25,
			"seed": 1684279700,
			"groupIds": [
				"tu_SSKRZ21fBeh7CsBPWq"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565878,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "8",
			"rawText": "8",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "NgP41yD6esFsXj8eUVt-o",
			"originalText": "8",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1063,
			"versionNonce": 1311323291,
			"isDeleted": false,
			"id": "5MsAeBXP78NFlfY0lDaP7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 16.48487123583368,
			"y": -679.4829588504082,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 177520404,
			"groupIds": [
				"tu_SSKRZ21fBeh7CsBPWq"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "wvfAT0UF"
				}
			],
			"updated": 1707109565878,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 445,
			"versionNonce": 1806055061,
			"isDeleted": false,
			"id": "wvfAT0UF",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 45.84590715964136,
			"y": -659.5319265887099,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.17999267578125,
			"height": 25,
			"seed": 1364442260,
			"groupIds": [
				"tu_SSKRZ21fBeh7CsBPWq"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565878,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "9",
			"rawText": "9",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "5MsAeBXP78NFlfY0lDaP7",
			"originalText": "9",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1055,
			"versionNonce": 837675323,
			"isDeleted": false,
			"id": "N27GBeZQMtRKky4XaEMmT",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 15.48487123583368,
			"y": -612.4829588504082,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 844565012,
			"groupIds": [
				"tu_SSKRZ21fBeh7CsBPWq"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "hxXt6nOM"
				}
			],
			"updated": 1707109565878,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 448,
			"versionNonce": 455908341,
			"isDeleted": false,
			"id": "hxXt6nOM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 41.34590715964136,
			"y": -592.5319265887099,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.17999267578125,
			"height": 25,
			"seed": 9742228,
			"groupIds": [
				"tu_SSKRZ21fBeh7CsBPWq"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565878,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "10",
			"rawText": "10",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "N27GBeZQMtRKky4XaEMmT",
			"originalText": "10",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1036,
			"versionNonce": 1886587355,
			"isDeleted": false,
			"id": "qGrMj0_pl2nYj_dKC3M15",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 16.48487123583368,
			"y": -546.4829588504082,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1078105364,
			"groupIds": [
				"tu_SSKRZ21fBeh7CsBPWq"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "Zm2dYOgG"
				}
			],
			"updated": 1707109565878,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 444,
			"versionNonce": 1266636117,
			"isDeleted": false,
			"id": "Zm2dYOgG",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 46.51590532858667,
			"y": -526.5319265887099,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 10.839996337890625,
			"height": 25,
			"seed": 2128007828,
			"groupIds": [
				"tu_SSKRZ21fBeh7CsBPWq"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565878,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "11",
			"rawText": "11",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "qGrMj0_pl2nYj_dKC3M15",
			"originalText": "11",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1051,
			"versionNonce": 785061499,
			"isDeleted": false,
			"id": "K0CkbDuuyxTeOLTIzb2pK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 87.10251520101474,
			"y": -744.4829588504082,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 721903636,
			"groupIds": [
				"Fql6qOpuLGqYUu0trfrNf"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "zd0kS7F5"
				}
			],
			"updated": 1707109565878,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 445,
			"versionNonce": 1207165621,
			"isDeleted": false,
			"id": "zd0kS7F5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 112.72355326105288,
			"y": -724.5319265887099,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.659988403320312,
			"height": 25,
			"seed": 1825193364,
			"groupIds": [
				"Fql6qOpuLGqYUu0trfrNf"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565878,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "12",
			"rawText": "12",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "K0CkbDuuyxTeOLTIzb2pK",
			"originalText": "12",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1113,
			"versionNonce": 1270386459,
			"isDeleted": false,
			"id": "M60RnL18whvcx3HIC_THm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 90.10251520101497,
			"y": -678.4829588504082,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2102749972,
			"groupIds": [
				"Fql6qOpuLGqYUu0trfrNf"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "mALY3FUa"
				}
			],
			"updated": 1707109565878,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 444,
			"versionNonce": 1429193749,
			"isDeleted": false,
			"id": "mALY3FUa",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 116.0335584490414,
			"y": -658.5319265887099,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.03997802734375,
			"height": 25,
			"seed": 2132732052,
			"groupIds": [
				"Fql6qOpuLGqYUu0trfrNf"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565878,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "13",
			"rawText": "13",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "M60RnL18whvcx3HIC_THm",
			"originalText": "13",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1105,
			"versionNonce": 699265979,
			"isDeleted": false,
			"id": "N5WGG-77qGwOkaRoNEV7I",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 89.10251520101497,
			"y": -611.4829588504082,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1440527892,
			"groupIds": [
				"Fql6qOpuLGqYUu0trfrNf"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "ZTHIxM0V"
				}
			],
			"updated": 1707109565878,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 443,
			"versionNonce": 120093045,
			"isDeleted": false,
			"id": "ZTHIxM0V",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 115.44355448175624,
			"y": -591.5319265887099,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 18.219985961914062,
			"height": 25,
			"seed": 2122634132,
			"groupIds": [
				"Fql6qOpuLGqYUu0trfrNf"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565878,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "14",
			"rawText": "14",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "N5WGG-77qGwOkaRoNEV7I",
			"originalText": "14",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1086,
			"versionNonce": 953009243,
			"isDeleted": false,
			"id": "CVsSAGJqRWx4Omw04fUZS",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 90.10251520101497,
			"y": -545.4829588504082,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1733116180,
			"groupIds": [
				"Fql6qOpuLGqYUu0trfrNf"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "wP13ocYp"
				}
			],
			"updated": 1707109565878,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 443,
			"versionNonce": 1461945045,
			"isDeleted": false,
			"id": "wP13ocYp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 116.66355570245936,
			"y": -525.5319265887099,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 17.779983520507812,
			"height": 25,
			"seed": 1202454164,
			"groupIds": [
				"Fql6qOpuLGqYUu0trfrNf"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565878,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "15",
			"rawText": "15",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "CVsSAGJqRWx4Omw04fUZS",
			"originalText": "15",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1006,
			"versionNonce": 1089110267,
			"isDeleted": false,
			"id": "US8GnHCLrFYjigavPhfav",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 940.6865341489006,
			"y": 246.91345562084564,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 351041407,
			"groupIds": [
				"BJbvsLu8Wih8jbmnesSsy",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565878,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1041,
			"versionNonce": 2041995317,
			"isDeleted": false,
			"id": "FOyKOPblnTkMDESfnb_XT",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1012.6865341489006,
			"y": 245.91345562084564,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 881799071,
			"groupIds": [
				"BJbvsLu8Wih8jbmnesSsy",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565878,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1082,
			"versionNonce": 1803987355,
			"isDeleted": false,
			"id": "_kNUtTxyW2yVov06K5wJ0",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1084.6865341489006,
			"y": 244.91345562084564,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 459662271,
			"groupIds": [
				"BJbvsLu8Wih8jbmnesSsy",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565878,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1133,
			"versionNonce": 1959170453,
			"isDeleted": false,
			"id": "xpBJKzNYdQASbBKsk9zXC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1156.6865341489006,
			"y": 245.91345562084564,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 965809119,
			"groupIds": [
				"BJbvsLu8Wih8jbmnesSsy",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565878,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1068,
			"versionNonce": 232046139,
			"isDeleted": false,
			"id": "sRXwWMFk4MKFUKCYbRaB_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 943.6865341489006,
			"y": 312.91345562084564,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 656490495,
			"groupIds": [
				"BJbvsLu8Wih8jbmnesSsy",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565878,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1103,
			"versionNonce": 1971951349,
			"isDeleted": false,
			"id": "d2X-VO8mmYQXL5TtfzZUX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1015.6865341489006,
			"y": 311.91345562084564,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 639035423,
			"groupIds": [
				"BJbvsLu8Wih8jbmnesSsy",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565878,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1144,
			"versionNonce": 850869979,
			"isDeleted": false,
			"id": "R-XfJM-SLy-8zp8te-WeH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1087.6865341489008,
			"y": 310.91345562084564,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1684180031,
			"groupIds": [
				"BJbvsLu8Wih8jbmnesSsy",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565878,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1195,
			"versionNonce": 1719988309,
			"isDeleted": false,
			"id": "eSu9QDgtBk-HdhqRFQXVU",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1159.6865341489008,
			"y": 311.91345562084564,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2112138335,
			"groupIds": [
				"BJbvsLu8Wih8jbmnesSsy",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565878,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1058,
			"versionNonce": 1690348411,
			"isDeleted": false,
			"id": "R2-28rxEoq7n9WRLx8j0r",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 942.6865341489006,
			"y": 379.91345562084564,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1047382143,
			"groupIds": [
				"BJbvsLu8Wih8jbmnesSsy",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565878,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1093,
			"versionNonce": 1166941621,
			"isDeleted": false,
			"id": "UQD_51XOVTdh4LN6OIZ7X",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1014.6865341489006,
			"y": 378.91345562084564,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 599679135,
			"groupIds": [
				"BJbvsLu8Wih8jbmnesSsy",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565878,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1134,
			"versionNonce": 942900251,
			"isDeleted": false,
			"id": "hzBPUfYhaKXrd3jk5oFAE",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1086.6865341489008,
			"y": 377.91345562084564,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 528938175,
			"groupIds": [
				"BJbvsLu8Wih8jbmnesSsy",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565878,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1185,
			"versionNonce": 969580309,
			"isDeleted": false,
			"id": "8qz23DyYvsl9hXa1HfBaS",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1158.6865341489008,
			"y": 378.91345562084564,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 426247391,
			"groupIds": [
				"BJbvsLu8Wih8jbmnesSsy",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565878,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1041,
			"versionNonce": 352471227,
			"isDeleted": false,
			"id": "C4VwSmMYHz7XDCcRdZcY7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 943.6865341489006,
			"y": 445.91345562084564,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 821170431,
			"groupIds": [
				"BJbvsLu8Wih8jbmnesSsy",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565878,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1076,
			"versionNonce": 1773139061,
			"isDeleted": false,
			"id": "moCLWRsEzzy1dn3FAL5Og",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1015.6865341489006,
			"y": 444.91345562084564,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1067817247,
			"groupIds": [
				"BJbvsLu8Wih8jbmnesSsy",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565878,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1117,
			"versionNonce": 1087338843,
			"isDeleted": false,
			"id": "3awIEEttAWjp80rFgkFDw",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1087.6865341489008,
			"y": 443.91345562084564,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 452140351,
			"groupIds": [
				"BJbvsLu8Wih8jbmnesSsy",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565878,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1168,
			"versionNonce": 285449685,
			"isDeleted": false,
			"id": "VM0LUUenrmY62mL92E961",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1159.6865341489008,
			"y": 444.91345562084564,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 372972895,
			"groupIds": [
				"BJbvsLu8Wih8jbmnesSsy",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565878,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 367,
			"versionNonce": 686659067,
			"isDeleted": false,
			"id": "mub3E6qc",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 419.2557950327981,
			"y": -321.81671066610664,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 304.87841796875,
			"height": 52.50135083986754,
			"seed": 1915961663,
			"groupIds": [
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565878,
			"link": null,
			"locked": false,
			"fontSize": 42.00108067189403,
			"fontFamily": 1,
			"text": "Add Round Key",
			"rawText": "Add Round Key",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Add Round Key",
			"lineHeight": 1.25,
			"baseline": 36
		},
		{
			"type": "rectangle",
			"version": 700,
			"versionNonce": 1457199925,
			"isDeleted": false,
			"id": "7MD0DoiTtAZCY06jGzMPJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 408.34164004175636,
			"y": -150.40103712489542,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 408461329,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "pJQ0CuBI"
				}
			],
			"updated": 1707109565878,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 219,
			"versionNonce": 1818173083,
			"isDeleted": false,
			"id": "pJQ0CuBI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 436.9126750500367,
			"y": -130.45000486319714,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 13.759994506835938,
			"height": 25,
			"seed": 1860849073,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565878,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "0",
			"rawText": "0",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "7MD0DoiTtAZCY06jGzMPJ",
			"originalText": "0",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 733,
			"versionNonce": 1671163029,
			"isDeleted": false,
			"id": "is_DJVK3tGh-pDgvUprLf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 480.34164004175636,
			"y": -151.40103712489542,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2102162929,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "jvqHJuZE"
				}
			],
			"updated": 1707109565878,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 215,
			"versionNonce": 634819387,
			"isDeleted": false,
			"id": "jvqHJuZE",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 509.3926784069703,
			"y": -131.45000486319714,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.79998779296875,
			"height": 25,
			"seed": 159060927,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565878,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "4",
			"rawText": "4",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "is_DJVK3tGh-pDgvUprLf",
			"originalText": "4",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 774,
			"versionNonce": 922456565,
			"isDeleted": false,
			"id": "-Lj7lAz2FjyHBzS9Reeu_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 552.3416400417565,
			"y": -152.40103712489542,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 621449169,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "aWNYUn9Y"
				}
			],
			"updated": 1707109565878,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 213,
			"versionNonce": 1974891483,
			"isDeleted": false,
			"id": "aWNYUn9Y",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 580.1426784069704,
			"y": -132.45000486319714,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 15.29998779296875,
			"height": 25,
			"seed": 146529375,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565878,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "8",
			"rawText": "8",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "-Lj7lAz2FjyHBzS9Reeu_",
			"originalText": "8",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 825,
			"versionNonce": 1040157525,
			"isDeleted": false,
			"id": "urkhkhd3c8COCjJAGNiVx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 624.3416400417565,
			"y": -151.40103712489542,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1168797105,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "IS5lRJss"
				}
			],
			"updated": 1707109565878,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 214,
			"versionNonce": 1276199035,
			"isDeleted": false,
			"id": "IS5lRJss",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 649.9626781017946,
			"y": -131.45000486319714,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.659988403320312,
			"height": 25,
			"seed": 525025535,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565878,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "12",
			"rawText": "12",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "urkhkhd3c8COCjJAGNiVx",
			"originalText": "12",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 760,
			"versionNonce": 687691957,
			"isDeleted": false,
			"id": "-DIEFWCQROHUp_o8LLEE9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 411.34164004175636,
			"y": -84.40103712489542,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1716752273,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "me7Y3IYm"
				}
			],
			"updated": 1707109565879,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 212,
			"versionNonce": 1923709211,
			"isDeleted": false,
			"id": "me7Y3IYm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 444.082673218982,
			"y": -64.45000486319714,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.4199981689453125,
			"height": 25,
			"seed": 791283711,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565879,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "1",
			"rawText": "1",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "-DIEFWCQROHUp_o8LLEE9",
			"originalText": "1",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 795,
			"versionNonce": 26901013,
			"isDeleted": false,
			"id": "S4reAcP9GnAjcBZ1BYz6n",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 483.34164004175636,
			"y": -85.40103712489542,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1027437937,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "aeHahhYa"
				}
			],
			"updated": 1707109565879,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 212,
			"versionNonce": 1458675131,
			"isDeleted": false,
			"id": "aeHahhYa",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 512.6126796276734,
			"y": -65.45000486319714,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.3599853515625,
			"height": 25,
			"seed": 207207615,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565879,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "5",
			"rawText": "5",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "S4reAcP9GnAjcBZ1BYz6n",
			"originalText": "5",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 836,
			"versionNonce": 13397877,
			"isDeleted": false,
			"id": "f_3D7yUkcHekCNJ7z979F",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 555.3416400417566,
			"y": -86.40103712489542,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1303355217,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "ko0zGmRs"
				}
			],
			"updated": 1707109565879,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 213,
			"versionNonce": 336342619,
			"isDeleted": false,
			"id": "ko0zGmRs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 584.7026759655643,
			"y": -66.45000486319714,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.17999267578125,
			"height": 25,
			"seed": 1791834609,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565879,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "9",
			"rawText": "9",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "f_3D7yUkcHekCNJ7z979F",
			"originalText": "9",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 887,
			"versionNonce": 618182869,
			"isDeleted": false,
			"id": "qXChEOaar_WLzJxU4z0zq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 627.3416400417566,
			"y": -85.40103712489542,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1174506801,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "sp7nJrmL"
				}
			],
			"updated": 1707109565879,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 213,
			"versionNonce": 1019980539,
			"isDeleted": false,
			"id": "sp7nJrmL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 653.272683289783,
			"y": -65.45000486319714,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.03997802734375,
			"height": 25,
			"seed": 1813927519,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565879,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "13",
			"rawText": "13",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "qXChEOaar_WLzJxU4z0zq",
			"originalText": "13",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 752,
			"versionNonce": 123000373,
			"isDeleted": false,
			"id": "Q8NhjtR2zhUMi4x2Ieswp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 410.34164004175636,
			"y": -17.401037124895424,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 496680721,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "WETHB3tI"
				}
			],
			"updated": 1707109565879,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 212,
			"versionNonce": 1706202011,
			"isDeleted": false,
			"id": "WETHB3tI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 438.67267718626715,
			"y": 2.5499951368028633,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 14.239990234375,
			"height": 25,
			"seed": 1724424159,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565879,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "2",
			"rawText": "2",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "Q8NhjtR2zhUMi4x2Ieswp",
			"originalText": "2",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 785,
			"versionNonce": 1931888533,
			"isDeleted": false,
			"id": "z-0EwfMvqQXYJBZXRjus7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 482.34164004175636,
			"y": -18.401037124895424,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1928508657,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "5BSuKiTC"
				}
			],
			"updated": 1707109565879,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 214,
			"versionNonce": 1861445691,
			"isDeleted": false,
			"id": "5BSuKiTC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 511.3926784069703,
			"y": 1.5499951368028633,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.79998779296875,
			"height": 25,
			"seed": 2070795391,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565879,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "6",
			"rawText": "6",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "z-0EwfMvqQXYJBZXRjus7",
			"originalText": "6",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 828,
			"versionNonce": 981634293,
			"isDeleted": false,
			"id": "dSY7keMvz6fqT7ozxEEZg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 554.3416400417566,
			"y": -19.401037124895424,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 697364177,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "jBfV6Tle"
				}
			],
			"updated": 1707109565879,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 216,
			"versionNonce": 242264283,
			"isDeleted": false,
			"id": "jBfV6Tle",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 580.2026759655643,
			"y": 0.5499951368028633,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.17999267578125,
			"height": 25,
			"seed": 1124194513,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565879,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "10",
			"rawText": "10",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "dSY7keMvz6fqT7ozxEEZg",
			"originalText": "10",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 879,
			"versionNonce": 1290741333,
			"isDeleted": false,
			"id": "5-zWuzfRGyhU6wXnSdmTo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 626.3416400417566,
			"y": -18.401037124895424,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1208806577,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "f3M2BTXb"
				}
			],
			"updated": 1707109565879,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 212,
			"versionNonce": 431805819,
			"isDeleted": false,
			"id": "f3M2BTXb",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 652.6826793224978,
			"y": 1.5499951368028633,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 18.219985961914062,
			"height": 25,
			"seed": 838879057,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565879,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "14",
			"rawText": "14",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "5-zWuzfRGyhU6wXnSdmTo",
			"originalText": "14",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 733,
			"versionNonce": 222401461,
			"isDeleted": false,
			"id": "4ctPIPE1zNcuuaMqYtJt_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 411.34164004175636,
			"y": 48.598962875104576,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 370028177,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "JXLh0jHX"
				}
			],
			"updated": 1707109565879,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 211,
			"versionNonce": 270167579,
			"isDeleted": false,
			"id": "JXLh0jHX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 439.98268237425543,
			"y": 68.54999513680286,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 13.619979858398438,
			"height": 25,
			"seed": 485790897,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565879,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "3",
			"rawText": "3",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "4ctPIPE1zNcuuaMqYtJt_",
			"originalText": "3",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 768,
			"versionNonce": 1738495253,
			"isDeleted": false,
			"id": "lhgWL8kgjP4eLFBFWWXva",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 483.34164004175636,
			"y": 47.598962875104576,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2051814513,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "ra9L2sR7"
				}
			],
			"updated": 1707109565879,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 213,
			"versionNonce": 1685844667,
			"isDeleted": false,
			"id": "ra9L2sR7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 513.4126750500367,
			"y": 67.54999513680286,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 10.759994506835938,
			"height": 25,
			"seed": 1010015217,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565879,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "7",
			"rawText": "7",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "lhgWL8kgjP4eLFBFWWXva",
			"originalText": "7",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 809,
			"versionNonce": 662563445,
			"isDeleted": false,
			"id": "mLwhE4Ghov_ccgVAYOks8",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 555.3416400417566,
			"y": 46.598962875104576,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 411991633,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "XCsGsuNJ"
				}
			],
			"updated": 1707109565879,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 212,
			"versionNonce": 126083931,
			"isDeleted": false,
			"id": "XCsGsuNJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 585.3726741345096,
			"y": 66.54999513680286,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 10.839996337890625,
			"height": 25,
			"seed": 1499399505,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565879,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "11",
			"rawText": "11",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "mLwhE4Ghov_ccgVAYOks8",
			"originalText": "11",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 860,
			"versionNonce": 228774869,
			"isDeleted": false,
			"id": "1rHnKPZ29ZC1ElMQnonN_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 627.3416400417566,
			"y": 47.598962875104576,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 799837233,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "4sLpLDNn"
				}
			],
			"updated": 1707109565879,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 212,
			"versionNonce": 830783483,
			"isDeleted": false,
			"id": "4sLpLDNn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 653.902680543201,
			"y": 67.54999513680286,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 17.779983520507812,
			"height": 25,
			"seed": 1119680767,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565879,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "15",
			"rawText": "15",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "1rHnKPZ29ZC1ElMQnonN_",
			"originalText": "15",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "text",
			"version": 548,
			"versionNonce": 639865141,
			"isDeleted": false,
			"id": "rBty1FUY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 820.3781825083844,
			"y": -309.5433358688868,
			"strokeColor": "#12b886",
			"backgroundColor": "transparent",
			"width": 750,
			"height": 120,
			"seed": 547898271,
			"groupIds": [
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565879,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "void AddRoundKey(u8* state, const u32* rKey) {\n    for (int i = 0; i < 16; i++) {\n        state[i] ^= (rKey[i / 4] >> (8 * (3 - (i % 4)))) & 0xFF;\n    }\n}",
			"rawText": "void AddRoundKey(u8* state, const u32* rKey) {\n    for (int i = 0; i < 16; i++) {\n        state[i] ^= (rKey[i / 4] >> (8 * (3 - (i % 4)))) & 0xFF;\n    }\n}",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "void AddRoundKey(u8* state, const u32* rKey) {\n    for (int i = 0; i < 16; i++) {\n        state[i] ^= (rKey[i / 4] >> (8 * (3 - (i % 4)))) & 0xFF;\n    }\n}",
			"lineHeight": 1.2,
			"baseline": 115
		},
		{
			"type": "rectangle",
			"version": 871,
			"versionNonce": 1820395675,
			"isDeleted": false,
			"id": "UNjgfeuC-6XHoh9MXfIGu",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 825.187985286485,
			"y": -151.12398449143404,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 75401265,
			"groupIds": [
				"Hq50Faj3rR9WKD8cAEJrH",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "WQ1Jfewx"
				}
			],
			"updated": 1707109565879,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 393,
			"versionNonce": 1583719061,
			"isDeleted": false,
			"id": "WQ1Jfewx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 853.7590202947653,
			"y": -131.17295222973576,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 13.759994506835938,
			"height": 25,
			"seed": 415259153,
			"groupIds": [
				"Hq50Faj3rR9WKD8cAEJrH",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565879,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "0",
			"rawText": "0",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "UNjgfeuC-6XHoh9MXfIGu",
			"originalText": "0",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 933,
			"versionNonce": 1579892027,
			"isDeleted": false,
			"id": "xhK1TTQ69g5edZ2DW0C57",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 828.187985286485,
			"y": -85.12398449143404,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 893290289,
			"groupIds": [
				"Hq50Faj3rR9WKD8cAEJrH",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "iLP3frdV"
				}
			],
			"updated": 1707109565879,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 386,
			"versionNonce": 1528727541,
			"isDeleted": false,
			"id": "iLP3frdV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 860.9290184637106,
			"y": -65.17295222973576,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.4199981689453125,
			"height": 25,
			"seed": 1328052497,
			"groupIds": [
				"Hq50Faj3rR9WKD8cAEJrH",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565879,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "1",
			"rawText": "1",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "xhK1TTQ69g5edZ2DW0C57",
			"originalText": "1",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 925,
			"versionNonce": 1374019035,
			"isDeleted": false,
			"id": "_qXL-QEPBGqDBF1UnKHLi",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 827.187985286485,
			"y": -18.123984491434044,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 919569969,
			"groupIds": [
				"Hq50Faj3rR9WKD8cAEJrH",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "sdnqkUIf"
				}
			],
			"updated": 1707109565879,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 386,
			"versionNonce": 240370005,
			"isDeleted": false,
			"id": "sdnqkUIf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 855.5190224309957,
			"y": 1.8270477702642438,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 14.239990234375,
			"height": 25,
			"seed": 339843089,
			"groupIds": [
				"Hq50Faj3rR9WKD8cAEJrH",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565879,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "2",
			"rawText": "2",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "_qXL-QEPBGqDBF1UnKHLi",
			"originalText": "2",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 906,
			"versionNonce": 46361211,
			"isDeleted": false,
			"id": "K7J2y57iCH4hTHNiTRDeH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 828.187985286485,
			"y": 47.876015508565956,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1748075825,
			"groupIds": [
				"Hq50Faj3rR9WKD8cAEJrH",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "bsr8eXAy"
				}
			],
			"updated": 1707109565879,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 385,
			"versionNonce": 224054965,
			"isDeleted": false,
			"id": "bsr8eXAy",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 856.829027618984,
			"y": 67.82704777026424,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 13.619979858398438,
			"height": 25,
			"seed": 1728821009,
			"groupIds": [
				"Hq50Faj3rR9WKD8cAEJrH",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565879,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "3",
			"rawText": "3",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "K7J2y57iCH4hTHNiTRDeH",
			"originalText": "3",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 932,
			"versionNonce": 629564187,
			"isDeleted": false,
			"id": "a1NJ8mhr_rtBlBOKUlplh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 939.687985286485,
			"y": -152.12398449143404,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1286402033,
			"groupIds": [
				"ICcCAQC7-P9iaSj7VxKT5",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "VDOHv0nf"
				}
			],
			"updated": 1707109565879,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 415,
			"versionNonce": 651767829,
			"isDeleted": false,
			"id": "VDOHv0nf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 968.7390236516989,
			"y": -132.17295222973576,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.79998779296875,
			"height": 25,
			"seed": 1716242897,
			"groupIds": [
				"ICcCAQC7-P9iaSj7VxKT5",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565879,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "4",
			"rawText": "4",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "a1NJ8mhr_rtBlBOKUlplh",
			"originalText": "4",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 994,
			"versionNonce": 849430459,
			"isDeleted": false,
			"id": "fz2MMW40ngcMqmFuWganY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 942.687985286485,
			"y": -86.12398449143404,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1589194481,
			"groupIds": [
				"ICcCAQC7-P9iaSj7VxKT5",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "QHL8s9OJ"
				}
			],
			"updated": 1707109565879,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 412,
			"versionNonce": 952395125,
			"isDeleted": false,
			"id": "QHL8s9OJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 971.959024872402,
			"y": -66.17295222973576,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.3599853515625,
			"height": 25,
			"seed": 175646929,
			"groupIds": [
				"ICcCAQC7-P9iaSj7VxKT5",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565879,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "5",
			"rawText": "5",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "fz2MMW40ngcMqmFuWganY",
			"originalText": "5",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 984,
			"versionNonce": 1882626139,
			"isDeleted": false,
			"id": "QN8jck723RsgFHbSR2N2Q",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 941.687985286485,
			"y": -19.123984491434044,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 22441457,
			"groupIds": [
				"ICcCAQC7-P9iaSj7VxKT5",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "s8ZDHI1j"
				}
			],
			"updated": 1707109565879,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 414,
			"versionNonce": 1180823253,
			"isDeleted": false,
			"id": "s8ZDHI1j",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 970.7390236516989,
			"y": 0.8270477702642438,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.79998779296875,
			"height": 25,
			"seed": 85297105,
			"groupIds": [
				"ICcCAQC7-P9iaSj7VxKT5",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565879,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "6",
			"rawText": "6",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "QN8jck723RsgFHbSR2N2Q",
			"originalText": "6",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 967,
			"versionNonce": 1008260347,
			"isDeleted": false,
			"id": "kzyUoWywUHBkarNK0OGPH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 942.687985286485,
			"y": 46.876015508565956,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1401203953,
			"groupIds": [
				"ICcCAQC7-P9iaSj7VxKT5",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "UNXpxfRS"
				}
			],
			"updated": 1707109565879,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 413,
			"versionNonce": 1313295413,
			"isDeleted": false,
			"id": "UNXpxfRS",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 972.7590202947653,
			"y": 66.82704777026424,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 10.759994506835938,
			"height": 25,
			"seed": 354674385,
			"groupIds": [
				"ICcCAQC7-P9iaSj7VxKT5",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565879,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "7",
			"rawText": "7",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "kzyUoWywUHBkarNK0OGPH",
			"originalText": "7",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1011,
			"versionNonce": 365591963,
			"isDeleted": false,
			"id": "WITMwnDwi9Ls6B9vE-i4g",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1055.437985286485,
			"y": -154.37398449143404,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2125752241,
			"groupIds": [
				"f39QnLg_FNpYI_5PG7bwj",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "hPdu9tYa"
				}
			],
			"updated": 1707109565879,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 451,
			"versionNonce": 1616510357,
			"isDeleted": false,
			"id": "hPdu9tYa",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1083.239023651699,
			"y": -134.42295222973576,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 15.29998779296875,
			"height": 25,
			"seed": 537807249,
			"groupIds": [
				"f39QnLg_FNpYI_5PG7bwj",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565879,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "8",
			"rawText": "8",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "WITMwnDwi9Ls6B9vE-i4g",
			"originalText": "8",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1074,
			"versionNonce": 1753092667,
			"isDeleted": false,
			"id": "UNJhyMDZxplD0VryecHiW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1058.437985286485,
			"y": -88.37398449143404,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1006429873,
			"groupIds": [
				"f39QnLg_FNpYI_5PG7bwj",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "3ydTREHg"
				}
			],
			"updated": 1707109565879,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 451,
			"versionNonce": 1942979317,
			"isDeleted": false,
			"id": "3ydTREHg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1087.7990212102927,
			"y": -68.42295222973576,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.17999267578125,
			"height": 25,
			"seed": 1039067281,
			"groupIds": [
				"f39QnLg_FNpYI_5PG7bwj",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565879,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "9",
			"rawText": "9",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "UNJhyMDZxplD0VryecHiW",
			"originalText": "9",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1066,
			"versionNonce": 353768155,
			"isDeleted": false,
			"id": "_-_t0ri6ONKHLu_NvljoJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1057.437985286485,
			"y": -21.373984491434044,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1503028657,
			"groupIds": [
				"f39QnLg_FNpYI_5PG7bwj",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "lqeDDaGy"
				}
			],
			"updated": 1707109565879,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 454,
			"versionNonce": 2100124757,
			"isDeleted": false,
			"id": "lqeDDaGy",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1083.2990212102927,
			"y": -1.4229522297357562,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.17999267578125,
			"height": 25,
			"seed": 167806865,
			"groupIds": [
				"f39QnLg_FNpYI_5PG7bwj",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565879,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "10",
			"rawText": "10",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "_-_t0ri6ONKHLu_NvljoJ",
			"originalText": "10",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1047,
			"versionNonce": 1009057659,
			"isDeleted": false,
			"id": "YqHhpvtoOAiERizGOJNos",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1058.437985286485,
			"y": 44.626015508565956,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 914416817,
			"groupIds": [
				"f39QnLg_FNpYI_5PG7bwj",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "ovnjIW79"
				}
			],
			"updated": 1707109565879,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 450,
			"versionNonce": 1145637301,
			"isDeleted": false,
			"id": "ovnjIW79",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1088.469019379238,
			"y": 64.57704777026424,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 10.839996337890625,
			"height": 25,
			"seed": 54732433,
			"groupIds": [
				"f39QnLg_FNpYI_5PG7bwj",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565879,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "11",
			"rawText": "11",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "YqHhpvtoOAiERizGOJNos",
			"originalText": "11",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1082,
			"versionNonce": 1206736923,
			"isDeleted": false,
			"id": "qtZf-KkiJbrHH8o_FMst4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1167.437985286485,
			"y": -153.37398449143404,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 596701041,
			"groupIds": [
				"P2VmWyjFlEYTa5x_MgozW",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "7746ZMaB"
				}
			],
			"updated": 1707109565880,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 472,
			"versionNonce": 2051541781,
			"isDeleted": false,
			"id": "7746ZMaB",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1193.0590233465232,
			"y": -133.42295222973576,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.659988403320312,
			"height": 25,
			"seed": 1334040913,
			"groupIds": [
				"P2VmWyjFlEYTa5x_MgozW",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "12",
			"rawText": "12",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "qtZf-KkiJbrHH8o_FMst4",
			"originalText": "12",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1144,
			"versionNonce": 912366779,
			"isDeleted": false,
			"id": "J5a4u7fVnusWXn3M0TPdB",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1170.437985286485,
			"y": -87.37398449143404,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 436579953,
			"groupIds": [
				"P2VmWyjFlEYTa5x_MgozW",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "pc5LHUSq"
				}
			],
			"updated": 1707109565880,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 470,
			"versionNonce": 262135925,
			"isDeleted": false,
			"id": "pc5LHUSq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1196.3690285345115,
			"y": -67.42295222973576,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.03997802734375,
			"height": 25,
			"seed": 923318353,
			"groupIds": [
				"P2VmWyjFlEYTa5x_MgozW",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "13",
			"rawText": "13",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "J5a4u7fVnusWXn3M0TPdB",
			"originalText": "13",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1136,
			"versionNonce": 589581659,
			"isDeleted": false,
			"id": "URRkH-lQ-GDU6lEA2etEw",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1169.437985286485,
			"y": -20.373984491434044,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1351314801,
			"groupIds": [
				"P2VmWyjFlEYTa5x_MgozW",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "eIEeIrGx"
				}
			],
			"updated": 1707109565880,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 469,
			"versionNonce": 1242958293,
			"isDeleted": false,
			"id": "eIEeIrGx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1195.7790245672263,
			"y": -0.4229522297357562,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 18.219985961914062,
			"height": 25,
			"seed": 880711505,
			"groupIds": [
				"P2VmWyjFlEYTa5x_MgozW",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "14",
			"rawText": "14",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "URRkH-lQ-GDU6lEA2etEw",
			"originalText": "14",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1117,
			"versionNonce": 294119931,
			"isDeleted": false,
			"id": "UgFGvj6pN4Z0pOdXTs4ba",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1170.437985286485,
			"y": 45.626015508565956,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1713515633,
			"groupIds": [
				"P2VmWyjFlEYTa5x_MgozW",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "OLYx1I0H"
				}
			],
			"updated": 1707109565880,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 469,
			"versionNonce": 448792373,
			"isDeleted": false,
			"id": "OLYx1I0H",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1196.9990257879294,
			"y": 65.57704777026424,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 17.779983520507812,
			"height": 25,
			"seed": 115701329,
			"groupIds": [
				"P2VmWyjFlEYTa5x_MgozW",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "15",
			"rawText": "15",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "UgFGvj6pN4Z0pOdXTs4ba",
			"originalText": "15",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "text",
			"version": 163,
			"versionNonce": 1989079707,
			"isDeleted": false,
			"id": "oLcQ06yj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 846.581325240491,
			"y": 120.88474007795651,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 32.0999755859375,
			"height": 25,
			"seed": 608879660,
			"groupIds": [
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "rk0",
			"rawText": "rk0",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "rk0",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "text",
			"version": 218,
			"versionNonce": 872634517,
			"isDeleted": false,
			"id": "CqxVBHPk",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 964.2813374475222,
			"y": 123.38474007795651,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.759979248046875,
			"height": 25,
			"seed": 435066796,
			"groupIds": [
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "rk1",
			"rawText": "rk1",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "rk1",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "text",
			"version": 254,
			"versionNonce": 49014587,
			"isDeleted": false,
			"id": "436ATPAG",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1073.4513356164675,
			"y": 127.13474007795651,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 32.57997131347656,
			"height": 25,
			"seed": 2097581588,
			"groupIds": [
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "rk2",
			"rawText": "rk2",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "rk2",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "text",
			"version": 269,
			"versionNonce": 1603632629,
			"isDeleted": false,
			"id": "cq6JsVjr",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1194.7013356164675,
			"y": 129.6347400779565,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 31.9599609375,
			"height": 25,
			"seed": 99081260,
			"groupIds": [
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "rk3",
			"rawText": "rk3",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "rk3",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "ellipse",
			"version": 624,
			"versionNonce": 755058651,
			"isDeleted": false,
			"id": "tfxF3hW4N0pJ9bps5RE2_",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 723.2159788043866,
			"y": 180.1488489794708,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 79.15553526957747,
			"height": 80.82196759104215,
			"seed": 1315373484,
			"groupIds": [
				"At-xLakju32xlQWQBLuMd",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "FhxLZAsbYcJJlX-QW3_F_",
					"type": "arrow"
				},
				{
					"id": "UDvvI5gFg1P30G2sw9zma",
					"type": "arrow"
				},
				{
					"id": "EIZuLE0wJq2dik-EosJqu",
					"type": "arrow"
				},
				{
					"id": "91hbZ6eVkiYvuu22wa_5c",
					"type": "arrow"
				}
			],
			"updated": 1707109565880,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 590,
			"versionNonce": 343668565,
			"isDeleted": false,
			"id": "5klMxgx5anysPyceu0pjw",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 760.7107060373442,
			"y": 181.81528130093528,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.6664323214647576,
			"height": 79.15553526957747,
			"seed": 468839468,
			"groupIds": [
				"At-xLakju32xlQWQBLuMd",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					1.6664323214647576,
					79.15553526957747
				]
			]
		},
		{
			"type": "line",
			"version": 613,
			"versionNonce": 2061603963,
			"isDeleted": false,
			"id": "YGpNZ36pkEB2aY87XxTS2",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 724.8824111258513,
			"y": 220.14322469462525,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 76.6558867873803,
			"height": 0.8332161607324872,
			"seed": 2109441708,
			"groupIds": [
				"At-xLakju32xlQWQBLuMd",
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					76.6558867873803,
					-0.8332161607324872
				]
			]
		},
		{
			"type": "ellipse",
			"version": 174,
			"versionNonce": 1292649653,
			"isDeleted": false,
			"id": "7lfov8TvtZqnlP2bIO4SJ",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 402.8313252404911,
			"y": -157.8652599220436,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 82.5,
			"height": 80,
			"seed": 1736971668,
			"groupIds": [
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false
		},
		{
			"type": "ellipse",
			"version": 212,
			"versionNonce": 206523675,
			"isDeleted": false,
			"id": "A5-QSRyYZiXQ5yN5OqsEu",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 820.331325240491,
			"y": -159.1152599220436,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 82.5,
			"height": 80,
			"seed": 2100204460,
			"groupIds": [
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 255,
			"versionNonce": 485221909,
			"isDeleted": false,
			"id": "eFrJvoqhpFtmruNcg9E9P",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 402.8313252404911,
			"y": -119.1152599220436,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 352.5,
			"height": 341.25,
			"seed": 774306220,
			"groupIds": [
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					-37.5,
					31.249999999999986
				],
				[
					-6.25,
					323.75
				],
				[
					315,
					341.25
				]
			]
		},
		{
			"type": "line",
			"version": 202,
			"versionNonce": 1690104251,
			"isDeleted": false,
			"id": "EqwczytD3NQIHhZknrixS",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 822.831325240491,
			"y": -116.6152599220436,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 67.49999999999989,
			"height": 293.75,
			"seed": 1636247340,
			"groupIds": [
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					-67.49999999999989,
					12.5
				],
				[
					-61.249999999999886,
					293.75
				]
			]
		},
		{
			"type": "arrow",
			"version": 593,
			"versionNonce": 118512501,
			"isDeleted": false,
			"id": "FhxLZAsbYcJJlX-QW3_F_",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 760.3313252404911,
			"y": 262.1347400779564,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 282.16666666666663,
			"height": 64.75,
			"seed": 1284431252,
			"groupIds": [
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "tfxF3hW4N0pJ9bps5RE2_",
				"focus": -0.9330777194051967,
				"gap": 1.239783701245365
			},
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					-62.08333333333337,
					25.194444444444343
				],
				[
					-54.25,
					64.75
				],
				[
					220.08333333333326,
					17.58333333333337
				]
			]
		},
		{
			"type": "ellipse",
			"version": 247,
			"versionNonce": 1967981147,
			"isDeleted": false,
			"id": "6LLoaqDMFR7UeTRwE7oUC",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 821.581325240491,
			"y": -90.36525992204355,
			"strokeColor": "#f08c00",
			"backgroundColor": "transparent",
			"width": 82.5,
			"height": 80,
			"seed": 1059460012,
			"groupIds": [
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false
		},
		{
			"type": "ellipse",
			"version": 321,
			"versionNonce": 331293909,
			"isDeleted": false,
			"id": "xE5XXxkNyQtFCZwUZVlMV",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 406.5813252404911,
			"y": -92.86525992204355,
			"strokeColor": "#f08c00",
			"backgroundColor": "transparent",
			"width": 82.5,
			"height": 80,
			"seed": 999871252,
			"groupIds": [
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 303,
			"versionNonce": 1725038331,
			"isDeleted": false,
			"id": "pQIvdwonyzvYto6Q93gH9",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 405.3313252404911,
			"y": -51.61525992204355,
			"strokeColor": "#f08c00",
			"backgroundColor": "transparent",
			"width": 335,
			"height": 273.74999999999994,
			"seed": 1752312748,
			"groupIds": [
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					-17.5,
					47.49999999999994
				],
				[
					13.75,
					209.99999999999994
				],
				[
					317.5,
					273.74999999999994
				]
			]
		},
		{
			"type": "line",
			"version": 181,
			"versionNonce": 646824501,
			"isDeleted": false,
			"id": "sdqWcAt-XPBLw9bFmS5Ri",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 822.831325240491,
			"y": -49.11525992204355,
			"strokeColor": "#f08c00",
			"backgroundColor": "transparent",
			"width": 59.999999999999886,
			"height": 227.49999999999994,
			"seed": 2127087276,
			"groupIds": [
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					-43.75,
					8.749999999999943
				],
				[
					-59.999999999999886,
					227.49999999999994
				]
			]
		},
		{
			"type": "arrow",
			"version": 401,
			"versionNonce": 600729499,
			"isDeleted": false,
			"id": "UDvvI5gFg1P30G2sw9zma",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 760.3313252404911,
			"y": 262.1347400779564,
			"strokeColor": "#f08c00",
			"backgroundColor": "transparent",
			"width": 250.66666666666674,
			"height": 108.24999999999989,
			"seed": 468595988,
			"groupIds": [
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "tfxF3hW4N0pJ9bps5RE2_",
				"focus": -0.21878884479457208,
				"gap": 1.239783701245365
			},
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					-29.83333333333337,
					108.24999999999989
				],
				[
					220.83333333333337,
					85.25
				]
			]
		},
		{
			"type": "ellipse",
			"version": 277,
			"versionNonce": 341947285,
			"isDeleted": false,
			"id": "7TIzcPatgIBLY2H38c_Ae",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 821.581325240491,
			"y": -24.115259922043606,
			"strokeColor": "#099268",
			"backgroundColor": "transparent",
			"width": 82.5,
			"height": 80,
			"seed": 235903660,
			"groupIds": [
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false
		},
		{
			"type": "ellipse",
			"version": 348,
			"versionNonce": 578075707,
			"isDeleted": false,
			"id": "JIIOEa60csDpHdGvpmFCi",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 404.0813252404911,
			"y": -24.115259922043606,
			"strokeColor": "#099268",
			"backgroundColor": "transparent",
			"width": 82.5,
			"height": 80,
			"seed": 1143760404,
			"groupIds": [
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 183,
			"versionNonce": 2037414133,
			"isDeleted": false,
			"id": "iUQMbmOnu6LBLZVB0f2KY",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 827.831325240491,
			"y": 15.884740077956394,
			"strokeColor": "#099268",
			"backgroundColor": "transparent",
			"width": 61.25,
			"height": 161.25,
			"seed": 1385861780,
			"groupIds": [
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					-30,
					-3.75
				],
				[
					-61.25,
					157.5
				]
			]
		},
		{
			"type": "line",
			"version": 301,
			"versionNonce": 1856470235,
			"isDeleted": false,
			"id": "-guWNKW71OG0KVmA-xqOx",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 409.0813252404911,
			"y": 15.884740077956394,
			"strokeColor": "#099268",
			"backgroundColor": "transparent",
			"width": 387.5,
			"height": 257.5,
			"seed": 1580811564,
			"groupIds": [
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					-76.25,
					1.25
				],
				[
					-47.5,
					257.5
				],
				[
					311.25,
					210
				]
			]
		},
		{
			"type": "arrow",
			"version": 513,
			"versionNonce": 1329566293,
			"isDeleted": false,
			"id": "EIZuLE0wJq2dik-EosJqu",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 761.5813252404911,
			"y": 262.1347400779564,
			"strokeColor": "#099268",
			"backgroundColor": "transparent",
			"width": 233.58333333333337,
			"height": 159.16666666666663,
			"seed": 1627955220,
			"groupIds": [
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "tfxF3hW4N0pJ9bps5RE2_",
				"focus": 0.318309684610381,
				"gap": 1.1823278772487313
			},
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					12.083333333333258,
					42.16666666666663
				],
				[
					-13.500000000000114,
					159.16666666666663
				],
				[
					220.08333333333326,
					153.33333333333337
				]
			]
		},
		{
			"type": "ellipse",
			"version": 348,
			"versionNonce": 1945708923,
			"isDeleted": false,
			"id": "2IYFMoazOBHF1TP7EY6Zj",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 822.831325240491,
			"y": 39.634740077956394,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 82.5,
			"height": 80,
			"seed": 476802836,
			"groupIds": [
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false
		},
		{
			"type": "ellipse",
			"version": 406,
			"versionNonce": 1118076853,
			"isDeleted": false,
			"id": "NJ30-QBxNtn0yclOA2Fbe",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 405.3313252404911,
			"y": 43.384740077956394,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 82.5,
			"height": 80,
			"seed": 983103636,
			"groupIds": [
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 252,
			"versionNonce": 128729627,
			"isDeleted": false,
			"id": "X9US3BSxw3Rj9OV4VP3G3",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 405.3313252404911,
			"y": 87.1347400779564,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 422.49999999999994,
			"height": 265,
			"seed": 1022877868,
			"groupIds": [
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					-104.99999999999994,
					-13.75
				],
				[
					-78.75,
					251.25
				],
				[
					317.5,
					140
				]
			]
		},
		{
			"type": "line",
			"version": 179,
			"versionNonce": 1237631253,
			"isDeleted": false,
			"id": "X6UkU1ipTyUAS0TlzS9oc",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 826.581325240491,
			"y": 84.6347400779564,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 60,
			"height": 96.25,
			"seed": 267798292,
			"groupIds": [
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					-20,
					-5
				],
				[
					-60,
					91.25
				]
			]
		},
		{
			"type": "arrow",
			"version": 183,
			"versionNonce": 850609851,
			"isDeleted": false,
			"id": "91hbZ6eVkiYvuu22wa_5c",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 764.3174363516017,
			"y": 261.55140674462285,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 220.0000000000001,
			"height": 220,
			"seed": 459706540,
			"groupIds": [
				"sv1gTJ98TouBAuin_uMMs"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "tfxF3hW4N0pJ9bps5RE2_",
				"focus": 0.8450559251619368,
				"gap": 1
			},
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					53.33333333333337,
					33.33333333333337
				],
				[
					0,
					197.33333333333326
				],
				[
					220.0000000000001,
					220
				]
			]
		},
		{
			"type": "rectangle",
			"version": 874,
			"versionNonce": 2048251509,
			"isDeleted": false,
			"id": "7zhfm18FYdvCNuyoDE4Ef",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1910.6650886974635,
			"y": -243.22352288370757,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 189281964,
			"groupIds": [
				"T9J__4hMsBjVBZeyjzSs3"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "kI9RoiCS"
				},
				{
					"id": "PfgenV-bJX_cPND-Bvy3W",
					"type": "arrow"
				}
			],
			"updated": 1707109565880,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 42,
			"versionNonce": 1001437019,
			"isDeleted": false,
			"id": "kI9RoiCS",
			"fillStyle": "cross-hatch",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1937.226129198908,
			"y": -223.2724906220093,
			"strokeColor": "#6741d9",
			"backgroundColor": "#96f2d7",
			"width": 17.779983520507812,
			"height": 25,
			"seed": 1759983125,
			"groupIds": [
				"T9J__4hMsBjVBZeyjzSs3"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "15",
			"rawText": "15",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "7zhfm18FYdvCNuyoDE4Ef",
			"originalText": "15",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 904,
			"versionNonce": 509427669,
			"isDeleted": false,
			"id": "ThyZ-znTcnoKJQ93NYVLp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1982.6650886974635,
			"y": -244.22352288370757,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1894023468,
			"groupIds": [
				"T9J__4hMsBjVBZeyjzSs3"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "st8hLo24HRmhS6jxJiSuH",
					"type": "arrow"
				}
			],
			"updated": 1707109565880,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 945,
			"versionNonce": 1895240699,
			"isDeleted": false,
			"id": "Jfk772oeqHWOOJVRc27Nm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2054.6650886974635,
			"y": -245.22352288370757,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 563313580,
			"groupIds": [
				"T9J__4hMsBjVBZeyjzSs3"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "IaYsTzVb6xGO09S9yEoXD",
					"type": "arrow"
				}
			],
			"updated": 1707109565880,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 997,
			"versionNonce": 212892981,
			"isDeleted": false,
			"id": "rLTLxRQKPfQBB1yfNVh7_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2126.665088697464,
			"y": -244.22352288370757,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 125773356,
			"groupIds": [
				"T9J__4hMsBjVBZeyjzSs3"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "TwPqlrfp"
				},
				{
					"id": "REa8Czv9D583B85-7J1yi",
					"type": "arrow"
				}
			],
			"updated": 1707109565880,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 32,
			"versionNonce": 847830171,
			"isDeleted": false,
			"id": "TwPqlrfp",
			"fillStyle": "cross-hatch",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2152.286126757502,
			"y": -224.2724906220093,
			"strokeColor": "#6741d9",
			"backgroundColor": "#96f2d7",
			"width": 19.659988403320312,
			"height": 25,
			"seed": 432899157,
			"groupIds": [
				"T9J__4hMsBjVBZeyjzSs3"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "12",
			"rawText": "12",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "rLTLxRQKPfQBB1yfNVh7_",
			"originalText": "12",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 986,
			"versionNonce": 1014304405,
			"isDeleted": false,
			"id": "7Xz0hBtAit50qBGnjl5nH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2488.9003766278265,
			"y": -249.40012031127526,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 932282540,
			"groupIds": [
				"DOKCl_YngGZ4LwLVH-dFG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "sYjQssem"
				},
				{
					"id": "-PbXMliMe-TPSeXMghbc2",
					"type": "arrow"
				}
			],
			"updated": 1707109565880,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 31,
			"versionNonce": 1008243003,
			"isDeleted": false,
			"id": "sYjQssem",
			"fillStyle": "cross-hatch",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2518.971411636107,
			"y": -229.44908804957697,
			"strokeColor": "#6741d9",
			"backgroundColor": "#96f2d7",
			"width": 10.759994506835938,
			"height": 25,
			"seed": 1424097499,
			"groupIds": [
				"DOKCl_YngGZ4LwLVH-dFG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "7",
			"rawText": "7",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "7Xz0hBtAit50qBGnjl5nH",
			"originalText": "7",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1020,
			"versionNonce": 476083189,
			"isDeleted": false,
			"id": "yKtX9oSBvixXZ8gRn4sBM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2560.9003766278265,
			"y": -250.40012031127526,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 427068204,
			"groupIds": [
				"DOKCl_YngGZ4LwLVH-dFG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "NIJziJ4cSaVhtNs1UBBCW",
					"type": "arrow"
				}
			],
			"updated": 1707109565880,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1061,
			"versionNonce": 789098971,
			"isDeleted": false,
			"id": "WHSYdVDqehpCLB72WyuOQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2632.9003766278265,
			"y": -251.40012031127526,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 261244332,
			"groupIds": [
				"DOKCl_YngGZ4LwLVH-dFG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "Xgo0fm81UhSeYrmxv9NYv",
					"type": "arrow"
				}
			],
			"updated": 1707109565880,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1113,
			"versionNonce": 678964565,
			"isDeleted": false,
			"id": "Rmv4cP90TV6b0siAGG43t",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2704.9003766278265,
			"y": -250.40012031127526,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 521449516,
			"groupIds": [
				"DOKCl_YngGZ4LwLVH-dFG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "GyA7mPIH"
				},
				{
					"id": "gRZ-dGhsc8SJ5mO9u1A9V",
					"type": "arrow"
				}
			],
			"updated": 1707109565880,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 31,
			"versionNonce": 1550564987,
			"isDeleted": false,
			"id": "GyA7mPIH",
			"fillStyle": "cross-hatch",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2733.9514149930405,
			"y": -230.44908804957697,
			"strokeColor": "#6741d9",
			"backgroundColor": "#96f2d7",
			"width": 12.79998779296875,
			"height": 25,
			"seed": 1447600661,
			"groupIds": [
				"DOKCl_YngGZ4LwLVH-dFG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "4",
			"rawText": "4",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "Rmv4cP90TV6b0siAGG43t",
			"originalText": "4",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1001,
			"versionNonce": 1074903733,
			"isDeleted": false,
			"id": "S6GEpG8Q28BTztU9duO97",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2774.635664558189,
			"y": -249.6943617040247,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 400935596,
			"groupIds": [
				"f3EBeaxdQrLoidLWBvcUA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "GWrHOqRW"
				},
				{
					"id": "vZVZ5uUz0ZDXcAHJ5APhA",
					"type": "arrow"
				}
			],
			"updated": 1707109565880,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 31,
			"versionNonce": 1325676315,
			"isDeleted": false,
			"id": "GWrHOqRW",
			"fillStyle": "cross-hatch",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2803.2767068906883,
			"y": -229.7433294423264,
			"strokeColor": "#6741d9",
			"backgroundColor": "#96f2d7",
			"width": 13.619979858398438,
			"height": 25,
			"seed": 288878075,
			"groupIds": [
				"f3EBeaxdQrLoidLWBvcUA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "3",
			"rawText": "3",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "S6GEpG8Q28BTztU9duO97",
			"originalText": "3",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1035,
			"versionNonce": 1003658261,
			"isDeleted": false,
			"id": "l8NKOU6BGmwNAl1iyPwMF",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2846.635664558189,
			"y": -250.6943617040247,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1018139948,
			"groupIds": [
				"f3EBeaxdQrLoidLWBvcUA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "6jCkOuvp1Wm2cN6TCmS_s",
					"type": "arrow"
				}
			],
			"updated": 1707109565880,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1076,
			"versionNonce": 356817851,
			"isDeleted": false,
			"id": "Ke7QY6UiWVvgGfu10zlkG",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2918.635664558189,
			"y": -251.6943617040247,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1792806828,
			"groupIds": [
				"f3EBeaxdQrLoidLWBvcUA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "iHEqqZj208vOOUF-ViE5L",
					"type": "arrow"
				}
			],
			"updated": 1707109565880,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1128,
			"versionNonce": 1135628661,
			"isDeleted": false,
			"id": "ypGFwgai7Pb_4746MXLBu",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2990.635664558189,
			"y": -250.6943617040247,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1117076012,
			"groupIds": [
				"f3EBeaxdQrLoidLWBvcUA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "1GxVv9YB"
				},
				{
					"id": "UbPP4wPpb-u5dzo67YF9t",
					"type": "arrow"
				}
			],
			"updated": 1707109565880,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 31,
			"versionNonce": 1263496283,
			"isDeleted": false,
			"id": "1GxVv9YB",
			"fillStyle": "cross-hatch",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3019.2066995664695,
			"y": -230.7433294423264,
			"strokeColor": "#6741d9",
			"backgroundColor": "#96f2d7",
			"width": 13.759994506835938,
			"height": 25,
			"seed": 1403961077,
			"groupIds": [
				"f3EBeaxdQrLoidLWBvcUA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565880,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "0",
			"rawText": "0",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "ypGFwgai7Pb_4746MXLBu",
			"originalText": "0",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 981,
			"versionNonce": 1693473493,
			"isDeleted": false,
			"id": "xv62BETWL_fmAL-iVRxbP",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2199.4885964537325,
			"y": -246.753315166412,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1321538732,
			"groupIds": [
				"QH-IQ_iI4Ko0rbLzBS8mE"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "n66wNJ6w"
				},
				{
					"id": "BkDe14JiI012yREcLa9ST",
					"type": "arrow"
				}
			],
			"updated": 1707109565881,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 32,
			"versionNonce": 1693919483,
			"isDeleted": false,
			"id": "n66wNJ6w",
			"fillStyle": "cross-hatch",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2229.5196305464856,
			"y": -226.8022829047137,
			"strokeColor": "#6741d9",
			"backgroundColor": "#96f2d7",
			"width": 10.839996337890625,
			"height": 25,
			"seed": 1178032149,
			"groupIds": [
				"QH-IQ_iI4Ko0rbLzBS8mE"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565881,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "11",
			"rawText": "11",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "xv62BETWL_fmAL-iVRxbP",
			"originalText": "11",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1015,
			"versionNonce": 1747466293,
			"isDeleted": false,
			"id": "PdYt6RKXw6L3zj4u5Y0pM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2271.4885964537325,
			"y": -247.753315166412,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 756391724,
			"groupIds": [
				"QH-IQ_iI4Ko0rbLzBS8mE"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "5_rArNyuxWALMGnXxaLd9",
					"type": "arrow"
				}
			],
			"updated": 1707109565881,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1056,
			"versionNonce": 935219611,
			"isDeleted": false,
			"id": "1ndjAyiLORhDwnOq0CKfT",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2343.4885964537325,
			"y": -248.753315166412,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 904976812,
			"groupIds": [
				"QH-IQ_iI4Ko0rbLzBS8mE"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "E90nTepUtM_IYSadBvuXM",
					"type": "arrow"
				}
			],
			"updated": 1707109565881,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1108,
			"versionNonce": 1732077973,
			"isDeleted": false,
			"id": "8PgmTz12i6ZK6jY5mExuY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2415.4885964537325,
			"y": -247.753315166412,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 612418604,
			"groupIds": [
				"QH-IQ_iI4Ko0rbLzBS8mE"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "PhCUOJ1G"
				},
				{
					"id": "fRqfHwnoFqp6KJ1IKVor-",
					"type": "arrow"
				}
			],
			"updated": 1707109565881,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 31,
			"versionNonce": 1154967099,
			"isDeleted": false,
			"id": "PhCUOJ1G",
			"fillStyle": "cross-hatch",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2443.2896348189465,
			"y": -227.8022829047137,
			"strokeColor": "#6741d9",
			"backgroundColor": "#96f2d7",
			"width": 15.29998779296875,
			"height": 25,
			"seed": 236918779,
			"groupIds": [
				"QH-IQ_iI4Ko0rbLzBS8mE"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565881,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "8",
			"rawText": "8",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "8PgmTz12i6ZK6jY5mExuY",
			"originalText": "8",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "text",
			"version": 254,
			"versionNonce": 593850101,
			"isDeleted": false,
			"id": "2yMKYsjW",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 931.3471912335829,
			"y": 649.8325215058859,
			"strokeColor": "#12b886",
			"backgroundColor": "transparent",
			"width": 445.3125,
			"height": 216,
			"seed": 1122334892,
			"groupIds": [
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565881,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "void SubBytes(u8* state) {\n    for (int i = 0; i < 16; i++)\n        state[i] = sbox[state[i]];\n}\n\nvoid InvSubBytes(u8* state) {\n    for (int i = 0; i < 16; i++) {\n        state[i] = inv_sbox[state[i]];\n}",
			"rawText": "void SubBytes(u8* state) {\n    for (int i = 0; i < 16; i++)\n        state[i] = sbox[state[i]];\n}\n\nvoid InvSubBytes(u8* state) {\n    for (int i = 0; i < 16; i++) {\n        state[i] = inv_sbox[state[i]];\n}",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "void SubBytes(u8* state) {\n    for (int i = 0; i < 16; i++)\n        state[i] = sbox[state[i]];\n}\n\nvoid InvSubBytes(u8* state) {\n    for (int i = 0; i < 16; i++) {\n        state[i] = inv_sbox[state[i]];\n}",
			"lineHeight": 1.2,
			"baseline": 211
		},
		{
			"type": "text",
			"version": 455,
			"versionNonce": 1126491867,
			"isDeleted": false,
			"id": "TJn8ng4F",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 383.8089787540536,
			"y": 640.1527902370943,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 508.41070556640625,
			"height": 52.50135083986754,
			"seed": 1174787092,
			"groupIds": [
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565881,
			"link": null,
			"locked": false,
			"fontSize": 42.00108067189403,
			"fontFamily": 1,
			"text": "SubBytes / InvSubBytes",
			"rawText": "SubBytes / InvSubBytes",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "SubBytes / InvSubBytes",
			"lineHeight": 1.25,
			"baseline": 36
		},
		{
			"type": "rectangle",
			"version": 1064,
			"versionNonce": 455460949,
			"isDeleted": false,
			"id": "FWejvzihwk7MEYLDHvTzt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 387.6797218792233,
			"y": 912.9811212477457,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1617092908,
			"groupIds": [
				"0XunY9j27t7Crvimebg0y",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "v0T7WGvL"
				}
			],
			"updated": 1707109565881,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 601,
			"versionNonce": 1765364603,
			"isDeleted": false,
			"id": "v0T7WGvL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 393.83387914092157,
			"y": 933.432153509444,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 1380309932,
			"groupIds": [
				"0XunY9j27t7Crvimebg0y",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565881,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "state",
			"rawText": "state",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "FWejvzihwk7MEYLDHvTzt",
			"originalText": "state",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1124,
			"versionNonce": 1616115125,
			"isDeleted": false,
			"id": "5SJPHimoqCJwbpIhRevtj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 390.6797218792233,
			"y": 978.9811212477457,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 853902892,
			"groupIds": [
				"0XunY9j27t7Crvimebg0y",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "s1FyVshv"
				}
			],
			"updated": 1707109565881,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 592,
			"versionNonce": 2002201627,
			"isDeleted": false,
			"id": "s1FyVshv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 396.83387914092157,
			"y": 999.432153509444,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 1730928812,
			"groupIds": [
				"0XunY9j27t7Crvimebg0y",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565881,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "state",
			"rawText": "state",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "5SJPHimoqCJwbpIhRevtj",
			"originalText": "state",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1117,
			"versionNonce": 773158677,
			"isDeleted": false,
			"id": "4BnW48CCalxbmRGylyOai",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 389.6797218792233,
			"y": 1045.9811212477453,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 650308396,
			"groupIds": [
				"0XunY9j27t7Crvimebg0y",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "1rRBI44w"
				}
			],
			"updated": 1707109565881,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 593,
			"versionNonce": 24178875,
			"isDeleted": false,
			"id": "1rRBI44w",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 395.83387914092157,
			"y": 1066.4321535094437,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 605332908,
			"groupIds": [
				"0XunY9j27t7Crvimebg0y",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565881,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "state",
			"rawText": "state",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "4BnW48CCalxbmRGylyOai",
			"originalText": "state",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1098,
			"versionNonce": 1054854261,
			"isDeleted": false,
			"id": "c9LvHwZGtOuJoqRQRaOPs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 390.6797218792233,
			"y": 1111.9811212477453,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 877334572,
			"groupIds": [
				"0XunY9j27t7Crvimebg0y",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "B9MmRg3c"
				}
			],
			"updated": 1707109565881,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 592,
			"versionNonce": 2032738651,
			"isDeleted": false,
			"id": "B9MmRg3c",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 396.83387914092157,
			"y": 1132.4321535094437,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 2001742508,
			"groupIds": [
				"0XunY9j27t7Crvimebg0y",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565881,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "state",
			"rawText": "state",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "c9LvHwZGtOuJoqRQRaOPs",
			"originalText": "state",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1100,
			"versionNonce": 1652061653,
			"isDeleted": false,
			"id": "6BXMrmS42awvN5kmbTKMb",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 460.4737003123803,
			"y": 914.598765212927,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1776245292,
			"groupIds": [
				"MwfWrf8t8zmw4n53qp8pu",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "IsWGI9q6"
				}
			],
			"updated": 1707109565881,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 638,
			"versionNonce": 2010267131,
			"isDeleted": false,
			"id": "IsWGI9q6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 466.6278575740786,
			"y": 935.0497974746253,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 1204499628,
			"groupIds": [
				"MwfWrf8t8zmw4n53qp8pu",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565881,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "state",
			"rawText": "state",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "6BXMrmS42awvN5kmbTKMb",
			"originalText": "state",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1161,
			"versionNonce": 1408561973,
			"isDeleted": false,
			"id": "4JY6h9wMp0Y_PC2Ow_5nx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 463.4737003123803,
			"y": 980.5987652129265,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1616363308,
			"groupIds": [
				"MwfWrf8t8zmw4n53qp8pu",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "LgMdus1x"
				}
			],
			"updated": 1707109565881,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 629,
			"versionNonce": 1215219355,
			"isDeleted": false,
			"id": "LgMdus1x",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 469.6278575740786,
			"y": 1001.0497974746248,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 2079259052,
			"groupIds": [
				"MwfWrf8t8zmw4n53qp8pu",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565881,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "state",
			"rawText": "state",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "4JY6h9wMp0Y_PC2Ow_5nx",
			"originalText": "state",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1154,
			"versionNonce": 1337640085,
			"isDeleted": false,
			"id": "URTsohB7QIdzFoxWES__a",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 462.4737003123803,
			"y": 1047.598765212926,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1169876012,
			"groupIds": [
				"MwfWrf8t8zmw4n53qp8pu",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "WnOUltCs"
				}
			],
			"updated": 1707109565881,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 630,
			"versionNonce": 833698619,
			"isDeleted": false,
			"id": "WnOUltCs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 468.6278575740786,
			"y": 1068.0497974746245,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 1940225708,
			"groupIds": [
				"MwfWrf8t8zmw4n53qp8pu",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565881,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "state",
			"rawText": "state",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "URTsohB7QIdzFoxWES__a",
			"originalText": "state",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1135,
			"versionNonce": 1769957877,
			"isDeleted": false,
			"id": "srW4z7uo_e5_3wZG4U-zY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 463.4737003123803,
			"y": 1113.598765212926,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1851312428,
			"groupIds": [
				"MwfWrf8t8zmw4n53qp8pu",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "A8FJ1ytX"
				}
			],
			"updated": 1707109565881,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 629,
			"versionNonce": 2147228635,
			"isDeleted": false,
			"id": "A8FJ1ytX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 469.6278575740786,
			"y": 1134.0497974746245,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 2034156460,
			"groupIds": [
				"MwfWrf8t8zmw4n53qp8pu",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565881,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "state",
			"rawText": "state",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "srW4z7uo_e5_3wZG4U-zY",
			"originalText": "state",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1091,
			"versionNonce": 575169365,
			"isDeleted": false,
			"id": "nXBRmtPOxP9X7zQFDcJsY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 533.267678745537,
			"y": 916.2164091781083,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 839722388,
			"groupIds": [
				"t45pzzI_tO3cA9Mv4yp3T",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "EBhc1PYq"
				}
			],
			"updated": 1707109565881,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 629,
			"versionNonce": 1331816571,
			"isDeleted": false,
			"id": "EBhc1PYq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 539.4218360072352,
			"y": 936.6674414398066,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 1778078484,
			"groupIds": [
				"t45pzzI_tO3cA9Mv4yp3T",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565881,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "state",
			"rawText": "state",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "nXBRmtPOxP9X7zQFDcJsY",
			"originalText": "state",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1154,
			"versionNonce": 1047212213,
			"isDeleted": false,
			"id": "kNtBLVcdl8dZKv10yunQ-",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 536.267678745537,
			"y": 982.2164091781083,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 784846996,
			"groupIds": [
				"t45pzzI_tO3cA9Mv4yp3T",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "gLZSPaMC"
				}
			],
			"updated": 1707109565881,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 621,
			"versionNonce": 363143451,
			"isDeleted": false,
			"id": "gLZSPaMC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 542.4218360072352,
			"y": 1002.6674414398066,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 1881710100,
			"groupIds": [
				"t45pzzI_tO3cA9Mv4yp3T",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565881,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "state",
			"rawText": "state",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "kNtBLVcdl8dZKv10yunQ-",
			"originalText": "state",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1146,
			"versionNonce": 1535988245,
			"isDeleted": false,
			"id": "syj04QM1aUrwKsBgn7P6h",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 535.267678745537,
			"y": 1049.2164091781078,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 924040084,
			"groupIds": [
				"t45pzzI_tO3cA9Mv4yp3T",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "QluQfgo8"
				}
			],
			"updated": 1707109565881,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 621,
			"versionNonce": 1815627195,
			"isDeleted": false,
			"id": "QluQfgo8",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 541.4218360072352,
			"y": 1069.6674414398062,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 2109679892,
			"groupIds": [
				"t45pzzI_tO3cA9Mv4yp3T",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565881,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "state",
			"rawText": "state",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "syj04QM1aUrwKsBgn7P6h",
			"originalText": "state",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1127,
			"versionNonce": 1185171317,
			"isDeleted": false,
			"id": "DZSV5HHCq8LsvQHwot5qa",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 536.267678745537,
			"y": 1115.2164091781078,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 127985300,
			"groupIds": [
				"t45pzzI_tO3cA9Mv4yp3T",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "vuvJdsjs"
				}
			],
			"updated": 1707109565881,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 620,
			"versionNonce": 440260187,
			"isDeleted": false,
			"id": "vuvJdsjs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 542.4218360072352,
			"y": 1135.6674414398062,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 963572756,
			"groupIds": [
				"t45pzzI_tO3cA9Mv4yp3T",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565881,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "state",
			"rawText": "state",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "DZSV5HHCq8LsvQHwot5qa",
			"originalText": "state",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1085,
			"versionNonce": 301306069,
			"isDeleted": false,
			"id": "dbP7utYnEibzkLTQ4dJpg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 604.4440132135129,
			"y": 914.5987652129265,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1134446252,
			"groupIds": [
				"ytK9Xy82WpkfN6rQjIWLU",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "rwzN1CIv"
				}
			],
			"updated": 1707109565881,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 623,
			"versionNonce": 1585992443,
			"isDeleted": false,
			"id": "rwzN1CIv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 610.5981704752112,
			"y": 935.0497974746248,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 1408799020,
			"groupIds": [
				"ytK9Xy82WpkfN6rQjIWLU",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565881,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "state",
			"rawText": "state",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "dbP7utYnEibzkLTQ4dJpg",
			"originalText": "state",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1146,
			"versionNonce": 1796648501,
			"isDeleted": false,
			"id": "b-lPuYu7mRvU6l3jpgS5m",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 607.4440132135129,
			"y": 980.5987652129265,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 665160620,
			"groupIds": [
				"ytK9Xy82WpkfN6rQjIWLU",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "4movLlf4"
				}
			],
			"updated": 1707109565881,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 616,
			"versionNonce": 2040150939,
			"isDeleted": false,
			"id": "4movLlf4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 613.5981704752112,
			"y": 1001.0497974746248,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 550450732,
			"groupIds": [
				"ytK9Xy82WpkfN6rQjIWLU",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565881,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "state",
			"rawText": "state",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "b-lPuYu7mRvU6l3jpgS5m",
			"originalText": "state",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1137,
			"versionNonce": 820846485,
			"isDeleted": false,
			"id": "Ujf9QvFgOluA7groPOulA",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 606.4440132135129,
			"y": 1047.5987652129265,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1281331372,
			"groupIds": [
				"ytK9Xy82WpkfN6rQjIWLU",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "NHhCevxK"
				}
			],
			"updated": 1707109565881,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 616,
			"versionNonce": 2007371835,
			"isDeleted": false,
			"id": "NHhCevxK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 612.5981704752112,
			"y": 1068.049797474625,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 167811884,
			"groupIds": [
				"ytK9Xy82WpkfN6rQjIWLU",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565881,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "state",
			"rawText": "state",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "Ujf9QvFgOluA7groPOulA",
			"originalText": "state",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1118,
			"versionNonce": 1236165877,
			"isDeleted": false,
			"id": "g7QEh5Xnls-DF2ZpOROp_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 607.4440132135129,
			"y": 1113.5987652129265,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 874272172,
			"groupIds": [
				"ytK9Xy82WpkfN6rQjIWLU",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "Rt7KqTsm"
				}
			],
			"updated": 1707109565881,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 615,
			"versionNonce": 982405339,
			"isDeleted": false,
			"id": "Rt7KqTsm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 613.5981704752112,
			"y": 1134.049797474625,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 1205649452,
			"groupIds": [
				"ytK9Xy82WpkfN6rQjIWLU",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565881,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "state",
			"rawText": "state",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "g7QEh5Xnls-DF2ZpOROp_",
			"originalText": "state",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 993,
			"versionNonce": 954203733,
			"isDeleted": false,
			"id": "IissBvAk3Np5rucGmLWuG",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1093.2369924002173,
			"y": 918.0401273020507,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 667670932,
			"groupIds": [
				"HB46_cEOUVOIPyG0LO-lP",
				"VNaL-FQS-8L67A0NpxRKe",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565881,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1028,
			"versionNonce": 1139113339,
			"isDeleted": false,
			"id": "SXO1FF6GTv6_7nBgAd0Xg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1165.2369924002173,
			"y": 917.0401273020507,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 499353364,
			"groupIds": [
				"HB46_cEOUVOIPyG0LO-lP",
				"VNaL-FQS-8L67A0NpxRKe",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565881,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1069,
			"versionNonce": 1968663477,
			"isDeleted": false,
			"id": "5hFsj03vNFqXwXwVLSwN9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1237.2369924002173,
			"y": 916.0401273020507,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 594117780,
			"groupIds": [
				"HB46_cEOUVOIPyG0LO-lP",
				"VNaL-FQS-8L67A0NpxRKe",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565881,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1120,
			"versionNonce": 1055790619,
			"isDeleted": false,
			"id": "aBQVy5DdLNJpqJi1sZBDj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1309.2369924002173,
			"y": 917.0401273020507,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1316213268,
			"groupIds": [
				"HB46_cEOUVOIPyG0LO-lP",
				"VNaL-FQS-8L67A0NpxRKe",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565881,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1011,
			"versionNonce": 2134519061,
			"isDeleted": false,
			"id": "kz-zUnjxoe-zDhnMwGK89",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1096.4722803305795,
			"y": 984.363529874483,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 955611028,
			"groupIds": [
				"5ls1HuTMYSEDOv4Uiqbzk",
				"VNaL-FQS-8L67A0NpxRKe",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565881,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1046,
			"versionNonce": 1251646139,
			"isDeleted": false,
			"id": "WqydTYKtv6Wa-YMI8dklV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1168.4722803305795,
			"y": 983.363529874483,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1409901844,
			"groupIds": [
				"5ls1HuTMYSEDOv4Uiqbzk",
				"VNaL-FQS-8L67A0NpxRKe",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565881,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1087,
			"versionNonce": 905822837,
			"isDeleted": false,
			"id": "Mzg-Uwc8WEcM4aeTtVAXM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1240.4722803305795,
			"y": 982.363529874483,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 289645204,
			"groupIds": [
				"5ls1HuTMYSEDOv4Uiqbzk",
				"VNaL-FQS-8L67A0NpxRKe",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565881,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1138,
			"versionNonce": 59607899,
			"isDeleted": false,
			"id": "bnz4E2gqGRM3uMe0dw9jE",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1312.4722803305797,
			"y": 983.363529874483,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2002399252,
			"groupIds": [
				"5ls1HuTMYSEDOv4Uiqbzk",
				"VNaL-FQS-8L67A0NpxRKe",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565881,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1020,
			"versionNonce": 1852287957,
			"isDeleted": false,
			"id": "9HVKn0kFP5iCpmKoq94n-",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1099.707568260942,
			"y": 1049.0692884817336,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 184601260,
			"groupIds": [
				"dTfvjLXyFOyD_G5XMkHCD",
				"VNaL-FQS-8L67A0NpxRKe",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565881,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1053,
			"versionNonce": 1310287867,
			"isDeleted": false,
			"id": "spOt5xx0LVPkgBUSImCU-",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1171.707568260942,
			"y": 1048.0692884817336,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 342529324,
			"groupIds": [
				"dTfvjLXyFOyD_G5XMkHCD",
				"VNaL-FQS-8L67A0NpxRKe",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565882,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1094,
			"versionNonce": 1217227061,
			"isDeleted": false,
			"id": "azOSNzWdkvm4pe7hCh-_5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1243.707568260942,
			"y": 1047.0692884817336,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 322375596,
			"groupIds": [
				"dTfvjLXyFOyD_G5XMkHCD",
				"VNaL-FQS-8L67A0NpxRKe",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565882,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1145,
			"versionNonce": 1614852251,
			"isDeleted": false,
			"id": "2KSPXi10TDNqL07GnXO-8",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1315.7075682609423,
			"y": 1048.0692884817336,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 663763500,
			"groupIds": [
				"dTfvjLXyFOyD_G5XMkHCD",
				"VNaL-FQS-8L67A0NpxRKe",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565882,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1047,
			"versionNonce": 1171552917,
			"isDeleted": false,
			"id": "LOPhtvAVacHRj3Bmque48",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1101.3252122261233,
			"y": 1115.3926910541652,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 872137772,
			"groupIds": [
				"BPcdvrNuuqQ1fsrk7LbaA",
				"VNaL-FQS-8L67A0NpxRKe",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565882,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1082,
			"versionNonce": 196470075,
			"isDeleted": false,
			"id": "qvXOVt6RZ5H7Xu2CEuIXt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1173.3252122261233,
			"y": 1114.3926910541652,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 650796716,
			"groupIds": [
				"BPcdvrNuuqQ1fsrk7LbaA",
				"VNaL-FQS-8L67A0NpxRKe",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565882,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1123,
			"versionNonce": 519200757,
			"isDeleted": false,
			"id": "3EuVnPslKgn-lHsCp_VUz",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1245.3252122261233,
			"y": 1113.3926910541652,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 702654764,
			"groupIds": [
				"BPcdvrNuuqQ1fsrk7LbaA",
				"VNaL-FQS-8L67A0NpxRKe",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565882,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1174,
			"versionNonce": 1205568987,
			"isDeleted": false,
			"id": "AE04PRVgOW8uxHAfPbJPP",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1317.3252122261233,
			"y": 1114.3926910541652,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 279684012,
			"groupIds": [
				"BPcdvrNuuqQ1fsrk7LbaA",
				"VNaL-FQS-8L67A0NpxRKe",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565882,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 291,
			"versionNonce": 1508677973,
			"isDeleted": false,
			"id": "psKM6JJuNlHbfZEcT3wJB",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 762.7183428638057,
			"y": 998.0204785191877,
			"strokeColor": "#96f2d7",
			"backgroundColor": "#96f2d7",
			"width": 195.73491978693298,
			"height": 82.49984222424426,
			"seed": 2093142676,
			"groupIds": [
				"1OaDZMU9y-vfLSB_yY3km",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "eUYwj8xhaluxlEkcVYTFD",
					"type": "arrow"
				},
				{
					"id": "KTS9uWgLhcQ5aCNUBaSmq",
					"type": "arrow"
				},
				{
					"id": "qRsy06h_I0z1kKgho-MxY",
					"type": "arrow"
				},
				{
					"id": "0TELktlU7HTCSlLD_-Lj_",
					"type": "arrow"
				}
			],
			"updated": 1707109565882,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 147,
			"versionNonce": 2076447355,
			"isDeleted": false,
			"id": "4zQdRfuT",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 778.8947825156183,
			"y": 1010.9616302406382,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#96f2d7",
			"width": 160.96028217162683,
			"height": 65.92933157749835,
			"seed": 28947628,
			"groupIds": [
				"1OaDZMU9y-vfLSB_yY3km",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565882,
			"link": null,
			"locked": false,
			"fontSize": 54.9411096479153,
			"fontFamily": 1,
			"text": "S-Box",
			"rawText": "S-Box",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "S-Box",
			"lineHeight": 1.25,
			"baseline": 52
		},
		{
			"type": "ellipse",
			"version": 235,
			"versionNonce": 538486453,
			"isDeleted": false,
			"id": "bEr0vmH-d7r2ixNu5MiyO",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 380.1454662105589,
			"y": 906.2558716333873,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 82.5,
			"height": 80,
			"seed": 537588524,
			"groupIds": [
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565882,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 866,
			"versionNonce": 137497371,
			"isDeleted": false,
			"id": "aHBrJQAs8drYrRjH1nqsH",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 417.7531869319364,
			"y": 904.3424042392946,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 337.64701551253756,
			"height": 153.0885353774172,
			"seed": 1785179924,
			"groupIds": [
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565882,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					260.1464895933525,
					-15.661674990256415
				],
				[
					289.77884562817167,
					106.98570866571072
				],
				[
					337.64701551253756,
					137.4268603871608
				]
			]
		},
		{
			"type": "arrow",
			"version": 895,
			"versionNonce": 1411123221,
			"isDeleted": false,
			"id": "eUYwj8xhaluxlEkcVYTFD",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 963.2345275851654,
			"y": 1041.748490225768,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 118.17176352691388,
			"height": 90.11095333535513,
			"seed": 1036232340,
			"groupIds": [
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565882,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "psKM6JJuNlHbfZEcT3wJB",
				"focus": -0.09711901852649679,
				"gap": 4.781264934426758
			},
			"endBinding": {
				"elementId": "JRu_PT3f4M78hbYxupCC0",
				"focus": 0.349669706191082,
				"gap": 2.440106504342971
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					36.592948542723775,
					2.547428931906552
				],
				[
					70.30858531895728,
					-69.51444911004467
				],
				[
					118.17176352691388,
					-87.56352440344858
				]
			]
		},
		{
			"type": "ellipse",
			"version": 376,
			"versionNonce": 295169979,
			"isDeleted": false,
			"id": "xUY1CaQbNDPEp1t9zgmwA",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 383.3807541409217,
			"y": 972.5792742058189,
			"strokeColor": "#f08c00",
			"backgroundColor": "transparent",
			"width": 82.5,
			"height": 80,
			"seed": 936874772,
			"groupIds": [
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565882,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 525,
			"versionNonce": 1743535477,
			"isDeleted": false,
			"id": "c-Ww67r_QRR-gqcHmc4Oq",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 382.5025109105456,
			"y": 1149.394026361932,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 369.26460688580056,
			"height": 240.66151721450115,
			"seed": 292779412,
			"groupIds": [
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565882,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					3.382145667144812,
					107.57329738859494
				],
				[
					277.1316723398781,
					142.86785433285536
				],
				[
					369.26460688580056,
					-97.79366288164579
				]
			]
		},
		{
			"type": "ellipse",
			"version": 393,
			"versionNonce": 169361499,
			"isDeleted": false,
			"id": "I6lih2slwsp5eiz_sCVc-",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 380.145466210559,
			"y": 1040.5203207434322,
			"strokeColor": "#099268",
			"backgroundColor": "transparent",
			"width": 82.5,
			"height": 80,
			"seed": 108002604,
			"groupIds": [
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565882,
			"link": null,
			"locked": false
		},
		{
			"type": "ellipse",
			"version": 456,
			"versionNonce": 1926153941,
			"isDeleted": false,
			"id": "1CniX-4ArzhX_8TyDrLhs",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 383.38075414092157,
			"y": 1106.8437233158636,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 82.5,
			"height": 80,
			"seed": 1721293076,
			"groupIds": [
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565882,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 502,
			"versionNonce": 2072345851,
			"isDeleted": false,
			"id": "xwLvjPo_R8mH-9VaKVs3E",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 385.8162128956301,
			"y": 1011.7856110780715,
			"strokeColor": "#f08c00",
			"backgroundColor": "transparent",
			"width": 372.49989481616274,
			"height": 199.6320930752263,
			"seed": 1868846612,
			"groupIds": [
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565882,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					8.382303442900252,
					-141.76434392620786
				],
				[
					295.22004994153986,
					-165.29339992205337
				],
				[
					372.49989481616274,
					34.338693153172926
				]
			]
		},
		{
			"type": "line",
			"version": 484,
			"versionNonce": 123282485,
			"isDeleted": false,
			"id": "YccWD_hpwysFgWsTSMleL",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 376.6250611741799,
			"y": 1077.66796711289,
			"strokeColor": "#099268",
			"backgroundColor": "transparent",
			"width": 380.80869050279443,
			"height": 176.91151721450115,
			"seed": 1176007572,
			"groupIds": [
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565882,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					3.014554293881929,
					132.27916117968243
				],
				[
					285.73465682734025,
					144.2649224373115
				],
				[
					380.80869050279443,
					-32.64659477718965
				]
			]
		},
		{
			"type": "ellipse",
			"version": 287,
			"versionNonce": 291644827,
			"isDeleted": false,
			"id": "JRu_PT3f4M78hbYxupCC0",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1083.8205910644092,
			"y": 912.7264474941118,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 82.5,
			"height": 80,
			"seed": 1247526828,
			"groupIds": [
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "eUYwj8xhaluxlEkcVYTFD",
					"type": "arrow"
				}
			],
			"updated": 1707109565882,
			"link": null,
			"locked": false
		},
		{
			"type": "ellipse",
			"version": 424,
			"versionNonce": 1232131477,
			"isDeleted": false,
			"id": "MIweP8IgcHNsIA3OMT4hJ",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1088.673522959953,
			"y": 975.8145621361812,
			"strokeColor": "#f08c00",
			"backgroundColor": "transparent",
			"width": 82.5,
			"height": 80,
			"seed": 1307370516,
			"groupIds": [
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "KTS9uWgLhcQ5aCNUBaSmq",
					"type": "arrow"
				}
			],
			"updated": 1707109565882,
			"link": null,
			"locked": false
		},
		{
			"type": "ellipse",
			"version": 453,
			"versionNonce": 1658894907,
			"isDeleted": false,
			"id": "9K21_kogIhl8_dvOgEGN-",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1090.2911669251343,
			"y": 1043.7556086737945,
			"strokeColor": "#099268",
			"backgroundColor": "transparent",
			"width": 82.5,
			"height": 80,
			"seed": 1824126740,
			"groupIds": [
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "qRsy06h_I0z1kKgho-MxY",
					"type": "arrow"
				}
			],
			"updated": 1707109565882,
			"link": null,
			"locked": false
		},
		{
			"type": "ellipse",
			"version": 516,
			"versionNonce": 1145789173,
			"isDeleted": false,
			"id": "TVwJzj4QxP4rZ5xVMW9Zl",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1093.526454855497,
			"y": 1110.0790112462262,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 82.5,
			"height": 80,
			"seed": 1979622572,
			"groupIds": [
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "KTS9uWgLhcQ5aCNUBaSmq",
					"type": "arrow"
				},
				{
					"id": "0TELktlU7HTCSlLD_-Lj_",
					"type": "arrow"
				}
			],
			"updated": 1707109565882,
			"link": null,
			"locked": false
		},
		{
			"type": "arrow",
			"version": 560,
			"versionNonce": 2095299291,
			"isDeleted": false,
			"id": "KTS9uWgLhcQ5aCNUBaSmq",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 959.8098326246704,
			"y": 1040.805236793222,
			"strokeColor": "#f08c00",
			"backgroundColor": "transparent",
			"width": 115.68647559655119,
			"height": 60.20581119916881,
			"seed": 205256236,
			"groupIds": [
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565882,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "psKM6JJuNlHbfZEcT3wJB",
				"focus": -0.5974921316016759,
				"gap": 1.3565699739317552
			},
			"endBinding": {
				"elementId": "MIweP8IgcHNsIA3OMT4hJ",
				"focus": 0.9505274751019624,
				"gap": 13.195449266422237
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					52.66650889091113,
					33.83837760166148
				],
				[
					115.68647559655119,
					-26.36743359750733
				]
			]
		},
		{
			"type": "arrow",
			"version": 671,
			"versionNonce": 7222357,
			"isDeleted": false,
			"id": "qRsy06h_I0z1kKgho-MxY",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 962.6774765898515,
			"y": 1045.658168688766,
			"strokeColor": "#099268",
			"backgroundColor": "transparent",
			"width": 119.78940749209482,
			"height": 70.19624858169709,
			"seed": 741626028,
			"groupIds": [
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565882,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "psKM6JJuNlHbfZEcT3wJB",
				"focus": -0.7225085567552255,
				"gap": 4.224213939112815
			},
			"endBinding": {
				"elementId": "9K21_kogIhl8_dvOgEGN-",
				"focus": 0.7855721994873918,
				"gap": 8.038076696922786
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					37.965636776233396,
					43.7843106318478
				],
				[
					67.38219825906322,
					70.19624858169709
				],
				[
					119.78940749209482,
					33.62767990991961
				]
			]
		},
		{
			"type": "arrow",
			"version": 368,
			"versionNonce": 738043771,
			"isDeleted": false,
			"id": "0TELktlU7HTCSlLD_-Lj_",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 963.7959437357811,
			"y": 1043.4571913902507,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 121.32371812394308,
			"height": 101.91199054176764,
			"seed": 289233708,
			"groupIds": [
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565882,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "psKM6JJuNlHbfZEcT3wJB",
				"focus": -0.9249166833813329,
				"gap": 5.342681085042386
			},
			"endBinding": {
				"elementId": "TVwJzj4QxP4rZ5xVMW9Zl",
				"focus": 0.03440025194316569,
				"gap": 8.64119304398156
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					22.598097994889258,
					75.39207642804627
				],
				[
					72.79397843315701,
					98.65705145727634
				],
				[
					121.32371812394308,
					101.91199054176764
				]
			]
		},
		{
			"type": "rectangle",
			"version": 432,
			"versionNonce": 1504633269,
			"isDeleted": false,
			"id": "4WhKrS8k1IWZAokSDsKsL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1913.1332106211553,
			"y": -404.57856135889926,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1557909173,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "Ea9UXp9H"
				}
			],
			"updated": 1707109565882,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 346,
			"versionNonce": 108068891,
			"isDeleted": false,
			"id": "Ea9UXp9H",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1919.9842749263107,
			"y": -384.627529097201,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 57.19993591308594,
			"height": 25,
			"seed": 1580871701,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565882,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "1 byte",
			"rawText": "1 byte",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "4WhKrS8k1IWZAokSDsKsL",
			"originalText": "1 byte",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "text",
			"version": 257,
			"versionNonce": 355656469,
			"isDeleted": false,
			"id": "rK8iB5IN",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1996.0209393648615,
			"y": -390.66751263793606,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 21.334671020507812,
			"height": 43.23341531544564,
			"seed": 1501753045,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565882,
			"link": null,
			"locked": false,
			"fontSize": 34.58673225235651,
			"fontFamily": 1,
			"text": "=",
			"rawText": "=",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "=",
			"lineHeight": 1.25,
			"baseline": 30
		},
		{
			"type": "text",
			"version": 352,
			"versionNonce": 909132987,
			"isDeleted": false,
			"id": "WcOQLb7B",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2032.6450399691003,
			"y": -436.02298277179017,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 49.35993957519531,
			"height": 25,
			"seed": 1120537013,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565882,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "8-bit",
			"rawText": "8-bit",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "8-bit",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 730,
			"versionNonce": 930068597,
			"isDeleted": false,
			"id": "EiX_-KIPdGp4SlbCsA0Gc",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2023.6287533525779,
			"y": -402.48016815111504,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 34.39606920204404,
			"height": 64.90206452339658,
			"seed": 1765025435,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565882,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 114,
			"versionNonce": 48100699,
			"isDeleted": false,
			"id": "-ZMNBls4TTbxWKPWHw0Pe",
			"fillStyle": "cross-hatch",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2049.350540883181,
			"y": -401.1154929763255,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#96f2d7",
			"width": 0,
			"height": 61.92622991630793,
			"seed": 1389009723,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565882,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					61.92622991630793
				]
			]
		},
		{
			"type": "line",
			"version": 128,
			"versionNonce": 439017941,
			"isDeleted": false,
			"id": "q_AfgSfiOIwVi4_a3C4dc",
			"fillStyle": "cross-hatch",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2041.2264914857928,
			"y": -401.7199013918485,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#96f2d7",
			"width": 0,
			"height": 63.06411832300989,
			"seed": 1995013083,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565882,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					63.06411832300989
				]
			]
		},
		{
			"type": "line",
			"version": 114,
			"versionNonce": 466391547,
			"isDeleted": false,
			"id": "nHOpL8zLlfctYEBCwCjF7",
			"fillStyle": "cross-hatch",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2032.7647736684708,
			"y": -401.6273670944963,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#96f2d7",
			"width": 0,
			"height": 63.50506401683674,
			"seed": 1101219963,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565882,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					63.50506401683674
				]
			]
		},
		{
			"type": "rectangle",
			"version": 730,
			"versionNonce": 1115283253,
			"isDeleted": false,
			"id": "D5jVP_9Dw0LRXV006bj_n",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2058.5685934210856,
			"y": -402.4941289734442,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 34.39606920204404,
			"height": 64.90206452339658,
			"seed": 2079218453,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565882,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 114,
			"versionNonce": 570333851,
			"isDeleted": false,
			"id": "HeaSyT0uyzSp9zzrrf3c6",
			"fillStyle": "cross-hatch",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2084.290380951689,
			"y": -401.12945379865477,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#96f2d7",
			"width": 0,
			"height": 61.92622991630793,
			"seed": 670838901,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565882,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					61.92622991630793
				]
			]
		},
		{
			"type": "line",
			"version": 128,
			"versionNonce": 1992437909,
			"isDeleted": false,
			"id": "_SoDW1B0mZcgrE5G2rML6",
			"fillStyle": "cross-hatch",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2076.1663315542996,
			"y": -401.7338622141778,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#96f2d7",
			"width": 0,
			"height": 63.06411832300989,
			"seed": 845699541,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565882,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					63.06411832300989
				]
			]
		},
		{
			"type": "line",
			"version": 114,
			"versionNonce": 1915129659,
			"isDeleted": false,
			"id": "2-gXPlzjlDzcwYLeOOsKI",
			"fillStyle": "cross-hatch",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2067.7046137369784,
			"y": -401.64132791682556,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#96f2d7",
			"width": 0,
			"height": 63.50506401683674,
			"seed": 1682462517,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565882,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					63.50506401683674
				]
			]
		},
		{
			"type": "text",
			"version": 51,
			"versionNonce": 347690485,
			"isDeleted": false,
			"id": "YbhCtNw3",
			"fillStyle": "cross-hatch",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1918.895019087743,
			"y": -295.1277571552447,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#96f2d7",
			"width": 169.57980346679688,
			"height": 25,
			"seed": 90243419,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565882,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "16-byte = 128-bit",
			"rawText": "16-byte = 128-bit",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "16-byte = 128-bit",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "text",
			"version": 62,
			"versionNonce": 782692315,
			"isDeleted": false,
			"id": "7eFTjbdB",
			"fillStyle": "cross-hatch",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1775.2306334029986,
			"y": -234.86853203934794,
			"strokeColor": "#6741d9",
			"backgroundColor": "#96f2d7",
			"width": 105.46875,
			"height": 43.2,
			"seed": 580434843,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565882,
			"link": null,
			"locked": false,
			"fontSize": 36,
			"fontFamily": 1,
			"text": "state",
			"rawText": "state",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "state",
			"lineHeight": 1.25,
			"baseline": 34
		},
		{
			"type": "text",
			"version": 153,
			"versionNonce": 1036130261,
			"isDeleted": false,
			"id": "3BaP7oYv",
			"fillStyle": "cross-hatch",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1660.2240224010552,
			"y": -90.87501567816327,
			"strokeColor": "#c2255c",
			"backgroundColor": "#96f2d7",
			"width": 225.32408142089844,
			"height": 45,
			"seed": 1546396181,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565883,
			"link": null,
			"locked": false,
			"fontSize": 36,
			"fontFamily": 1,
			"text": "AddRoundKey",
			"rawText": "AddRoundKey",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "AddRoundKey",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "rectangle",
			"version": 960,
			"versionNonce": 149666811,
			"isDeleted": false,
			"id": "I8W55NuLZ3uDy0atTWaqn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1913.9216610307249,
			"y": -602.2829801684045,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2085158357,
			"groupIds": [
				"EICKGaYraGR8IxSF44H2I"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565883,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 989,
			"versionNonce": 431641909,
			"isDeleted": false,
			"id": "z8kZfXbyvK6dTsNVew9oL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1985.9216610307249,
			"y": -603.2829801684045,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 84495509,
			"groupIds": [
				"EICKGaYraGR8IxSF44H2I"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565883,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1030,
			"versionNonce": 900236443,
			"isDeleted": false,
			"id": "s8lf76PUKjuVAFXw_a2OL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2057.921661030725,
			"y": -604.2829801684045,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 62714357,
			"groupIds": [
				"EICKGaYraGR8IxSF44H2I"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565883,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1083,
			"versionNonce": 981722773,
			"isDeleted": false,
			"id": "b9T61aVUsVlKSypTjWYYh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2129.921661030725,
			"y": -603.2829801684045,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 731179861,
			"groupIds": [
				"EICKGaYraGR8IxSF44H2I"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565883,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1072,
			"versionNonce": 218315067,
			"isDeleted": false,
			"id": "M-R2VUWhifrz62lxzh6C9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2492.1569489610874,
			"y": -609.5082227469557,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1364711957,
			"groupIds": [
				"o1-_Bg_-S56xtnYqzhfYo"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565883,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1105,
			"versionNonce": 584338421,
			"isDeleted": false,
			"id": "DGaRJ84uevfDOrc_E0gzV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2564.1569489610874,
			"y": -610.5082227469557,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1824397525,
			"groupIds": [
				"o1-_Bg_-S56xtnYqzhfYo"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565883,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1146,
			"versionNonce": 1549687259,
			"isDeleted": false,
			"id": "p5HzmrbWNhaTI9jZtvP-j",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2636.1569489610874,
			"y": -611.5082227469557,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1804482101,
			"groupIds": [
				"o1-_Bg_-S56xtnYqzhfYo"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565883,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1199,
			"versionNonce": 1655768405,
			"isDeleted": false,
			"id": "oefIO7h8vQfeyyJWNcwfN",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2708.1569489610874,
			"y": -610.5082227469557,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1228122005,
			"groupIds": [
				"o1-_Bg_-S56xtnYqzhfYo"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565883,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1086,
			"versionNonce": 550266491,
			"isDeleted": false,
			"id": "UfJu6yYVbu2bJrYIGnYpt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2777.89223689145,
			"y": -608.7538189887216,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1193576021,
			"groupIds": [
				"mPBJ-8slLa75W7hcpL_LE"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565883,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1119,
			"versionNonce": 1836028597,
			"isDeleted": false,
			"id": "jE5IiZ7aGXbnBE7w2SuxT",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2849.89223689145,
			"y": -609.7538189887216,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 469546261,
			"groupIds": [
				"mPBJ-8slLa75W7hcpL_LE"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565883,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1160,
			"versionNonce": 286252827,
			"isDeleted": false,
			"id": "k8wgd8R3Rr0iEXh4uZu0i",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2921.89223689145,
			"y": -610.7538189887216,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 690965109,
			"groupIds": [
				"mPBJ-8slLa75W7hcpL_LE"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565883,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1213,
			"versionNonce": 800420885,
			"isDeleted": false,
			"id": "uFI-aNPrk0h-w-319TS-r",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2993.89223689145,
			"y": -609.7538189887216,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 304624597,
			"groupIds": [
				"mPBJ-8slLa75W7hcpL_LE"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565883,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1066,
			"versionNonce": 1738228667,
			"isDeleted": false,
			"id": "iYvaUqD6yZoRSJ08cDxcg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2202.7451687869934,
			"y": -605.8127724511089,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1225982613,
			"groupIds": [
				"bNHL6GGfwrE1WibqMjWbL"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565883,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1099,
			"versionNonce": 1702373749,
			"isDeleted": false,
			"id": "T2SNuX8w-zG9qjrsuGPxC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2274.7451687869934,
			"y": -606.8127724511089,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1965629781,
			"groupIds": [
				"bNHL6GGfwrE1WibqMjWbL"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565883,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1140,
			"versionNonce": 1821447259,
			"isDeleted": false,
			"id": "iJWmL53vJABpZ3flqdXXd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2346.7451687869934,
			"y": -607.8127724511089,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 847523509,
			"groupIds": [
				"bNHL6GGfwrE1WibqMjWbL"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565883,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1193,
			"versionNonce": 805122773,
			"isDeleted": false,
			"id": "oDg4pCw0wjhSg8U2gKFok",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2418.7451687869934,
			"y": -606.8127724511089,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 534155285,
			"groupIds": [
				"bNHL6GGfwrE1WibqMjWbL"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565883,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1501,
			"versionNonce": 1475157019,
			"isDeleted": false,
			"id": "ylqQKbZSxWbcsg7os7Rf9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2489.014999936101,
			"y": 57.50116712425756,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 138957269,
			"groupIds": [
				"YE38ErntT5icrJGbDqnZx"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "-PbXMliMe-TPSeXMghbc2",
					"type": "arrow"
				},
				{
					"id": "dMW9689a_MWU6mKVtAhtW",
					"type": "arrow"
				}
			],
			"updated": 1707109586149,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1534,
			"versionNonce": 1839527925,
			"isDeleted": false,
			"id": "vyRaQRAFbYVhHqLAFQeCP",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2561.014999936101,
			"y": 56.50116712425756,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1802063669,
			"groupIds": [
				"YE38ErntT5icrJGbDqnZx"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "NIJziJ4cSaVhtNs1UBBCW",
					"type": "arrow"
				},
				{
					"id": "YjLXAhqlBdBs0o5S8ukK0",
					"type": "arrow"
				}
			],
			"updated": 1707109601266,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1575,
			"versionNonce": 665987259,
			"isDeleted": false,
			"id": "YCX1k0qZV7W3tAFir_eWC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2633.014999936101,
			"y": 55.50116712425756,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 809738389,
			"groupIds": [
				"YE38ErntT5icrJGbDqnZx"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "Xgo0fm81UhSeYrmxv9NYv",
					"type": "arrow"
				},
				{
					"id": "Y-Aggf8NNF7DLqwV-F9fN",
					"type": "arrow"
				}
			],
			"updated": 1707109604134,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1628,
			"versionNonce": 1164192469,
			"isDeleted": false,
			"id": "8_NDn6pPYmy5-5uquPh-U",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2705.014999936101,
			"y": 56.50116712425756,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2089600501,
			"groupIds": [
				"YE38ErntT5icrJGbDqnZx"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "gRZ-dGhsc8SJ5mO9u1A9V",
					"type": "arrow"
				},
				{
					"id": "CIKaRa0Mr9qIVfuI9Vxoc",
					"type": "arrow"
				}
			],
			"updated": 1707109608572,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1515,
			"versionNonce": 761522171,
			"isDeleted": false,
			"id": "wmoQd_NaFEzG_0P24n7Ll",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2774.7502878664627,
			"y": 58.25557088249161,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 592068437,
			"groupIds": [
				"Vso75o4x-jKVMYObsde9q"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "vZVZ5uUz0ZDXcAHJ5APhA",
					"type": "arrow"
				},
				{
					"id": "Lc9MwS0XxMg5FJwPnCWad",
					"type": "arrow"
				}
			],
			"updated": 1707109613980,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1548,
			"versionNonce": 249357205,
			"isDeleted": false,
			"id": "eu7iZDP3Qt3a15sWNoGKj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2846.7502878664627,
			"y": 57.25557088249161,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2060553397,
			"groupIds": [
				"Vso75o4x-jKVMYObsde9q"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "6jCkOuvp1Wm2cN6TCmS_s",
					"type": "arrow"
				},
				{
					"id": "4BWiwpfL1n6Rw6szBjhh7",
					"type": "arrow"
				}
			],
			"updated": 1707109617115,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1589,
			"versionNonce": 1836024603,
			"isDeleted": false,
			"id": "PiIEZTLQxUcN9BQ7ja0PW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2918.7502878664627,
			"y": 56.25557088249161,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1925721621,
			"groupIds": [
				"Vso75o4x-jKVMYObsde9q"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "iHEqqZj208vOOUF-ViE5L",
					"type": "arrow"
				},
				{
					"id": "ZLQSkaRa4X3h5PUKCAaAE",
					"type": "arrow"
				}
			],
			"updated": 1707109620698,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1642,
			"versionNonce": 1161450101,
			"isDeleted": false,
			"id": "tactxJ7ays9A56sC-iKFS",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2990.7502878664627,
			"y": 57.25557088249161,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1780720501,
			"groupIds": [
				"Vso75o4x-jKVMYObsde9q"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "UbPP4wPpb-u5dzo67YF9t",
					"type": "arrow"
				},
				{
					"id": "l99iIe6jg7UOBaqnu9ITr",
					"type": "arrow"
				}
			],
			"updated": 1707109625932,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1386,
			"versionNonce": 1148320635,
			"isDeleted": false,
			"id": "9ojcukk8_CVQbY65ppvi1",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2198.550588183059,
			"y": 59.09135426220956,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1160342741,
			"groupIds": [
				"Ee9IYoMR9xv2M0_-97pSp"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "BkDe14JiI012yREcLa9ST",
					"type": "arrow"
				},
				{
					"id": "PkfyYYkXQ5UHnZHFPKY84",
					"type": "arrow"
				}
			],
			"updated": 1707109565883,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1419,
			"versionNonce": 1884933557,
			"isDeleted": false,
			"id": "yAW2zn42iNW92LmFQJbju",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2270.550588183059,
			"y": 58.09135426220956,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1131350581,
			"groupIds": [
				"Ee9IYoMR9xv2M0_-97pSp"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "5_rArNyuxWALMGnXxaLd9",
					"type": "arrow"
				},
				{
					"id": "Ku8Mw3O3xh_CkbOFj9o8b",
					"type": "arrow"
				}
			],
			"updated": 1707109565883,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1461,
			"versionNonce": 893047835,
			"isDeleted": false,
			"id": "9_oT7LO4JXLANjJOn3CgL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2342.5505881830595,
			"y": 57.09135426220956,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 366607253,
			"groupIds": [
				"Ee9IYoMR9xv2M0_-97pSp"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "E90nTepUtM_IYSadBvuXM",
					"type": "arrow"
				},
				{
					"id": "_XQue-4PtJmGSkaz-oiqR",
					"type": "arrow"
				}
			],
			"updated": 1707109565883,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1513,
			"versionNonce": 1872776981,
			"isDeleted": false,
			"id": "mSYzgqgh0OtmWOvga1TOX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2414.5505881830595,
			"y": 58.09135426220956,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 882884853,
			"groupIds": [
				"Ee9IYoMR9xv2M0_-97pSp"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "fRqfHwnoFqp6KJ1IKVor-",
					"type": "arrow"
				},
				{
					"id": "_XQue-4PtJmGSkaz-oiqR",
					"type": "arrow"
				}
			],
			"updated": 1707109565883,
			"link": null,
			"locked": false
		},
		{
			"id": "JW9xvPVz",
			"type": "text",
			"x": 2892.7075159843134,
			"y": -22.256398859019328,
			"width": 58.59375,
			"height": 24,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 2108126491,
			"version": 271,
			"versionNonce": 346003643,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1707109565883,
			"link": null,
			"locked": false,
			"text": "rk[0]",
			"rawText": "rk[0]",
			"fontSize": 20,
			"fontFamily": 3,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 19,
			"containerId": null,
			"originalText": "rk[0]",
			"lineHeight": 1.2
		},
		{
			"type": "text",
			"version": 494,
			"versionNonce": 961520757,
			"isDeleted": false,
			"id": "U20mtaQi",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2605.2529621734802,
			"y": -20.292394918773084,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 58.59375,
			"height": 24,
			"seed": 184542549,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565883,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "rk[1]",
			"rawText": "rk[1]",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "rk[1]",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "text",
			"version": 611,
			"versionNonce": 4376923,
			"isDeleted": false,
			"id": "nUiBFIEv",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2316.595641984151,
			"y": -20.292394918773084,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 58.59375,
			"height": 24,
			"seed": 1249218811,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565883,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "rk[2]",
			"rawText": "rk[2]",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "rk[2]",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "text",
			"version": 625,
			"versionNonce": 825052629,
			"isDeleted": false,
			"id": "fMUpw44x",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2027.938321794822,
			"y": -20.292394918773084,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 58.59375,
			"height": 24,
			"seed": 29958139,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565883,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "rk[3]",
			"rawText": "rk[3]",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "rk[3]",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1435,
			"versionNonce": 1031202299,
			"isDeleted": false,
			"id": "KtSbW9Txes0U092nD7ZOO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1908.3378000012503,
			"y": 59.380407299637795,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1383857685,
			"groupIds": [
				"34MB2dmwiyPdM24CvQ0a7"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "PfgenV-bJX_cPND-Bvy3W",
					"type": "arrow"
				},
				{
					"id": "APAg-6aUEzQC_uNTJwEsR",
					"type": "arrow"
				}
			],
			"updated": 1707109565883,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1468,
			"versionNonce": 642698037,
			"isDeleted": false,
			"id": "jfN0f21WNSfGwYa3UKg8j",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1980.3378000012503,
			"y": 58.380407299637795,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1121809269,
			"groupIds": [
				"34MB2dmwiyPdM24CvQ0a7"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "st8hLo24HRmhS6jxJiSuH",
					"type": "arrow"
				},
				{
					"id": "d2t5JlUdEpQaBxfC5zy4a",
					"type": "arrow"
				}
			],
			"updated": 1707109565883,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1509,
			"versionNonce": 1128165019,
			"isDeleted": false,
			"id": "iPWD4fj81K-1uXRMLCZuA",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2052.3378000012503,
			"y": 57.380407299637795,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 103365845,
			"groupIds": [
				"34MB2dmwiyPdM24CvQ0a7"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "IaYsTzVb6xGO09S9yEoXD",
					"type": "arrow"
				},
				{
					"id": "SLtD9L8ApfwYVtichiAM_",
					"type": "arrow"
				}
			],
			"updated": 1707109565883,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1562,
			"versionNonce": 1763286165,
			"isDeleted": false,
			"id": "Tjg62ePn2h1Ir43u9Gs6p",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2124.3378000012503,
			"y": 58.380407299637795,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1945426485,
			"groupIds": [
				"34MB2dmwiyPdM24CvQ0a7"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "REa8Czv9D583B85-7J1yi",
					"type": "arrow"
				},
				{
					"id": "TD3stdNiWaX-60Mcb4brs",
					"type": "arrow"
				}
			],
			"updated": 1707109565883,
			"link": null,
			"locked": false
		},
		{
			"type": "arrow",
			"version": 232,
			"versionNonce": 72082235,
			"isDeleted": false,
			"id": "st8hLo24HRmhS6jxJiSuH",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2017.4363922711643,
			"y": -176.04042250049628,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 1.0892729063748448,
			"height": 230.925856151463,
			"seed": 825145339,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565883,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "ThyZ-znTcnoKJQ93NYVLp",
				"focus": 0.01917373471609609,
				"gap": 3.281035859814722
			},
			"endBinding": {
				"elementId": "jfN0f21WNSfGwYa3UKg8j",
				"focus": -0.012109584483608746,
				"gap": 3.4949736486710776
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					0,
					191.71203152196932
				],
				[
					-1.0892729063748448,
					230.925856151463
				]
			]
		},
		{
			"type": "arrow",
			"version": 226,
			"versionNonce": 558055925,
			"isDeleted": false,
			"id": "IaYsTzVb6xGO09S9yEoXD",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2090.417676998278,
			"y": -176.04042250049622,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 1.0892729063748448,
			"height": 230.925856151463,
			"seed": 1564048821,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565884,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "Jfk772oeqHWOOJVRc27Nm",
				"focus": -0.00850626963101717,
				"gap": 4.281035859814779
			},
			"endBinding": {
				"elementId": "iPWD4fj81K-1uXRMLCZuA",
				"focus": 0.01564817351515288,
				"gap": 2.494973648671021
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					0,
					191.71203152196932
				],
				[
					-1.0892729063748448,
					230.925856151463
				]
			]
		},
		{
			"type": "arrow",
			"version": 256,
			"versionNonce": 691060859,
			"isDeleted": false,
			"id": "REa8Czv9D583B85-7J1yi",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2160.131143006266,
			"y": -173.86187668774653,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 1.0892729063748448,
			"height": 230.925856151463,
			"seed": 297328117,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109842584,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "rLTLxRQKPfQBB1yfNVh7_",
				"gap": 5.459581672564468,
				"focus": 0.055992105906628516
			},
			"endBinding": {
				"elementId": "Tjg62ePn2h1Ir43u9Gs6p",
				"focus": -0.046350305795142654,
				"gap": 1.3164278359213313
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					0,
					191.71203152196932
				],
				[
					-1.0892729063748448,
					230.925856151463
				]
			]
		},
		{
			"type": "arrow",
			"version": 246,
			"versionNonce": 522326939,
			"isDeleted": false,
			"id": "BkDe14JiI012yREcLa9ST",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2237.469519358879,
			"y": -177.129695406871,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 1.0892729063748448,
			"height": 230.925856151463,
			"seed": 274987349,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109842585,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "xv62BETWL_fmAL-iVRxbP",
				"gap": 4.721555236144411,
				"focus": -0.07136296130314718
			},
			"endBinding": {
				"elementId": "9ojcukk8_CVQbY65ppvi1",
				"focus": 0.03658954877923552,
				"gap": 5.295193517617577
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					0,
					191.71203152196932
				],
				[
					-1.0892729063748448,
					230.925856151463
				]
			]
		},
		{
			"type": "arrow",
			"version": 224,
			"versionNonce": 1769115771,
			"isDeleted": false,
			"id": "5_rArNyuxWALMGnXxaLd9",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2307.1829853668673,
			"y": -178.21896831324585,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 1.0892729063748448,
			"height": 230.925856151463,
			"seed": 735096379,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565884,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "PdYt6RKXw6L3zj4u5Y0pM",
				"focus": -0.0068645857655143154,
				"gap": 4.632282329769566
			},
			"endBinding": {
				"elementId": "yAW2zn42iNW92LmFQJbju",
				"focus": -0.02637770118647239,
				"gap": 5.384466423992421
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					0,
					191.71203152196932
				],
				[
					-1.0892729063748448,
					230.925856151463
				]
			]
		},
		{
			"type": "arrow",
			"version": 239,
			"versionNonce": 152635573,
			"isDeleted": false,
			"id": "E90nTepUtM_IYSadBvuXM",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2379.074997187606,
			"y": -179.3082412196207,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 1.0892729063748448,
			"height": 230.925856151463,
			"seed": 52792507,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565884,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "1ndjAyiLORhDwnOq0CKfT",
				"focus": -0.003818463484391699,
				"gap": 4.543009423394722
			},
			"endBinding": {
				"elementId": "9_oT7LO4JXLANjJOn3CgL",
				"focus": -0.02941650552427375,
				"gap": 5.473739330367266
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					0,
					191.71203152196932
				],
				[
					-1.0892729063748448,
					230.925856151463
				]
			]
		},
		{
			"type": "arrow",
			"version": 254,
			"versionNonce": 1316153403,
			"isDeleted": false,
			"id": "fRqfHwnoFqp6KJ1IKVor-",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2449.87773610197,
			"y": -179.3082412196207,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 1.0892729063748448,
			"height": 230.925856151463,
			"seed": 557943445,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109842585,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "8PgmTz12i6ZK6jY5mExuY",
				"gap": 3.5430094233947216,
				"focus": 0.02995378542497321
			},
			"endBinding": {
				"elementId": "mSYzgqgh0OtmWOvga1TOX",
				"focus": -0.06311544106581655,
				"gap": 6.473739330367266
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					0,
					191.71203152196932
				],
				[
					-1.0892729063748448,
					230.925856151463
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1238,
			"versionNonce": 1119889941,
			"isDeleted": false,
			"id": "ilrBFICnsslRd8wsXqGOP",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1907.548534614041,
			"y": -99.6805165049351,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1019454549,
			"groupIds": [
				"9fSdDkpJwiotL-WG_6078",
				"RbyKQuaIcNDN4Bk8ppZUv"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565884,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1267,
			"versionNonce": 1748954555,
			"isDeleted": false,
			"id": "IISuV-p2Zjvk8l2eRPgbk",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1979.548534614041,
			"y": -100.6805165049351,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1238782389,
			"groupIds": [
				"9fSdDkpJwiotL-WG_6078",
				"RbyKQuaIcNDN4Bk8ppZUv"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565884,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1308,
			"versionNonce": 1908154229,
			"isDeleted": false,
			"id": "K8pldMyN3sCb0EPYLfpKv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2051.5485346140413,
			"y": -101.6805165049351,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1860981525,
			"groupIds": [
				"9fSdDkpJwiotL-WG_6078",
				"RbyKQuaIcNDN4Bk8ppZUv"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565884,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1361,
			"versionNonce": 791641691,
			"isDeleted": false,
			"id": "e73hxprLPGLDTWeG3dvx0",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2123.5485346140413,
			"y": -100.6805165049351,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2021337205,
			"groupIds": [
				"9fSdDkpJwiotL-WG_6078",
				"RbyKQuaIcNDN4Bk8ppZUv"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565884,
			"link": null,
			"locked": false
		},
		{
			"id": "jg1_BBQ5vGH1mIYxWiK7o",
			"type": "rectangle",
			"x": 1906.5994713701473,
			"y": -102.57140735348167,
			"width": 287.5,
			"height": 67.5,
			"angle": 0,
			"strokeColor": "#c2255c",
			"backgroundColor": "#b2f2bb",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"groupIds": [
				"RbyKQuaIcNDN4Bk8ppZUv"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"seed": 444177019,
			"version": 201,
			"versionNonce": 1012033749,
			"isDeleted": false,
			"boundElements": [],
			"updated": 1707109565884,
			"link": null,
			"locked": false
		},
		{
			"type": "arrow",
			"version": 244,
			"versionNonce": 2144925979,
			"isDeleted": false,
			"id": "-PbXMliMe-TPSeXMghbc2",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2525.037566641832,
			"y": -179.30824121962075,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 1.0892729063748448,
			"height": 230.925856151463,
			"seed": 1522456059,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109842584,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "7Xz0hBtAit50qBGnjl5nH",
				"gap": 5.18981456825793,
				"focus": -0.0193550852692268
			},
			"endBinding": {
				"elementId": "ylqQKbZSxWbcsg7os7Rf9",
				"focus": -0.04353456336921555,
				"gap": 5.883552192415323
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					0,
					191.71203152196932
				],
				[
					-1.0892729063748448,
					230.925856151463
				]
			]
		},
		{
			"type": "arrow",
			"version": 248,
			"versionNonce": 1679328821,
			"isDeleted": false,
			"id": "NIJziJ4cSaVhtNs1UBBCW",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2593.6617597434474,
			"y": -181.4867870323704,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 1.0892729063748448,
			"height": 230.925856151463,
			"seed": 1770980533,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565884,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "yKtX9oSBvixXZ8gRn4sBM",
				"focus": 0.07586941689659703,
				"gap": 4.011268755508297
			},
			"endBinding": {
				"elementId": "vyRaQRAFbYVhHqLAFQeCP",
				"focus": -0.13729837567143005,
				"gap": 7.062098005164955
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					0,
					191.71203152196932
				],
				[
					-1.0892729063748448,
					230.925856151463
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1312,
			"versionNonce": 1816257435,
			"isDeleted": false,
			"id": "t_rGGdMS5HWp83orJEYqg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2197.469651812525,
			"y": -99.20799160681352,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1962157115,
			"groupIds": [
				"Q1dgv3BcVT3QChqUkhbPS",
				"DRBn6CgD4PaymoEcL--0j"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565884,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1341,
			"versionNonce": 1542715285,
			"isDeleted": false,
			"id": "ajIfXwhcb-eEAjXC3Vdcn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2269.469651812525,
			"y": -100.20799160681352,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 217703643,
			"groupIds": [
				"Q1dgv3BcVT3QChqUkhbPS",
				"DRBn6CgD4PaymoEcL--0j"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565884,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1382,
			"versionNonce": 119060539,
			"isDeleted": false,
			"id": "uo1MhydF0BWtrwzb_LKNZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2341.469651812525,
			"y": -101.20799160681352,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1807651195,
			"groupIds": [
				"Q1dgv3BcVT3QChqUkhbPS",
				"DRBn6CgD4PaymoEcL--0j"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565884,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1435,
			"versionNonce": 505036021,
			"isDeleted": false,
			"id": "6I_fDsYNC_pI5E341hXC6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2413.469651812525,
			"y": -100.20799160681352,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 847555099,
			"groupIds": [
				"Q1dgv3BcVT3QChqUkhbPS",
				"DRBn6CgD4PaymoEcL--0j"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565884,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 275,
			"versionNonce": 359397595,
			"isDeleted": false,
			"id": "jpJkpu2mEHesnN-jnGJ9m",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2196.5205885686314,
			"y": -102.0988824553601,
			"strokeColor": "#c2255c",
			"backgroundColor": "#b2f2bb",
			"width": 287.5,
			"height": 67.5,
			"seed": 910077627,
			"groupIds": [
				"DRBn6CgD4PaymoEcL--0j"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565884,
			"link": null,
			"locked": false
		},
		{
			"type": "arrow",
			"version": 262,
			"versionNonce": 1108399701,
			"isDeleted": false,
			"id": "Xgo0fm81UhSeYrmxv9NYv",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2667.732317376935,
			"y": -181.48678703237033,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 1.0892729063748448,
			"height": 230.925856151463,
			"seed": 978120853,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565884,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "WHSYdVDqehpCLB72WyuOQ",
				"focus": 0.01746328592126072,
				"gap": 5.011268755508354
			},
			"endBinding": {
				"elementId": "YCX1k0qZV7W3tAFir_eWC",
				"focus": -0.07957639485874018,
				"gap": 6.0620980051648985
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					0,
					191.71203152196932
				],
				[
					-1.0892729063748448,
					230.925856151463
				]
			]
		},
		{
			"type": "arrow",
			"version": 269,
			"versionNonce": 305208763,
			"isDeleted": false,
			"id": "gRZ-dGhsc8SJ5mO9u1A9V",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2738.535056291298,
			"y": -178.21896831324585,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 1.0892729063748448,
			"height": 230.925856151463,
			"seed": 1863511989,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109842584,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "Rmv4cP90TV6b0siAGG43t",
				"gap": 7.279087474632831,
				"focus": 0.05123553483065128
			},
			"endBinding": {
				"elementId": "8_NDn6pPYmy5-5uquPh-U",
				"focus": -0.1107783118324791,
				"gap": 3.794279286040421
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					0,
					191.71203152196932
				],
				[
					-1.0892729063748448,
					230.925856151463
				]
			]
		},
		{
			"type": "arrow",
			"version": 271,
			"versionNonce": 995864155,
			"isDeleted": false,
			"id": "vZVZ5uUz0ZDXcAHJ5APhA",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2810.427068112038,
			"y": -178.21896831324585,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 1.0892729063748448,
			"height": 230.925856151463,
			"seed": 1116679701,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109842584,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "S6GEpG8Q28BTztU9duO97",
				"gap": 6.5733288673822585,
				"focus": -0.009601167312640846
			},
			"endBinding": {
				"elementId": "wmoQd_NaFEzG_0P24n7Ll",
				"focus": -0.0527907356766812,
				"gap": 5.548683044274469
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					0,
					191.71203152196932
				],
				[
					-1.0892729063748448,
					230.925856151463
				]
			]
		},
		{
			"type": "arrow",
			"version": 244,
			"versionNonce": 1820442139,
			"isDeleted": false,
			"id": "6jCkOuvp1Wm2cN6TCmS_s",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2883.4083528391507,
			"y": -176.04042250049622,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 1.0892729063748448,
			"height": 230.925856151463,
			"seed": 350357013,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565884,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "l8NKOU6BGmwNAl1iyPwMF",
				"focus": -0.037281171659734866,
				"gap": 9.751874680131891
			},
			"endBinding": {
				"elementId": "eu7iZDP3Qt3a15sWNoGKj",
				"focus": -0.023368298632719133,
				"gap": 2.3701372315248364
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					0,
					191.71203152196932
				],
				[
					-1.0892729063748448,
					230.925856151463
				]
			]
		},
		{
			"type": "arrow",
			"version": 267,
			"versionNonce": 1679099157,
			"isDeleted": false,
			"id": "iHEqqZj208vOOUF-ViE5L",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2958.568183379014,
			"y": -178.21896831324585,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 1.0892729063748448,
			"height": 230.925856151463,
			"seed": 918673525,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109565884,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "Ke7QY6UiWVvgGfu10zlkG",
				"focus": -0.12641342926333912,
				"gap": 8.573328867382259
			},
			"endBinding": {
				"elementId": "PiIEZTLQxUcN9BQ7ja0PW",
				"focus": 0.06265322594872348,
				"gap": 3.548683044274469
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					0,
					191.71203152196932
				],
				[
					-1.0892729063748448,
					230.925856151463
				]
			]
		},
		{
			"type": "arrow",
			"version": 274,
			"versionNonce": 1311451899,
			"isDeleted": false,
			"id": "UbPP4wPpb-u5dzo67YF9t",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 3023.924557761504,
			"y": -179.3082412196207,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 1.0892729063748448,
			"height": 230.925856151463,
			"seed": 1816413179,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707109842584,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "ypGFwgai7Pb_4746MXLBu",
				"gap": 6.484055961007414,
				"focus": 0.06098945278723724
			},
			"endBinding": {
				"elementId": "tactxJ7ays9A56sC-iKFS",
				"focus": -0.12169916318516413,
				"gap": 5.637955950649314
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					0,
					191.71203152196932
				],
				[
					-1.0892729063748448,
					230.925856151463
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1379,
			"versionNonce": 1774033525,
			"isDeleted": false,
			"id": "MOHuJ7ZaEInybsbGJ86X_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2485.03769909548,
			"y": -100.29726451318831,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2031405717,
			"groupIds": [
				"8RKpacThXHB7QwgMpsmLY",
				"GhUo8FPhSqtjNv0iH7fnz"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565884,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1408,
			"versionNonce": 1314337627,
			"isDeleted": false,
			"id": "QJ7J70DgWNCEyfMxPL6qn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2557.03769909548,
			"y": -101.29726451318831,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 631812085,
			"groupIds": [
				"8RKpacThXHB7QwgMpsmLY",
				"GhUo8FPhSqtjNv0iH7fnz"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565884,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1449,
			"versionNonce": 1282180053,
			"isDeleted": false,
			"id": "MZy1E-MQV3lNItfQFDsA6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2629.03769909548,
			"y": -102.29726451318831,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1431890261,
			"groupIds": [
				"8RKpacThXHB7QwgMpsmLY",
				"GhUo8FPhSqtjNv0iH7fnz"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565884,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1502,
			"versionNonce": 1634603003,
			"isDeleted": false,
			"id": "18uu7zPsZ3vPY285R6xli",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2701.03769909548,
			"y": -101.29726451318831,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 159053493,
			"groupIds": [
				"8RKpacThXHB7QwgMpsmLY",
				"GhUo8FPhSqtjNv0iH7fnz"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565884,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 342,
			"versionNonce": 1077362997,
			"isDeleted": false,
			"id": "u4yOPQURya7LkrcRwR4OV",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2484.0886358515863,
			"y": -103.18815536173489,
			"strokeColor": "#c2255c",
			"backgroundColor": "#b2f2bb",
			"width": 287.5,
			"height": 67.5,
			"seed": 2092193813,
			"groupIds": [
				"GhUo8FPhSqtjNv0iH7fnz"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565884,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1548,
			"versionNonce": 1925208219,
			"isDeleted": false,
			"id": "pIMWRxD3Ya7twBwWlofOq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2773.695019284807,
			"y": -102.47581032593794,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 893475899,
			"groupIds": [
				"n6UYIShwHnNZI2STacNqi",
				"QNacc3GfobwzluP12c4Yd"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565884,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1577,
			"versionNonce": 1518555797,
			"isDeleted": false,
			"id": "U_UJwZnHEm_Ek410Kp0iN",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2845.695019284807,
			"y": -103.47581032593794,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1054874843,
			"groupIds": [
				"n6UYIShwHnNZI2STacNqi",
				"QNacc3GfobwzluP12c4Yd"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565884,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1618,
			"versionNonce": 36155,
			"isDeleted": false,
			"id": "gOSIZCW_TNN3IUO07pXtT",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2917.695019284807,
			"y": -104.47581032593794,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1948109179,
			"groupIds": [
				"n6UYIShwHnNZI2STacNqi",
				"QNacc3GfobwzluP12c4Yd"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565884,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1671,
			"versionNonce": 1745238005,
			"isDeleted": false,
			"id": "ZeTp0Ml0PyWE6E9ltjnBT",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2989.695019284807,
			"y": -103.47581032593794,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1513939483,
			"groupIds": [
				"n6UYIShwHnNZI2STacNqi",
				"QNacc3GfobwzluP12c4Yd"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565884,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 511,
			"versionNonce": 747711963,
			"isDeleted": false,
			"id": "Q8d5Z30QA5NELRdYWOX6t",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2772.7459560409134,
			"y": -105.36670117448452,
			"strokeColor": "#c2255c",
			"backgroundColor": "#b2f2bb",
			"width": 287.5,
			"height": 67.5,
			"seed": 707782331,
			"groupIds": [
				"QNacc3GfobwzluP12c4Yd"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109565884,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 68,
			"versionNonce": 46494037,
			"isDeleted": false,
			"id": "LDypkBqW",
			"fillStyle": "cross-hatch",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1773.5749656433593,
			"y": 61.606529216712374,
			"strokeColor": "#6741d9",
			"backgroundColor": "#96f2d7",
			"width": 105.46875,
			"height": 43.2,
			"seed": 1893515957,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565884,
			"link": null,
			"locked": false,
			"fontSize": 36,
			"fontFamily": 1,
			"text": "state",
			"rawText": "state",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "state",
			"lineHeight": 1.25,
			"baseline": 34
		},
		{
			"id": "R49EeUX5",
			"type": "text",
			"x": 1784.916970201116,
			"y": -185.84387865786965,
			"width": 82.03125,
			"height": 24,
			"angle": 0,
			"strokeColor": "#1971c2",
			"backgroundColor": "#b2f2bb",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 1573183061,
			"version": 58,
			"versionNonce": 193247867,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1707109565884,
			"link": null,
			"locked": false,
			"text": "u8 x 16",
			"rawText": "u8 x 16",
			"fontSize": 20,
			"fontFamily": 3,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 19,
			"containerId": null,
			"originalText": "u8 x 16",
			"lineHeight": 1.2
		},
		{
			"type": "text",
			"version": 224,
			"versionNonce": 1746304693,
			"isDeleted": false,
			"id": "zEUZfm6P",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1663.295150129379,
			"y": -36.63148851439536,
			"strokeColor": "#1971c2",
			"backgroundColor": "#b2f2bb",
			"width": 234.375,
			"height": 48,
			"seed": 1269254357,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565884,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SIZE: u32 x 4\nMAP: (u8, u32) -> u8",
			"rawText": "SIZE: u32 x 4\nMAP: (u8, u32) -> u8",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "SIZE: u32 x 4\nMAP: (u8, u32) -> u8",
			"lineHeight": 1.2,
			"baseline": 43
		},
		{
			"type": "rectangle",
			"version": 1073,
			"versionNonce": 535832059,
			"isDeleted": false,
			"id": "lwgCTA_hOWW_rffQoyOgW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1909.8831288080678,
			"y": 301.54379508500017,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 375049877,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "APAg-6aUEzQC_uNTJwEsR",
					"type": "arrow"
				},
				{
					"id": "rM7b-PHmUXGspoJZNsZ6K",
					"type": "arrow"
				}
			],
			"updated": 1707110009311,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1119,
			"versionNonce": 560767547,
			"isDeleted": false,
			"id": "kuQUdze6q6ds4Gi66GSBa",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1981.8831288080678,
			"y": 299.4545221786252,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 864957429,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "d2t5JlUdEpQaBxfC5zy4a",
					"type": "arrow"
				},
				{
					"id": "TX5JFUcCvrytQYzxHyxyW",
					"type": "arrow"
				}
			],
			"updated": 1707110021217,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1157,
			"versionNonce": 1930617845,
			"isDeleted": false,
			"id": "g5Ejhjt2hUe2pu0pit1yE",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2054.972401714443,
			"y": 298.4545221786253,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 334359893,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "SLtD9L8ApfwYVtichiAM_",
					"type": "arrow"
				},
				{
					"id": "ta8M0nH4d2Xl58wWd1wzZ",
					"type": "arrow"
				}
			],
			"updated": 1707110025683,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1192,
			"versionNonce": 2044975797,
			"isDeleted": false,
			"id": "gFEFZLVESCnombzEB81qC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2129.1509475271923,
			"y": 302.72234089774975,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 919567029,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "TD3stdNiWaX-60Mcb4brs",
					"type": "arrow"
				},
				{
					"id": "_KI5e2f6CC120401Cq2V1",
					"type": "arrow"
				}
			],
			"updated": 1707110032567,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1200,
			"versionNonce": 882663131,
			"isDeleted": false,
			"id": "i6-_SKLw2B11zP3fzzLT6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2488.1184167384313,
			"y": 304.1220086638226,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 349723669,
			"groupIds": [
				"FUE0OxYfRoKWCbYyBdMro"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "dMW9689a_MWU6mKVtAhtW",
					"type": "arrow"
				},
				{
					"id": "M-8knwDMJq3uJHWYvtCau",
					"type": "arrow"
				}
			],
			"updated": 1707110045127,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1233,
			"versionNonce": 640709301,
			"isDeleted": false,
			"id": "nFCNMfTr4ox_hgAJAuw8H",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2560.1184167384313,
			"y": 303.1220086638226,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1979584885,
			"groupIds": [
				"FUE0OxYfRoKWCbYyBdMro"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "YjLXAhqlBdBs0o5S8ukK0",
					"type": "arrow"
				},
				{
					"id": "Ww7qgOwrSYXpj9kB_Vi2L",
					"type": "arrow"
				}
			],
			"updated": 1707110048363,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1273,
			"versionNonce": 53044469,
			"isDeleted": false,
			"id": "k2enzvSst-DtXNsJg2clU",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2632.1184167384313,
			"y": 302.1220086638226,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 126229205,
			"groupIds": [
				"FUE0OxYfRoKWCbYyBdMro"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "Y-Aggf8NNF7DLqwV-F9fN",
					"type": "arrow"
				}
			],
			"updated": 1707109791648,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1326,
			"versionNonce": 709054683,
			"isDeleted": false,
			"id": "TQ7iuLaK-zD-gzrRRgpiN",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2704.1184167384313,
			"y": 303.1220086638226,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 839252021,
			"groupIds": [
				"FUE0OxYfRoKWCbYyBdMro"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "CIKaRa0Mr9qIVfuI9Vxoc",
					"type": "arrow"
				}
			],
			"updated": 1707109791648,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1200,
			"versionNonce": 718470875,
			"isDeleted": false,
			"id": "inJCTHepVA9Xgif54GFMJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2777.121523387917,
			"y": 304.87641242205643,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 795027861,
			"groupIds": [
				"rJFBdM2LmYfz18nAiF50f"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "Lc9MwS0XxMg5FJwPnCWad",
					"type": "arrow"
				},
				{
					"id": "HD4wm_N4WQpA_9PvXujKa",
					"type": "arrow"
				}
			],
			"updated": 1707110051892,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1232,
			"versionNonce": 1962573179,
			"isDeleted": false,
			"id": "OZcR4JtVy8jqPeTGqRavn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2849.121523387917,
			"y": 303.87641242205643,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1624452853,
			"groupIds": [
				"rJFBdM2LmYfz18nAiF50f"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "4BWiwpfL1n6Rw6szBjhh7",
					"type": "arrow"
				}
			],
			"updated": 1707109791648,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1274,
			"versionNonce": 212524699,
			"isDeleted": false,
			"id": "Q7F31amvWVnqkBavbeC38",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2921.121523387917,
			"y": 302.87641242205643,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1692108885,
			"groupIds": [
				"rJFBdM2LmYfz18nAiF50f"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "ZLQSkaRa4X3h5PUKCAaAE",
					"type": "arrow"
				},
				{
					"id": "i-gTP2jjvqq7MayuaC_CQ",
					"type": "arrow"
				}
			],
			"updated": 1707110051893,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1326,
			"versionNonce": 90379803,
			"isDeleted": false,
			"id": "_6gymtyM73YQm3T2e2gVp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2993.121523387917,
			"y": 303.87641242205643,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1834071477,
			"groupIds": [
				"rJFBdM2LmYfz18nAiF50f"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "l99iIe6jg7UOBaqnu9ITr",
					"type": "arrow"
				}
			],
			"updated": 1707109791648,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1216,
			"versionNonce": 1184181525,
			"isDeleted": false,
			"id": "MdFnWJIt2P5f5VVYPEioL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2200.885182377087,
			"y": 305.63891314691955,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1432041237,
			"groupIds": [
				"2pEJuo-DP-TGhoBliu271"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "PkfyYYkXQ5UHnZHFPKY84",
					"type": "arrow"
				}
			],
			"updated": 1707109791648,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1249,
			"versionNonce": 2054134459,
			"isDeleted": false,
			"id": "odVVSTzBgi42Ld4cdJqYt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2272.885182377087,
			"y": 304.63891314691955,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2003668085,
			"groupIds": [
				"2pEJuo-DP-TGhoBliu271"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "Ku8Mw3O3xh_CkbOFj9o8b",
					"type": "arrow"
				}
			],
			"updated": 1707109791648,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1291,
			"versionNonce": 561523163,
			"isDeleted": false,
			"id": "DUVtZJYXyfnzMAMKgQdve",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2344.885182377087,
			"y": 303.63891314691955,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1129199061,
			"groupIds": [
				"2pEJuo-DP-TGhoBliu271"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "_XQue-4PtJmGSkaz-oiqR",
					"type": "arrow"
				},
				{
					"id": "cNDaSFrECiG_8PW0HVbT2",
					"type": "arrow"
				}
			],
			"updated": 1707110045127,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1346,
			"versionNonce": 776135771,
			"isDeleted": false,
			"id": "ZRO0TCcXiFwD3J0HWJpIU",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2416.885182377087,
			"y": 304.63891314691955,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 336769845,
			"groupIds": [
				"2pEJuo-DP-TGhoBliu271"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "GDApfi_eUsgeBe7zRPBmC",
					"type": "arrow"
				},
				{
					"id": "X8OjjvEqiERvCGFRrcUzS",
					"type": "arrow"
				}
			],
			"updated": 1707110045127,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1382,
			"versionNonce": 1135912987,
			"isDeleted": false,
			"id": "e0JTia45gCTYAwDuy0oBh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1919.39251133389,
			"y": 186.9146102518672,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 44.75951477040047,
			"height": 45.29515220864977,
			"seed": 1743211637,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"type": "text",
					"id": "okvvyhCg"
				}
			],
			"updated": 1707109565884,
			"link": null,
			"locked": false
		},
		{
			"id": "okvvyhCg",
			"type": "text",
			"x": 1935.9128937190903,
			"y": 197.5621863561921,
			"width": 11.71875,
			"height": 24,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 232198837,
			"version": 287,
			"versionNonce": 2103294741,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1707109565884,
			"link": null,
			"locked": false,
			"text": "s",
			"rawText": "s",
			"fontSize": 20,
			"fontFamily": 3,
			"textAlign": "center",
			"verticalAlign": "middle",
			"baseline": 19,
			"containerId": "e0JTia45gCTYAwDuy0oBh",
			"originalText": "s",
			"lineHeight": 1.2
		},
		{
			"type": "arrow",
			"version": 148,
			"versionNonce": 1556016315,
			"isDeleted": false,
			"id": "d2t5JlUdEpQaBxfC5zy4a",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2018.0213721653295,
			"y": 124.05426320576834,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 1.0892729063748448,
			"height": 175.37293792634694,
			"seed": 1349071701,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565884,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "jfN0f21WNSfGwYa3UKg8j",
				"focus": -0.05683140767738596,
				"gap": 1
			},
			"endBinding": {
				"elementId": "kuQUdze6q6ds4Gi66GSBa",
				"focus": 0.05548580967060637,
				"gap": 1
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.0892729063748448,
					175.37293792634694
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1412,
			"versionNonce": 75468917,
			"isDeleted": false,
			"id": "dceKS62NporFmYr00dWOK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1994.5523418737534,
			"y": 186.36997379867984,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 44.75951477040047,
			"height": 45.29515220864977,
			"seed": 267518133,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"type": "text",
					"id": "b9XmUWqy"
				}
			],
			"updated": 1707109565884,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 317,
			"versionNonce": 827825499,
			"isDeleted": false,
			"id": "b9XmUWqy",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2011.0727242589537,
			"y": 197.01754990300472,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 11.71875,
			"height": 24,
			"seed": 1941578261,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565885,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "s",
			"rawText": "s",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "dceKS62NporFmYr00dWOK",
			"originalText": "s",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "arrow",
			"version": 136,
			"versionNonce": 1736423893,
			"isDeleted": false,
			"id": "SLtD9L8ApfwYVtichiAM_",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2088.824111079693,
			"y": 122.96499029939349,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 1.0892729063748448,
			"height": 175.37293792634694,
			"seed": 1982337237,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565885,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "iPWD4fj81K-1uXRMLCZuA",
				"focus": -0.023265640190356915,
				"gap": 1
			},
			"endBinding": {
				"elementId": "g5Ejhjt2hUe2pu0pit1yE",
				"focus": -0.008632376631308348,
				"gap": 1
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.0892729063748448,
					175.37293792634694
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1400,
			"versionNonce": 483473915,
			"isDeleted": false,
			"id": "Xbj1xuiZI0qt9YIOxSVU5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2065.3550807881174,
			"y": 185.280700892305,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 44.75951477040047,
			"height": 45.29515220864977,
			"seed": 620310069,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"type": "text",
					"id": "pglTQxtk"
				}
			],
			"updated": 1707109565885,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 305,
			"versionNonce": 1064548149,
			"isDeleted": false,
			"id": "pglTQxtk",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2081.8754631733177,
			"y": 195.92827699662988,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 11.71875,
			"height": 24,
			"seed": 176136085,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565885,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "s",
			"rawText": "s",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "Xbj1xuiZI0qt9YIOxSVU5",
			"originalText": "s",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "arrow",
			"version": 165,
			"versionNonce": 1814971035,
			"isDeleted": false,
			"id": "TD3stdNiWaX-60Mcb4brs",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2161.8053958068067,
			"y": 127.32208192489287,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 1.0892729063748448,
			"height": 175.37293792634694,
			"seed": 1142280795,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565885,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "Tjg62ePn2h1Ir43u9Gs6p",
				"focus": -0.05020430542562717,
				"gap": 4.0396101018585
			},
			"endBinding": {
				"elementId": "gFEFZLVESCnombzEB81qC",
				"focus": -0.04222924929630158,
				"gap": 1
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.0892729063748448,
					175.37293792634694
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1429,
			"versionNonce": 1723926677,
			"isDeleted": false,
			"id": "apwj0kKDGs-MHnDOm0Zfm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2138.336365515231,
			"y": 189.63779251780437,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 44.75951477040047,
			"height": 45.29515220864977,
			"seed": 67161851,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"type": "text",
					"id": "RkNva8NE"
				}
			],
			"updated": 1707109565885,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 334,
			"versionNonce": 673265467,
			"isDeleted": false,
			"id": "RkNva8NE",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2154.8567479004314,
			"y": 200.28536862212925,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 11.71875,
			"height": 24,
			"seed": 1386428315,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565885,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "s",
			"rawText": "s",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "apwj0kKDGs-MHnDOm0Zfm",
			"originalText": "s",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "arrow",
			"version": 151,
			"versionNonce": 1827769755,
			"isDeleted": false,
			"id": "PkfyYYkXQ5UHnZHFPKY84",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2235.875953440295,
			"y": 127.32208192489287,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 1.0892729063748448,
			"height": 175.37293792634694,
			"seed": 1797737141,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109634868,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "9ojcukk8_CVQbY65ppvi1",
				"focus": -0.04633881562526016,
				"gap": 3.328663139286732
			},
			"endBinding": {
				"elementId": "MdFnWJIt2P5f5VVYPEioL",
				"focus": 0.023809095806108807,
				"gap": 2.943893295679743
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.0892729063748448,
					175.37293792634694
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1415,
			"versionNonce": 520919003,
			"isDeleted": false,
			"id": "Tlxc02fdBlhCP6tQJB5uX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2212.4069231487188,
			"y": 189.63779251780437,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 44.75951477040047,
			"height": 45.29515220864977,
			"seed": 230042645,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"type": "text",
					"id": "SFtuqNRS"
				}
			],
			"updated": 1707109565885,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 320,
			"versionNonce": 395159381,
			"isDeleted": false,
			"id": "SFtuqNRS",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2228.927305533919,
			"y": 200.28536862212925,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 11.71875,
			"height": 24,
			"seed": 849469813,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565885,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "s",
			"rawText": "s",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "Tlxc02fdBlhCP6tQJB5uX",
			"originalText": "s",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "arrow",
			"version": 141,
			"versionNonce": 2042176219,
			"isDeleted": false,
			"id": "Ku8Mw3O3xh_CkbOFj9o8b",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2306.678692354658,
			"y": 127.32208192489287,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 1.0892729063748448,
			"height": 175.37293792634694,
			"seed": 1156679323,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109634868,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "yAW2zn42iNW92LmFQJbju",
				"focus": -0.012583281561728464,
				"gap": 4.328663139286732
			},
			"endBinding": {
				"elementId": "odVVSTzBgi42Ld4cdJqYt",
				"focus": -0.00994643825742289,
				"gap": 1.943893295679743
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.0892729063748448,
					175.37293792634694
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1405,
			"versionNonce": 1650980021,
			"isDeleted": false,
			"id": "lD0DMEWYopQvM8qAquu8x",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2283.2096620630828,
			"y": 189.63779251780437,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 44.75951477040047,
			"height": 45.29515220864977,
			"seed": 266074939,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"type": "text",
					"id": "iB0WsqMu"
				}
			],
			"updated": 1707109565885,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 310,
			"versionNonce": 1338416411,
			"isDeleted": false,
			"id": "iB0WsqMu",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2299.730044448283,
			"y": 200.28536862212925,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 11.71875,
			"height": 24,
			"seed": 1255070683,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109565885,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "s",
			"rawText": "s",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "lD0DMEWYopQvM8qAquu8x",
			"originalText": "s",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "arrow",
			"version": 170,
			"versionNonce": 185362459,
			"isDeleted": false,
			"id": "_XQue-4PtJmGSkaz-oiqR",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2380.7492499881455,
			"y": 124.05426320576845,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 1.0892729063748448,
			"height": 175.37293792634694,
			"seed": 675295189,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109634868,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "9_oT7LO4JXLANjJOn3CgL",
				"focus": -0.07105430367227254,
				"gap": 2.0608444201623115
			},
			"endBinding": {
				"elementId": "DUVtZJYXyfnzMAMKgQdve",
				"focus": 0.04852458385313393,
				"gap": 4.211712014804164
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.0892729063748448,
					175.37293792634694
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1413,
			"versionNonce": 935728373,
			"isDeleted": false,
			"id": "RCDifRcHYGAtGQzePJYRe",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2357.2802196965695,
			"y": 186.36997379867995,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 44.75951477040047,
			"height": 45.29515220864977,
			"seed": 1018522933,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"type": "text",
					"id": "Jkk1Mius"
				}
			],
			"updated": 1707109576363,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 320,
			"versionNonce": 1753329237,
			"isDeleted": false,
			"id": "Jkk1Mius",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2373.8006020817697,
			"y": 197.01754990300483,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 11.71875,
			"height": 24,
			"seed": 2119958165,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109576363,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "s",
			"rawText": "s",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "RCDifRcHYGAtGQzePJYRe",
			"originalText": "s",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "arrow",
			"version": 141,
			"versionNonce": 1438604635,
			"isDeleted": false,
			"id": "GDApfi_eUsgeBe7zRPBmC",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2451.55198890251,
			"y": 122.96499029939349,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 1.0892729063748448,
			"height": 175.37293792634694,
			"seed": 1803728891,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109634868,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "ZRO0TCcXiFwD3J0HWJpIU",
				"focus": 0.015307244341120546,
				"gap": 6.300984921179122
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.0892729063748448,
					175.37293792634694
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1406,
			"versionNonce": 917213371,
			"isDeleted": false,
			"id": "7-YtTQ9BpKY4JNAORVFVY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2428.082958610935,
			"y": 185.280700892305,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 44.75951477040047,
			"height": 45.29515220864977,
			"seed": 603979931,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"type": "text",
					"id": "0kQJCyGy"
				}
			],
			"updated": 1707109580114,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 311,
			"versionNonce": 1846526299,
			"isDeleted": false,
			"id": "0kQJCyGy",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2444.603340996135,
			"y": 195.92827699662988,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 11.71875,
			"height": 24,
			"seed": 990590267,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109580114,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "s",
			"rawText": "s",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "7-YtTQ9BpKY4JNAORVFVY",
			"originalText": "s",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "arrow",
			"version": 164,
			"versionNonce": 1039764085,
			"isDeleted": false,
			"id": "dMW9689a_MWU6mKVtAhtW",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2524.533273629623,
			"y": 125.1435361121433,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 1.0892729063748448,
			"height": 175.37293792634694,
			"seed": 1745799669,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109640714,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "ylqQKbZSxWbcsg7os7Rf9",
				"focus": 0.004244805024325346,
				"gap": 2.7403044644891565
			},
			"endBinding": {
				"elementId": "i6-_SKLw2B11zP3fzzLT6",
				"focus": 0.06386776595159678,
				"gap": 3.605534625332382
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.0892729063748448,
					175.37293792634694
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1427,
			"versionNonce": 416306811,
			"isDeleted": false,
			"id": "BB-WwrZ_kHFrEgur5Y69S",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2501.064243338047,
			"y": 187.4592467050548,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 44.75951477040047,
			"height": 45.29515220864977,
			"seed": 1475068757,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"type": "text",
					"id": "qk0sXtl3"
				}
			],
			"updated": 1707109595954,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 332,
			"versionNonce": 1125502747,
			"isDeleted": false,
			"id": "qk0sXtl3",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2517.5846257232474,
			"y": 198.10682280937968,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 11.71875,
			"height": 24,
			"seed": 681742517,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109595954,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "s",
			"rawText": "s",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "BB-WwrZ_kHFrEgur5Y69S",
			"originalText": "s",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "arrow",
			"version": 155,
			"versionNonce": 1245131061,
			"isDeleted": false,
			"id": "YjLXAhqlBdBs0o5S8ukK0",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2598.6038312631113,
			"y": 125.14353611214318,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 1.0892729063748448,
			"height": 175.37293792634694,
			"seed": 48889403,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109640714,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "vyRaQRAFbYVhHqLAFQeCP",
				"focus": -0.05365691735677458,
				"gap": 3.740304464489043
			},
			"endBinding": {
				"elementId": "nFCNMfTr4ox_hgAJAuw8H",
				"focus": 0.12176948833269667,
				"gap": 2.6055346253324956
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.0892729063748448,
					175.37293792634694
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1419,
			"versionNonce": 933524315,
			"isDeleted": false,
			"id": "6x40o3bftO4b65NcWSuF2",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2575.134800971536,
			"y": 187.45924670505468,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 44.75951477040047,
			"height": 45.29515220864977,
			"seed": 1394900699,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"type": "text",
					"id": "nCHPDDa0"
				}
			],
			"updated": 1707109600685,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 324,
			"versionNonce": 789794811,
			"isDeleted": false,
			"id": "nCHPDDa0",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2591.6551833567364,
			"y": 198.10682280937957,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 11.71875,
			"height": 24,
			"seed": 92662651,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109600685,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "s",
			"rawText": "s",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "6x40o3bftO4b65NcWSuF2",
			"originalText": "s",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "arrow",
			"version": 139,
			"versionNonce": 113911797,
			"isDeleted": false,
			"id": "Y-Aggf8NNF7DLqwV-F9fN",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2669.406570177475,
			"y": 121.87571739301865,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 1.0892729063748448,
			"height": 175.37293792634694,
			"seed": 1068867605,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109640714,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "YCX1k0qZV7W3tAFir_eWC",
				"focus": -0.020470683022725332,
				"gap": 1.4724857453645086
			},
			"endBinding": {
				"elementId": "k2enzvSst-DtXNsJg2clU",
				"focus": 0.08858325399864744,
				"gap": 4.87335334445703
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.0892729063748448,
					175.37293792634694
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1403,
			"versionNonce": 1985459957,
			"isDeleted": false,
			"id": "Q--QHkdFF-_-w8VifbjSj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2645.937539885899,
			"y": 184.19142798593015,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 44.75951477040047,
			"height": 45.29515220864977,
			"seed": 1553126773,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"type": "text",
					"id": "07AQIfTZ"
				}
			],
			"updated": 1707109603649,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 308,
			"versionNonce": 1754206293,
			"isDeleted": false,
			"id": "07AQIfTZ",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2662.457922271099,
			"y": 194.83900409025503,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 11.71875,
			"height": 24,
			"seed": 1189240533,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109603649,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "s",
			"rawText": "s",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "Q--QHkdFF-_-w8VifbjSj",
			"originalText": "s",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "arrow",
			"version": 165,
			"versionNonce": 983461557,
			"isDeleted": false,
			"id": "CIKaRa0Mr9qIVfuI9Vxoc",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2740.209309091839,
			"y": 124.05426320576834,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 1.0892729063748448,
			"height": 175.37293792634694,
			"seed": 714800795,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109640714,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "8_NDn6pPYmy5-5uquPh-U",
				"focus": 0.013315956218770525,
				"gap": 2.651031558114198
			},
			"endBinding": {
				"elementId": "TQ7iuLaK-zD-gzrRRgpiN",
				"focus": 0.054796614757151585,
				"gap": 3.6948075317073403
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.0892729063748448,
					175.37293792634694
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1429,
			"versionNonce": 804580987,
			"isDeleted": false,
			"id": "ODWYLVSJqnczbAvblC_ky",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2716.740278800263,
			"y": 186.36997379867984,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 44.75951477040047,
			"height": 45.29515220864977,
			"seed": 1905685307,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"type": "text",
					"id": "mP4Qq5LR"
				}
			],
			"updated": 1707109607980,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 334,
			"versionNonce": 971466523,
			"isDeleted": false,
			"id": "mP4Qq5LR",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2733.260661185463,
			"y": 197.01754990300472,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 11.71875,
			"height": 24,
			"seed": 2121946075,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109607980,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "s",
			"rawText": "s",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "ODWYLVSJqnczbAvblC_ky",
			"originalText": "s",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "arrow",
			"version": 154,
			"versionNonce": 1960303995,
			"isDeleted": false,
			"id": "Lc9MwS0XxMg5FJwPnCWad",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2812.101320912577,
			"y": 128.4113548312676,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 1.0892729063748448,
			"height": 175.37293792634694,
			"seed": 212549365,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109643441,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "wmoQd_NaFEzG_0P24n7Ll",
				"focus": -0.04672338563747838,
				"gap": 5.2537194253794155
			},
			"endBinding": {
				"elementId": "inJCTHepVA9Xgif54GFMJ",
				"focus": 0.02317870016879436,
				"gap": 1.0921196644418956
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.0892729063748448,
					175.37293792634694
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1418,
			"versionNonce": 1085598645,
			"isDeleted": false,
			"id": "HEBF098E8Eled8fuk2kou",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2788.632290621001,
			"y": 190.7270654241791,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 44.75951477040047,
			"height": 45.29515220864977,
			"seed": 2066847829,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"type": "text",
					"id": "V78mwhHG"
				}
			],
			"updated": 1707109612662,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 323,
			"versionNonce": 48737557,
			"isDeleted": false,
			"id": "V78mwhHG",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2805.1526730062014,
			"y": 201.374641528504,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 11.71875,
			"height": 24,
			"seed": 1852163509,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109612662,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "s",
			"rawText": "s",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "HEBF098E8Eled8fuk2kou",
			"originalText": "s",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "arrow",
			"version": 133,
			"versionNonce": 1786051259,
			"isDeleted": false,
			"id": "4BWiwpfL1n6Rw6szBjhh7",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2881.8147869205663,
			"y": 124.05426320576834,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 1.0892729063748448,
			"height": 175.37293792634694,
			"seed": 2100692443,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109643441,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "eu7iZDP3Qt3a15sWNoGKj",
				"focus": 0.016825500934941184,
				"gap": 1.8966277998801502
			},
			"endBinding": {
				"elementId": "OZcR4JtVy8jqPeTGqRavn",
				"focus": -0.040370186403625205,
				"gap": 4.449211289941161
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.0892729063748448,
					175.37293792634694
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1397,
			"versionNonce": 1765065147,
			"isDeleted": false,
			"id": "j7raBNlOaDEppMuU5hq5J",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2858.3457566289903,
			"y": 186.36997379867984,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 44.75951477040047,
			"height": 45.29515220864977,
			"seed": 567186043,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"type": "text",
					"id": "V5UwHsUa"
				}
			],
			"updated": 1707109616460,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 302,
			"versionNonce": 977982043,
			"isDeleted": false,
			"id": "V5UwHsUa",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2874.8661390141906,
			"y": 197.01754990300472,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 11.71875,
			"height": 24,
			"seed": 149719835,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109616460,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "s",
			"rawText": "s",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "j7raBNlOaDEppMuU5hq5J",
			"originalText": "s",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "arrow",
			"version": 139,
			"versionNonce": 1121699835,
			"isDeleted": false,
			"id": "ZLQSkaRa4X3h5PUKCAaAE",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2952.6175258349294,
			"y": 124.05426320576845,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 1.0892729063748448,
			"height": 175.37293792634694,
			"seed": 1185787829,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109643441,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "PiIEZTLQxUcN9BQ7ja0PW",
				"focus": 0.05058103499847289,
				"gap": 2.896627799880264
			},
			"endBinding": {
				"elementId": "Q7F31amvWVnqkBavbeC38",
				"focus": -0.07412572046715693,
				"gap": 3.449211289941047
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.0892729063748448,
					175.37293792634694
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1403,
			"versionNonce": 143557269,
			"isDeleted": false,
			"id": "ljMpfVEEArAzUPXpdShSy",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2929.1484955433543,
			"y": 186.36997379867995,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 44.75951477040047,
			"height": 45.29515220864977,
			"seed": 1428680981,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"type": "text",
					"id": "EeGlCde0"
				}
			],
			"updated": 1707109619907,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 308,
			"versionNonce": 220948469,
			"isDeleted": false,
			"id": "EeGlCde0",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2945.6688779285546,
			"y": 197.01754990300483,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 11.71875,
			"height": 24,
			"seed": 294848117,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109619907,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "s",
			"rawText": "s",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "ljMpfVEEArAzUPXpdShSy",
			"originalText": "s",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "arrow",
			"version": 165,
			"versionNonce": 996164923,
			"isDeleted": false,
			"id": "l99iIe6jg7UOBaqnu9ITr",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 3026.688083468417,
			"y": 122.96499029939349,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 1.0892729063748448,
			"height": 175.37293792634694,
			"seed": 1393947899,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109643442,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "tactxJ7ays9A56sC-iKFS",
				"focus": -0.007858881934094297,
				"gap": 1
			},
			"endBinding": {
				"elementId": "_6gymtyM73YQm3T2e2gVp",
				"focus": -0.015685803534589725,
				"gap": 5.538484196316006
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.0892729063748448,
					175.37293792634694
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1429,
			"versionNonce": 953860315,
			"isDeleted": false,
			"id": "ZSBHLP5tr9WHcRyf4RnWK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 3003.219053176841,
			"y": 185.280700892305,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 44.75951477040047,
			"height": 45.29515220864977,
			"seed": 270769563,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"type": "text",
					"id": "cwktfDqM"
				}
			],
			"updated": 1707109625456,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 334,
			"versionNonce": 522448251,
			"isDeleted": false,
			"id": "cwktfDqM",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 3019.7394355620413,
			"y": 195.92827699662988,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#b2f2bb",
			"width": 11.71875,
			"height": 24,
			"seed": 2058564155,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109625456,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "s",
			"rawText": "s",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "ZSBHLP5tr9WHcRyf4RnWK",
			"originalText": "s",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "text",
			"version": 215,
			"versionNonce": 538625813,
			"isDeleted": false,
			"id": "eV5WmyIA",
			"fillStyle": "cross-hatch",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1718.0043915584095,
			"y": 169.63381985419505,
			"strokeColor": "#c2255c",
			"backgroundColor": "#96f2d7",
			"width": 163.26007080078125,
			"height": 45,
			"seed": 1256957973,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109659623,
			"link": null,
			"locked": false,
			"fontSize": 36,
			"fontFamily": 1,
			"text": "SubBytes",
			"rawText": "SubBytes",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "SubBytes",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"type": "text",
			"version": 283,
			"versionNonce": 1918663899,
			"isDeleted": false,
			"id": "6y5Ml238",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1715.657478081608,
			"y": 226.95455679843553,
			"strokeColor": "#1971c2",
			"backgroundColor": "#b2f2bb",
			"width": 152.34375,
			"height": 48,
			"seed": 1829009051,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707109692138,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SIZE: u8 x 16\nMAP: u8 -> u8",
			"rawText": "SIZE: u8 x 16\nMAP: u8 -> u8",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "SIZE: u8 x 16\nMAP: u8 -> u8",
			"lineHeight": 1.2,
			"baseline": 43
		},
		{
			"type": "rectangle",
			"version": 1120,
			"versionNonce": 288000405,
			"isDeleted": false,
			"id": "Bxeu9bXGWLpRtFUo2Kciv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1934.5773465809816,
			"y": 925.3967261679846,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1427799291,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109796189,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1166,
			"versionNonce": 1387171573,
			"isDeleted": false,
			"id": "UYtd4VX4vwCkPXnB62CzN",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2006.5773465809816,
			"y": 923.3074532616097,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1884759451,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109796189,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1204,
			"versionNonce": 1145759829,
			"isDeleted": false,
			"id": "FcS5ZmvaEvZlMZM4J9Cry",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2079.666619487357,
			"y": 922.3074532616098,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 456505915,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109796189,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1239,
			"versionNonce": 1742017973,
			"isDeleted": false,
			"id": "2gYJDqkyVuqI7O0uzocAh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2153.845165300106,
			"y": 926.5752719807342,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1654176475,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109796189,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1247,
			"versionNonce": 1752340245,
			"isDeleted": false,
			"id": "kn2iRq-YmuJWrfL3RccFw",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2512.812634511345,
			"y": 927.9749397468071,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 319989627,
			"groupIds": [
				"pfvpT6wV48M7MBClpgmUK"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109796189,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1280,
			"versionNonce": 1889070197,
			"isDeleted": false,
			"id": "qFsVsHpj0Kqdj4MmCPzFC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2584.812634511345,
			"y": 926.9749397468071,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1122369563,
			"groupIds": [
				"pfvpT6wV48M7MBClpgmUK"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109796189,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1321,
			"versionNonce": 1074632149,
			"isDeleted": false,
			"id": "R-zvLaH9paHOaDZR0JFxS",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2656.812634511345,
			"y": 925.9749397468071,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 470107323,
			"groupIds": [
				"pfvpT6wV48M7MBClpgmUK"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109796189,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1374,
			"versionNonce": 31855413,
			"isDeleted": false,
			"id": "4EAluyVixkEhRpDepV9nj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2728.812634511345,
			"y": 926.9749397468071,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1712518491,
			"groupIds": [
				"pfvpT6wV48M7MBClpgmUK"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109796189,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1247,
			"versionNonce": 1653073045,
			"isDeleted": false,
			"id": "NW6g9S51QOGmi9H6KLKc6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2801.815741160831,
			"y": 928.7293435050409,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1348571643,
			"groupIds": [
				"fQjPkb1danSngKl3_WH4b"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109796189,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1280,
			"versionNonce": 1705544181,
			"isDeleted": false,
			"id": "Kv_zYiYhVGJi1lk1JTqvA",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2873.815741160831,
			"y": 927.7293435050409,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2079562395,
			"groupIds": [
				"fQjPkb1danSngKl3_WH4b"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109796189,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1321,
			"versionNonce": 2085454677,
			"isDeleted": false,
			"id": "Lv02yH-v8xR1D13Y-cI2K",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2945.815741160831,
			"y": 926.7293435050409,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1165725499,
			"groupIds": [
				"fQjPkb1danSngKl3_WH4b"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109796189,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1374,
			"versionNonce": 1523339445,
			"isDeleted": false,
			"id": "QrukpnYM6YL8JiyE-Xlv-",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 3017.815741160831,
			"y": 927.7293435050409,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1331425243,
			"groupIds": [
				"fQjPkb1danSngKl3_WH4b"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109796189,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1264,
			"versionNonce": 248148501,
			"isDeleted": false,
			"id": "EkVp58al0r03n4s6wlzM0",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2225.5794001500008,
			"y": 929.491844229904,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1269251195,
			"groupIds": [
				"qCygzCBu5y3s8fFM686Cu"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109796189,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1297,
			"versionNonce": 1430087541,
			"isDeleted": false,
			"id": "s6bCIoTGwoWHANLcqSC-E",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2297.5794001500008,
			"y": 928.491844229904,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 102757659,
			"groupIds": [
				"qCygzCBu5y3s8fFM686Cu"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109796189,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1338,
			"versionNonce": 812298453,
			"isDeleted": false,
			"id": "JhO6UpbGzCMY2kQa2oDkh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2369.5794001500008,
			"y": 927.491844229904,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 775461307,
			"groupIds": [
				"qCygzCBu5y3s8fFM686Cu"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109796189,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1393,
			"versionNonce": 1038601781,
			"isDeleted": false,
			"id": "iK5hmShnTwtgMhUVLgzTI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2441.5794001500008,
			"y": 928.491844229904,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1628678747,
			"groupIds": [
				"qCygzCBu5y3s8fFM686Cu"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707109796189,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 255,
			"versionNonce": 1127526101,
			"isDeleted": false,
			"id": "23ziavq3",
			"fillStyle": "cross-hatch",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1683.5447444475612,
			"y": 544.5095322089712,
			"strokeColor": "#c2255c",
			"backgroundColor": "#96f2d7",
			"width": 171.216064453125,
			"height": 45,
			"seed": 1282024949,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"fontSize": 36,
			"fontFamily": 1,
			"text": "ShiftRows",
			"rawText": "ShiftRows",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "ShiftRows",
			"lineHeight": 1.25,
			"baseline": 32
		},
		{
			"id": "vdJ94bVBwOXCskaui-7tw",
			"type": "rectangle",
			"x": 1905.8347657150234,
			"y": 455.59568201723226,
			"width": 1157.3113688666906,
			"height": 69.63365636983684,
			"angle": 0,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"groupIds": [
				"izXTElSe-djMywgBToaOb"
			],
			"frameId": null,
			"roundness": null,
			"seed": 1626068251,
			"version": 430,
			"versionNonce": 764451541,
			"isDeleted": false,
			"boundElements": [
				{
					"id": "rM7b-PHmUXGspoJZNsZ6K",
					"type": "arrow"
				},
				{
					"id": "TX5JFUcCvrytQYzxHyxyW",
					"type": "arrow"
				},
				{
					"id": "ta8M0nH4d2Xl58wWd1wzZ",
					"type": "arrow"
				},
				{
					"id": "_KI5e2f6CC120401Cq2V1",
					"type": "arrow"
				},
				{
					"id": "_32mMrpkI_uSj217EFBVC",
					"type": "arrow"
				},
				{
					"id": "O8cw31uQkRRji8xBw9v7n",
					"type": "arrow"
				},
				{
					"id": "cNDaSFrECiG_8PW0HVbT2",
					"type": "arrow"
				},
				{
					"id": "X8OjjvEqiERvCGFRrcUzS",
					"type": "arrow"
				},
				{
					"id": "M-8knwDMJq3uJHWYvtCau",
					"type": "arrow"
				},
				{
					"id": "Ww7qgOwrSYXpj9kB_Vi2L",
					"type": "arrow"
				},
				{
					"id": "U238ntlOohR6DGiptCtdr",
					"type": "arrow"
				},
				{
					"id": "uF1XRgzX2j2bQl2csN23X",
					"type": "arrow"
				},
				{
					"id": "HD4wm_N4WQpA_9PvXujKa",
					"type": "arrow"
				},
				{
					"id": "Y2Mh5a_NwZ1xkuQlmRjJo",
					"type": "arrow"
				},
				{
					"id": "i-gTP2jjvqq7MayuaC_CQ",
					"type": "arrow"
				},
				{
					"id": "Of6R_cb5QJHt5lrH9GlwL",
					"type": "arrow"
				}
			],
			"updated": 1707110058636,
			"link": null,
			"locked": false
		},
		{
			"id": "V3cJ72qGtk0pNUs2sydHR",
			"type": "line",
			"x": 1978.2537683396536,
			"y": 522.4439921322758,
			"width": 0,
			"height": 69.6336563698369,
			"angle": 0,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"groupIds": [
				"izXTElSe-djMywgBToaOb"
			],
			"frameId": null,
			"roundness": null,
			"seed": 234737365,
			"version": 181,
			"versionNonce": 1467792789,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			],
			"lastCommittedPoint": [
				0,
				-69.6336563698369
			],
			"startBinding": null,
			"endBinding": null,
			"startArrowhead": null,
			"endArrowhead": null
		},
		{
			"type": "line",
			"version": 199,
			"versionNonce": 2023375605,
			"isDeleted": false,
			"id": "_caFpKfwk7NO8ES-MXeof",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2052.0654440916805,
			"y": 523.8366652596724,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 2045675131,
			"groupIds": [
				"izXTElSe-djMywgBToaOb"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 201,
			"versionNonce": 446700629,
			"isDeleted": false,
			"id": "xxv_ae4CU5p5BoNOdMViI",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2125.8771198437075,
			"y": 523.8366652596724,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 162416853,
			"groupIds": [
				"izXTElSe-djMywgBToaOb"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 212,
			"versionNonce": 627296693,
			"isDeleted": false,
			"id": "PuWs955a3ZWwKg_HNeMSv",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2195.5107762135453,
			"y": 521.7476555685776,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 1238479387,
			"groupIds": [
				"izXTElSe-djMywgBToaOb"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 230,
			"versionNonce": 1779092245,
			"isDeleted": false,
			"id": "CBtIaTAjC_lYg8NS6b_pc",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2269.322451965572,
			"y": 523.140328695974,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 1856681659,
			"groupIds": [
				"izXTElSe-djMywgBToaOb"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 232,
			"versionNonce": 2030739573,
			"isDeleted": false,
			"id": "sjzGNR1uKnkH_rZqM9Ljl",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2343.1341277175984,
			"y": 523.140328695974,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 1731864411,
			"groupIds": [
				"izXTElSe-djMywgBToaOb"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 214,
			"versionNonce": 942197205,
			"isDeleted": false,
			"id": "ABEseUovKKazLHoOnkzY2",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2411.37511096004,
			"y": 521.7476555685776,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 555338997,
			"groupIds": [
				"izXTElSe-djMywgBToaOb"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 232,
			"versionNonce": 947570485,
			"isDeleted": false,
			"id": "ugRQz1OGVjlteCLYIn2pI",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2485.1867867120664,
			"y": 523.140328695974,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 1587439189,
			"groupIds": [
				"izXTElSe-djMywgBToaOb"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 234,
			"versionNonce": 1281759381,
			"isDeleted": false,
			"id": "sUMgkEu0vty1oOHwUVmYl",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2558.998462464093,
			"y": 523.140328695974,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 654889909,
			"groupIds": [
				"izXTElSe-djMywgBToaOb"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 191,
			"versionNonce": 1570782709,
			"isDeleted": false,
			"id": "ZfeQv-PDLUK4wr7Rpa2P0",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2628.6321188339307,
			"y": 523.140328695974,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 355266165,
			"groupIds": [
				"izXTElSe-djMywgBToaOb"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 209,
			"versionNonce": 53393237,
			"isDeleted": false,
			"id": "UlY0onIWP7-eo9weC9H1i",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2702.443794585958,
			"y": 524.5330018233708,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 1993430997,
			"groupIds": [
				"izXTElSe-djMywgBToaOb"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 211,
			"versionNonce": 1466369205,
			"isDeleted": false,
			"id": "DNj-YQq_y1xKEQ1h-vhkK",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2776.2554703379847,
			"y": 524.5330018233708,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 1860277557,
			"groupIds": [
				"izXTElSe-djMywgBToaOb"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 213,
			"versionNonce": 233743893,
			"isDeleted": false,
			"id": "Xg0ipWVBXnd772T_XppO8",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2844.4964535804256,
			"y": 524.5330018233708,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 250889493,
			"groupIds": [
				"izXTElSe-djMywgBToaOb"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 231,
			"versionNonce": 1236999029,
			"isDeleted": false,
			"id": "sHRqzYYVIk7wq86GkAGUA",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2918.308129332452,
			"y": 525.9256749507672,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 1991563893,
			"groupIds": [
				"izXTElSe-djMywgBToaOb"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 233,
			"versionNonce": 856810709,
			"isDeleted": false,
			"id": "gIzJcj_756fZiIdlMq54r",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2992.1198050844787,
			"y": 525.9256749507672,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 947635157,
			"groupIds": [
				"izXTElSe-djMywgBToaOb"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "rectangle",
			"version": 476,
			"versionNonce": 1300791861,
			"isDeleted": false,
			"id": "ZDPItDgK_4hIOWLhPaL_l",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1905.138429151324,
			"y": 525.2293383870694,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 1157.3113688666906,
			"height": 69.63365636983684,
			"seed": 753168507,
			"groupIds": [
				"tUM0P2HgWQQiXaefhC74T"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 243,
			"versionNonce": 235172757,
			"isDeleted": false,
			"id": "PT4RClyuB0VgTu_SXV03R",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1977.5574317759542,
			"y": 592.0776485021129,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 831957275,
			"groupIds": [
				"tUM0P2HgWQQiXaefhC74T"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 261,
			"versionNonce": 817576181,
			"isDeleted": false,
			"id": "s3AKdHJxG6hPkL2eMSCbS",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2051.369107527981,
			"y": 593.4703216295095,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 548982203,
			"groupIds": [
				"tUM0P2HgWQQiXaefhC74T"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 263,
			"versionNonce": 1328697941,
			"isDeleted": false,
			"id": "LfqTX_EhQmNqCcQIl_Qsr",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2125.1807832800087,
			"y": 593.4703216295095,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 2104319579,
			"groupIds": [
				"tUM0P2HgWQQiXaefhC74T"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 274,
			"versionNonce": 910114741,
			"isDeleted": false,
			"id": "MSjS5yVtK-DnYeYXNJC8O",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2194.8144396498456,
			"y": 591.3813119384147,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 1116134139,
			"groupIds": [
				"tUM0P2HgWQQiXaefhC74T"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 292,
			"versionNonce": 2080866581,
			"isDeleted": false,
			"id": "3aYdf5QQ5BtDvlQquz5Xx",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2268.626115401873,
			"y": 592.7739850658111,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 1820836763,
			"groupIds": [
				"tUM0P2HgWQQiXaefhC74T"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 294,
			"versionNonce": 1442879093,
			"isDeleted": false,
			"id": "UYk-nERaVkLOrnzv3dvW5",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2342.4377911538986,
			"y": 592.7739850658111,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 1134729275,
			"groupIds": [
				"tUM0P2HgWQQiXaefhC74T"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 276,
			"versionNonce": 787480533,
			"isDeleted": false,
			"id": "JPbDdDy-fEM9vFXGC3UKj",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2410.6787743963405,
			"y": 591.3813119384147,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 1706678491,
			"groupIds": [
				"tUM0P2HgWQQiXaefhC74T"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 294,
			"versionNonce": 2095791413,
			"isDeleted": false,
			"id": "lR-ycxFYYkAQ5MPE4jX3y",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2484.490450148367,
			"y": 592.7739850658111,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 274728315,
			"groupIds": [
				"tUM0P2HgWQQiXaefhC74T"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 296,
			"versionNonce": 1465372309,
			"isDeleted": false,
			"id": "Q1lBIgdSLl0sdX3dIxhI9",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2558.3021259003935,
			"y": 592.7739850658111,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 718773787,
			"groupIds": [
				"tUM0P2HgWQQiXaefhC74T"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 253,
			"versionNonce": 1290482677,
			"isDeleted": false,
			"id": "p_HiTRRPwU788ISE5AB6I",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2627.9357822702314,
			"y": 592.7739850658111,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 269689531,
			"groupIds": [
				"tUM0P2HgWQQiXaefhC74T"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 271,
			"versionNonce": 2041245013,
			"isDeleted": false,
			"id": "r-GfJnSqwwMqdDG1t3dlN",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2701.747458022259,
			"y": 594.1666581932079,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 414520155,
			"groupIds": [
				"tUM0P2HgWQQiXaefhC74T"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 273,
			"versionNonce": 1559001781,
			"isDeleted": false,
			"id": "3chkXIh8SkDbiotQWRcSE",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2775.5591337742853,
			"y": 594.1666581932079,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 1695543291,
			"groupIds": [
				"tUM0P2HgWQQiXaefhC74T"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 275,
			"versionNonce": 1867865109,
			"isDeleted": false,
			"id": "PV_-xCY8dL7OO_xXW-JUJ",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2843.8001170167263,
			"y": 594.1666581932079,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 1730558107,
			"groupIds": [
				"tUM0P2HgWQQiXaefhC74T"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 293,
			"versionNonce": 2027622773,
			"isDeleted": false,
			"id": "FfEoTc6M7Sghu8JJFqM-N",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2917.611792768753,
			"y": 595.5593313206043,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 749366587,
			"groupIds": [
				"tUM0P2HgWQQiXaefhC74T"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 295,
			"versionNonce": 650320597,
			"isDeleted": false,
			"id": "IoFpvB29a048yNghg-QQS",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2991.4234685207794,
			"y": 595.5593313206043,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 1761545691,
			"groupIds": [
				"tUM0P2HgWQQiXaefhC74T"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "rectangle",
			"version": 458,
			"versionNonce": 1638070325,
			"isDeleted": false,
			"id": "dmWYoQnSgfVxasP8sovMz",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1905.138429151324,
			"y": 596.255667884303,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 1157.3113688666906,
			"height": 69.63365636983684,
			"seed": 821339323,
			"groupIds": [
				"ZdlL0b3sikECYjO4Gi1oY"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 225,
			"versionNonce": 1667246485,
			"isDeleted": false,
			"id": "kGbqdj1JbuuVhUL-GoDia",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1977.5574317759542,
			"y": 663.1039779993464,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 1712739675,
			"groupIds": [
				"ZdlL0b3sikECYjO4Gi1oY"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 243,
			"versionNonce": 221261557,
			"isDeleted": false,
			"id": "BqAOQyLOcfGzEr8tQ59cy",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2051.369107527981,
			"y": 664.496651126743,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 955838971,
			"groupIds": [
				"ZdlL0b3sikECYjO4Gi1oY"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 245,
			"versionNonce": 2107148373,
			"isDeleted": false,
			"id": "6Mwt5cn1Xie-T1xbwhPTW",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2125.180783280008,
			"y": 664.496651126743,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 446626459,
			"groupIds": [
				"ZdlL0b3sikECYjO4Gi1oY"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 256,
			"versionNonce": 1718531509,
			"isDeleted": false,
			"id": "diRaEZSgORTedVLwDAMEr",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2194.814439649846,
			"y": 662.4076414356482,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 934997819,
			"groupIds": [
				"ZdlL0b3sikECYjO4Gi1oY"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 274,
			"versionNonce": 584595221,
			"isDeleted": false,
			"id": "YV_bCD8Sk7sKanXBnKPI1",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2268.6261154018725,
			"y": 663.8003145630446,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 45043675,
			"groupIds": [
				"ZdlL0b3sikECYjO4Gi1oY"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 276,
			"versionNonce": 222989429,
			"isDeleted": false,
			"id": "0xPscpnGQiKkZAENIpM-j",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2342.4377911538995,
			"y": 663.8003145630446,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 2106498171,
			"groupIds": [
				"ZdlL0b3sikECYjO4Gi1oY"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 258,
			"versionNonce": 361444821,
			"isDeleted": false,
			"id": "Hu31E320oqOm8mZ2Eav2p",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2410.6787743963405,
			"y": 662.4076414356482,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 1142641947,
			"groupIds": [
				"ZdlL0b3sikECYjO4Gi1oY"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 276,
			"versionNonce": 380613429,
			"isDeleted": false,
			"id": "f8Uf9lwdNXUn6ob9IVrJv",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2484.490450148367,
			"y": 663.8003145630446,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 1439168955,
			"groupIds": [
				"ZdlL0b3sikECYjO4Gi1oY"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 278,
			"versionNonce": 1830651029,
			"isDeleted": false,
			"id": "SaWsstFihxtiogt1dUuOq",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2558.3021259003935,
			"y": 663.8003145630446,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 532089435,
			"groupIds": [
				"ZdlL0b3sikECYjO4Gi1oY"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 235,
			"versionNonce": 1284123125,
			"isDeleted": false,
			"id": "7MjlDn2ICS4iUKjbY7nYv",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2627.9357822702314,
			"y": 663.8003145630446,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 1186662139,
			"groupIds": [
				"ZdlL0b3sikECYjO4Gi1oY"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 253,
			"versionNonce": 1442521941,
			"isDeleted": false,
			"id": "gUdc2uAA14Wxx4eSco-fh",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2701.747458022259,
			"y": 665.1929876904414,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 827748251,
			"groupIds": [
				"ZdlL0b3sikECYjO4Gi1oY"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 255,
			"versionNonce": 1841688757,
			"isDeleted": false,
			"id": "sBNgSnrQGc49Gj_GJt3kJ",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2775.5591337742853,
			"y": 665.1929876904414,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 1371259963,
			"groupIds": [
				"ZdlL0b3sikECYjO4Gi1oY"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 257,
			"versionNonce": 1368396309,
			"isDeleted": false,
			"id": "K_hqBN9jHvOvrs0d_boc6",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2843.8001170167263,
			"y": 665.1929876904414,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 801998043,
			"groupIds": [
				"ZdlL0b3sikECYjO4Gi1oY"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 275,
			"versionNonce": 1850673013,
			"isDeleted": false,
			"id": "PuLxzJBOo5wgk8VyPLHcN",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2917.611792768753,
			"y": 666.5856608178378,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 857616763,
			"groupIds": [
				"ZdlL0b3sikECYjO4Gi1oY"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 277,
			"versionNonce": 1984450773,
			"isDeleted": false,
			"id": "cFbQjg8-nTXfYx1TiVef4",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2991.4234685207794,
			"y": 666.5856608178378,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 753945115,
			"groupIds": [
				"ZdlL0b3sikECYjO4Gi1oY"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "rectangle",
			"version": 468,
			"versionNonce": 923889205,
			"isDeleted": false,
			"id": "JBsIrcNOBbWRLqPR8xZSE",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1905.1384291513245,
			"y": 668.6746705089336,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 1157.3113688666906,
			"height": 69.63365636983684,
			"seed": 2034046203,
			"groupIds": [
				"G7zNqq0YfF0YTKPOfLZxF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 235,
			"versionNonce": 797958037,
			"isDeleted": false,
			"id": "I59mlIxSIhQAzWkkeXYFy",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1977.5574317759547,
			"y": 735.522980623977,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 610712987,
			"groupIds": [
				"G7zNqq0YfF0YTKPOfLZxF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 253,
			"versionNonce": 1710826741,
			"isDeleted": false,
			"id": "H5P1oVBsfmQeLcqb9Axd3",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2051.3691075279817,
			"y": 736.9156537513736,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 1502761531,
			"groupIds": [
				"G7zNqq0YfF0YTKPOfLZxF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 255,
			"versionNonce": 2110963285,
			"isDeleted": false,
			"id": "e2mNXP5fXmR9U9eCpCi6K",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2125.1807832800087,
			"y": 736.9156537513736,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 1503810267,
			"groupIds": [
				"G7zNqq0YfF0YTKPOfLZxF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 266,
			"versionNonce": 233974709,
			"isDeleted": false,
			"id": "7cIzesxlVWk_9DKEgOhzl",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2194.814439649846,
			"y": 734.8266440602788,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 623460219,
			"groupIds": [
				"G7zNqq0YfF0YTKPOfLZxF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 284,
			"versionNonce": 914156821,
			"isDeleted": false,
			"id": "Do9oJJqyXeGswdIv-5q_z",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2268.6261154018734,
			"y": 736.2193171876752,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 107583515,
			"groupIds": [
				"G7zNqq0YfF0YTKPOfLZxF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 286,
			"versionNonce": 1994949237,
			"isDeleted": false,
			"id": "Ml0N7tVvdQMblFJG3Iyv9",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2342.437791153899,
			"y": 736.2193171876752,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 1532353723,
			"groupIds": [
				"G7zNqq0YfF0YTKPOfLZxF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 268,
			"versionNonce": 1140485077,
			"isDeleted": false,
			"id": "aR9j8cSpuxNeyF9nQf50E",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2410.678774396341,
			"y": 734.8266440602788,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 529567067,
			"groupIds": [
				"G7zNqq0YfF0YTKPOfLZxF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 286,
			"versionNonce": 1573398837,
			"isDeleted": false,
			"id": "EYCucqsrtpAXparOVuqoE",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2484.4904501483675,
			"y": 736.2193171876752,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 913058299,
			"groupIds": [
				"G7zNqq0YfF0YTKPOfLZxF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 288,
			"versionNonce": 1706506901,
			"isDeleted": false,
			"id": "z2USTqPSb2BL6g1oq615i",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2558.302125900394,
			"y": 736.2193171876752,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 1961570971,
			"groupIds": [
				"G7zNqq0YfF0YTKPOfLZxF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 245,
			"versionNonce": 880615413,
			"isDeleted": false,
			"id": "hWDP1AJHnMgNWuEwmbwjm",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2627.935782270232,
			"y": 736.2193171876752,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 1807755067,
			"groupIds": [
				"G7zNqq0YfF0YTKPOfLZxF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 263,
			"versionNonce": 1881102677,
			"isDeleted": false,
			"id": "gV6sBneEyu79Yuabeq6gL",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2701.7474580222593,
			"y": 737.611990315072,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 1900906459,
			"groupIds": [
				"G7zNqq0YfF0YTKPOfLZxF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 265,
			"versionNonce": 1643341493,
			"isDeleted": false,
			"id": "26j-osrvDb_Vme_e7PU95",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2775.559133774286,
			"y": 737.611990315072,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 1806029947,
			"groupIds": [
				"G7zNqq0YfF0YTKPOfLZxF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 267,
			"versionNonce": 211732501,
			"isDeleted": false,
			"id": "AqOlhSpMxgjlrvzQTNace",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2843.8001170167267,
			"y": 737.611990315072,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 1519095067,
			"groupIds": [
				"G7zNqq0YfF0YTKPOfLZxF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 285,
			"versionNonce": 35061109,
			"isDeleted": false,
			"id": "eF16n8d011_hMW_EO5nOR",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2917.6117927687533,
			"y": 739.0046634424684,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 561066427,
			"groupIds": [
				"G7zNqq0YfF0YTKPOfLZxF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"type": "line",
			"version": 287,
			"versionNonce": 2040628949,
			"isDeleted": false,
			"id": "u3u7_1nj5tbxQ0rM0UADn",
			"fillStyle": "hachure",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2991.42346852078,
			"y": 739.0046634424684,
			"strokeColor": "#c2255c",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 69.6336563698369,
			"seed": 293159515,
			"groupIds": [
				"G7zNqq0YfF0YTKPOfLZxF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110000788,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					0,
					-69.6336563698369
				]
			]
		},
		{
			"id": "rM7b-PHmUXGspoJZNsZ6K",
			"type": "arrow",
			"x": 1944.8296132821317,
			"y": 370.64262124603135,
			"width": 1.3926731273966197,
			"height": 82.16771451640756,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 1251186069,
			"version": 44,
			"versionNonce": 1667686261,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1707110015925,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.3926731273966197,
					82.16771451640756
				]
			],
			"lastCommittedPoint": [
				1.3926731273966197,
				82.16771451640756
			],
			"startBinding": {
				"elementId": "lwgCTA_hOWW_rffQoyOgW",
				"focus": 0.03126844479128432,
				"gap": 4.196761637634609
			},
			"endBinding": {
				"elementId": "vdJ94bVBwOXCskaui-7tw",
				"focus": -0.9281566454084242,
				"gap": 2.7853462547933248
			},
			"startArrowhead": null,
			"endArrowhead": "arrow"
		},
		{
			"type": "arrow",
			"version": 61,
			"versionNonce": 1370661595,
			"isDeleted": false,
			"id": "TX5JFUcCvrytQYzxHyxyW",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2017.944952470461,
			"y": 367.1609384275396,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.3926731273966197,
			"height": 82.16771451640756,
			"seed": 1481843611,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110021218,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "kuQUdze6q6ds4Gi66GSBa",
				"focus": -0.0003678370393284798,
				"gap": 2.8043517255177903
			},
			"endBinding": {
				"elementId": "vdJ94bVBwOXCskaui-7tw",
				"focus": -0.8018297031316859,
				"gap": 6.2670290732851015
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.3926731273966197,
					82.16771451640756
				]
			]
		},
		{
			"type": "arrow",
			"version": 65,
			"versionNonce": 1599905109,
			"isDeleted": false,
			"id": "ta8M0nH4d2Xl58wWd1wzZ",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2090.363955095091,
			"y": 367.1609384275396,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.3926731273966197,
			"height": 82.16771451640756,
			"seed": 18905877,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110025683,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "g5Ejhjt2hUe2pu0pit1yE",
				"focus": 0.018721035060614177,
				"gap": 3.8043517255176766
			},
			"endBinding": {
				"elementId": "vdJ94bVBwOXCskaui-7tw",
				"focus": -0.6768067809042567,
				"gap": 6.2670290732851015
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.3926731273966197,
					82.16771451640756
				]
			]
		},
		{
			"type": "arrow",
			"version": 83,
			"versionNonce": 912309269,
			"isDeleted": false,
			"id": "_KI5e2f6CC120401Cq2V1",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2161.0421163104756,
			"y": 370.2944529641822,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.3926731273966197,
			"height": 82.16771451640756,
			"seed": 1094042133,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110032568,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "gFEFZLVESCnombzEB81qC",
				"focus": 0.11541707937542572,
				"gap": 2.670047543035878
			},
			"endBinding": {
				"elementId": "vdJ94bVBwOXCskaui-7tw",
				"focus": -0.5548809062939347,
				"gap": 3.1335145366424797
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.3926731273966197,
					82.16771451640756
				]
			]
		},
		{
			"type": "arrow",
			"version": 99,
			"versionNonce": 1786149589,
			"isDeleted": false,
			"id": "_32mMrpkI_uSj217EFBVC",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2234.1574554988047,
			"y": 366.8127701456904,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.3926731273966197,
			"height": 82.16771451640756,
			"seed": 1035908981,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110032568,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "vdJ94bVBwOXCskaui-7tw",
				"focus": -0.4285539640171968,
				"gap": 6.615197355134256
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.3926731273966197,
					82.16771451640756
				]
			]
		},
		{
			"type": "arrow",
			"version": 103,
			"versionNonce": 431720853,
			"isDeleted": false,
			"id": "O8cw31uQkRRji8xBw9v7n",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2306.5764581234353,
			"y": 366.8127701456904,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.3926731273966197,
			"height": 82.16771451640756,
			"seed": 474087637,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110032569,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "vdJ94bVBwOXCskaui-7tw",
				"focus": -0.30353104178976736,
				"gap": 6.615197355134256
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.3926731273966197,
					82.16771451640756
				]
			]
		},
		{
			"type": "arrow",
			"version": 192,
			"versionNonce": 1110193787,
			"isDeleted": false,
			"id": "cNDaSFrECiG_8PW0HVbT2",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2375.5137779295733,
			"y": 373.07979921897567,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.3926731273966197,
			"height": 82.16771451640756,
			"seed": 1297550363,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110045127,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "DUVtZJYXyfnzMAMKgQdve",
				"focus": 0.15136734680366914,
				"gap": 4.538821548659541
			},
			"endBinding": {
				"elementId": "vdJ94bVBwOXCskaui-7tw",
				"focus": -0.1847022147965546,
				"gap": 1
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.3926731273966197,
					82.16771451640756
				]
			]
		},
		{
			"type": "arrow",
			"version": 209,
			"versionNonce": 180068603,
			"isDeleted": false,
			"id": "X8OjjvEqiERvCGFRrcUzS",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2448.6291171179023,
			"y": 369.5981164004839,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.3926731273966197,
			"height": 82.16771451640756,
			"seed": 1282724027,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110045127,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "ZRO0TCcXiFwD3J0HWJpIU",
				"focus": 0.11827664744669553,
				"gap": 1
			},
			"endBinding": {
				"elementId": "vdJ94bVBwOXCskaui-7tw",
				"focus": -0.058375272519816744,
				"gap": 3.8298511003407896
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.3926731273966197,
					82.16771451640756
				]
			]
		},
		{
			"type": "arrow",
			"version": 213,
			"versionNonce": 755092347,
			"isDeleted": false,
			"id": "M-8knwDMJq3uJHWYvtCau",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2521.048119742533,
			"y": 369.5981164004839,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.3926731273966197,
			"height": 82.16771451640756,
			"seed": 2024866139,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110045127,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "i6-_SKLw2B11zP3fzzLT6",
				"focus": 0.08558295717167755,
				"gap": 1
			},
			"endBinding": {
				"elementId": "vdJ94bVBwOXCskaui-7tw",
				"focus": 0.06664764970761275,
				"gap": 3.8298511003407896
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.3926731273966197,
					82.16771451640756
				]
			]
		},
		{
			"type": "arrow",
			"version": 85,
			"versionNonce": 1566200853,
			"isDeleted": false,
			"id": "Ww7qgOwrSYXpj9kB_Vi2L",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2592.7707858034637,
			"y": 370.2944529641821,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.3926731273966197,
			"height": 82.16771451640756,
			"seed": 1309703637,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110048363,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "nFCNMfTr4ox_hgAJAuw8H",
				"focus": 0.09408508164613316,
				"gap": 2.2703797769628977
			},
			"endBinding": {
				"elementId": "vdJ94bVBwOXCskaui-7tw",
				"focus": 0.1904480531388144,
				"gap": 3.1335145366425934
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.3926731273966197,
					82.16771451640756
				]
			]
		},
		{
			"type": "arrow",
			"version": 101,
			"versionNonce": 568988373,
			"isDeleted": false,
			"id": "U238ntlOohR6DGiptCtdr",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2665.8861249917927,
			"y": 366.8127701456903,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.3926731273966197,
			"height": 82.16771451640756,
			"seed": 525073205,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110048364,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "vdJ94bVBwOXCskaui-7tw",
				"focus": 0.31677499541555215,
				"gap": 6.61519735513437
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.3926731273966197,
					82.16771451640756
				]
			]
		},
		{
			"type": "arrow",
			"version": 105,
			"versionNonce": 187244949,
			"isDeleted": false,
			"id": "uF1XRgzX2j2bQl2csN23X",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2738.3051276164233,
			"y": 366.8127701456903,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.3926731273966197,
			"height": 82.16771451640756,
			"seed": 720424085,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110048365,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "vdJ94bVBwOXCskaui-7tw",
				"focus": 0.4417979176429817,
				"gap": 6.61519735513437
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.3926731273966197,
					82.16771451640756
				]
			]
		},
		{
			"type": "arrow",
			"version": 88,
			"versionNonce": 1667525499,
			"isDeleted": false,
			"id": "HD4wm_N4WQpA_9PvXujKa",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2805.8497742951654,
			"y": 371.68712609157893,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.3926731273966197,
			"height": 82.16771451640756,
			"seed": 643298331,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110051892,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "inJCTHepVA9Xgif54GFMJ",
				"focus": 0.2029148840134663,
				"gap": 1.9086491461259243
			},
			"endBinding": {
				"elementId": "vdJ94bVBwOXCskaui-7tw",
				"focus": 0.558263208296825,
				"gap": 1.7408414092457463
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.3926731273966197,
					82.16771451640756
				]
			]
		},
		{
			"type": "arrow",
			"version": 104,
			"versionNonce": 230033595,
			"isDeleted": false,
			"id": "Y2Mh5a_NwZ1xkuQlmRjJo",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2878.9651134834953,
			"y": 368.20544327308716,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.3926731273966197,
			"height": 82.16771451640756,
			"seed": 622377147,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110051893,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "vdJ94bVBwOXCskaui-7tw",
				"focus": 0.6845901505735643,
				"gap": 5.222524227737523
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.3926731273966197,
					82.16771451640756
				]
			]
		},
		{
			"type": "arrow",
			"version": 109,
			"versionNonce": 1185567547,
			"isDeleted": false,
			"id": "i-gTP2jjvqq7MayuaC_CQ",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2951.384116108125,
			"y": 368.20544327308716,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.3926731273966197,
			"height": 82.16771451640756,
			"seed": 1687677275,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110051893,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "Q7F31amvWVnqkBavbeC38",
				"focus": 0.15959795043605407,
				"gap": 1
			},
			"endBinding": {
				"elementId": "vdJ94bVBwOXCskaui-7tw",
				"focus": 0.8096130728009922,
				"gap": 5.222524227737523
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.3926731273966197,
					82.16771451640756
				]
			]
		},
		{
			"type": "arrow",
			"version": 183,
			"versionNonce": 111458965,
			"isDeleted": false,
			"id": "Of6R_cb5QJHt5lrH9GlwL",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 3027.632969833096,
			"y": 368.5536115549362,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.3926731273966197,
			"height": 82.16771451640756,
			"seed": 1657453077,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110063575,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "vdJ94bVBwOXCskaui-7tw",
				"focus": 0.9412375965280437,
				"gap": 4.874355945888482
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "arrow",
			"points": [
				[
					0,
					0
				],
				[
					1.3926731273966197,
					82.16771451640756
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1147,
			"versionNonce": 655093845,
			"isDeleted": false,
			"id": "J_csVWQSKGM4hGcCVMKWP",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1923.4359615618068,
			"y": 1270.7796617623758,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1922769979,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707110097851,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1193,
			"versionNonce": 1563762101,
			"isDeleted": false,
			"id": "iaNOnuKl_llIIucEpj_XM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1995.4359615618068,
			"y": 1268.690388856001,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1036051675,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707110097851,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1231,
			"versionNonce": 1150394133,
			"isDeleted": false,
			"id": "JJy3-mnUn34-ivB2ZCiwO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2068.525234468183,
			"y": 1267.690388856001,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1806012795,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707110097851,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1266,
			"versionNonce": 60224629,
			"isDeleted": false,
			"id": "kf1obzgeQt_qjHsaQmCbR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2142.703780280932,
			"y": 1271.9582075751255,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 495692315,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707110097851,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1274,
			"versionNonce": 1443536341,
			"isDeleted": false,
			"id": "ZittVqBeaTGtMeSqfgTgT",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2501.6712494921703,
			"y": 1273.3578753411985,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 677752507,
			"groupIds": [
				"zMKz92kC5m7Rvp9EL-Cjl"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707110097851,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1307,
			"versionNonce": 1661082421,
			"isDeleted": false,
			"id": "_13L20TdRoVaFphg2cvXV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2573.6712494921703,
			"y": 1272.3578753411985,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 517349211,
			"groupIds": [
				"zMKz92kC5m7Rvp9EL-Cjl"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707110097851,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1348,
			"versionNonce": 1390603413,
			"isDeleted": false,
			"id": "jnhQPuvnwrZqgLvO8e47A",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2645.6712494921703,
			"y": 1271.3578753411985,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 456096763,
			"groupIds": [
				"zMKz92kC5m7Rvp9EL-Cjl"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707110097851,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1401,
			"versionNonce": 627216885,
			"isDeleted": false,
			"id": "UJBc3pkij1JpNvYhI1WHO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2717.6712494921703,
			"y": 1272.3578753411985,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1232356507,
			"groupIds": [
				"zMKz92kC5m7Rvp9EL-Cjl"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707110097851,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1274,
			"versionNonce": 1199999829,
			"isDeleted": false,
			"id": "QU2mTD-sWFA_ByWWqvZgd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2790.674356141657,
			"y": 1274.1122790994323,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 827783483,
			"groupIds": [
				"hVJixHNagwd7Vcn367Qiu"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707110097851,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1307,
			"versionNonce": 1772378293,
			"isDeleted": false,
			"id": "AikluVXsYAaEhkubeQjY6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2862.674356141657,
			"y": 1273.1122790994323,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1077549531,
			"groupIds": [
				"hVJixHNagwd7Vcn367Qiu"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707110097851,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1348,
			"versionNonce": 358709781,
			"isDeleted": false,
			"id": "fjy4OVCA1ptMq8-bfVfLd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2934.674356141657,
			"y": 1272.1122790994323,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 321922683,
			"groupIds": [
				"hVJixHNagwd7Vcn367Qiu"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707110097851,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1401,
			"versionNonce": 62091125,
			"isDeleted": false,
			"id": "lLIqX4nliTAyQSCILrZR3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 3006.674356141657,
			"y": 1273.1122790994323,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 16490267,
			"groupIds": [
				"hVJixHNagwd7Vcn367Qiu"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707110097851,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1291,
			"versionNonce": 853522645,
			"isDeleted": false,
			"id": "02scm7ovCkeadNucR0A4a",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2214.438015130827,
			"y": 1274.8747798242953,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1678705595,
			"groupIds": [
				"uK_NXKfXgYXpTXWDzpZeO"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707110097851,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1324,
			"versionNonce": 1014748725,
			"isDeleted": false,
			"id": "bsWoC8Bfla_tDftIwsLkf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2286.438015130827,
			"y": 1273.8747798242953,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 613209179,
			"groupIds": [
				"uK_NXKfXgYXpTXWDzpZeO"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707110097851,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1365,
			"versionNonce": 1802323861,
			"isDeleted": false,
			"id": "Daj65qoxJFqVqsaIinHga",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2358.438015130827,
			"y": 1272.8747798242953,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 38244603,
			"groupIds": [
				"uK_NXKfXgYXpTXWDzpZeO"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707110097851,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1420,
			"versionNonce": 300518645,
			"isDeleted": false,
			"id": "UjLK2EpVlPF_A0vrr3SLd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2430.438015130827,
			"y": 1273.8747798242953,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 516012443,
			"groupIds": [
				"uK_NXKfXgYXpTXWDzpZeO"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707110097851,
			"link": null,
			"locked": false
		},
		{
			"id": "KhzPYLT0zoq6XvFEoJFby",
			"type": "arrow",
			"x": 2666.0701864511166,
			"y": 477.46890535833415,
			"width": 289.67601049852146,
			"height": 0,
			"angle": 0,
			"strokeColor": "#f783ac",
			"backgroundColor": "transparent",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"groupIds": [
				"LqMY57jwW7vwVICtlem-8"
			],
			"frameId": null,
			"roundness": null,
			"seed": 55513147,
			"version": 151,
			"versionNonce": 1288667029,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1707110261585,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					289.67601049852146,
					0
				]
			],
			"lastCommittedPoint": [
				284.10531798893453,
				4.178019382190314
			],
			"startBinding": null,
			"endBinding": null,
			"startArrowhead": null,
			"endArrowhead": "triangle"
		},
		{
			"id": "fUaeIDG5DBteDi27pz5RR",
			"type": "ellipse",
			"x": 2663.184810994909,
			"y": 469.9091298911063,
			"width": 13.01345091856456,
			"height": 12.08391871009508,
			"angle": 0,
			"strokeColor": "#f783ac",
			"backgroundColor": "#f783ac",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"groupIds": [
				"LqMY57jwW7vwVICtlem-8"
			],
			"frameId": null,
			"roundness": null,
			"seed": 1369052251,
			"version": 143,
			"versionNonce": 2051327221,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1707110261585,
			"link": null,
			"locked": false
		},
		{
			"type": "arrow",
			"version": 480,
			"versionNonce": 956488571,
			"isDeleted": false,
			"id": "PDYiOA0Sjr8rx3N0uUB6F",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2314.0547529357673,
			"y": 547.6471515581443,
			"strokeColor": "#f783ac",
			"backgroundColor": "transparent",
			"width": 560.7024272916315,
			"height": 0,
			"seed": 901659323,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110345160,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "triangle",
			"points": [
				[
					0,
					0
				],
				[
					560.7024272916315,
					0
				]
			]
		},
		{
			"type": "ellipse",
			"version": 364,
			"versionNonce": 1530881941,
			"isDeleted": false,
			"id": "47hbb6QD_t9WP76Agbxbg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2307.3134998217765,
			"y": 543.4428015674475,
			"strokeColor": "#f783ac",
			"backgroundColor": "#f783ac",
			"width": 13.01345091856456,
			"height": 12.08391871009508,
			"seed": 155003739,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707110332857,
			"link": null,
			"locked": false
		}
	],
	"appState": {
		"theme": "light",
		"viewBackgroundColor": "#ffffff",
		"currentItemStrokeColor": "#f783ac",
		"currentItemBackgroundColor": "#f783ac",
		"currentItemFillStyle": "solid",
		"currentItemStrokeWidth": 2,
		"currentItemStrokeStyle": "solid",
		"currentItemRoughness": 2,
		"currentItemOpacity": 100,
		"currentItemFontFamily": 3,
		"currentItemFontSize": 20,
		"currentItemTextAlign": "left",
		"currentItemStartArrowhead": null,
		"currentItemEndArrowhead": "triangle",
		"scrollX": -1050.3428330904599,
		"scrollY": -8.094323094327478,
		"zoom": {
			"value": 0.7440743941365788
		},
		"currentItemRoundness": "sharp",
		"gridSize": null,
		"gridColor": {
			"Bold": "#C9C9C9FF",
			"Regular": "#EDEDEDFF"
		},
		"currentStrokeOptions": null,
		"previousGridSize": null,
		"frameRendering": {
			"enabled": true,
			"clip": true,
			"name": true,
			"outline": true
		}
	},
	"files": {}
}
```
%%