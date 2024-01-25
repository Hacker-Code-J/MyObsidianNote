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

Round Key 0 ^Lq3uwb0Z

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

0 ^MdYZ0nvj

4 ^do5kdVz3

8 ^B0RrpKs6

12 ^8el1XKc3

1 ^xt6i2ZvQ

5 ^pIvgWw3m

9 ^fz9AvqKw

13 ^rDh9PBt5

2 ^N168WqBG

6 ^6uVmupEi

10 ^XmWXkhaM

14 ^jL7bpOoq

3 ^4IJzeWEU

7 ^e8KHhAOb

11 ^AAHDuPZk

15 ^GaVPt18c

%%
# Drawing
```json
{
	"type": "excalidraw",
	"version": 2,
	"source": "https://github.com/zsviczian/obsidian-excalidraw-plugin/releases/tag/2.0.18",
	"elements": [
		{
			"type": "rectangle",
			"version": 274,
			"versionNonce": 1825261759,
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
			"updated": 1706103085343,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 187,
			"versionNonce": 251258545,
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
			"updated": 1706103085343,
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
			"version": 144,
			"versionNonce": 1661065439,
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
			"updated": 1706103085343,
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
			"type": "rectangle",
			"version": 491,
			"versionNonce": 692840593,
			"isDeleted": false,
			"id": "US8GnHCLrFYjigavPhfav",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 111.74208970445636,
			"y": -934.5865443791542,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 351041407,
			"groupIds": [
				"BJbvsLu8Wih8jbmnesSsy"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085343,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 526,
			"versionNonce": 1345414399,
			"isDeleted": false,
			"id": "FOyKOPblnTkMDESfnb_XT",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 183.74208970445636,
			"y": -935.5865443791542,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 881799071,
			"groupIds": [
				"BJbvsLu8Wih8jbmnesSsy"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085343,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 567,
			"versionNonce": 297971313,
			"isDeleted": false,
			"id": "_kNUtTxyW2yVov06K5wJ0",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 255.74208970445648,
			"y": -936.5865443791542,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 459662271,
			"groupIds": [
				"BJbvsLu8Wih8jbmnesSsy"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085343,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 618,
			"versionNonce": 1675259167,
			"isDeleted": false,
			"id": "xpBJKzNYdQASbBKsk9zXC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 327.7420897044565,
			"y": -935.5865443791542,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 965809119,
			"groupIds": [
				"BJbvsLu8Wih8jbmnesSsy"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085343,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 553,
			"versionNonce": 791001169,
			"isDeleted": false,
			"id": "sRXwWMFk4MKFUKCYbRaB_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 114.74208970445636,
			"y": -868.5865443791542,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 656490495,
			"groupIds": [
				"BJbvsLu8Wih8jbmnesSsy"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085343,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 588,
			"versionNonce": 158167359,
			"isDeleted": false,
			"id": "d2X-VO8mmYQXL5TtfzZUX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 186.74208970445636,
			"y": -869.5865443791542,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 639035423,
			"groupIds": [
				"BJbvsLu8Wih8jbmnesSsy"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085343,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 629,
			"versionNonce": 592217649,
			"isDeleted": false,
			"id": "R-XfJM-SLy-8zp8te-WeH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 258.7420897044566,
			"y": -870.5865443791542,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1684180031,
			"groupIds": [
				"BJbvsLu8Wih8jbmnesSsy"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085343,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 680,
			"versionNonce": 1783296351,
			"isDeleted": false,
			"id": "eSu9QDgtBk-HdhqRFQXVU",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 330.7420897044566,
			"y": -869.5865443791542,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2112138335,
			"groupIds": [
				"BJbvsLu8Wih8jbmnesSsy"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085343,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 543,
			"versionNonce": 1763612689,
			"isDeleted": false,
			"id": "R2-28rxEoq7n9WRLx8j0r",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 113.74208970445636,
			"y": -801.5865443791542,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1047382143,
			"groupIds": [
				"BJbvsLu8Wih8jbmnesSsy"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085343,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 578,
			"versionNonce": 801336703,
			"isDeleted": false,
			"id": "UQD_51XOVTdh4LN6OIZ7X",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 185.74208970445636,
			"y": -802.5865443791542,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 599679135,
			"groupIds": [
				"BJbvsLu8Wih8jbmnesSsy"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085343,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 619,
			"versionNonce": 848522737,
			"isDeleted": false,
			"id": "hzBPUfYhaKXrd3jk5oFAE",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 257.7420897044566,
			"y": -803.5865443791542,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 528938175,
			"groupIds": [
				"BJbvsLu8Wih8jbmnesSsy"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085343,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 670,
			"versionNonce": 85419423,
			"isDeleted": false,
			"id": "8qz23DyYvsl9hXa1HfBaS",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 329.7420897044566,
			"y": -802.5865443791542,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 426247391,
			"groupIds": [
				"BJbvsLu8Wih8jbmnesSsy"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085343,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 526,
			"versionNonce": 112363473,
			"isDeleted": false,
			"id": "C4VwSmMYHz7XDCcRdZcY7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 114.74208970445636,
			"y": -735.5865443791542,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 821170431,
			"groupIds": [
				"BJbvsLu8Wih8jbmnesSsy"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085343,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 561,
			"versionNonce": 1500993983,
			"isDeleted": false,
			"id": "moCLWRsEzzy1dn3FAL5Og",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 186.74208970445636,
			"y": -736.5865443791542,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1067817247,
			"groupIds": [
				"BJbvsLu8Wih8jbmnesSsy"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085343,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 602,
			"versionNonce": 529753521,
			"isDeleted": false,
			"id": "3awIEEttAWjp80rFgkFDw",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 258.7420897044566,
			"y": -737.5865443791542,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 452140351,
			"groupIds": [
				"BJbvsLu8Wih8jbmnesSsy"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085343,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 653,
			"versionNonce": 1644415455,
			"isDeleted": false,
			"id": "VM0LUUenrmY62mL92E961",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 330.7420897044566,
			"y": -736.5865443791542,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 372972895,
			"groupIds": [
				"BJbvsLu8Wih8jbmnesSsy"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085344,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 212,
			"versionNonce": 140347281,
			"isDeleted": false,
			"id": "KUPiPgkH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 166.9326265659829,
			"y": -983.7977626482053,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 200.1797637939453,
			"height": 25,
			"seed": 741130207,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085344,
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
			"version": 368,
			"versionNonce": 1540175359,
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
			"updated": 1706103085344,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 99,
			"versionNonce": 2068344177,
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
			"updated": 1706103085344,
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
			"version": 86,
			"versionNonce": 232005151,
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
			"updated": 1706103085344,
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
			"version": 105,
			"versionNonce": 2140903249,
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
			"updated": 1706103085344,
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
			"version": 149,
			"versionNonce": 185139775,
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
			"updated": 1706103085344,
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
			"version": 107,
			"versionNonce": 1202619697,
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
			"updated": 1706103085344,
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
			"version": 126,
			"versionNonce": 877421151,
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
			"updated": 1706103085344,
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
			"version": 315,
			"versionNonce": 1323874065,
			"isDeleted": false,
			"id": "cNKxMshdM9QvQnb1zEP3h",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -355.90525992186997,
			"y": -707.9126411057267,
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
			"updated": 1706103085344,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 139,
			"versionNonce": 2054078079,
			"isDeleted": false,
			"id": "Pq9HER06",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -937.186407279952,
			"y": -313.28620635892577,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 355.95050048828125,
			"height": 52.50135083986754,
			"seed": 680648127,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085344,
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
			"version": 543,
			"versionNonce": 935439601,
			"isDeleted": false,
			"id": "lbUQKqC9lWXHdbwXCYPfN",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -940.462239769681,
			"y": -171.84290649241234,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 319669439,
			"groupIds": [
				"F4yXK2E895H37IDC85831"
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
			"updated": 1706103085344,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 48,
			"versionNonce": 1613797023,
			"isDeleted": false,
			"id": "QdgKowt2",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -911.8912047614007,
			"y": -151.89187423071405,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 13.759994506835938,
			"height": 25,
			"seed": 703549553,
			"groupIds": [
				"F4yXK2E895H37IDC85831"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085344,
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
			"version": 578,
			"versionNonce": 1774249681,
			"isDeleted": false,
			"id": "CbTn2oL88hnizUtTql36v",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -868.462239769681,
			"y": -172.84290649241234,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 328520927,
			"groupIds": [
				"F4yXK2E895H37IDC85831"
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
			"updated": 1706103085344,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 48,
			"versionNonce": 1010985663,
			"isDeleted": false,
			"id": "2i9gmtGq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -835.7212065924554,
			"y": -152.89187423071405,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.4199981689453125,
			"height": 25,
			"seed": 79292881,
			"groupIds": [
				"F4yXK2E895H37IDC85831"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085344,
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
			"version": 619,
			"versionNonce": 1870521521,
			"isDeleted": false,
			"id": "TnZU6tFgQBzRWuptsS1to",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -796.4622397696809,
			"y": -173.84290649241234,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1829036287,
			"groupIds": [
				"F4yXK2E895H37IDC85831"
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
			"updated": 1706103085344,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 48,
			"versionNonce": 994360031,
			"isDeleted": false,
			"id": "8mqEh0CH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -768.1312026251701,
			"y": -153.89187423071405,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 14.239990234375,
			"height": 25,
			"seed": 1792583473,
			"groupIds": [
				"F4yXK2E895H37IDC85831"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085344,
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
			"version": 670,
			"versionNonce": 346039953,
			"isDeleted": false,
			"id": "YGLzkuY862dKTXada6NUZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -724.4622397696809,
			"y": -172.84290649241234,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 283011359,
			"groupIds": [
				"F4yXK2E895H37IDC85831"
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
			"updated": 1706103085344,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 48,
			"versionNonce": 566757119,
			"isDeleted": false,
			"id": "eUwVI6or",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -695.8211974371818,
			"y": -152.89187423071405,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 13.619979858398438,
			"height": 25,
			"seed": 255133841,
			"groupIds": [
				"F4yXK2E895H37IDC85831"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085344,
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
			"version": 605,
			"versionNonce": 1138699377,
			"isDeleted": false,
			"id": "ZhezDouLl32dVbMP5ZDSj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -937.462239769681,
			"y": -105.84290649241234,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1821502783,
			"groupIds": [
				"F4yXK2E895H37IDC85831"
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
			"updated": 1706103085344,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 48,
			"versionNonce": 1313656607,
			"isDeleted": false,
			"id": "DLsHc56w",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -908.4112014044671,
			"y": -85.89187423071405,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.79998779296875,
			"height": 25,
			"seed": 583568881,
			"groupIds": [
				"F4yXK2E895H37IDC85831"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085344,
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
			"version": 640,
			"versionNonce": 620918353,
			"isDeleted": false,
			"id": "VhG6DmnMNcAGPuIfM2PqJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -865.462239769681,
			"y": -106.84290649241234,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1803545951,
			"groupIds": [
				"F4yXK2E895H37IDC85831"
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
			"updated": 1706103085344,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 48,
			"versionNonce": 2068026175,
			"isDeleted": false,
			"id": "s6OV9AZJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -836.191200183764,
			"y": -86.89187423071405,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.3599853515625,
			"height": 25,
			"seed": 178042705,
			"groupIds": [
				"F4yXK2E895H37IDC85831"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085344,
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
			"version": 681,
			"versionNonce": 2061599793,
			"isDeleted": false,
			"id": "-0NIJYkTtNahrlzS6ib4I",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -793.4622397696808,
			"y": -107.84290649241234,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 955836799,
			"groupIds": [
				"F4yXK2E895H37IDC85831"
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
			"updated": 1706103085344,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 48,
			"versionNonce": 1091359583,
			"isDeleted": false,
			"id": "tHsNmMB5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -764.4112014044669,
			"y": -87.89187423071405,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.79998779296875,
			"height": 25,
			"seed": 1439368369,
			"groupIds": [
				"F4yXK2E895H37IDC85831"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085344,
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
			"version": 732,
			"versionNonce": 1097061905,
			"isDeleted": false,
			"id": "mx_mvg8AXggpRtvxOxAdQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -721.4622397696808,
			"y": -106.84290649241234,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1111318943,
			"groupIds": [
				"F4yXK2E895H37IDC85831"
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
			"updated": 1706103085344,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 48,
			"versionNonce": 1475940223,
			"isDeleted": false,
			"id": "kGdmLr1x",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -691.3912047614004,
			"y": -86.89187423071405,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 10.759994506835938,
			"height": 25,
			"seed": 1937569297,
			"groupIds": [
				"F4yXK2E895H37IDC85831"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085344,
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
			"version": 595,
			"versionNonce": 192998385,
			"isDeleted": false,
			"id": "pYmfsxpE_Kc8UhWlg8FL2",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -938.462239769681,
			"y": -38.84290649241234,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2021512639,
			"groupIds": [
				"F4yXK2E895H37IDC85831"
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
			"updated": 1706103085344,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 48,
			"versionNonce": 440977311,
			"isDeleted": false,
			"id": "AEh1fE2M",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -910.6612014044671,
			"y": -18.891874230714052,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 15.29998779296875,
			"height": 25,
			"seed": 686558065,
			"groupIds": [
				"F4yXK2E895H37IDC85831"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085344,
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
			"version": 631,
			"versionNonce": 557860305,
			"isDeleted": false,
			"id": "QCFUzJZqo2GEkwRi5TS5A",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -866.462239769681,
			"y": -39.84290649241234,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1390069215,
			"groupIds": [
				"F4yXK2E895H37IDC85831"
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
			"updated": 1706103085345,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 45,
			"versionNonce": 1177320383,
			"isDeleted": false,
			"id": "c6csVKkK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -837.1012038458733,
			"y": -19.891874230714052,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.17999267578125,
			"height": 25,
			"seed": 698774449,
			"groupIds": [
				"F4yXK2E895H37IDC85831"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085345,
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
			"version": 671,
			"versionNonce": 1572430769,
			"isDeleted": false,
			"id": "3v3ShA7h3yriV7NJwRC7D",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -794.4622397696808,
			"y": -40.84290649241234,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 275034623,
			"groupIds": [
				"F4yXK2E895H37IDC85831"
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
			"updated": 1706103085345,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 47,
			"versionNonce": 2143595487,
			"isDeleted": false,
			"id": "NPfed90H",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -768.6012038458731,
			"y": -20.891874230714052,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.17999267578125,
			"height": 25,
			"seed": 626197777,
			"groupIds": [
				"F4yXK2E895H37IDC85831"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085345,
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
			"version": 722,
			"versionNonce": 1293141393,
			"isDeleted": false,
			"id": "sGQUIVQPggy2bjcHgt1Uq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -722.4622397696808,
			"y": -39.84290649241234,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 974920223,
			"groupIds": [
				"F4yXK2E895H37IDC85831"
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
			"updated": 1706103085345,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 47,
			"versionNonce": 320985087,
			"isDeleted": false,
			"id": "GDayvvTo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -692.4312056769278,
			"y": -19.891874230714052,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 10.839996337890625,
			"height": 25,
			"seed": 114967633,
			"groupIds": [
				"F4yXK2E895H37IDC85831"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085345,
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
			"version": 578,
			"versionNonce": 176614257,
			"isDeleted": false,
			"id": "dgTWZYvDEn7gjrvtpNih3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -937.462239769681,
			"y": 27.15709350758766,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1693548095,
			"groupIds": [
				"F4yXK2E895H37IDC85831"
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
			"updated": 1706103085345,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 47,
			"versionNonce": 1984200735,
			"isDeleted": false,
			"id": "8hGtClaI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -911.8412017096429,
			"y": 47.10812576928595,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.659988403320312,
			"height": 25,
			"seed": 708383633,
			"groupIds": [
				"F4yXK2E895H37IDC85831"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085345,
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
			"version": 613,
			"versionNonce": 1582978385,
			"isDeleted": false,
			"id": "1vA0SOrwjTs2NrBLIly_j",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -865.462239769681,
			"y": 26.15709350758766,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 868572767,
			"groupIds": [
				"F4yXK2E895H37IDC85831"
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
			"updated": 1706103085345,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 47,
			"versionNonce": 186459199,
			"isDeleted": false,
			"id": "CDIA1u84",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -839.5311965216546,
			"y": 46.10812576928595,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.03997802734375,
			"height": 25,
			"seed": 1283683025,
			"groupIds": [
				"F4yXK2E895H37IDC85831"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085345,
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
			"version": 654,
			"versionNonce": 468026161,
			"isDeleted": false,
			"id": "3f1Q_e2YF1cP-2OpQM5ja",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -793.4622397696808,
			"y": 25.15709350758766,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 426261119,
			"groupIds": [
				"F4yXK2E895H37IDC85831"
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
			"updated": 1706103085345,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 47,
			"versionNonce": 562840671,
			"isDeleted": false,
			"id": "wLKvEoWD",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -767.1212004889395,
			"y": 45.10812576928595,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 18.219985961914062,
			"height": 25,
			"seed": 1271751185,
			"groupIds": [
				"F4yXK2E895H37IDC85831"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085345,
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
			"version": 705,
			"versionNonce": 1066398993,
			"isDeleted": false,
			"id": "Ehw_J5RUv-cZACwvOHQOj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -721.4622397696808,
			"y": 26.15709350758766,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1520079519,
			"groupIds": [
				"F4yXK2E895H37IDC85831"
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
			"updated": 1706103085345,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 47,
			"versionNonce": 962748543,
			"isDeleted": false,
			"id": "MaVieSbt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -694.9011992682364,
			"y": 46.10812576928595,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 17.779983520507812,
			"height": 25,
			"seed": 1730863441,
			"groupIds": [
				"F4yXK2E895H37IDC85831"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085345,
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
			"version": 251,
			"versionNonce": 1288776433,
			"isDeleted": false,
			"id": "1V1JEToc",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -828.8120945081341,
			"y": -213.1616267289922,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 69.01992797851562,
			"height": 25,
			"seed": 1469346417,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085345,
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
			"version": 398,
			"versionNonce": 73398431,
			"isDeleted": false,
			"id": "CkumrwLf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -356.05077768945876,
			"y": -210.52691236871544,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 233.15972900390625,
			"height": 25,
			"seed": 2139075615,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085345,
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
			"version": 650,
			"versionNonce": 1815127249,
			"isDeleted": false,
			"id": "RaTrcx5YuKvNwI0MZpeQX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -353.89985656239946,
			"y": -823.4659851413558,
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
			"updated": 1706103085345,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 685,
			"versionNonce": 674598079,
			"isDeleted": false,
			"id": "g476AUJprXbLdbAbvkNrv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -281.89985656239946,
			"y": -824.4659851413558,
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
			"updated": 1706103085345,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 726,
			"versionNonce": 1229316785,
			"isDeleted": false,
			"id": "gEgyLTAmjqx5q3Km_Kns4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -209.89985656239946,
			"y": -825.4659851413558,
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
			"updated": 1706103085345,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 777,
			"versionNonce": 1082367199,
			"isDeleted": false,
			"id": "KIpQRZcek03Llwrai1gBj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -137.89985656239946,
			"y": -824.4659851413558,
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
			"updated": 1706103085345,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1363,
			"versionNonce": 817390737,
			"isDeleted": false,
			"id": "VSe42cW8xv4ihymaGevEr",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -709.3028783914484,
			"y": 693.2233100393096,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 163755551,
			"groupIds": [
				"MGPCIMhso9xvLU4rxKq8X"
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
			"updated": 1706103085345,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1399,
			"versionNonce": 551201023,
			"isDeleted": false,
			"id": "fbHKwgW8VRRMmp832_gQq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -637.3028783914484,
			"y": 692.2233100393096,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1030003263,
			"groupIds": [
				"MGPCIMhso9xvLU4rxKq8X"
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
			"updated": 1706103085345,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1437,
			"versionNonce": 1849666161,
			"isDeleted": false,
			"id": "Rf-fVMwyCy9ucg7LFvdDK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -565.3028783914484,
			"y": 691.2233100393096,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1198848607,
			"groupIds": [
				"MGPCIMhso9xvLU4rxKq8X"
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
			"updated": 1706103085345,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1489,
			"versionNonce": 1455108383,
			"isDeleted": false,
			"id": "cQ7OraStRgSbzPhID7wA9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -493.3028783914484,
			"y": 692.2233100393096,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1287935615,
			"groupIds": [
				"MGPCIMhso9xvLU4rxKq8X"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085345,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 374,
			"versionNonce": 1789080657,
			"isDeleted": false,
			"id": "chPbylAe",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -881.6103534499986,
			"y": 2367.2339094707845,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.4799957275390625,
			"height": 75,
			"seed": 265931839,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085345,
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
			"version": 1117,
			"versionNonce": 1804973375,
			"isDeleted": false,
			"id": "JMR2KrUhSZMu32fIXVHgM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -711.7311259246325,
			"y": 1718.343294273217,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 763359793,
			"groupIds": [
				"Q7x36DCUlwepWI5KxwLB6"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085345,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1152,
			"versionNonce": 163217969,
			"isDeleted": false,
			"id": "HwCCNRBEY9owL3Fh31N1K",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -639.7311259246325,
			"y": 1717.343294273217,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 839156753,
			"groupIds": [
				"Q7x36DCUlwepWI5KxwLB6"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085345,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1193,
			"versionNonce": 1724560735,
			"isDeleted": false,
			"id": "_t--f7ZWmzE9i_gKP1iXz",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -567.7311259246325,
			"y": 1716.343294273217,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1071372785,
			"groupIds": [
				"Q7x36DCUlwepWI5KxwLB6"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085345,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1244,
			"versionNonce": 1215108113,
			"isDeleted": false,
			"id": "cAaREmsr1RQFxOD4M7cpq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -495.73112592463247,
			"y": 1717.343294273217,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 671970257,
			"groupIds": [
				"Q7x36DCUlwepWI5KxwLB6"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085345,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 294,
			"versionNonce": 262844799,
			"isDeleted": false,
			"id": "Lq3uwb0Z",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 139.54475470783336,
			"y": -495.03007704649303,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 123.05987548828125,
			"height": 25,
			"seed": 1622124767,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085345,
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
			"type": "text",
			"version": 126,
			"versionNonce": 447900145,
			"isDeleted": false,
			"id": "PvPYaUZy",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -764.0810922624197,
			"y": -253.04515213826375,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 480.46875,
			"height": 24,
			"seed": 1935541215,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085345,
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
			"version": 341,
			"versionNonce": 1870014879,
			"isDeleted": false,
			"id": "G2BFPmuY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -94.86085054722275,
			"y": -87.44116574674052,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 114.71987915039062,
			"height": 25,
			"seed": 616467775,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085345,
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
			"version": 365,
			"versionNonce": 160564177,
			"isDeleted": false,
			"id": "6iJtYb9L",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -94.61961678397302,
			"y": -19.342582714687467,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 123.53987121582031,
			"height": 25,
			"seed": 1367899263,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085345,
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
			"version": 363,
			"versionNonce": 324902335,
			"isDeleted": false,
			"id": "59pQIttz",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -92.00044051350915,
			"y": 48.75600031736536,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 122.91986083984375,
			"height": 25,
			"seed": 234882481,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085345,
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
			"version": 79,
			"versionNonce": 287531441,
			"isDeleted": false,
			"id": "_a2f6IYyTmH1CCQUigtWB",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -963.1384888176515,
			"y": -183.63698097097887,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 337.8737388898013,
			"height": 79.88487624913904,
			"seed": 901797393,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085345,
			"link": null,
			"locked": false
		},
		{
			"type": "arrow",
			"version": 212,
			"versionNonce": 1455673233,
			"isDeleted": false,
			"id": "r38MEanYqMIomByPnbHWE",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -627.8839261983138,
			"y": -139.11098437309806,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 217.3916304484768,
			"height": 0,
			"seed": 1565184479,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103118551,
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
			"version": 146,
			"versionNonce": 1049494417,
			"isDeleted": false,
			"id": "NlX4MGamw7KhIEddvvm3-",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -967.7220472909626,
			"y": -114.88360387130996,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 337.8737388898013,
			"height": 79.88487624913904,
			"seed": 319704095,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085345,
			"link": null,
			"locked": false
		},
		{
			"type": "arrow",
			"version": 357,
			"versionNonce": 900052337,
			"isDeleted": false,
			"id": "M2SaF_sosiZmlPCNJp6MR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -633.7770728068566,
			"y": -70.35760727342918,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 222.62998298940397,
			"height": 2.6191762704635835,
			"seed": 80572479,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103118551,
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
			"version": 164,
			"versionNonce": 235497841,
			"isDeleted": false,
			"id": "b9d0zshBVgjEZKqcTumyG",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -961.1741066148038,
			"y": -48.09460897448875,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 337.8737388898013,
			"height": 79.88487624913904,
			"seed": 2011415711,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085345,
			"link": null,
			"locked": false
		},
		{
			"type": "arrow",
			"version": 451,
			"versionNonce": 252698449,
			"isDeleted": false,
			"id": "KNXaJgnDmAgnSZ6cgiXOG",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -625.919543995466,
			"y": -3.5686123766079447,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 215.42724824562902,
			"height": 4.440892098500626e-16,
			"seed": 291494079,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103118551,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "tV_SB2EWl4r3T_ko8R6Z8",
				"gap": 11.580367695652626,
				"focus": -0.07691172349065861
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
					4.440892098500626e-16
				]
			]
		},
		{
			"type": "ellipse",
			"version": 130,
			"versionNonce": 148706129,
			"isDeleted": false,
			"id": "5BnOn6lb6xl0gLRfrkdkH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -962.4836947500355,
			"y": 18.694385922332344,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 337.8737388898013,
			"height": 79.88487624913904,
			"seed": 170073713,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085345,
			"link": null,
			"locked": false
		},
		{
			"type": "arrow",
			"version": 334,
			"versionNonce": 1901710641,
			"isDeleted": false,
			"id": "7v_Is6QWj1QHfGJcuRGPl",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -627.229132130698,
			"y": 61.9107943849815,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 216.73683638086095,
			"height": 0,
			"seed": 569911377,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103118552,
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
			"version": 1344,
			"versionNonce": 593527089,
			"isDeleted": false,
			"id": "G6DLWkPDPkaQx2uaBwReK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -55.99134721211999,
			"y": 616.3565315868109,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 525470897,
			"groupIds": [
				"c3Y3l-_yk7vUmgo2BDWrC"
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
			"updated": 1706103085345,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 216,
			"versionNonce": 566765151,
			"isDeleted": false,
			"id": "1P6LCTvL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -43.97781495042169,
			"y": 636.8075638485092,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1761994449,
			"groupIds": [
				"c3Y3l-_yk7vUmgo2BDWrC"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085345,
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
			"version": 1380,
			"versionNonce": 1526412049,
			"isDeleted": false,
			"id": "vVdHLJUvugsrkkfkgCkHf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 16.00865278788001,
			"y": 615.3565315868109,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 128929425,
			"groupIds": [
				"c3Y3l-_yk7vUmgo2BDWrC"
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
			"updated": 1706103085345,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 273,
			"versionNonce": 1272054399,
			"isDeleted": false,
			"id": "5wImJJ0m",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 28.02218504957831,
			"y": 635.8075638485092,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1022335761,
			"groupIds": [
				"c3Y3l-_yk7vUmgo2BDWrC"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085345,
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
			"version": 1422,
			"versionNonce": 337946865,
			"isDeleted": false,
			"id": "iFihDn5Yiwf_57DNwSLN4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 88.00865278788001,
			"y": 614.3565315868109,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1523143793,
			"groupIds": [
				"c3Y3l-_yk7vUmgo2BDWrC"
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
			"updated": 1706103085345,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 271,
			"versionNonce": 747330207,
			"isDeleted": false,
			"id": "Dbxs3AFr",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 100.02218504957831,
			"y": 634.8075638485092,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 958819199,
			"groupIds": [
				"c3Y3l-_yk7vUmgo2BDWrC"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085345,
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
			"version": 1470,
			"versionNonce": 946102993,
			"isDeleted": false,
			"id": "AEyDpTSayPmbMji_1v_kX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 160.00865278788,
			"y": 615.3565315868109,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 744988241,
			"groupIds": [
				"c3Y3l-_yk7vUmgo2BDWrC"
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
			"updated": 1706103085345,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 270,
			"versionNonce": 950316735,
			"isDeleted": false,
			"id": "crrPM4oH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 172.0221850495783,
			"y": 635.8075638485092,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 219385585,
			"groupIds": [
				"c3Y3l-_yk7vUmgo2BDWrC"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085345,
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
			"version": 648,
			"versionNonce": 340910257,
			"isDeleted": false,
			"id": "sFLsuIm_dUPnTBebsF0qo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -400.9119280541844,
			"y": -171.5155094586044,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1027337905,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF"
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
			"updated": 1706103085345,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 153,
			"versionNonce": 2059304671,
			"isDeleted": false,
			"id": "UsKk9xVU",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -372.34089304590407,
			"y": -151.56447719690613,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 13.759994506835938,
			"height": 25,
			"seed": 1376579729,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085345,
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
			"version": 682,
			"versionNonce": 1972675217,
			"isDeleted": false,
			"id": "1OPbMYSm7OZQ_x7e45nLk",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -328.9119280541844,
			"y": -172.5155094586044,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 220378737,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF"
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
			"updated": 1706103085345,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 153,
			"versionNonce": 1432963839,
			"isDeleted": false,
			"id": "t93piEDc",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -296.17089487695876,
			"y": -152.56447719690613,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.4199981689453125,
			"height": 25,
			"seed": 1363460177,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085345,
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
			"version": 723,
			"versionNonce": 149170289,
			"isDeleted": false,
			"id": "VMclSn6Wrwg4KGUe6ziBp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -256.9119280541844,
			"y": -173.5155094586044,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1011519025,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF"
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
			"updated": 1706103085345,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 153,
			"versionNonce": 86348575,
			"isDeleted": false,
			"id": "CcANw0KC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -228.5808909096736,
			"y": -153.56447719690613,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 14.239990234375,
			"height": 25,
			"seed": 1159438353,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085345,
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
			"version": 774,
			"versionNonce": 2013786705,
			"isDeleted": false,
			"id": "vwHIBncpIfHM0bHsYtUZM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -184.9119280541844,
			"y": -172.5155094586044,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 430929393,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF"
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
			"updated": 1706103085345,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 153,
			"versionNonce": 1650710335,
			"isDeleted": false,
			"id": "Pus9s5Ye",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -156.27088572168532,
			"y": -152.56447719690613,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 13.619979858398438,
			"height": 25,
			"seed": 1024298961,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085345,
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
			"version": 710,
			"versionNonce": 1205305393,
			"isDeleted": false,
			"id": "4xmzxtGFQzETfmpGHwzRg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -397.9119280541844,
			"y": -105.51550945860441,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1699573169,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF"
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
			"updated": 1706103085346,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 153,
			"versionNonce": 1669633887,
			"isDeleted": false,
			"id": "iDjPIGMN",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -368.8608896889705,
			"y": -85.56447719690613,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.79998779296875,
			"height": 25,
			"seed": 429297553,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085346,
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
			"version": 744,
			"versionNonce": 1983533585,
			"isDeleted": false,
			"id": "NH0Mif3kCIjOEb_cAVDJH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -325.9119280541844,
			"y": -106.51550945860441,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 270562673,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF"
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
			"updated": 1706103085346,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 153,
			"versionNonce": 1591235455,
			"isDeleted": false,
			"id": "qFDqYGZm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -296.64088846826735,
			"y": -86.56447719690613,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.3599853515625,
			"height": 25,
			"seed": 1278386001,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085346,
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
			"version": 785,
			"versionNonce": 1479010289,
			"isDeleted": false,
			"id": "WCw5H7yWGGssyomqGqdm8",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -253.9119280541844,
			"y": -107.51550945860441,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2082770225,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF"
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
			"updated": 1706103085346,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 153,
			"versionNonce": 211782559,
			"isDeleted": false,
			"id": "6ghGHdv5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -224.86088968897047,
			"y": -87.56447719690613,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.79998779296875,
			"height": 25,
			"seed": 392019729,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085346,
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
			"version": 836,
			"versionNonce": 933741009,
			"isDeleted": false,
			"id": "eGxon2JwwRvqv-_VlAmQX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -181.9119280541844,
			"y": -106.51550945860441,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1012249841,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF"
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
			"updated": 1706103085346,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 153,
			"versionNonce": 1225441215,
			"isDeleted": false,
			"id": "rcFGGcUZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -151.84089304590407,
			"y": -86.56447719690613,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 10.759994506835938,
			"height": 25,
			"seed": 1318317777,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085346,
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
			"version": 700,
			"versionNonce": 835805105,
			"isDeleted": false,
			"id": "tV_SB2EWl4r3T_ko8R6Z8",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -398.9119280541844,
			"y": -38.51550945860441,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1420815537,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF"
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
			"updated": 1706103085346,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 153,
			"versionNonce": 372928479,
			"isDeleted": false,
			"id": "gpf7DSxv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -371.1108896889705,
			"y": -18.564477196906125,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 15.29998779296875,
			"height": 25,
			"seed": 374419089,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085346,
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
			"version": 735,
			"versionNonce": 1422672273,
			"isDeleted": false,
			"id": "Gpl7A_cxVB2PpHKDax_wg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -326.9119280541844,
			"y": -39.51550945860441,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2049913969,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF"
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
			"updated": 1706103085346,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 150,
			"versionNonce": 1581194239,
			"isDeleted": false,
			"id": "nVyIUaLZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -297.5508921303767,
			"y": -19.564477196906125,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.17999267578125,
			"height": 25,
			"seed": 605126225,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085346,
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
			"version": 775,
			"versionNonce": 2110777201,
			"isDeleted": false,
			"id": "1m3GJgZe-e9yIILsnFZhn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -254.9119280541844,
			"y": -40.51550945860441,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1389333553,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF"
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
			"updated": 1706103085346,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 152,
			"versionNonce": 1964590111,
			"isDeleted": false,
			"id": "lveMVwJH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -229.05089213037672,
			"y": -20.564477196906125,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.17999267578125,
			"height": 25,
			"seed": 2119228945,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085346,
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
			"version": 826,
			"versionNonce": 1998836049,
			"isDeleted": false,
			"id": "nZiY4j6iIHkJ2UqCpoeBM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -182.9119280541844,
			"y": -39.51550945860441,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 898429937,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF"
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
			"updated": 1706103085346,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 152,
			"versionNonce": 1522100287,
			"isDeleted": false,
			"id": "bAvsXx9H",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -152.8808939614314,
			"y": -19.564477196906125,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 10.839996337890625,
			"height": 25,
			"seed": 1015762385,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085346,
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
			"version": 706,
			"versionNonce": 1444904753,
			"isDeleted": false,
			"id": "v7_p_Y3YbNgMRaF3xT7Lg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -397.9119280541844,
			"y": 27.484490541395587,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1784900529,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF"
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
			"updated": 1706103085346,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 175,
			"versionNonce": 1023412319,
			"isDeleted": false,
			"id": "Dfana7Bg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -372.29088999414626,
			"y": 47.435522803093875,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.659988403320312,
			"height": 25,
			"seed": 1195167121,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085346,
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
			"version": 740,
			"versionNonce": 422211857,
			"isDeleted": false,
			"id": "24MUQuspixyJkvDhTcSCZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -325.9119280541844,
			"y": 26.484490541395587,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1783559025,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF"
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
			"updated": 1706103085346,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 175,
			"versionNonce": 968729727,
			"isDeleted": false,
			"id": "UlsUrtU9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -299.980884806158,
			"y": 46.435522803093875,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.03997802734375,
			"height": 25,
			"seed": 400645457,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085346,
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
			"version": 781,
			"versionNonce": 96216817,
			"isDeleted": false,
			"id": "aWbYRtuD6CDddMT4kD2FR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -253.9119280541844,
			"y": 25.484490541395587,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 525044529,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF"
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
			"updated": 1706103085346,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 175,
			"versionNonce": 1622326431,
			"isDeleted": false,
			"id": "4P4TXm50",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -227.57088877344313,
			"y": 45.435522803093875,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 18.219985961914062,
			"height": 25,
			"seed": 2029321489,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085346,
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
			"version": 832,
			"versionNonce": 1180442833,
			"isDeleted": false,
			"id": "wOA80GM63oHMkFP_RZgPz",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -181.9119280541844,
			"y": 26.484490541395587,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 609563377,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF"
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
			"updated": 1706103085346,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 175,
			"versionNonce": 1972359359,
			"isDeleted": false,
			"id": "IXQka8y7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -155.35088755274,
			"y": 46.435522803093875,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 17.779983520507812,
			"height": 25,
			"seed": 1173597393,
			"groupIds": [
				"c0bVY0jgc7wIsy8I-xFEF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085346,
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
			"version": 787,
			"versionNonce": 1218567857,
			"isDeleted": false,
			"id": "0iprlmXQCS5sbqkDf4axb",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -395.48316364848904,
			"y": 146.35831209129617,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1685201457,
			"groupIds": [
				"-4EoIPXPXepczspvZCZuW"
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
			"updated": 1706103085346,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 255,
			"versionNonce": 1911906527,
			"isDeleted": false,
			"id": "P8VCoxUe",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -369.8621255884509,
			"y": 166.30934435299446,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.659988403320312,
			"height": 25,
			"seed": 724612113,
			"groupIds": [
				"-4EoIPXPXepczspvZCZuW"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085346,
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
			"version": 820,
			"versionNonce": 1530192017,
			"isDeleted": false,
			"id": "2D2V8_nAns5YvyFz6dBFJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -323.48316364848904,
			"y": 145.35831209129617,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 604113393,
			"groupIds": [
				"-4EoIPXPXepczspvZCZuW"
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
			"updated": 1706103085346,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 255,
			"versionNonce": 1198779647,
			"isDeleted": false,
			"id": "JPFCL3nc",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -297.5521204004626,
			"y": 165.30934435299446,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.03997802734375,
			"height": 25,
			"seed": 133014481,
			"groupIds": [
				"-4EoIPXPXepczspvZCZuW"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085346,
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
			"version": 863,
			"versionNonce": 197961329,
			"isDeleted": false,
			"id": "i6g8j_hxmWHBLRkKCXP7K",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -251.48316364848904,
			"y": 144.35831209129617,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 51052977,
			"groupIds": [
				"-4EoIPXPXepczspvZCZuW"
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
			"updated": 1706103085346,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 255,
			"versionNonce": 1636562207,
			"isDeleted": false,
			"id": "Dj3wbrB4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -225.14212436774778,
			"y": 164.30934435299446,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 18.219985961914062,
			"height": 25,
			"seed": 1384227729,
			"groupIds": [
				"-4EoIPXPXepczspvZCZuW"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085346,
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
			"version": 912,
			"versionNonce": 1160818769,
			"isDeleted": false,
			"id": "35DR2Xz0U1TVPJOalZOY8",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -179.48316364848904,
			"y": 145.35831209129617,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 579406193,
			"groupIds": [
				"-4EoIPXPXepczspvZCZuW"
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
			"updated": 1706103085346,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 256,
			"versionNonce": 1739454783,
			"isDeleted": false,
			"id": "t2fAhJfi",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -152.92212314704466,
			"y": 165.30934435299446,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 17.779983520507812,
			"height": 25,
			"seed": 745059153,
			"groupIds": [
				"-4EoIPXPXepczspvZCZuW"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085346,
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
			"version": 1217,
			"versionNonce": 758677041,
			"isDeleted": false,
			"id": "m8enJcjRj3nDJjjmOnWMG",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -178.46272159113835,
			"y": 306.11995955036895,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2032178097,
			"groupIds": [],
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
			"updated": 1706103085346,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 684,
			"versionNonce": 1060796767,
			"isDeleted": false,
			"id": "I8WM8kUg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -152.84168353110022,
			"y": 326.07099181206723,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.659988403320312,
			"height": 25,
			"seed": 1410659729,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085346,
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
			"version": 1040,
			"versionNonce": 1120636945,
			"isDeleted": false,
			"id": "mOsdpN84jcolJQltVagfI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -394.57211134213173,
			"y": 305.11995955036895,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2044861297,
			"groupIds": [],
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
			"updated": 1706103085346,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 473,
			"versionNonce": 1300362623,
			"isDeleted": false,
			"id": "ciq4QxHc",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -368.6410680941053,
			"y": 325.07099181206723,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.03997802734375,
			"height": 25,
			"seed": 449807697,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085346,
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
			"version": 1086,
			"versionNonce": 1004627441,
			"isDeleted": false,
			"id": "fPwM_ke_72ENhIxe9jNua",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -322.57211134213173,
			"y": 304.11995955036895,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1916056369,
			"groupIds": [],
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
			"updated": 1706103085347,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 473,
			"versionNonce": 2042949023,
			"isDeleted": false,
			"id": "qEcQXzuq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -296.2310720613905,
			"y": 324.07099181206723,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 18.219985961914062,
			"height": 25,
			"seed": 1685660945,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085347,
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
			"version": 1135,
			"versionNonce": 595689425,
			"isDeleted": false,
			"id": "X78EcPP5HZcB-FF35O3lg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -250.57211134213173,
			"y": 305.11995955036895,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1561615089,
			"groupIds": [],
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
			"updated": 1706103085347,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 474,
			"versionNonce": 1865671103,
			"isDeleted": false,
			"id": "VmE1syYR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -224.01107084068735,
			"y": 325.07099181206723,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 17.779983520507812,
			"height": 25,
			"seed": 1821234385,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085347,
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
			"version": 893,
			"versionNonce": 935550385,
			"isDeleted": false,
			"id": "xphzrAFJmNv5V7Zj7k0l_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -397.2514925685174,
			"y": 537.6463585959667,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1462409265,
			"groupIds": [
				"YtpKmzywCCVYRu5IuCLyt"
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
			"updated": 1706103085347,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 366,
			"versionNonce": 519000543,
			"isDeleted": false,
			"id": "GPduDjMG",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -385.24043986004176,
			"y": 557.597390857665,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.87995910644531,
			"height": 25,
			"seed": 1533700625,
			"groupIds": [
				"YtpKmzywCCVYRu5IuCLyt"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085347,
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
			"version": 931,
			"versionNonce": 130973585,
			"isDeleted": false,
			"id": "7KvVIU7ufc6gIYoNuaoyv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -325.2514925685174,
			"y": 536.6463585959667,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1335164913,
			"groupIds": [
				"YtpKmzywCCVYRu5IuCLyt"
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
			"updated": 1706103085347,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 364,
			"versionNonce": 34061823,
			"isDeleted": false,
			"id": "MJk1FqJd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -312.9304346720535,
			"y": 556.597390857665,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.25994873046875,
			"height": 25,
			"seed": 1907481041,
			"groupIds": [
				"YtpKmzywCCVYRu5IuCLyt"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085347,
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
			"version": 970,
			"versionNonce": 1373267313,
			"isDeleted": false,
			"id": "7y0_8af0ZH_KEUw5oi7Pm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -253.2514925685174,
			"y": 535.6463585959667,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1389918129,
			"groupIds": [
				"YtpKmzywCCVYRu5IuCLyt"
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
			"updated": 1706103085347,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 365,
			"versionNonce": 461219359,
			"isDeleted": false,
			"id": "hMuyCd7j",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -240.52043863933864,
			"y": 555.597390857665,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 45.43995666503906,
			"height": 25,
			"seed": 1966102929,
			"groupIds": [
				"YtpKmzywCCVYRu5IuCLyt"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085347,
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
			"version": 1021,
			"versionNonce": 556699473,
			"isDeleted": false,
			"id": "YGYy6YOQVch2RUZqQiJxT",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -181.2514925685174,
			"y": 536.6463585959667,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 703659889,
			"groupIds": [
				"YtpKmzywCCVYRu5IuCLyt"
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
			"updated": 1706103085347,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 366,
			"versionNonce": 977373759,
			"isDeleted": false,
			"id": "OxyJBaFp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -168.3004374186355,
			"y": 556.597390857665,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 44.99995422363281,
			"height": 25,
			"seed": 794945873,
			"groupIds": [
				"YtpKmzywCCVYRu5IuCLyt"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085347,
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
			"version": 256,
			"versionNonce": 740457777,
			"isDeleted": false,
			"id": "rAHdZk8h",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -1049.628756950065,
			"y": 163.01837826628275,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 503.90625,
			"height": 72,
			"seed": 594015249,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085347,
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
			"version": 252,
			"versionNonce": 2066999903,
			"isDeleted": false,
			"id": "ujqJBsSe",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -1055.9047254978107,
			"y": 310.30720324780725,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 632.8125,
			"height": 144,
			"seed": 1581171263,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085347,
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
			"version": 397,
			"versionNonce": 1914547985,
			"isDeleted": false,
			"id": "E2ukN-cbMz8AY25jZUiVk",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -272.2342744381758,
			"y": 627.9491319172672,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 39.55483662710749,
			"height": 40.38757002978338,
			"seed": 748033343,
			"groupIds": [
				"fn3Tb1h4fWSo0MiB8dN_w"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085347,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 373,
			"versionNonce": 186992255,
			"isDeleted": false,
			"id": "7yXa6tPC6BnzLfTNyFJH_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -253.49777287796707,
			"y": 628.7818653199431,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0.8327334026759315,
			"height": 39.55483662710749,
			"seed": 933936785,
			"groupIds": [
				"fn3Tb1h4fWSo0MiB8dN_w"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085347,
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
			"version": 396,
			"versionNonce": 429368561,
			"isDeleted": false,
			"id": "it844jhyaZJKIbcRd-LEy",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -271.4015410354999,
			"y": 647.9347335814899,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.30573652309357,
			"height": 0.4163667013380199,
			"seed": 1252891039,
			"groupIds": [
				"fn3Tb1h4fWSo0MiB8dN_w"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085347,
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
			"version": 274,
			"versionNonce": 685121183,
			"isDeleted": false,
			"id": "MpSaWiDY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -1053.4751759373355,
			"y": 520.2678473412899,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 597.65625,
			"height": 120,
			"seed": 1571643519,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085347,
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
			"version": 223,
			"versionNonce": 236445393,
			"isDeleted": false,
			"id": "cmtiQGkbF8oGk8dX-4GVs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -230.81934137126643,
			"y": 648.9843250415397,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 172.44898687148373,
			"height": 0,
			"seed": 247328543,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085347,
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
			"version": 529,
			"versionNonce": 1727460031,
			"isDeleted": false,
			"id": "CLdrue7i49kja87QBDzSN",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -371.18042382145313,
			"y": 414.71558694786904,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 238.74999999999986,
			"height": 80.00000000000006,
			"seed": 1289824671,
			"groupIds": [],
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
			"updated": 1706103085347,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 485,
			"versionNonce": 1580588209,
			"isDeleted": false,
			"id": "qQriX36K",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -281.1022988214532,
			"y": 442.71558694786904,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 2000937969,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085347,
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
			"version": 213,
			"versionNonce": 1429927153,
			"isDeleted": false,
			"id": "sQz2lLZa_oTWO7niHLFOG",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -359.0746953859841,
			"y": 213.72990803654153,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 221.2499999999999,
			"height": 88.74999999999994,
			"seed": 178014833,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103118552,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "0iprlmXQCS5sbqkDf4axb",
				"gap": 2.4695314218487283,
				"focus": 0.45317238497931284
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
			"version": 178,
			"versionNonce": 1503207057,
			"isDeleted": false,
			"id": "upFM7FvFGerpqaV6cGyK8",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -291.5746953859841,
			"y": 214.97990803654147,
			"strokeColor": "#f08c00",
			"backgroundColor": "transparent",
			"width": 158.7499999999999,
			"height": 21.25,
			"seed": 1136648511,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085347,
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
			"version": 99,
			"versionNonce": 2130349823,
			"isDeleted": false,
			"id": "rEdRblIaUYF95zhimHN1d",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -226.5746953859841,
			"y": 233.72990803654147,
			"strokeColor": "#f08c00",
			"backgroundColor": "transparent",
			"width": 60,
			"height": 43.75,
			"seed": 1768365279,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085347,
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
			"version": 96,
			"versionNonce": 1861821553,
			"isDeleted": false,
			"id": "yzLCYDQG-5JugNyfqK9er",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -364.0746953859841,
			"y": 306.2299080365415,
			"strokeColor": "#f08c00",
			"backgroundColor": "transparent",
			"width": 156.25,
			"height": 23.75,
			"seed": 1856285457,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085347,
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
			"version": 490,
			"versionNonce": 624047089,
			"isDeleted": false,
			"id": "3ThecQRfNwVu63AHZIpEo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -362.8246953859841,
			"y": 371.2299080365414,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 20.814747812966743,
			"height": 42.23567891132757,
			"seed": 1142458001,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103118553,
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
				"focus": -0.4576642335766419
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
			"version": 580,
			"versionNonce": 92835281,
			"isDeleted": false,
			"id": "C8qtbqvQdOlGOzbDdwCYD",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -288.406208274677,
			"y": 368.435836728139,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.3296550777989182,
			"height": 42.529750219729976,
			"seed": 2038724721,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103118553,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "CLdrue7i49kja87QBDzSN",
				"gap": 3.7500000000000284,
				"focus": -0.3321242825998687
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
			"version": 711,
			"versionNonce": 565750705,
			"isDeleted": false,
			"id": "wulaPBkXhgjVfRDMsi-Gq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -217.48356304175564,
			"y": 371.0220240737655,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.0984553878599854,
			"height": 42.274072722602625,
			"seed": 2122963601,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103118553,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "X78EcPP5HZcB-FF35O3lg",
				"gap": 1,
				"focus": 0.04916065451687587
			},
			"endBinding": {
				"elementId": "CLdrue7i49kja87QBDzSN",
				"gap": 1.4194901515008667,
				"focus": 0.26042958899786856
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
			"version": 684,
			"versionNonce": 1642728849,
			"isDeleted": false,
			"id": "cQL51qEhqRvIcOnV7OtU3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -146.73099831441527,
			"y": 372.2101842062025,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 17.827375997965817,
			"height": 39.642074960601406,
			"seed": 442619167,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103118553,
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
				"focus": 0.4574502203445795
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
			"version": 107,
			"versionNonce": 1028928369,
			"isDeleted": false,
			"id": "uPkQn0-NHWG4aCUu4FJVw",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -341.9877147681199,
			"y": 495.77176344339034,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.16301279015886,
			"height": 40.00884027391055,
			"seed": 1866212433,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103118553,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "CLdrue7i49kja87QBDzSN",
				"gap": 1.0561764955211572,
				"focus": 0.4641134340971394
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
			"version": 655,
			"versionNonce": 1480498513,
			"isDeleted": false,
			"id": "qJrsCj2P22LnrZOgS_lNZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -290.8946121468161,
			"y": 498.08436761172425,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.3296550777989182,
			"height": 36.21256491332292,
			"seed": 537676497,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103118553,
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
			"version": 689,
			"versionNonce": 1644219185,
			"isDeleted": false,
			"id": "tKzdGLLrICj5kd7lNxLHs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -218.16254910671887,
			"y": 496.7007162821128,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.3296550777989182,
			"height": 36.21256491332292,
			"seed": 1245414033,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103118553,
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
			"version": 562,
			"versionNonce": 855784721,
			"isDeleted": false,
			"id": "AmLh0OPqdpaaW07rh-UMs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -165.5907059430537,
			"y": 496.23412664512597,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.761883595232234,
			"height": 35.91849360492057,
			"seed": 713447313,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103118553,
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
			"version": 1112,
			"versionNonce": 1055281055,
			"isDeleted": false,
			"id": "PQLcG1Wnx6qOLrYlmErry",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -393.13890918612617,
			"y": 691.752444412929,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 47883551,
			"groupIds": [
				"V4cG-I6sWvcThGu-YhWEq"
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
			"updated": 1706103085348,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 616,
			"versionNonce": 1159675345,
			"isDeleted": false,
			"id": "ZK9a8EGd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -364.56787417784585,
			"y": 711.7034766746273,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 13.759994506835938,
			"height": 25,
			"seed": 1269213503,
			"groupIds": [
				"V4cG-I6sWvcThGu-YhWEq"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085348,
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
			"version": 1152,
			"versionNonce": 232326079,
			"isDeleted": false,
			"id": "AhQj6LTq7JZpeC6n6LRuG",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -321.13890918612617,
			"y": 690.752444412929,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 10299743,
			"groupIds": [
				"V4cG-I6sWvcThGu-YhWEq"
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
			"updated": 1706103085348,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 624,
			"versionNonce": 452549553,
			"isDeleted": false,
			"id": "2KEudYCt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -288.39787600890054,
			"y": 710.7034766746273,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.4199981689453125,
			"height": 25,
			"seed": 789489023,
			"groupIds": [
				"V4cG-I6sWvcThGu-YhWEq"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085348,
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
			"version": 1184,
			"versionNonce": 815805407,
			"isDeleted": false,
			"id": "1Dh982GiS7dhvwiTFuk9J",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -249.13890918612623,
			"y": 689.752444412929,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1715183007,
			"groupIds": [
				"V4cG-I6sWvcThGu-YhWEq"
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
			"updated": 1706103085348,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 615,
			"versionNonce": 1335147921,
			"isDeleted": false,
			"id": "Uzw6Zs2q",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -220.80787204161544,
			"y": 709.7034766746273,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 14.239990234375,
			"height": 25,
			"seed": 2035585471,
			"groupIds": [
				"V4cG-I6sWvcThGu-YhWEq"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085348,
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
			"version": 1240,
			"versionNonce": 793534463,
			"isDeleted": false,
			"id": "52BwDS_de3DoKOLqwLO-9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -177.13890918612623,
			"y": 690.752444412929,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 24773087,
			"groupIds": [
				"V4cG-I6sWvcThGu-YhWEq"
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
			"updated": 1706103085348,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 614,
			"versionNonce": 36234097,
			"isDeleted": false,
			"id": "sbyhaapY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -148.49786685362716,
			"y": 710.7034766746273,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 13.619979858398438,
			"height": 25,
			"seed": 532442623,
			"groupIds": [
				"V4cG-I6sWvcThGu-YhWEq"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085348,
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
			"version": 1173,
			"versionNonce": 1004406815,
			"isDeleted": false,
			"id": "VI7ZNT_4vjSb5vqh26klb",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -390.13890918612594,
			"y": 776.580623501418,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2132563487,
			"groupIds": [],
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
			"updated": 1706103085348,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 617,
			"versionNonce": 2130529617,
			"isDeleted": false,
			"id": "d9lgH6Uj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -361.08787082091203,
			"y": 796.5316557631163,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.79998779296875,
			"height": 25,
			"seed": 378157631,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085348,
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
			"version": 1207,
			"versionNonce": 1950723135,
			"isDeleted": false,
			"id": "XeuOFNFaenGf29aeUHjkA",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -318.13890918612594,
			"y": 775.580623501418,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 719755871,
			"groupIds": [],
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
			"updated": 1706103085348,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 618,
			"versionNonce": 493452081,
			"isDeleted": false,
			"id": "OtCVx475",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -288.8678696002089,
			"y": 795.5316557631163,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.3599853515625,
			"height": 25,
			"seed": 285341311,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085348,
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
			"version": 1266,
			"versionNonce": 1684261983,
			"isDeleted": false,
			"id": "IR2WwYA03uYLHsMhwLxpV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -246.13890918612594,
			"y": 774.580623501418,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 798805663,
			"groupIds": [],
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
			"updated": 1706103085348,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 635,
			"versionNonce": 1574235409,
			"isDeleted": false,
			"id": "On4VVzGd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -217.08787082091203,
			"y": 794.5316557631163,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.79998779296875,
			"height": 25,
			"seed": 1097310911,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085348,
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
			"version": 1301,
			"versionNonce": 1208543359,
			"isDeleted": false,
			"id": "GLy3yauI7XwMSCoRaXIlL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -174.13890918612594,
			"y": 775.580623501418,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1459811039,
			"groupIds": [],
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
			"updated": 1706103085348,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 617,
			"versionNonce": 1203184369,
			"isDeleted": false,
			"id": "wDZCj1mv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -144.06787417784562,
			"y": 795.5316557631163,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 10.759994506835938,
			"height": 25,
			"seed": 419380991,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085348,
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
			"version": 1127,
			"versionNonce": 217415839,
			"isDeleted": false,
			"id": "2nJoWgN4c5HqNjbxrNqLp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -391.1389091861263,
			"y": 934.1912353647684,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1239222047,
			"groupIds": [],
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
			"updated": 1706103085348,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 581,
			"versionNonce": 127376593,
			"isDeleted": false,
			"id": "1ILhft1I",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -363.33787082091237,
			"y": 954.1422676264667,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 15.29998779296875,
			"height": 25,
			"seed": 135056191,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085348,
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
			"version": 1162,
			"versionNonce": 349836479,
			"isDeleted": false,
			"id": "65p3rI6p03_7zdxNnMV1e",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -319.1389091861263,
			"y": 933.1912353647684,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1341066079,
			"groupIds": [],
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
			"updated": 1706103085348,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 579,
			"versionNonce": 1292753585,
			"isDeleted": false,
			"id": "PlMpawax",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -289.7778732623186,
			"y": 953.1422676264667,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.17999267578125,
			"height": 25,
			"seed": 1037322111,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085348,
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
			"version": 1202,
			"versionNonce": 928457951,
			"isDeleted": false,
			"id": "V-CAX5UuLVFB2dyLuMS7m",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -247.13890918612583,
			"y": 932.1912353647684,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 268238751,
			"groupIds": [],
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
			"updated": 1706103085348,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 581,
			"versionNonce": 1757502609,
			"isDeleted": false,
			"id": "qGtHEW9P",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -221.27787326231817,
			"y": 952.1422676264667,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.17999267578125,
			"height": 25,
			"seed": 1754903487,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085348,
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
			"version": 1254,
			"versionNonce": 66924799,
			"isDeleted": false,
			"id": "K_HGbQwqgqi75KdxtGevh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -175.13890918612594,
			"y": 933.1912353647684,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1338696671,
			"groupIds": [],
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
			"updated": 1706103085348,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 578,
			"versionNonce": 711565937,
			"isDeleted": false,
			"id": "dWnFrOYi",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -145.10787509337297,
			"y": 953.1422676264667,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 10.839996337890625,
			"height": 25,
			"seed": 1973489663,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085348,
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
			"version": 1119,
			"versionNonce": 1145878815,
			"isDeleted": false,
			"id": "Z1mDhmthLqFTgqAX8l6gN",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -392.49243157218757,
			"y": 1087.271563649028,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 874297375,
			"groupIds": [],
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
			"updated": 1706103085348,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 588,
			"versionNonce": 2127440977,
			"isDeleted": false,
			"id": "326CNhCE",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -366.87139351214944,
			"y": 1107.2225959107263,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.659988403320312,
			"height": 25,
			"seed": 1361992767,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085348,
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
			"version": 1153,
			"versionNonce": 1035353407,
			"isDeleted": false,
			"id": "jvPhiBToyamdRNP05anJb",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -320.49243157218757,
			"y": 1086.271563649028,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 11959391,
			"groupIds": [],
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
			"updated": 1706103085348,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 589,
			"versionNonce": 1304853041,
			"isDeleted": false,
			"id": "x7Dlj2co",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -294.56138832416116,
			"y": 1106.2225959107263,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.03997802734375,
			"height": 25,
			"seed": 646289535,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085348,
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
			"version": 1193,
			"versionNonce": 865746271,
			"isDeleted": false,
			"id": "jWqwuoYZqj6GZeTfdhJKH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -248.49243157218712,
			"y": 1085.271563649028,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1482436767,
			"groupIds": [],
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
			"updated": 1706103085349,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 589,
			"versionNonce": 406457361,
			"isDeleted": false,
			"id": "ovwnJFCW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -222.15139229144586,
			"y": 1105.2225959107263,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 18.219985961914062,
			"height": 25,
			"seed": 535479487,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085349,
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
			"version": 1246,
			"versionNonce": 692664703,
			"isDeleted": false,
			"id": "6q-FkqtJWU9GrUC3b-RgU",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -176.49243157218723,
			"y": 1086.271563649028,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2094126303,
			"groupIds": [],
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
			"updated": 1706103085349,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 587,
			"versionNonce": 1444962801,
			"isDeleted": false,
			"id": "q6GUF9u9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -149.93139107074285,
			"y": 1106.2225959107263,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 17.779983520507812,
			"height": 25,
			"seed": 648143103,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085349,
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
			"version": 761,
			"versionNonce": 1677963679,
			"isDeleted": false,
			"id": "SdsJgS7G80Nrx7JQI-8dd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -582.9783246234346,
			"y": 783.1394064876538,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 39.55483662710749,
			"height": 40.38757002978338,
			"seed": 721251857,
			"groupIds": [
				"vUE29rFNArtQBD42DY_-m"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085349,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 770,
			"versionNonce": 343997393,
			"isDeleted": false,
			"id": "DZmgmMjL---geMw7dKsin",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -564.2418230632258,
			"y": 783.9721398903296,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0.8327334026759315,
			"height": 39.55483662710749,
			"seed": 1042777073,
			"groupIds": [
				"vUE29rFNArtQBD42DY_-m"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085349,
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
			"version": 769,
			"versionNonce": 754591167,
			"isDeleted": false,
			"id": "efe0zbV39rJA2pOHGTOhb",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -582.1455912207587,
			"y": 803.1250081518767,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.30573652309357,
			"height": 0.4163667013380199,
			"seed": 1934876113,
			"groupIds": [
				"vUE29rFNArtQBD42DY_-m"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085349,
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
			"version": 209,
			"versionNonce": 1400068529,
			"isDeleted": false,
			"id": "IVKtOy2t2uQzqT6_HQ0kM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -252.53595134981924,
			"y": 553.2251634706354,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.1767611930305293,
			"height": 151.80219390093862,
			"seed": 1052980305,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085349,
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
			"version": 1614,
			"versionNonce": 1397560799,
			"isDeleted": false,
			"id": "FxeOUATNQnZtQYZGw0-RB",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -271.3641304383093,
			"y": 646.1892977200478,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 296.06124122844915,
			"height": 43.269239211365175,
			"seed": 609501713,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085349,
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
			"version": 840,
			"versionNonce": 606010257,
			"isDeleted": false,
			"id": "tX3u2on1",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -843.5384186334808,
			"y": 710.1787752670319,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 122.09986877441406,
			"height": 25,
			"seed": 390446175,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085349,
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
			"version": 688,
			"versionNonce": 1846346239,
			"isDeleted": false,
			"id": "iLWVmG5RSjN9Ia_gl_Oc6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -540.7960593624504,
			"y": 803.3677949601554,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 149.40228723502685,
			"height": 0,
			"seed": 1126083775,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085349,
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
			"version": 1588,
			"versionNonce": 112943473,
			"isDeleted": false,
			"id": "4gjnqruxPAr935lCDhOCW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -707.8286997646093,
			"y": 852.9687639774148,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1146891761,
			"groupIds": [
				"1BFbCMyWT2ZnFdA-vHeVS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085349,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1622,
			"versionNonce": 1580886559,
			"isDeleted": false,
			"id": "dRaD4n5r0kgdVpthGYzOR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -635.8286997646093,
			"y": 851.9687639774148,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1633896401,
			"groupIds": [
				"1BFbCMyWT2ZnFdA-vHeVS"
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
			"updated": 1706103085349,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1663,
			"versionNonce": 143657809,
			"isDeleted": false,
			"id": "-uCUY8cl4a4kmgyXQAcf_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -563.8286997646093,
			"y": 850.9687639774148,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1714169265,
			"groupIds": [
				"1BFbCMyWT2ZnFdA-vHeVS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085349,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1715,
			"versionNonce": 281398847,
			"isDeleted": false,
			"id": "FEs77KmfrfFKVRif8BuZt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -491.82869976460927,
			"y": 851.9687639774148,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2111719313,
			"groupIds": [
				"1BFbCMyWT2ZnFdA-vHeVS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085349,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 924,
			"versionNonce": 569669937,
			"isDeleted": false,
			"id": "FQVjoKb8",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -846.7712847787639,
			"y": 867.5707068190758,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 121.65986633300781,
			"height": 25,
			"seed": 45165937,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085349,
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
			"version": 81,
			"versionNonce": 9416287,
			"isDeleted": false,
			"id": "FKwvPef7AZM8B0nyNjAtO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -563.200906309881,
			"y": 748.5675215137036,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.1767611930305293,
			"height": 110.61555214486998,
			"seed": 1184005265,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085349,
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
			"version": 811,
			"versionNonce": 1414540049,
			"isDeleted": false,
			"id": "NcbtnYd4-gjglu7Py2ttV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -581.7644559138283,
			"y": 948.6720603494757,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 39.55483662710749,
			"height": 40.38757002978338,
			"seed": 1028003761,
			"groupIds": [
				"ML84EVCfJk8iAtNg17agu"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085349,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 820,
			"versionNonce": 2020117119,
			"isDeleted": false,
			"id": "D3So75ZzvoUzXrdUfLmsY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -563.0279543536197,
			"y": 949.5047937521515,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0.8327334026759315,
			"height": 39.55483662710749,
			"seed": 15333777,
			"groupIds": [
				"ML84EVCfJk8iAtNg17agu"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085349,
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
			"version": 819,
			"versionNonce": 135962865,
			"isDeleted": false,
			"id": "yMTj4-YDK6JCG7z0B7JHX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -580.9317225111525,
			"y": 968.6576620136987,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.30573652309357,
			"height": 0.4163667013380199,
			"seed": 1299619697,
			"groupIds": [
				"ML84EVCfJk8iAtNg17agu"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085349,
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
			"version": 738,
			"versionNonce": 353428127,
			"isDeleted": false,
			"id": "QjGqp5U-W86TAQ1VSEmWx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -539.5821906528444,
			"y": 968.9004488219773,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 149.40228723502685,
			"height": 0,
			"seed": 288590161,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085349,
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
			"version": 1638,
			"versionNonce": 719018705,
			"isDeleted": false,
			"id": "xWkDcbP3dTH5gtqOYXgLE",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -706.6148310550033,
			"y": 1018.5014178392366,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 91764529,
			"groupIds": [
				"LOixYzbi6_UceBQdKDTkN"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085349,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1672,
			"versionNonce": 121190079,
			"isDeleted": false,
			"id": "e-IvxbiaFq6eCwvemX87I",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -634.6148310550033,
			"y": 1017.5014178392366,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1286351121,
			"groupIds": [
				"LOixYzbi6_UceBQdKDTkN"
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
			"updated": 1706103085349,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1713,
			"versionNonce": 220846257,
			"isDeleted": false,
			"id": "uDoZ-LleBDzqYS5ZPs5Zk",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -562.6148310550033,
			"y": 1016.5014178392366,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1346821873,
			"groupIds": [
				"LOixYzbi6_UceBQdKDTkN"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085349,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1765,
			"versionNonce": 360842975,
			"isDeleted": false,
			"id": "92QSupTod2-wdp1tUMkpW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -490.61483105500326,
			"y": 1017.5014178392366,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1590679761,
			"groupIds": [
				"LOixYzbi6_UceBQdKDTkN"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085349,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 975,
			"versionNonce": 11377297,
			"isDeleted": false,
			"id": "pckWkLuJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -845.5574160691577,
			"y": 1033.1033606808976,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 122.09986877441406,
			"height": 25,
			"seed": 165582513,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085349,
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
			"version": 183,
			"versionNonce": 1585173247,
			"isDeleted": false,
			"id": "QQQl5DniOl6Kp0NfEYGXT",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -561.9870376002749,
			"y": 914.1001753755254,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.1767611930305293,
			"height": 110.61555214486998,
			"seed": 1142593681,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085349,
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
			"version": 800,
			"versionNonce": 907944049,
			"isDeleted": false,
			"id": "0VNMfwSiISxrIa1A94chz",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -580.5876947207977,
			"y": 1100.474254250414,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 39.55483662710749,
			"height": 40.38757002978338,
			"seed": 267067473,
			"groupIds": [
				"CgxWTbbaEtb9bItXc9az2"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085349,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 809,
			"versionNonce": 1520900895,
			"isDeleted": false,
			"id": "A5grY-8wejyhkH30Gj5N7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -561.8511931605891,
			"y": 1101.30698765309,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0.8327334026759315,
			"height": 39.55483662710749,
			"seed": 388296241,
			"groupIds": [
				"CgxWTbbaEtb9bItXc9az2"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085349,
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
			"version": 808,
			"versionNonce": 1531112017,
			"isDeleted": false,
			"id": "9DKz-FG6SGppyVgO19uh7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -579.7549613181219,
			"y": 1120.459855914637,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.30573652309357,
			"height": 0.4163667013380199,
			"seed": 363462673,
			"groupIds": [
				"CgxWTbbaEtb9bItXc9az2"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085349,
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
			"version": 727,
			"versionNonce": 510943039,
			"isDeleted": false,
			"id": "dGjivOEMROOXLOLOKDnpy",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -538.4054294598137,
			"y": 1120.7026427229157,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 149.40228723502685,
			"height": 0,
			"seed": 158455281,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085350,
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
			"version": 1628,
			"versionNonce": 2029221937,
			"isDeleted": false,
			"id": "8hfOuhefLOPXkt4aJ1XHH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -705.4380698619726,
			"y": 1170.3036117401753,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1166274513,
			"groupIds": [
				"Bq7PT9135Ih2Eul1SEqQy"
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
			"updated": 1706103085350,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1660,
			"versionNonce": 1547968351,
			"isDeleted": false,
			"id": "Xq9pMJ1wOQQLmFjfo3GtW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -633.4380698619726,
			"y": 1169.3036117401753,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1341640113,
			"groupIds": [
				"Bq7PT9135Ih2Eul1SEqQy"
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
			"updated": 1706103085350,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1702,
			"versionNonce": 286738961,
			"isDeleted": false,
			"id": "_AN6xTtyMNzzw00Q-7RRs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -561.4380698619726,
			"y": 1168.3036117401753,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2146758545,
			"groupIds": [
				"Bq7PT9135Ih2Eul1SEqQy"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085350,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1754,
			"versionNonce": 644275071,
			"isDeleted": false,
			"id": "_gmaNF9uKDxm8p_kNfmgQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -489.4380698619726,
			"y": 1169.3036117401753,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1538446705,
			"groupIds": [
				"Bq7PT9135Ih2Eul1SEqQy"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085350,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 965,
			"versionNonce": 2091245553,
			"isDeleted": false,
			"id": "anx2hvn7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -844.3806548761271,
			"y": 1184.9055545818364,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 120.05987548828125,
			"height": 25,
			"seed": 913899345,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085350,
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
			"version": 163,
			"versionNonce": 1897730975,
			"isDeleted": false,
			"id": "iCKla5JLyQ8Po6MYN2Y1O",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -560.8102764072443,
			"y": 1065.902369276464,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.1767611930305293,
			"height": 110.61555214486998,
			"seed": 245296433,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085350,
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
			"version": 1521,
			"versionNonce": 161921489,
			"isDeleted": false,
			"id": "oWtJhPxzFZ4PaxSeQIuzt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -1025.7650830051734,
			"y": 1718.4173480794234,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1545718321,
			"groupIds": [
				"MG1HYzzY2Xe9Iu6o_ERdR"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085350,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1557,
			"versionNonce": 1419200447,
			"isDeleted": false,
			"id": "ux2Ph34ULyvqCAYBbml4d",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -953.7650830051734,
			"y": 1717.4173480794234,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1588288529,
			"groupIds": [
				"MG1HYzzY2Xe9Iu6o_ERdR"
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
			"updated": 1706103085350,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1595,
			"versionNonce": 1496405937,
			"isDeleted": false,
			"id": "370P94UIlP6XqwfFwJlFp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -881.7650830051736,
			"y": 1716.4173480794234,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1642574321,
			"groupIds": [
				"MG1HYzzY2Xe9Iu6o_ERdR"
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
			"updated": 1706103085350,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1647,
			"versionNonce": 251000799,
			"isDeleted": false,
			"id": "-efOCrBKOQF-aQOS-gM8U",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -809.7650830051736,
			"y": 1717.4173480794234,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1256082385,
			"groupIds": [
				"MG1HYzzY2Xe9Iu6o_ERdR"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085350,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1504,
			"versionNonce": 2104310161,
			"isDeleted": false,
			"id": "NnL5BBm7ujIzOeum4UpQm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -372.4535518258451,
			"y": 1641.5505696269242,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1906747825,
			"groupIds": [
				"6SeonlPS9akfHz2b6yqRj"
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
			"updated": 1706103085350,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 375,
			"versionNonce": 1179231231,
			"isDeleted": false,
			"id": "lHksGS0U",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -360.44001956414684,
			"y": 1662.0016018886226,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1063799697,
			"groupIds": [
				"6SeonlPS9akfHz2b6yqRj"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085350,
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
			"version": 1540,
			"versionNonce": 1469177713,
			"isDeleted": false,
			"id": "TMZC3ypCY0bmDlwblAbK5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -300.4535518258451,
			"y": 1640.5505696269242,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 207270257,
			"groupIds": [
				"6SeonlPS9akfHz2b6yqRj"
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
			"updated": 1706103085350,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 432,
			"versionNonce": 177392671,
			"isDeleted": false,
			"id": "YPLmGpat",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -288.44001956414684,
			"y": 1661.0016018886226,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1036344145,
			"groupIds": [
				"6SeonlPS9akfHz2b6yqRj"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085350,
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
			"version": 1582,
			"versionNonce": 904317265,
			"isDeleted": false,
			"id": "Q0M_qR4FtEjnIAvYRGKKN",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -228.45355182584512,
			"y": 1639.5505696269242,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 603965745,
			"groupIds": [
				"6SeonlPS9akfHz2b6yqRj"
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
			"updated": 1706103085350,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 430,
			"versionNonce": 398585919,
			"isDeleted": false,
			"id": "zVlYTVfm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -216.44001956414684,
			"y": 1660.0016018886226,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 410090257,
			"groupIds": [
				"6SeonlPS9akfHz2b6yqRj"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085350,
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
			"version": 1630,
			"versionNonce": 834893617,
			"isDeleted": false,
			"id": "uyIbg57dPQvIaB-bturF9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -156.45355182584512,
			"y": 1640.5505696269242,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1536291057,
			"groupIds": [
				"6SeonlPS9akfHz2b6yqRj"
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
			"updated": 1706103085350,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 429,
			"versionNonce": 1471647839,
			"isDeleted": false,
			"id": "U2mBYeKR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -144.44001956414684,
			"y": 1661.0016018886226,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 854108881,
			"groupIds": [
				"6SeonlPS9akfHz2b6yqRj"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085350,
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
			"version": 1376,
			"versionNonce": 1301244177,
			"isDeleted": false,
			"id": "7B4Y93ba_dsM8fQWaZdd3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -494.9249262048635,
			"y": 1331.3139975904826,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1192044721,
			"groupIds": [],
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
			"updated": 1706103085350,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1199,
			"versionNonce": 608447615,
			"isDeleted": false,
			"id": "4rjexAtlOYI-qgPCgBX1P",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -711.0343159558569,
			"y": 1330.3139975904826,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 728592497,
			"groupIds": [],
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
			"updated": 1706103085350,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1245,
			"versionNonce": 1388453617,
			"isDeleted": false,
			"id": "izvQvPHNFT37rRDjerTFe",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -639.0343159558569,
			"y": 1329.3139975904826,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1051641905,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085350,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1294,
			"versionNonce": 1227375775,
			"isDeleted": false,
			"id": "7EfzfZFiixgD6915Am6Cv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -567.0343159558569,
			"y": 1330.3139975904826,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1741500401,
			"groupIds": [],
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
			"updated": 1706103085350,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1053,
			"versionNonce": 1877154001,
			"isDeleted": false,
			"id": "2Tn-gdG7m0arwoUXVpPUr",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -713.7136971822425,
			"y": 1562.8403966360804,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2126817201,
			"groupIds": [
				"nNyEfqSr3CbmzVaLaTgpJ"
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
			"updated": 1706103085350,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1091,
			"versionNonce": 1175738559,
			"isDeleted": false,
			"id": "URoXy_A3vaDPKEti6Erz_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -641.7136971822425,
			"y": 1561.8403966360804,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 210841457,
			"groupIds": [
				"nNyEfqSr3CbmzVaLaTgpJ"
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
			"updated": 1706103085350,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1130,
			"versionNonce": 378132145,
			"isDeleted": false,
			"id": "FECfrKN36DJ3HXG4s8Zxq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -569.7136971822425,
			"y": 1560.8403966360804,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 187615025,
			"groupIds": [
				"nNyEfqSr3CbmzVaLaTgpJ"
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
			"updated": 1706103085350,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1181,
			"versionNonce": 1353246943,
			"isDeleted": false,
			"id": "RuEn-IMt4siwDQKqDpqTX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -497.7136971822425,
			"y": 1561.8403966360804,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 630812401,
			"groupIds": [
				"nNyEfqSr3CbmzVaLaTgpJ"
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
			"updated": 1706103085350,
			"link": null,
			"locked": false
		},
		{
			"type": "ellipse",
			"version": 555,
			"versionNonce": 425580689,
			"isDeleted": false,
			"id": "XgUubOCSJdMAU8lR1sB2j",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -588.696479051901,
			"y": 1653.143169957381,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 39.55483662710749,
			"height": 40.38757002978338,
			"seed": 2009933489,
			"groupIds": [
				"2T-voWQqG_7g49aoZQraJ"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085350,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 531,
			"versionNonce": 376861951,
			"isDeleted": false,
			"id": "BZYq5WIptsMpW-GsBNj2V",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -569.9599774916921,
			"y": 1653.9759033600567,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0.8327334026759315,
			"height": 39.55483662710749,
			"seed": 364325009,
			"groupIds": [
				"2T-voWQqG_7g49aoZQraJ"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085350,
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
			"version": 554,
			"versionNonce": 169254513,
			"isDeleted": false,
			"id": "Rwd3t_ky_qPk1rHnOTjcv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -587.863745649225,
			"y": 1673.1287716216036,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.30573652309357,
			"height": 0.4163667013380199,
			"seed": 1321594481,
			"groupIds": [
				"2T-voWQqG_7g49aoZQraJ"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085350,
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
			"version": 381,
			"versionNonce": 1056800031,
			"isDeleted": false,
			"id": "uK7G_lDSFXbdkWQUXHBnP",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -547.2815459849916,
			"y": 1674.1783630816535,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 172.44898687148373,
			"height": 0,
			"seed": 1774254161,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085350,
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
			"version": 687,
			"versionNonce": 1467721809,
			"isDeleted": false,
			"id": "ynNVa6RY3E2WTsAukMm_c",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -687.6426284351783,
			"y": 1439.9096249879826,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 238.74999999999986,
			"height": 80.00000000000006,
			"seed": 1753204273,
			"groupIds": [],
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
			"updated": 1706103085350,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 645,
			"versionNonce": 766411071,
			"isDeleted": false,
			"id": "wET1qKD9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -597.5645034351784,
			"y": 1467.9096249879826,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 636082193,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085350,
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
			"version": 514,
			"versionNonce": 728004145,
			"isDeleted": false,
			"id": "pnBDFq-SkcyjBmWQawjmS",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -675.5368999997092,
			"y": 1238.9239460766553,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 221.2499999999999,
			"height": 88.74999999999977,
			"seed": 871804401,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085351,
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
			"version": 336,
			"versionNonce": 65667423,
			"isDeleted": false,
			"id": "w79KytQ3lVec4pRPL6JcD",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -608.0368999997092,
			"y": 1240.173946076655,
			"strokeColor": "#f08c00",
			"backgroundColor": "transparent",
			"width": 158.7499999999999,
			"height": 21.25,
			"seed": 2041432017,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085351,
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
			"version": 257,
			"versionNonce": 146311185,
			"isDeleted": false,
			"id": "7sbKxHgErvy4DMunzp7Gt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -543.0368999997092,
			"y": 1258.923946076655,
			"strokeColor": "#f08c00",
			"backgroundColor": "transparent",
			"width": 60,
			"height": 43.75,
			"seed": 287745457,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085351,
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
			"version": 254,
			"versionNonce": 1660976511,
			"isDeleted": false,
			"id": "eclalww_DY0ynDlQVEWle",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -680.5368999997092,
			"y": 1331.423946076655,
			"strokeColor": "#f08c00",
			"backgroundColor": "transparent",
			"width": 156.25,
			"height": 23.75,
			"seed": 1703462801,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085351,
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
			"version": 975,
			"versionNonce": 716862193,
			"isDeleted": false,
			"id": "ucSVUnr6sTgMDh4dlQseB",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -679.2868999997092,
			"y": 1396.423946076655,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 20.81474781296663,
			"height": 42.23567891132757,
			"seed": 285977969,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103118554,
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
			"version": 909,
			"versionNonce": 1303440593,
			"isDeleted": false,
			"id": "H3mhNi6ESvuqHfN1mipNL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -604.8684128884022,
			"y": 1393.6298747682526,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.3296550777988614,
			"height": 42.529750219729976,
			"seed": 2062997329,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103118554,
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
			"version": 1196,
			"versionNonce": 595405489,
			"isDeleted": false,
			"id": "dMbpFMNHP2tyF9ZsoLC7I",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -533.9457676554807,
			"y": 1396.2160621138792,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.0984553878599854,
			"height": 42.27407272260257,
			"seed": 899794225,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103118554,
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
			"version": 1169,
			"versionNonce": 1422306449,
			"isDeleted": false,
			"id": "E1rIEShU3ukygteRFCBCp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -463.1932029281404,
			"y": 1397.404222246316,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 17.82737599796576,
			"height": 39.64207496060135,
			"seed": 477361937,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103118554,
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
			"version": 594,
			"versionNonce": 155513457,
			"isDeleted": false,
			"id": "vRQxJjxiPi7S9Zp5uRvRo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -658.4499193818451,
			"y": 1520.9658014835038,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.16301279015879,
			"height": 40.00884027391078,
			"seed": 837086449,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103118554,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "ynNVa6RY3E2WTsAukMm_c",
				"gap": 1.0561764955211856,
				"focus": 0.46411343409714195
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
					-14.74009904828283,
					25.268741225627878
				],
				[
					-23.16301279015879,
					40.00884027391078
				]
			]
		},
		{
			"type": "arrow",
			"version": 1142,
			"versionNonce": 96435281,
			"isDeleted": false,
			"id": "FX9knH0b-ddgBnZyDGbMG",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -607.3568167605413,
			"y": 1523.2784056518378,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.3296550777989182,
			"height": 36.212564913323035,
			"seed": 1031546577,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103118554,
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
			"version": 1176,
			"versionNonce": 168675889,
			"isDeleted": false,
			"id": "xdJUpovqeIcAOB38b0Ono",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -534.624753720444,
			"y": 1521.8947543222264,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.3296550777989182,
			"height": 36.212564913323035,
			"seed": 701572273,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103118554,
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
			"version": 1049,
			"versionNonce": 1863801873,
			"isDeleted": false,
			"id": "L2S740wAupGAq6PCP_eWT",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -482.0529105567789,
			"y": 1521.4281646852396,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.76188359523229,
			"height": 35.91849360492074,
			"seed": 579561105,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103118554,
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
			"version": 919,
			"versionNonce": 1823235441,
			"isDeleted": false,
			"id": "ZAeEMPYrdcuW_vy-8TqlL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -899.4405292371597,
			"y": 1808.3334445277674,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 39.55483662710749,
			"height": 40.38757002978338,
			"seed": 442984561,
			"groupIds": [
				"Kpq9ZnfsQDxZdlN07suah"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085351,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 928,
			"versionNonce": 1223110175,
			"isDeleted": false,
			"id": "RjbqlI-8cPAAbqCDD2igx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -880.7040276769509,
			"y": 1809.1661779304432,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0.8327334026759315,
			"height": 39.55483662710749,
			"seed": 1998795345,
			"groupIds": [
				"Kpq9ZnfsQDxZdlN07suah"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085351,
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
			"version": 927,
			"versionNonce": 2130806609,
			"isDeleted": false,
			"id": "iB8PTZNnFTVg5hHJf6x1k",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -898.6077958344838,
			"y": 1828.3190461919903,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.30573652309357,
			"height": 0.4163667013380199,
			"seed": 1099612209,
			"groupIds": [
				"Kpq9ZnfsQDxZdlN07suah"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085351,
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
			"version": 367,
			"versionNonce": 289018431,
			"isDeleted": false,
			"id": "Sfip0JwOH6h5-SoukXTJ3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -568.9981559635444,
			"y": 1578.4192015107492,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.1767611930305293,
			"height": 151.80219390093862,
			"seed": 1468371473,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085351,
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
			"version": 1943,
			"versionNonce": 1154905393,
			"isDeleted": false,
			"id": "pshAUl4HjUwa1iOg0ikAk",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -587.8263350520344,
			"y": 1671.3833357601616,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 296.06124122844915,
			"height": 43.269239211365175,
			"seed": 1846224881,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085351,
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
			"version": 1000,
			"versionNonce": 1910207071,
			"isDeleted": false,
			"id": "m0ezH3Oj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -1160.000623247206,
			"y": 1735.3728133071456,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 124.59986877441406,
			"height": 25,
			"seed": 790823377,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085351,
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
			"version": 846,
			"versionNonce": 1100130065,
			"isDeleted": false,
			"id": "-YkqwoQowRgSAf-wdjWBn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -857.2582639761755,
			"y": 1828.561833000269,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 149.40228723502685,
			"height": 0,
			"seed": 400859057,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085351,
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
			"version": 1746,
			"versionNonce": 1402719871,
			"isDeleted": false,
			"id": "zBzPYUdEtgzHLmIFBbJAL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -1024.2909043783343,
			"y": 1878.1628020175285,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 376930705,
			"groupIds": [
				"4mHOl9uK99L6WIagr-VeU"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085351,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1780,
			"versionNonce": 531471601,
			"isDeleted": false,
			"id": "ydcHzs8H5_mnMSWHW_lbg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -952.2909043783343,
			"y": 1877.1628020175285,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1746085745,
			"groupIds": [
				"4mHOl9uK99L6WIagr-VeU"
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
			"updated": 1706103085351,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1821,
			"versionNonce": 825992863,
			"isDeleted": false,
			"id": "ayOKl1i8hMUzhzW_FD2W_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -880.2909043783344,
			"y": 1876.1628020175285,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 922685777,
			"groupIds": [
				"4mHOl9uK99L6WIagr-VeU"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085351,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1873,
			"versionNonce": 1320081105,
			"isDeleted": false,
			"id": "6dy2PMg8IDbC5yyaIwLpo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -808.2909043783344,
			"y": 1877.1628020175285,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2022883121,
			"groupIds": [
				"4mHOl9uK99L6WIagr-VeU"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085351,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1084,
			"versionNonce": 1500215999,
			"isDeleted": false,
			"id": "5PuxRCMp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -1163.233489392489,
			"y": 1892.7647448591892,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 121.47987365722656,
			"height": 25,
			"seed": 188068113,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085351,
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
			"version": 581,
			"versionNonce": 1630393521,
			"isDeleted": false,
			"id": "k6NNWhTUUYUWJdvu58tiI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -879.6631109236062,
			"y": 1773.7615595538173,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.1767611930305293,
			"height": 110.61555214486998,
			"seed": 341796593,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085351,
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
			"version": 969,
			"versionNonce": 1892403935,
			"isDeleted": false,
			"id": "myzgx_R-Nd2imragSaion",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -898.2266605275535,
			"y": 1973.8660983895893,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 39.55483662710749,
			"height": 40.38757002978338,
			"seed": 513237201,
			"groupIds": [
				"2JzQd7MsffE6AK5fqePFO"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085351,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 978,
			"versionNonce": 718411409,
			"isDeleted": false,
			"id": "sDGZ2yzHsSs1yItMWyyLM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -879.4901589673449,
			"y": 1974.698831792265,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0.8327334026759315,
			"height": 39.55483662710749,
			"seed": 2004164273,
			"groupIds": [
				"2JzQd7MsffE6AK5fqePFO"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085351,
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
			"version": 977,
			"versionNonce": 871175935,
			"isDeleted": false,
			"id": "PGUcTcnvGqnV7BMfx5UBB",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -897.3939271248777,
			"y": 1993.8517000538127,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.30573652309357,
			"height": 0.4163667013380199,
			"seed": 1302339729,
			"groupIds": [
				"2JzQd7MsffE6AK5fqePFO"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085351,
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
			"version": 896,
			"versionNonce": 508763249,
			"isDeleted": false,
			"id": "GLA6i0Z0TtYonTIhKPv-d",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -856.0443952665695,
			"y": 1994.0944868620913,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 149.40228723502685,
			"height": 0,
			"seed": 248505969,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085351,
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
			"version": 1796,
			"versionNonce": 2035277599,
			"isDeleted": false,
			"id": "e80THfR6TawMf3UGZC0vK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -1023.0770356687285,
			"y": 2043.695455879351,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 97251409,
			"groupIds": [
				"2tdMrao_AsRto7uhDW2lr"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085351,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1830,
			"versionNonce": 1803052625,
			"isDeleted": false,
			"id": "PEwrwrV6DjII9AFHLiArA",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -951.0770356687285,
			"y": 2042.695455879351,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 946585137,
			"groupIds": [
				"2tdMrao_AsRto7uhDW2lr"
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
			"updated": 1706103085351,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1871,
			"versionNonce": 1935975231,
			"isDeleted": false,
			"id": "k4L3HGpFyesjLsf1ue_3U",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -879.0770356687284,
			"y": 2041.695455879351,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 93769745,
			"groupIds": [
				"2tdMrao_AsRto7uhDW2lr"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085352,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1923,
			"versionNonce": 1561949233,
			"isDeleted": false,
			"id": "CBqWVCPJ3Uy7KgySIfKIt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -807.0770356687284,
			"y": 2042.695455879351,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 54830577,
			"groupIds": [
				"2tdMrao_AsRto7uhDW2lr"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085352,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1142,
			"versionNonce": 848028511,
			"isDeleted": false,
			"id": "qAytf4Rf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -1171.433710227127,
			"y": 2058.2973987210107,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 128.47987365722656,
			"height": 25,
			"seed": 477937617,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085352,
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
			"version": 683,
			"versionNonce": 1998439953,
			"isDeleted": false,
			"id": "PgF1s0tWwutD_KeLkv3YZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -878.449242214,
			"y": 1939.2942134156392,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.1767611930305293,
			"height": 110.61555214486998,
			"seed": 1867947441,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085352,
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
			"version": 958,
			"versionNonce": 1729503103,
			"isDeleted": false,
			"id": "9ovZVZw0H2G6yg_ERqj2D",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -897.0498993345228,
			"y": 2125.6682922905275,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 39.55483662710749,
			"height": 40.38757002978338,
			"seed": 1794752401,
			"groupIds": [
				"JmtYym5irRcHZiq_RudY-"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085352,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 967,
			"versionNonce": 1417468913,
			"isDeleted": false,
			"id": "PbPukWwmW-blhRANZl5jb",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -878.3133977743142,
			"y": 2126.5010256932037,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0.8327334026759315,
			"height": 39.55483662710749,
			"seed": 765306225,
			"groupIds": [
				"JmtYym5irRcHZiq_RudY-"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085352,
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
			"version": 966,
			"versionNonce": 1665390495,
			"isDeleted": false,
			"id": "cmT62qTtgl_ceU0FDzznJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -896.217165931847,
			"y": 2145.653893954751,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.30573652309357,
			"height": 0.4163667013380199,
			"seed": 579456849,
			"groupIds": [
				"JmtYym5irRcHZiq_RudY-"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085352,
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
			"version": 885,
			"versionNonce": 1161704913,
			"isDeleted": false,
			"id": "Z0rHdqViUlHNRWP1Z76_K",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -854.8676340735389,
			"y": 2145.8966807630295,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 149.40228723502685,
			"height": 0,
			"seed": 1612037425,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085352,
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
			"version": 1786,
			"versionNonce": 1564838847,
			"isDeleted": false,
			"id": "BLMdjxigvOvtIlN5my1AW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -1021.9002744756976,
			"y": 2195.497649780289,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1168699153,
			"groupIds": [
				"NpQI8LhDGmCfy47pwMSsX"
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
			"updated": 1706103085352,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1818,
			"versionNonce": 746148785,
			"isDeleted": false,
			"id": "_ZWzOXORT66jxNFngvCtr",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -949.9002744756976,
			"y": 2194.497649780289,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1505420529,
			"groupIds": [
				"NpQI8LhDGmCfy47pwMSsX"
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
			"updated": 1706103085352,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1860,
			"versionNonce": 1899740127,
			"isDeleted": false,
			"id": "xyFMnhWdy419pjP17xfzZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -877.9002744756978,
			"y": 2193.497649780289,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1741889233,
			"groupIds": [
				"NpQI8LhDGmCfy47pwMSsX"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085352,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1912,
			"versionNonce": 508933521,
			"isDeleted": false,
			"id": "X44GtWa45Pix4hh1p_QPR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -805.9002744756978,
			"y": 2194.497649780289,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1586044081,
			"groupIds": [
				"NpQI8LhDGmCfy47pwMSsX"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085352,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1125,
			"versionNonce": 1664542719,
			"isDeleted": false,
			"id": "jN0h2ljL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -1160.8428594898523,
			"y": 2210.0995926219503,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 120.13987731933594,
			"height": 25,
			"seed": 1837391505,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085352,
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
			"version": 663,
			"versionNonce": 1040898929,
			"isDeleted": false,
			"id": "vtrQSGz5NKL6Mp7_2ddW-",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -877.2724810209694,
			"y": 2091.096407316578,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.1767611930305293,
			"height": 110.61555214486998,
			"seed": 1669096561,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085352,
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
			"version": 1159,
			"versionNonce": 557289503,
			"isDeleted": false,
			"id": "Nee0tSWB4N8M2T4wLX3pV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -709.0054609576404,
			"y": 1796.2065032610021,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1545749457,
			"groupIds": [
				"wxrSITGGZD5cs75k6c7l7"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085352,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1194,
			"versionNonce": 1541424465,
			"isDeleted": false,
			"id": "EAiUrgoGfzOWJHkymYhdg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -637.0054609576404,
			"y": 1795.2065032610021,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 665559473,
			"groupIds": [
				"wxrSITGGZD5cs75k6c7l7"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085352,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1235,
			"versionNonce": 86914111,
			"isDeleted": false,
			"id": "LF0wwTTS13HZU8F33nm6v",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -565.0054609576404,
			"y": 1794.2065032610021,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1510884241,
			"groupIds": [
				"wxrSITGGZD5cs75k6c7l7"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085352,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1286,
			"versionNonce": 1395487537,
			"isDeleted": false,
			"id": "27Tr8iuXmAmB_C5hfLk3b",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -493.00546095764037,
			"y": 1795.2065032610021,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1333897585,
			"groupIds": [
				"wxrSITGGZD5cs75k6c7l7"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085352,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1159,
			"versionNonce": 1459311711,
			"isDeleted": false,
			"id": "WCBVPkAP564cIPVzmuc6Z",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -706.6519385715792,
			"y": 1960.9530702852767,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 127255167,
			"groupIds": [
				"ILLenH8a-xrckLQFrYjLW"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085352,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1194,
			"versionNonce": 676979985,
			"isDeleted": false,
			"id": "OceF7aJ3oGGmybpujjdpg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -634.6519385715792,
			"y": 1959.9530702852767,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 970398367,
			"groupIds": [
				"ILLenH8a-xrckLQFrYjLW"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085352,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1235,
			"versionNonce": 242184319,
			"isDeleted": false,
			"id": "aAxkqIoZUI8nZ56fOg3YB",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -562.6519385715792,
			"y": 1958.9530702852767,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 645426879,
			"groupIds": [
				"ILLenH8a-xrckLQFrYjLW"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085352,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1286,
			"versionNonce": 1725766385,
			"isDeleted": false,
			"id": "9s_EddkveqHXJUiNJEMqV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -490.6519385715792,
			"y": 1959.9530702852767,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2014985951,
			"groupIds": [
				"ILLenH8a-xrckLQFrYjLW"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085352,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1190,
			"versionNonce": 1430980767,
			"isDeleted": false,
			"id": "rYmLJF-NqxbjKQ0GpyAXp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -704.2984161855181,
			"y": 2113.9320253792457,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1962956639,
			"groupIds": [
				"ro7azRWT_I_bikDT0LNWe"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085352,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1225,
			"versionNonce": 1061065937,
			"isDeleted": false,
			"id": "hTq5MJ6LmNMTcXdjmY2f2",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -632.2984161855181,
			"y": 2112.9320253792457,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1255936895,
			"groupIds": [
				"ro7azRWT_I_bikDT0LNWe"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085352,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1266,
			"versionNonce": 1228840127,
			"isDeleted": false,
			"id": "XRES7vMZ8wbsl-X6Cebbj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -560.2984161855181,
			"y": 2111.9320253792457,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1110133663,
			"groupIds": [
				"ro7azRWT_I_bikDT0LNWe"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085352,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1317,
			"versionNonce": 1695929009,
			"isDeleted": false,
			"id": "vuT_Mc5IOaQZbxhSh4pq1",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -488.29841618551814,
			"y": 2112.9320253792457,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1461616575,
			"groupIds": [
				"ro7azRWT_I_bikDT0LNWe"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706103085352,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 984,
			"versionNonce": 2112531679,
			"isDeleted": false,
			"id": "uzyiGpr8",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -406.5500199864397,
			"y": 1737.4912967826854,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 122.09986877441406,
			"height": 25,
			"seed": 1017525311,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085352,
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
			"version": 1021,
			"versionNonce": 755651729,
			"isDeleted": false,
			"id": "rzgGssfI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -401.8429752143177,
			"y": 1809.2737295575478,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 121.65986633300781,
			"height": 25,
			"seed": 556677951,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085352,
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
			"version": 1010,
			"versionNonce": 1054849279,
			"isDeleted": false,
			"id": "rwTE9J4B",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -399.4894528282566,
			"y": 1979.9041025469744,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 122.09986877441406,
			"height": 25,
			"seed": 231232575,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085352,
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
			"version": 1016,
			"versionNonce": 1792252529,
			"isDeleted": false,
			"id": "xGWhIIMO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -395.9591692491649,
			"y": 2134.0598188339745,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 120.05987548828125,
			"height": 25,
			"seed": 660255729,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085352,
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
			"version": 273,
			"versionNonce": 295584031,
			"isDeleted": false,
			"id": "qSAGjT1N8kso52lIZ_Ls2",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -1001.3810833239639,
			"y": 2268.546475180992,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 221.2499999999999,
			"height": 88.74999999999994,
			"seed": 1365111185,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085352,
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
			"version": 258,
			"versionNonce": 255403089,
			"isDeleted": false,
			"id": "uT07cFZGYJ59LCIPokwWR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -933.8810833239639,
			"y": 2269.7964751809914,
			"strokeColor": "#f08c00",
			"backgroundColor": "transparent",
			"width": 158.7499999999999,
			"height": 21.25,
			"seed": 1554749297,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085352,
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
			"version": 179,
			"versionNonce": 2006369599,
			"isDeleted": false,
			"id": "xEr-ptJFohsa1QbjwvEo6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -868.8810833239639,
			"y": 2288.5464751809914,
			"strokeColor": "#f08c00",
			"backgroundColor": "transparent",
			"width": 60,
			"height": 43.75,
			"seed": 1594458449,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085353,
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
			"version": 176,
			"versionNonce": 101872177,
			"isDeleted": false,
			"id": "zbTmEmpULqy6tYaISRx0k",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -1006.3810833239639,
			"y": 2361.0464751809914,
			"strokeColor": "#f08c00",
			"backgroundColor": "transparent",
			"width": 156.25,
			"height": 23.75,
			"seed": 365899569,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706103085353,
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
			"version": 190,
			"versionNonce": 1881785695,
			"isDeleted": false,
			"id": "mub3E6qc",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 307.7280172550203,
			"y": -335.98337733277316,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 304.87841796875,
			"height": 52.50135083986754,
			"seed": 1915961663,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085353,
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
			"version": 584,
			"versionNonce": 1413940241,
			"isDeleted": false,
			"id": "7MD0DoiTtAZCY06jGzMPJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 199.31386226397854,
			"y": -177.06770379156194,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 408461329,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN"
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
			"updated": 1706103085353,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 96,
			"versionNonce": 984072575,
			"isDeleted": false,
			"id": "pJQ0CuBI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 227.88489727225885,
			"y": -157.11667152986365,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 13.759994506835938,
			"height": 25,
			"seed": 1860849073,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085353,
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
			"version": 619,
			"versionNonce": 1976457713,
			"isDeleted": false,
			"id": "is_DJVK3tGh-pDgvUprLf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 271.31386226397854,
			"y": -178.06770379156194,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2102162929,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN"
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
			"updated": 1706103085353,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 92,
			"versionNonce": 1481718175,
			"isDeleted": false,
			"id": "jvqHJuZE",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 300.36490062919245,
			"y": -158.11667152986365,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.79998779296875,
			"height": 25,
			"seed": 159060927,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085353,
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
			"version": 660,
			"versionNonce": 2075128785,
			"isDeleted": false,
			"id": "-Lj7lAz2FjyHBzS9Reeu_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 343.31386226397865,
			"y": -179.06770379156194,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 621449169,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN"
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
			"updated": 1706103085353,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 90,
			"versionNonce": 1314303423,
			"isDeleted": false,
			"id": "aWNYUn9Y",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 371.11490062919256,
			"y": -159.11667152986365,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 15.29998779296875,
			"height": 25,
			"seed": 146529375,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085353,
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
			"version": 711,
			"versionNonce": 1778602417,
			"isDeleted": false,
			"id": "urkhkhd3c8COCjJAGNiVx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 415.31386226397865,
			"y": -178.06770379156194,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1168797105,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN"
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
			"updated": 1706103085353,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 91,
			"versionNonce": 668507615,
			"isDeleted": false,
			"id": "IS5lRJss",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 440.9349003240168,
			"y": -158.11667152986365,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.659988403320312,
			"height": 25,
			"seed": 525025535,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085353,
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
			"version": 646,
			"versionNonce": 1441788817,
			"isDeleted": false,
			"id": "-DIEFWCQROHUp_o8LLEE9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 202.31386226397854,
			"y": -111.06770379156194,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1716752273,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN"
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
			"updated": 1706103085353,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 89,
			"versionNonce": 937921023,
			"isDeleted": false,
			"id": "me7Y3IYm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 235.05489544120417,
			"y": -91.11667152986365,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.4199981689453125,
			"height": 25,
			"seed": 791283711,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085353,
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
			"version": 681,
			"versionNonce": 1135434097,
			"isDeleted": false,
			"id": "S4reAcP9GnAjcBZ1BYz6n",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 274.31386226397854,
			"y": -112.06770379156194,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1027437937,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN"
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
			"updated": 1706103085353,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 89,
			"versionNonce": 461632031,
			"isDeleted": false,
			"id": "aeHahhYa",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 303.5849018498956,
			"y": -92.11667152986365,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.3599853515625,
			"height": 25,
			"seed": 207207615,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085353,
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
			"version": 722,
			"versionNonce": 1149436753,
			"isDeleted": false,
			"id": "f_3D7yUkcHekCNJ7z979F",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 346.31386226397876,
			"y": -113.06770379156194,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1303355217,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN"
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
			"updated": 1706103085353,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 90,
			"versionNonce": 2073974335,
			"isDeleted": false,
			"id": "ko0zGmRs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 375.6748981877864,
			"y": -93.11667152986365,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.17999267578125,
			"height": 25,
			"seed": 1791834609,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085353,
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
			"version": 773,
			"versionNonce": 1422422321,
			"isDeleted": false,
			"id": "qXChEOaar_WLzJxU4z0zq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 418.31386226397876,
			"y": -112.06770379156194,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1174506801,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN"
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
			"updated": 1706103085353,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 90,
			"versionNonce": 253179487,
			"isDeleted": false,
			"id": "sp7nJrmL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 444.2449055120052,
			"y": -92.11667152986365,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.03997802734375,
			"height": 25,
			"seed": 1813927519,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085353,
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
			"version": 638,
			"versionNonce": 2045059857,
			"isDeleted": false,
			"id": "Q8NhjtR2zhUMi4x2Ieswp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 201.31386226397854,
			"y": -44.06770379156194,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 496680721,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN"
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
			"updated": 1706103085353,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 89,
			"versionNonce": 1556025983,
			"isDeleted": false,
			"id": "WETHB3tI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 229.64489940848932,
			"y": -24.116671529863652,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 14.239990234375,
			"height": 25,
			"seed": 1724424159,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085353,
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
			"version": 671,
			"versionNonce": 542152945,
			"isDeleted": false,
			"id": "z-0EwfMvqQXYJBZXRjus7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 273.31386226397854,
			"y": -45.06770379156194,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1928508657,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN"
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
			"updated": 1706103085353,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 91,
			"versionNonce": 1029073567,
			"isDeleted": false,
			"id": "5BSuKiTC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 302.36490062919245,
			"y": -25.116671529863652,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.79998779296875,
			"height": 25,
			"seed": 2070795391,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085353,
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
			"version": 714,
			"versionNonce": 965890769,
			"isDeleted": false,
			"id": "dSY7keMvz6fqT7ozxEEZg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 345.31386226397876,
			"y": -46.06770379156194,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 697364177,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN"
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
			"updated": 1706103085353,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 93,
			"versionNonce": 495828671,
			"isDeleted": false,
			"id": "jBfV6Tle",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 371.1748981877864,
			"y": -26.116671529863652,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.17999267578125,
			"height": 25,
			"seed": 1124194513,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085353,
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
			"version": 765,
			"versionNonce": 440520881,
			"isDeleted": false,
			"id": "5-zWuzfRGyhU6wXnSdmTo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 417.31386226397876,
			"y": -45.06770379156194,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1208806577,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN"
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
			"updated": 1706103085353,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 89,
			"versionNonce": 364255,
			"isDeleted": false,
			"id": "f3M2BTXb",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 443.65490154472,
			"y": -25.116671529863652,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 18.219985961914062,
			"height": 25,
			"seed": 838879057,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085353,
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
			"version": 619,
			"versionNonce": 403083921,
			"isDeleted": false,
			"id": "4ctPIPE1zNcuuaMqYtJt_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 202.31386226397854,
			"y": 21.93229620843806,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 370028177,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN"
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
			"updated": 1706103085353,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 88,
			"versionNonce": 1062099711,
			"isDeleted": false,
			"id": "JXLh0jHX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 230.9549045964776,
			"y": 41.88332847013635,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 13.619979858398438,
			"height": 25,
			"seed": 485790897,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085354,
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
			"version": 654,
			"versionNonce": 1738020977,
			"isDeleted": false,
			"id": "lhgWL8kgjP4eLFBFWWXva",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 274.31386226397854,
			"y": 20.93229620843806,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2051814513,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN"
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
			"updated": 1706103085354,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 90,
			"versionNonce": 266904351,
			"isDeleted": false,
			"id": "ra9L2sR7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 304.38489727225885,
			"y": 40.88332847013635,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 10.759994506835938,
			"height": 25,
			"seed": 1010015217,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085354,
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
			"version": 695,
			"versionNonce": 985522769,
			"isDeleted": false,
			"id": "mLwhE4Ghov_ccgVAYOks8",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 346.31386226397876,
			"y": 19.93229620843806,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 411991633,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN"
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
			"updated": 1706103085354,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 89,
			"versionNonce": 1111811903,
			"isDeleted": false,
			"id": "XCsGsuNJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 376.34489635673174,
			"y": 39.88332847013635,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 10.839996337890625,
			"height": 25,
			"seed": 1499399505,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085354,
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
			"version": 746,
			"versionNonce": 508522545,
			"isDeleted": false,
			"id": "1rHnKPZ29ZC1ElMQnonN_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 418.31386226397876,
			"y": 20.93229620843806,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 799837233,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN"
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
			"updated": 1706103085354,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 89,
			"versionNonce": 1153673055,
			"isDeleted": false,
			"id": "4sLpLDNn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 444.87490276542314,
			"y": 40.88332847013635,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 17.779983520507812,
			"height": 25,
			"seed": 1119680767,
			"groupIds": [
				"TnPbK06BY7zk2VGi5_5zN"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085354,
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
			"version": 402,
			"versionNonce": 406077969,
			"isDeleted": false,
			"id": "rBty1FUY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 655.7622374966186,
			"y": -331.35707064000957,
			"strokeColor": "#12b886",
			"backgroundColor": "transparent",
			"width": 750,
			"height": 120,
			"seed": 547898271,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085354,
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
			"type": "text",
			"version": 832,
			"versionNonce": 1706386303,
			"isDeleted": false,
			"id": "4gEp7Bez",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -1748.1551425711925,
			"y": -166.1939665514509,
			"strokeColor": "#12b886",
			"backgroundColor": "transparent",
			"width": 726.5625,
			"height": 432,
			"seed": 754421425,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085354,
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
			"type": "rectangle",
			"version": 746,
			"versionNonce": 40859601,
			"isDeleted": false,
			"id": "UNjgfeuC-6XHoh9MXfIGu",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 611.1602075087071,
			"y": -169.04065115810056,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 75401265,
			"groupIds": [
				"-w8zDQTp_VdscKojEwV2V"
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
			"updated": 1706103120418,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 259,
			"versionNonce": 1983010225,
			"isDeleted": false,
			"id": "WQ1Jfewx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 639.7312425169874,
			"y": -149.08961889640227,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 13.759994506835938,
			"height": 25,
			"seed": 415259153,
			"groupIds": [
				"-w8zDQTp_VdscKojEwV2V"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103120418,
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
			"version": 781,
			"versionNonce": 228489105,
			"isDeleted": false,
			"id": "a1NJ8mhr_rtBlBOKUlplh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 683.1602075087071,
			"y": -170.04065115810056,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1286402033,
			"groupIds": [
				"-w8zDQTp_VdscKojEwV2V"
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
			"updated": 1706103120418,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 255,
			"versionNonce": 183197041,
			"isDeleted": false,
			"id": "VDOHv0nf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 712.211245873921,
			"y": -150.08961889640227,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.79998779296875,
			"height": 25,
			"seed": 1716242897,
			"groupIds": [
				"-w8zDQTp_VdscKojEwV2V"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103120418,
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
			"version": 822,
			"versionNonce": 2103478097,
			"isDeleted": false,
			"id": "WITMwnDwi9Ls6B9vE-i4g",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 755.1602075087072,
			"y": -171.04065115810056,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2125752241,
			"groupIds": [
				"-w8zDQTp_VdscKojEwV2V"
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
			"updated": 1706103120418,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 253,
			"versionNonce": 525694257,
			"isDeleted": false,
			"id": "hPdu9tYa",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 782.9612458739211,
			"y": -151.08961889640227,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 15.29998779296875,
			"height": 25,
			"seed": 537807249,
			"groupIds": [
				"-w8zDQTp_VdscKojEwV2V"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103120418,
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
			"version": 873,
			"versionNonce": 1949411089,
			"isDeleted": false,
			"id": "qtZf-KkiJbrHH8o_FMst4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 827.1602075087072,
			"y": -170.04065115810056,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 596701041,
			"groupIds": [
				"-w8zDQTp_VdscKojEwV2V"
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
			"updated": 1706103120418,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 254,
			"versionNonce": 644652273,
			"isDeleted": false,
			"id": "7746ZMaB",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 852.7812455687454,
			"y": -150.08961889640227,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.659988403320312,
			"height": 25,
			"seed": 1334040913,
			"groupIds": [
				"-w8zDQTp_VdscKojEwV2V"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103120418,
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
			"version": 808,
			"versionNonce": 630052561,
			"isDeleted": false,
			"id": "xhK1TTQ69g5edZ2DW0C57",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 614.1602075087071,
			"y": -103.04065115810056,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 893290289,
			"groupIds": [
				"-w8zDQTp_VdscKojEwV2V"
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
			"updated": 1706103120418,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 252,
			"versionNonce": 70046897,
			"isDeleted": false,
			"id": "iLP3frdV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 646.9012406859327,
			"y": -83.08961889640227,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.4199981689453125,
			"height": 25,
			"seed": 1328052497,
			"groupIds": [
				"-w8zDQTp_VdscKojEwV2V"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103120418,
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
			"version": 843,
			"versionNonce": 368121489,
			"isDeleted": false,
			"id": "fz2MMW40ngcMqmFuWganY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 686.1602075087071,
			"y": -104.04065115810056,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1589194481,
			"groupIds": [
				"-w8zDQTp_VdscKojEwV2V"
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
			"updated": 1706103120418,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 252,
			"versionNonce": 1301421169,
			"isDeleted": false,
			"id": "QHL8s9OJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 715.4312470946242,
			"y": -84.08961889640227,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.3599853515625,
			"height": 25,
			"seed": 175646929,
			"groupIds": [
				"-w8zDQTp_VdscKojEwV2V"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103120418,
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
			"version": 884,
			"versionNonce": 1524065873,
			"isDeleted": false,
			"id": "UNJhyMDZxplD0VryecHiW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 758.1602075087073,
			"y": -105.04065115810056,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1006429873,
			"groupIds": [
				"-w8zDQTp_VdscKojEwV2V"
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
			"updated": 1706103120418,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 253,
			"versionNonce": 144208945,
			"isDeleted": false,
			"id": "3ydTREHg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 787.521243432515,
			"y": -85.08961889640227,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.17999267578125,
			"height": 25,
			"seed": 1039067281,
			"groupIds": [
				"-w8zDQTp_VdscKojEwV2V"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103120418,
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
			"version": 935,
			"versionNonce": 1522320913,
			"isDeleted": false,
			"id": "J5a4u7fVnusWXn3M0TPdB",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 830.1602075087073,
			"y": -104.04065115810056,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 436579953,
			"groupIds": [
				"-w8zDQTp_VdscKojEwV2V"
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
			"updated": 1706103120418,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 253,
			"versionNonce": 1815862257,
			"isDeleted": false,
			"id": "pc5LHUSq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 856.0912507567338,
			"y": -84.08961889640227,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.03997802734375,
			"height": 25,
			"seed": 923318353,
			"groupIds": [
				"-w8zDQTp_VdscKojEwV2V"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103120418,
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
			"version": 800,
			"versionNonce": 220018129,
			"isDeleted": false,
			"id": "_qXL-QEPBGqDBF1UnKHLi",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 613.1602075087071,
			"y": -36.04065115810056,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 919569969,
			"groupIds": [
				"-w8zDQTp_VdscKojEwV2V"
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
			"updated": 1706103120418,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 252,
			"versionNonce": 544756657,
			"isDeleted": false,
			"id": "sdnqkUIf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 641.4912446532179,
			"y": -16.08961889640227,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 14.239990234375,
			"height": 25,
			"seed": 339843089,
			"groupIds": [
				"-w8zDQTp_VdscKojEwV2V"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103120418,
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
			"version": 833,
			"versionNonce": 980727185,
			"isDeleted": false,
			"id": "QN8jck723RsgFHbSR2N2Q",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 685.1602075087071,
			"y": -37.04065115810056,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 22441457,
			"groupIds": [
				"-w8zDQTp_VdscKojEwV2V"
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
			"updated": 1706103120418,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 254,
			"versionNonce": 2118769521,
			"isDeleted": false,
			"id": "s8ZDHI1j",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 714.211245873921,
			"y": -17.08961889640227,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.79998779296875,
			"height": 25,
			"seed": 85297105,
			"groupIds": [
				"-w8zDQTp_VdscKojEwV2V"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103120418,
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
			"version": 876,
			"versionNonce": 1010779473,
			"isDeleted": false,
			"id": "_-_t0ri6ONKHLu_NvljoJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 757.1602075087073,
			"y": -38.04065115810056,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1503028657,
			"groupIds": [
				"-w8zDQTp_VdscKojEwV2V"
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
			"updated": 1706103120418,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 256,
			"versionNonce": 1336701745,
			"isDeleted": false,
			"id": "lqeDDaGy",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 783.021243432515,
			"y": -18.08961889640227,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.17999267578125,
			"height": 25,
			"seed": 167806865,
			"groupIds": [
				"-w8zDQTp_VdscKojEwV2V"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103120418,
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
			"version": 927,
			"versionNonce": 1022944529,
			"isDeleted": false,
			"id": "URRkH-lQ-GDU6lEA2etEw",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 829.1602075087073,
			"y": -37.04065115810056,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1351314801,
			"groupIds": [
				"-w8zDQTp_VdscKojEwV2V"
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
			"updated": 1706103120418,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 252,
			"versionNonce": 261888753,
			"isDeleted": false,
			"id": "eIEeIrGx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 855.5012467894486,
			"y": -17.08961889640227,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 18.219985961914062,
			"height": 25,
			"seed": 880711505,
			"groupIds": [
				"-w8zDQTp_VdscKojEwV2V"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103120418,
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
			"version": 781,
			"versionNonce": 2015204561,
			"isDeleted": false,
			"id": "K7J2y57iCH4hTHNiTRDeH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 614.1602075087071,
			"y": 29.95934884189944,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1748075825,
			"groupIds": [
				"-w8zDQTp_VdscKojEwV2V"
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
			"updated": 1706103120418,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 251,
			"versionNonce": 706007729,
			"isDeleted": false,
			"id": "bsr8eXAy",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 642.8012498412062,
			"y": 49.91038110359773,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 13.619979858398438,
			"height": 25,
			"seed": 1728821009,
			"groupIds": [
				"-w8zDQTp_VdscKojEwV2V"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103120418,
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
			"version": 816,
			"versionNonce": 2049528977,
			"isDeleted": false,
			"id": "kzyUoWywUHBkarNK0OGPH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 686.1602075087071,
			"y": 28.95934884189944,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1401203953,
			"groupIds": [
				"-w8zDQTp_VdscKojEwV2V"
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
			"updated": 1706103120418,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 253,
			"versionNonce": 1007852145,
			"isDeleted": false,
			"id": "UNXpxfRS",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 716.2312425169874,
			"y": 48.91038110359773,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 10.759994506835938,
			"height": 25,
			"seed": 354674385,
			"groupIds": [
				"-w8zDQTp_VdscKojEwV2V"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103120418,
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
			"version": 857,
			"versionNonce": 1620583505,
			"isDeleted": false,
			"id": "YqHhpvtoOAiERizGOJNos",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 758.1602075087073,
			"y": 27.95934884189944,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 914416817,
			"groupIds": [
				"-w8zDQTp_VdscKojEwV2V"
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
			"updated": 1706103120418,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 252,
			"versionNonce": 1402040881,
			"isDeleted": false,
			"id": "ovnjIW79",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 788.1912416014603,
			"y": 47.91038110359773,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 10.839996337890625,
			"height": 25,
			"seed": 54732433,
			"groupIds": [
				"-w8zDQTp_VdscKojEwV2V"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103120418,
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
			"version": 908,
			"versionNonce": 434504721,
			"isDeleted": false,
			"id": "UgFGvj6pN4Z0pOdXTs4ba",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 830.1602075087073,
			"y": 28.95934884189944,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1713515633,
			"groupIds": [
				"-w8zDQTp_VdscKojEwV2V"
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
			"updated": 1706103120418,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 252,
			"versionNonce": 797792753,
			"isDeleted": false,
			"id": "OLYx1I0H",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 856.7212480101517,
			"y": 48.91038110359773,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 17.779983520507812,
			"height": 25,
			"seed": 115701329,
			"groupIds": [
				"-w8zDQTp_VdscKojEwV2V"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103120418,
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
			"version": 345,
			"versionNonce": 2067617265,
			"isDeleted": false,
			"id": "R6wZEpVL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -95.55639211248217,
			"y": -160.28192658871,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 123.05987548828125,
			"height": 25,
			"seed": 1887437727,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103085355,
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
			"version": 756,
			"versionNonce": 1650458015,
			"isDeleted": false,
			"id": "5sROTqMTujnRMUnXhTKFB",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 632.852515201015,
			"y": 301.26704114959193,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 14056177,
			"groupIds": [
				"ytRGCqYjN5prcYsaPlxhE"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "MdYZ0nvj"
				}
			],
			"updated": 1706103085355,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 273,
			"versionNonce": 1323069343,
			"isDeleted": false,
			"id": "MdYZ0nvj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 661.4235502092953,
			"y": 321.2180734112902,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 13.759994506835938,
			"height": 25,
			"seed": 319550673,
			"groupIds": [
				"ytRGCqYjN5prcYsaPlxhE"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103113795,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "0",
			"rawText": "0",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "5sROTqMTujnRMUnXhTKFB",
			"originalText": "0",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 818,
			"versionNonce": 837611967,
			"isDeleted": false,
			"id": "7W9NovxYw1NQw7hT_jHk3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 635.852515201015,
			"y": 367.26704114959193,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2020063729,
			"groupIds": [
				"ytRGCqYjN5prcYsaPlxhE"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "xt6i2ZvQ"
				}
			],
			"updated": 1706103085355,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 266,
			"versionNonce": 2047550399,
			"isDeleted": false,
			"id": "xt6i2ZvQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 668.5935483782406,
			"y": 387.2180734112902,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.4199981689453125,
			"height": 25,
			"seed": 605901777,
			"groupIds": [
				"ytRGCqYjN5prcYsaPlxhE"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103113795,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "1",
			"rawText": "1",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "7W9NovxYw1NQw7hT_jHk3",
			"originalText": "1",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 810,
			"versionNonce": 1208377823,
			"isDeleted": false,
			"id": "0nGRd-arTGuexIK0C_ey4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 634.852515201015,
			"y": 434.26704114959193,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1804204273,
			"groupIds": [
				"ytRGCqYjN5prcYsaPlxhE"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "N168WqBG"
				}
			],
			"updated": 1706103085355,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 266,
			"versionNonce": 294540255,
			"isDeleted": false,
			"id": "N168WqBG",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 663.1835523455258,
			"y": 454.2180734112902,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 14.239990234375,
			"height": 25,
			"seed": 379564753,
			"groupIds": [
				"ytRGCqYjN5prcYsaPlxhE"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103113795,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "2",
			"rawText": "2",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "0nGRd-arTGuexIK0C_ey4",
			"originalText": "2",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 791,
			"versionNonce": 364695039,
			"isDeleted": false,
			"id": "KR-CMrtVHu6JNhKLvWgEV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 635.852515201015,
			"y": 500.26704114959193,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2034055153,
			"groupIds": [
				"ytRGCqYjN5prcYsaPlxhE"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "4IJzeWEU"
				}
			],
			"updated": 1706103085355,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 265,
			"versionNonce": 225869823,
			"isDeleted": false,
			"id": "4IJzeWEU",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 664.493557533514,
			"y": 520.2180734112902,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 13.619979858398438,
			"height": 25,
			"seed": 697504209,
			"groupIds": [
				"ytRGCqYjN5prcYsaPlxhE"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103113795,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "3",
			"rawText": "3",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "KR-CMrtVHu6JNhKLvWgEV",
			"originalText": "3",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 750,
			"versionNonce": 370193951,
			"isDeleted": false,
			"id": "k_RhlYJmkAnkqFvbWpRKt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 732.852515201015,
			"y": 300.26704114959193,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 406270641,
			"groupIds": [
				"iR4ZNtKGHfKYaobuXBYrr"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "do5kdVz3"
				}
			],
			"updated": 1706103085355,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 228,
			"versionNonce": 264513567,
			"isDeleted": false,
			"id": "do5kdVz3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 761.9035535662289,
			"y": 320.2180734112902,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.79998779296875,
			"height": 25,
			"seed": 889173137,
			"groupIds": [
				"iR4ZNtKGHfKYaobuXBYrr"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103113795,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "4",
			"rawText": "4",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "k_RhlYJmkAnkqFvbWpRKt",
			"originalText": "4",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 812,
			"versionNonce": 267557439,
			"isDeleted": false,
			"id": "OMdsKBI7KgNSkHFudmmqv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 735.852515201015,
			"y": 366.26704114959193,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1573171633,
			"groupIds": [
				"iR4ZNtKGHfKYaobuXBYrr"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "pIvgWw3m"
				}
			],
			"updated": 1706103085355,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 225,
			"versionNonce": 644336703,
			"isDeleted": false,
			"id": "pIvgWw3m",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 765.123554786932,
			"y": 386.2180734112902,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.3599853515625,
			"height": 25,
			"seed": 176509841,
			"groupIds": [
				"iR4ZNtKGHfKYaobuXBYrr"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103113795,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "5",
			"rawText": "5",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "OMdsKBI7KgNSkHFudmmqv",
			"originalText": "5",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 802,
			"versionNonce": 407042655,
			"isDeleted": false,
			"id": "reKzzroQ6Ff13dsA0JhbE",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 734.852515201015,
			"y": 433.26704114959193,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 782446769,
			"groupIds": [
				"iR4ZNtKGHfKYaobuXBYrr"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "6uVmupEi"
				}
			],
			"updated": 1706103085355,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 227,
			"versionNonce": 1296165983,
			"isDeleted": false,
			"id": "6uVmupEi",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 763.9035535662289,
			"y": 453.2180734112902,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.79998779296875,
			"height": 25,
			"seed": 1497100945,
			"groupIds": [
				"iR4ZNtKGHfKYaobuXBYrr"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103113795,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "6",
			"rawText": "6",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "reKzzroQ6Ff13dsA0JhbE",
			"originalText": "6",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 784,
			"versionNonce": 1406293631,
			"isDeleted": false,
			"id": "4hfpQJJjnmswfsgi4KoW8",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 735.852515201015,
			"y": 499.26704114959193,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1775415217,
			"groupIds": [
				"iR4ZNtKGHfKYaobuXBYrr"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "e8KHhAOb"
				}
			],
			"updated": 1706103085355,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 225,
			"versionNonce": 807602303,
			"isDeleted": false,
			"id": "e8KHhAOb",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 765.9235502092953,
			"y": 519.2180734112902,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 10.759994506835938,
			"height": 25,
			"seed": 539201937,
			"groupIds": [
				"iR4ZNtKGHfKYaobuXBYrr"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103113795,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "7",
			"rawText": "7",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "4hfpQJJjnmswfsgi4KoW8",
			"originalText": "7",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 801,
			"versionNonce": 2036412063,
			"isDeleted": false,
			"id": "UB_mIUYWdHwXDJAbGVwRL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 828.852515201015,
			"y": 299.26704114959193,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 220002929,
			"groupIds": [
				"viDZHeRTFlDYJxQoK1jqP"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "B0RrpKs6"
				}
			],
			"updated": 1706103085355,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 236,
			"versionNonce": 751542431,
			"isDeleted": false,
			"id": "B0RrpKs6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 856.6535535662289,
			"y": 319.2180734112902,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 15.29998779296875,
			"height": 25,
			"seed": 1633059921,
			"groupIds": [
				"viDZHeRTFlDYJxQoK1jqP"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103113795,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "8",
			"rawText": "8",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "UB_mIUYWdHwXDJAbGVwRL",
			"originalText": "8",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 863,
			"versionNonce": 329253567,
			"isDeleted": false,
			"id": "JZ5zuFOi23hF333cRt50K",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 831.8525152010152,
			"y": 365.26704114959193,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2123807089,
			"groupIds": [
				"viDZHeRTFlDYJxQoK1jqP"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "fz9AvqKw"
				}
			],
			"updated": 1706103085356,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 236,
			"versionNonce": 351024319,
			"isDeleted": false,
			"id": "fz9AvqKw",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 861.2135511248229,
			"y": 385.2180734112902,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 12.17999267578125,
			"height": 25,
			"seed": 457204561,
			"groupIds": [
				"viDZHeRTFlDYJxQoK1jqP"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103113795,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "9",
			"rawText": "9",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "JZ5zuFOi23hF333cRt50K",
			"originalText": "9",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 855,
			"versionNonce": 53433055,
			"isDeleted": false,
			"id": "V-6ki5rswvfAbbY0xXrFT",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 830.8525152010152,
			"y": 432.26704114959193,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 455178353,
			"groupIds": [
				"viDZHeRTFlDYJxQoK1jqP"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "XmWXkhaM"
				}
			],
			"updated": 1706103085356,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 239,
			"versionNonce": 807748831,
			"isDeleted": false,
			"id": "XmWXkhaM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 856.7135511248229,
			"y": 452.2180734112902,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.17999267578125,
			"height": 25,
			"seed": 1981497937,
			"groupIds": [
				"viDZHeRTFlDYJxQoK1jqP"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103113795,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "10",
			"rawText": "10",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "V-6ki5rswvfAbbY0xXrFT",
			"originalText": "10",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 836,
			"versionNonce": 1084202751,
			"isDeleted": false,
			"id": "iPpRQXXKsNPjpzAxqDwTv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 831.8525152010152,
			"y": 498.26704114959193,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 29177713,
			"groupIds": [
				"viDZHeRTFlDYJxQoK1jqP"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "AAHDuPZk"
				}
			],
			"updated": 1706103085356,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 235,
			"versionNonce": 2114408703,
			"isDeleted": false,
			"id": "AAHDuPZk",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 861.8835492937682,
			"y": 518.2180734112902,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 10.839996337890625,
			"height": 25,
			"seed": 820453713,
			"groupIds": [
				"viDZHeRTFlDYJxQoK1jqP"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103113795,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "11",
			"rawText": "11",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "iPpRQXXKsNPjpzAxqDwTv",
			"originalText": "11",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 864,
			"versionNonce": 1584490271,
			"isDeleted": false,
			"id": "LMMEUyLfOux-mdnbQ0uvQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 930.852515201015,
			"y": 300.26704114959193,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1837355569,
			"groupIds": [
				"LP03lssPC2-5bbOGYIpLy"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "8el1XKc3"
				}
			],
			"updated": 1706103085356,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 249,
			"versionNonce": 940759327,
			"isDeleted": false,
			"id": "8el1XKc3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 956.4735532610531,
			"y": 320.2180734112902,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.659988403320312,
			"height": 25,
			"seed": 109863953,
			"groupIds": [
				"LP03lssPC2-5bbOGYIpLy"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103113795,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "12",
			"rawText": "12",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "LMMEUyLfOux-mdnbQ0uvQ",
			"originalText": "12",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 926,
			"versionNonce": 1259678527,
			"isDeleted": false,
			"id": "3z5ZHcUlNt_NnRMzCWz0i",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 933.8525152010152,
			"y": 366.26704114959193,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 752472369,
			"groupIds": [
				"LP03lssPC2-5bbOGYIpLy"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "rDh9PBt5"
				}
			],
			"updated": 1706103085356,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 248,
			"versionNonce": 330849599,
			"isDeleted": false,
			"id": "rDh9PBt5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 959.7835584490416,
			"y": 386.2180734112902,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 19.03997802734375,
			"height": 25,
			"seed": 147489553,
			"groupIds": [
				"LP03lssPC2-5bbOGYIpLy"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103113796,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "13",
			"rawText": "13",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "3z5ZHcUlNt_NnRMzCWz0i",
			"originalText": "13",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 918,
			"versionNonce": 1391160159,
			"isDeleted": false,
			"id": "_yHCSDArewaaau5QozTQ0",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 932.8525152010152,
			"y": 433.26704114959193,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1191235633,
			"groupIds": [
				"LP03lssPC2-5bbOGYIpLy"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "jL7bpOoq"
				}
			],
			"updated": 1706103085356,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 247,
			"versionNonce": 1146641759,
			"isDeleted": false,
			"id": "jL7bpOoq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 959.1935544817565,
			"y": 453.2180734112902,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 18.219985961914062,
			"height": 25,
			"seed": 1673110033,
			"groupIds": [
				"LP03lssPC2-5bbOGYIpLy"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103113796,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "14",
			"rawText": "14",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "_yHCSDArewaaau5QozTQ0",
			"originalText": "14",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 899,
			"versionNonce": 1648666495,
			"isDeleted": false,
			"id": "t6-_UBVsSTtKo96pPD8kg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 933.8525152010152,
			"y": 499.26704114959193,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 452513585,
			"groupIds": [
				"LP03lssPC2-5bbOGYIpLy"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "GaVPt18c"
				}
			],
			"updated": 1706103085356,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 247,
			"versionNonce": 1027823999,
			"isDeleted": false,
			"id": "GaVPt18c",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 960.4135557024596,
			"y": 519.2180734112902,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 17.779983520507812,
			"height": 25,
			"seed": 374980881,
			"groupIds": [
				"LP03lssPC2-5bbOGYIpLy"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706103113796,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "15",
			"rawText": "15",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "t6-_UBVsSTtKo96pPD8kg",
			"originalText": "15",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"id": "oJvZb_gLID3LgFsQLZkub",
			"type": "line",
			"x": 675.3420090011748,
			"y": 565.2949964882133,
			"width": 92.30769230769238,
			"height": 267.69230769230774,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"seed": 697115985,
			"version": 341,
			"versionNonce": 123821983,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1706103085356,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					47.69230769230762,
					-10.76923076923083
				],
				[
					40.00000000000023,
					-267.6923076923076
				],
				[
					92.30769230769238,
					-267.69230769230774
				]
			],
			"lastCommittedPoint": [
				92.30769230769238,
				-267.69230769230774
			],
			"startBinding": null,
			"endBinding": null,
			"startArrowhead": null,
			"endArrowhead": null
		},
		{
			"id": "YsNS0naKKrw44F6qgqhdL",
			"type": "line",
			"x": 775.3420090011748,
			"y": 563.7565349497518,
			"width": 93.84615384615381,
			"height": 275.38461538461536,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"seed": 1345695007,
			"version": 159,
			"versionNonce": 563949009,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1706103085356,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					47.69230769230785,
					-10.76923076923083
				],
				[
					43.076923076923094,
					-275.38461538461536
				],
				[
					93.84615384615381,
					-264.61538461538464
				]
			],
			"lastCommittedPoint": [
				93.84615384615381,
				-264.61538461538464
			],
			"startBinding": null,
			"endBinding": null,
			"startArrowhead": null,
			"endArrowhead": null
		},
		{
			"id": "WBVxh8PeHC4tO8jwjHToE",
			"type": "line",
			"x": 873.8035474627134,
			"y": 563.7565349497518,
			"width": 93.84615384615381,
			"height": 278.46153846153845,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"seed": 742733361,
			"version": 135,
			"versionNonce": 305744817,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1706103085356,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					44.61538461538453,
					-12.307692307692378
				],
				[
					43.076923076923094,
					-278.46153846153845
				],
				[
					93.84615384615381,
					-264.61538461538464
				]
			],
			"lastCommittedPoint": [
				93.84615384615381,
				-264.61538461538464
			],
			"startBinding": null,
			"endBinding": null,
			"startArrowhead": null,
			"endArrowhead": null
		}
	],
	"appState": {
		"theme": "light",
		"viewBackgroundColor": "#ffffff",
		"currentItemStrokeColor": "#1e1e1e",
		"currentItemBackgroundColor": "transparent",
		"currentItemFillStyle": "solid",
		"currentItemStrokeWidth": 2,
		"currentItemStrokeStyle": "solid",
		"currentItemRoughness": 1,
		"currentItemOpacity": 100,
		"currentItemFontFamily": 3,
		"currentItemFontSize": 20,
		"currentItemTextAlign": "left",
		"currentItemStartArrowhead": null,
		"currentItemEndArrowhead": "arrow",
		"scrollX": 1076.1964525372866,
		"scrollY": 570.8588496656329,
		"zoom": {
			"value": 0.65
		},
		"currentItemRoundness": "round",
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