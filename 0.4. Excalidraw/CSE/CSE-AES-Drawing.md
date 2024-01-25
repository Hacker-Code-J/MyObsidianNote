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
			"version": 279,
			"versionNonce": 1752363052,
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
			"updated": 1706162536879,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 192,
			"versionNonce": 1083472020,
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
			"updated": 1706162536879,
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
			"version": 149,
			"versionNonce": 461114028,
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
			"updated": 1706162536879,
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
			"version": 263,
			"versionNonce": 1914717716,
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
			"updated": 1706162536879,
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
			"version": 373,
			"versionNonce": 1937626412,
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
			"updated": 1706162536879,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 104,
			"versionNonce": 1809212308,
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
			"updated": 1706162536879,
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
			"version": 91,
			"versionNonce": 769806252,
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
			"updated": 1706162536879,
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
			"version": 110,
			"versionNonce": 1408028948,
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
			"updated": 1706162536879,
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
			"version": 154,
			"versionNonce": 1255373356,
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
			"updated": 1706162536879,
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
			"version": 112,
			"versionNonce": 433688212,
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
			"updated": 1706162536879,
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
			"version": 131,
			"versionNonce": 893080748,
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
			"updated": 1706162536879,
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
			"version": 358,
			"versionNonce": 1314036756,
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
			"updated": 1706162536879,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 144,
			"versionNonce": 1791221548,
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
			"updated": 1706162536879,
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
			"version": 548,
			"versionNonce": 2068707732,
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
			"updated": 1706162536879,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 53,
			"versionNonce": 601299372,
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
			"updated": 1706162536879,
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
			"version": 583,
			"versionNonce": 2080483092,
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
			"updated": 1706162536879,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 53,
			"versionNonce": 2074018860,
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
			"updated": 1706162536879,
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
			"version": 624,
			"versionNonce": 1424204948,
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
			"updated": 1706162536879,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 53,
			"versionNonce": 403021484,
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
			"updated": 1706162536880,
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
			"version": 675,
			"versionNonce": 195686932,
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
			"updated": 1706162536880,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 53,
			"versionNonce": 1370810668,
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
			"updated": 1706162536880,
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
			"version": 610,
			"versionNonce": 2135592852,
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
			"updated": 1706162536880,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 53,
			"versionNonce": 1545003948,
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
			"updated": 1706162536880,
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
			"version": 645,
			"versionNonce": 1073446164,
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
			"updated": 1706162536880,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 53,
			"versionNonce": 1834323500,
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
			"updated": 1706162536880,
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
			"version": 686,
			"versionNonce": 1731377812,
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
			"updated": 1706162536880,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 53,
			"versionNonce": 1717233836,
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
			"updated": 1706162536880,
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
			"version": 737,
			"versionNonce": 1873168404,
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
			"updated": 1706162536880,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 53,
			"versionNonce": 2060514092,
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
			"updated": 1706162536880,
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
			"version": 600,
			"versionNonce": 223094164,
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
			"updated": 1706162536880,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 53,
			"versionNonce": 1495379372,
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
			"updated": 1706162536880,
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
			"version": 636,
			"versionNonce": 89805588,
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
			"updated": 1706162536880,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 50,
			"versionNonce": 1383536684,
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
			"updated": 1706162536880,
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
			"version": 676,
			"versionNonce": 105304212,
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
			"updated": 1706162536880,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 52,
			"versionNonce": 45822636,
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
			"updated": 1706162536880,
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
			"version": 727,
			"versionNonce": 2143788564,
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
			"updated": 1706162536880,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 52,
			"versionNonce": 2023226668,
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
			"updated": 1706162536880,
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
			"version": 583,
			"versionNonce": 2060630932,
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
			"updated": 1706162536880,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 52,
			"versionNonce": 1568110508,
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
			"updated": 1706162536880,
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
			"version": 618,
			"versionNonce": 1906190612,
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
			"updated": 1706162536880,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 52,
			"versionNonce": 495165996,
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
			"updated": 1706162536880,
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
			"version": 659,
			"versionNonce": 664790676,
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
			"updated": 1706162536880,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 52,
			"versionNonce": 262569132,
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
			"updated": 1706162536880,
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
			"version": 710,
			"versionNonce": 26080276,
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
			"updated": 1706162536881,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 52,
			"versionNonce": 495585068,
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
			"updated": 1706162536881,
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
			"version": 256,
			"versionNonce": 1566462356,
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
			"updated": 1706162536881,
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
			"version": 403,
			"versionNonce": 1805140396,
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
			"updated": 1706162536881,
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
			"version": 693,
			"versionNonce": 1783037716,
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
			"updated": 1706162536881,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 728,
			"versionNonce": 16460844,
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
			"updated": 1706162536881,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 769,
			"versionNonce": 12450964,
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
			"updated": 1706162536881,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 820,
			"versionNonce": 1872545452,
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
			"updated": 1706162536881,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1368,
			"versionNonce": 2054769172,
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
			"updated": 1706162536881,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1404,
			"versionNonce": 2082935084,
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
			"updated": 1706162536881,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1442,
			"versionNonce": 175040404,
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
			"updated": 1706162536881,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1494,
			"versionNonce": 1174670252,
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
			"updated": 1706162536881,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 379,
			"versionNonce": 349492500,
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
			"updated": 1706162536881,
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
			"version": 1122,
			"versionNonce": 1868412460,
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
			"updated": 1706162536881,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1157,
			"versionNonce": 119607956,
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
			"updated": 1706162536881,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1198,
			"versionNonce": 1159598252,
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
			"updated": 1706162536881,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1249,
			"versionNonce": 805937172,
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
			"updated": 1706162536881,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 131,
			"versionNonce": 1726946092,
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
			"updated": 1706162536881,
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
			"version": 346,
			"versionNonce": 394558868,
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
			"updated": 1706162536881,
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
			"version": 370,
			"versionNonce": 1866126764,
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
			"updated": 1706162536881,
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
			"version": 368,
			"versionNonce": 1455926036,
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
			"updated": 1706162536881,
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
			"version": 84,
			"versionNonce": 455819308,
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
			"updated": 1706162536881,
			"link": null,
			"locked": false
		},
		{
			"type": "arrow",
			"version": 230,
			"versionNonce": 1883842708,
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
			"updated": 1706162536881,
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
			"version": 151,
			"versionNonce": 1923766956,
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
			"updated": 1706162536881,
			"link": null,
			"locked": false
		},
		{
			"type": "arrow",
			"version": 375,
			"versionNonce": 666826260,
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
			"updated": 1706162536881,
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
			"version": 169,
			"versionNonce": 1885480236,
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
			"updated": 1706162536881,
			"link": null,
			"locked": false
		},
		{
			"type": "arrow",
			"version": 469,
			"versionNonce": 1511986068,
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
			"updated": 1706162536881,
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
			"version": 135,
			"versionNonce": 700227500,
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
			"updated": 1706162536881,
			"link": null,
			"locked": false
		},
		{
			"type": "arrow",
			"version": 352,
			"versionNonce": 1436516628,
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
			"updated": 1706162536881,
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
			"version": 1349,
			"versionNonce": 1994639916,
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
			"updated": 1706162536881,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 221,
			"versionNonce": 834027156,
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
			"updated": 1706162536881,
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
			"version": 1385,
			"versionNonce": 448898220,
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
			"updated": 1706162536882,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 278,
			"versionNonce": 655969300,
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
			"updated": 1706162536882,
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
			"version": 1427,
			"versionNonce": 1795174188,
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
			"updated": 1706162536882,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 276,
			"versionNonce": 1740548500,
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
			"updated": 1706162536882,
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
			"version": 1475,
			"versionNonce": 2013882796,
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
			"updated": 1706162536882,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 275,
			"versionNonce": 1994151700,
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
			"updated": 1706162536882,
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
			"version": 653,
			"versionNonce": 889672748,
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
			"updated": 1706162536882,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 158,
			"versionNonce": 15226004,
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
			"updated": 1706162536882,
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
			"version": 687,
			"versionNonce": 535031468,
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
			"updated": 1706162536882,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 158,
			"versionNonce": 865640980,
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
			"updated": 1706162536882,
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
			"version": 728,
			"versionNonce": 1766406444,
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
			"updated": 1706162536882,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 158,
			"versionNonce": 367214484,
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
			"updated": 1706162536882,
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
			"version": 779,
			"versionNonce": 480326572,
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
			"updated": 1706162536882,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 158,
			"versionNonce": 1610493204,
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
			"updated": 1706162536882,
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
			"version": 715,
			"versionNonce": 1209392684,
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
			"updated": 1706162536882,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 158,
			"versionNonce": 1398762132,
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
			"updated": 1706162536882,
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
			"version": 749,
			"versionNonce": 613497004,
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
			"updated": 1706162536882,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 158,
			"versionNonce": 314374164,
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
			"updated": 1706162536882,
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
			"version": 790,
			"versionNonce": 1035813676,
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
			"updated": 1706162536882,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 158,
			"versionNonce": 2047661460,
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
			"updated": 1706162536882,
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
			"version": 841,
			"versionNonce": 436469164,
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
			"updated": 1706162536882,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 158,
			"versionNonce": 1988428564,
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
			"updated": 1706162536882,
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
			"version": 705,
			"versionNonce": 1653565484,
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
			"updated": 1706162536882,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 158,
			"versionNonce": 1587249300,
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
			"updated": 1706162536882,
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
			"version": 740,
			"versionNonce": 189366956,
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
			"updated": 1706162536882,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 155,
			"versionNonce": 1241927188,
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
			"updated": 1706162536882,
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
			"version": 780,
			"versionNonce": 2061258028,
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
			"updated": 1706162536882,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 157,
			"versionNonce": 1773890452,
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
			"updated": 1706162536882,
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
			"version": 831,
			"versionNonce": 850511788,
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
			"updated": 1706162536882,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 157,
			"versionNonce": 1609619732,
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
			"updated": 1706162536882,
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
			"version": 711,
			"versionNonce": 1995698732,
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
			"updated": 1706162536883,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 180,
			"versionNonce": 404526740,
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
			"updated": 1706162536883,
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
			"version": 745,
			"versionNonce": 1988938924,
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
			"updated": 1706162536883,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 180,
			"versionNonce": 519349268,
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
			"updated": 1706162536883,
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
			"version": 786,
			"versionNonce": 1931892524,
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
			"updated": 1706162536883,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 180,
			"versionNonce": 2054095252,
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
			"updated": 1706162536883,
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
			"version": 837,
			"versionNonce": 1764397484,
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
			"updated": 1706162536883,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 180,
			"versionNonce": 29470484,
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
			"updated": 1706162536883,
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
			"version": 792,
			"versionNonce": 935558188,
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
			"updated": 1706162536883,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 260,
			"versionNonce": 895659156,
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
			"updated": 1706162536883,
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
			"version": 825,
			"versionNonce": 1222317740,
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
			"updated": 1706162536883,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 260,
			"versionNonce": 386398740,
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
			"updated": 1706162536883,
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
			"version": 868,
			"versionNonce": 958095660,
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
			"updated": 1706162536883,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 260,
			"versionNonce": 27760532,
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
			"updated": 1706162536883,
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
			"version": 917,
			"versionNonce": 2146327468,
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
			"updated": 1706162536883,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 261,
			"versionNonce": 24610068,
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
			"updated": 1706162536883,
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
			"version": 1222,
			"versionNonce": 394135084,
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
			"updated": 1706162536883,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 689,
			"versionNonce": 737002132,
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
			"updated": 1706162536883,
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
			"version": 1045,
			"versionNonce": 615801004,
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
			"updated": 1706162536883,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 478,
			"versionNonce": 2009092116,
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
			"updated": 1706162536883,
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
			"version": 1091,
			"versionNonce": 523987756,
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
			"updated": 1706162536883,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 478,
			"versionNonce": 350563732,
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
			"updated": 1706162536883,
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
			"version": 1140,
			"versionNonce": 2038244780,
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
			"updated": 1706162536883,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 479,
			"versionNonce": 1150442260,
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
			"updated": 1706162536883,
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
			"version": 898,
			"versionNonce": 1218678828,
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
			"updated": 1706162536883,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 371,
			"versionNonce": 826136724,
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
			"updated": 1706162536883,
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
			"version": 936,
			"versionNonce": 1821944492,
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
			"updated": 1706162536883,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 369,
			"versionNonce": 1184736788,
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
			"updated": 1706162536884,
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
			"version": 975,
			"versionNonce": 939947308,
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
			"updated": 1706162536884,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 370,
			"versionNonce": 161989524,
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
			"updated": 1706162536884,
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
			"version": 1026,
			"versionNonce": 408350636,
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
			"updated": 1706162536884,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 371,
			"versionNonce": 1888629012,
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
			"updated": 1706162536884,
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
			"version": 261,
			"versionNonce": 1035213356,
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
			"updated": 1706162536884,
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
			"version": 257,
			"versionNonce": 986902164,
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
			"updated": 1706162536884,
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
			"version": 402,
			"versionNonce": 1124594860,
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
			"updated": 1706162536884,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 378,
			"versionNonce": 1226832916,
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
			"updated": 1706162536884,
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
			"version": 401,
			"versionNonce": 1442610988,
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
			"updated": 1706162536884,
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
			"version": 279,
			"versionNonce": 1970231700,
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
			"updated": 1706162536884,
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
			"version": 228,
			"versionNonce": 1593555372,
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
			"updated": 1706162536884,
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
			"version": 534,
			"versionNonce": 1794574100,
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
			"updated": 1706162536884,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 490,
			"versionNonce": 690988076,
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
			"updated": 1706162536884,
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
			"version": 244,
			"versionNonce": 2116879508,
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
			"updated": 1706162536884,
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
			"version": 183,
			"versionNonce": 176307884,
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
			"updated": 1706162536884,
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
			"version": 104,
			"versionNonce": 80171540,
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
			"updated": 1706162536884,
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
			"version": 101,
			"versionNonce": 194873644,
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
			"updated": 1706162536884,
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
			"version": 521,
			"versionNonce": 767291284,
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
			"updated": 1706162536884,
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
			"version": 598,
			"versionNonce": 267092908,
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
			"updated": 1706162536884,
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
			"version": 742,
			"versionNonce": 1497423124,
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
			"updated": 1706162536884,
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
			"version": 715,
			"versionNonce": 2106994220,
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
			"updated": 1706162536884,
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
			"version": 138,
			"versionNonce": 1892424340,
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
			"updated": 1706162536884,
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
			"version": 686,
			"versionNonce": 1703381164,
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
			"updated": 1706162536884,
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
			"version": 720,
			"versionNonce": 1058252820,
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
			"updated": 1706162536884,
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
			"version": 593,
			"versionNonce": 728339244,
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
			"updated": 1706162536884,
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
			"version": 1117,
			"versionNonce": 1208845716,
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
			"updated": 1706162536884,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 621,
			"versionNonce": 765873580,
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
			"updated": 1706162536884,
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
			"version": 1157,
			"versionNonce": 552579860,
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
			"updated": 1706162536885,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 629,
			"versionNonce": 1835513900,
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
			"updated": 1706162536885,
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
			"version": 1189,
			"versionNonce": 1211117716,
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
			"updated": 1706162536885,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 620,
			"versionNonce": 915919532,
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
			"updated": 1706162536885,
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
			"version": 1245,
			"versionNonce": 2105867796,
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
			"updated": 1706162536885,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 619,
			"versionNonce": 1205902636,
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
			"updated": 1706162536885,
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
			"version": 1178,
			"versionNonce": 434379668,
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
			"updated": 1706162536885,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 622,
			"versionNonce": 2058098604,
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
			"updated": 1706162536885,
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
			"version": 1212,
			"versionNonce": 1736673556,
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
			"updated": 1706162536885,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 623,
			"versionNonce": 1797538348,
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
			"updated": 1706162536885,
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
			"version": 1271,
			"versionNonce": 2044282516,
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
			"updated": 1706162536885,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 640,
			"versionNonce": 540220588,
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
			"updated": 1706162536885,
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
			"version": 1306,
			"versionNonce": 94065684,
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
			"updated": 1706162536885,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 622,
			"versionNonce": 864200492,
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
			"updated": 1706162536885,
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
			"version": 1132,
			"versionNonce": 952086932,
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
			"updated": 1706162536885,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 586,
			"versionNonce": 2038227372,
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
			"updated": 1706162536885,
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
			"version": 1167,
			"versionNonce": 310140692,
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
			"updated": 1706162536885,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 584,
			"versionNonce": 692833324,
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
			"updated": 1706162536885,
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
			"version": 1207,
			"versionNonce": 994532500,
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
			"updated": 1706162536885,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 586,
			"versionNonce": 81356460,
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
			"updated": 1706162536885,
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
			"version": 1259,
			"versionNonce": 1557572116,
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
			"updated": 1706162536885,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 583,
			"versionNonce": 13611308,
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
			"updated": 1706162536885,
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
			"version": 1124,
			"versionNonce": 2048935828,
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
			"updated": 1706162536885,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 593,
			"versionNonce": 1821944748,
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
			"updated": 1706162536885,
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
			"version": 1158,
			"versionNonce": 1197094164,
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
			"updated": 1706162536885,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 594,
			"versionNonce": 442390060,
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
			"updated": 1706162536885,
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
			"version": 1198,
			"versionNonce": 33190548,
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
			"updated": 1706162536885,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 594,
			"versionNonce": 118141100,
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
			"updated": 1706162536885,
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
			"version": 1251,
			"versionNonce": 1219952660,
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
			"updated": 1706162536885,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 592,
			"versionNonce": 38255404,
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
			"updated": 1706162536885,
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
			"version": 766,
			"versionNonce": 1938152852,
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
			"updated": 1706162536886,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 775,
			"versionNonce": 1451193772,
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
			"updated": 1706162536886,
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
			"version": 774,
			"versionNonce": 1805454100,
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
			"updated": 1706162536886,
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
			"version": 214,
			"versionNonce": 1893457964,
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
			"updated": 1706162536886,
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
			"version": 1619,
			"versionNonce": 57837716,
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
			"updated": 1706162536886,
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
			"version": 845,
			"versionNonce": 155646636,
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
			"updated": 1706162536886,
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
			"version": 693,
			"versionNonce": 1320965652,
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
			"updated": 1706162536886,
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
			"version": 1593,
			"versionNonce": 1248511276,
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
			"updated": 1706162536886,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1627,
			"versionNonce": 2054189972,
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
			"updated": 1706162536886,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1668,
			"versionNonce": 2041659308,
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
			"updated": 1706162536886,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1720,
			"versionNonce": 616882452,
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
			"updated": 1706162536886,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 929,
			"versionNonce": 524577324,
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
			"updated": 1706162536886,
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
			"version": 86,
			"versionNonce": 892313236,
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
			"updated": 1706162536886,
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
			"version": 816,
			"versionNonce": 772687020,
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
			"updated": 1706162536886,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 825,
			"versionNonce": 879143956,
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
			"updated": 1706162536886,
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
			"version": 824,
			"versionNonce": 733531948,
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
			"updated": 1706162536886,
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
			"version": 743,
			"versionNonce": 610273684,
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
			"updated": 1706162536886,
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
			"version": 1643,
			"versionNonce": 1487800748,
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
			"updated": 1706162536886,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1677,
			"versionNonce": 1481750292,
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
			"updated": 1706162536886,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1718,
			"versionNonce": 1477964844,
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
			"updated": 1706162536886,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1770,
			"versionNonce": 1286714516,
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
			"updated": 1706162536886,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 980,
			"versionNonce": 1474334380,
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
			"updated": 1706162536886,
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
			"version": 188,
			"versionNonce": 2134245908,
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
			"updated": 1706162536886,
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
			"version": 805,
			"versionNonce": 951179564,
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
			"updated": 1706162536886,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 814,
			"versionNonce": 1188339604,
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
			"updated": 1706162536886,
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
			"version": 813,
			"versionNonce": 905302956,
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
			"updated": 1706162536886,
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
			"version": 732,
			"versionNonce": 734235924,
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
			"updated": 1706162536886,
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
			"version": 1633,
			"versionNonce": 232160812,
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
			"updated": 1706162536886,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1665,
			"versionNonce": 1064880788,
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
			"updated": 1706162536886,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1707,
			"versionNonce": 691919020,
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
			"updated": 1706162536886,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1759,
			"versionNonce": 1957320724,
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
			"updated": 1706162536886,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 970,
			"versionNonce": 1138090796,
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
			"updated": 1706162536886,
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
			"version": 168,
			"versionNonce": 2001614228,
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
			"updated": 1706162536887,
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
			"version": 1526,
			"versionNonce": 336108972,
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
			"updated": 1706162536887,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1562,
			"versionNonce": 77226772,
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
			"updated": 1706162536887,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1600,
			"versionNonce": 1929381932,
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
			"updated": 1706162536887,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1652,
			"versionNonce": 1124393108,
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
			"updated": 1706162536887,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1509,
			"versionNonce": 77996716,
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
			"updated": 1706162536887,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 380,
			"versionNonce": 440643092,
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
			"updated": 1706162536887,
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
			"version": 1545,
			"versionNonce": 1604644140,
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
			"updated": 1706162536887,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 437,
			"versionNonce": 189582228,
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
			"updated": 1706162536887,
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
			"version": 1587,
			"versionNonce": 895903660,
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
			"updated": 1706162536887,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 435,
			"versionNonce": 139868436,
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
			"updated": 1706162536887,
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
			"version": 1635,
			"versionNonce": 2048168492,
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
			"updated": 1706162536887,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 434,
			"versionNonce": 1289090708,
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
			"updated": 1706162536887,
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
			"version": 1381,
			"versionNonce": 211381420,
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
			"updated": 1706162536887,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1204,
			"versionNonce": 897713172,
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
			"updated": 1706162536887,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1250,
			"versionNonce": 1587476268,
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
			"updated": 1706162536887,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1299,
			"versionNonce": 407921044,
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
			"updated": 1706162536887,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1058,
			"versionNonce": 479146412,
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
			"updated": 1706162536887,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1096,
			"versionNonce": 477564692,
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
			"updated": 1706162536887,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1135,
			"versionNonce": 1435769900,
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
			"updated": 1706162536887,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1186,
			"versionNonce": 309070996,
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
			"updated": 1706162536887,
			"link": null,
			"locked": false
		},
		{
			"type": "ellipse",
			"version": 560,
			"versionNonce": 597145260,
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
			"updated": 1706162536887,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 536,
			"versionNonce": 1273322004,
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
			"updated": 1706162536887,
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
			"version": 559,
			"versionNonce": 1396965676,
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
			"updated": 1706162536887,
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
			"version": 386,
			"versionNonce": 1943598996,
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
			"updated": 1706162536887,
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
			"version": 692,
			"versionNonce": 201522092,
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
			"updated": 1706162536887,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 650,
			"versionNonce": 1719461140,
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
			"updated": 1706162536887,
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
			"version": 519,
			"versionNonce": 2013177388,
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
			"updated": 1706162536887,
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
			"version": 341,
			"versionNonce": 155656852,
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
			"updated": 1706162536887,
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
			"version": 262,
			"versionNonce": 1814102188,
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
			"updated": 1706162536887,
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
			"version": 259,
			"versionNonce": 586002452,
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
			"updated": 1706162536888,
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
			"version": 993,
			"versionNonce": 269749036,
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
			"updated": 1706162536888,
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
			"version": 927,
			"versionNonce": 862358932,
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
			"updated": 1706162536888,
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
			"version": 1214,
			"versionNonce": 104973740,
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
			"updated": 1706162536888,
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
			"version": 1187,
			"versionNonce": 1273477908,
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
			"updated": 1706162536888,
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
			"version": 612,
			"versionNonce": 332673068,
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
			"updated": 1706162536888,
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
			"version": 1160,
			"versionNonce": 1726429332,
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
			"updated": 1706162536888,
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
			"version": 1194,
			"versionNonce": 1219840684,
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
			"updated": 1706162536888,
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
			"version": 1067,
			"versionNonce": 1075512852,
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
			"updated": 1706162536888,
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
			"version": 924,
			"versionNonce": 663688492,
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
			"updated": 1706162536888,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 933,
			"versionNonce": 746136468,
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
			"updated": 1706162536888,
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
			"version": 932,
			"versionNonce": 1305186220,
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
			"updated": 1706162536888,
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
			"version": 372,
			"versionNonce": 1916244244,
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
			"updated": 1706162536888,
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
			"version": 1948,
			"versionNonce": 462731820,
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
			"updated": 1706162536888,
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
			"version": 1005,
			"versionNonce": 550260372,
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
			"updated": 1706162536888,
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
			"version": 851,
			"versionNonce": 1540658348,
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
			"updated": 1706162536888,
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
			"version": 1751,
			"versionNonce": 1760386068,
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
			"updated": 1706162536888,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1785,
			"versionNonce": 1815420716,
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
			"updated": 1706162536888,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1826,
			"versionNonce": 1955641748,
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
			"updated": 1706162536888,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1878,
			"versionNonce": 1696618924,
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
			"updated": 1706162536888,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1089,
			"versionNonce": 1055680276,
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
			"updated": 1706162536888,
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
			"version": 586,
			"versionNonce": 1103119404,
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
			"updated": 1706162536888,
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
			"version": 974,
			"versionNonce": 1819698324,
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
			"updated": 1706162536888,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 983,
			"versionNonce": 134143660,
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
			"updated": 1706162536888,
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
			"version": 982,
			"versionNonce": 585413140,
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
			"updated": 1706162536888,
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
			"version": 901,
			"versionNonce": 1887840556,
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
			"updated": 1706162536888,
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
			"version": 1801,
			"versionNonce": 1630359444,
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
			"updated": 1706162536888,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1835,
			"versionNonce": 247473068,
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
			"updated": 1706162536888,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1876,
			"versionNonce": 1468415252,
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
			"updated": 1706162536888,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1928,
			"versionNonce": 2027343404,
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
			"updated": 1706162536888,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1147,
			"versionNonce": 1063615124,
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
			"updated": 1706162536889,
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
			"version": 688,
			"versionNonce": 1874077868,
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
			"updated": 1706162536889,
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
			"version": 963,
			"versionNonce": 864094228,
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
			"updated": 1706162536889,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 972,
			"versionNonce": 117584684,
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
			"updated": 1706162536889,
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
			"version": 971,
			"versionNonce": 130999700,
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
			"updated": 1706162536889,
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
			"version": 890,
			"versionNonce": 1294658988,
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
			"updated": 1706162536889,
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
			"version": 1791,
			"versionNonce": 562369300,
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
			"updated": 1706162536889,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1823,
			"versionNonce": 1935169580,
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
			"updated": 1706162536889,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1865,
			"versionNonce": 1327075476,
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
			"updated": 1706162536889,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1917,
			"versionNonce": 1970565804,
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
			"updated": 1706162536889,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1130,
			"versionNonce": 541220372,
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
			"updated": 1706162536889,
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
			"version": 668,
			"versionNonce": 1109998892,
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
			"updated": 1706162536889,
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
			"version": 1164,
			"versionNonce": 1039498132,
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
			"updated": 1706162536889,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1199,
			"versionNonce": 1658894252,
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
			"updated": 1706162536889,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1240,
			"versionNonce": 1114171668,
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
			"updated": 1706162536889,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1291,
			"versionNonce": 600105516,
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
			"updated": 1706162536889,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1164,
			"versionNonce": 286434964,
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
			"updated": 1706162536889,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1199,
			"versionNonce": 1002421420,
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
			"updated": 1706162536889,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1240,
			"versionNonce": 782808084,
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
			"updated": 1706162536889,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1291,
			"versionNonce": 1954236204,
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
			"updated": 1706162536889,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1195,
			"versionNonce": 421597588,
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
			"updated": 1706162536889,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1230,
			"versionNonce": 1382121900,
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
			"updated": 1706162536889,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1271,
			"versionNonce": 531742484,
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
			"updated": 1706162536889,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1322,
			"versionNonce": 1016884268,
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
			"updated": 1706162536889,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 989,
			"versionNonce": 986758292,
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
			"updated": 1706162536889,
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
			"version": 1026,
			"versionNonce": 622200492,
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
			"updated": 1706162536889,
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
			"version": 1015,
			"versionNonce": 1681132052,
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
			"updated": 1706162536889,
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
			"version": 1021,
			"versionNonce": 813191468,
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
			"updated": 1706162536889,
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
			"version": 278,
			"versionNonce": 1859233684,
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
			"updated": 1706162536889,
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
			"version": 263,
			"versionNonce": 1580026796,
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
			"updated": 1706162536889,
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
			"version": 184,
			"versionNonce": 1591710996,
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
			"updated": 1706162536889,
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
			"version": 181,
			"versionNonce": 811529772,
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
			"updated": 1706162536889,
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
			"version": 837,
			"versionNonce": 1104401044,
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
			"updated": 1706162536889,
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
			"version": 350,
			"versionNonce": 1408716972,
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
			"updated": 1706162536890,
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
			"version": 915,
			"versionNonce": 107241492,
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
			"updated": 1706162536890,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 435,
			"versionNonce": 1218468652,
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
			"updated": 1706162536890,
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
			"version": 977,
			"versionNonce": 1418149268,
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
			"updated": 1706162536890,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 428,
			"versionNonce": 147068332,
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
			"updated": 1706162536890,
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
			"version": 969,
			"versionNonce": 1701997332,
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
			"updated": 1706162536890,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 428,
			"versionNonce": 831291436,
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
			"updated": 1706162536890,
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
			"version": 950,
			"versionNonce": 1536944276,
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
			"updated": 1706162536890,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 427,
			"versionNonce": 719559340,
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
			"updated": 1706162536890,
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
			"version": 950,
			"versionNonce": 448378388,
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
			"updated": 1706162536890,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 431,
			"versionNonce": 1332962604,
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
			"updated": 1706162536890,
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
			"version": 1012,
			"versionNonce": 532796308,
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
			"updated": 1706162536890,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 428,
			"versionNonce": 346415020,
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
			"updated": 1706162536890,
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
			"version": 1002,
			"versionNonce": 1491747092,
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
			"updated": 1706162536890,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 430,
			"versionNonce": 849676844,
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
			"updated": 1706162536890,
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
			"version": 985,
			"versionNonce": 2108227220,
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
			"updated": 1706162536890,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 429,
			"versionNonce": 1281025196,
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
			"updated": 1706162536890,
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
			"version": 992,
			"versionNonce": 1723075604,
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
			"updated": 1706162536890,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 430,
			"versionNonce": 393309996,
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
			"updated": 1706162536890,
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
			"version": 1054,
			"versionNonce": 1711368596,
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
			"updated": 1706162536890,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 430,
			"versionNonce": 72526252,
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
			"updated": 1706162536890,
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
			"version": 1046,
			"versionNonce": 516364052,
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
			"updated": 1706162536890,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 433,
			"versionNonce": 1713935404,
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
			"updated": 1706162536890,
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
			"version": 1027,
			"versionNonce": 1568347284,
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
			"updated": 1706162536890,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 429,
			"versionNonce": 450703020,
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
			"updated": 1706162536890,
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
			"version": 1042,
			"versionNonce": 1876124180,
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
			"updated": 1706162536890,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 430,
			"versionNonce": 857372972,
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
			"updated": 1706162536890,
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
			"version": 1104,
			"versionNonce": 2093350804,
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
			"updated": 1706162536890,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 429,
			"versionNonce": 441086892,
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
			"updated": 1706162536890,
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
			"version": 1096,
			"versionNonce": 1552477460,
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
			"updated": 1706162536891,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 428,
			"versionNonce": 1050091052,
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
			"updated": 1706162536891,
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
			"version": 1077,
			"versionNonce": 1888627348,
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
			"updated": 1706162536891,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 428,
			"versionNonce": 954890412,
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
			"updated": 1706162536891,
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
			"version": 993,
			"versionNonce": 2073540628,
			"isDeleted": false,
			"id": "US8GnHCLrFYjigavPhfav",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 940.6865341489006,
			"y": 226.91345562084564,
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
			"updated": 1706162536891,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1028,
			"versionNonce": 1961788204,
			"isDeleted": false,
			"id": "FOyKOPblnTkMDESfnb_XT",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1012.6865341489006,
			"y": 225.91345562084564,
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
			"updated": 1706162536891,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1069,
			"versionNonce": 2039453076,
			"isDeleted": false,
			"id": "_kNUtTxyW2yVov06K5wJ0",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1084.6865341489006,
			"y": 224.91345562084564,
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
			"updated": 1706162536891,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1120,
			"versionNonce": 1494039980,
			"isDeleted": false,
			"id": "xpBJKzNYdQASbBKsk9zXC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1156.6865341489006,
			"y": 225.91345562084564,
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
			"updated": 1706162536891,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1055,
			"versionNonce": 2008007444,
			"isDeleted": false,
			"id": "sRXwWMFk4MKFUKCYbRaB_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 943.6865341489006,
			"y": 292.91345562084564,
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
			"updated": 1706162536891,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1090,
			"versionNonce": 1852876844,
			"isDeleted": false,
			"id": "d2X-VO8mmYQXL5TtfzZUX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1015.6865341489006,
			"y": 291.91345562084564,
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
			"updated": 1706162536891,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1131,
			"versionNonce": 1819164820,
			"isDeleted": false,
			"id": "R-XfJM-SLy-8zp8te-WeH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1087.6865341489008,
			"y": 290.91345562084564,
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
			"updated": 1706162536891,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1182,
			"versionNonce": 151175852,
			"isDeleted": false,
			"id": "eSu9QDgtBk-HdhqRFQXVU",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1159.6865341489008,
			"y": 291.91345562084564,
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
			"updated": 1706162536891,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1045,
			"versionNonce": 260115988,
			"isDeleted": false,
			"id": "R2-28rxEoq7n9WRLx8j0r",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 942.6865341489006,
			"y": 359.91345562084564,
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
			"updated": 1706162536891,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1080,
			"versionNonce": 1869450540,
			"isDeleted": false,
			"id": "UQD_51XOVTdh4LN6OIZ7X",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1014.6865341489006,
			"y": 358.91345562084564,
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
			"updated": 1706162536891,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1121,
			"versionNonce": 836643732,
			"isDeleted": false,
			"id": "hzBPUfYhaKXrd3jk5oFAE",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1086.6865341489008,
			"y": 357.91345562084564,
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
			"updated": 1706162536891,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1172,
			"versionNonce": 52103084,
			"isDeleted": false,
			"id": "8qz23DyYvsl9hXa1HfBaS",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1158.6865341489008,
			"y": 358.91345562084564,
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
			"updated": 1706162536891,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1028,
			"versionNonce": 364615956,
			"isDeleted": false,
			"id": "C4VwSmMYHz7XDCcRdZcY7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 943.6865341489006,
			"y": 425.91345562084564,
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
			"updated": 1706162536891,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1063,
			"versionNonce": 1748316716,
			"isDeleted": false,
			"id": "moCLWRsEzzy1dn3FAL5Og",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1015.6865341489006,
			"y": 424.91345562084564,
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
			"updated": 1706162536891,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1104,
			"versionNonce": 1183798932,
			"isDeleted": false,
			"id": "3awIEEttAWjp80rFgkFDw",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1087.6865341489008,
			"y": 423.91345562084564,
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
			"updated": 1706162536891,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1155,
			"versionNonce": 765856940,
			"isDeleted": false,
			"id": "VM0LUUenrmY62mL92E961",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1159.6865341489008,
			"y": 424.91345562084564,
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
			"updated": 1706162536891,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 354,
			"versionNonce": 1896834068,
			"isDeleted": false,
			"id": "mub3E6qc",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 419.2557950327981,
			"y": -341.81671066610664,
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
			"updated": 1706162536891,
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
			"version": 687,
			"versionNonce": 1964480300,
			"isDeleted": false,
			"id": "7MD0DoiTtAZCY06jGzMPJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 408.34164004175636,
			"y": -170.40103712489542,
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
			"updated": 1706162536891,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 200,
			"versionNonce": 993116564,
			"isDeleted": false,
			"id": "pJQ0CuBI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 436.9126750500367,
			"y": -150.45000486319714,
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
			"updated": 1706162536891,
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
			"version": 720,
			"versionNonce": 452186540,
			"isDeleted": false,
			"id": "is_DJVK3tGh-pDgvUprLf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 480.34164004175636,
			"y": -171.40103712489542,
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
			"updated": 1706162536891,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 196,
			"versionNonce": 472674068,
			"isDeleted": false,
			"id": "jvqHJuZE",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 509.3926784069703,
			"y": -151.45000486319714,
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
			"updated": 1706162536891,
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
			"version": 761,
			"versionNonce": 1583660076,
			"isDeleted": false,
			"id": "-Lj7lAz2FjyHBzS9Reeu_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 552.3416400417565,
			"y": -172.40103712489542,
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
			"updated": 1706162536891,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 194,
			"versionNonce": 880110740,
			"isDeleted": false,
			"id": "aWNYUn9Y",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 580.1426784069704,
			"y": -152.45000486319714,
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
			"updated": 1706162536891,
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
			"version": 812,
			"versionNonce": 156522156,
			"isDeleted": false,
			"id": "urkhkhd3c8COCjJAGNiVx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 624.3416400417565,
			"y": -171.40103712489542,
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
			"updated": 1706162536891,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 195,
			"versionNonce": 633518612,
			"isDeleted": false,
			"id": "IS5lRJss",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 649.9626781017946,
			"y": -151.45000486319714,
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
			"updated": 1706162536891,
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
			"version": 747,
			"versionNonce": 409772332,
			"isDeleted": false,
			"id": "-DIEFWCQROHUp_o8LLEE9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 411.34164004175636,
			"y": -104.40103712489542,
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
			"updated": 1706162536891,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 193,
			"versionNonce": 1795839892,
			"isDeleted": false,
			"id": "me7Y3IYm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 444.082673218982,
			"y": -84.45000486319714,
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
			"updated": 1706162536891,
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
			"version": 782,
			"versionNonce": 1662491564,
			"isDeleted": false,
			"id": "S4reAcP9GnAjcBZ1BYz6n",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 483.34164004175636,
			"y": -105.40103712489542,
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
			"updated": 1706162536892,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 193,
			"versionNonce": 813843732,
			"isDeleted": false,
			"id": "aeHahhYa",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 512.6126796276734,
			"y": -85.45000486319714,
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
			"updated": 1706162536892,
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
			"version": 823,
			"versionNonce": 1132414508,
			"isDeleted": false,
			"id": "f_3D7yUkcHekCNJ7z979F",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 555.3416400417566,
			"y": -106.40103712489542,
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
			"updated": 1706162536892,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 194,
			"versionNonce": 731939476,
			"isDeleted": false,
			"id": "ko0zGmRs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 584.7026759655643,
			"y": -86.45000486319714,
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
			"updated": 1706162536892,
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
			"version": 874,
			"versionNonce": 1049469100,
			"isDeleted": false,
			"id": "qXChEOaar_WLzJxU4z0zq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 627.3416400417566,
			"y": -105.40103712489542,
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
			"updated": 1706162536892,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 194,
			"versionNonce": 1931153428,
			"isDeleted": false,
			"id": "sp7nJrmL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 653.272683289783,
			"y": -85.45000486319714,
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
			"updated": 1706162536892,
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
			"version": 739,
			"versionNonce": 736930604,
			"isDeleted": false,
			"id": "Q8NhjtR2zhUMi4x2Ieswp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 410.34164004175636,
			"y": -37.401037124895424,
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
			"updated": 1706162536892,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 193,
			"versionNonce": 1458040212,
			"isDeleted": false,
			"id": "WETHB3tI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 438.67267718626715,
			"y": -17.450004863197137,
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
			"updated": 1706162536892,
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
			"version": 772,
			"versionNonce": 1577477548,
			"isDeleted": false,
			"id": "z-0EwfMvqQXYJBZXRjus7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 482.34164004175636,
			"y": -38.401037124895424,
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
			"updated": 1706162536892,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 195,
			"versionNonce": 943528724,
			"isDeleted": false,
			"id": "5BSuKiTC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 511.3926784069703,
			"y": -18.450004863197137,
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
			"updated": 1706162536892,
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
			"version": 815,
			"versionNonce": 1241829420,
			"isDeleted": false,
			"id": "dSY7keMvz6fqT7ozxEEZg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 554.3416400417566,
			"y": -39.401037124895424,
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
			"updated": 1706162536892,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 197,
			"versionNonce": 1636866196,
			"isDeleted": false,
			"id": "jBfV6Tle",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 580.2026759655643,
			"y": -19.450004863197137,
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
			"updated": 1706162536892,
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
			"version": 866,
			"versionNonce": 802286252,
			"isDeleted": false,
			"id": "5-zWuzfRGyhU6wXnSdmTo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 626.3416400417566,
			"y": -38.401037124895424,
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
			"updated": 1706162536892,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 193,
			"versionNonce": 1587045908,
			"isDeleted": false,
			"id": "f3M2BTXb",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 652.6826793224978,
			"y": -18.450004863197137,
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
			"updated": 1706162536892,
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
			"version": 720,
			"versionNonce": 1108849964,
			"isDeleted": false,
			"id": "4ctPIPE1zNcuuaMqYtJt_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 411.34164004175636,
			"y": 28.598962875104576,
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
			"updated": 1706162536892,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 192,
			"versionNonce": 1414169492,
			"isDeleted": false,
			"id": "JXLh0jHX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 439.98268237425543,
			"y": 48.54999513680286,
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
			"updated": 1706162536892,
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
			"version": 755,
			"versionNonce": 1312829356,
			"isDeleted": false,
			"id": "lhgWL8kgjP4eLFBFWWXva",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 483.34164004175636,
			"y": 27.598962875104576,
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
			"updated": 1706162536892,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 194,
			"versionNonce": 1490874644,
			"isDeleted": false,
			"id": "ra9L2sR7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 513.4126750500367,
			"y": 47.54999513680286,
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
			"updated": 1706162536892,
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
			"version": 796,
			"versionNonce": 1685412396,
			"isDeleted": false,
			"id": "mLwhE4Ghov_ccgVAYOks8",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 555.3416400417566,
			"y": 26.598962875104576,
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
			"updated": 1706162536892,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 193,
			"versionNonce": 1271246484,
			"isDeleted": false,
			"id": "XCsGsuNJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 585.3726741345096,
			"y": 46.54999513680286,
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
			"updated": 1706162536892,
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
			"version": 847,
			"versionNonce": 2141271212,
			"isDeleted": false,
			"id": "1rHnKPZ29ZC1ElMQnonN_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 627.3416400417566,
			"y": 27.598962875104576,
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
			"updated": 1706162536892,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 193,
			"versionNonce": 767212564,
			"isDeleted": false,
			"id": "4sLpLDNn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 653.902680543201,
			"y": 47.54999513680286,
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
			"updated": 1706162536892,
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
			"version": 535,
			"versionNonce": 762167084,
			"isDeleted": false,
			"id": "rBty1FUY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 820.3781825083844,
			"y": -329.5433358688868,
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
			"updated": 1706162536892,
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
			"version": 858,
			"versionNonce": 2024937876,
			"isDeleted": false,
			"id": "UNjgfeuC-6XHoh9MXfIGu",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 825.187985286485,
			"y": -171.12398449143404,
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
			"updated": 1706162536892,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 374,
			"versionNonce": 910490028,
			"isDeleted": false,
			"id": "WQ1Jfewx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 853.7590202947653,
			"y": -151.17295222973576,
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
			"updated": 1706162536892,
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
			"version": 920,
			"versionNonce": 2011285268,
			"isDeleted": false,
			"id": "xhK1TTQ69g5edZ2DW0C57",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 828.187985286485,
			"y": -105.12398449143404,
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
			"updated": 1706162536892,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 367,
			"versionNonce": 1162929196,
			"isDeleted": false,
			"id": "iLP3frdV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 860.9290184637106,
			"y": -85.17295222973576,
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
			"updated": 1706162536892,
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
			"version": 912,
			"versionNonce": 532661396,
			"isDeleted": false,
			"id": "_qXL-QEPBGqDBF1UnKHLi",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 827.187985286485,
			"y": -38.123984491434044,
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
			"updated": 1706162536892,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 367,
			"versionNonce": 276528812,
			"isDeleted": false,
			"id": "sdnqkUIf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 855.5190224309957,
			"y": -18.172952229735756,
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
			"updated": 1706162536893,
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
			"version": 893,
			"versionNonce": 1711411732,
			"isDeleted": false,
			"id": "K7J2y57iCH4hTHNiTRDeH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 828.187985286485,
			"y": 27.876015508565956,
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
			"updated": 1706162536893,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 366,
			"versionNonce": 7260460,
			"isDeleted": false,
			"id": "bsr8eXAy",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 856.829027618984,
			"y": 47.827047770264244,
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
			"updated": 1706162536893,
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
			"version": 919,
			"versionNonce": 429830036,
			"isDeleted": false,
			"id": "a1NJ8mhr_rtBlBOKUlplh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 939.687985286485,
			"y": -172.12398449143404,
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
			"updated": 1706162536893,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 396,
			"versionNonce": 1486144428,
			"isDeleted": false,
			"id": "VDOHv0nf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 968.7390236516989,
			"y": -152.17295222973576,
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
			"updated": 1706162536893,
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
			"version": 981,
			"versionNonce": 986422548,
			"isDeleted": false,
			"id": "fz2MMW40ngcMqmFuWganY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 942.687985286485,
			"y": -106.12398449143404,
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
			"updated": 1706162536893,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 393,
			"versionNonce": 1595371052,
			"isDeleted": false,
			"id": "QHL8s9OJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 971.959024872402,
			"y": -86.17295222973576,
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
			"updated": 1706162536893,
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
			"version": 971,
			"versionNonce": 1392433812,
			"isDeleted": false,
			"id": "QN8jck723RsgFHbSR2N2Q",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 941.687985286485,
			"y": -39.123984491434044,
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
			"updated": 1706162536893,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 395,
			"versionNonce": 81840300,
			"isDeleted": false,
			"id": "s8ZDHI1j",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 970.7390236516989,
			"y": -19.172952229735756,
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
			"updated": 1706162536893,
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
			"version": 954,
			"versionNonce": 1290692628,
			"isDeleted": false,
			"id": "kzyUoWywUHBkarNK0OGPH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 942.687985286485,
			"y": 26.876015508565956,
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
			"updated": 1706162536893,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 394,
			"versionNonce": 228250412,
			"isDeleted": false,
			"id": "UNXpxfRS",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 972.7590202947653,
			"y": 46.827047770264244,
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
			"updated": 1706162536893,
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
			"version": 998,
			"versionNonce": 1284523412,
			"isDeleted": false,
			"id": "WITMwnDwi9Ls6B9vE-i4g",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1055.437985286485,
			"y": -174.37398449143404,
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
			"updated": 1706162536893,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 432,
			"versionNonce": 934251948,
			"isDeleted": false,
			"id": "hPdu9tYa",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1083.239023651699,
			"y": -154.42295222973576,
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
			"updated": 1706162536893,
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
			"version": 1061,
			"versionNonce": 119173908,
			"isDeleted": false,
			"id": "UNJhyMDZxplD0VryecHiW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1058.437985286485,
			"y": -108.37398449143404,
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
			"updated": 1706162536893,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 432,
			"versionNonce": 1682503724,
			"isDeleted": false,
			"id": "3ydTREHg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1087.7990212102927,
			"y": -88.42295222973576,
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
			"updated": 1706162536893,
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
			"version": 1053,
			"versionNonce": 453177492,
			"isDeleted": false,
			"id": "_-_t0ri6ONKHLu_NvljoJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1057.437985286485,
			"y": -41.373984491434044,
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
			"updated": 1706162536893,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 435,
			"versionNonce": 1062277804,
			"isDeleted": false,
			"id": "lqeDDaGy",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1083.2990212102927,
			"y": -21.422952229735756,
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
			"updated": 1706162536893,
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
			"version": 1034,
			"versionNonce": 1744813588,
			"isDeleted": false,
			"id": "YqHhpvtoOAiERizGOJNos",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1058.437985286485,
			"y": 24.626015508565956,
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
			"updated": 1706162536893,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 431,
			"versionNonce": 1735515436,
			"isDeleted": false,
			"id": "ovnjIW79",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1088.469019379238,
			"y": 44.577047770264244,
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
			"updated": 1706162536893,
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
			"version": 1069,
			"versionNonce": 1728502676,
			"isDeleted": false,
			"id": "qtZf-KkiJbrHH8o_FMst4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1167.437985286485,
			"y": -173.37398449143404,
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
			"updated": 1706162536893,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 453,
			"versionNonce": 370497452,
			"isDeleted": false,
			"id": "7746ZMaB",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1193.0590233465232,
			"y": -153.42295222973576,
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
			"updated": 1706162536893,
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
			"version": 1131,
			"versionNonce": 38684948,
			"isDeleted": false,
			"id": "J5a4u7fVnusWXn3M0TPdB",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1170.437985286485,
			"y": -107.37398449143404,
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
			"updated": 1706162536893,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 451,
			"versionNonce": 1197834796,
			"isDeleted": false,
			"id": "pc5LHUSq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1196.3690285345115,
			"y": -87.42295222973576,
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
			"updated": 1706162536893,
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
			"version": 1123,
			"versionNonce": 1833698964,
			"isDeleted": false,
			"id": "URRkH-lQ-GDU6lEA2etEw",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1169.437985286485,
			"y": -40.373984491434044,
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
			"updated": 1706162536893,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 450,
			"versionNonce": 1649171628,
			"isDeleted": false,
			"id": "eIEeIrGx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1195.7790245672263,
			"y": -20.422952229735756,
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
			"updated": 1706162536893,
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
			"version": 1104,
			"versionNonce": 2092307476,
			"isDeleted": false,
			"id": "UgFGvj6pN4Z0pOdXTs4ba",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1170.437985286485,
			"y": 25.626015508565956,
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
			"updated": 1706162536893,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 450,
			"versionNonce": 1618208556,
			"isDeleted": false,
			"id": "OLYx1I0H",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1196.9990257879294,
			"y": 45.577047770264244,
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
			"updated": 1706162536893,
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
			"version": 150,
			"versionNonce": 2122477972,
			"isDeleted": false,
			"id": "oLcQ06yj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 846.581325240491,
			"y": 100.88474007795651,
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
			"updated": 1706162536893,
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
			"version": 205,
			"versionNonce": 1984307628,
			"isDeleted": false,
			"id": "CqxVBHPk",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 964.2813374475222,
			"y": 103.38474007795651,
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
			"updated": 1706162536893,
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
			"version": 241,
			"versionNonce": 300359444,
			"isDeleted": false,
			"id": "436ATPAG",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1073.4513356164675,
			"y": 107.13474007795651,
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
			"updated": 1706162536893,
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
			"version": 256,
			"versionNonce": 988613676,
			"isDeleted": false,
			"id": "cq6JsVjr",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1194.7013356164675,
			"y": 109.63474007795651,
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
			"updated": 1706162536894,
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
			"version": 611,
			"versionNonce": 2136611988,
			"isDeleted": false,
			"id": "tfxF3hW4N0pJ9bps5RE2_",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 723.2159788043866,
			"y": 160.1488489794708,
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
			"updated": 1706162536894,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 577,
			"versionNonce": 1347593900,
			"isDeleted": false,
			"id": "5klMxgx5anysPyceu0pjw",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 760.7107060373442,
			"y": 161.81528130093528,
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
			"updated": 1706162536894,
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
			"version": 600,
			"versionNonce": 277965332,
			"isDeleted": false,
			"id": "YGpNZ36pkEB2aY87XxTS2",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 724.8824111258513,
			"y": 200.14322469462525,
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
			"updated": 1706162536894,
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
			"version": 161,
			"versionNonce": 186708268,
			"isDeleted": false,
			"id": "7lfov8TvtZqnlP2bIO4SJ",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 402.8313252404911,
			"y": -177.8652599220436,
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
			"updated": 1706162536894,
			"link": null,
			"locked": false
		},
		{
			"type": "ellipse",
			"version": 199,
			"versionNonce": 1753417620,
			"isDeleted": false,
			"id": "A5-QSRyYZiXQ5yN5OqsEu",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 820.331325240491,
			"y": -179.1152599220436,
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
			"updated": 1706162536894,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 242,
			"versionNonce": 448916396,
			"isDeleted": false,
			"id": "eFrJvoqhpFtmruNcg9E9P",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 402.8313252404911,
			"y": -139.1152599220436,
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
			"updated": 1706162536894,
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
			"version": 189,
			"versionNonce": 1533342996,
			"isDeleted": false,
			"id": "EqwczytD3NQIHhZknrixS",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 822.831325240491,
			"y": -136.6152599220436,
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
			"updated": 1706162536894,
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
			"version": 574,
			"versionNonce": 828347948,
			"isDeleted": false,
			"id": "FhxLZAsbYcJJlX-QW3_F_",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 760.3313252404911,
			"y": 242.1347400779564,
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
			"updated": 1706162536894,
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
			"version": 234,
			"versionNonce": 1185755796,
			"isDeleted": false,
			"id": "6LLoaqDMFR7UeTRwE7oUC",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 821.581325240491,
			"y": -110.36525992204355,
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
			"updated": 1706162536894,
			"link": null,
			"locked": false
		},
		{
			"type": "ellipse",
			"version": 308,
			"versionNonce": 736358572,
			"isDeleted": false,
			"id": "xE5XXxkNyQtFCZwUZVlMV",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 406.5813252404911,
			"y": -112.86525992204355,
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
			"updated": 1706162536894,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 290,
			"versionNonce": 1762770964,
			"isDeleted": false,
			"id": "pQIvdwonyzvYto6Q93gH9",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 405.3313252404911,
			"y": -71.61525992204355,
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
			"updated": 1706162536894,
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
			"version": 168,
			"versionNonce": 972618540,
			"isDeleted": false,
			"id": "sdqWcAt-XPBLw9bFmS5Ri",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 822.831325240491,
			"y": -69.11525992204355,
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
			"updated": 1706162536894,
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
			"version": 382,
			"versionNonce": 982031764,
			"isDeleted": false,
			"id": "UDvvI5gFg1P30G2sw9zma",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 760.3313252404911,
			"y": 242.1347400779564,
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
			"updated": 1706162536894,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "tfxF3hW4N0pJ9bps5RE2_",
				"focus": -0.21878884479457192,
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
			"version": 264,
			"versionNonce": 101234092,
			"isDeleted": false,
			"id": "7TIzcPatgIBLY2H38c_Ae",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 821.581325240491,
			"y": -44.115259922043606,
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
			"updated": 1706162536894,
			"link": null,
			"locked": false
		},
		{
			"type": "ellipse",
			"version": 335,
			"versionNonce": 1145555732,
			"isDeleted": false,
			"id": "JIIOEa60csDpHdGvpmFCi",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 404.0813252404911,
			"y": -44.115259922043606,
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
			"updated": 1706162536894,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 170,
			"versionNonce": 1564287020,
			"isDeleted": false,
			"id": "iUQMbmOnu6LBLZVB0f2KY",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 827.831325240491,
			"y": -4.115259922043606,
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
			"updated": 1706162536894,
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
			"version": 288,
			"versionNonce": 2026195092,
			"isDeleted": false,
			"id": "-guWNKW71OG0KVmA-xqOx",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 409.0813252404911,
			"y": -4.115259922043606,
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
			"updated": 1706162536894,
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
			"version": 494,
			"versionNonce": 1468021420,
			"isDeleted": false,
			"id": "EIZuLE0wJq2dik-EosJqu",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 761.5813252404911,
			"y": 242.1347400779564,
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
			"updated": 1706162536894,
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
			"version": 335,
			"versionNonce": 196548116,
			"isDeleted": false,
			"id": "2IYFMoazOBHF1TP7EY6Zj",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 822.831325240491,
			"y": 19.634740077956394,
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
			"updated": 1706162536894,
			"link": null,
			"locked": false
		},
		{
			"type": "ellipse",
			"version": 393,
			"versionNonce": 2138834220,
			"isDeleted": false,
			"id": "NJ30-QBxNtn0yclOA2Fbe",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 405.3313252404911,
			"y": 23.384740077956394,
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
			"updated": 1706162536894,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 239,
			"versionNonce": 1242772372,
			"isDeleted": false,
			"id": "X9US3BSxw3Rj9OV4VP3G3",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 405.3313252404911,
			"y": 67.1347400779564,
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
			"updated": 1706162536894,
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
			"version": 166,
			"versionNonce": 2056945580,
			"isDeleted": false,
			"id": "X6UkU1ipTyUAS0TlzS9oc",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 826.581325240491,
			"y": 64.6347400779564,
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
			"updated": 1706162536894,
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
			"version": 164,
			"versionNonce": 1913626900,
			"isDeleted": false,
			"id": "91hbZ6eVkiYvuu22wa_5c",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 764.3174363516017,
			"y": 241.55140674462285,
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
			"updated": 1706162536894,
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
			"id": "2yMKYsjW",
			"type": "text",
			"x": 931.3471912335829,
			"y": 634.8325215058859,
			"width": 445.3125,
			"height": 216,
			"angle": 0,
			"strokeColor": "#12b886",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"seed": 1122334892,
			"version": 241,
			"versionNonce": 822454828,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1706162536894,
			"link": null,
			"locked": false,
			"text": "void SubBytes(u8* state) {\n    for (int i = 0; i < 16; i++)\n        state[i] = sbox[state[i]];\n}\n\nvoid InvSubBytes(u8* state) {\n    for (int i = 0; i < 16; i++) {\n        state[i] = inv_sbox[state[i]];\n}",
			"rawText": "void SubBytes(u8* state) {\n    for (int i = 0; i < 16; i++)\n        state[i] = sbox[state[i]];\n}\n\nvoid InvSubBytes(u8* state) {\n    for (int i = 0; i < 16; i++) {\n        state[i] = inv_sbox[state[i]];\n}",
			"fontSize": 20,
			"fontFamily": 3,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 211,
			"containerId": null,
			"originalText": "void SubBytes(u8* state) {\n    for (int i = 0; i < 16; i++)\n        state[i] = sbox[state[i]];\n}\n\nvoid InvSubBytes(u8* state) {\n    for (int i = 0; i < 16; i++) {\n        state[i] = inv_sbox[state[i]];\n}",
			"lineHeight": 1.2
		},
		{
			"type": "text",
			"version": 442,
			"versionNonce": 186801812,
			"isDeleted": false,
			"id": "TJn8ng4F",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 383.8089787540536,
			"y": 625.1527902370943,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 508.41070556640625,
			"height": 52.50135083986754,
			"seed": 1174787092,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706162536894,
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
			"version": 1051,
			"versionNonce": 1973912748,
			"isDeleted": false,
			"id": "FWejvzihwk7MEYLDHvTzt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 387.6797218792233,
			"y": 897.9811212477457,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1617092908,
			"groupIds": [
				"0XunY9j27t7Crvimebg0y"
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
			"updated": 1706162536894,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 582,
			"versionNonce": 1040280596,
			"isDeleted": false,
			"id": "v0T7WGvL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 393.83387914092157,
			"y": 918.432153509444,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 1380309932,
			"groupIds": [
				"0XunY9j27t7Crvimebg0y"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706162536894,
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
			"version": 1111,
			"versionNonce": 774508332,
			"isDeleted": false,
			"id": "5SJPHimoqCJwbpIhRevtj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 390.6797218792233,
			"y": 963.9811212477457,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 853902892,
			"groupIds": [
				"0XunY9j27t7Crvimebg0y"
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
			"updated": 1706162536894,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 573,
			"versionNonce": 748865940,
			"isDeleted": false,
			"id": "s1FyVshv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 396.83387914092157,
			"y": 984.432153509444,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 1730928812,
			"groupIds": [
				"0XunY9j27t7Crvimebg0y"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706162536894,
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
			"version": 1103,
			"versionNonce": 2063026604,
			"isDeleted": false,
			"id": "4BnW48CCalxbmRGylyOai",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 389.6797218792233,
			"y": 1030.9811212477455,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 650308396,
			"groupIds": [
				"0XunY9j27t7Crvimebg0y"
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
			"updated": 1706162536895,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 573,
			"versionNonce": 1245476628,
			"isDeleted": false,
			"id": "1rRBI44w",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 395.83387914092157,
			"y": 1051.4321535094439,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 605332908,
			"groupIds": [
				"0XunY9j27t7Crvimebg0y"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706162536895,
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
			"version": 1084,
			"versionNonce": 1597584428,
			"isDeleted": false,
			"id": "c9LvHwZGtOuJoqRQRaOPs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 390.6797218792233,
			"y": 1096.9811212477455,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 877334572,
			"groupIds": [
				"0XunY9j27t7Crvimebg0y"
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
			"updated": 1706162536895,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 572,
			"versionNonce": 860124308,
			"isDeleted": false,
			"id": "B9MmRg3c",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 396.83387914092157,
			"y": 1117.4321535094439,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 2001742508,
			"groupIds": [
				"0XunY9j27t7Crvimebg0y"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706162536895,
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
			"version": 1087,
			"versionNonce": 1759104684,
			"isDeleted": false,
			"id": "6BXMrmS42awvN5kmbTKMb",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 460.4737003123803,
			"y": 899.598765212927,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1776245292,
			"groupIds": [
				"MwfWrf8t8zmw4n53qp8pu"
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
			"updated": 1706162536895,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 619,
			"versionNonce": 91275796,
			"isDeleted": false,
			"id": "IsWGI9q6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 466.6278575740786,
			"y": 920.0497974746253,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 1204499628,
			"groupIds": [
				"MwfWrf8t8zmw4n53qp8pu"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706162536895,
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
			"version": 1148,
			"versionNonce": 1484986668,
			"isDeleted": false,
			"id": "4JY6h9wMp0Y_PC2Ow_5nx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 463.4737003123803,
			"y": 965.5987652129265,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1616363308,
			"groupIds": [
				"MwfWrf8t8zmw4n53qp8pu"
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
			"updated": 1706162536895,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 610,
			"versionNonce": 934764436,
			"isDeleted": false,
			"id": "LgMdus1x",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 469.6278575740786,
			"y": 986.0497974746248,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 2079259052,
			"groupIds": [
				"MwfWrf8t8zmw4n53qp8pu"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706162536895,
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
			"version": 1140,
			"versionNonce": 1235162028,
			"isDeleted": false,
			"id": "URTsohB7QIdzFoxWES__a",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 462.4737003123803,
			"y": 1032.5987652129263,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1169876012,
			"groupIds": [
				"MwfWrf8t8zmw4n53qp8pu"
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
			"updated": 1706162536895,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 610,
			"versionNonce": 1917734164,
			"isDeleted": false,
			"id": "WnOUltCs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 468.6278575740786,
			"y": 1053.0497974746247,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 1940225708,
			"groupIds": [
				"MwfWrf8t8zmw4n53qp8pu"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706162536895,
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
			"version": 1121,
			"versionNonce": 1515699756,
			"isDeleted": false,
			"id": "srW4z7uo_e5_3wZG4U-zY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 463.4737003123803,
			"y": 1098.5987652129263,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1851312428,
			"groupIds": [
				"MwfWrf8t8zmw4n53qp8pu"
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
			"updated": 1706162536895,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 609,
			"versionNonce": 1722518164,
			"isDeleted": false,
			"id": "A8FJ1ytX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 469.6278575740786,
			"y": 1119.0497974746247,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 2034156460,
			"groupIds": [
				"MwfWrf8t8zmw4n53qp8pu"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706162536895,
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
			"version": 1078,
			"versionNonce": 1402411180,
			"isDeleted": false,
			"id": "nXBRmtPOxP9X7zQFDcJsY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 533.267678745537,
			"y": 901.2164091781083,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 839722388,
			"groupIds": [
				"t45pzzI_tO3cA9Mv4yp3T"
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
			"updated": 1706162536895,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 610,
			"versionNonce": 663033876,
			"isDeleted": false,
			"id": "EBhc1PYq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 539.4218360072352,
			"y": 921.6674414398066,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 1778078484,
			"groupIds": [
				"t45pzzI_tO3cA9Mv4yp3T"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706162536895,
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
			"version": 1140,
			"versionNonce": 1359422252,
			"isDeleted": false,
			"id": "kNtBLVcdl8dZKv10yunQ-",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 536.267678745537,
			"y": 967.2164091781082,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 784846996,
			"groupIds": [
				"t45pzzI_tO3cA9Mv4yp3T"
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
			"updated": 1706162536895,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 601,
			"versionNonce": 13694356,
			"isDeleted": false,
			"id": "gLZSPaMC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 542.4218360072352,
			"y": 987.6674414398065,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 1881710100,
			"groupIds": [
				"t45pzzI_tO3cA9Mv4yp3T"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706162536895,
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
			"version": 1132,
			"versionNonce": 1762778540,
			"isDeleted": false,
			"id": "syj04QM1aUrwKsBgn7P6h",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 535.267678745537,
			"y": 1034.216409178108,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 924040084,
			"groupIds": [
				"t45pzzI_tO3cA9Mv4yp3T"
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
			"updated": 1706162536895,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 601,
			"versionNonce": 1338319636,
			"isDeleted": false,
			"id": "QluQfgo8",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 541.4218360072352,
			"y": 1054.6674414398065,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 2109679892,
			"groupIds": [
				"t45pzzI_tO3cA9Mv4yp3T"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706162536895,
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
			"version": 1113,
			"versionNonce": 1424050220,
			"isDeleted": false,
			"id": "DZSV5HHCq8LsvQHwot5qa",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 536.267678745537,
			"y": 1100.216409178108,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 127985300,
			"groupIds": [
				"t45pzzI_tO3cA9Mv4yp3T"
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
			"updated": 1706162536895,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 600,
			"versionNonce": 1524080788,
			"isDeleted": false,
			"id": "vuvJdsjs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 542.4218360072352,
			"y": 1120.6674414398065,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 963572756,
			"groupIds": [
				"t45pzzI_tO3cA9Mv4yp3T"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706162536895,
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
			"version": 1072,
			"versionNonce": 408904364,
			"isDeleted": false,
			"id": "dbP7utYnEibzkLTQ4dJpg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 604.4440132135129,
			"y": 899.5987652129265,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1134446252,
			"groupIds": [
				"ytK9Xy82WpkfN6rQjIWLU"
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
			"updated": 1706162536895,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 604,
			"versionNonce": 700345876,
			"isDeleted": false,
			"id": "rwzN1CIv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 610.5981704752112,
			"y": 920.0497974746248,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 1408799020,
			"groupIds": [
				"ytK9Xy82WpkfN6rQjIWLU"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706162536895,
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
			"version": 1133,
			"versionNonce": 708193580,
			"isDeleted": false,
			"id": "b-lPuYu7mRvU6l3jpgS5m",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 607.4440132135129,
			"y": 965.5987652129265,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 665160620,
			"groupIds": [
				"ytK9Xy82WpkfN6rQjIWLU"
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
			"updated": 1706162536895,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 596,
			"versionNonce": 1567591316,
			"isDeleted": false,
			"id": "4movLlf4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 613.5981704752112,
			"y": 986.0497974746247,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 550450732,
			"groupIds": [
				"ytK9Xy82WpkfN6rQjIWLU"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706162536895,
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
			"version": 1124,
			"versionNonce": 466593708,
			"isDeleted": false,
			"id": "Ujf9QvFgOluA7groPOulA",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 606.4440132135129,
			"y": 1032.5987652129265,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1281331372,
			"groupIds": [
				"ytK9Xy82WpkfN6rQjIWLU"
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
			"updated": 1706162536895,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 596,
			"versionNonce": 136378644,
			"isDeleted": false,
			"id": "NHhCevxK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 612.5981704752112,
			"y": 1053.0497974746247,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 167811884,
			"groupIds": [
				"ytK9Xy82WpkfN6rQjIWLU"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706162536895,
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
			"version": 1105,
			"versionNonce": 1096143404,
			"isDeleted": false,
			"id": "g7QEh5Xnls-DF2ZpOROp_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 607.4440132135129,
			"y": 1098.5987652129265,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 874272172,
			"groupIds": [
				"ytK9Xy82WpkfN6rQjIWLU"
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
			"updated": 1706162536895,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 595,
			"versionNonce": 88651412,
			"isDeleted": false,
			"id": "Rt7KqTsm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 613.5981704752112,
			"y": 1119.0497974746247,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 1205649452,
			"groupIds": [
				"ytK9Xy82WpkfN6rQjIWLU"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706162536896,
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
			"version": 980,
			"versionNonce": 1504881836,
			"isDeleted": false,
			"id": "IissBvAk3Np5rucGmLWuG",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1093.2369924002173,
			"y": 903.0401273020507,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 667670932,
			"groupIds": [
				"HB46_cEOUVOIPyG0LO-lP",
				"VNaL-FQS-8L67A0NpxRKe"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706162536896,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1015,
			"versionNonce": 1369228308,
			"isDeleted": false,
			"id": "SXO1FF6GTv6_7nBgAd0Xg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1165.2369924002173,
			"y": 902.0401273020507,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 499353364,
			"groupIds": [
				"HB46_cEOUVOIPyG0LO-lP",
				"VNaL-FQS-8L67A0NpxRKe"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706162536896,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1056,
			"versionNonce": 915420972,
			"isDeleted": false,
			"id": "5hFsj03vNFqXwXwVLSwN9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1237.2369924002173,
			"y": 901.0401273020507,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 594117780,
			"groupIds": [
				"HB46_cEOUVOIPyG0LO-lP",
				"VNaL-FQS-8L67A0NpxRKe"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706162536896,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1107,
			"versionNonce": 1662198164,
			"isDeleted": false,
			"id": "aBQVy5DdLNJpqJi1sZBDj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1309.2369924002173,
			"y": 902.0401273020507,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1316213268,
			"groupIds": [
				"HB46_cEOUVOIPyG0LO-lP",
				"VNaL-FQS-8L67A0NpxRKe"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706162536896,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 998,
			"versionNonce": 1683517868,
			"isDeleted": false,
			"id": "kz-zUnjxoe-zDhnMwGK89",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1096.4722803305795,
			"y": 969.363529874483,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 955611028,
			"groupIds": [
				"5ls1HuTMYSEDOv4Uiqbzk",
				"VNaL-FQS-8L67A0NpxRKe"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706162536896,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1033,
			"versionNonce": 14798612,
			"isDeleted": false,
			"id": "WqydTYKtv6Wa-YMI8dklV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1168.4722803305795,
			"y": 968.363529874483,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 1409901844,
			"groupIds": [
				"5ls1HuTMYSEDOv4Uiqbzk",
				"VNaL-FQS-8L67A0NpxRKe"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706162536896,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1074,
			"versionNonce": 1379228716,
			"isDeleted": false,
			"id": "Mzg-Uwc8WEcM4aeTtVAXM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1240.4722803305795,
			"y": 967.363529874483,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 289645204,
			"groupIds": [
				"5ls1HuTMYSEDOv4Uiqbzk",
				"VNaL-FQS-8L67A0NpxRKe"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706162536896,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1125,
			"versionNonce": 461294740,
			"isDeleted": false,
			"id": "bnz4E2gqGRM3uMe0dw9jE",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1312.4722803305797,
			"y": 968.363529874483,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 2002399252,
			"groupIds": [
				"5ls1HuTMYSEDOv4Uiqbzk",
				"VNaL-FQS-8L67A0NpxRKe"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706162536896,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1007,
			"versionNonce": 2047932076,
			"isDeleted": false,
			"id": "9HVKn0kFP5iCpmKoq94n-",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1099.707568260942,
			"y": 1034.0692884817336,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 184601260,
			"groupIds": [
				"dTfvjLXyFOyD_G5XMkHCD",
				"VNaL-FQS-8L67A0NpxRKe"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706162536896,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1040,
			"versionNonce": 614472212,
			"isDeleted": false,
			"id": "spOt5xx0LVPkgBUSImCU-",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1171.707568260942,
			"y": 1033.0692884817336,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 342529324,
			"groupIds": [
				"dTfvjLXyFOyD_G5XMkHCD",
				"VNaL-FQS-8L67A0NpxRKe"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706162536896,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1081,
			"versionNonce": 143999276,
			"isDeleted": false,
			"id": "azOSNzWdkvm4pe7hCh-_5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1243.707568260942,
			"y": 1032.0692884817336,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 322375596,
			"groupIds": [
				"dTfvjLXyFOyD_G5XMkHCD",
				"VNaL-FQS-8L67A0NpxRKe"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706162536896,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1132,
			"versionNonce": 1731966868,
			"isDeleted": false,
			"id": "2KSPXi10TDNqL07GnXO-8",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1315.7075682609423,
			"y": 1033.0692884817336,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 663763500,
			"groupIds": [
				"dTfvjLXyFOyD_G5XMkHCD",
				"VNaL-FQS-8L67A0NpxRKe"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706162536896,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1034,
			"versionNonce": 86784940,
			"isDeleted": false,
			"id": "LOPhtvAVacHRj3Bmque48",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1101.3252122261233,
			"y": 1100.3926910541652,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 872137772,
			"groupIds": [
				"BPcdvrNuuqQ1fsrk7LbaA",
				"VNaL-FQS-8L67A0NpxRKe"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706162536896,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1069,
			"versionNonce": 1602725140,
			"isDeleted": false,
			"id": "qvXOVt6RZ5H7Xu2CEuIXt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1173.3252122261233,
			"y": 1099.3926910541652,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 650796716,
			"groupIds": [
				"BPcdvrNuuqQ1fsrk7LbaA",
				"VNaL-FQS-8L67A0NpxRKe"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706162536896,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1110,
			"versionNonce": 2046813740,
			"isDeleted": false,
			"id": "3EuVnPslKgn-lHsCp_VUz",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1245.3252122261233,
			"y": 1098.3926910541652,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 702654764,
			"groupIds": [
				"BPcdvrNuuqQ1fsrk7LbaA",
				"VNaL-FQS-8L67A0NpxRKe"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706162536896,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1161,
			"versionNonce": 318366356,
			"isDeleted": false,
			"id": "AE04PRVgOW8uxHAfPbJPP",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1317.3252122261233,
			"y": 1099.3926910541652,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.9020645233966,
			"height": 64.90206452339658,
			"seed": 279684012,
			"groupIds": [
				"BPcdvrNuuqQ1fsrk7LbaA",
				"VNaL-FQS-8L67A0NpxRKe"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706162536896,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 783,
			"versionNonce": 469385388,
			"isDeleted": false,
			"id": "7zhfm18FYdvCNuyoDE4Ef",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 243.1650886974636,
			"y": -770.4125546779667,
			"strokeColor": "#1e1e1e",
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
			"boundElements": [],
			"updated": 1706162536896,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 818,
			"versionNonce": 1749577748,
			"isDeleted": false,
			"id": "ThyZ-znTcnoKJQ93NYVLp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 315.1650886974636,
			"y": -771.4125546779667,
			"strokeColor": "#1e1e1e",
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
			"boundElements": [],
			"updated": 1706162536896,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 859,
			"versionNonce": 1925532460,
			"isDeleted": false,
			"id": "Jfk772oeqHWOOJVRc27Nm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 387.1650886974636,
			"y": -772.4125546779667,
			"strokeColor": "#1e1e1e",
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
			"boundElements": [],
			"updated": 1706162536896,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 910,
			"versionNonce": 2137607572,
			"isDeleted": false,
			"id": "rLTLxRQKPfQBB1yfNVh7_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 459.16508869746394,
			"y": -771.4125546779667,
			"strokeColor": "#1e1e1e",
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
			"boundElements": [],
			"updated": 1706162536896,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 801,
			"versionNonce": 13305260,
			"isDeleted": false,
			"id": "7Xz0hBtAit50qBGnjl5nH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 246.40037662782618,
			"y": -704.0891521055344,
			"strokeColor": "#1e1e1e",
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
			"boundElements": [],
			"updated": 1706162536896,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 836,
			"versionNonce": 160594708,
			"isDeleted": false,
			"id": "yKtX9oSBvixXZ8gRn4sBM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 318.4003766278262,
			"y": -705.0891521055344,
			"strokeColor": "#1e1e1e",
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
			"boundElements": [],
			"updated": 1706162536896,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 877,
			"versionNonce": 1798664236,
			"isDeleted": false,
			"id": "WHSYdVDqehpCLB72WyuOQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 390.4003766278262,
			"y": -706.0891521055344,
			"strokeColor": "#1e1e1e",
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
			"boundElements": [],
			"updated": 1706162536896,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 928,
			"versionNonce": 557447316,
			"isDeleted": false,
			"id": "Rmv4cP90TV6b0siAGG43t",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 462.40037662782606,
			"y": -705.0891521055344,
			"strokeColor": "#1e1e1e",
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
			"boundElements": [],
			"updated": 1706162536896,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 808,
			"versionNonce": 569281196,
			"isDeleted": false,
			"id": "S6GEpG8Q28BTztU9duO97",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 249.63566455818875,
			"y": -639.3833934982838,
			"strokeColor": "#1e1e1e",
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
			"boundElements": [],
			"updated": 1706162536896,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 843,
			"versionNonce": 571852308,
			"isDeleted": false,
			"id": "l8NKOU6BGmwNAl1iyPwMF",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 321.63566455818875,
			"y": -640.3833934982838,
			"strokeColor": "#1e1e1e",
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
			"boundElements": [],
			"updated": 1706162536896,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 884,
			"versionNonce": 127948076,
			"isDeleted": false,
			"id": "Ke7QY6UiWVvgGfu10zlkG",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 393.63566455818875,
			"y": -641.3833934982838,
			"strokeColor": "#1e1e1e",
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
			"boundElements": [],
			"updated": 1706162536896,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 935,
			"versionNonce": 18604948,
			"isDeleted": false,
			"id": "ypGFwgai7Pb_4746MXLBu",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 465.63566455818864,
			"y": -640.3833934982838,
			"strokeColor": "#1e1e1e",
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
			"boundElements": [],
			"updated": 1706162536896,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 823,
			"versionNonce": 431280044,
			"isDeleted": false,
			"id": "xv62BETWL_fmAL-iVRxbP",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 254.4885964537326,
			"y": -571.4423469606711,
			"strokeColor": "#1e1e1e",
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
			"boundElements": [],
			"updated": 1706162536896,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 858,
			"versionNonce": 612520212,
			"isDeleted": false,
			"id": "PdYt6RKXw6L3zj4u5Y0pM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 326.4885964537326,
			"y": -572.4423469606711,
			"strokeColor": "#1e1e1e",
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
			"boundElements": [],
			"updated": 1706162536896,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 899,
			"versionNonce": 408287788,
			"isDeleted": false,
			"id": "1ndjAyiLORhDwnOq0CKfT",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 398.4885964537326,
			"y": -573.4423469606711,
			"strokeColor": "#1e1e1e",
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
			"boundElements": [],
			"updated": 1706162536896,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 950,
			"versionNonce": 1002376852,
			"isDeleted": false,
			"id": "8PgmTz12i6ZK6jY5mExuY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 470.4885964537325,
			"y": -572.4423469606711,
			"strokeColor": "#1e1e1e",
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
			"boundElements": [],
			"updated": 1706162536896,
			"link": null,
			"locked": false
		},
		{
			"id": "psKM6JJuNlHbfZEcT3wJB",
			"type": "rectangle",
			"x": 762.7183428638057,
			"y": 983.0204785191877,
			"width": 195.73491978693298,
			"height": 82.49984222424426,
			"angle": 0,
			"strokeColor": "#96f2d7",
			"backgroundColor": "#96f2d7",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [
				"1OaDZMU9y-vfLSB_yY3km"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"seed": 2093142676,
			"version": 278,
			"versionNonce": 778949804,
			"isDeleted": false,
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
			"updated": 1706162536896,
			"link": null,
			"locked": false
		},
		{
			"id": "4zQdRfuT",
			"type": "text",
			"x": 778.8947825156183,
			"y": 995.9616302406382,
			"width": 160.96028217162683,
			"height": 65.92933157749835,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#96f2d7",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [
				"1OaDZMU9y-vfLSB_yY3km"
			],
			"frameId": null,
			"roundness": null,
			"seed": 28947628,
			"version": 127,
			"versionNonce": 394796052,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1706162536896,
			"link": null,
			"locked": false,
			"text": "S-Box",
			"rawText": "S-Box",
			"fontSize": 54.9411096479153,
			"fontFamily": 1,
			"textAlign": "left",
			"verticalAlign": "top",
			"baseline": 52,
			"containerId": null,
			"originalText": "S-Box",
			"lineHeight": 1.25
		},
		{
			"type": "ellipse",
			"version": 222,
			"versionNonce": 430333740,
			"isDeleted": false,
			"id": "bEr0vmH-d7r2ixNu5MiyO",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 380.1454662105589,
			"y": 891.2558716333873,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 82.5,
			"height": 80,
			"seed": 537588524,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706162536897,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 853,
			"versionNonce": 30636436,
			"isDeleted": false,
			"id": "aHBrJQAs8drYrRjH1nqsH",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 417.7531869319364,
			"y": 889.3424042392946,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 337.64701551253756,
			"height": 153.0885353774172,
			"seed": 1785179924,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706162536897,
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
			"version": 874,
			"versionNonce": 1382652332,
			"isDeleted": false,
			"id": "eUYwj8xhaluxlEkcVYTFD",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 963.2345275851654,
			"y": 1026.748490225768,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 118.17176352691388,
			"height": 90.11095333535513,
			"seed": 1036232340,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706162536897,
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
			"version": 363,
			"versionNonce": 366421780,
			"isDeleted": false,
			"id": "xUY1CaQbNDPEp1t9zgmwA",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 383.3807541409217,
			"y": 957.5792742058189,
			"strokeColor": "#f08c00",
			"backgroundColor": "transparent",
			"width": 82.5,
			"height": 80,
			"seed": 936874772,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706162536897,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 512,
			"versionNonce": 870417452,
			"isDeleted": false,
			"id": "c-Ww67r_QRR-gqcHmc4Oq",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 382.5025109105456,
			"y": 1134.394026361932,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 369.26460688580056,
			"height": 240.66151721450115,
			"seed": 292779412,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706162536897,
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
			"version": 380,
			"versionNonce": 403252372,
			"isDeleted": false,
			"id": "I6lih2slwsp5eiz_sCVc-",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 380.145466210559,
			"y": 1025.5203207434322,
			"strokeColor": "#099268",
			"backgroundColor": "transparent",
			"width": 82.5,
			"height": 80,
			"seed": 108002604,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706162536897,
			"link": null,
			"locked": false
		},
		{
			"type": "ellipse",
			"version": 443,
			"versionNonce": 603463340,
			"isDeleted": false,
			"id": "1CniX-4ArzhX_8TyDrLhs",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 383.38075414092157,
			"y": 1091.8437233158636,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 82.5,
			"height": 80,
			"seed": 1721293076,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706162536897,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 489,
			"versionNonce": 1310683668,
			"isDeleted": false,
			"id": "xwLvjPo_R8mH-9VaKVs3E",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 385.8162128956301,
			"y": 996.7856110780715,
			"strokeColor": "#f08c00",
			"backgroundColor": "transparent",
			"width": 372.49989481616274,
			"height": 199.6320930752263,
			"seed": 1868846612,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706162536897,
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
			"version": 471,
			"versionNonce": 995584300,
			"isDeleted": false,
			"id": "YccWD_hpwysFgWsTSMleL",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 376.6250611741799,
			"y": 1062.66796711289,
			"strokeColor": "#099268",
			"backgroundColor": "transparent",
			"width": 380.80869050279443,
			"height": 176.91151721450115,
			"seed": 1176007572,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706162536897,
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
			"version": 274,
			"versionNonce": 1460670356,
			"isDeleted": false,
			"id": "JRu_PT3f4M78hbYxupCC0",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1083.8205910644092,
			"y": 897.7264474941118,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 82.5,
			"height": 80,
			"seed": 1247526828,
			"groupIds": [],
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
			"updated": 1706162536897,
			"link": null,
			"locked": false
		},
		{
			"type": "ellipse",
			"version": 411,
			"versionNonce": 1835623340,
			"isDeleted": false,
			"id": "MIweP8IgcHNsIA3OMT4hJ",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1088.673522959953,
			"y": 960.8145621361812,
			"strokeColor": "#f08c00",
			"backgroundColor": "transparent",
			"width": 82.5,
			"height": 80,
			"seed": 1307370516,
			"groupIds": [],
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
			"updated": 1706162536897,
			"link": null,
			"locked": false
		},
		{
			"type": "ellipse",
			"version": 440,
			"versionNonce": 51445012,
			"isDeleted": false,
			"id": "9K21_kogIhl8_dvOgEGN-",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1090.2911669251343,
			"y": 1028.7556086737945,
			"strokeColor": "#099268",
			"backgroundColor": "transparent",
			"width": 82.5,
			"height": 80,
			"seed": 1824126740,
			"groupIds": [],
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
			"updated": 1706162536897,
			"link": null,
			"locked": false
		},
		{
			"type": "ellipse",
			"version": 503,
			"versionNonce": 811077164,
			"isDeleted": false,
			"id": "TVwJzj4QxP4rZ5xVMW9Zl",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1093.526454855497,
			"y": 1095.0790112462262,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 82.5,
			"height": 80,
			"seed": 1979622572,
			"groupIds": [],
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
			"updated": 1706162536897,
			"link": null,
			"locked": false
		},
		{
			"type": "arrow",
			"version": 539,
			"versionNonce": 731396756,
			"isDeleted": false,
			"id": "KTS9uWgLhcQ5aCNUBaSmq",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 959.8098326246704,
			"y": 1025.805236793222,
			"strokeColor": "#f08c00",
			"backgroundColor": "transparent",
			"width": 115.68647559655119,
			"height": 60.20581119916881,
			"seed": 205256236,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706162536897,
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
			"version": 650,
			"versionNonce": 621635756,
			"isDeleted": false,
			"id": "qRsy06h_I0z1kKgho-MxY",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 962.6774765898515,
			"y": 1030.658168688766,
			"strokeColor": "#099268",
			"backgroundColor": "transparent",
			"width": 119.78940749209482,
			"height": 70.19624858169709,
			"seed": 741626028,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706162536897,
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
			"version": 347,
			"versionNonce": 1938621716,
			"isDeleted": false,
			"id": "0TELktlU7HTCSlLD_-Lj_",
			"fillStyle": "solid",
			"strokeWidth": 4,
			"strokeStyle": "dashed",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 963.7959437357811,
			"y": 1028.4571913902507,
			"strokeColor": "#6741d9",
			"backgroundColor": "transparent",
			"width": 121.32371812394308,
			"height": 101.91199054176764,
			"seed": 289233708,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706162695820,
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
			"id": "BSoOlmWERTKYpzH8ebMrt",
			"type": "line",
			"x": 934.1886031730191,
			"y": 204.93373126699964,
			"width": 98.67628187605737,
			"height": 287.9406258022651,
			"angle": 0,
			"strokeColor": "#96f2d7",
			"backgroundColor": "#96f2d7",
			"fillStyle": "cross-hatch",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"seed": 1236594860,
			"version": 430,
			"versionNonce": 1628986924,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1706162681295,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-6.470575860725347,
					287.940625802265
				],
				[
					90.58806205015053,
					286.3229818370837
				],
				[
					92.20570601533203,
					-1.2789769243681803e-13
				],
				[
					0,
					0
				]
			],
			"lastCommittedPoint": [
				-1.617643965181287,
				-3.235287930362574
			],
			"startBinding": null,
			"endBinding": null,
			"startArrowhead": null,
			"endArrowhead": null
		},
		{
			"id": "wfLgmU1toXn9SqoOwEPdF",
			"type": "line",
			"x": -427.86761550960546,
			"y": 131.48772568090396,
			"width": 1064.4097290892723,
			"height": 630.2642341872955,
			"angle": 0,
			"strokeColor": "#96f2d7",
			"backgroundColor": "#96f2d7",
			"fillStyle": "cross-hatch",
			"strokeWidth": 4,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"seed": 105170964,
			"version": 968,
			"versionNonce": 574421780,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1706162536879,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-4.8529318955437475,
					64.21206291997868
				],
				[
					12.941151721450069,
					248.24194512398861
				],
				[
					-3.235287930362574,
					435.208979742689
				],
				[
					-135.88209307522618,
					482.3435262852185
				],
				[
					-389.8521956086847,
					527.9534136900938
				],
				[
					-339.7052326880655,
					630.2642341872955
				],
				[
					562.9400998830797,
					611.2709383289929
				],
				[
					674.5575334805875,
					470.2023361142949
				],
				[
					351.0287404443343,
					437.1055781904521
				],
				[
					342.94052061842785,
					12.569212411341198
				],
				[
					0,
					0
				]
			],
			"lastCommittedPoint": [
				3.2352879303624604,
				0
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
		"currentItemStrokeColor": "#96f2d7",
		"currentItemBackgroundColor": "#96f2d7",
		"currentItemFillStyle": "cross-hatch",
		"currentItemStrokeWidth": 4,
		"currentItemStrokeStyle": "solid",
		"currentItemRoughness": 1,
		"currentItemOpacity": 100,
		"currentItemFontFamily": 1,
		"currentItemFontSize": 20,
		"currentItemTextAlign": "left",
		"currentItemStartArrowhead": null,
		"currentItemEndArrowhead": "arrow",
		"scrollX": 342.94130733758857,
		"scrollY": 4.551162223973847,
		"zoom": {
			"value": 0.6181830004156357
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