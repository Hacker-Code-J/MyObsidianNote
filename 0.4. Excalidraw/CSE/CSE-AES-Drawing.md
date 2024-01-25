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
			"type": "text",
			"version": 165,
			"versionNonce": 1840062868,
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
			"updated": 1706163231224,
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
			"version": 569,
			"versionNonce": 675008276,
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
			"updated": 1706163231224,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 74,
			"versionNonce": 1201196180,
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
			"updated": 1706163231224,
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
			"version": 604,
			"versionNonce": 1031412244,
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
			"updated": 1706163231224,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 74,
			"versionNonce": 1423292308,
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
			"updated": 1706163231224,
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
			"version": 645,
			"versionNonce": 165782804,
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
			"updated": 1706163231224,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 74,
			"versionNonce": 1645470356,
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
			"updated": 1706163231224,
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
			"version": 696,
			"versionNonce": 1143107604,
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
			"updated": 1706163231224,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 74,
			"versionNonce": 1342393748,
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
			"updated": 1706163231224,
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
			"version": 631,
			"versionNonce": 921467668,
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
			"updated": 1706163231224,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 74,
			"versionNonce": 324270228,
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
			"updated": 1706163231224,
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
			"version": 666,
			"versionNonce": 1089455636,
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
			"updated": 1706163231224,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 74,
			"versionNonce": 884335508,
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
			"updated": 1706163231224,
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
			"version": 707,
			"versionNonce": 1423724820,
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
			"updated": 1706163231225,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 74,
			"versionNonce": 1356402324,
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
			"updated": 1706163231225,
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
			"version": 758,
			"versionNonce": 2036472852,
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
			"updated": 1706163231225,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 74,
			"versionNonce": 409827732,
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
			"updated": 1706163231225,
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
			"version": 621,
			"versionNonce": 1227958036,
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
			"updated": 1706163231225,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 74,
			"versionNonce": 1344480404,
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
			"updated": 1706163231225,
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
			"version": 657,
			"versionNonce": 1928950292,
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
			"updated": 1706163231225,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 71,
			"versionNonce": 1353322388,
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
			"updated": 1706163231225,
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
			"version": 697,
			"versionNonce": 963312916,
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
			"updated": 1706163231225,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 73,
			"versionNonce": 112343700,
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
			"updated": 1706163231225,
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
			"version": 748,
			"versionNonce": 1932904468,
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
			"updated": 1706163231225,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 73,
			"versionNonce": 1928045972,
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
			"updated": 1706163231225,
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
			"version": 604,
			"versionNonce": 185193236,
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
			"updated": 1706163231225,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 73,
			"versionNonce": 705056916,
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
			"updated": 1706163231225,
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
			"version": 639,
			"versionNonce": 2140610068,
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
			"updated": 1706163231225,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 73,
			"versionNonce": 1420966804,
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
			"updated": 1706163231225,
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
			"version": 680,
			"versionNonce": 1670228244,
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
			"updated": 1706163231225,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 73,
			"versionNonce": 798975636,
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
			"updated": 1706163231225,
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
			"version": 731,
			"versionNonce": 1570599956,
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
			"updated": 1706163231225,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 73,
			"versionNonce": 192795028,
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
			"updated": 1706163231225,
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
			"version": 277,
			"versionNonce": 678854420,
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
			"updated": 1706163231225,
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
			"version": 424,
			"versionNonce": 1291680916,
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
			"updated": 1706163231225,
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
			"version": 1389,
			"versionNonce": 315148820,
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
			"updated": 1706163231225,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1425,
			"versionNonce": 1825466260,
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
			"updated": 1706163231225,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1463,
			"versionNonce": 2007011988,
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
			"updated": 1706163231225,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1515,
			"versionNonce": 237239700,
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
			"updated": 1706163231225,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 400,
			"versionNonce": 1299655444,
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
			"updated": 1706163231225,
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
			"version": 1143,
			"versionNonce": 1695066260,
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
			"updated": 1706163231225,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1178,
			"versionNonce": 1485731348,
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
			"updated": 1706163231225,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1219,
			"versionNonce": 1157534612,
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
			"updated": 1706163231225,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1270,
			"versionNonce": 948896020,
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
			"updated": 1706163231225,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 152,
			"versionNonce": 179682964,
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
			"updated": 1706163231225,
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
			"version": 367,
			"versionNonce": 875088916,
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
			"updated": 1706163231225,
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
			"version": 391,
			"versionNonce": 652093844,
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
			"updated": 1706163231225,
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
			"version": 389,
			"versionNonce": 638310164,
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
			"updated": 1706163231225,
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
			"version": 105,
			"versionNonce": 505926804,
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
			"updated": 1706163231225,
			"link": null,
			"locked": false
		},
		{
			"type": "arrow",
			"version": 274,
			"versionNonce": 1890050476,
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
			"updated": 1706163231717,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "sFLsuIm_dUPnTBebsF0qo",
				"focus": 0.0014331493623033261,
				"gap": 9.580367695652626
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
			"version": 172,
			"versionNonce": 155369364,
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
			"updated": 1706163231225,
			"link": null,
			"locked": false
		},
		{
			"type": "arrow",
			"version": 419,
			"versionNonce": 51825708,
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
			"updated": 1706163231718,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "4xmzxtGFQzETfmpGHwzRg",
				"focus": -0.1794695880681101,
				"gap": 13.235161763268252
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
			"version": 190,
			"versionNonce": 350153364,
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
			"updated": 1706163231225,
			"link": null,
			"locked": false
		},
		{
			"type": "arrow",
			"version": 513,
			"versionNonce": 1833199276,
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
			"height": 4.440892098500626e-16,
			"seed": 291494079,
			"groupIds": [
				"3-m8sGsKPVPLwT5n-lrVA"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706163231719,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "tV_SB2EWl4r3T_ko8R6Z8",
				"focus": -0.07691172349065863,
				"gap": 11.580367695652626
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
			"version": 156,
			"versionNonce": 28071316,
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
			"updated": 1706163231225,
			"link": null,
			"locked": false
		},
		{
			"type": "arrow",
			"version": 396,
			"versionNonce": 601534764,
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
			"updated": 1706163231720,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "v7_p_Y3YbNgMRaF3xT7Lg",
				"focus": -0.06086929888572524,
				"gap": 12.580367695652626
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
			"version": 1370,
			"versionNonce": 609943700,
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
			"updated": 1706163231225,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 242,
			"versionNonce": 735432212,
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
			"updated": 1706163231227,
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
			"version": 1406,
			"versionNonce": 1704651668,
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
			"updated": 1706163231227,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 299,
			"versionNonce": 870340884,
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
			"updated": 1706163231227,
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
			"version": 1448,
			"versionNonce": 1109137044,
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
			"updated": 1706163231227,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 297,
			"versionNonce": 1560552468,
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
			"updated": 1706163231227,
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
			"version": 1496,
			"versionNonce": 1250853268,
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
			"updated": 1706163231227,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 296,
			"versionNonce": 569454356,
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
			"updated": 1706163231227,
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
			"version": 674,
			"versionNonce": 597830804,
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
			"updated": 1706163231227,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 179,
			"versionNonce": 101128084,
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
			"updated": 1706163231227,
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
			"version": 708,
			"versionNonce": 1306985748,
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
			"updated": 1706163231227,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 179,
			"versionNonce": 1047347860,
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
			"updated": 1706163231227,
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
			"version": 749,
			"versionNonce": 240111636,
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
			"updated": 1706163231227,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 179,
			"versionNonce": 763669908,
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
			"updated": 1706163231227,
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
			"version": 800,
			"versionNonce": 490855188,
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
			"updated": 1706163231227,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 179,
			"versionNonce": 1207785620,
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
			"updated": 1706163231227,
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
			"version": 736,
			"versionNonce": 1500325396,
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
			"updated": 1706163231227,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 179,
			"versionNonce": 897691924,
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
			"updated": 1706163231227,
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
			"version": 770,
			"versionNonce": 902983316,
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
			"updated": 1706163231227,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 179,
			"versionNonce": 942636052,
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
			"updated": 1706163231227,
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
			"version": 811,
			"versionNonce": 1452202388,
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
			"updated": 1706163231228,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 179,
			"versionNonce": 2082899732,
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
			"updated": 1706163231228,
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
			"version": 862,
			"versionNonce": 1030522004,
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
			"updated": 1706163231228,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 179,
			"versionNonce": 806801940,
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
			"updated": 1706163231228,
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
			"version": 726,
			"versionNonce": 1125871508,
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
			"updated": 1706163231228,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 179,
			"versionNonce": 1414240916,
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
			"updated": 1706163231228,
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
			"version": 761,
			"versionNonce": 111355924,
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
			"updated": 1706163231228,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 176,
			"versionNonce": 1907164564,
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
			"updated": 1706163231228,
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
			"version": 801,
			"versionNonce": 1788818196,
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
			"updated": 1706163231228,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 178,
			"versionNonce": 804237460,
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
			"updated": 1706163231228,
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
			"version": 852,
			"versionNonce": 1096056340,
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
			"updated": 1706163231228,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 178,
			"versionNonce": 935566228,
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
			"updated": 1706163231228,
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
			"version": 732,
			"versionNonce": 494078228,
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
			"updated": 1706163231228,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 201,
			"versionNonce": 631952404,
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
			"updated": 1706163231228,
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
			"version": 766,
			"versionNonce": 719270292,
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
			"updated": 1706163231228,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 201,
			"versionNonce": 346808084,
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
			"updated": 1706163231228,
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
			"version": 807,
			"versionNonce": 1267129492,
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
			"updated": 1706163231228,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 201,
			"versionNonce": 958802452,
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
			"updated": 1706163231228,
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
			"version": 858,
			"versionNonce": 545245076,
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
			"updated": 1706163231228,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 201,
			"versionNonce": 1976153364,
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
			"updated": 1706163231228,
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
			"version": 813,
			"versionNonce": 913961620,
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
			"updated": 1706163231228,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 281,
			"versionNonce": 774200724,
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
			"updated": 1706163231228,
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
			"version": 846,
			"versionNonce": 642550548,
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
			"updated": 1706163231228,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 281,
			"versionNonce": 1009911956,
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
			"updated": 1706163231228,
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
			"version": 889,
			"versionNonce": 1133237780,
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
			"updated": 1706163231228,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 281,
			"versionNonce": 693105556,
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
			"updated": 1706163231228,
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
			"version": 938,
			"versionNonce": 1270112532,
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
			"updated": 1706163231228,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 282,
			"versionNonce": 1378819732,
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
			"updated": 1706163231228,
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
			"version": 1243,
			"versionNonce": 91630612,
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
			"updated": 1706163231228,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 710,
			"versionNonce": 770782356,
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
			"updated": 1706163231228,
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
			"version": 1066,
			"versionNonce": 210076180,
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
			"updated": 1706163231228,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 499,
			"versionNonce": 1261636884,
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
			"updated": 1706163231228,
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
			"version": 1112,
			"versionNonce": 1157122708,
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
			"updated": 1706163231228,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 499,
			"versionNonce": 507107348,
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
			"updated": 1706163231228,
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
			"version": 1161,
			"versionNonce": 1122874772,
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
			"updated": 1706163231228,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 500,
			"versionNonce": 1287938196,
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
			"updated": 1706163231228,
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
			"version": 919,
			"versionNonce": 1074998804,
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
			"updated": 1706163231228,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 392,
			"versionNonce": 541440276,
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
			"updated": 1706163231228,
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
			"version": 957,
			"versionNonce": 987068052,
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
			"updated": 1706163231228,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 390,
			"versionNonce": 745529748,
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
			"updated": 1706163231228,
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
			"version": 996,
			"versionNonce": 10915604,
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
			"updated": 1706163231228,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 391,
			"versionNonce": 171235860,
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
			"updated": 1706163231228,
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
			"version": 1047,
			"versionNonce": 1010333588,
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
			"updated": 1706163231228,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 392,
			"versionNonce": 1606853268,
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
			"updated": 1706163231228,
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
			"version": 282,
			"versionNonce": 2105356308,
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
			"updated": 1706163231228,
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
			"version": 278,
			"versionNonce": 268832148,
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
			"updated": 1706163231228,
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
			"version": 423,
			"versionNonce": 1754741524,
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
			"updated": 1706163231228,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 399,
			"versionNonce": 1101445268,
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
			"updated": 1706163231228,
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
			"version": 422,
			"versionNonce": 384468500,
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
			"updated": 1706163231228,
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
			"version": 300,
			"versionNonce": 2102961044,
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
			"updated": 1706163231228,
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
			"version": 249,
			"versionNonce": 2066157844,
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
			"updated": 1706163231228,
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
			"version": 555,
			"versionNonce": 1607192212,
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
			"updated": 1706163231228,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 511,
			"versionNonce": 1058048020,
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
			"updated": 1706163231228,
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
			"version": 311,
			"versionNonce": 917067308,
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
			"updated": 1706163231726,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "0iprlmXQCS5sbqkDf4axb",
				"focus": 0.4531723849793141,
				"gap": 2.469531421848785
			},
			"endBinding": {
				"elementId": "m8enJcjRj3nDJjjmOnWMG",
				"focus": 0.4679641221015967,
				"gap": 3.6400515138274727
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
			"version": 204,
			"versionNonce": 791974676,
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
			"updated": 1706163231228,
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
			"version": 125,
			"versionNonce": 2061045908,
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
			"updated": 1706163231228,
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
			"version": 122,
			"versionNonce": 672259604,
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
			"updated": 1706163231228,
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
			"version": 588,
			"versionNonce": 1204992812,
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
			"updated": 1706163231728,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "mOsdpN84jcolJQltVagfI",
				"focus": 0.3815010707788613,
				"gap": 1.2078839627758953
			},
			"endBinding": {
				"elementId": "CLdrue7i49kja87QBDzSN",
				"focus": -0.45766423357664093,
				"gap": 1.2500000000000284
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
			"version": 642,
			"versionNonce": 850032044,
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
			"updated": 1706163231729,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "CLdrue7i49kja87QBDzSN",
				"focus": -0.33212428259986865,
				"gap": 3.7500000000000284
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
			"version": 809,
			"versionNonce": 380762796,
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
			"updated": 1706163231730,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "X78EcPP5HZcB-FF35O3lg",
				"focus": 0.049160654516874326,
				"gap": 1
			},
			"endBinding": {
				"elementId": "CLdrue7i49kja87QBDzSN",
				"focus": 0.2604295889978678,
				"gap": 1.4194901515008667
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
			"version": 782,
			"versionNonce": 1750876076,
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
			"updated": 1706163231730,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "m8enJcjRj3nDJjjmOnWMG",
				"focus": -0.20189137607087237,
				"gap": 1.1881601324369626
			},
			"endBinding": {
				"elementId": "CLdrue7i49kja87QBDzSN",
				"focus": 0.45745022034457833,
				"gap": 2.8633277810651236
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
			"version": 205,
			"versionNonce": 771310764,
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
			"updated": 1706163231731,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "CLdrue7i49kja87QBDzSN",
				"focus": 0.46411343409713757,
				"gap": 1.056176495521271
			},
			"endBinding": {
				"elementId": "xphzrAFJmNv5V7Zj7k0l_",
				"focus": -0.425226064112459,
				"gap": 1.8657548786658253
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
			"version": 753,
			"versionNonce": 433654188,
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
			"updated": 1706163231732,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "CLdrue7i49kja87QBDzSN",
				"focus": 0.3166841665687965,
				"gap": 3.3687806638551763
			},
			"endBinding": {
				"elementId": "7KvVIU7ufc6gIYoNuaoyv",
				"focus": -0.11762472551238423,
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
			"version": 787,
			"versionNonce": 172723884,
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
			"updated": 1706163231733,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "CLdrue7i49kja87QBDzSN",
				"focus": -0.28767993246922224,
				"gap": 1.9851293342437373
			},
			"endBinding": {
				"elementId": "7y0_8af0ZH_KEUw5oi7Pm",
				"focus": -0.09856773327461703,
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
			"version": 660,
			"versionNonce": 161534892,
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
			"updated": 1706163231734,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "CLdrue7i49kja87QBDzSN",
				"focus": -0.45562589427303624,
				"gap": 1.518539697256898
			},
			"endBinding": {
				"elementId": "YGYy6YOQVch2RUZqQiJxT",
				"focus": 0.4019006378744657,
				"gap": 4.493738345920178
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
			"version": 1138,
			"versionNonce": 1496393620,
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
			"updated": 1706163231228,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 642,
			"versionNonce": 1364137236,
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
			"updated": 1706163231228,
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
			"version": 1178,
			"versionNonce": 978539156,
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
			"updated": 1706163231228,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 650,
			"versionNonce": 1123278868,
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
			"updated": 1706163231228,
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
			"version": 1210,
			"versionNonce": 1395047828,
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
			"updated": 1706163231228,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 641,
			"versionNonce": 1679944468,
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
			"updated": 1706163231228,
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
			"version": 1266,
			"versionNonce": 1482385556,
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
			"updated": 1706163231228,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 640,
			"versionNonce": 1401501204,
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
			"updated": 1706163231229,
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
			"version": 1199,
			"versionNonce": 312562580,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 643,
			"versionNonce": 1138344212,
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
			"updated": 1706163231229,
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
			"version": 1233,
			"versionNonce": 1588100756,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 644,
			"versionNonce": 2076412948,
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
			"updated": 1706163231229,
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
			"version": 1292,
			"versionNonce": 757131668,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 661,
			"versionNonce": 1442223892,
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
			"updated": 1706163231229,
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
			"version": 1327,
			"versionNonce": 45782164,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 643,
			"versionNonce": 1092805140,
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
			"updated": 1706163231229,
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
			"version": 1153,
			"versionNonce": 2015723412,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 607,
			"versionNonce": 1073245460,
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
			"updated": 1706163231229,
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
			"version": 1188,
			"versionNonce": 974236308,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 605,
			"versionNonce": 1764177940,
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
			"updated": 1706163231229,
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
			"version": 1228,
			"versionNonce": 154080660,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 607,
			"versionNonce": 1734296340,
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
			"updated": 1706163231229,
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
			"version": 1280,
			"versionNonce": 976076948,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 604,
			"versionNonce": 2035322388,
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
			"updated": 1706163231229,
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
			"version": 1145,
			"versionNonce": 901622676,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 614,
			"versionNonce": 1907038484,
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
			"updated": 1706163231229,
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
			"version": 1179,
			"versionNonce": 2022626964,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 615,
			"versionNonce": 924771348,
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
			"updated": 1706163231229,
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
			"version": 1219,
			"versionNonce": 324092308,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 615,
			"versionNonce": 1146875668,
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
			"updated": 1706163231229,
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
			"version": 1272,
			"versionNonce": 716500116,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 613,
			"versionNonce": 672283156,
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
			"updated": 1706163231229,
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
			"version": 787,
			"versionNonce": 2003425172,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 796,
			"versionNonce": 82953492,
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
			"updated": 1706163231229,
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
			"version": 795,
			"versionNonce": 1176502932,
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
			"updated": 1706163231229,
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
			"version": 235,
			"versionNonce": 296390676,
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
			"updated": 1706163231229,
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
			"version": 1663,
			"versionNonce": 874610220,
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
			"updated": 1706163231737,
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
			"version": 866,
			"versionNonce": 418159380,
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
			"updated": 1706163231229,
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
			"version": 714,
			"versionNonce": 5249172,
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
			"updated": 1706163231229,
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
			"version": 1614,
			"versionNonce": 2036852244,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1648,
			"versionNonce": 1764361108,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1689,
			"versionNonce": 617233428,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1741,
			"versionNonce": 1641126292,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 950,
			"versionNonce": 286344980,
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
			"updated": 1706163231229,
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
			"version": 153,
			"versionNonce": 325116716,
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
			"updated": 1706163231739,
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
			"version": 837,
			"versionNonce": 424776212,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 846,
			"versionNonce": 922627988,
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
			"updated": 1706163231229,
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
			"version": 845,
			"versionNonce": 3874068,
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
			"updated": 1706163231229,
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
			"version": 764,
			"versionNonce": 1048468116,
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
			"updated": 1706163231229,
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
			"version": 1664,
			"versionNonce": 478013460,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1698,
			"versionNonce": 2117059988,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1739,
			"versionNonce": 869219860,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1791,
			"versionNonce": 216423316,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1001,
			"versionNonce": 1077790996,
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
			"updated": 1706163231229,
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
			"version": 255,
			"versionNonce": 466290732,
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
			"updated": 1706163231740,
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
			"version": 826,
			"versionNonce": 616928276,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 835,
			"versionNonce": 2023879060,
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
			"updated": 1706163231229,
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
			"version": 834,
			"versionNonce": 471244564,
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
			"updated": 1706163231229,
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
			"version": 753,
			"versionNonce": 395943060,
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
			"updated": 1706163231229,
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
			"version": 1654,
			"versionNonce": 1960897044,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1686,
			"versionNonce": 299136276,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1728,
			"versionNonce": 1772175380,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1780,
			"versionNonce": 2099781012,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 991,
			"versionNonce": 116869908,
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
			"updated": 1706163231229,
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
			"version": 235,
			"versionNonce": 296742188,
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
			"updated": 1706163231742,
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
			"version": 1547,
			"versionNonce": 143037972,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1583,
			"versionNonce": 15905684,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1621,
			"versionNonce": 807526036,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1673,
			"versionNonce": 935479700,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1530,
			"versionNonce": 1164703508,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 401,
			"versionNonce": 478409876,
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
			"updated": 1706163231229,
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
			"version": 1566,
			"versionNonce": 448807444,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 458,
			"versionNonce": 1997987732,
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
			"updated": 1706163231229,
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
			"version": 1608,
			"versionNonce": 431869204,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 456,
			"versionNonce": 1948977812,
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
			"updated": 1706163231229,
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
			"version": 1656,
			"versionNonce": 1494521876,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 455,
			"versionNonce": 1416656276,
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
			"updated": 1706163231229,
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
			"version": 1402,
			"versionNonce": 57975572,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1225,
			"versionNonce": 625937300,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1271,
			"versionNonce": 2068330132,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1320,
			"versionNonce": 1538016276,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1079,
			"versionNonce": 1829850900,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1117,
			"versionNonce": 1794087444,
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
			"updated": 1706163231229,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1156,
			"versionNonce": 2012685588,
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
			"updated": 1706163231230,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1207,
			"versionNonce": 1255665684,
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
			"updated": 1706163231230,
			"link": null,
			"locked": false
		},
		{
			"type": "ellipse",
			"version": 581,
			"versionNonce": 776076052,
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
			"updated": 1706163231230,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 557,
			"versionNonce": 66680980,
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
			"updated": 1706163231230,
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
			"version": 580,
			"versionNonce": 15025684,
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
			"updated": 1706163231230,
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
			"version": 407,
			"versionNonce": 1509647252,
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
			"updated": 1706163231230,
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
			"version": 713,
			"versionNonce": 896651540,
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
			"updated": 1706163231230,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 671,
			"versionNonce": 1528281748,
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
			"updated": 1706163231230,
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
			"version": 586,
			"versionNonce": 1700762156,
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
			"updated": 1706163231744,
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
			"version": 362,
			"versionNonce": 200353172,
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
			"updated": 1706163231230,
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
			"version": 283,
			"versionNonce": 1734300436,
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
			"updated": 1706163231230,
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
			"version": 280,
			"versionNonce": 1605095572,
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
			"updated": 1706163231230,
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
			"version": 1060,
			"versionNonce": 858388268,
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
			"updated": 1706163231747,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "4rjexAtlOYI-qgPCgBX1P",
				"focus": 0.3815010707788637,
				"gap": 1.207883962776009
			},
			"endBinding": {
				"elementId": "ynNVa6RY3E2WTsAukMm_c",
				"focus": -0.4576642335766534,
				"gap": 1.25
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
			"version": 971,
			"versionNonce": 666513836,
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
			"updated": 1706163231748,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "ynNVa6RY3E2WTsAukMm_c",
				"focus": -0.3321242825998672,
				"gap": 3.75
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
			"version": 1281,
			"versionNonce": 537048748,
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
			"updated": 1706163231748,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "7EfzfZFiixgD6915Am6Cv",
				"focus": 0.04916065451687672,
				"gap": 1.0000000000001137
			},
			"endBinding": {
				"elementId": "ynNVa6RY3E2WTsAukMm_c",
				"focus": 0.2604295889978645,
				"gap": 1.419490151500895
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
			"version": 1254,
			"versionNonce": 699268012,
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
			"updated": 1706163231749,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "7B4Y93ba_dsM8fQWaZdd3",
				"focus": -0.20189137607087285,
				"gap": 1.1881601324370195
			},
			"endBinding": {
				"elementId": "ynNVa6RY3E2WTsAukMm_c",
				"focus": 0.457450220344579,
				"gap": 2.863327781065209
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
			"version": 679,
			"versionNonce": 1527513260,
			"isDeleted": false,
			"id": "vRQxJjxiPi7S9Zp5uRvRo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -663.4499193818451,
			"y": 1525.9658014835038,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.16301279015879,
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
			"updated": 1706163231749,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "ynNVa6RY3E2WTsAukMm_c",
				"focus": 0.46411343409714445,
				"gap": 1.0561764955211856
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
			"version": 1227,
			"versionNonce": 1986839980,
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
			"updated": 1706163231750,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "ynNVa6RY3E2WTsAukMm_c",
				"focus": 0.3166841665687963,
				"gap": 3.3687806638552047
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
			"version": 1261,
			"versionNonce": 1780501164,
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
			"updated": 1706163231751,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "ynNVa6RY3E2WTsAukMm_c",
				"focus": -0.28767993246922235,
				"gap": 1.9851293342437657
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
			"version": 1134,
			"versionNonce": 1349947308,
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
			"updated": 1706163231751,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "ynNVa6RY3E2WTsAukMm_c",
				"focus": -0.45562589427303674,
				"gap": 1.5185396972569833
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
			"version": 945,
			"versionNonce": 171854356,
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
			"updated": 1706163231230,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 954,
			"versionNonce": 1502865300,
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
			"updated": 1706163231230,
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
			"version": 953,
			"versionNonce": 928634132,
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
			"updated": 1706163231230,
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
			"version": 393,
			"versionNonce": 285610644,
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
			"updated": 1706163231230,
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
			"version": 1992,
			"versionNonce": 283097644,
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
			"updated": 1706163231752,
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
			"version": 1026,
			"versionNonce": 740916628,
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
			"updated": 1706163231230,
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
			"version": 872,
			"versionNonce": 248294164,
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
			"updated": 1706163231230,
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
			"version": 1772,
			"versionNonce": 1605249172,
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
			"updated": 1706163231230,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1806,
			"versionNonce": 1652815380,
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
			"updated": 1706163231230,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1847,
			"versionNonce": 1184579220,
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
			"updated": 1706163231230,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1899,
			"versionNonce": 1465797652,
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
			"updated": 1706163231230,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1110,
			"versionNonce": 1197713812,
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
			"updated": 1706163231230,
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
			"version": 653,
			"versionNonce": 1254104876,
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
			"updated": 1706163231754,
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
			"version": 995,
			"versionNonce": 2068665492,
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
			"updated": 1706163231230,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1004,
			"versionNonce": 425566740,
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
			"updated": 1706163231230,
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
			"version": 1003,
			"versionNonce": 2064138132,
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
			"updated": 1706163231230,
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
			"version": 922,
			"versionNonce": 1484991764,
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
			"updated": 1706163231230,
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
			"version": 1822,
			"versionNonce": 1933863572,
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
			"updated": 1706163231230,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1856,
			"versionNonce": 1845622804,
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
			"updated": 1706163231230,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1897,
			"versionNonce": 1677754516,
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
			"updated": 1706163231230,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1949,
			"versionNonce": 1523273236,
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
			"updated": 1706163231230,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1168,
			"versionNonce": 434138004,
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
			"updated": 1706163231230,
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
			"version": 755,
			"versionNonce": 965428268,
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
			"updated": 1706163231755,
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
			"version": 984,
			"versionNonce": 1124177556,
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
			"updated": 1706163231230,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 993,
			"versionNonce": 624534548,
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
			"updated": 1706163231230,
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
			"version": 992,
			"versionNonce": 1880359316,
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
			"updated": 1706163231230,
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
			"version": 911,
			"versionNonce": 2059841300,
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
			"updated": 1706163231230,
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
			"version": 1812,
			"versionNonce": 1170713748,
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
			"updated": 1706163231230,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1844,
			"versionNonce": 2093782932,
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
			"updated": 1706163231230,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1886,
			"versionNonce": 1641202324,
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
			"updated": 1706163231230,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1938,
			"versionNonce": 688214036,
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
			"updated": 1706163231230,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1151,
			"versionNonce": 1435118996,
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
			"updated": 1706163231230,
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
			"version": 735,
			"versionNonce": 831596844,
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
			"updated": 1706163231757,
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
			"version": 1185,
			"versionNonce": 1285740692,
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
			"updated": 1706163231230,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1220,
			"versionNonce": 761439764,
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
			"updated": 1706163231230,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1261,
			"versionNonce": 1338819476,
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
			"updated": 1706163231230,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1312,
			"versionNonce": 706162964,
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
			"updated": 1706163231230,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1185,
			"versionNonce": 2075651732,
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
			"updated": 1706163231230,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1220,
			"versionNonce": 627375124,
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
			"updated": 1706163231230,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1261,
			"versionNonce": 18110868,
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
			"updated": 1706163231230,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1312,
			"versionNonce": 972818196,
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
			"updated": 1706163231230,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1216,
			"versionNonce": 613549204,
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
			"updated": 1706163231230,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1251,
			"versionNonce": 378294804,
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
			"updated": 1706163231230,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1292,
			"versionNonce": 1054928788,
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
			"updated": 1706163231230,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1343,
			"versionNonce": 2110119188,
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
			"updated": 1706163231230,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1010,
			"versionNonce": 1018239636,
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
			"updated": 1706163231230,
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
			"version": 1047,
			"versionNonce": 1180215316,
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
			"updated": 1706163231230,
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
			"version": 1036,
			"versionNonce": 515016084,
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
			"updated": 1706163231230,
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
			"version": 1042,
			"versionNonce": 1525986068,
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
			"updated": 1706163231230,
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
			"version": 322,
			"versionNonce": 1986732972,
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
			"updated": 1706163231760,
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
			"version": 284,
			"versionNonce": 977927700,
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
			"updated": 1706163231230,
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
			"version": 205,
			"versionNonce": 1980308372,
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
			"updated": 1706163231230,
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
			"version": 202,
			"versionNonce": 1997048084,
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
			"updated": 1706163231230,
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
			"version": 858,
			"versionNonce": 1354647188,
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
			"updated": 1706163231230,
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
			"version": 371,
			"versionNonce": 937448468,
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
			"updated": 1706163231230,
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
			"version": 997,
			"versionNonce": 1877794452,
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
			"updated": 1706163233215,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1032,
			"versionNonce": 628878356,
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
			"updated": 1706163233215,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1073,
			"versionNonce": 1087195540,
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
			"updated": 1706163233215,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1124,
			"versionNonce": 1964439316,
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
			"updated": 1706163233215,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1059,
			"versionNonce": 516879508,
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
			"updated": 1706163233215,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1094,
			"versionNonce": 464208404,
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
			"updated": 1706163233215,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1135,
			"versionNonce": 581033876,
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
			"updated": 1706163233215,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1186,
			"versionNonce": 468241684,
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
			"updated": 1706163233215,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1049,
			"versionNonce": 2029390484,
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
			"updated": 1706163233215,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1084,
			"versionNonce": 209688596,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1125,
			"versionNonce": 1652258196,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1176,
			"versionNonce": 404726548,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1032,
			"versionNonce": 870457492,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1067,
			"versionNonce": 2105077268,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1108,
			"versionNonce": 1440353172,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1159,
			"versionNonce": 255555860,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 358,
			"versionNonce": 1158887060,
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
			"updated": 1706163233216,
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
			"version": 691,
			"versionNonce": 873939988,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 204,
			"versionNonce": 306028948,
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
			"updated": 1706163233216,
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
			"version": 724,
			"versionNonce": 1723617044,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 200,
			"versionNonce": 1644776596,
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
			"updated": 1706163233216,
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
			"version": 765,
			"versionNonce": 903518740,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 198,
			"versionNonce": 1831221140,
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
			"updated": 1706163233216,
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
			"version": 816,
			"versionNonce": 1143088404,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 199,
			"versionNonce": 4481684,
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
			"updated": 1706163233216,
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
			"version": 751,
			"versionNonce": 1212346388,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 197,
			"versionNonce": 2081672596,
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
			"updated": 1706163233216,
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
			"version": 786,
			"versionNonce": 216857364,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 197,
			"versionNonce": 1430550676,
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
			"updated": 1706163233216,
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
			"version": 827,
			"versionNonce": 1892697620,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 198,
			"versionNonce": 344351636,
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
			"updated": 1706163233216,
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
			"version": 878,
			"versionNonce": 1721553172,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 198,
			"versionNonce": 1451855508,
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
			"updated": 1706163233216,
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
			"version": 743,
			"versionNonce": 1963105300,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 197,
			"versionNonce": 1274935700,
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
			"updated": 1706163233216,
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
			"version": 776,
			"versionNonce": 917612308,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 199,
			"versionNonce": 965977236,
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
			"updated": 1706163233216,
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
			"version": 819,
			"versionNonce": 1515844116,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 201,
			"versionNonce": 2012909460,
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
			"updated": 1706163233216,
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
			"version": 870,
			"versionNonce": 581664020,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 197,
			"versionNonce": 1944238740,
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
			"updated": 1706163233216,
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
			"version": 724,
			"versionNonce": 1716930580,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 196,
			"versionNonce": 771499412,
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
			"updated": 1706163233216,
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
			"version": 759,
			"versionNonce": 269112084,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 198,
			"versionNonce": 989253780,
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
			"updated": 1706163233216,
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
			"version": 800,
			"versionNonce": 511155732,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 197,
			"versionNonce": 1132641172,
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
			"updated": 1706163233216,
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
			"version": 851,
			"versionNonce": 609102100,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 197,
			"versionNonce": 72345236,
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
			"updated": 1706163233216,
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
			"version": 539,
			"versionNonce": 1212019732,
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
			"updated": 1706163233216,
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
			"version": 862,
			"versionNonce": 1309561236,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 378,
			"versionNonce": 1157037844,
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
			"updated": 1706163233216,
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
			"version": 924,
			"versionNonce": 91094164,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 371,
			"versionNonce": 1764313620,
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
			"updated": 1706163233216,
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
			"version": 916,
			"versionNonce": 589227924,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 371,
			"versionNonce": 394581268,
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
			"updated": 1706163233216,
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
			"version": 897,
			"versionNonce": 869339796,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 370,
			"versionNonce": 1186570260,
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
			"updated": 1706163233216,
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
			"version": 923,
			"versionNonce": 1479835028,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 400,
			"versionNonce": 24619796,
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
			"updated": 1706163233216,
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
			"version": 985,
			"versionNonce": 1157179540,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 397,
			"versionNonce": 1718547988,
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
			"updated": 1706163233216,
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
			"version": 975,
			"versionNonce": 1120867220,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 399,
			"versionNonce": 676299028,
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
			"updated": 1706163233216,
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
			"version": 958,
			"versionNonce": 778452628,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 398,
			"versionNonce": 231296020,
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
			"updated": 1706163233216,
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
			"version": 1002,
			"versionNonce": 2020518292,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 436,
			"versionNonce": 1905022740,
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
			"updated": 1706163233216,
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
			"version": 1065,
			"versionNonce": 630740116,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 436,
			"versionNonce": 1112056340,
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
			"updated": 1706163233216,
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
			"version": 1057,
			"versionNonce": 1318272916,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 439,
			"versionNonce": 44969236,
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
			"updated": 1706163233216,
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
			"version": 1038,
			"versionNonce": 537881236,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 435,
			"versionNonce": 1231878164,
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
			"updated": 1706163233216,
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
			"version": 1073,
			"versionNonce": 1522324884,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 457,
			"versionNonce": 1093993236,
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
			"updated": 1706163233216,
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
			"version": 1135,
			"versionNonce": 1397457044,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 455,
			"versionNonce": 683036180,
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
			"updated": 1706163233216,
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
			"version": 1127,
			"versionNonce": 1919642516,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 454,
			"versionNonce": 1386273044,
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
			"updated": 1706163233216,
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
			"version": 1108,
			"versionNonce": 885823124,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 454,
			"versionNonce": 631546900,
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
			"updated": 1706163233216,
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
			"version": 154,
			"versionNonce": 723452308,
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
			"updated": 1706163233216,
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
			"version": 209,
			"versionNonce": 477212436,
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
			"updated": 1706163233216,
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
			"version": 245,
			"versionNonce": 2048044180,
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
			"updated": 1706163233216,
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
			"version": 260,
			"versionNonce": 1169685012,
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
			"updated": 1706163233216,
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
			"version": 615,
			"versionNonce": 1515689876,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 581,
			"versionNonce": 792877844,
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
			"updated": 1706163233216,
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
			"version": 604,
			"versionNonce": 1173215380,
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
			"updated": 1706163233216,
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
			"version": 165,
			"versionNonce": 1162716692,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "ellipse",
			"version": 203,
			"versionNonce": 844612500,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 246,
			"versionNonce": 54669588,
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
			"updated": 1706163233216,
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
			"version": 193,
			"versionNonce": 2005069460,
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
			"updated": 1706163233216,
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
			"version": 584,
			"versionNonce": 1876076332,
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
			"updated": 1706163233410,
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
			"version": 238,
			"versionNonce": 1176459668,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "ellipse",
			"version": 312,
			"versionNonce": 631703316,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 294,
			"versionNonce": 1658651796,
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
			"updated": 1706163233216,
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
			"version": 172,
			"versionNonce": 1400328724,
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
			"updated": 1706163233216,
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
			"version": 392,
			"versionNonce": 734847404,
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
			"updated": 1706163233411,
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
			"version": 268,
			"versionNonce": 1005640980,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "ellipse",
			"version": 339,
			"versionNonce": 2105285268,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 174,
			"versionNonce": 902014996,
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
			"updated": 1706163233216,
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
			"version": 292,
			"versionNonce": 1757250964,
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
			"updated": 1706163233216,
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
			"version": 504,
			"versionNonce": 295423020,
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
			"updated": 1706163233413,
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
			"version": 339,
			"versionNonce": 2095067284,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "ellipse",
			"version": 397,
			"versionNonce": 473234964,
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
			"updated": 1706163233216,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 243,
			"versionNonce": 1653873556,
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
			"updated": 1706163233216,
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
			"version": 170,
			"versionNonce": 439585044,
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
			"updated": 1706163233216,
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
			"version": 174,
			"versionNonce": 1663657644,
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
			"updated": 1706163233414,
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
			"id": "2yMKYsjW",
			"type": "text",
			"x": 931.3471912335829,
			"y": 649.8325215058859,
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
			"groupIds": [
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": null,
			"seed": 1122334892,
			"version": 245,
			"versionNonce": 908044204,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1706163234429,
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
			"version": 446,
			"versionNonce": 296079916,
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
			"updated": 1706163234429,
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
			"version": 1055,
			"versionNonce": 537046188,
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
			"updated": 1706163234429,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 586,
			"versionNonce": 853554988,
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
			"updated": 1706163234429,
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
			"version": 1115,
			"versionNonce": 1453879724,
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
			"updated": 1706163234429,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 577,
			"versionNonce": 2055560236,
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
			"updated": 1706163234429,
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
			"version": 1107,
			"versionNonce": 409007788,
			"isDeleted": false,
			"id": "4BnW48CCalxbmRGylyOai",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 389.6797218792233,
			"y": 1045.9811212477455,
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
			"updated": 1706163234429,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 577,
			"versionNonce": 1558528300,
			"isDeleted": false,
			"id": "1rRBI44w",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 395.83387914092157,
			"y": 1066.4321535094439,
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
			"updated": 1706163234429,
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
			"version": 1088,
			"versionNonce": 1333541804,
			"isDeleted": false,
			"id": "c9LvHwZGtOuJoqRQRaOPs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 390.6797218792233,
			"y": 1111.9811212477455,
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
			"updated": 1706163234429,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 576,
			"versionNonce": 2052056620,
			"isDeleted": false,
			"id": "B9MmRg3c",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 396.83387914092157,
			"y": 1132.4321535094439,
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
			"updated": 1706163234429,
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
			"version": 1091,
			"versionNonce": 306856108,
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
			"updated": 1706163234429,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 623,
			"versionNonce": 521489196,
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
			"updated": 1706163234429,
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
			"version": 1152,
			"versionNonce": 588973484,
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
			"updated": 1706163234429,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 614,
			"versionNonce": 1132818476,
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
			"updated": 1706163234429,
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
			"version": 1144,
			"versionNonce": 1883146924,
			"isDeleted": false,
			"id": "URTsohB7QIdzFoxWES__a",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 462.4737003123803,
			"y": 1047.5987652129263,
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
			"updated": 1706163234429,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 614,
			"versionNonce": 200299820,
			"isDeleted": false,
			"id": "WnOUltCs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 468.6278575740786,
			"y": 1068.0497974746247,
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
			"updated": 1706163234429,
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
			"version": 1125,
			"versionNonce": 335859628,
			"isDeleted": false,
			"id": "srW4z7uo_e5_3wZG4U-zY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 463.4737003123803,
			"y": 1113.5987652129263,
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
			"updated": 1706163234429,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 613,
			"versionNonce": 1218837036,
			"isDeleted": false,
			"id": "A8FJ1ytX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 469.6278575740786,
			"y": 1134.0497974746247,
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
			"updated": 1706163234429,
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
			"version": 1082,
			"versionNonce": 1421726892,
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
			"updated": 1706163234429,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 614,
			"versionNonce": 1979080492,
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
			"updated": 1706163234430,
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
			"version": 1144,
			"versionNonce": 616143276,
			"isDeleted": false,
			"id": "kNtBLVcdl8dZKv10yunQ-",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 536.267678745537,
			"y": 982.2164091781082,
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
			"updated": 1706163234430,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 605,
			"versionNonce": 1009878060,
			"isDeleted": false,
			"id": "gLZSPaMC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 542.4218360072352,
			"y": 1002.6674414398065,
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
			"updated": 1706163234430,
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
			"version": 1136,
			"versionNonce": 575151788,
			"isDeleted": false,
			"id": "syj04QM1aUrwKsBgn7P6h",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 535.267678745537,
			"y": 1049.216409178108,
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
			"updated": 1706163234430,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 605,
			"versionNonce": 1873242412,
			"isDeleted": false,
			"id": "QluQfgo8",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 541.4218360072352,
			"y": 1069.6674414398065,
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
			"updated": 1706163234430,
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
			"version": 1117,
			"versionNonce": 398025644,
			"isDeleted": false,
			"id": "DZSV5HHCq8LsvQHwot5qa",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 536.267678745537,
			"y": 1115.216409178108,
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
			"updated": 1706163234430,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 604,
			"versionNonce": 279449132,
			"isDeleted": false,
			"id": "vuvJdsjs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 542.4218360072352,
			"y": 1135.6674414398065,
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
			"updated": 1706163234430,
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
			"version": 1076,
			"versionNonce": 2069719212,
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
			"updated": 1706163234430,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 608,
			"versionNonce": 1266905900,
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
			"updated": 1706163234430,
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
			"version": 1137,
			"versionNonce": 1870933420,
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
			"updated": 1706163234430,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 600,
			"versionNonce": 2022283308,
			"isDeleted": false,
			"id": "4movLlf4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 613.5981704752112,
			"y": 1001.0497974746247,
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
			"updated": 1706163234430,
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
			"version": 1128,
			"versionNonce": 1115533996,
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
			"updated": 1706163234430,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 600,
			"versionNonce": 470449452,
			"isDeleted": false,
			"id": "NHhCevxK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 612.5981704752112,
			"y": 1068.0497974746247,
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
			"updated": 1706163234430,
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
			"version": 1109,
			"versionNonce": 1855584172,
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
			"updated": 1706163234430,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 599,
			"versionNonce": 1716920876,
			"isDeleted": false,
			"id": "Rt7KqTsm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 613.5981704752112,
			"y": 1134.0497974746247,
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
			"updated": 1706163234430,
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
			"version": 984,
			"versionNonce": 438893740,
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
			"updated": 1706163234430,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1019,
			"versionNonce": 867993388,
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
			"updated": 1706163234430,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1060,
			"versionNonce": 393920940,
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
			"updated": 1706163234430,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1111,
			"versionNonce": 210611244,
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
			"updated": 1706163234430,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1002,
			"versionNonce": 1692354220,
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
			"updated": 1706163234430,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1037,
			"versionNonce": 622432556,
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
			"updated": 1706163234430,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1078,
			"versionNonce": 749112236,
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
			"updated": 1706163234430,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1129,
			"versionNonce": 1571829292,
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
			"updated": 1706163234430,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1011,
			"versionNonce": 1159762092,
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
			"updated": 1706163234430,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1044,
			"versionNonce": 1117887276,
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
			"updated": 1706163234430,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1085,
			"versionNonce": 815617452,
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
			"updated": 1706163234430,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1136,
			"versionNonce": 205373484,
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
			"updated": 1706163234430,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1038,
			"versionNonce": 493673132,
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
			"updated": 1706163234430,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1073,
			"versionNonce": 517252396,
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
			"updated": 1706163234430,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1114,
			"versionNonce": 1709121452,
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
			"updated": 1706163234430,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 1165,
			"versionNonce": 179718700,
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
			"updated": 1706163234430,
			"link": null,
			"locked": false
		},
		{
			"id": "psKM6JJuNlHbfZEcT3wJB",
			"type": "rectangle",
			"x": 762.7183428638057,
			"y": 998.0204785191877,
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
				"1OaDZMU9y-vfLSB_yY3km",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"seed": 2093142676,
			"version": 282,
			"versionNonce": 272901292,
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
			"updated": 1706163234430,
			"link": null,
			"locked": false
		},
		{
			"id": "4zQdRfuT",
			"type": "text",
			"x": 778.8947825156183,
			"y": 1010.9616302406382,
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
				"1OaDZMU9y-vfLSB_yY3km",
				"HUTLl2yqXnfcGMEvF9oB2"
			],
			"frameId": null,
			"roundness": null,
			"seed": 28947628,
			"version": 131,
			"versionNonce": 490453292,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1706163234430,
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
			"version": 226,
			"versionNonce": 776188844,
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
			"updated": 1706163234430,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 857,
			"versionNonce": 23617068,
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
			"updated": 1706163234430,
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
			"version": 886,
			"versionNonce": 982734996,
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
			"updated": 1706163234623,
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
			"version": 367,
			"versionNonce": 611304236,
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
			"updated": 1706163234430,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 516,
			"versionNonce": 107380140,
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
			"updated": 1706163234430,
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
			"version": 384,
			"versionNonce": 513927212,
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
			"updated": 1706163234430,
			"link": null,
			"locked": false
		},
		{
			"type": "ellipse",
			"version": 447,
			"versionNonce": 554435244,
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
			"updated": 1706163234430,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 493,
			"versionNonce": 877579564,
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
			"updated": 1706163234430,
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
			"version": 475,
			"versionNonce": 433342380,
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
			"updated": 1706163234430,
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
			"version": 278,
			"versionNonce": 1439068716,
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
			"updated": 1706163234430,
			"link": null,
			"locked": false
		},
		{
			"type": "ellipse",
			"version": 415,
			"versionNonce": 525915948,
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
			"updated": 1706163234430,
			"link": null,
			"locked": false
		},
		{
			"type": "ellipse",
			"version": 444,
			"versionNonce": 1498807340,
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
			"updated": 1706163234430,
			"link": null,
			"locked": false
		},
		{
			"type": "ellipse",
			"version": 507,
			"versionNonce": 2014175532,
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
			"updated": 1706163234430,
			"link": null,
			"locked": false
		},
		{
			"type": "arrow",
			"version": 551,
			"versionNonce": 1537033108,
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
			"updated": 1706163234625,
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
			"version": 662,
			"versionNonce": 761818772,
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
			"updated": 1706163234625,
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
			"version": 359,
			"versionNonce": 1621416340,
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
			"updated": 1706163234625,
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
		"scrollX": 1385.6713355720742,
		"scrollY": -421.52863955722,
		"zoom": {
			"value": 0.39999999999999997
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