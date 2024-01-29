---

excalidraw-plugin: parsed
tags: [excalidraw]

---
==⚠  Switch to EXCALIDRAW VIEW in the MORE OPTIONS menu of this document. ⚠==


# Text Elements
128-bit Master Key MK ^nwtov0Lc

K15 ^AMEZ8nae

K11 ^5ZISkYDh

K7 ^CriJgnf6

K3 ^kJvwx5X9

K2 ^3HXf68Wv

K1 ^q7yYPo6v

K0 ^yc3p5lXc

Whitening Key Bytes WK ^Y3Uiu4uQ

K12 ^r2fRCGnE

K13 ^iGfSOlzm

K14 ^z7UarLfF

word 3 ^21Ya4U5J

word 2 ^F2f8Cmud

word 1 ^f8tn4dsc

word 0 ^QLQM6ZVN

for i = 0, 1, 2, 3:
    WK_i = K_{i +12}
for i = 4, 5, 6, 7:
    WK_i = K_{i-4} ^qzXCbpno

WK1 ^5vrgLUpa

WK3 ^ii75Jp5m

WK2 ^SE5Ht5Be

WK0 ^8gnoXASU

WK5 ^Gl8yHpSy

WK7 ^A6NDNEJs

WK6 ^0sqsbG2Q

WK4 ^rIeAtmzo

1byte ^5QVzIBmg

= ^JLw99lUt

Delta Bytes ^vw8LZHIe

0 ^BJnpjelT

1 ^C5Ma0C5K

0 ^ZvuGNbS5

1 ^nkrq4SK4

1 ^pwE0oim7

0 ^Rj3TuW50

1 ^ev2Xbb7u

s[7] ^JcDSnJkC

s[0] ^vYkVe7J6

s[6] ^38wS5hjt

s[3] ^81nsNHK2

(1) s0 = 0, s1 = 1, s2 = 0, s3 = 1, s4 = 1, s5 = 0, s6 = 1
    δ0 = s6∥s5∥s4∥s3∥s2∥s1∥s0 ^q5Dj89Do

(2) for i = 1 to 127:
        s_{i+6} = s_{i+2} xor s_{i-1}
        δ_i = s_{i+6}∥s_{i+5}∥s_{i+4}∥s_{i+3}∥s_{i+2}∥s_{i+1}∥s_i ^qavmzGsk

LSFR x^7+x^3+1 ^5G07cnB7

s[134] ^In9MQJbI

for (int i = 1; i <= 127; i++) {
    
    ...

    for (int j = 0; j < 7; j++) {
        delta |= (u32)(s[i + j] << j);
    }

   ...
} ^iEMfONfM

δ0 = s6∥s5∥s4∥s3∥s2∥s1∥s0 ^8ZXNLvfM

s[6] ^BDJfRsvO

δ_i: 7-bit ^X43ZvzjB

<< 6 | ^sYdy8y7b

s[5] ^Sb7aCKHF

<< 5 | ^Q0BvtAB6

s[4] ^vssxfXeV

<< 4 | ^gPnakFYp

s[3] ^dwPMxX9W

<< 3 | ^9yqoORQj

s[2] ^d32afSPT

<< 2 | ^AKquf8p4

s[1] ^97gArsBF

<< 1 | ^rjS3MkdT

s[0] ^F1WPAoQf

<< 0 | ^T0bVmNRd

δ1 = s7∥s6∥s5∥s4∥s3∥s2∥s1 ^Q80bKSYa

δ2 = s8∥s7∥s6∥s5∥s4∥s3∥s2 ^s6gguK0c

δ3 = s9∥s8∥s7∥s6∥s5∥s4∥s3 ^1c0pfTnM

.
.
. ^4Bezzzjq

δ127 = s133∥s132∥s131∥s130∥s129∥s128∥s127 ^nmRkaqEs

δ126 = s132∥s131∥s130∥s129∥s128∥s127∥s126 ^fYkibvyr

SK3 ^Hqq3W1ye

SK2 ^CB1iLeTH

SK1 ^BFHijCTN

SK0 ^ri2dC9dV

for (int i = 1; i <= 127; i++) {
    
    ...

    for (int j = 0; j < 8; j++) {
        int index = (16 * i + j) % 128;
        if (j < 8) {
            SK[index] = MK[(j - i) & 7] + delta;
        } else {
            SK[index] = MK[((j - i) & 7) + 8] + delta;
        }
    }

    ...
} ^TMyoRmvI

SubKey Bytes SK ^FNy1Ts6W

K13 ^hPHEqCtB

K15 ^eKexbMnq

K14 ^rduUgoob

K12 ^hvmzZc3D

K11 ^1MpJzdul

K7 ^5PU6uSwr

K1 ^18dCOLqj

K3 ^gQMVZIw8

K2 ^6glpIZCP

K0 ^8dZovEvn

δ0 ^A4z3dYHn

δ2 ^LeBEztZC

δ1 ^CNiX8anS

δ3 ^iR5ybc7H

δ5 ^WV1IhyA4

δ6 ^df66r8Sy

δ8 ^AtnS5346

δ7 ^4hrQBUga

δ4 ^4D5Msh97

K4 ^bjTnpKZX

K5 ^SbtiJw9M

K6 ^B3RszNtC

K8 ^mTR1Q4yt

δ14 ^N7obltZ1

δ15 ^AcG2jzEf

δ13 ^NlRZrglL

δ11 ^HtlqiIXR

δ10 ^s11jIehP

δ9 ^oQRJPuYM

δ12 ^8vE9McAu

SK0 ^S1LUpqOV

SK1 ^tftmasPD

SK2 ^blwnIOBo

SK4 ^QbYWlE5L

SK3 ^OVOkgLYO

SK1 ^lQo9ysGv

SK5 ^KnQAcpBC

SK7 ^sW2HS8Gn

SK6 ^z28RSTvt

SK7 ^RCF1W9Sz

SK15 ^AwqVmo46

SK14 ^9EldL8HI

SK13 ^jka3pbbc

SK11 ^Xf35fjKE

SK12 ^00zJdro0

SK10 ^alkDqRaX

SK9 ^25zD6yu3

SK8 ^jVkYUmTz

K4 ^zof5Fqxr

K7 ^eucqRqaA

K5 ^ugtuYIrW

K3 ^GZfYThku

K0 ^xvuSZQBo

K2 ^FfVN3wKz

K1 ^0aONOF7d

K6 ^2G4V57Yq

δ16 ^konRUdm3

δ18 ^yUrrojd2

δ17 ^oazoeTBw

δ19 ^FbI3hyEQ

δ21 ^DTSch2ig

δ22 ^6yRUIviH

δ31 ^GWlZEJtO

δ23 ^8UvZMpu7

δ20 ^p6FFfasH

δ25 ^A6lXD134

δ24 ^FvonKt3g

δ26 ^Z8O8GMDg

δ28 ^F9aojpgS

δ29 ^YFhWCWt4

δ30 ^6eaSDgY5

δ27 ^DyVtFusZ

SK16 ^QyF1iQIA

SK17 ^Vu8313mK

SK18 ^JMSp1dMv

SK20 ^NCdlDp84

SK19 ^o3fCXe7Y

SK21 ^FpDrg8GY

SK22 ^io69TSik

SK23 ^C7B0UV5l

SK15 ^HMkeVuyl

SK14 ^ziyKUjfa

SK13 ^emOc0fwk

SK11 ^K719VHWR

SK12 ^QRjQquFS

SK10 ^TJ7oy2fo

SK9 ^ZJnAIRfK

SK8 ^evOSgzJ3

SK24 ^9I7SlFpi

SK25 ^PKD7VQ4n

SK26 ^G6Ibn3ay

SK28 ^tjiYQQZp

SK27 ^KyclLfJA

SK29 ^p9y0lIx9

SK30 ^5OWRv612

SK31 ^29D4hxzh

K9 ^jDWT0gAj

K10 ^yJtvtbVc

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
			"version": 158,
			"versionNonce": 1447424888,
			"isDeleted": false,
			"id": "hP6iNDuT4sZ29HhqaCcQX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -113.75,
			"y": -174.25,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 300401939,
			"groupIds": [
				"NbixMI9tCnk1LbFyWkMCz"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "iGfSOlzm"
				},
				{
					"id": "h_R9ZFzPK4we19vsxxRQP",
					"type": "arrow"
				}
			],
			"updated": 1706531926410,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 36,
			"versionNonce": 266280968,
			"isDeleted": false,
			"id": "iGfSOlzm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -93.39998626708984,
			"y": -152.75,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 31.299972534179688,
			"height": 25,
			"seed": 1083730835,
			"groupIds": [
				"NbixMI9tCnk1LbFyWkMCz"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926410,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "K13",
			"rawText": "K13",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "hP6iNDuT4sZ29HhqaCcQX",
			"originalText": "K13",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 120,
			"versionNonce": 958973048,
			"isDeleted": false,
			"id": "emiOg9Kzj4hvOOXNJcrDK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -259.75,
			"y": -173.25,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1328245533,
			"groupIds": [
				"NbixMI9tCnk1LbFyWkMCz"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "AMEZ8nae"
				},
				{
					"id": "z9YEJasz4McgmN7NMIRa6",
					"type": "arrow"
				}
			],
			"updated": 1706531926410,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 37,
			"versionNonce": 1577967368,
			"isDeleted": false,
			"id": "AMEZ8nae",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -238.76998901367188,
			"y": -151.75,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 30.03997802734375,
			"height": 25,
			"seed": 498879069,
			"groupIds": [
				"NbixMI9tCnk1LbFyWkMCz"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926410,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "K15",
			"rawText": "K15",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "emiOg9Kzj4hvOOXNJcrDK",
			"originalText": "K15",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 163,
			"versionNonce": 965309816,
			"isDeleted": false,
			"id": "Eg_Fml2dU9ZhD4FzclpET",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -186.75,
			"y": -173.25,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 275241779,
			"groupIds": [
				"NbixMI9tCnk1LbFyWkMCz"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "z7UarLfF"
				},
				{
					"id": "AQxw1VZK3bXYb2moutDzK",
					"type": "arrow"
				}
			],
			"updated": 1706531926410,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 36,
			"versionNonce": 369933832,
			"isDeleted": false,
			"id": "z7UarLfF",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -165.989990234375,
			"y": -151.75,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 30.47998046875,
			"height": 25,
			"seed": 594681277,
			"groupIds": [
				"NbixMI9tCnk1LbFyWkMCz"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926410,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "K14",
			"rawText": "K14",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "Eg_Fml2dU9ZhD4FzclpET",
			"originalText": "K14",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 182,
			"versionNonce": 749471352,
			"isDeleted": false,
			"id": "lEzDo6to4jkEMDa-MOO8l",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -40.75,
			"y": -174.25,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1613624563,
			"groupIds": [
				"NbixMI9tCnk1LbFyWkMCz"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "r2fRCGnE"
				},
				{
					"id": "DtVWWExWhiOJVzA62ld7B",
					"type": "arrow"
				}
			],
			"updated": 1706531926410,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 36,
			"versionNonce": 1222098184,
			"isDeleted": false,
			"id": "r2fRCGnE",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -20.709991455078125,
			"y": -152.75,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 31.91998291015625,
			"height": 25,
			"seed": 1863216787,
			"groupIds": [
				"NbixMI9tCnk1LbFyWkMCz"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926410,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "K12",
			"rawText": "K12",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "lEzDo6to4jkEMDa-MOO8l",
			"originalText": "K12",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "text",
			"version": 112,
			"versionNonce": 525629304,
			"isDeleted": false,
			"id": "nwtov0Lc",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -499.75,
			"y": -154.25,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 229.53976440429688,
			"height": 25,
			"seed": 1392390717,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926410,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "128-bit Master Key MK",
			"rawText": "128-bit Master Key MK",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "128-bit Master Key MK",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 426,
			"versionNonce": 132832264,
			"isDeleted": false,
			"id": "lralFP5AMJyStXyBKgwvh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 179.70788519444864,
			"y": -176.72894259722426,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1581291933,
			"groupIds": [
				"dqsFX12WgUpVCechrb3f0"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706531926410,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 389,
			"versionNonce": 1707526264,
			"isDeleted": false,
			"id": "UgBo5_xmUgFQNc8bOV4E5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 33.707885194448636,
			"y": -175.72894259722426,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 160783869,
			"groupIds": [
				"dqsFX12WgUpVCechrb3f0"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "5ZISkYDh"
				}
			],
			"updated": 1706531926410,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 308,
			"versionNonce": 1430395656,
			"isDeleted": false,
			"id": "5ZISkYDh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 58.157889772085355,
			"y": -154.22894259722426,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.099990844726562,
			"height": 25,
			"seed": 177378909,
			"groupIds": [
				"dqsFX12WgUpVCechrb3f0"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926410,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "K11",
			"rawText": "K11",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "UgBo5_xmUgFQNc8bOV4E5",
			"originalText": "K11",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 431,
			"versionNonce": 734460280,
			"isDeleted": false,
			"id": "DXhyDwKT6u6IVFgF0Q-Ig",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 106.70788519444864,
			"y": -175.72894259722426,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 2081014461,
			"groupIds": [
				"dqsFX12WgUpVCechrb3f0"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706531926410,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 450,
			"versionNonce": 324631048,
			"isDeleted": false,
			"id": "E8LsLtGt9DwoDetKgOwBa",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 252.70788519444864,
			"y": -176.72894259722426,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 580674333,
			"groupIds": [
				"dqsFX12WgUpVCechrb3f0"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706531926410,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 440,
			"versionNonce": 77138552,
			"isDeleted": false,
			"id": "gx_P45wVBS54iuvtsmIxy",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 473.6657703888973,
			"y": -179.70788519444875,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 399440829,
			"groupIds": [
				"XmD7QOW43eeRBwWYn_OEJ"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706531926410,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 403,
			"versionNonce": 1965881608,
			"isDeleted": false,
			"id": "SDn7Ux-39S8xTvWxfdDde",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 327.6657703888973,
			"y": -178.70788519444875,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1666350109,
			"groupIds": [
				"XmD7QOW43eeRBwWYn_OEJ"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "CriJgnf6"
				}
			],
			"updated": 1706531926410,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 325,
			"versionNonce": 2063661944,
			"isDeleted": false,
			"id": "CriJgnf6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 352.15577588206133,
			"y": -157.20788519444875,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.019989013671875,
			"height": 25,
			"seed": 122089597,
			"groupIds": [
				"XmD7QOW43eeRBwWYn_OEJ"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926410,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "K7",
			"rawText": "K7",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "SDn7Ux-39S8xTvWxfdDde",
			"originalText": "K7",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 445,
			"versionNonce": 1849202696,
			"isDeleted": false,
			"id": "WIo5KPkCYE5oyuWJjgFc6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 400.6657703888973,
			"y": -178.70788519444875,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 829282525,
			"groupIds": [
				"XmD7QOW43eeRBwWYn_OEJ"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706531926410,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 464,
			"versionNonce": 558025848,
			"isDeleted": false,
			"id": "VGzirBg7jlO68xEjrck17",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 546.6657703888973,
			"y": -179.70788519444875,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1532540221,
			"groupIds": [
				"XmD7QOW43eeRBwWYn_OEJ"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706531926410,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 422,
			"versionNonce": 578311944,
			"isDeleted": false,
			"id": "0C-n4pinh_BR_Bj3JG_gJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 766.6447129861217,
			"y": -180.68682779167295,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 386535571,
			"groupIds": [
				"abDttRG-A0e-iMgLW4z1B"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "q7yYPo6v"
				},
				{
					"id": "tXQbPEHPGQYT-In2-SS1O",
					"type": "arrow"
				}
			],
			"updated": 1706531926410,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 99,
			"versionNonce": 555908472,
			"isDeleted": false,
			"id": "q7yYPo6v",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 793.8047166482311,
			"y": -159.18682779167295,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 17.67999267578125,
			"height": 25,
			"seed": 678870749,
			"groupIds": [
				"abDttRG-A0e-iMgLW4z1B"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926410,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "K1",
			"rawText": "K1",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "0C-n4pinh_BR_Bj3JG_gJ",
			"originalText": "K1",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 384,
			"versionNonce": 1449670152,
			"isDeleted": false,
			"id": "LgZQM1jXLHvD_pqp_07Al",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 620.6447129861217,
			"y": -179.68682779167295,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 188778035,
			"groupIds": [
				"abDttRG-A0e-iMgLW4z1B"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "kJvwx5X9"
				},
				{
					"id": "OwbqIEhtwpV6ppsJOjysJ",
					"type": "arrow"
				}
			],
			"updated": 1706531926410,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 305,
			"versionNonce": 1273237112,
			"isDeleted": false,
			"id": "kJvwx5X9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 643.7047258035045,
			"y": -158.18682779167295,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 25.879974365234375,
			"height": 25,
			"seed": 1213679571,
			"groupIds": [
				"abDttRG-A0e-iMgLW4z1B"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926410,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "K3",
			"rawText": "K3",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "LgZQM1jXLHvD_pqp_07Al",
			"originalText": "K3",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 429,
			"versionNonce": 1594111240,
			"isDeleted": false,
			"id": "rr5_quHnoV0X8sVcY-H7N",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 693.6447129861217,
			"y": -179.68682779167295,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1684329843,
			"groupIds": [
				"abDttRG-A0e-iMgLW4z1B"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "3HXf68Wv"
				},
				{
					"id": "uJswu_O3vDxyAdKfdPr_8",
					"type": "arrow"
				}
			],
			"updated": 1706531926410,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 108,
			"versionNonce": 709590904,
			"isDeleted": false,
			"id": "3HXf68Wv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 716.3947206155162,
			"y": -158.18682779167295,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 26.499984741210938,
			"height": 25,
			"seed": 565137171,
			"groupIds": [
				"abDttRG-A0e-iMgLW4z1B"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926410,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "K2",
			"rawText": "K2",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "rr5_quHnoV0X8sVcY-H7N",
			"originalText": "K2",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 446,
			"versionNonce": 298341384,
			"isDeleted": false,
			"id": "ToAn6NpCf2nagCv4lBhXd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 839.6447129861217,
			"y": -180.68682779167295,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1857007379,
			"groupIds": [
				"abDttRG-A0e-iMgLW4z1B"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "yc3p5lXc"
				},
				{
					"id": "VoQY_TEGB5GPL4p2sWhet",
					"type": "arrow"
				}
			],
			"updated": 1706531926410,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 97,
			"versionNonce": 211603576,
			"isDeleted": false,
			"id": "yc3p5lXc",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 862.6347184792858,
			"y": -159.18682779167295,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 26.019989013671875,
			"height": 25,
			"seed": 2109212275,
			"groupIds": [
				"abDttRG-A0e-iMgLW4z1B"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926410,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "K0",
			"rawText": "K0",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "ToAn6NpCf2nagCv4lBhXd",
			"originalText": "K0",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "text",
			"version": 162,
			"versionNonce": 883987208,
			"isDeleted": false,
			"id": "Y3Uiu4uQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -500.9493654308372,
			"y": 85.33915401403078,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 231.27975463867188,
			"height": 25,
			"seed": 774825181,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926410,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "Whitening Key Bytes WK",
			"rawText": "Whitening Key Bytes WK",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Whitening Key Bytes WK",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "line",
			"version": 353,
			"versionNonce": 446431608,
			"isDeleted": false,
			"id": "w-vOp5b6IboJsuz0ZMKNP",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -251.88709974988558,
			"y": -178.54435037517126,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 271.16709943114205,
			"height": 75.37857998627422,
			"seed": 1891136829,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926410,
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
					28.38933531950582,
					-40.136646486197975
				],
				[
					136.0730210141832,
					-44.05241687509536
				],
				[
					145.86244698642662,
					-75.37857998627422
				],
				[
					158.58870075034304,
					-46.010302069544
				],
				[
					249.6303622922066,
					-39.15770388897366
				],
				[
					271.16709943114205,
					-3.9157703888973856
				]
			]
		},
		{
			"type": "text",
			"version": 62,
			"versionNonce": 1849225736,
			"isDeleted": false,
			"id": "21Ya4U5J",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -139.30870106908657,
			"y": -293.08063425041917,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 66.85992431640625,
			"height": 25,
			"seed": 1305562643,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926410,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "word 3",
			"rawText": "word 3",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "word 3",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "line",
			"version": 392,
			"versionNonce": 1670189688,
			"isDeleted": false,
			"id": "ss8420fI92UFhRZrDBvV5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 46.595421732909585,
			"y": -180.46572619606167,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 271.16709943114205,
			"height": 75.37857998627422,
			"seed": 1066767187,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926410,
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
					28.38933531950582,
					-40.136646486197975
				],
				[
					136.0730210141832,
					-44.05241687509536
				],
				[
					145.86244698642662,
					-75.37857998627422
				],
				[
					158.58870075034304,
					-46.010302069544
				],
				[
					249.6303622922066,
					-39.15770388897366
				],
				[
					271.16709943114205,
					-3.9157703888973856
				]
			]
		},
		{
			"type": "text",
			"version": 103,
			"versionNonce": 895316232,
			"isDeleted": false,
			"id": "F2f8Cmud",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 159.1738204137086,
			"y": -295.0020100713096,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 67.47993469238281,
			"height": 25,
			"seed": 80589043,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926410,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "word 2",
			"rawText": "word 2",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "word 2",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "line",
			"version": 422,
			"versionNonce": 1848902520,
			"isDeleted": false,
			"id": "KJWbaMqR7M_Ejk10PXq3E",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 339.29925830298714,
			"y": -183.40255398773473,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 271.16709943114205,
			"height": 75.37857998627422,
			"seed": 783418771,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926410,
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
					28.38933531950582,
					-40.136646486197975
				],
				[
					136.0730210141832,
					-44.05241687509536
				],
				[
					145.86244698642662,
					-75.37857998627422
				],
				[
					158.58870075034304,
					-46.010302069544
				],
				[
					249.6303622922066,
					-39.15770388897366
				],
				[
					271.16709943114205,
					-3.9157703888973856
				]
			]
		},
		{
			"type": "text",
			"version": 133,
			"versionNonce": 1100615688,
			"isDeleted": false,
			"id": "f8tn4dsc",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 451.87765698378615,
			"y": -297.93883786298267,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.659942626953125,
			"height": 25,
			"seed": 874634035,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926410,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "word 1",
			"rawText": "word 1",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "word 1",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "line",
			"version": 417,
			"versionNonce": 1221907576,
			"isDeleted": false,
			"id": "ZhA06-lMYkK6SSBZc8yzo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 629.0662670813917,
			"y": -187.31832437663206,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 271.16709943114205,
			"height": 75.37857998627422,
			"seed": 1885720915,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926410,
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
					28.38933531950582,
					-40.136646486197975
				],
				[
					136.0730210141832,
					-44.05241687509536
				],
				[
					145.86244698642662,
					-75.37857998627422
				],
				[
					158.58870075034304,
					-46.010302069544
				],
				[
					249.6303622922066,
					-39.15770388897366
				],
				[
					271.16709943114205,
					-3.9157703888973856
				]
			]
		},
		{
			"type": "text",
			"version": 128,
			"versionNonce": 2062208776,
			"isDeleted": false,
			"id": "QLQM6ZVN",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 741.6446657621907,
			"y": -301.85460825188,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 66.99993896484375,
			"height": 25,
			"seed": 1827024627,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926410,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "word 0",
			"rawText": "word 0",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "word 0",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "text",
			"version": 119,
			"versionNonce": 422806904,
			"isDeleted": false,
			"id": "qzXCbpno",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -500.53851944486803,
			"y": -62.05018130547455,
			"strokeColor": "#12b886",
			"backgroundColor": "transparent",
			"width": 234.375,
			"height": 96,
			"seed": 983008403,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926410,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "for i = 0, 1, 2, 3:\n    WK_i = K_{i +12}\nfor i = 4, 5, 6, 7:\n    WK_i = K_{i-4}",
			"rawText": "for i = 0, 1, 2, 3:\n    WK_i = K_{i +12}\nfor i = 4, 5, 6, 7:\n    WK_i = K_{i-4}",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "for i = 0, 1, 2, 3:\n    WK_i = K_{i +12}\nfor i = 4, 5, 6, 7:\n    WK_i = K_{i-4}",
			"lineHeight": 1.2,
			"baseline": 91
		},
		{
			"type": "rectangle",
			"version": 175,
			"versionNonce": 1774956040,
			"isDeleted": false,
			"id": "yNy5RHOAe91FX5311TdZ3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -111.39830834680504,
			"y": 58.1227490559707,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1707843315,
			"groupIds": [
				"iOSqqse7JdWe137vMgaVt"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "5vrgLUpa"
				},
				{
					"id": "h_R9ZFzPK4we19vsxxRQP",
					"type": "arrow"
				}
			],
			"updated": 1706531926410,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 56,
			"versionNonce": 747902584,
			"isDeleted": false,
			"id": "5vrgLUpa",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -91.69829613977379,
			"y": 79.6227490559707,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 32.5999755859375,
			"height": 25,
			"seed": 2072070291,
			"groupIds": [
				"iOSqqse7JdWe137vMgaVt"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926410,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "WK1",
			"rawText": "WK1",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "yNy5RHOAe91FX5311TdZ3",
			"originalText": "WK1",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 137,
			"versionNonce": 658025736,
			"isDeleted": false,
			"id": "w0TGGdAFC6SoFGugDDgCm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -257.39830834680504,
			"y": 59.1227490559707,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1276165683,
			"groupIds": [
				"iOSqqse7JdWe137vMgaVt"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "ii75Jp5m"
				},
				{
					"id": "z9YEJasz4McgmN7NMIRa6",
					"type": "arrow"
				}
			],
			"updated": 1706531926411,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 57,
			"versionNonce": 129664888,
			"isDeleted": false,
			"id": "ii75Jp5m",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -241.79828698450035,
			"y": 80.6227490559707,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.799957275390625,
			"height": 25,
			"seed": 1918926803,
			"groupIds": [
				"iOSqqse7JdWe137vMgaVt"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926411,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "WK3",
			"rawText": "WK3",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "w0TGGdAFC6SoFGugDDgCm",
			"originalText": "WK3",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 181,
			"versionNonce": 1286458376,
			"isDeleted": false,
			"id": "gPqFLg7oAtH9YDOxH1zcE",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -183.41936574958072,
			"y": 59.1227490559707,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1753681267,
			"groupIds": [
				"iOSqqse7JdWe137vMgaVt"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "SE5Ht5Be"
				},
				{
					"id": "AQxw1VZK3bXYb2moutDzK",
					"type": "arrow"
				}
			],
			"updated": 1706531926411,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 57,
			"versionNonce": 1995102328,
			"isDeleted": false,
			"id": "SE5Ht5Be",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -168.1293495752643,
			"y": 80.6227490559707,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 41.41996765136719,
			"height": 25,
			"seed": 566945555,
			"groupIds": [
				"iOSqqse7JdWe137vMgaVt"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926411,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "WK2",
			"rawText": "WK2",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "gPqFLg7oAtH9YDOxH1zcE",
			"originalText": "WK2",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 199,
			"versionNonce": 1680280328,
			"isDeleted": false,
			"id": "RQ3r0Wjrsdmevqll3cXg1",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -38.39830834680504,
			"y": 58.1227490559707,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1688374451,
			"groupIds": [
				"iOSqqse7JdWe137vMgaVt"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "8gnoXASU"
				},
				{
					"id": "DtVWWExWhiOJVzA62ld7B",
					"type": "arrow"
				}
			],
			"updated": 1706531926411,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 56,
			"versionNonce": 501811576,
			"isDeleted": false,
			"id": "8gnoXASU",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -22.8682943087191,
			"y": 79.6227490559707,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.939971923828125,
			"height": 25,
			"seed": 1689550419,
			"groupIds": [
				"iOSqqse7JdWe137vMgaVt"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926411,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "WK0",
			"rawText": "WK0",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "RQ3r0Wjrsdmevqll3cXg1",
			"originalText": "WK0",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "arrow",
			"version": 301,
			"versionNonce": 1478519304,
			"isDeleted": false,
			"id": "z9YEJasz4McgmN7NMIRa6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -223.4977644303798,
			"y": -104.25,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 158.6939877642214,
			"seed": 1163228723,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926411,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "emiOg9Kzj4hvOOXNJcrDK",
				"gap": 1,
				"focus": -0.007006543600561424
			},
			"endBinding": {
				"elementId": "w0TGGdAFC6SoFGugDDgCm",
				"gap": 4.678761291749311,
				"focus": -0.05831822454374307
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
					158.6939877642214
				]
			]
		},
		{
			"type": "arrow",
			"version": 323,
			"versionNonce": 133765752,
			"isDeleted": false,
			"id": "AQxw1VZK3bXYb2moutDzK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -152.2445430967698,
			"y": -100.88198930069106,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 159.00473835666176,
			"seed": 1460033597,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926411,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "Eg_Fml2dU9ZhD4FzclpET",
				"gap": 4.36801069930894,
				"focus": 0.04151508602138342
			},
			"endBinding": {
				"elementId": "gPqFLg7oAtH9YDOxH1zcE",
				"gap": 1,
				"focus": -0.13403270408858567
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
					159.00473835666176
				]
			]
		},
		{
			"type": "arrow",
			"version": 326,
			"versionNonce": 1670768904,
			"isDeleted": false,
			"id": "h_R9ZFzPK4we19vsxxRQP",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -78.8238483049443,
			"y": -101.86093189791544,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 158.98368095388614,
			"seed": 90736125,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926411,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "hP6iNDuT4sZ29HhqaCcQX",
				"gap": 4.389068102084565,
				"focus": 0.029829119581786287
			},
			"endBinding": {
				"elementId": "yNy5RHOAe91FX5311TdZ3",
				"gap": 1,
				"focus": -0.09515388772609079
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
					158.98368095388614
				]
			]
		},
		{
			"type": "arrow",
			"version": 352,
			"versionNonce": 937364344,
			"isDeleted": false,
			"id": "DtVWWExWhiOJVzA62ld7B",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -3.445268318670202,
			"y": -104.79775968958845,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 159.5676433475674,
			"seed": 812179677,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926411,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "lEzDo6to4jkEMDa-MOO8l",
				"gap": 1.452240310411554,
				"focus": -0.03624254670360551
			},
			"endBinding": {
				"elementId": "RQ3r0Wjrsdmevqll3cXg1",
				"gap": 3.352865397991742,
				"focus": -0.02908222144069899
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
					159.5676433475674
				]
			]
		},
		{
			"type": "rectangle",
			"version": 230,
			"versionNonce": 33785864,
			"isDeleted": false,
			"id": "J4Ifg7cnOjiq4OetNHv2h",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 771.6079143495496,
			"y": 52.82877548619933,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 439645267,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "Gl8yHpSy"
				},
				{
					"id": "tXQbPEHPGQYT-In2-SS1O",
					"type": "arrow"
				}
			],
			"updated": 1706531926411,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 113,
			"versionNonce": 937352312,
			"isDeleted": false,
			"id": "Gl8yHpSy",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 787.8379329652722,
			"y": 74.32877548619933,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 39.53996276855469,
			"height": 25,
			"seed": 1256747507,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926411,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "WK5",
			"rawText": "WK5",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "J4Ifg7cnOjiq4OetNHv2h",
			"originalText": "WK5",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 192,
			"versionNonce": 1600472840,
			"isDeleted": false,
			"id": "sresNWoLOLk9QLlohjtgs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 625.6079143495496,
			"y": 53.82877548619933,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1804319635,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "A6NDNEJs"
				},
				{
					"id": "OwbqIEhtwpV6ppsJOjysJ",
					"type": "arrow"
				}
			],
			"updated": 1706531926411,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 114,
			"versionNonce": 700222840,
			"isDeleted": false,
			"id": "A6NDNEJs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 642.6379283876355,
			"y": 75.32877548619933,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 37.939971923828125,
			"height": 25,
			"seed": 1481953587,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926411,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "WK7",
			"rawText": "WK7",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "sresNWoLOLk9QLlohjtgs",
			"originalText": "WK7",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 236,
			"versionNonce": 1211573768,
			"isDeleted": false,
			"id": "HXWk_yBJXov-oiA71vv53",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 699.5868569467739,
			"y": 53.82877548619933,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 581579475,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "0sqsbG2Q"
				},
				{
					"id": "uJswu_O3vDxyAdKfdPr_8",
					"type": "arrow"
				}
			],
			"updated": 1706531926411,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 116,
			"versionNonce": 1455169144,
			"isDeleted": false,
			"id": "0sqsbG2Q",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 715.5968743417934,
			"y": 75.32877548619933,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 39.97996520996094,
			"height": 25,
			"seed": 1797415027,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926411,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "WK6",
			"rawText": "WK6",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "HXWk_yBJXov-oiA71vv53",
			"originalText": "WK6",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 254,
			"versionNonce": 427107592,
			"isDeleted": false,
			"id": "QCD9yGMC3pj_jACfhL9Hm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 844.6079143495496,
			"y": 52.82877548619933,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 2072238611,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "rIeAtmzo"
				},
				{
					"id": "VoQY_TEGB5GPL4p2sWhet",
					"type": "arrow"
				}
			],
			"updated": 1706531926411,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 113,
			"versionNonce": 1067552632,
			"isDeleted": false,
			"id": "rIeAtmzo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 860.6179317445691,
			"y": 74.32877548619933,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 39.97996520996094,
			"height": 25,
			"seed": 549789619,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926411,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "WK4",
			"rawText": "WK4",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "QCD9yGMC3pj_jACfhL9Hm",
			"originalText": "WK4",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "arrow",
			"version": 413,
			"versionNonce": 815481864,
			"isDeleted": false,
			"id": "OwbqIEhtwpV6ppsJOjysJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 657.0107296509273,
			"y": -110.41762915311742,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.9905019872619505,
			"height": 159.5676433475674,
			"seed": 1158459731,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926411,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "LgZQM1jXLHvD_pqp_07Al",
				"gap": 1.2691986385555367,
				"focus": 0.0020300697727767183
			},
			"endBinding": {
				"elementId": "sresNWoLOLk9QLlohjtgs",
				"gap": 4.678761291749332,
				"focus": -0.05831822454374309
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
					1.9905019872619505,
					159.5676433475674
				]
			]
		},
		{
			"type": "arrow",
			"version": 435,
			"versionNonce": 749789304,
			"isDeleted": false,
			"id": "uJswu_O3vDxyAdKfdPr_8",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 728.2944395049541,
			"y": -106.17596287046246,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.9757212431575226,
			"height": 159.0047383566618,
			"seed": 1236340467,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926411,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "rr5_quHnoV0X8sVcY-H7N",
				"gap": 5.510864921210512,
				"focus": 0.05055169939472155
			},
			"endBinding": {
				"elementId": "HXWk_yBJXov-oiA71vv53",
				"gap": 1,
				"focus": -0.1340327040885857
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
					1.9757212431575226,
					159.0047383566618
				]
			]
		},
		{
			"type": "arrow",
			"version": 438,
			"versionNonce": 1537573640,
			"isDeleted": false,
			"id": "tXQbPEHPGQYT-In2-SS1O",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 801.7221974389383,
			"y": -107.15490546768683,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.983217438335032,
			"height": 158.98368095388616,
			"seed": 557365395,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926411,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "0C-n4pinh_BR_Bj3JG_gJ",
				"gap": 5.531922323986137,
				"focus": 0.03886573295512284
			},
			"endBinding": {
				"elementId": "J4Ifg7cnOjiq4OetNHv2h",
				"gap": 1,
				"focus": -0.09515388772608918
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
					1.983217438335032,
					158.98368095388616
				]
			]
		},
		{
			"type": "arrow",
			"version": 464,
			"versionNonce": 1034817912,
			"isDeleted": false,
			"id": "VoQY_TEGB5GPL4p2sWhet",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 877.0921652473091,
			"y": -110.09173325935984,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.9905019872617231,
			"height": 159.5676433475674,
			"seed": 693775923,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926411,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "ToAn6NpCf2nagCv4lBhXd",
				"gap": 2.5950945323131265,
				"focus": -0.027205933330268155
			},
			"endBinding": {
				"elementId": "QCD9yGMC3pj_jACfhL9Hm",
				"gap": 3.3528653979917493,
				"focus": -0.029082221440698205
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
					1.9905019872617231,
					159.5676433475674
				]
			]
		},
		{
			"type": "rectangle",
			"version": 546,
			"versionNonce": 1225777672,
			"isDeleted": false,
			"id": "oUOhhplnhn8DptVdkBHeo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1512.104077819732,
			"y": 486.5245192426431,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1642051581,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706531926411,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 339,
			"versionNonce": 2044535416,
			"isDeleted": false,
			"id": "QrzWxURwyPg4b_gDqk8vY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -248.729395860912,
			"y": -457.2799996812564,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 766431507,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "5QVzIBmg"
				}
			],
			"updated": 1706531926411,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 94,
			"versionNonce": 2010538248,
			"isDeleted": false,
			"id": "5QVzIBmg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -242.026270860912,
			"y": -435.2799996812564,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 1131928627,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926411,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "1byte",
			"rawText": "1byte",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "QrzWxURwyPg4b_gDqk8vY",
			"originalText": "1byte",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "text",
			"version": 62,
			"versionNonce": 1610748792,
			"isDeleted": false,
			"id": "JLw99lUt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -154.971782624676,
			"y": -435.0273108479485,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 11.71875,
			"height": 24,
			"seed": 911544755,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926411,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "=",
			"rawText": "=",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "=",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 305,
			"versionNonce": 661979144,
			"isDeleted": false,
			"id": "qUPOeDE3qmsUIYV5DzMPh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -116.57214523562612,
			"y": -456.30105708403227,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1650118205,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706531926411,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 101,
			"versionNonce": 1986061432,
			"isDeleted": false,
			"id": "VABprpceHmsye6TiEWQkQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -79.75076326202347,
			"y": -457.5231716711734,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.5688959438899701,
			"height": 67.46252558726871,
			"seed": 1958475731,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926411,
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
					-1.5688959438899701,
					67.46252558726871
				]
			]
		},
		{
			"type": "line",
			"version": 123,
			"versionNonce": 1206370056,
			"isDeleted": false,
			"id": "JpL_tvaUYYTp4yLZxSoT-",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -62.650529533863434,
			"y": -455.63226721059846,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.5688959438899701,
			"height": 67.46252558726871,
			"seed": 119332861,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926411,
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
					-1.5688959438899701,
					67.46252558726871
				]
			]
		},
		{
			"type": "line",
			"version": 154,
			"versionNonce": 1522374008,
			"isDeleted": false,
			"id": "7tZ4Gz24aE0ZZzqFhHRTF",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -96.12030967018285,
			"y": -455.63226721059857,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.5688959438899701,
			"height": 67.46252558726871,
			"seed": 1231763709,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926411,
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
					-1.5688959438899701,
					67.46252558726871
				]
			]
		},
		{
			"type": "line",
			"version": 76,
			"versionNonce": 1772789256,
			"isDeleted": false,
			"id": "T2BgO99Ekw6BRjzgcR7Xf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -116.35833528612281,
			"y": -421.96153027633403,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 71.64624810430868,
			"height": 0.5229653146299711,
			"seed": 582890771,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926411,
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
					71.64624810430868,
					0.5229653146299711
				]
			]
		},
		{
			"type": "text",
			"version": 149,
			"versionNonce": 1381770872,
			"isDeleted": false,
			"id": "vw8LZHIe",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -495.0872791274946,
			"y": 266.83696884146667,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 123.45986938476562,
			"height": 25,
			"seed": 1776296723,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926411,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "Delta Bytes",
			"rawText": "Delta Bytes",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Delta Bytes",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 471,
			"versionNonce": 767139080,
			"isDeleted": false,
			"id": "mV2N-YFvDAKKHnDQh-SPj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -303.20582046719187,
			"y": 582.0862947094881,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1337846877,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "BJnpjelT"
				}
			],
			"updated": 1706531926411,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 142,
			"versionNonce": 1509988216,
			"isDeleted": false,
			"id": "BJnpjelT",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -273.06519546719187,
			"y": 604.0862947094881,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 11.71875,
			"height": 24,
			"seed": 20609971,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926411,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "0",
			"rawText": "0",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "mV2N-YFvDAKKHnDQh-SPj",
			"originalText": "0",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 525,
			"versionNonce": 898677768,
			"isDeleted": false,
			"id": "ZBeyW9xSU6UJcUuxnKv2I",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -229.07678135435646,
			"y": 582.0862947094881,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 549281267,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "C5Ma0C5K"
				}
			],
			"updated": 1706531926411,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 142,
			"versionNonce": 904849528,
			"isDeleted": false,
			"id": "C5Ma0C5K",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -198.93615635435646,
			"y": 604.0862947094881,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 11.71875,
			"height": 24,
			"seed": 1687669715,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926411,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "1",
			"rawText": "1",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "ZBeyW9xSU6UJcUuxnKv2I",
			"originalText": "1",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 568,
			"versionNonce": 321649416,
			"isDeleted": false,
			"id": "K9fUMe30fBo-Lc7GcgcQo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -154.94774224152104,
			"y": 582.0862947094881,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1823721309,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "ZvuGNbS5"
				}
			],
			"updated": 1706531926411,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 142,
			"versionNonce": 32184696,
			"isDeleted": false,
			"id": "ZvuGNbS5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -124.80711724152104,
			"y": 604.0862947094881,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 11.71875,
			"height": 24,
			"seed": 1917576381,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926411,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "0",
			"rawText": "0",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "K9fUMe30fBo-Lc7GcgcQo",
			"originalText": "0",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 606,
			"versionNonce": 956783112,
			"isDeleted": false,
			"id": "RvnbNgwOHSfNwyD_FgdfW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -81.79408522227538,
			"y": 581.1109126158982,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1666230387,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "nkrq4SK4"
				}
			],
			"updated": 1706531926411,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 142,
			"versionNonce": 1094265464,
			"isDeleted": false,
			"id": "nkrq4SK4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -51.653460222275385,
			"y": 603.1109126158982,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 11.71875,
			"height": 24,
			"seed": 1551054259,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926411,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "1",
			"rawText": "1",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "RvnbNgwOHSfNwyD_FgdfW",
			"originalText": "1",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 530,
			"versionNonce": 1780406536,
			"isDeleted": false,
			"id": "KCEwjt5oA7gmEiqnQuHMU",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -8.152737156234878,
			"y": 578.6724573819233,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 407301779,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "pwE0oim7"
				}
			],
			"updated": 1706531926411,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 142,
			"versionNonce": 1855789944,
			"isDeleted": false,
			"id": "pwE0oim7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 21.987887843765122,
			"y": 600.6724573819233,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 11.71875,
			"height": 24,
			"seed": 1125926355,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926411,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "1",
			"rawText": "1",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "KCEwjt5oA7gmEiqnQuHMU",
			"originalText": "1",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 584,
			"versionNonce": 703494152,
			"isDeleted": false,
			"id": "mKfV4BRG4qWbq9wadJall",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 65.97630195660054,
			"y": 578.6724573819232,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1295098931,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "Rj3TuW50"
				}
			],
			"updated": 1706531926411,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 142,
			"versionNonce": 207285368,
			"isDeleted": false,
			"id": "Rj3TuW50",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 96.11692695660054,
			"y": 600.6724573819232,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 11.71875,
			"height": 24,
			"seed": 466169971,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926411,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "0",
			"rawText": "0",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "mKfV4BRG4qWbq9wadJall",
			"originalText": "0",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 628,
			"versionNonce": 745682696,
			"isDeleted": false,
			"id": "0UCFOnC5lSfaKoJmm5QUU",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 140.10534106943595,
			"y": 578.6724573819233,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 712287699,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "ev2Xbb7u"
				},
				{
					"id": "dTlL38wl48daGO9iLH_N1",
					"type": "arrow"
				}
			],
			"updated": 1706531926411,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 142,
			"versionNonce": 875994488,
			"isDeleted": false,
			"id": "ev2Xbb7u",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 170.24596606943595,
			"y": 600.6724573819233,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 11.71875,
			"height": 24,
			"seed": 2034974237,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926411,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "1",
			"rawText": "1",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "0UCFOnC5lSfaKoJmm5QUU",
			"originalText": "1",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1161,
			"versionNonce": 1176901128,
			"isDeleted": false,
			"id": "k48xZc0_bfHofzJ_OQBZM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -478.84147685316896,
			"y": 746.9248805355996,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1235320019,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "JcDSnJkC"
				},
				{
					"id": "Lh_HX7zO5BDU8OygDnXtJ",
					"type": "arrow"
				},
				{
					"id": "dTlL38wl48daGO9iLH_N1",
					"type": "arrow"
				}
			],
			"updated": 1706531926411,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 676,
			"versionNonce": 661925496,
			"isDeleted": false,
			"id": "JcDSnJkC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -466.27897685316896,
			"y": 768.9248805355996,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 144730739,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926411,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "s[7]",
			"rawText": "s[7]",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "k48xZc0_bfHofzJ_OQBZM",
			"originalText": "s[7]",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "text",
			"version": 155,
			"versionNonce": 1543902472,
			"isDeleted": false,
			"id": "vYkVe7J6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -290.61499071335044,
			"y": 547.8095481581923,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1567973725,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926411,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "s[0]",
			"rawText": "s[0]",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "s[0]",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "text",
			"version": 207,
			"versionNonce": 1591189368,
			"isDeleted": false,
			"id": "38wS5hjt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 153.15553211623103,
			"y": 542.637222813322,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 585407901,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926411,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "s[6]",
			"rawText": "s[6]",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "s[6]",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "text",
			"version": 249,
			"versionNonce": 1401828360,
			"isDeleted": false,
			"id": "81nsNHK2",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -69.2315852222755,
			"y": 544.5879870005018,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 543624147,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926411,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "s[3]",
			"rawText": "s[3]",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "s[3]",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "ellipse",
			"version": 420,
			"versionNonce": 447017080,
			"isDeleted": false,
			"id": "HGSTrmhpzk3GjU0Kio-ja",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1525.038705184039,
			"y": 387.46391644606604,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 48.36836665182087,
			"height": 49.65818976253612,
			"seed": 1677822173,
			"groupIds": [
				"VUPAaSpJCNlhvSBazu05q"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926411,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 419,
			"versionNonce": 45773576,
			"isDeleted": false,
			"id": "GGdiway39ZIY23-oiyXxO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1547.6106096215553,
			"y": 389.39865111213896,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.9347346660728861,
			"height": 47.723455096463304,
			"seed": 1609983293,
			"groupIds": [
				"VUPAaSpJCNlhvSBazu05q"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926411,
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
					1.9347346660728861,
					47.723455096463304
				]
			]
		},
		{
			"type": "line",
			"version": 412,
			"versionNonce": 1923096952,
			"isDeleted": false,
			"id": "Pbl7OYYj1wVS4lNH20sVu",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1525.038705184039,
			"y": 411.9705555496554,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 49.01327820717848,
			"height": 0,
			"seed": 1439741341,
			"groupIds": [
				"VUPAaSpJCNlhvSBazu05q"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926411,
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
					49.01327820717848,
					0
				]
			]
		},
		{
			"type": "ellipse",
			"version": 364,
			"versionNonce": 537317896,
			"isDeleted": false,
			"id": "QhoL6GQpSRLM9XpBeXJqt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -289.484755435111,
			"y": 753.2536168583781,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 48.36836665182087,
			"height": 49.65818976253612,
			"seed": 1672194195,
			"groupIds": [
				"_ayA-G-GlxKFw117opiXV"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "Lh_HX7zO5BDU8OygDnXtJ",
					"type": "arrow"
				}
			],
			"updated": 1706531926411,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 362,
			"versionNonce": 1712140920,
			"isDeleted": false,
			"id": "-l6lXfXqyWtKK1G6I098f",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -266.91285099759483,
			"y": 755.188351524451,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.9347346660728861,
			"height": 47.723455096463304,
			"seed": 2146377267,
			"groupIds": [
				"_ayA-G-GlxKFw117opiXV"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926411,
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
					1.9347346660728861,
					47.723455096463304
				]
			]
		},
		{
			"type": "line",
			"version": 355,
			"versionNonce": 846156040,
			"isDeleted": false,
			"id": "67zN8K_rZ2WeIuim-anaK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -289.484755435111,
			"y": 777.7602559619675,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 49.01327820717848,
			"height": 0,
			"seed": 1534255059,
			"groupIds": [
				"_ayA-G-GlxKFw117opiXV"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926411,
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
					49.01327820717848,
					0
				]
			]
		},
		{
			"type": "text",
			"version": 320,
			"versionNonce": 1806705528,
			"isDeleted": false,
			"id": "q5Dj89Do",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -433.02077637748175,
			"y": 338.10239803635517,
			"strokeColor": "#12b886",
			"backgroundColor": "transparent",
			"width": 679.6875,
			"height": 48,
			"seed": 988688179,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926411,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "(1) s0 = 0, s1 = 1, s2 = 0, s3 = 1, s4 = 1, s5 = 0, s6 = 1\n    δ0 = s6∥s5∥s4∥s3∥s2∥s1∥s0",
			"rawText": "(1) s0 = 0, s1 = 1, s2 = 0, s3 = 1, s4 = 1, s5 = 0, s6 = 1\n    δ0 = s6∥s5∥s4∥s3∥s2∥s1∥s0",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "(1) s0 = 0, s1 = 1, s2 = 0, s3 = 1, s4 = 1, s5 = 0, s6 = 1\n    δ0 = s6∥s5∥s4∥s3∥s2∥s1∥s0",
			"lineHeight": 1.2,
			"baseline": 43
		},
		{
			"type": "text",
			"version": 116,
			"versionNonce": 24113160,
			"isDeleted": false,
			"id": "qavmzGsk",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -433.9961584710718,
			"y": 409.3052908684207,
			"strokeColor": "#12b886",
			"backgroundColor": "transparent",
			"width": 751.40625,
			"height": 72,
			"seed": 1131511261,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926411,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "(2) for i = 1 to 127:\n        s_{i+6} = s_{i+2} xor s_{i-1}\n        δ_i = s_{i+6}∥s_{i+5}∥s_{i+4}∥s_{i+3}∥s_{i+2}∥s_{i+1}∥s_i",
			"rawText": "(2) for i = 1 to 127:\n        s_{i+6} = s_{i+2} xor s_{i-1}\n        δ_i = s_{i+6}∥s_{i+5}∥s_{i+4}∥s_{i+3}∥s_{i+2}∥s_{i+1}∥s_i",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "(2) for i = 1 to 127:\n        s_{i+6} = s_{i+2} xor s_{i-1}\n        δ_i = s_{i+6}∥s_{i+5}∥s_{i+4}∥s_{i+3}∥s_{i+2}∥s_{i+1}∥s_i",
			"lineHeight": 1.2,
			"baseline": 67
		},
		{
			"type": "line",
			"version": 1244,
			"versionNonce": 30209144,
			"isDeleted": false,
			"id": "nJY0U_3LHtQajn4OoRL_G",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -47.138421772829474,
			"y": 649.932526746675,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 190.34326232349162,
			"height": 129.48421828472783,
			"seed": 1836499869,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926411,
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
					-15.899626269781379,
					120.60095345229627
				],
				[
					-190.34326232349162,
					129.48421828472783
				]
			]
		},
		{
			"type": "text",
			"version": 524,
			"versionNonce": 84193032,
			"isDeleted": false,
			"id": "5G07cnB7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 289.00733240959556,
			"y": 595.3338241767132,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 164.0625,
			"height": 24,
			"seed": 1115266003,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926411,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "LSFR x^7+x^3+1",
			"rawText": "LSFR x^7+x^3+1",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "LSFR x^7+x^3+1",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "line",
			"version": 96,
			"versionNonce": 1042785656,
			"isDeleted": false,
			"id": "0T8aOdpeeasZUwgfQGhLx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -269.6411398506536,
			"y": 651.4267577161323,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 2.9890418748431102,
			"height": 111.59089666081172,
			"seed": 206657597,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926412,
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
					2.9890418748431102,
					111.59089666081172
				]
			]
		},
		{
			"type": "arrow",
			"version": 747,
			"versionNonce": 1437175304,
			"isDeleted": false,
			"id": "Lh_HX7zO5BDU8OygDnXtJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -290.4748990998359,
			"y": 777.3601491259748,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 110.3848412952612,
			"height": 4.242524011773526,
			"seed": 643088339,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926412,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "QhoL6GQpSRLM9XpBeXJqt",
				"gap": 1,
				"focus": 0.06802213582488174
			},
			"endBinding": {
				"elementId": "k48xZc0_bfHofzJ_OQBZM",
				"gap": 5.98173645807185,
				"focus": 0.06475640127928249
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
					-110.3848412952612,
					4.242524011773526
				]
			]
		},
		{
			"type": "arrow",
			"version": 59,
			"versionNonce": 1577334392,
			"isDeleted": false,
			"id": "9ZZ8Mb7nJVGIEOBX7hP6K",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -124.17443527495254,
			"y": 678.3281345897208,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 72.73335228785055,
			"height": 0.9963472916142564,
			"seed": 1590643443,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926412,
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
					-72.73335228785055,
					0.9963472916142564
				]
			]
		},
		{
			"type": "arrow",
			"version": 153,
			"versionNonce": 475696392,
			"isDeleted": false,
			"id": "QMb5whMXfd4p9hDSt3WNi",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -45.43294955913058,
			"y": 680.6418498361834,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 73.54706416018445,
			"height": 0,
			"seed": 429935219,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926412,
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
					-73.54706416018445,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 82,
			"versionNonce": 1445373816,
			"isDeleted": false,
			"id": "3yAKSuCrghLbAvos1YDyA",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 80.28944460356303,
			"y": 680.6418498361834,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 72.73335228785055,
			"height": 0.9963472916142564,
			"seed": 1429045149,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926412,
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
					-72.73335228785055,
					0.9963472916142564
				]
			]
		},
		{
			"type": "arrow",
			"version": 96,
			"versionNonce": 43232264,
			"isDeleted": false,
			"id": "dB9pZ2aJymKp4ONhqznD-",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 157.00818605787111,
			"y": 675.6601133781115,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 72.73335228785055,
			"height": 0.9963472916142564,
			"seed": 1440749469,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926412,
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
					-72.73335228785055,
					0.9963472916142564
				]
			]
		},
		{
			"type": "arrow",
			"version": 98,
			"versionNonce": 1657993336,
			"isDeleted": false,
			"id": "Y1Vy6AvnK0r5idSKbwRei",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -199.68414434008065,
			"y": 678.6491552529544,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 72.73335228785055,
			"height": 0.9963472916142564,
			"seed": 483395133,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926412,
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
					-72.73335228785055,
					0.9963472916142564
				]
			]
		},
		{
			"type": "ellipse",
			"version": 67,
			"versionNonce": 575728392,
			"isDeleted": false,
			"id": "OX0uR5Pxed9vBZAi97izn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -300.5279058906998,
			"y": 584.671489177968,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 64.76257395493543,
			"height": 62.76987937170668,
			"seed": 723578195,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "XRBouTBf9Pix6gFNltZSe",
					"type": "arrow"
				}
			],
			"updated": 1706531926412,
			"link": null,
			"locked": false
		},
		{
			"type": "arrow",
			"version": 493,
			"versionNonce": 399321464,
			"isDeleted": false,
			"id": "dTlL38wl48daGO9iLH_N1",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -444.9982631747866,
			"y": 816.8204081241211,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 693.4577149636161,
			"height": 234.14161352938186,
			"seed": 1335208019,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926412,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "k48xZc0_bfHofzJ_OQBZM",
				"gap": 1.8955275885214178,
				"focus": 0.8150297560522248
			},
			"endBinding": {
				"elementId": "VItUFd-Kak-AiGZEbyYeu",
				"focus": -0.714841105829859,
				"gap": 4.985101613478022
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
					92.66029812013852,
					27.897724165203044
				],
				[
					614.7462789260794,
					12.952514790987038
				],
				[
					693.4577149636161,
					-179.34251249059025
				],
				[
					658.5855597571124,
					-206.2438893641788
				]
			]
		},
		{
			"type": "ellipse",
			"version": 51,
			"versionNonce": 1980647944,
			"isDeleted": false,
			"id": "VItUFd-Kak-AiGZEbyYeu",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 146.8320280441617,
			"y": 579.6897527198961,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 61.773532080092195,
			"height": 62.76987937170668,
			"seed": 509046589,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [
				{
					"id": "dTlL38wl48daGO9iLH_N1",
					"type": "arrow"
				}
			],
			"updated": 1706531926412,
			"link": null,
			"locked": false
		},
		{
			"type": "arrow",
			"version": 73,
			"versionNonce": 1884895864,
			"isDeleted": false,
			"id": "XRBouTBf9Pix6gFNltZSe",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -301.52425318231417,
			"y": 617.550949801243,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 82.69682520399442,
			"height": 0,
			"seed": 930788285,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926412,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "OX0uR5Pxed9vBZAi97izn",
				"focus": -0.047619047619048394,
				"gap": 1.0318751325648563
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
					-82.69682520399442,
					0
				]
			]
		},
		{
			"type": "text",
			"version": 663,
			"versionNonce": 1221052680,
			"isDeleted": false,
			"id": "In9MQJbI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -482.42985426279705,
			"y": 604.7226187659436,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.3125,
			"height": 24,
			"seed": 757131955,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926412,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "s[134]",
			"rawText": "s[134]",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "s[134]",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "arrow",
			"version": 204,
			"versionNonce": 1597713272,
			"isDeleted": false,
			"id": "gbOu4OlwzaLPQ7cK4R81H",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 11.922457262982903,
			"y": 680.3542194720342,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 73.54706416018445,
			"height": 0,
			"seed": 879463741,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926412,
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
					-73.54706416018445,
					0
				]
			]
		},
		{
			"type": "text",
			"version": 302,
			"versionNonce": 637102088,
			"isDeleted": false,
			"id": "iEMfONfM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 619.1836970787922,
			"y": 318.5706579816298,
			"strokeColor": "#12b886",
			"backgroundColor": "transparent",
			"width": 445.3125,
			"height": 240,
			"seed": 1979831091,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926412,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "for (int i = 1; i <= 127; i++) {\n    \n    ...\n\n    for (int j = 0; j < 7; j++) {\n        delta |= (u32)(s[i + j] << j);\n    }\n\n   ...\n}",
			"rawText": "for (int i = 1; i <= 127; i++) {\n    \n    ...\n\n    for (int j = 0; j < 7; j++) {\n        delta |= (u32)(s[i + j] << j);\n    }\n\n   ...\n}",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "for (int i = 1; i <= 127; i++) {\n    \n    ...\n\n    for (int j = 0; j < 7; j++) {\n        delta |= (u32)(s[i + j] << j);\n    }\n\n   ...\n}",
			"lineHeight": 1.2,
			"baseline": 235
		},
		{
			"type": "text",
			"version": 205,
			"versionNonce": 1589050488,
			"isDeleted": false,
			"id": "8ZXNLvfM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 616.7444125930679,
			"y": 627.0704859830058,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 282.65625,
			"height": 24,
			"seed": 1780234515,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926412,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ0 = s6∥s5∥s4∥s3∥s2∥s1∥s0",
			"rawText": "δ0 = s6∥s5∥s4∥s3∥s2∥s1∥s0",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "δ0 = s6∥s5∥s4∥s3∥s2∥s1∥s0",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "text",
			"version": 234,
			"versionNonce": 1235166984,
			"isDeleted": false,
			"id": "X43ZvzjB",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 611.4157554723249,
			"y": 573.8940153947707,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 117.1875,
			"height": 24,
			"seed": 58784819,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926412,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ_i: 7-bit",
			"rawText": "δ_i: 7-bit",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "δ_i: 7-bit",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 517,
			"versionNonce": 9481592,
			"isDeleted": false,
			"id": "j-lDAPAl5zqVVdadcVV-E",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 609.4007593422934,
			"y": 686.4616108540073,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1629560755,
			"groupIds": [
				"q8Is08HyOvsY9htgDX8ne",
				"VQX2thsOtpILBIvsvtI1m"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706531926412,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 80,
			"versionNonce": 271910408,
			"isDeleted": false,
			"id": "BDJfRsvO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 621.9632593422934,
			"y": 708.4616108540073,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1749812189,
			"groupIds": [
				"q8Is08HyOvsY9htgDX8ne",
				"VQX2thsOtpILBIvsvtI1m"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926412,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "s[6]",
			"rawText": "s[6]",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": null,
			"originalText": "s[6]",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "text",
			"version": 69,
			"versionNonce": 2114731640,
			"isDeleted": false,
			"id": "sYdy8y7b",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 702.9239791565353,
			"y": 708.1396294298584,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.3125,
			"height": 24,
			"seed": 759035571,
			"groupIds": [
				"q8Is08HyOvsY9htgDX8ne",
				"VQX2thsOtpILBIvsvtI1m"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926412,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "<< 6 |",
			"rawText": "<< 6 |",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "<< 6 |",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 617,
			"versionNonce": 1723270408,
			"isDeleted": false,
			"id": "7Z8_nZALm1ZRTerf97u40",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 801.1464701266066,
			"y": 686.209804868455,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 675567155,
			"groupIds": [
				"3CVbXD4AByL5fxkb_FNyO",
				"VQX2thsOtpILBIvsvtI1m"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706531926412,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 182,
			"versionNonce": 1206759288,
			"isDeleted": false,
			"id": "Sb7aCKHF",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 813.7089701266066,
			"y": 708.209804868455,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 878778323,
			"groupIds": [
				"3CVbXD4AByL5fxkb_FNyO",
				"VQX2thsOtpILBIvsvtI1m"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926412,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "s[5]",
			"rawText": "s[5]",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": null,
			"originalText": "s[5]",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "text",
			"version": 171,
			"versionNonce": 983639048,
			"isDeleted": false,
			"id": "Q0BvtAB6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 894.6696899408487,
			"y": 707.8878234443062,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.3125,
			"height": 24,
			"seed": 1320461683,
			"groupIds": [
				"3CVbXD4AByL5fxkb_FNyO",
				"VQX2thsOtpILBIvsvtI1m"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926412,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "<< 5 |",
			"rawText": "<< 5 |",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "<< 5 |",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 600,
			"versionNonce": 377028728,
			"isDeleted": false,
			"id": "SSR0G9jQxIyS1BlxPJFLJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 995.532435038888,
			"y": 682.209804868455,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1762042365,
			"groupIds": [
				"jZQmjlMcHcZazJz0U6chn",
				"VQX2thsOtpILBIvsvtI1m"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706531926412,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 165,
			"versionNonce": 1777296136,
			"isDeleted": false,
			"id": "vssxfXeV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1008.094935038888,
			"y": 704.209804868455,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1933269597,
			"groupIds": [
				"jZQmjlMcHcZazJz0U6chn",
				"VQX2thsOtpILBIvsvtI1m"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926412,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "s[4]",
			"rawText": "s[4]",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": null,
			"originalText": "s[4]",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "text",
			"version": 154,
			"versionNonce": 2037526904,
			"isDeleted": false,
			"id": "gPnakFYp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1089.0556548531301,
			"y": 703.8878234443059,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.3125,
			"height": 24,
			"seed": 1526335165,
			"groupIds": [
				"jZQmjlMcHcZazJz0U6chn",
				"VQX2thsOtpILBIvsvtI1m"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926412,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "<< 4 |",
			"rawText": "<< 4 |",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "<< 4 |",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 608,
			"versionNonce": 857588232,
			"isDeleted": false,
			"id": "vs4srYIV1DFZ0WJfeb3BH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 609.9183999511688,
			"y": 770.7010329386302,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 656028403,
			"groupIds": [
				"urF02slmHpkgz-lfcJ-GY",
				"VQX2thsOtpILBIvsvtI1m"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706531926412,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 173,
			"versionNonce": 1746748024,
			"isDeleted": false,
			"id": "dwPMxX9W",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 622.4808999511688,
			"y": 792.7010329386302,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1037917331,
			"groupIds": [
				"urF02slmHpkgz-lfcJ-GY",
				"VQX2thsOtpILBIvsvtI1m"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926412,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "s[3]",
			"rawText": "s[3]",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": null,
			"originalText": "s[3]",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "text",
			"version": 163,
			"versionNonce": 623395080,
			"isDeleted": false,
			"id": "9yqoORQj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 703.4416197654109,
			"y": 792.3790515144815,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.3125,
			"height": 24,
			"seed": 298471987,
			"groupIds": [
				"urF02slmHpkgz-lfcJ-GY",
				"VQX2thsOtpILBIvsvtI1m"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926412,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "<< 3 |",
			"rawText": "<< 3 |",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "<< 3 |",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 668,
			"versionNonce": 1363030904,
			"isDeleted": false,
			"id": "gdZNp_WwO7CDvT_InB4ts",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 804.5850666178353,
			"y": 777.0168224123145,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 313150995,
			"groupIds": [
				"OW4NlFGDHynaxs84WH_RG",
				"VQX2thsOtpILBIvsvtI1m"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706531926412,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 233,
			"versionNonce": 260759560,
			"isDeleted": false,
			"id": "d32afSPT",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 817.1475666178353,
			"y": 799.0168224123145,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1929188275,
			"groupIds": [
				"OW4NlFGDHynaxs84WH_RG",
				"VQX2thsOtpILBIvsvtI1m"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926412,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "s[2]",
			"rawText": "s[2]",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": null,
			"originalText": "s[2]",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "text",
			"version": 190,
			"versionNonce": 723059832,
			"isDeleted": false,
			"id": "AKquf8p4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 898.108286432077,
			"y": 798.6948409881657,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.3125,
			"height": 24,
			"seed": 1948656979,
			"groupIds": [
				"OW4NlFGDHynaxs84WH_RG",
				"VQX2thsOtpILBIvsvtI1m"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926412,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "<< 2 |",
			"rawText": "<< 2 |",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "<< 2 |",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 679,
			"versionNonce": 1916903176,
			"isDeleted": false,
			"id": "aib6T4rrwnAEwh-lJp7fh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 997.8482245125722,
			"y": 781.157173289507,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 781070397,
			"groupIds": [
				"LwC5CF33UTu4Hy47f-9kj",
				"VQX2thsOtpILBIvsvtI1m"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706531926412,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 246,
			"versionNonce": 57783672,
			"isDeleted": false,
			"id": "97gArsBF",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1010.4107245125722,
			"y": 803.157173289507,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 892805277,
			"groupIds": [
				"LwC5CF33UTu4Hy47f-9kj",
				"VQX2thsOtpILBIvsvtI1m"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926412,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "s[1]",
			"rawText": "s[1]",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": null,
			"originalText": "s[1]",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "text",
			"version": 232,
			"versionNonce": 1841856008,
			"isDeleted": false,
			"id": "rjS3MkdT",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1090.3188127478666,
			"y": 802.8351918653582,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.3125,
			"height": 24,
			"seed": 1847788797,
			"groupIds": [
				"LwC5CF33UTu4Hy47f-9kj",
				"VQX2thsOtpILBIvsvtI1m"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926412,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "<< 1 |",
			"rawText": "<< 1 |",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "<< 1 |",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 780,
			"versionNonce": 260851320,
			"isDeleted": false,
			"id": "MdclyZwJQcQmWjK4IK9hw",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1180.795592933625,
			"y": 779.332611885998,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 413780435,
			"groupIds": [
				"ICtBbU_Lpn6kyWpYly5MK",
				"VQX2thsOtpILBIvsvtI1m"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1706531926412,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 347,
			"versionNonce": 857439496,
			"isDeleted": false,
			"id": "F1WPAoQf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1193.358092933625,
			"y": 801.332611885998,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1259804531,
			"groupIds": [
				"ICtBbU_Lpn6kyWpYly5MK",
				"VQX2thsOtpILBIvsvtI1m"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926412,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "s[0]",
			"rawText": "s[0]",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": null,
			"originalText": "s[0]",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "text",
			"version": 334,
			"versionNonce": 1009563512,
			"isDeleted": false,
			"id": "T0bVmNRd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1274.3188127478666,
			"y": 801.0106304618491,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.3125,
			"height": 24,
			"seed": 164213011,
			"groupIds": [
				"ICtBbU_Lpn6kyWpYly5MK",
				"VQX2thsOtpILBIvsvtI1m"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926412,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "<< 0 |",
			"rawText": "<< 0 |",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "<< 0 |",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "text",
			"version": 254,
			"versionNonce": 1941347336,
			"isDeleted": false,
			"id": "Q80bKSYa",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 612.9581904207273,
			"y": 898.9964282897533,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 282.65625,
			"height": 24,
			"seed": 175091539,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926412,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ1 = s7∥s6∥s5∥s4∥s3∥s2∥s1",
			"rawText": "δ1 = s7∥s6∥s5∥s4∥s3∥s2∥s1",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "δ1 = s7∥s6∥s5∥s4∥s3∥s2∥s1",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "text",
			"version": 313,
			"versionNonce": 1033308280,
			"isDeleted": false,
			"id": "s6gguK0c",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 614.2915237540603,
			"y": 937.66309495642,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 282.65625,
			"height": 24,
			"seed": 1004550579,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926412,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ2 = s8∥s7∥s6∥s5∥s4∥s3∥s2",
			"rawText": "δ2 = s8∥s7∥s6∥s5∥s4∥s3∥s2",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "δ2 = s8∥s7∥s6∥s5∥s4∥s3∥s2",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "text",
			"version": 356,
			"versionNonce": 1368775432,
			"isDeleted": false,
			"id": "1c0pfTnM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 615.6248570873938,
			"y": 978.9964282897533,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 282.65625,
			"height": 24,
			"seed": 688970739,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926412,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ3 = s9∥s8∥s7∥s6∥s5∥s4∥s3",
			"rawText": "δ3 = s9∥s8∥s7∥s6∥s5∥s4∥s3",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "δ3 = s9∥s8∥s7∥s6∥s5∥s4∥s3",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "text",
			"version": 58,
			"versionNonce": 529480056,
			"isDeleted": false,
			"id": "4Bezzzjq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 764.9529820873938,
			"y": 1014.9964282897533,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 11.71875,
			"height": 72,
			"seed": 678693235,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926412,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": ".\n.\n.",
			"rawText": ".\n.\n.",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": ".\n.\n.",
			"lineHeight": 1.2,
			"baseline": 67
		},
		{
			"type": "text",
			"version": 568,
			"versionNonce": 1328888328,
			"isDeleted": false,
			"id": "nmRkaqEs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 575.624857087394,
			"y": 1138.996428289753,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 470.15625,
			"height": 24,
			"seed": 1935062045,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926412,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ127 = s133∥s132∥s131∥s130∥s129∥s128∥s127",
			"rawText": "δ127 = s133∥s132∥s131∥s130∥s129∥s128∥s127",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "δ127 = s133∥s132∥s131∥s130∥s129∥s128∥s127",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "text",
			"version": 621,
			"versionNonce": 1431915128,
			"isDeleted": false,
			"id": "fYkibvyr",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 576.5415237540608,
			"y": 1108.3297616230866,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 470.15625,
			"height": 24,
			"seed": 1727535891,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926412,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ126 = s132∥s131∥s130∥s129∥s128∥s127∥s126",
			"rawText": "δ126 = s132∥s131∥s130∥s129∥s128∥s127∥s126",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "δ126 = s132∥s131∥s130∥s129∥s128∥s127∥s126",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 488,
			"versionNonce": 1066449160,
			"isDeleted": false,
			"id": "JryMGpWhdxwmP0L-krQbu",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1614.5287396631516,
			"y": 468.0267313200567,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 696576477,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "Hqq3W1ye"
				}
			],
			"updated": 1706531926412,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 124,
			"versionNonce": 1236876152,
			"isDeleted": false,
			"id": "Hqq3W1ye",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1632.9506146631516,
			"y": 490.0267313200567,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1024785149,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926412,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK3",
			"rawText": "SK3",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "JryMGpWhdxwmP0L-krQbu",
			"originalText": "SK3",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 515,
			"versionNonce": 908351496,
			"isDeleted": false,
			"id": "HcaTsvLDcP5p6VQd5u0XP",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1687.8620729964848,
			"y": 468.02673132005646,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 685372979,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "CB1iLeTH"
				}
			],
			"updated": 1706531926412,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 155,
			"versionNonce": 1861422200,
			"isDeleted": false,
			"id": "CB1iLeTH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1706.2839479964848,
			"y": 490.02673132005646,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1363326931,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926413,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK2",
			"rawText": "SK2",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "HcaTsvLDcP5p6VQd5u0XP",
			"originalText": "SK2",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 538,
			"versionNonce": 1995183880,
			"isDeleted": false,
			"id": "jyIDEmAmZomXdi70-k24P",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1759.8620729964848,
			"y": 468.0267313200567,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1687528253,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "BFHijCTN"
				}
			],
			"updated": 1706531926413,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 179,
			"versionNonce": 1321909624,
			"isDeleted": false,
			"id": "BFHijCTN",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1778.2839479964848,
			"y": 490.0267313200567,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1071133597,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926413,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK1",
			"rawText": "SK1",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "jyIDEmAmZomXdi70-k24P",
			"originalText": "SK1",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 529,
			"versionNonce": 1717827080,
			"isDeleted": false,
			"id": "-80Ts-EiPweHTOd67Vqgf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1829.195406329818,
			"y": 468.0267313200569,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 965464051,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "ri2dC9dV"
				}
			],
			"updated": 1706531926413,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 166,
			"versionNonce": 444878456,
			"isDeleted": false,
			"id": "ri2dC9dV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1847.617281329818,
			"y": 490.0267313200569,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 705911187,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926413,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK0",
			"rawText": "SK0",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "-80Ts-EiPweHTOd67Vqgf",
			"originalText": "SK0",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "text",
			"version": 288,
			"versionNonce": 2038953224,
			"isDeleted": false,
			"id": "TMyoRmvI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -236.38035124593898,
			"y": 1201.6630949564199,
			"strokeColor": "#12b886",
			"backgroundColor": "transparent",
			"width": 632.8125,
			"height": 360,
			"seed": 718403219,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926413,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "for (int i = 1; i <= 127; i++) {\n    \n    ...\n\n    for (int j = 0; j < 8; j++) {\n        int index = (16 * i + j) % 128;\n        if (j < 8) {\n            SK[index] = MK[(j - i) & 7] + delta;\n        } else {\n            SK[index] = MK[((j - i) & 7) + 8] + delta;\n        }\n    }\n\n    ...\n}",
			"rawText": "for (int i = 1; i <= 127; i++) {\n    \n    ...\n\n    for (int j = 0; j < 8; j++) {\n        int index = (16 * i + j) % 128;\n        if (j < 8) {\n            SK[index] = MK[(j - i) & 7] + delta;\n        } else {\n            SK[index] = MK[((j - i) & 7) + 8] + delta;\n        }\n    }\n\n    ...\n}",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "for (int i = 1; i <= 127; i++) {\n    \n    ...\n\n    for (int j = 0; j < 8; j++) {\n        int index = (16 * i + j) % 128;\n        if (j < 8) {\n            SK[index] = MK[(j - i) & 7] + delta;\n        } else {\n            SK[index] = MK[((j - i) & 7) + 8] + delta;\n        }\n    }\n\n    ...\n}",
			"lineHeight": 1.2,
			"baseline": 355
		},
		{
			"type": "text",
			"version": 265,
			"versionNonce": 988004216,
			"isDeleted": false,
			"id": "FNy1Ts6W",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -456.23026579672006,
			"y": 1197.16309495642,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 167.6998291015625,
			"height": 25,
			"seed": 1195865171,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926413,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "SubKey Bytes SK",
			"rawText": "SubKey Bytes SK",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "SubKey Bytes SK",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 281,
			"versionNonce": 634655752,
			"isDeleted": false,
			"id": "fnAINbfMGlhDiO2ya0OKj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1547.9068666442038,
			"y": 652.9098778665074,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 924753875,
			"groupIds": [
				"QMpS0utXjNI9soDmIErJo"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926413,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 281,
			"versionNonce": 1613566072,
			"isDeleted": false,
			"id": "X0Veqo1gxL55pO6OxXECj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1567.7990066936184,
			"y": 653.2436277516252,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 813772147,
			"groupIds": [
				"QMpS0utXjNI9soDmIErJo"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926413,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 279,
			"versionNonce": 1363432200,
			"isDeleted": false,
			"id": "sFUH5-GtPwhQuvgdz0Wed",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1548.5116068960158,
			"y": 670.8538623494368,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 629212947,
			"groupIds": [
				"QMpS0utXjNI9soDmIErJo"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926413,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 283,
			"versionNonce": 304365944,
			"isDeleted": false,
			"id": "qpstOUGirOrc4n5LhNsHb",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1590.1217764199912,
			"y": 820.7086770555399,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1108247869,
			"groupIds": [
				"hMwjRS7yqRLOPgeTeiZgc"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926413,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 283,
			"versionNonce": 1112846856,
			"isDeleted": false,
			"id": "vj3D3_VDnQfzv6sAQwTyd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1610.0139164694058,
			"y": 821.0424269406577,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 2145703325,
			"groupIds": [
				"hMwjRS7yqRLOPgeTeiZgc"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926413,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 281,
			"versionNonce": 1074614904,
			"isDeleted": false,
			"id": "wyYtdBG1lGDDQi3R1HgAm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1590.7265166718032,
			"y": 838.6526615384693,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1666324989,
			"groupIds": [
				"hMwjRS7yqRLOPgeTeiZgc"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926413,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 283,
			"versionNonce": 268513544,
			"isDeleted": false,
			"id": "pDCHrPUXfbgfpxreG_x96",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1589.1274563917752,
			"y": 819.7143570273239,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1648533277,
			"groupIds": [
				"lB2rJxwRIogeq2XOSOSko"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926413,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 283,
			"versionNonce": 1353466744,
			"isDeleted": false,
			"id": "Gqoug9Ee7_MJip3s9IBBQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1609.0195964411898,
			"y": 820.0481069124418,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 440054653,
			"groupIds": [
				"lB2rJxwRIogeq2XOSOSko"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926413,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 281,
			"versionNonce": 298176520,
			"isDeleted": false,
			"id": "CdUJvYV-FvLUm7BufpZHd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1589.7321966435873,
			"y": 837.6583415102533,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1458650077,
			"groupIds": [
				"lB2rJxwRIogeq2XOSOSko"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926413,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 283,
			"versionNonce": 843388024,
			"isDeleted": false,
			"id": "Qqia0q26detat9Ib0IzlJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1603.0479367867988,
			"y": 862.4701182406108,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 808357203,
			"groupIds": [
				"J5SN4Nf7vJONdbkKiAsc6"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926413,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 283,
			"versionNonce": 1335791368,
			"isDeleted": false,
			"id": "RA7tSiFzPkErFBMQiXKBf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1622.9400768362134,
			"y": 862.8038681257286,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 741829363,
			"groupIds": [
				"J5SN4Nf7vJONdbkKiAsc6"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926413,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 281,
			"versionNonce": 1788593528,
			"isDeleted": false,
			"id": "E5R89UTl1g73EZrYHi7cx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1603.6526770386108,
			"y": 880.4141027235402,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 445879443,
			"groupIds": [
				"J5SN4Nf7vJONdbkKiAsc6"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926413,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 418,
			"versionNonce": 1913089544,
			"isDeleted": false,
			"id": "SnglzMF1TbrBFqyk5BGEp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1762.7145352677403,
			"y": 917.2460564583168,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 615307635,
			"groupIds": [
				"2bBhOG8TAOgrCrIVGATb5"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926413,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 418,
			"versionNonce": 653547128,
			"isDeleted": false,
			"id": "3blFsbyYIrwnvSQOWz5Lm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1782.606675317155,
			"y": 917.5798063434347,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1867985683,
			"groupIds": [
				"2bBhOG8TAOgrCrIVGATb5"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926413,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 416,
			"versionNonce": 838626568,
			"isDeleted": false,
			"id": "5QNhmmwIyVOz2tWmMS6xT",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1763.3192755195523,
			"y": 935.1900409412463,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1388665011,
			"groupIds": [
				"2bBhOG8TAOgrCrIVGATb5"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926413,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 725,
			"versionNonce": 1276299128,
			"isDeleted": false,
			"id": "bkaw5FdtHCh13Ge0bK5Hy",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1709.4871375216526,
			"y": 590.3672342361278,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1590127507,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "lQo9ysGv"
				}
			],
			"updated": 1706531926413,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 274,
			"versionNonce": 1224313864,
			"isDeleted": false,
			"id": "lQo9ysGv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1727.9090125216526,
			"y": 612.3672342361278,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1218085171,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926413,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "SK1",
			"rawText": "SK1",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "bkaw5FdtHCh13Ge0bK5Hy",
			"originalText": "SK1",
			"lineHeight": 1.25,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 732,
			"versionNonce": 104536184,
			"isDeleted": false,
			"id": "7GVvR9umrOm7PsN1LNv0S",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1759.6514188637439,
			"y": 735.3544356504103,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 2068538451,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"id": "sW2HS8Gn",
					"type": "text"
				}
			],
			"updated": 1706531926413,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 284,
			"versionNonce": 1627048712,
			"isDeleted": false,
			"id": "sW2HS8Gn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1778.0614301552478,
			"y": 756.8544356504103,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.17997741699219,
			"height": 25,
			"seed": 1268867571,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926413,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "SK7",
			"rawText": "SK7",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "7GVvR9umrOm7PsN1LNv0S",
			"originalText": "SK7",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 973,
			"versionNonce": 1496402296,
			"isDeleted": false,
			"id": "ASXoFt8wWEDS2yMM3Oc2A",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1683.789403369318,
			"y": 2303.9529022539805,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1824467976,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "zof5Fqxr"
				}
			],
			"updated": 1706531926413,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 395,
			"versionNonce": 75246088,
			"isDeleted": false,
			"id": "zof5Fqxr",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1708.070653369318,
			"y": 2325.9529022539805,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 990669576,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926413,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K4",
			"rawText": "K4",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "ASXoFt8wWEDS2yMM3Oc2A",
			"originalText": "K4",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 983,
			"versionNonce": 809065080,
			"isDeleted": false,
			"id": "X-AS6D_L8RPQwl0UV_Xt0",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2046.8803124602275,
			"y": 2303.1347204357985,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1801046536,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "eucqRqaA"
				}
			],
			"updated": 1706531926413,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 910,
			"versionNonce": 242854152,
			"isDeleted": false,
			"id": "eucqRqaA",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2071.3703179533913,
			"y": 2324.6347204357985,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.019989013671875,
			"height": 25,
			"seed": 144918792,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926413,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K7",
			"rawText": "K7",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "X-AS6D_L8RPQwl0UV_Xt0",
			"originalText": "K7",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 978,
			"versionNonce": 1847020408,
			"isDeleted": false,
			"id": "-pspBXFagLt3v5izF6_0g",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1610.789403369318,
			"y": 2304.9529022539805,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1583671304,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "ugtuYIrW"
				}
			],
			"updated": 1706531926413,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 395,
			"versionNonce": 443500552,
			"isDeleted": false,
			"id": "ugtuYIrW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1635.070653369318,
			"y": 2326.9529022539805,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 1754965768,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926413,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K5",
			"rawText": "K5",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "-pspBXFagLt3v5izF6_0g",
			"originalText": "K5",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 997,
			"versionNonce": 2098142328,
			"isDeleted": false,
			"id": "QQ_4KudzQy9Npak8HjFIV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1756.789403369318,
			"y": 2303.9529022539805,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1136690696,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "GZfYThku"
				}
			],
			"updated": 1706531926413,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 399,
			"versionNonce": 1951991560,
			"isDeleted": false,
			"id": "GZfYThku",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1779.8494161867009,
			"y": 2325.4529022539805,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 25.879974365234375,
			"height": 25,
			"seed": 483558664,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926413,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K3",
			"rawText": "K3",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "QQ_4KudzQy9Npak8HjFIV",
			"originalText": "K3",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 972,
			"versionNonce": 1592053112,
			"isDeleted": false,
			"id": "QZEqalAP-_wXiKzMQaaOT",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1976.7683459665425,
			"y": 2302.9739596567565,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 558670856,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "xvuSZQBo"
				}
			],
			"updated": 1706531926413,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 659,
			"versionNonce": 145942024,
			"isDeleted": false,
			"id": "xvuSZQBo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1999.7583514597065,
			"y": 2324.4739596567565,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 26.019989013671875,
			"height": 25,
			"seed": 1865081608,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926413,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K0",
			"rawText": "K0",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "QZEqalAP-_wXiKzMQaaOT",
			"originalText": "K0",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 934,
			"versionNonce": 1021075064,
			"isDeleted": false,
			"id": "d2uL_iw1yNZuMzdMQaWVf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1830.7683459665425,
			"y": 2303.9739596567565,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 82395656,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "FfVN3wKz"
				}
			],
			"updated": 1706531926414,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 865,
			"versionNonce": 1417209096,
			"isDeleted": false,
			"id": "FfVN3wKz",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1853.518353595937,
			"y": 2325.4739596567565,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 26.499984741210938,
			"height": 25,
			"seed": 830718216,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926414,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K2",
			"rawText": "K2",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "d2uL_iw1yNZuMzdMQaWVf",
			"originalText": "K2",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 979,
			"versionNonce": 2008665976,
			"isDeleted": false,
			"id": "aGxJZz-rVv8p_YE0luNCU",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1903.7683459665425,
			"y": 2303.9739596567565,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 74866696,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "0aONOF7d"
				}
			],
			"updated": 1706531926414,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 668,
			"versionNonce": 1428620296,
			"isDeleted": false,
			"id": "0aONOF7d",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1930.9283496286519,
			"y": 2325.4739596567565,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 17.67999267578125,
			"height": 25,
			"seed": 1035804424,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926414,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K1",
			"rawText": "K1",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "aGxJZz-rVv8p_YE0luNCU",
			"originalText": "K1",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1052,
			"versionNonce": 935403640,
			"isDeleted": false,
			"id": "piIAvG2ZvrEUjMSElxUYo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1538.8592550574517,
			"y": 2304.7921414749385,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1037303304,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "2G4V57Yq"
				}
			],
			"updated": 1706531926414,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 711,
			"versionNonce": 2025407240,
			"isDeleted": false,
			"id": "2G4V57Yq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1563.1405050574517,
			"y": 2326.7921414749385,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 1974926600,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926414,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K6",
			"rawText": "K6",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "piIAvG2ZvrEUjMSElxUYo",
			"originalText": "K6",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1010,
			"versionNonce": 2092323192,
			"isDeleted": false,
			"id": "XmZBR8QjI_GNMaZmrDoNn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2047.8525168452686,
			"y": 1609.0532911023975,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1457658888,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "konRUdm3"
				}
			],
			"updated": 1706531926414,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 544,
			"versionNonce": 229351944,
			"isDeleted": false,
			"id": "konRUdm3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2066.274391845269,
			"y": 1631.0532911023975,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1129405192,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926414,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ16",
			"rawText": "δ16",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "XmZBR8QjI_GNMaZmrDoNn",
			"originalText": "δ16",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1063,
			"versionNonce": 769483384,
			"isDeleted": false,
			"id": "awifrpKqXI5HI43xUBsup",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1899.6321967496053,
			"y": 1610.7672362151607,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 2105588232,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "yUrrojd2"
				}
			],
			"updated": 1706531926414,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 599,
			"versionNonce": 855253256,
			"isDeleted": false,
			"id": "yUrrojd2",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1918.0540717496053,
			"y": 1632.7672362151607,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 409745672,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926414,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ18",
			"rawText": "δ18",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "awifrpKqXI5HI43xUBsup",
			"originalText": "δ18",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 983,
			"versionNonce": 704271224,
			"isDeleted": false,
			"id": "ClFfmo7aWNm_bDMlQvuLq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1972.8207134609572,
			"y": 1610.767236215162,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1737480200,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "oazoeTBw"
				}
			],
			"updated": 1706531926414,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 517,
			"versionNonce": 1210105864,
			"isDeleted": false,
			"id": "oazoeTBw",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1991.2425884609572,
			"y": 1632.767236215162,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1860671240,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926414,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ17",
			"rawText": "δ17",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "ClFfmo7aWNm_bDMlQvuLq",
			"originalText": "δ17",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1016,
			"versionNonce": 1464935544,
			"isDeleted": false,
			"id": "WzEhpqeqyJZI4vVz7HVyw",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1830.710649188012,
			"y": 1609.7729161869456,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1391425032,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "FbI3hyEQ"
				}
			],
			"updated": 1706531926414,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 551,
			"versionNonce": 1562083080,
			"isDeleted": false,
			"id": "FbI3hyEQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1849.132524188012,
			"y": 1631.7729161869456,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1218671880,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926414,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ19",
			"rawText": "δ19",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "WzEhpqeqyJZI4vVz7HVyw",
			"originalText": "δ19",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1020,
			"versionNonce": 866506104,
			"isDeleted": false,
			"id": "PGFhz7yKMDhCTSdu55xIx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1687.0268868130593,
			"y": 1610.4775471782655,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 92247048,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "DTSch2ig"
				}
			],
			"updated": 1706531926414,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 555,
			"versionNonce": 577134088,
			"isDeleted": false,
			"id": "DTSch2ig",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1705.4487618130593,
			"y": 1632.4775471782655,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 796906248,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926414,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ21",
			"rawText": "δ21",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "PGFhz7yKMDhCTSdu55xIx",
			"originalText": "δ21",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1006,
			"versionNonce": 1681679992,
			"isDeleted": false,
			"id": "bpbpt0T1OL0-mw5XNFBMe",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1614.8326901299226,
			"y": 1609.0682851956249,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1293955592,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "6yRUIviH"
				}
			],
			"updated": 1706531926414,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 545,
			"versionNonce": 1492999432,
			"isDeleted": false,
			"id": "6yRUIviH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1633.2545651299226,
			"y": 1631.0682851956249,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 895267080,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926414,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ22",
			"rawText": "δ22",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "bpbpt0T1OL0-mw5XNFBMe",
			"originalText": "δ22",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1334,
			"versionNonce": 1171838840,
			"isDeleted": false,
			"id": "CC-PO2jPjePmWx2_waIMh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1539.6918410969697,
			"y": 3002.88060349568,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 2142326792,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "GWlZEJtO"
				}
			],
			"updated": 1706531926414,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 869,
			"versionNonce": 1113357320,
			"isDeleted": false,
			"id": "GWlZEJtO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1558.1137160969697,
			"y": 3024.88060349568,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1947864840,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926414,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ31",
			"rawText": "δ31",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "CC-PO2jPjePmWx2_waIMh",
			"originalText": "δ31",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1023,
			"versionNonce": 2092902520,
			"isDeleted": false,
			"id": "mH8jzqef9nVIb9Gv46x-q",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1541.3544843816749,
			"y": 1610.352294260736,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 2064838152,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "8UvZMpu7"
				}
			],
			"updated": 1706531926414,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 558,
			"versionNonce": 276806408,
			"isDeleted": false,
			"id": "8UvZMpu7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1559.7763593816749,
			"y": 1632.352294260736,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 228060424,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926414,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ23",
			"rawText": "δ23",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "mH8jzqef9nVIb9Gv46x-q",
			"originalText": "δ23",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1022,
			"versionNonce": 78862712,
			"isDeleted": false,
			"id": "VCYcik3MXnuSo2LeGplxQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1758.22676346798,
			"y": 1610.7672362151616,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 623184904,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "p6FFfasH"
				}
			],
			"updated": 1706531926414,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 561,
			"versionNonce": 1440946696,
			"isDeleted": false,
			"id": "p6FFfasH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1776.64863846798,
			"y": 1632.7672362151616,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 733367048,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926414,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ20",
			"rawText": "δ20",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "VCYcik3MXnuSo2LeGplxQ",
			"originalText": "δ20",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1239,
			"versionNonce": 1090087544,
			"isDeleted": false,
			"id": "1nAsqy_B85PWizp8hNm4e",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1978.44149290056,
			"y": 3000.4521615611698,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1808247304,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "A6lXD134"
				}
			],
			"updated": 1706531926414,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 778,
			"versionNonce": 1971493128,
			"isDeleted": false,
			"id": "A6lXD134",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1996.86336790056,
			"y": 3022.4521615611698,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 5581064,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926414,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ25",
			"rawText": "δ25",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "1nAsqy_B85PWizp8hNm4e",
			"originalText": "δ25",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1161,
			"versionNonce": 206920568,
			"isDeleted": false,
			"id": "wgTBInOG21-eYO2AMejot",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2051.630009611912,
			"y": 3000.4521615611707,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1155188744,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "FvonKt3g"
				}
			],
			"updated": 1706531926414,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 701,
			"versionNonce": 316291080,
			"isDeleted": false,
			"id": "FvonKt3g",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2070.051884611912,
			"y": 3022.4521615611707,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1163167496,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926414,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ24",
			"rawText": "δ24",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "wgTBInOG21-eYO2AMejot",
			"originalText": "δ24",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1186,
			"versionNonce": 1225469048,
			"isDeleted": false,
			"id": "3VRRWac6Seic640o0jUAG",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1906.5369852543188,
			"y": 3000.4521615611707,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 775841288,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "Z8O8GMDg"
				}
			],
			"updated": 1706531926414,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 722,
			"versionNonce": 31848200,
			"isDeleted": false,
			"id": "Z8O8GMDg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1924.9588602543188,
			"y": 3022.4521615611707,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1016358152,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926414,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ26",
			"rawText": "δ26",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "3VRRWac6Seic640o0jUAG",
			"originalText": "δ26",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1187,
			"versionNonce": 1893653880,
			"isDeleted": false,
			"id": "10UU01Pby9tB3xS1G-YXW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1758.8759427665025,
			"y": 2999.168152496059,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 768771080,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "F9aojpgS"
				}
			],
			"updated": 1706531926414,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 724,
			"versionNonce": 924964360,
			"isDeleted": false,
			"id": "F9aojpgS",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1777.2978177665025,
			"y": 3021.168152496059,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 804569864,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926414,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ28",
			"rawText": "δ28",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "10UU01Pby9tB3xS1G-YXW",
			"originalText": "δ28",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1170,
			"versionNonce": 622095992,
			"isDeleted": false,
			"id": "X7ouZBmtg3S60JYJYMUQN",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1685.68742605515,
			"y": 3001.7361706262823,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1366761992,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "YFhWCWt4"
				}
			],
			"updated": 1706531926414,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 709,
			"versionNonce": 931779848,
			"isDeleted": false,
			"id": "YFhWCWt4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1704.10930105515,
			"y": 3023.7361706262823,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1901437192,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926414,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ29",
			"rawText": "δ29",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "X7ouZBmtg3S60JYJYMUQN",
			"originalText": "δ29",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1185,
			"versionNonce": 1047519096,
			"isDeleted": false,
			"id": "VBr5U_gsydcl5r9EA-ESg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1611.2149002786862,
			"y": 3003.020179691393,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 789331976,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "6eaSDgY5"
				}
			],
			"updated": 1706531926414,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 723,
			"versionNonce": 144307208,
			"isDeleted": false,
			"id": "6eaSDgY5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1629.6367752786862,
			"y": 3025.020179691393,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1519845128,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926415,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ30",
			"rawText": "δ30",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "VBr5U_gsydcl5r9EA-ESg",
			"originalText": "δ30",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1194,
			"versionNonce": 1563766904,
			"isDeleted": false,
			"id": "T7CZ09m7dnQlI-2JleiWJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1832.064459477855,
			"y": 3000.4521615611707,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1685184008,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "DyVtFusZ"
				}
			],
			"updated": 1706531926415,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 730,
			"versionNonce": 541995784,
			"isDeleted": false,
			"id": "DyVtFusZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1850.486334477855,
			"y": 3022.4521615611707,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1301863688,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926415,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ27",
			"rawText": "δ27",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "T7CZ09m7dnQlI-2JleiWJ",
			"originalText": "δ27",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 834,
			"versionNonce": 2032689528,
			"isDeleted": false,
			"id": "oOL_Hsdug53_UB7Im52rp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2166.5666534118764,
			"y": 1698.8171819748754,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 394787848,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "QyF1iQIA"
				}
			],
			"updated": 1706531926415,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 380,
			"versionNonce": 1428328968,
			"isDeleted": false,
			"id": "QyF1iQIA",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2179.1291534118764,
			"y": 1720.8171819748754,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 876296968,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926415,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK16",
			"rawText": "SK16",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "oOL_Hsdug53_UB7Im52rp",
			"originalText": "SK16",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 332,
			"versionNonce": 1905095288,
			"isDeleted": false,
			"id": "Wwh95ATFX_WgWDbjcUY6_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2064.5287522655863,
			"y": 1714.6862204512977,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1982765576,
			"groupIds": [
				"qaTS8L48fILk2KTGjv0RN"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "DvogTLZpoxAh0jzMyv-i2",
					"type": "arrow"
				}
			],
			"updated": 1706531926415,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 331,
			"versionNonce": 1309872392,
			"isDeleted": false,
			"id": "B7MnnlvIvsCUl1q5e0si5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2084.420892315001,
			"y": 1715.0199703364156,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 6166792,
			"groupIds": [
				"qaTS8L48fILk2KTGjv0RN"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926415,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 329,
			"versionNonce": 489186168,
			"isDeleted": false,
			"id": "Y--IxrN7VkS0i11TnFU7c",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2065.1334925173987,
			"y": 1732.630204934227,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 910538760,
			"groupIds": [
				"qaTS8L48fILk2KTGjv0RN"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926415,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "line",
			"version": 250,
			"versionNonce": 1922805768,
			"isDeleted": false,
			"id": "sT2qBbsQaA3-GfP1iLA7Y",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2085.7014387551053,
			"y": 1676.5440487226901,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 624.5236947903879,
			"seed": 736196360,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926415,
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
					624.5236947903879
				]
			]
		},
		{
			"type": "line",
			"version": 290,
			"versionNonce": 1513960568,
			"isDeleted": false,
			"id": "VdjUcI8XQa-gNCen-iyCO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2013.2560484422272,
			"y": 1678.7560603634615,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 620.2087187373074,
			"seed": 363681288,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926415,
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
					620.2087187373074
				]
			]
		},
		{
			"type": "line",
			"version": 310,
			"versionNonce": 1522036488,
			"isDeleted": false,
			"id": "gmlweKPtMxkZa9nK2YNOQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1936.6934062695984,
			"y": 1678.7560603634615,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 622.3116831496168,
			"seed": 950359304,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926415,
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
					622.3116831496168
				]
			]
		},
		{
			"type": "line",
			"version": 296,
			"versionNonce": 512746872,
			"isDeleted": false,
			"id": "la76W6i_kn-zj0f9uonhl",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1867.0910042944813,
			"y": 1678.7560603634615,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 623.3631653557718,
			"seed": 1514501128,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926415,
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
					623.3631653557718
				]
			]
		},
		{
			"type": "line",
			"version": 272,
			"versionNonce": 1055215112,
			"isDeleted": false,
			"id": "SvrEXSI-SQt4i2HUTzs9W",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1794.5056422347166,
			"y": 1677.7617403352456,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 624.357485383988,
			"seed": 814330632,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926415,
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
					624.357485383988
				]
			]
		},
		{
			"type": "line",
			"version": 365,
			"versionNonce": 124024440,
			"isDeleted": false,
			"id": "QGodBwx4CPNx-rdm6Aw3y",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1720.9259601467359,
			"y": 1675.7731002788137,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 627.3976076465744,
			"seed": 1374556680,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926415,
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
					627.3976076465744
				]
			]
		},
		{
			"type": "line",
			"version": 383,
			"versionNonce": 1746816264,
			"isDeleted": false,
			"id": "09enAnji-t5SewPELfT2f",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1648.3405980869709,
			"y": 1678.7560603634615,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 625.4661297680814,
			"seed": 628003080,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926415,
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
					625.4661297680814
				]
			]
		},
		{
			"type": "line",
			"version": 390,
			"versionNonce": 1769924472,
			"isDeleted": false,
			"id": "r81fMVAAZwIBtICkycb5H",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1575.755236027206,
			"y": 1680.744700419893,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 622.4260075054949,
			"seed": 1384591368,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926415,
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
					622.4260075054949
				]
			]
		},
		{
			"type": "rectangle",
			"version": 868,
			"versionNonce": 534735880,
			"isDeleted": false,
			"id": "NiekXcfxur_YhkCNK-vbK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2168.050929555825,
			"y": 1769.3938759827274,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 825487112,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "Vu8313mK"
				},
				{
					"id": "QRJNRrr3S098r5v3Cvn_P",
					"type": "arrow"
				}
			],
			"updated": 1706531926415,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 420,
			"versionNonce": 1629698168,
			"isDeleted": false,
			"id": "Vu8313mK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2180.613429555825,
			"y": 1791.3938759827274,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 972082696,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926415,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK17",
			"rawText": "SK17",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "NiekXcfxur_YhkCNK-vbK",
			"originalText": "SK17",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 891,
			"versionNonce": 539273992,
			"isDeleted": false,
			"id": "RhRJkcnLyNSNB--3srLMj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2169.045249584041,
			"y": 1838.996277957845,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1975110920,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "JMSp1dMv"
				},
				{
					"id": "lY5_hYmpiNLzGlI2RCFGG",
					"type": "arrow"
				}
			],
			"updated": 1706531926415,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 444,
			"versionNonce": 1645570424,
			"isDeleted": false,
			"id": "JMSp1dMv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2181.607749584041,
			"y": 1860.996277957845,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1846209544,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926415,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK18",
			"rawText": "SK18",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "RhRJkcnLyNSNB--3srLMj",
			"originalText": "SK18",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 933,
			"versionNonce": 57281032,
			"isDeleted": false,
			"id": "WfM5QlMRsq8rvz8FoJuiv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2170.039569612257,
			"y": 1976.2124418516464,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 484453128,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "NCdlDp84"
				},
				{
					"id": "WZ-RK8HZDFAXwlf9I3-O_",
					"type": "arrow"
				}
			],
			"updated": 1706531926415,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 483,
			"versionNonce": 1201240696,
			"isDeleted": false,
			"id": "NCdlDp84",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2182.602069612257,
			"y": 1998.2124418516464,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1555401224,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926415,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK20",
			"rawText": "SK20",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "WfM5QlMRsq8rvz8FoJuiv",
			"originalText": "SK20",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 918,
			"versionNonce": 883656968,
			"isDeleted": false,
			"id": "ywhOxWvdBCSjnD9O2_Cq7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2169.045249584041,
			"y": 1909.5929999611785,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1485244680,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "o3fCXe7Y"
				},
				{
					"id": "Pd44IE-SDakj894Ky_Nag",
					"type": "arrow"
				}
			],
			"updated": 1706531926415,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 472,
			"versionNonce": 1685285752,
			"isDeleted": false,
			"id": "o3fCXe7Y",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2181.607749584041,
			"y": 1931.5929999611785,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 2077272072,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926415,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK19",
			"rawText": "SK19",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "ywhOxWvdBCSjnD9O2_Cq7",
			"originalText": "SK19",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 926,
			"versionNonce": 1600464904,
			"isDeleted": false,
			"id": "Z79jLiQUrrrL1BGGAzUpq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2169.045249584041,
			"y": 2044.820523798548,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1653499656,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "FpDrg8GY"
				},
				{
					"id": "KcaG3GXcmdG5JeSmyvWj2",
					"type": "arrow"
				}
			],
			"updated": 1706531926415,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 478,
			"versionNonce": 317144184,
			"isDeleted": false,
			"id": "FpDrg8GY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2181.607749584041,
			"y": 2066.820523798548,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1228686856,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926415,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK21",
			"rawText": "SK21",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "Z79jLiQUrrrL1BGGAzUpq",
			"originalText": "SK21",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 391,
			"versionNonce": 1603462920,
			"isDeleted": false,
			"id": "BUS2Oo9G75U_d9Tz6CPs_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1993.5935569181472,
			"y": 1782.434457551773,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1255695368,
			"groupIds": [
				"ejMpYJiJryu07n9H6sT3I"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "QRJNRrr3S098r5v3Cvn_P",
					"type": "arrow"
				}
			],
			"updated": 1706531926415,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 390,
			"versionNonce": 1152970104,
			"isDeleted": false,
			"id": "uuWUXgnNIom4C3nEhCpMo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2013.4856969675618,
			"y": 1782.7682074368909,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1899930376,
			"groupIds": [
				"ejMpYJiJryu07n9H6sT3I"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926415,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 388,
			"versionNonce": 833668616,
			"isDeleted": false,
			"id": "IogSh1uHRLd3YFqE3XQ1g",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1994.1982971699592,
			"y": 1800.378442034702,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 243597832,
			"groupIds": [
				"ejMpYJiJryu07n9H6sT3I"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926415,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 441,
			"versionNonce": 321683064,
			"isDeleted": false,
			"id": "rYngv4t0t8h8wLKpqyfIa",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1916.8616780734658,
			"y": 1854.0254995833225,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 706879496,
			"groupIds": [
				"aK36AStReb6bbTCC8gGx5"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "lY5_hYmpiNLzGlI2RCFGG",
					"type": "arrow"
				}
			],
			"updated": 1706531926415,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 440,
			"versionNonce": 1656407304,
			"isDeleted": false,
			"id": "Itd4zf0mYWGUCjY-pR_Ur",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1936.7538181228804,
			"y": 1854.3592494684403,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 938532616,
			"groupIds": [
				"aK36AStReb6bbTCC8gGx5"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926415,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 438,
			"versionNonce": 1325789048,
			"isDeleted": false,
			"id": "yexOCBkX3uYMcdOp0xyfR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1917.4664183252778,
			"y": 1871.969484066251,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 999276040,
			"groupIds": [
				"aK36AStReb6bbTCC8gGx5"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926415,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 514,
			"versionNonce": 2941960,
			"isDeleted": false,
			"id": "Ll3Q0gAtZbDsV7CBY-bEq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1845.6831777199984,
			"y": 1924.622221586655,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1756224520,
			"groupIds": [
				"v9bUlVihVXc6dT5vj8jat"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926415,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 514,
			"versionNonce": 277430392,
			"isDeleted": false,
			"id": "l7UBvN2K-tXE5W4ovFQQa",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1865.575317769413,
			"y": 1924.955971471773,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 631577352,
			"groupIds": [
				"v9bUlVihVXc6dT5vj8jat"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926415,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 512,
			"versionNonce": 134423304,
			"isDeleted": false,
			"id": "-pv4u5z0mjqSOuWDGJ-hs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1846.2879179718104,
			"y": 1942.5662060695845,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1599896072,
			"groupIds": [
				"v9bUlVihVXc6dT5vj8jat"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926415,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 558,
			"versionNonce": 1199206776,
			"isDeleted": false,
			"id": "uCy4S0SiuDYaTmluETnzr",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1772.8069264851663,
			"y": 1991.241663477124,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1434163208,
			"groupIds": [
				"YU8h5XAgHFVW4bTP1jATe"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926416,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 558,
			"versionNonce": 1488552456,
			"isDeleted": false,
			"id": "6TMwo7-9zLLTrQbQ2kMds",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1792.699066534581,
			"y": 1991.5754133622418,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 693851912,
			"groupIds": [
				"YU8h5XAgHFVW4bTP1jATe"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926416,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 556,
			"versionNonce": 1260225144,
			"isDeleted": false,
			"id": "WG0rSQSalrKi-HD4KhXKR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1773.4116667369783,
			"y": 2009.1856479600533,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 149632520,
			"groupIds": [
				"YU8h5XAgHFVW4bTP1jATe"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926416,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 950,
			"versionNonce": 558629128,
			"isDeleted": false,
			"id": "9nLSw8ctMxTaPCuzG1h5v",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2169.045249584041,
			"y": 2114.4229257736647,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1066095624,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "io69TSik"
				},
				{
					"id": "YGb2-uStWGSzXjfgChC-6",
					"type": "arrow"
				}
			],
			"updated": 1706531926416,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 503,
			"versionNonce": 1781953400,
			"isDeleted": false,
			"id": "io69TSik",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2181.607749584041,
			"y": 2136.4229257736647,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 840143624,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926416,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK22",
			"rawText": "SK22",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "9nLSw8ctMxTaPCuzG1h5v",
			"originalText": "SK22",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 605,
			"versionNonce": 1362534408,
			"isDeleted": false,
			"id": "_AVQ0p_iGK0f6w-Pbj5od",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1701.2611991547517,
			"y": 2062.43395535045,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1195110920,
			"groupIds": [
				"-Hr0NkOrgDpxkYps3sHFo"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "KcaG3GXcmdG5JeSmyvWj2",
					"type": "arrow"
				}
			],
			"updated": 1706531926416,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 604,
			"versionNonce": 2064204920,
			"isDeleted": false,
			"id": "8jqmZ02cKSIcD6clnCYvm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1721.1533392041665,
			"y": 2062.767705235568,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1979740424,
			"groupIds": [
				"-Hr0NkOrgDpxkYps3sHFo"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926416,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 602,
			"versionNonce": 141909768,
			"isDeleted": false,
			"id": "e6RsqgOWe6jmJ2QidmtSi",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1701.8659394065637,
			"y": 2080.3779398333795,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1977421832,
			"groupIds": [
				"-Hr0NkOrgDpxkYps3sHFo"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926416,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 671,
			"versionNonce": 1801057656,
			"isDeleted": false,
			"id": "Gk6tk_sVF-g2hfLyLfR3l",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1627.440084554942,
			"y": 2132.3057845871394,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 693022216,
			"groupIds": [
				"TLmFHzSxGgXTHlO56tpvN"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926416,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 671,
			"versionNonce": 126107144,
			"isDeleted": false,
			"id": "dCUNJ0qzgf_l--pTV1W8l",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1647.3322246043565,
			"y": 2132.6395344722573,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 2119937288,
			"groupIds": [
				"TLmFHzSxGgXTHlO56tpvN"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926416,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 669,
			"versionNonce": 1349289592,
			"isDeleted": false,
			"id": "JlCsBQRgCT6Wm5MLCrE45",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1628.044824806754,
			"y": 2150.249769070068,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1198574600,
			"groupIds": [
				"TLmFHzSxGgXTHlO56tpvN"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926416,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 993,
			"versionNonce": 526335240,
			"isDeleted": false,
			"id": "7lQgL-iQ8QbJyVoeC_kSZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2170.4214888236247,
			"y": 2183.155716241968,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1042508296,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "C7B0UV5l"
				},
				{
					"id": "kYZeauI9HYYUNCXtvagex",
					"type": "arrow"
				}
			],
			"updated": 1706531926416,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 552,
			"versionNonce": 1996814200,
			"isDeleted": false,
			"id": "C7B0UV5l",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2182.9839888236247,
			"y": 2205.155716241968,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 288942344,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926416,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK23",
			"rawText": "SK23",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "7lQgL-iQ8QbJyVoeC_kSZ",
			"originalText": "SK23",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 724,
			"versionNonce": 562191368,
			"isDeleted": false,
			"id": "7oWTzRtRb82uQLBYbP7C_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1555.119966978855,
			"y": 2200.081353058474,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 54953992,
			"groupIds": [
				"DIjlB4UxMu26xcnmz5w0C"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "kYZeauI9HYYUNCXtvagex",
					"type": "arrow"
				}
			],
			"updated": 1706531926416,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 723,
			"versionNonce": 1936148600,
			"isDeleted": false,
			"id": "psgPnEvFWy5y5Npu5yq8U",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1575.0121070282696,
			"y": 2200.415102943592,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1078478600,
			"groupIds": [
				"DIjlB4UxMu26xcnmz5w0C"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926416,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 721,
			"versionNonce": 1340709640,
			"isDeleted": false,
			"id": "N6iOPSsAPsH4UITmtgSlz",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1555.724707230667,
			"y": 2218.0253375414027,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 347743752,
			"groupIds": [
				"DIjlB4UxMu26xcnmz5w0C"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926416,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1258,
			"versionNonce": 827816312,
			"isDeleted": false,
			"id": "i2devUhDmkqpYWlshxRo9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1774.1849297368217,
			"y": 4533.950582466279,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 2019443720,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "HMkeVuyl"
				}
			],
			"updated": 1706531926416,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 810,
			"versionNonce": 1292958216,
			"isDeleted": false,
			"id": "HMkeVuyl",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1786.7474297368217,
			"y": 4555.950582466279,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 856195848,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926416,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK15",
			"rawText": "SK15",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "i2devUhDmkqpYWlshxRo9",
			"originalText": "SK15",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 783,
			"versionNonce": 68782712,
			"isDeleted": false,
			"id": "Na62KclgfLBPH08MnE_By",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1672.1470285905325,
			"y": 4549.819620942701,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1007870472,
			"groupIds": [
				"Vdf1OlxEcsvTxrLQmLllj"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926416,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 783,
			"versionNonce": 200571144,
			"isDeleted": false,
			"id": "iGpXi9-Y416zv8b1XVELn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1692.0391686399466,
			"y": 4550.153370827818,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 309944584,
			"groupIds": [
				"Vdf1OlxEcsvTxrLQmLllj"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926416,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 781,
			"versionNonce": 913406840,
			"isDeleted": false,
			"id": "MFtNfBP_1RkgJvJRStyqv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1672.751768842344,
			"y": 4567.763605425629,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1974992904,
			"groupIds": [
				"Vdf1OlxEcsvTxrLQmLllj"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926416,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "line",
			"version": 544,
			"versionNonce": 1074796552,
			"isDeleted": false,
			"id": "yZsg5WNh7xYMvKwHkmxur",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1692.268232873896,
			"y": 4024.8411877643844,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 624.5236947903879,
			"seed": 1439350536,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926416,
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
					624.5236947903879
				]
			]
		},
		{
			"type": "line",
			"version": 584,
			"versionNonce": 446909560,
			"isDeleted": false,
			"id": "S-gnDWpf2lFS91PbBNlCZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1619.8228425610182,
			"y": 4027.053199405155,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 620.2087187373074,
			"seed": 1127063048,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926416,
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
					620.2087187373074
				]
			]
		},
		{
			"type": "line",
			"version": 604,
			"versionNonce": 1298126600,
			"isDeleted": false,
			"id": "MrWHeFhZSp8awdmyeg3ql",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1543.2602003883894,
			"y": 4027.0531994051557,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 622.3116831496168,
			"seed": 1591516424,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926416,
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
					622.3116831496168
				]
			]
		},
		{
			"type": "line",
			"version": 590,
			"versionNonce": 443743608,
			"isDeleted": false,
			"id": "V1oekcHpWSKr8oq4YiEUa",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1473.6577984132723,
			"y": 4027.0531994051557,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 623.3631653557718,
			"seed": 1247001608,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926416,
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
					623.3631653557718
				]
			]
		},
		{
			"type": "line",
			"version": 566,
			"versionNonce": 945796616,
			"isDeleted": false,
			"id": "M3aw1JVxATn4D0vR5A_3e",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1401.0724363535073,
			"y": 4026.058879376939,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 624.357485383988,
			"seed": 395246344,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926416,
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
					624.357485383988
				]
			]
		},
		{
			"type": "line",
			"version": 659,
			"versionNonce": 1193578104,
			"isDeleted": false,
			"id": "_9BQuI5MKDcK7v3vBI6d-",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1327.4927542655264,
			"y": 4024.070239320507,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 627.3976076465744,
			"seed": 956979720,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926416,
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
					627.3976076465744
				]
			]
		},
		{
			"type": "line",
			"version": 677,
			"versionNonce": 369865992,
			"isDeleted": false,
			"id": "Pu7ntMwy8J-DNE2lChp1T",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1254.9073922057614,
			"y": 4027.0531994051557,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 625.4661297680814,
			"seed": 1908529416,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926416,
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
					625.4661297680814
				]
			]
		},
		{
			"type": "line",
			"version": 684,
			"versionNonce": 1769734008,
			"isDeleted": false,
			"id": "LkbSxMg2_S7idtCQhMO-M",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1182.3220301459965,
			"y": 4029.0418394615867,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 622.4260075054949,
			"seed": 1160869896,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926416,
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
					622.4260075054949
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1333,
			"versionNonce": 2078266376,
			"isDeleted": false,
			"id": "lcfml2Pcy8Nog9mypTa9M",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1774.6177236746157,
			"y": 4465.731625261686,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1733637896,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "ziyKUjfa"
				}
			],
			"updated": 1706531926416,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 889,
			"versionNonce": 297619576,
			"isDeleted": false,
			"id": "ziyKUjfa",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1787.1802236746157,
			"y": 4487.731625261686,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 749278728,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926416,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK14",
			"rawText": "SK14",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "lcfml2Pcy8Nog9mypTa9M",
			"originalText": "SK14",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1366,
			"versionNonce": 1876431624,
			"isDeleted": false,
			"id": "XTXQvdfiUbkPn3z9AtJdu",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1775.6120437028317,
			"y": 4396.53837602436,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 2049512712,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "emOc0fwk"
				}
			],
			"updated": 1706531926416,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 925,
			"versionNonce": 665616760,
			"isDeleted": false,
			"id": "emOc0fwk",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1788.1745437028317,
			"y": 4418.53837602436,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 894514184,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926416,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK13",
			"rawText": "SK13",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "XTXQvdfiUbkPn3z9AtJdu",
			"originalText": "SK13",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1447,
			"versionNonce": 1483764232,
			"isDeleted": false,
			"id": "UagyfsY5gDmbTKSdduykm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1778.7093281433572,
			"y": 4259.317684111738,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 874345224,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "K719VHWR"
				}
			],
			"updated": 1706531926416,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 999,
			"versionNonce": 2056098424,
			"isDeleted": false,
			"id": "K719VHWR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1791.2718281433572,
			"y": 4281.317684111738,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 755618312,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926416,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK11",
			"rawText": "SK11",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "UagyfsY5gDmbTKSdduykm",
			"originalText": "SK11",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1370,
			"versionNonce": 1822748936,
			"isDeleted": false,
			"id": "laWBLWfDJ0P5Ntr4UYsZS",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1775.6120437028317,
			"y": 4326.236482402939,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 655511816,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "QRjQquFS"
				}
			],
			"updated": 1706531926416,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 930,
			"versionNonce": 1361347448,
			"isDeleted": false,
			"id": "QRjQquFS",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1788.1745437028317,
			"y": 4348.236482402939,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1773334536,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926417,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK12",
			"rawText": "SK12",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "laWBLWfDJ0P5Ntr4UYsZS",
			"originalText": "SK12",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1394,
			"versionNonce": 603033608,
			"isDeleted": false,
			"id": "hSLI11dsQvJ3f-qDpahYk",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1775.6120437028312,
			"y": 4191.233079258505,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1827122952,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "TJ7oy2fo"
				}
			],
			"updated": 1706531926417,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 947,
			"versionNonce": 2041926776,
			"isDeleted": false,
			"id": "TJ7oy2fo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1788.1745437028312,
			"y": 4213.233079258505,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1227656712,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926417,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK10",
			"rawText": "SK10",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "hSLI11dsQvJ3f-qDpahYk",
			"originalText": "SK10",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "line",
			"version": 717,
			"versionNonce": 642928392,
			"isDeleted": false,
			"id": "gKDVJl3_-_ql2cuKxqvET",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1713.2315230873905,
			"y": 4567.930554470797,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 59.659201692957595,
			"height": 0,
			"seed": 662539528,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926417,
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
					59.659201692957595,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 856,
			"versionNonce": 1510212984,
			"isDeleted": false,
			"id": "WnGi5707nWtbkN87SDC8p",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1600.1603510369382,
			"y": 4478.772206830732,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 827763720,
			"groupIds": [
				"gLfQ1j-DtvMgqpYINPVEW"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926417,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 856,
			"versionNonce": 1011035656,
			"isDeleted": false,
			"id": "bzevZ7nd72Qgv8ixuvzlP",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1620.0524910863528,
			"y": 4479.10595671585,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 11791112,
			"groupIds": [
				"gLfQ1j-DtvMgqpYINPVEW"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926417,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 854,
			"versionNonce": 2136249976,
			"isDeleted": false,
			"id": "GzdmNELQWziTc8t_C8Vns",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1600.7650912887502,
			"y": 4496.716191313661,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 269568520,
			"groupIds": [
				"gLfQ1j-DtvMgqpYINPVEW"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926417,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "line",
			"version": 810,
			"versionNonce": 1052781832,
			"isDeleted": false,
			"id": "2huXeBw498ffVCkhTPxA-",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1641.2448455337967,
			"y": 4496.883140358828,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 133.5773571250446,
			"height": 0,
			"seed": 711641352,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926417,
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
					133.5773571250446,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 916,
			"versionNonce": 778766200,
			"isDeleted": false,
			"id": "uMUhrRX1w6OznKvpI2XH6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1523.4284721922563,
			"y": 4411.567597649837,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1530685448,
			"groupIds": [
				"hZSbAw49ghUWHfnjCNCYi"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926417,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 916,
			"versionNonce": 121981960,
			"isDeleted": false,
			"id": "UslV_2-lSwFfSpTTo57mz",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1543.320612241671,
			"y": 4411.901347534955,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1585587976,
			"groupIds": [
				"hZSbAw49ghUWHfnjCNCYi"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926417,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 914,
			"versionNonce": 1938511992,
			"isDeleted": false,
			"id": "CMLnijnogCNt8R0_Mjd5w",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1524.0332124440683,
			"y": 4429.511582132765,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 280495624,
			"groupIds": [
				"hZSbAw49ghUWHfnjCNCYi"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926417,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "line",
			"version": 916,
			"versionNonce": 1607371528,
			"isDeleted": false,
			"id": "_d6_dt-hzqnjx_LGY8L7N",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1564.5129666891148,
			"y": 4429.678531177933,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 210.30923596972627,
			"height": 0,
			"seed": 1591346440,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926417,
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
					210.30923596972627,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 967,
			"versionNonce": 846825848,
			"isDeleted": false,
			"id": "SKpj3fXW8Eb2YNuCcQsoy",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1452.2499718387894,
			"y": 4341.265704028416,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 912532488,
			"groupIds": [
				"YEZKvaWWFKjFSzCrBeNmF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926417,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 967,
			"versionNonce": 1926752776,
			"isDeleted": false,
			"id": "Ehw4Nfol7OI1cBjDvxnsD",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1472.142111888204,
			"y": 4341.599453913534,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1968333576,
			"groupIds": [
				"YEZKvaWWFKjFSzCrBeNmF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926417,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 965,
			"versionNonce": 913939064,
			"isDeleted": false,
			"id": "_-YWbexd6dXKdIr8ldnBT",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1452.8547120906014,
			"y": 4359.209688511346,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1512096264,
			"groupIds": [
				"YEZKvaWWFKjFSzCrBeNmF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926417,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "line",
			"version": 1003,
			"versionNonce": 995977480,
			"isDeleted": false,
			"id": "gc7E6jYm7pmHrROVdgPLR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1493.334466335648,
			"y": 4359.376637556514,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 282.48205635140937,
			"height": 0,
			"seed": 1942700296,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926417,
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
					282.48205635140937,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1073,
			"versionNonce": 1112509304,
			"isDeleted": false,
			"id": "FjGPjvtRDxk4n4Nc1Q3hI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1381.4766850162669,
			"y": 4274.346905737215,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 298704904,
			"groupIds": [
				"ocrNZQFYKNxWk2N3e97B2"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926417,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1073,
			"versionNonce": 1960511496,
			"isDeleted": false,
			"id": "Vsap_qXeAQYgMMFIFhQsm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1401.3688250656814,
			"y": 4274.680655622333,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 874815240,
			"groupIds": [
				"ocrNZQFYKNxWk2N3e97B2"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926417,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 1071,
			"versionNonce": 541023352,
			"isDeleted": false,
			"id": "-Oq1x15AYqceRjQOyvARl",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1382.0814252680789,
			"y": 4292.290890220145,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 2068545032,
			"groupIds": [
				"ocrNZQFYKNxWk2N3e97B2"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926417,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "line",
			"version": 1140,
			"versionNonce": 189581064,
			"isDeleted": false,
			"id": "CS55DEVnyd5r9MhY-6c4h",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1422.5611795131254,
			"y": 4292.457839265313,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 354.36398755802554,
			"height": 0,
			"seed": 406748424,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926417,
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
					354.36398755802554,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1393,
			"versionNonce": 839716216,
			"isDeleted": false,
			"id": "xmeUKAO4Wnd1a3GSL4sTH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1775.6120437028317,
			"y": 4123.091312227334,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1014602760,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "ZJnAIRfK"
				}
			],
			"updated": 1706531926417,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 946,
			"versionNonce": 187606536,
			"isDeleted": false,
			"id": "ZJnAIRfK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1794.0339187028317,
			"y": 4145.091312227334,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 167303944,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926417,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK9",
			"rawText": "SK9",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "xmeUKAO4Wnd1a3GSL4sTH",
			"originalText": "SK9",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1073,
			"versionNonce": 16555640,
			"isDeleted": false,
			"id": "LOfvN4CvkYDe5KZw_JLCr",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1307.8279932735422,
			"y": 4208.8465108104065,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 54016520,
			"groupIds": [
				"0-OoOSrmf8tO6yrX4gZiw"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926417,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1073,
			"versionNonce": 293381384,
			"isDeleted": false,
			"id": "shaHAlBA5px-C2sep68wf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1327.7201333229573,
			"y": 4209.180260695524,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 2066987272,
			"groupIds": [
				"0-OoOSrmf8tO6yrX4gZiw"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926417,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 1071,
			"versionNonce": 1305612152,
			"isDeleted": false,
			"id": "gDIs2ExN5r6TKtFxlYsQR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1308.4327335253543,
			"y": 4226.790495293337,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 90658824,
			"groupIds": [
				"0-OoOSrmf8tO6yrX4gZiw"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926417,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "line",
			"version": 1178,
			"versionNonce": 1001571336,
			"isDeleted": false,
			"id": "nzkV24f7h7YtPpskGZ7_6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1348.9124877704012,
			"y": 4226.9574443385045,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 426.14537358638324,
			"height": 0,
			"seed": 1708070664,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926417,
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
					426.14537358638324,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1115,
			"versionNonce": 550592632,
			"isDeleted": false,
			"id": "-47uQov90I88OzL3KdCE4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1234.0068786737324,
			"y": 4140.974171040807,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 15136264,
			"groupIds": [
				"QMJLeCpgGewniHgop_8EG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926417,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1115,
			"versionNonce": 399311624,
			"isDeleted": false,
			"id": "2hDeTqKg83GnPOSlRf1x0",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1253.899018723147,
			"y": 4141.307920925925,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1269495048,
			"groupIds": [
				"QMJLeCpgGewniHgop_8EG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926417,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 1113,
			"versionNonce": 1505661304,
			"isDeleted": false,
			"id": "dSRXBS4eajVPx08w8qpEj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1234.6116189255445,
			"y": 4158.918155523736,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 999756808,
			"groupIds": [
				"QMJLeCpgGewniHgop_8EG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926417,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "line",
			"version": 1261,
			"versionNonce": 340222472,
			"isDeleted": false,
			"id": "e4htZq7RP2v15xBZ3y5Li",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1275.091373170591,
			"y": 4159.085104568903,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 500.96465717528883,
			"height": 0,
			"seed": 916935432,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926417,
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
					500.96465717528883,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1471,
			"versionNonce": 1071489656,
			"isDeleted": false,
			"id": "BvhADICDIU1OQoToUh-c-",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1776.9882829424155,
			"y": 4054.0799336893483,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 56078856,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "evOSgzJ3"
				}
			],
			"updated": 1706531926417,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1026,
			"versionNonce": 1881006344,
			"isDeleted": false,
			"id": "evOSgzJ3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1795.4101579424155,
			"y": 4076.0799336893483,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 950284552,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926417,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK8",
			"rawText": "SK8",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "BvhADICDIU1OQoToUh-c-",
			"originalText": "SK8",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1201,
			"versionNonce": 301110136,
			"isDeleted": false,
			"id": "xsNyta-doy1S5yL9OhMrS",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1161.6867610976456,
			"y": 4071.0055705058535,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 772329480,
			"groupIds": [
				"WyFU0jkvTzmvrcy3R5JFK"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926417,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1201,
			"versionNonce": 718045192,
			"isDeleted": false,
			"id": "i0AmzLKdjN7AZPic1NrSr",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1181.5789011470602,
			"y": 4071.3393203909714,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1803652872,
			"groupIds": [
				"WyFU0jkvTzmvrcy3R5JFK"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926417,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 1199,
			"versionNonce": 373384312,
			"isDeleted": false,
			"id": "9GlAghMJ4fjL1Pkvq6oQh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1162.2915013494576,
			"y": 4088.949554988782,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 428502536,
			"groupIds": [
				"WyFU0jkvTzmvrcy3R5JFK"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926417,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "line",
			"version": 1386,
			"versionNonce": 1951350536,
			"isDeleted": false,
			"id": "V2_tVdiCGKLIDlFwRx1K4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1202.771255594504,
			"y": 4089.1165040339497,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 572.7232805457052,
			"height": 0,
			"seed": 1897884936,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926417,
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
					572.7232805457052,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 978,
			"versionNonce": 713954680,
			"isDeleted": false,
			"id": "iAdFUMJS8zwjWEpnixopA",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2166.6057850384927,
			"y": 2396.8865751968956,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 853831176,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "9I7SlFpi"
				},
				{
					"id": "nbY0jm1hHQjbIQjLZJ-C-",
					"type": "arrow"
				}
			],
			"updated": 1706531926418,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 527,
			"versionNonce": 488775176,
			"isDeleted": false,
			"id": "9I7SlFpi",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2179.1682850384927,
			"y": 2418.8865751968956,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1329163528,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926418,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK24",
			"rawText": "SK24",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "iAdFUMJS8zwjWEpnixopA",
			"originalText": "SK24",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 475,
			"versionNonce": 1411163768,
			"isDeleted": false,
			"id": "KTbyPhsaJ3tExA59dzO7I",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2064.5678838922026,
			"y": 2412.755613673317,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 915835912,
			"groupIds": [
				"Gdshiwq6zYg_deQNY4OaF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "nbY0jm1hHQjbIQjLZJ-C-",
					"type": "arrow"
				}
			],
			"updated": 1706531926418,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 474,
			"versionNonce": 104930568,
			"isDeleted": false,
			"id": "zM5jzXRCaALUjxQZS2xhI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2084.4600239416172,
			"y": 2413.089363558435,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 318229256,
			"groupIds": [
				"Gdshiwq6zYg_deQNY4OaF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926418,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 472,
			"versionNonce": 1337005944,
			"isDeleted": false,
			"id": "8gC1MuXEH17GPyAxppb1l",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2065.172624144015,
			"y": 2430.6995981562472,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1859725832,
			"groupIds": [
				"Gdshiwq6zYg_deQNY4OaF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926418,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "line",
			"version": 393,
			"versionNonce": 287849480,
			"isDeleted": false,
			"id": "2yWzzzp1h8ZAuYbt0NqXT",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2085.7405703817217,
			"y": 2374.6134419447103,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 624.5236947903879,
			"seed": 624339208,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926418,
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
					624.5236947903879
				]
			]
		},
		{
			"type": "line",
			"version": 433,
			"versionNonce": 563046520,
			"isDeleted": false,
			"id": "fBvRKx0jEk8acU_nrteOb",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2013.2951800688438,
			"y": 2376.8254535854817,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 620.2087187373074,
			"seed": 1368147976,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926418,
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
					620.2087187373074
				]
			]
		},
		{
			"type": "line",
			"version": 453,
			"versionNonce": 265517832,
			"isDeleted": false,
			"id": "Lx9m2Rm1TtKg71ql3EWTb",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1936.7325378962146,
			"y": 2376.8254535854817,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 622.3116831496168,
			"seed": 1070991112,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926418,
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
					622.3116831496168
				]
			]
		},
		{
			"type": "line",
			"version": 439,
			"versionNonce": 628857208,
			"isDeleted": false,
			"id": "hGwJ5YYfSZ2jn_KXMOZKq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1867.1301359210977,
			"y": 2376.8254535854817,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 623.3631653557718,
			"seed": 1552934408,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926418,
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
					623.3631653557718
				]
			]
		},
		{
			"type": "line",
			"version": 415,
			"versionNonce": 884922888,
			"isDeleted": false,
			"id": "dUksdiM9KOXYx_2CCQTHz",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1794.5447738613327,
			"y": 2375.8311335572657,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 624.357485383988,
			"seed": 615900424,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926418,
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
					624.357485383988
				]
			]
		},
		{
			"type": "line",
			"version": 508,
			"versionNonce": 515484280,
			"isDeleted": false,
			"id": "XL1eBJP-ec0ZcNs1I56qt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1720.9650917733522,
			"y": 2373.842493500834,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 627.3976076465744,
			"seed": 365167624,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926418,
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
					627.3976076465744
				]
			]
		},
		{
			"type": "line",
			"version": 526,
			"versionNonce": 48650504,
			"isDeleted": false,
			"id": "qUDs0eFkC3vM5Gnpem4x3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1648.3797297135873,
			"y": 2376.8254535854817,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 625.4661297680814,
			"seed": 498483976,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926418,
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
					625.4661297680814
				]
			]
		},
		{
			"type": "line",
			"version": 533,
			"versionNonce": 1208851320,
			"isDeleted": false,
			"id": "EyZRfOKWXd3IR-aWzDZmp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1575.7943676538223,
			"y": 2378.8140936419127,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 622.4260075054949,
			"seed": 185115144,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926418,
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
					622.4260075054949
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1011,
			"versionNonce": 1036384264,
			"isDeleted": false,
			"id": "FBeSUP3Aq8ns7Nut7aDqL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2168.0900611824413,
			"y": 2467.4632692047476,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 2092376328,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "PKD7VQ4n"
				},
				{
					"id": "Z9lQsYKpV1bi5bfJuh7_4",
					"type": "arrow"
				}
			],
			"updated": 1706531926418,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 565,
			"versionNonce": 1673227384,
			"isDeleted": false,
			"id": "PKD7VQ4n",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2180.6525611824413,
			"y": 2489.4632692047476,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1379778568,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926418,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK25",
			"rawText": "SK25",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "FBeSUP3Aq8ns7Nut7aDqL",
			"originalText": "SK25",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1034,
			"versionNonce": 1499051784,
			"isDeleted": false,
			"id": "4E3EK8PfSVbdgWLT3CFFP",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2169.0843812106573,
			"y": 2537.0656711798642,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 462978824,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "G6Ibn3ay"
				},
				{
					"id": "hdYO-XpD-IrQL9X-k2s6Y",
					"type": "arrow"
				}
			],
			"updated": 1706531926418,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 591,
			"versionNonce": 1267146104,
			"isDeleted": false,
			"id": "G6Ibn3ay",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2181.6468812106573,
			"y": 2559.0656711798642,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 155409928,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926418,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK26",
			"rawText": "SK26",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "4E3EK8PfSVbdgWLT3CFFP",
			"originalText": "SK26",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1076,
			"versionNonce": 1780323848,
			"isDeleted": false,
			"id": "E4H46NrK3_W8lvWiXPHBx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2170.0787012388732,
			"y": 2674.2818350736657,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1547328776,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "tjiYQQZp"
				},
				{
					"id": "goL4pl9BAnD3vFfuh86xL",
					"type": "arrow"
				}
			],
			"updated": 1706531926418,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 630,
			"versionNonce": 11841144,
			"isDeleted": false,
			"id": "tjiYQQZp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2182.6412012388732,
			"y": 2696.2818350736657,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1442413576,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926418,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK28",
			"rawText": "SK28",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "E4H46NrK3_W8lvWiXPHBx",
			"originalText": "SK28",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1061,
			"versionNonce": 353211656,
			"isDeleted": false,
			"id": "s_76ZHDIDvAhFM5gZ0lQA",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2169.0843812106573,
			"y": 2607.6623931831987,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 679262984,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "KyclLfJA"
				},
				{
					"id": "YW2EbsLNNHz21niOHQQ05",
					"type": "arrow"
				}
			],
			"updated": 1706531926418,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 619,
			"versionNonce": 1007165304,
			"isDeleted": false,
			"id": "KyclLfJA",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2181.6468812106573,
			"y": 2629.6623931831987,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1715477000,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926418,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK27",
			"rawText": "SK27",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "s_76ZHDIDvAhFM5gZ0lQA",
			"originalText": "SK27",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1069,
			"versionNonce": 2141565960,
			"isDeleted": false,
			"id": "lFXbSR1tQgrjJI7aSzl5d",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2169.0843812106573,
			"y": 2742.889917020568,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1916770568,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "p9y0lIx9"
				},
				{
					"id": "KXt6Ul4f2Wsr5DDJLgHWJ",
					"type": "arrow"
				}
			],
			"updated": 1706531926418,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 623,
			"versionNonce": 2110091384,
			"isDeleted": false,
			"id": "p9y0lIx9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2181.6468812106573,
			"y": 2764.889917020568,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1878472712,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926418,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK29",
			"rawText": "SK29",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "lFXbSR1tQgrjJI7aSzl5d",
			"originalText": "SK29",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "line",
			"version": 370,
			"versionNonce": 1071772424,
			"isDeleted": false,
			"id": "2oLUrC9SiSoQDx2lU653P",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 528.9491128790801,
			"y": 3901.166331261167,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 59.659201692957595,
			"height": 0,
			"seed": 862123784,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926418,
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
					59.659201692957595,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 534,
			"versionNonce": 498114936,
			"isDeleted": false,
			"id": "zkcMzyC50TAIn8rIEGJzq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1993.6326885447638,
			"y": 2480.5038507737922,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 822007304,
			"groupIds": [
				"qwf1Aatkf5f_xz9n4ONAt"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "Z9lQsYKpV1bi5bfJuh7_4",
					"type": "arrow"
				}
			],
			"updated": 1706531926418,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 533,
			"versionNonce": 1279152648,
			"isDeleted": false,
			"id": "0ksNyw_3fPFfadNdeCypx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2013.5248285941784,
			"y": 2480.83760065891,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1841747208,
			"groupIds": [
				"qwf1Aatkf5f_xz9n4ONAt"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926418,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 531,
			"versionNonce": 1527624312,
			"isDeleted": false,
			"id": "dhaaOXmu7e-hxdH1JB4Gc",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1994.2374287965754,
			"y": 2498.4478352567216,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1865872392,
			"groupIds": [
				"qwf1Aatkf5f_xz9n4ONAt"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926418,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "line",
			"version": 449,
			"versionNonce": 1807143176,
			"isDeleted": false,
			"id": "IE7WlNK0htOCOT2o03keS",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 458.01391753164125,
			"y": 3968.9145683616425,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 133.5773571250446,
			"height": 0,
			"seed": 726348552,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926418,
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
					133.5773571250446,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 583,
			"versionNonce": 1822466936,
			"isDeleted": false,
			"id": "6_Vd32DZ6Jar7LHne9GgP",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1916.9008097000822,
			"y": 2552.0948928053426,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 2021626376,
			"groupIds": [
				"5ESvTOdmahqbILbDe0-KG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926418,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 583,
			"versionNonce": 633827336,
			"isDeleted": false,
			"id": "Hwj_0WMsjJ7CP62y5ioTa",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1936.7929497494965,
			"y": 2552.4286426904605,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 2110787848,
			"groupIds": [
				"5ESvTOdmahqbILbDe0-KG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926418,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 581,
			"versionNonce": 279803000,
			"isDeleted": false,
			"id": "Kq-zyKt5sq8h4HIaoabdM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1917.5055499518942,
			"y": 2570.038877288271,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 582529032,
			"groupIds": [
				"5ESvTOdmahqbILbDe0-KG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926418,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "line",
			"version": 545,
			"versionNonce": 845950728,
			"isDeleted": false,
			"id": "hFTLjPKUhToszj1iH07gn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 381.28203868695937,
			"y": 4040.505610393191,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 210.30923596972627,
			"height": 0,
			"seed": 2134208264,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926418,
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
					210.30923596972627,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 657,
			"versionNonce": 486024568,
			"isDeleted": false,
			"id": "4Bjt2vaNH1jRqjknulzri",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1845.7223093466148,
			"y": 2622.6916148086752,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1271025160,
			"groupIds": [
				"jwlAjeCHR7QFeqHHUIIoF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926418,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 657,
			"versionNonce": 1780551176,
			"isDeleted": false,
			"id": "Yb443kdc7-QS-itb-fMu7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1865.6144493960294,
			"y": 2623.025364693793,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1364937992,
			"groupIds": [
				"jwlAjeCHR7QFeqHHUIIoF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926418,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 655,
			"versionNonce": 247772792,
			"isDeleted": false,
			"id": "KUQyB32zfj_7CCdTL2w_r",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1846.3270495984268,
			"y": 2640.6355992916037,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1501326344,
			"groupIds": [
				"jwlAjeCHR7QFeqHHUIIoF"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926418,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "line",
			"version": 655,
			"versionNonce": 904006920,
			"isDeleted": false,
			"id": "lCAyhDwhGIE5jUli435Ab",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 310.1035383334922,
			"y": 4111.102332396524,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 282.48205635140937,
			"height": 0,
			"seed": 505522952,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926418,
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
					282.48205635140937,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 701,
			"versionNonce": 450307960,
			"isDeleted": false,
			"id": "pmoxPAoDoyF6KN4W-aXYk",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1772.8460581117827,
			"y": 2689.311056699144,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 969345544,
			"groupIds": [
				"MeJ7sCeWpWPyto9GdsQ2y"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926418,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 701,
			"versionNonce": 2133535752,
			"isDeleted": false,
			"id": "S9pCq5vIt0j297t7iEJMS",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1792.7381981611977,
			"y": 2689.644806584262,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 392726792,
			"groupIds": [
				"MeJ7sCeWpWPyto9GdsQ2y"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926419,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 699,
			"versionNonce": 1030977656,
			"isDeleted": false,
			"id": "1yYdfzx0R2j62S_XuM1dw",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1773.4507983635947,
			"y": 2707.2550411820725,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1652697096,
			"groupIds": [
				"MeJ7sCeWpWPyto9GdsQ2y"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926419,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "line",
			"version": 730,
			"versionNonce": 536374024,
			"isDeleted": false,
			"id": "1rA6uY1tfoRVJ8vVk96mv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 237.2272870986601,
			"y": 4177.7217742869925,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 354.36398755802554,
			"height": 0,
			"seed": 1997530888,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926419,
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
					354.36398755802554,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1093,
			"versionNonce": 1247652216,
			"isDeleted": false,
			"id": "hYB87Qbb4vxCQUSKCavmU",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2169.0843812106573,
			"y": 2812.492318995685,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1368245768,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "5OWRv612"
				},
				{
					"id": "VJHaEDB6ax3wIG5ZVAX_l",
					"type": "arrow"
				}
			],
			"updated": 1706531926419,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 650,
			"versionNonce": 1388694024,
			"isDeleted": false,
			"id": "5OWRv612",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2181.6468812106573,
			"y": 2834.492318995685,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 2130167048,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926419,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK30",
			"rawText": "SK30",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "hYB87Qbb4vxCQUSKCavmU",
			"originalText": "SK30",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 748,
			"versionNonce": 2094643832,
			"isDeleted": false,
			"id": "wveJyLM6Qqg7rxorwN7xH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1701.300330781368,
			"y": 2760.5033485724693,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 214557704,
			"groupIds": [
				"_uZiBWRXaxj_i1ne5QJ5I"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "KXt6Ul4f2Wsr5DDJLgHWJ",
					"type": "arrow"
				}
			],
			"updated": 1706531926419,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 747,
			"versionNonce": 579815688,
			"isDeleted": false,
			"id": "0a6Q2sy_HUu4BBe76LGlX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1721.1924708307831,
			"y": 2760.837098457587,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 2030052104,
			"groupIds": [
				"_uZiBWRXaxj_i1ne5QJ5I"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926419,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 745,
			"versionNonce": 128691064,
			"isDeleted": false,
			"id": "dSNVJ8gNuDjv9VOZ7CnWy",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1701.90507103318,
			"y": 2778.4473330553997,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 571900424,
			"groupIds": [
				"_uZiBWRXaxj_i1ne5QJ5I"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926419,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "line",
			"version": 814,
			"versionNonce": 1523640328,
			"isDeleted": false,
			"id": "As-u0PnwGQNNDTqu6cIUb",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 165.68155976824596,
			"y": 4248.91406616032,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 426.14537358638324,
			"height": 0,
			"seed": 923336968,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926419,
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
					426.14537358638324,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 814,
			"versionNonce": 622296184,
			"isDeleted": false,
			"id": "5HSrtfH3ZdL_EXrRD2hyW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1627.4792161815583,
			"y": 2830.3751778091596,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 659791880,
			"groupIds": [
				"xohtrwgYKs04tGVk-mI5I"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926419,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 814,
			"versionNonce": 2005313288,
			"isDeleted": false,
			"id": "zwy-PyJnPTsFDCrThLQLJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1647.3713562309729,
			"y": 2830.7089276942775,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 317873928,
			"groupIds": [
				"xohtrwgYKs04tGVk-mI5I"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926419,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 812,
			"versionNonce": 652291448,
			"isDeleted": false,
			"id": "9EKv642LBaA7fnywlC4TW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1628.0839564333703,
			"y": 2848.319162292088,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 979451400,
			"groupIds": [
				"xohtrwgYKs04tGVk-mI5I"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926419,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "line",
			"version": 922,
			"versionNonce": 355239432,
			"isDeleted": false,
			"id": "5sggi95fNM3s63maf2yQV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 91.86044516843572,
			"y": 4318.785895397008,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 500.96465717528883,
			"height": 0,
			"seed": 1855733000,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926419,
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
					500.96465717528883,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1136,
			"versionNonce": 105692792,
			"isDeleted": false,
			"id": "T8d2rcLW4UhG_3frgK0YW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2170.460620450241,
			"y": 2881.2251094639873,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 18832392,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "29D4hxzh"
				},
				{
					"id": "Jd4zDiysGrW9aLFI61WH-",
					"type": "arrow"
				}
			],
			"updated": 1706531926419,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 699,
			"versionNonce": 1623098632,
			"isDeleted": false,
			"id": "29D4hxzh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2183.023120450241,
			"y": 2903.2251094639873,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 870750984,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926419,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK31",
			"rawText": "SK31",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "T8d2rcLW4UhG_3frgK0YW",
			"originalText": "SK31",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 867,
			"versionNonce": 1948135288,
			"isDeleted": false,
			"id": "M5r9hEMDazCWdI4Q8H-tR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1555.1590986054714,
			"y": 2898.1507462804934,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 695073288,
			"groupIds": [
				"u9QJnOeiYPeSmvzUa3Dtu"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "Jd4zDiysGrW9aLFI61WH-",
					"type": "arrow"
				}
			],
			"updated": 1706531926419,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 866,
			"versionNonce": 129541128,
			"isDeleted": false,
			"id": "EKDdZ4OG8bxQcCvIAzBmJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1575.051238654886,
			"y": 2898.4844961656113,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1420917000,
			"groupIds": [
				"u9QJnOeiYPeSmvzUa3Dtu"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926419,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 864,
			"versionNonce": 1754890360,
			"isDeleted": false,
			"id": "gi0Pvng_vsddEy1cKNrGO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1555.7638388572834,
			"y": 2916.094730763422,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1764562952,
			"groupIds": [
				"u9QJnOeiYPeSmvzUa3Dtu"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926419,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "line",
			"version": 1013,
			"versionNonce": 672588552,
			"isDeleted": false,
			"id": "OErTDCnAsf7DYkGYfywGd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 19.54032759234883,
			"y": 4386.561463868342,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 572.7232805457052,
			"height": 0,
			"seed": 1255986952,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926419,
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
					572.7232805457052,
					0
				]
			]
		},
		{
			"id": "oRurLagRPvj-GTxOj4Jme",
			"type": "line",
			"x": 2204.1692005703526,
			"y": 2251.0065784235544,
			"width": 1.08991575201253,
			"height": 143.78207172525526,
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
			"seed": 1488681592,
			"version": 121,
			"versionNonce": 864203128,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1706531926419,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1.08991575201253,
					143.78207172525526
				]
			],
			"lastCommittedPoint": [
				-3.0769230769230944,
				140
			],
			"startBinding": null,
			"endBinding": null,
			"startArrowhead": null,
			"endArrowhead": null
		},
		{
			"type": "arrow",
			"version": 473,
			"versionNonce": 1079329288,
			"isDeleted": false,
			"id": "nbY0jm1hHQjbIQjLZJ-C-",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2105.7335123524826,
			"y": 2431.6785278780285,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 60.26375886637936,
			"height": 0,
			"seed": 461483272,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926419,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "KTbyPhsaJ3tExA59dzO7I",
				"focus": -0.002523047229084631,
				"gap": 1.1162074473982102
			},
			"endBinding": {
				"elementId": "iAdFUMJS8zwjWEpnixopA",
				"focus": -0.023292725915673468,
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
					60.26375886637936,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 509,
			"versionNonce": 203276920,
			"isDeleted": false,
			"id": "Z9lQsYKpV1bi5bfJuh7_4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2034.1428770846226,
			"y": 2496.6833692103596,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 132.70450697577007,
			"height": 1.19017495045523,
			"seed": 1339477000,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926419,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "zkcMzyC50TAIn8rIEGJzq",
				"focus": -0.1553487404169613,
				"gap": 1
			},
			"endBinding": {
				"elementId": "FBeSUP3Aq8ns7Nut7aDqL",
				"focus": 0.09485541292825235,
				"gap": 1.2426771220484625
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
					132.70450697577007,
					1.19017495045523
				]
			]
		},
		{
			"type": "arrow",
			"version": 604,
			"versionNonce": 527417608,
			"isDeleted": false,
			"id": "goL4pl9BAnD3vFfuh86xL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1811.1497805844592,
			"y": 2707.9481608346455,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 354.71043450707725,
			"height": 0,
			"seed": 439356168,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926419,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "E4H46NrK3_W8lvWiXPHBx",
				"focus": 0.009813948206475983,
				"gap": 4.2184861473365345
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
					354.71043450707725,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 596,
			"versionNonce": 556708728,
			"isDeleted": false,
			"id": "YW2EbsLNNHz21niOHQQ05",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1883.6733390258419,
			"y": 2640.3570567322017,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 281.9838700840951,
			"height": 0,
			"seed": 1695115784,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926419,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "s_76ZHDIDvAhFM5gZ0lQA",
				"focus": 0.03839224855873374,
				"gap": 3.427172100720327
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
					281.9838700840951,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 667,
			"versionNonce": 1424121864,
			"isDeleted": false,
			"id": "hdYO-XpD-IrQL9X-k2s6Y",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1956.584354193566,
			"y": 2570.2221521487204,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 210.43652764110504,
			"height": 0,
			"seed": 1801382152,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926419,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "4E3EK8PfSVbdgWLT3CFFP",
				"focus": 0.02480938326893653,
				"gap": 2.063499375986339
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
					210.43652764110504,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 818,
			"versionNonce": 687441016,
			"isDeleted": false,
			"id": "KXt6Ul4f2Wsr5DDJLgHWJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1741.93404703017,
			"y": 2778.9465305867466,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 421.29242196120225,
			"height": 0,
			"seed": 682395656,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926419,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "wveJyLM6Qqg7rxorwN7xH",
				"focus": -0.027811002259891127,
				"gap": 1
			},
			"endBinding": {
				"elementId": "lFXbSR1tQgrjJI7aSzl5d",
				"focus": -0.060488634299364255,
				"gap": 5.857912219285026
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
					421.29242196120225,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 701,
			"versionNonce": 547954440,
			"isDeleted": false,
			"id": "VJHaEDB6ax3wIG5ZVAX_l",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1664.896973600362,
			"y": 2848.740802241103,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 502.93855106629803,
			"height": 0,
			"seed": 1223575304,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926419,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "hYB87Qbb4vxCQUSKCavmU",
				"focus": -0.06613186015936343,
				"gap": 1.24885654399759
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
					502.93855106629803,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 920,
			"versionNonce": 1900164472,
			"isDeleted": false,
			"id": "Jd4zDiysGrW9aLFI61WH-",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1595.4722290072234,
			"y": 2917.317444394795,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 571.0464226093543,
			"height": 0,
			"seed": 413148680,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926419,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "M5r9hEMDazCWdI4Q8H-tR",
				"focus": 0.010327448663982415,
				"gap": 1
			},
			"endBinding": {
				"elementId": "T8d2rcLW4UhG_3frgK0YW",
				"focus": -0.06153926267081582,
				"gap": 3.9419688336633953
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
					571.0464226093543,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 657,
			"versionNonce": 1665138184,
			"isDeleted": false,
			"id": "FqqSXzUvR2OxAs3VS5MlA",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -309.49167023613643,
			"y": 1620.1192769251734,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1865730077,
			"groupIds": [
				"G4WEwjyyvXvLhFaKNVRCx"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "hPHEqCtB"
				}
			],
			"updated": 1706531926419,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 539,
			"versionNonce": 1867302520,
			"isDeleted": false,
			"id": "hPHEqCtB",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -289.1416565032263,
			"y": 1641.6192769251734,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 31.299972534179688,
			"height": 25,
			"seed": 2030025853,
			"groupIds": [
				"G4WEwjyyvXvLhFaKNVRCx"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926419,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K13",
			"rawText": "K13",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "FqqSXzUvR2OxAs3VS5MlA",
			"originalText": "K13",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 619,
			"versionNonce": 228785416,
			"isDeleted": false,
			"id": "Fs61lYYDusA-xjOKzcxO0",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -455.49167023613643,
			"y": 1621.1192769251734,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 170730717,
			"groupIds": [
				"G4WEwjyyvXvLhFaKNVRCx"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "eKexbMnq"
				}
			],
			"updated": 1706531926419,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 540,
			"versionNonce": 1339897720,
			"isDeleted": false,
			"id": "eKexbMnq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -434.5116592498083,
			"y": 1642.6192769251734,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 30.03997802734375,
			"height": 25,
			"seed": 1984856381,
			"groupIds": [
				"G4WEwjyyvXvLhFaKNVRCx"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926419,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K15",
			"rawText": "K15",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "Fs61lYYDusA-xjOKzcxO0",
			"originalText": "K15",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 662,
			"versionNonce": 290331656,
			"isDeleted": false,
			"id": "jsKLwoU0B2SRenDg4Rgx9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -382.49167023613643,
			"y": 1621.1192769251734,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 583356829,
			"groupIds": [
				"G4WEwjyyvXvLhFaKNVRCx"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "rduUgoob"
				}
			],
			"updated": 1706531926419,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 539,
			"versionNonce": 121079928,
			"isDeleted": false,
			"id": "rduUgoob",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -361.73166047051143,
			"y": 1642.6192769251734,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 30.47998046875,
			"height": 25,
			"seed": 1287853565,
			"groupIds": [
				"G4WEwjyyvXvLhFaKNVRCx"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926420,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K14",
			"rawText": "K14",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "jsKLwoU0B2SRenDg4Rgx9",
			"originalText": "K14",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 681,
			"versionNonce": 1346198280,
			"isDeleted": false,
			"id": "p-JGqZsMZ_SKwWFvjrFUt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -236.49167023613643,
			"y": 1620.1192769251734,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 256462429,
			"groupIds": [
				"G4WEwjyyvXvLhFaKNVRCx"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "hvmzZc3D"
				}
			],
			"updated": 1706531926420,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 539,
			"versionNonce": 1629469048,
			"isDeleted": false,
			"id": "hvmzZc3D",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -216.45166169121455,
			"y": 1641.6192769251734,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 31.91998291015625,
			"height": 25,
			"seed": 690584253,
			"groupIds": [
				"G4WEwjyyvXvLhFaKNVRCx"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926420,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K12",
			"rawText": "K12",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "p-JGqZsMZ_SKwWFvjrFUt",
			"originalText": "K12",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 926,
			"versionNonce": 216840712,
			"isDeleted": false,
			"id": "pvg-JL0qBuTL_92u4V13K",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -16.033785041687793,
			"y": 1617.640334327949,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 50666269,
			"groupIds": [
				"-1dINUSC8ooAKckOCcs6j"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "jDWT0gAj"
				}
			],
			"updated": 1706531926420,
			"link": null,
			"locked": false
		},
		{
			"id": "jDWT0gAj",
			"type": "text",
			"x": 8.247464958312207,
			"y": 1639.640334327949,
			"width": 23.4375,
			"height": 24,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [
				"-1dINUSC8ooAKckOCcs6j"
			],
			"frameId": null,
			"roundness": null,
			"seed": 1409489928,
			"version": 122,
			"versionNonce": 282708600,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1706531926420,
			"link": null,
			"locked": false,
			"text": "K9",
			"rawText": "K9",
			"fontSize": 20,
			"fontFamily": 3,
			"textAlign": "center",
			"verticalAlign": "middle",
			"baseline": 19,
			"containerId": "pvg-JL0qBuTL_92u4V13K",
			"originalText": "K9",
			"lineHeight": 1.2
		},
		{
			"type": "rectangle",
			"version": 888,
			"versionNonce": 1515731208,
			"isDeleted": false,
			"id": "XQ6yRi1CgeQrdzTwnRbLZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -162.0337850416878,
			"y": 1618.640334327949,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1968025469,
			"groupIds": [
				"-1dINUSC8ooAKckOCcs6j"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "1MpJzdul"
				}
			],
			"updated": 1706531926420,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 811,
			"versionNonce": 1093254008,
			"isDeleted": false,
			"id": "1MpJzdul",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -137.58378046405107,
			"y": 1640.140334327949,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.099990844726562,
			"height": 25,
			"seed": 1313126365,
			"groupIds": [
				"-1dINUSC8ooAKckOCcs6j"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926420,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K11",
			"rawText": "K11",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "XQ6yRi1CgeQrdzTwnRbLZ",
			"originalText": "K11",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 931,
			"versionNonce": 201054216,
			"isDeleted": false,
			"id": "bjx9zMc7a3z2by9l8Sau7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -89.03378504168779,
			"y": 1618.640334327949,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 402371645,
			"groupIds": [
				"-1dINUSC8ooAKckOCcs6j"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "yJtvtbVc"
				}
			],
			"updated": 1706531926420,
			"link": null,
			"locked": false
		},
		{
			"id": "yJtvtbVc",
			"type": "text",
			"x": -70.61191004168779,
			"y": 1640.640334327949,
			"width": 35.15625,
			"height": 24,
			"angle": 0,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"groupIds": [
				"-1dINUSC8ooAKckOCcs6j"
			],
			"frameId": null,
			"roundness": null,
			"seed": 1129346568,
			"version": 123,
			"versionNonce": 609455224,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1706531926420,
			"link": null,
			"locked": false,
			"text": "K10",
			"rawText": "K10",
			"fontSize": 20,
			"fontFamily": 3,
			"textAlign": "center",
			"verticalAlign": "middle",
			"baseline": 19,
			"containerId": "bjx9zMc7a3z2by9l8Sau7",
			"originalText": "K10",
			"lineHeight": 1.2
		},
		{
			"type": "rectangle",
			"version": 950,
			"versionNonce": 634623752,
			"isDeleted": false,
			"id": "1yACV6Ud0ouXsloxPME7k",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 56.96621495831221,
			"y": 1617.640334327949,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 508830877,
			"groupIds": [
				"-1dINUSC8ooAKckOCcs6j"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "mTR1Q4yt"
				}
			],
			"updated": 1706531926420,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 358,
			"versionNonce": 68894072,
			"isDeleted": false,
			"id": "mTR1Q4yt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 81.24746495831221,
			"y": 1639.640334327949,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 1860809533,
			"groupIds": [
				"-1dINUSC8ooAKckOCcs6j"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926420,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K8",
			"rawText": "K8",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "1yACV6Ud0ouXsloxPME7k",
			"originalText": "K8",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 940,
			"versionNonce": 1281062408,
			"isDeleted": false,
			"id": "F1fEKvOrexSzrVOln0mWi",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 277.92410015276084,
			"y": 1614.6613917307245,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 889161981,
			"groupIds": [
				"ry4vmHMtG8utQ-0I2-5dR"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "SbtiJw9M"
				}
			],
			"updated": 1706531926420,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 360,
			"versionNonce": 1371852408,
			"isDeleted": false,
			"id": "SbtiJw9M",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 302.20535015276084,
			"y": 1636.6613917307245,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 1681646077,
			"groupIds": [
				"ry4vmHMtG8utQ-0I2-5dR"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926420,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K5",
			"rawText": "K5",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "F1fEKvOrexSzrVOln0mWi",
			"originalText": "K5",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 902,
			"versionNonce": 881816840,
			"isDeleted": false,
			"id": "_w4ZnE-DiJRwplNcPc4P1",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 131.92410015276084,
			"y": 1615.6613917307245,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1031758173,
			"groupIds": [
				"ry4vmHMtG8utQ-0I2-5dR"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "5PU6uSwr"
				}
			],
			"updated": 1706531926420,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 828,
			"versionNonce": 907296632,
			"isDeleted": false,
			"id": "5PU6uSwr",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 156.4141056459249,
			"y": 1637.1613917307245,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.019989013671875,
			"height": 25,
			"seed": 1831153085,
			"groupIds": [
				"ry4vmHMtG8utQ-0I2-5dR"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926420,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K7",
			"rawText": "K7",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "_w4ZnE-DiJRwplNcPc4P1",
			"originalText": "K7",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 945,
			"versionNonce": 334205960,
			"isDeleted": false,
			"id": "e7c9rT5Uex-VKDMm_BiH9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 204.92410015276084,
			"y": 1615.6613917307245,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1393716765,
			"groupIds": [
				"ry4vmHMtG8utQ-0I2-5dR"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "B3RszNtC"
				}
			],
			"updated": 1706531926420,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 360,
			"versionNonce": 558731384,
			"isDeleted": false,
			"id": "B3RszNtC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 229.20535015276084,
			"y": 1637.6613917307245,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 1453863859,
			"groupIds": [
				"ry4vmHMtG8utQ-0I2-5dR"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926420,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K6",
			"rawText": "K6",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "e7c9rT5Uex-VKDMm_BiH9",
			"originalText": "K6",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 964,
			"versionNonce": 275501832,
			"isDeleted": false,
			"id": "0xYNJqTuAoJsXn4zeqVS0",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 350.92410015276084,
			"y": 1614.6613917307245,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 507028093,
			"groupIds": [
				"ry4vmHMtG8utQ-0I2-5dR"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "bjTnpKZX"
				}
			],
			"updated": 1706531926420,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 362,
			"versionNonce": 1530184056,
			"isDeleted": false,
			"id": "bjTnpKZX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 375.20535015276084,
			"y": 1636.6613917307245,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 1503060157,
			"groupIds": [
				"ry4vmHMtG8utQ-0I2-5dR"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926420,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K4",
			"rawText": "K4",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "0xYNJqTuAoJsXn4zeqVS0",
			"originalText": "K4",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 921,
			"versionNonce": 814494216,
			"isDeleted": false,
			"id": "Ds92JaHQv6-Y1vXU2ZmSO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 570.9030427499853,
			"y": 1613.6824491335,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 593054429,
			"groupIds": [
				"d8Vg82cqON8Qs20mVMMat"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "18dCOLqj"
				}
			],
			"updated": 1706531926420,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 602,
			"versionNonce": 319672952,
			"isDeleted": false,
			"id": "18dCOLqj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 598.0630464120946,
			"y": 1635.1824491335,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 17.67999267578125,
			"height": 25,
			"seed": 587589437,
			"groupIds": [
				"d8Vg82cqON8Qs20mVMMat"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926420,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K1",
			"rawText": "K1",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "Ds92JaHQv6-Y1vXU2ZmSO",
			"originalText": "K1",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 883,
			"versionNonce": 1263055112,
			"isDeleted": false,
			"id": "L4vxf4s3UZIhjTmFcVqWZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 424.9030427499853,
			"y": 1614.6824491335,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1335883677,
			"groupIds": [
				"d8Vg82cqON8Qs20mVMMat"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "gQMVZIw8"
				}
			],
			"updated": 1706531926420,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 808,
			"versionNonce": 1872544632,
			"isDeleted": false,
			"id": "gQMVZIw8",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 447.9630555673681,
			"y": 1636.1824491335,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 25.879974365234375,
			"height": 25,
			"seed": 324598781,
			"groupIds": [
				"d8Vg82cqON8Qs20mVMMat"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926420,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K3",
			"rawText": "K3",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "L4vxf4s3UZIhjTmFcVqWZ",
			"originalText": "K3",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 928,
			"versionNonce": 2015186952,
			"isDeleted": false,
			"id": "Y20yaTdEDL_r7Wqq1MyVX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 497.9030427499853,
			"y": 1614.6824491335,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 372405341,
			"groupIds": [
				"d8Vg82cqON8Qs20mVMMat"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "6glpIZCP"
				}
			],
			"updated": 1706531926420,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 611,
			"versionNonce": 522556536,
			"isDeleted": false,
			"id": "6glpIZCP",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 520.6530503793798,
			"y": 1636.1824491335,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 26.499984741210938,
			"height": 25,
			"seed": 66969789,
			"groupIds": [
				"d8Vg82cqON8Qs20mVMMat"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926420,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K2",
			"rawText": "K2",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "Y20yaTdEDL_r7Wqq1MyVX",
			"originalText": "K2",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 945,
			"versionNonce": 2131103496,
			"isDeleted": false,
			"id": "FBsA60ZkyvwWNSkA9VAyZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 643.9030427499853,
			"y": 1613.6824491335,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 308068637,
			"groupIds": [
				"d8Vg82cqON8Qs20mVMMat"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "8dZovEvn"
				}
			],
			"updated": 1706531926420,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 600,
			"versionNonce": 1735148920,
			"isDeleted": false,
			"id": "8dZovEvn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 666.8930482431493,
			"y": 1635.1824491335,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 26.019989013671875,
			"height": 25,
			"seed": 1187026301,
			"groupIds": [
				"d8Vg82cqON8Qs20mVMMat"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926420,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K0",
			"rawText": "K0",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "FBsA60ZkyvwWNSkA9VAyZ",
			"originalText": "K0",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1534,
			"versionNonce": 1216278024,
			"isDeleted": false,
			"id": "VQOE0eKnk0YiaONmdr_mZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 642.8447748701772,
			"y": 2861.4999158538344,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 670879571,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "A4z3dYHn"
				}
			],
			"updated": 1706531926420,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1065,
			"versionNonce": 901043832,
			"isDeleted": false,
			"id": "A4z3dYHn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 667.1260248701772,
			"y": 2883.4999158538344,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 246272733,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926420,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ0",
			"rawText": "δ0",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "VQOE0eKnk0YiaONmdr_mZ",
			"originalText": "δ0",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1538,
			"versionNonce": 1300491528,
			"isDeleted": false,
			"id": "D6JJRvfjdHlOyc4EIvQZI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 497.4774932559642,
			"y": 2865.4835815861998,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 524538429,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "LeBEztZC"
				}
			],
			"updated": 1706531926420,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1072,
			"versionNonce": 784549752,
			"isDeleted": false,
			"id": "LeBEztZC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 521.7587432559642,
			"y": 2887.4835815861998,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 48792221,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926420,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ2",
			"rawText": "δ2",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "D6JJRvfjdHlOyc4EIvQZI",
			"originalText": "δ2",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1490,
			"versionNonce": 126946312,
			"isDeleted": false,
			"id": "VTEx-Vy7NQT3qwOuWgiQJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 570.9519511983765,
			"y": 2863.482255420495,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 933718813,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "CNiX8anS"
				}
			],
			"updated": 1706531926420,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1023,
			"versionNonce": 1054578808,
			"isDeleted": false,
			"id": "CNiX8anS",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 595.2332011983765,
			"y": 2885.482255420495,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 19267453,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926420,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ1",
			"rawText": "δ1",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "VTEx-Vy7NQT3qwOuWgiQJ",
			"originalText": "δ1",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1492,
			"versionNonce": 1621248776,
			"isDeleted": false,
			"id": "vl9j3ZvVKryanofH2XUQN",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 427.1089552136209,
			"y": 2864.4892615579843,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 815660179,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "iR5ybc7H"
				}
			],
			"updated": 1706531926420,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1025,
			"versionNonce": 700565880,
			"isDeleted": false,
			"id": "iR5ybc7H",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 451.3902052136209,
			"y": 2886.4892615579843,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 594997811,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926421,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ3",
			"rawText": "δ3",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "vl9j3ZvVKryanofH2XUQN",
			"originalText": "δ3",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1497,
			"versionNonce": 590588424,
			"isDeleted": false,
			"id": "2maVIDOknEbOb5WgqMrUs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 279.0842213964181,
			"y": 2866.6408830300547,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1130612925,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "WV1IhyA4"
				}
			],
			"updated": 1706531926421,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1030,
			"versionNonce": 448387704,
			"isDeleted": false,
			"id": "WV1IhyA4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 303.3654713964181,
			"y": 2888.6408830300547,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 1019586845,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926421,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ5",
			"rawText": "δ5",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "2maVIDOknEbOb5WgqMrUs",
			"originalText": "δ5",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1486,
			"versionNonce": 1782655240,
			"isDeleted": false,
			"id": "KCvFcrwCGZ8-8X7HnUDPH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 205.44303423253177,
			"y": 2866.6786115281643,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 460786707,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "df66r8Sy"
				}
			],
			"updated": 1706531926421,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1019,
			"versionNonce": 881314680,
			"isDeleted": false,
			"id": "df66r8Sy",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 229.72428423253177,
			"y": 2888.6786115281643,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 2139230643,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926421,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ6",
			"rawText": "δ6",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "KCvFcrwCGZ8-8X7HnUDPH",
			"originalText": "δ6",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1756,
			"versionNonce": 289851400,
			"isDeleted": false,
			"id": "ECR2nKI_bulnt1qa1SGTQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 59.220387265374825,
			"y": 2871.555404853962,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1548903283,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "AtnS5346"
				}
			],
			"updated": 1706531926421,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1289,
			"versionNonce": 560962680,
			"isDeleted": false,
			"id": "AtnS5346",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 83.50163726537482,
			"y": 2893.555404853962,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 1841003795,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926421,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ8",
			"rawText": "δ8",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "ECR2nKI_bulnt1qa1SGTQ",
			"originalText": "δ8",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1569,
			"versionNonce": 608208648,
			"isDeleted": false,
			"id": "t63wDyMMlGdi0OAm0HKdh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 133.63355323901658,
			"y": 2868.4935605753467,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 777429245,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "4hrQBUga"
				}
			],
			"updated": 1706531926421,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1102,
			"versionNonce": 590695800,
			"isDeleted": false,
			"id": "4hrQBUga",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 157.91480323901646,
			"y": 2890.4935605753467,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 741570909,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926421,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ7",
			"rawText": "δ7",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "t63wDyMMlGdi0OAm0HKdh",
			"originalText": "δ7",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1511,
			"versionNonce": 1336567304,
			"isDeleted": false,
			"id": "vLbS1WViKAUQVD9UuhLLY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 353.17807901283913,
			"y": 2866.9305720669504,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1347894643,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "4D5Msh97"
				}
			],
			"updated": 1706531926421,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1043,
			"versionNonce": 589094520,
			"isDeleted": false,
			"id": "4D5Msh97",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 377.45932901283913,
			"y": 2888.9305720669504,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 1382163,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926421,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ4",
			"rawText": "δ4",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "vLbS1WViKAUQVD9UuhLLY",
			"originalText": "δ4",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1701,
			"versionNonce": 1350591752,
			"isDeleted": false,
			"id": "5Dg60KnBpkWpPyroQT86_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -374.67023903457897,
			"y": 2873.736328815598,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 715040637,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "N7obltZ1"
				}
			],
			"updated": 1706531926421,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1238,
			"versionNonce": 1105874808,
			"isDeleted": false,
			"id": "N7obltZ1",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -356.24836403457897,
			"y": 2895.736328815598,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 515289053,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926421,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ14",
			"rawText": "δ14",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "5Dg60KnBpkWpPyroQT86_",
			"originalText": "δ14",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1595,
			"versionNonce": 1681818632,
			"isDeleted": false,
			"id": "HNV_QTaVex1ga6bhihDQ6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -446.1807703982309,
			"y": 2875.183319296349,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 2003741757,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "AcG2jzEf"
				}
			],
			"updated": 1706531926421,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1129,
			"versionNonce": 1742839928,
			"isDeleted": false,
			"id": "AcG2jzEf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -427.7588953982309,
			"y": 2897.183319296349,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 78126237,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926421,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ15",
			"rawText": "δ15",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "HNV_QTaVex1ga6bhihDQ6",
			"originalText": "δ15",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1619,
			"versionNonce": 954254088,
			"isDeleted": false,
			"id": "Lw5iNHRh0BlPb8Cuy_0Pp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -301.8756986058161,
			"y": 2872.2893383348487,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 504660221,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "NlRZrglL"
				}
			],
			"updated": 1706531926421,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1153,
			"versionNonce": 1422315896,
			"isDeleted": false,
			"id": "NlRZrglL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -283.4538236058161,
			"y": 2894.2893383348487,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 691362141,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926421,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ13",
			"rawText": "δ13",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "Lw5iNHRh0BlPb8Cuy_0Pp",
			"originalText": "δ13",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1589,
			"versionNonce": 1558389256,
			"isDeleted": false,
			"id": "OtTKpb9J08gzqAyA1OyjA",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -157.24466398212417,
			"y": 2873.899310231237,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1599874493,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "HtlqiIXR"
				}
			],
			"updated": 1706531926421,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1124,
			"versionNonce": 803070584,
			"isDeleted": false,
			"id": "HtlqiIXR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -138.82278898212417,
			"y": 2895.899310231237,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1403676189,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926421,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ11",
			"rawText": "δ11",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "OtTKpb9J08gzqAyA1OyjA",
			"originalText": "δ11",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1586,
			"versionNonce": 792830216,
			"isDeleted": false,
			"id": "_xQ-aWvXHDHTt_cVzxaNX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -84.28714213772253,
			"y": 2869.23237595771,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 957454973,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "s11jIehP"
				}
			],
			"updated": 1706531926421,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1123,
			"versionNonce": 401265528,
			"isDeleted": false,
			"id": "s11jIehP",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -65.86526713772253,
			"y": 2891.23237595771,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1750287069,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926421,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ10",
			"rawText": "δ10",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "_xQ-aWvXHDHTt_cVzxaNX",
			"originalText": "δ10",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1570,
			"versionNonce": 1333280776,
			"isDeleted": false,
			"id": "wMmYLkJWC-U_I2opwGssr",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -13.87969681939228,
			"y": 2869.6061834498637,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1576399869,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "oQRJPuYM"
				}
			],
			"updated": 1706531926421,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1105,
			"versionNonce": 858891384,
			"isDeleted": false,
			"id": "oQRJPuYM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 10.40155318060772,
			"y": 2891.6061834498637,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 1919970397,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926421,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ9",
			"rawText": "δ9",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "wMmYLkJWC-U_I2opwGssr",
			"originalText": "δ9",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1613,
			"versionNonce": 226688776,
			"isDeleted": false,
			"id": "iFNyE9BaEEpDkwmkCsu4r",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -230.20218582652603,
			"y": 2873.7363288155993,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 364697789,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "8vE9McAu"
				}
			],
			"updated": 1706531926421,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1147,
			"versionNonce": 1064719736,
			"isDeleted": false,
			"id": "8vE9McAu",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -211.78031082652603,
			"y": 2895.7363288155993,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 24951069,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926421,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ12",
			"rawText": "δ12",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "iFNyE9BaEEpDkwmkCsu4r",
			"originalText": "δ12",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 721,
			"versionNonce": 1507712520,
			"isDeleted": false,
			"id": "67M15hr0FY2IgrBqCezPG",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 760.701350195319,
			"y": 1701.863759471815,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 963154237,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "S1LUpqOV"
				}
			],
			"updated": 1706531926421,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 265,
			"versionNonce": 570222200,
			"isDeleted": false,
			"id": "S1LUpqOV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 779.123225195319,
			"y": 1723.863759471815,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 2044550749,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926421,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK0",
			"rawText": "SK0",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "67M15hr0FY2IgrBqCezPG",
			"originalText": "SK0",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 219,
			"versionNonce": 897899784,
			"isDeleted": false,
			"id": "1qn0AX3yVYLu72-1iqAeZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 658.6634490490295,
			"y": 1717.7327979482372,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1935765747,
			"groupIds": [
				"PNZE2aR2Aetfuluw4YCNu"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "wE6R0I5tXgFCqY8jZUfUh",
					"type": "arrow"
				}
			],
			"updated": 1706531926421,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 218,
			"versionNonce": 2005489528,
			"isDeleted": false,
			"id": "OWUvWOzvib8oHm1t6Vs3q",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 678.5555890984439,
			"y": 1718.0665478333551,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 131731507,
			"groupIds": [
				"PNZE2aR2Aetfuluw4YCNu"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926421,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 216,
			"versionNonce": 569637896,
			"isDeleted": false,
			"id": "gHs1PbegGbzFhS6qng35y",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 659.2681893008413,
			"y": 1735.6767824311662,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1913760541,
			"groupIds": [
				"PNZE2aR2Aetfuluw4YCNu"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926421,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "line",
			"version": 290,
			"versionNonce": 610212728,
			"isDeleted": false,
			"id": "JeVl-pXhkUA3ERAyp-z5t",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 679.8361355385484,
			"y": 1679.5906262196297,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1180.5407221136436,
			"seed": 2101139720,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531970230,
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
					1180.5407221136436
				]
			]
		},
		{
			"type": "line",
			"version": 307,
			"versionNonce": 12752760,
			"isDeleted": false,
			"id": "7Usi1ShqMczYQ2P6g_jkj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 607.3907452256702,
			"y": 1681.8026378604006,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1178.5216811076705,
			"seed": 1071095048,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531966286,
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
					1178.5216811076705
				]
			]
		},
		{
			"type": "line",
			"version": 313,
			"versionNonce": 1682168184,
			"isDeleted": false,
			"id": "MtcEl9eNF7xZCR8gRN7dJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 530.8281030530414,
			"y": 1681.8026378604009,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.1368683772161603e-13,
			"height": 1178.5216811076702,
			"seed": 992750909,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926421,
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
					-1.1368683772161603e-13,
					1178.5216811076702
				]
			]
		},
		{
			"type": "line",
			"version": 352,
			"versionNonce": 1436195336,
			"isDeleted": false,
			"id": "jfNKUiNuQKgiLXRzv0Zg5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 461.2257010779243,
			"y": 1681.8026378604009,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.684341886080802e-14,
			"height": 1181.8883461083487,
			"seed": 601826675,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926421,
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
					-5.684341886080802e-14,
					1181.8883461083487
				]
			]
		},
		{
			"type": "line",
			"version": 393,
			"versionNonce": 68865912,
			"isDeleted": false,
			"id": "fnTZzVnVzmphFpzMvQGEd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 388.64033901815935,
			"y": 1683.9961122354182,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.684341886080802e-14,
			"height": 1180.998074078317,
			"seed": 67497235,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531938337,
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
					-5.684341886080802e-14,
					1180.998074078317
				]
			]
		},
		{
			"type": "line",
			"version": 372,
			"versionNonce": 41106952,
			"isDeleted": false,
			"id": "2bHGzXEziW1_Hd3zmE4Ds",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 315.06065693017865,
			"y": 1678.8196777757528,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1186.1745085379823,
			"seed": 810837107,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531942184,
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
					1186.1745085379823
				]
			]
		},
		{
			"type": "line",
			"version": 473,
			"versionNonce": 696631048,
			"isDeleted": false,
			"id": "vLXpFqD6K2eE6-2Mz30vg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 243.5378930048248,
			"y": 1680.242793373447,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1182.1289503189232,
			"seed": 1172497528,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531961410,
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
					1182.1289503189232
				]
			]
		},
		{
			"type": "line",
			"version": 392,
			"versionNonce": 1214484344,
			"isDeleted": false,
			"id": "ur2XxVviKVah-UGcP8rlM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 169.8899328106487,
			"y": 1683.7912779168323,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1185.4533009345473,
			"seed": 1923946803,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531954429,
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
					1185.4533009345473
				]
			]
		},
		{
			"type": "rectangle",
			"version": 755,
			"versionNonce": 1550560376,
			"isDeleted": false,
			"id": "muTEKSytd7QVpco83nzQX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 762.1856263392679,
			"y": 1772.440453479667,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1764221971,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "tftmasPD"
				},
				{
					"id": "oURlXJDvQUGwSLSXaD-bF",
					"type": "arrow"
				}
			],
			"updated": 1706531926422,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 304,
			"versionNonce": 852326152,
			"isDeleted": false,
			"id": "tftmasPD",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 780.6075013392679,
			"y": 1794.440453479667,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 290974131,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926422,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK1",
			"rawText": "SK1",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "muTEKSytd7QVpco83nzQX",
			"originalText": "SK1",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 780,
			"versionNonce": 1143954808,
			"isDeleted": false,
			"id": "8HIIeNSS4qTGsd5i5Bz0k",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 763.1799463674838,
			"y": 1842.0428554547846,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1027229949,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "blwnIOBo"
				},
				{
					"id": "kFiwl21WYFcP0-zpaaT7T",
					"type": "arrow"
				}
			],
			"updated": 1706531926422,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 328,
			"versionNonce": 1595495944,
			"isDeleted": false,
			"id": "blwnIOBo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 781.6018213674838,
			"y": 1864.0428554547846,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1885479261,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926422,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK2",
			"rawText": "SK2",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "8HIIeNSS4qTGsd5i5Bz0k",
			"originalText": "SK2",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 820,
			"versionNonce": 978644600,
			"isDeleted": false,
			"id": "FAvXRi4EDUlxQxcdzl3EI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 764.1742663956998,
			"y": 1979.259019348586,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1393779325,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "QbYWlE5L"
				},
				{
					"id": "LxNDA3mJjjMjQi5j8VtIu",
					"type": "arrow"
				}
			],
			"updated": 1706531926422,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 368,
			"versionNonce": 1955681544,
			"isDeleted": false,
			"id": "QbYWlE5L",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 782.5961413956998,
			"y": 2001.259019348586,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1859914461,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926422,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK4",
			"rawText": "SK4",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "FAvXRi4EDUlxQxcdzl3EI",
			"originalText": "SK4",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 805,
			"versionNonce": 1470127992,
			"isDeleted": false,
			"id": "Ztcq1h-YfW398cWm6UqmO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 763.1799463674838,
			"y": 1912.6395774581174,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 550499155,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "OVOkgLYO"
				},
				{
					"id": "h1ly_-pOKHE2B_GyfoTfQ",
					"type": "arrow"
				}
			],
			"updated": 1706531926422,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 356,
			"versionNonce": 951153672,
			"isDeleted": false,
			"id": "OVOkgLYO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 781.6018213674838,
			"y": 1934.6395774581174,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 263983347,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926422,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK3",
			"rawText": "SK3",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "Ztcq1h-YfW398cWm6UqmO",
			"originalText": "SK3",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 813,
			"versionNonce": 2085990520,
			"isDeleted": false,
			"id": "k40tPKHD6lXU_0VBSQC_f",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 763.1799463674836,
			"y": 2047.8671012954874,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1533512211,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "KnQAcpBC"
				},
				{
					"id": "dLh5L945UhcFwp_dUDGsd",
					"type": "arrow"
				}
			],
			"updated": 1706531926422,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 362,
			"versionNonce": 1635103496,
			"isDeleted": false,
			"id": "KnQAcpBC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 781.6018213674836,
			"y": 2069.8671012954874,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 682807219,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926422,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK5",
			"rawText": "SK5",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "k40tPKHD6lXU_0VBSQC_f",
			"originalText": "SK5",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 278,
			"versionNonce": 1614340472,
			"isDeleted": false,
			"id": "Fn8PvtSYYDOetQfdAiVH5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 587.7282537015902,
			"y": 1785.4810350487123,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 952698525,
			"groupIds": [
				"CMApmxZLihDrXKZpMmB5N"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "oURlXJDvQUGwSLSXaD-bF",
					"type": "arrow"
				}
			],
			"updated": 1706531926422,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 277,
			"versionNonce": 89788936,
			"isDeleted": false,
			"id": "YBP2FOJQ4gNHq1HLA0BBV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 607.6203937510048,
			"y": 1785.8147849338302,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 847784701,
			"groupIds": [
				"CMApmxZLihDrXKZpMmB5N"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926422,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 275,
			"versionNonce": 579727992,
			"isDeleted": false,
			"id": "YXPmXp7JM5ob91vJWKJVM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 588.3329939534023,
			"y": 1803.4250195316413,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 94618461,
			"groupIds": [
				"CMApmxZLihDrXKZpMmB5N"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926422,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 328,
			"versionNonce": 190484744,
			"isDeleted": false,
			"id": "gFXy_aPg5UfJfxJp2m_5Y",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 510.9963748569086,
			"y": 1857.0720770802614,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 741315933,
			"groupIds": [
				"cFOUS58WxA4UB62xb6xNz"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "kFiwl21WYFcP0-zpaaT7T",
					"type": "arrow"
				}
			],
			"updated": 1706531926422,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 327,
			"versionNonce": 1511580536,
			"isDeleted": false,
			"id": "9ueZGrnbAGhEldjxxoKBm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 530.8885149063232,
			"y": 1857.4058269653792,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 2142167485,
			"groupIds": [
				"cFOUS58WxA4UB62xb6xNz"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926422,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 325,
			"versionNonce": 452145160,
			"isDeleted": false,
			"id": "NX1Oso0Dok2mDrPLQczpH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 511.6011151087206,
			"y": 1875.0160615631908,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1380295197,
			"groupIds": [
				"cFOUS58WxA4UB62xb6xNz"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926422,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 401,
			"versionNonce": 622703736,
			"isDeleted": false,
			"id": "kzPFuX2ek8cAhSAZIjkpK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 439.81787450344143,
			"y": 1927.6687990835944,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 540860339,
			"groupIds": [
				"JcPS8QAAbbVRqyNfvafJE"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926422,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 401,
			"versionNonce": 203419400,
			"isDeleted": false,
			"id": "cP3ugDcOGxbH1-hkg72SD",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 459.710014552856,
			"y": 1928.0025489687123,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 2139910483,
			"groupIds": [
				"JcPS8QAAbbVRqyNfvafJE"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926422,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 399,
			"versionNonce": 962618744,
			"isDeleted": false,
			"id": "4ocuvZeu-M1N3q2NKK8_O",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 440.42261475525345,
			"y": 1945.6127835665238,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 507039475,
			"groupIds": [
				"JcPS8QAAbbVRqyNfvafJE"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926422,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 445,
			"versionNonce": 1465699848,
			"isDeleted": false,
			"id": "GXyVxzNAwFqmcp41zVzuy",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 366.9416232686092,
			"y": 1994.2882409740635,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 650616829,
			"groupIds": [
				"PKzT2pOWXZQn9Z4O0NnkR"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926422,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 445,
			"versionNonce": 1948579448,
			"isDeleted": false,
			"id": "D_HF2O9U0gieddBzvPOW_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 386.8337633180239,
			"y": 1994.6219908591813,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 204249181,
			"groupIds": [
				"PKzT2pOWXZQn9Z4O0NnkR"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926422,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 443,
			"versionNonce": 94752008,
			"isDeleted": false,
			"id": "zETT1-86HMPl4XY4yTrf2",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 367.5463635204212,
			"y": 2012.2322254569929,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 2131985597,
			"groupIds": [
				"PKzT2pOWXZQn9Z4O0NnkR"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926422,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 839,
			"versionNonce": 1781491576,
			"isDeleted": false,
			"id": "Si3cJgg0F0kp8B3s1OWTj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 763.1799463674838,
			"y": 2117.4695032706045,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1462799613,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "z28RSTvt"
				},
				{
					"id": "Ei1c0585ihI5zn_wuvdI4",
					"type": "arrow"
				}
			],
			"updated": 1706531926422,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 387,
			"versionNonce": 544664584,
			"isDeleted": false,
			"id": "z28RSTvt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 781.6018213674838,
			"y": 2139.4695032706045,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 2062542173,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926422,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK6",
			"rawText": "SK6",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "Si3cJgg0F0kp8B3s1OWTj",
			"originalText": "SK6",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 492,
			"versionNonce": 2009315448,
			"isDeleted": false,
			"id": "-iqZieeYhFKpjN6qYNsHO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 295.3958959381946,
			"y": 2065.4805328473894,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1527661981,
			"groupIds": [
				"iwopDdCa159XUmjwD9Cjc"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "dLh5L945UhcFwp_dUDGsd",
					"type": "arrow"
				}
			],
			"updated": 1706531926422,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 491,
			"versionNonce": 567028488,
			"isDeleted": false,
			"id": "bUkpenVIGzNE5MTYg2VcY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 315.2880359876093,
			"y": 2065.8142827325073,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 2009958909,
			"groupIds": [
				"iwopDdCa159XUmjwD9Cjc"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926422,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 489,
			"versionNonce": 1353050488,
			"isDeleted": false,
			"id": "eVpWWIIPjG9ChNSSXpPGd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 296.0006361900066,
			"y": 2083.424517330319,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1491419741,
			"groupIds": [
				"iwopDdCa159XUmjwD9Cjc"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926422,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 558,
			"versionNonce": 1679919624,
			"isDeleted": false,
			"id": "myRqma99ltKHTHkv9JJ3I",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 221.57478133838458,
			"y": 2135.3523620840783,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 956417939,
			"groupIds": [
				"pTdlTFpyUvnY-mu-ec5BT"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926422,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 558,
			"versionNonce": 270137976,
			"isDeleted": false,
			"id": "AR89F8LOKASHdAS8nwRF4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 241.4669213877993,
			"y": 2135.686111969196,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 589913395,
			"groupIds": [
				"pTdlTFpyUvnY-mu-ec5BT"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926422,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 556,
			"versionNonce": 309528840,
			"isDeleted": false,
			"id": "w0rHwbka-onSzsMkjzkZX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 222.1795215901966,
			"y": 2153.296346567007,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 990723795,
			"groupIds": [
				"pTdlTFpyUvnY-mu-ec5BT"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926422,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 880,
			"versionNonce": 1222896504,
			"isDeleted": false,
			"id": "JGP5JckrKIjyRpC-HLY8I",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 764.5561856070678,
			"y": 2186.2022937389074,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1275980563,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "RCF1W9Sz"
				},
				{
					"id": "8qnsHjxregxPNcjRJI5xT",
					"type": "arrow"
				}
			],
			"updated": 1706531926422,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 434,
			"versionNonce": 406628360,
			"isDeleted": false,
			"id": "RCF1W9Sz",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 782.9661968985718,
			"y": 2207.7022937389074,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.17997741699219,
			"height": 25,
			"seed": 1474629811,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926422,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK7",
			"rawText": "SK7",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "JGP5JckrKIjyRpC-HLY8I",
			"originalText": "SK7",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 611,
			"versionNonce": 357022840,
			"isDeleted": false,
			"id": "MoMQQ5j1pkb-8lUkXwCUu",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 149.2546637622978,
			"y": 2203.1279305554135,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 2029427923,
			"groupIds": [
				"CObv3LPfdeJl9lzFPu74w"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "8qnsHjxregxPNcjRJI5xT",
					"type": "arrow"
				}
			],
			"updated": 1706531926422,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 610,
			"versionNonce": 293234440,
			"isDeleted": false,
			"id": "LYb0qVOYOvvXME4SHWnMo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 169.14680381171252,
			"y": 2203.4616804405314,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1347521139,
			"groupIds": [
				"CObv3LPfdeJl9lzFPu74w"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926422,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 608,
			"versionNonce": 654929272,
			"isDeleted": false,
			"id": "q_yyg_1S5-ndsPV8Tlzle",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 149.85940401410983,
			"y": 2221.071915038342,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 87933971,
			"groupIds": [
				"CObv3LPfdeJl9lzFPu74w"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926422,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1276,
			"versionNonce": 131131912,
			"isDeleted": false,
			"id": "Mby2V4vQVKwgj9KMqJtqs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 764.4026456815807,
			"y": 2736.030222525317,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 69148477,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "AwqVmo46"
				},
				{
					"id": "D7XTXfbHuyQ_zOn48LS3j",
					"type": "arrow"
				}
			],
			"updated": 1706532180546,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 825,
			"versionNonce": 1466760824,
			"isDeleted": false,
			"id": "AwqVmo46",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 776.9651456815807,
			"y": 2758.030222525317,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 684863389,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926423,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK15",
			"rawText": "SK15",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "Mby2V4vQVKwgj9KMqJtqs",
			"originalText": "SK15",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 664,
			"versionNonce": 1623344392,
			"isDeleted": false,
			"id": "E00iW71kWMevby8X1e1UW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1283.4327352592904,
			"y": 3816.878143456335,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 2038707197,
			"groupIds": [
				"SztABUcdYbFnzDO7EpQxw"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "qhFJoNO7aCvwbArKv41Lx",
					"type": "arrow"
				}
			],
			"updated": 1706531926423,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 663,
			"versionNonce": 926314360,
			"isDeleted": false,
			"id": "cALMmlQ7QbbQDFrTX2Dpt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1303.3248753087048,
			"y": 3817.2118933414527,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 37137501,
			"groupIds": [
				"SztABUcdYbFnzDO7EpQxw"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926423,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 661,
			"versionNonce": 1363436552,
			"isDeleted": false,
			"id": "jAo-2UQ9vC-GCIl4utWhc",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1284.0374755111022,
			"y": 3834.8221279392633,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1387993277,
			"groupIds": [
				"SztABUcdYbFnzDO7EpQxw"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926423,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "line",
			"version": 424,
			"versionNonce": 514441336,
			"isDeleted": false,
			"id": "vi-cWkx6lir1DudqDsynK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1303.5539395426542,
			"y": 3291.8997102780186,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 624.5236947903879,
			"seed": 78838045,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926423,
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
					624.5236947903879
				]
			]
		},
		{
			"type": "line",
			"version": 464,
			"versionNonce": 1244308232,
			"isDeleted": false,
			"id": "bByGaW-EGOYSGfEYcsjFF",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1231.1085492297761,
			"y": 3294.111721918789,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 620.2087187373074,
			"seed": 26201469,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926423,
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
					620.2087187373074
				]
			]
		},
		{
			"type": "line",
			"version": 484,
			"versionNonce": 1032515960,
			"isDeleted": false,
			"id": "rhcMH7vnVusqOeuPq4QZz",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1154.5459070571474,
			"y": 3294.1117219187895,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 622.3116831496168,
			"seed": 143857117,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926423,
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
					622.3116831496168
				]
			]
		},
		{
			"type": "line",
			"version": 470,
			"versionNonce": 1777402376,
			"isDeleted": false,
			"id": "QK7Y20K846Avo3nVpDNkC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1084.9435050820302,
			"y": 3294.1117219187895,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 623.3631653557718,
			"seed": 1959678525,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926423,
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
					623.3631653557718
				]
			]
		},
		{
			"type": "line",
			"version": 446,
			"versionNonce": 723387000,
			"isDeleted": false,
			"id": "98yEcPUOPkUewxyCZn-iH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1012.3581430222653,
			"y": 3293.117401890573,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 624.357485383988,
			"seed": 1126367901,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926423,
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
					624.357485383988
				]
			]
		},
		{
			"type": "line",
			"version": 539,
			"versionNonce": 529760520,
			"isDeleted": false,
			"id": "JBR6lntp2EMxY_Q3SJmbf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 938.7784609342846,
			"y": 3291.128761834141,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 627.3976076465744,
			"seed": 1480763133,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926423,
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
					627.3976076465744
				]
			]
		},
		{
			"type": "line",
			"version": 557,
			"versionNonce": 1982264184,
			"isDeleted": false,
			"id": "Yj_bxtlId8aDbNot9Bxks",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 866.1930988745196,
			"y": 3294.1117219187895,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 625.4661297680814,
			"seed": 112115549,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926423,
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
					625.4661297680814
				]
			]
		},
		{
			"type": "line",
			"version": 564,
			"versionNonce": 445521928,
			"isDeleted": false,
			"id": "ZJQTeiMPK-FRf2aMcVHvb",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 793.6077368147546,
			"y": 3296.100361975221,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 622.4260075054949,
			"seed": 1421396925,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926423,
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
					622.4260075054949
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1351,
			"versionNonce": 2007847288,
			"isDeleted": false,
			"id": "5H8Ys7tmg5AM_CMfhtbML",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 764.8354396193745,
			"y": 2667.811265320725,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 42093597,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "9EldL8HI"
				},
				{
					"id": "7TBKWzGS1_s2xsnHZ_O0o",
					"type": "arrow"
				}
			],
			"updated": 1706532176582,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 904,
			"versionNonce": 987553544,
			"isDeleted": false,
			"id": "9EldL8HI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 777.3979396193745,
			"y": 2689.811265320725,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1341964413,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926423,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK14",
			"rawText": "SK14",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "5H8Ys7tmg5AM_CMfhtbML",
			"originalText": "SK14",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1382,
			"versionNonce": 369833736,
			"isDeleted": false,
			"id": "gOE2b90CxdhqbTqXl4uFn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 765.8297596475904,
			"y": 2598.6180160833983,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 48867549,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "jka3pbbc"
				},
				{
					"id": "TFfTFlGu_9Q00xJPKWISk",
					"type": "arrow"
				}
			],
			"updated": 1706532172550,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 940,
			"versionNonce": 16498184,
			"isDeleted": false,
			"id": "jka3pbbc",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 778.3922596475904,
			"y": 2620.6180160833983,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 752518461,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926423,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK13",
			"rawText": "SK13",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "gOE2b90CxdhqbTqXl4uFn",
			"originalText": "SK13",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1472,
			"versionNonce": 1541654136,
			"isDeleted": false,
			"id": "ZhY9L6nL0gLXdQHhD1R7c",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 766.3700849457762,
			"y": 2461.3973241707768,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 825283997,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "Xf35fjKE"
				},
				{
					"id": "zD7OORwmoWDUF7CFeCjPU",
					"type": "arrow"
				}
			],
			"updated": 1706532268939,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1021,
			"versionNonce": 294926200,
			"isDeleted": false,
			"id": "Xf35fjKE",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 778.9325849457762,
			"y": 2483.3973241707768,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 186522109,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706532268940,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK11",
			"rawText": "SK11",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "ZhY9L6nL0gLXdQHhD1R7c",
			"originalText": "SK11",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1388,
			"versionNonce": 473557880,
			"isDeleted": false,
			"id": "j7bGUo1N1BU1W1xVl6WOs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 765.8297596475904,
			"y": 2528.3161224619776,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1403245149,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "00zJdro0"
				},
				{
					"id": "zRrsHq5Wjl144Ir7ImCXz",
					"type": "arrow"
				}
			],
			"updated": 1706532169376,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 945,
			"versionNonce": 1125768200,
			"isDeleted": false,
			"id": "00zJdro0",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 778.3922596475904,
			"y": 2550.3161224619776,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 127106749,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926423,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK12",
			"rawText": "SK12",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "j7bGUo1N1BU1W1xVl6WOs",
			"originalText": "SK12",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1412,
			"versionNonce": 213568888,
			"isDeleted": false,
			"id": "Wmgs4HVbpTAfLsAz5Mz6b",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 765.8297596475902,
			"y": 2393.3127193175437,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 227450653,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "alkDqRaX"
				},
				{
					"id": "14PLXaQZi8VYHhzkAR8tq",
					"type": "arrow"
				}
			],
			"updated": 1706532146793,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 962,
			"versionNonce": 1385241352,
			"isDeleted": false,
			"id": "alkDqRaX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 778.3922596475902,
			"y": 2415.3127193175437,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 2080813949,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926423,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK10",
			"rawText": "SK10",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "Wmgs4HVbpTAfLsAz5Mz6b",
			"originalText": "SK10",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 737,
			"versionNonce": 786954616,
			"isDeleted": false,
			"id": "NL-yoa8jKhe3o-U_8SdOW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1211.4460577056961,
			"y": 3745.8307293443654,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1061402685,
			"groupIds": [
				"PgRIcmhRF7snrITIL0ur0"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "umPKNbOeF1yu5zKhtcsx3",
					"type": "arrow"
				}
			],
			"updated": 1706531926423,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 736,
			"versionNonce": 248019464,
			"isDeleted": false,
			"id": "RI2_Yz2vP8bxsrSfcEpA7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1231.3381977551107,
			"y": 3746.1644792294833,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 637249693,
			"groupIds": [
				"PgRIcmhRF7snrITIL0ur0"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926423,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 734,
			"versionNonce": 2073692792,
			"isDeleted": false,
			"id": "uv9MxAs4MYwaGwq_zvnXV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1212.0507979575082,
			"y": 3763.7747138272944,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1695976701,
			"groupIds": [
				"PgRIcmhRF7snrITIL0ur0"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926423,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 797,
			"versionNonce": 716962056,
			"isDeleted": false,
			"id": "1S0V0u1-WuPpWv-yhAf1l",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1134.7141788610145,
			"y": 3678.62612016347,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 2118857149,
			"groupIds": [
				"SHXEF9bYRmrP0bXP9ba8W"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "KMs9rN13tg16ylrrWAJP0",
					"type": "arrow"
				}
			],
			"updated": 1706531926423,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 796,
			"versionNonce": 1776417656,
			"isDeleted": false,
			"id": "PxaYpk0HWlF3xXtptVZWd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1154.606318910429,
			"y": 3678.959870048588,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1490547229,
			"groupIds": [
				"SHXEF9bYRmrP0bXP9ba8W"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926423,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 794,
			"versionNonce": 434608136,
			"isDeleted": false,
			"id": "ErMPCarHuxg3YW9gmiHpQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1135.3189191128265,
			"y": 3696.5701046463996,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1487775357,
			"groupIds": [
				"SHXEF9bYRmrP0bXP9ba8W"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926423,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 847,
			"versionNonce": 201575544,
			"isDeleted": false,
			"id": "XZrfufGyAfpmYimuj2feX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1063.5356785075473,
			"y": 3608.32422654205,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1057614653,
			"groupIds": [
				"rFqSa8KTssxsanwLP8HIX"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926423,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 847,
			"versionNonce": 4675336,
			"isDeleted": false,
			"id": "cGoK8BMIZqkQxhtdYthKx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1083.427818556962,
			"y": 3608.657976427168,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1417903005,
			"groupIds": [
				"rFqSa8KTssxsanwLP8HIX"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926423,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 845,
			"versionNonce": 197361016,
			"isDeleted": false,
			"id": "hq5OYJqJSDdPwdBwHwW_O",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1064.1404187593594,
			"y": 3626.2682110249793,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 959184893,
			"groupIds": [
				"rFqSa8KTssxsanwLP8HIX"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926424,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 954,
			"versionNonce": 576140808,
			"isDeleted": false,
			"id": "Y_-GbVDgISp6HSLsfGUfO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 992.7623916850248,
			"y": 3541.4054282508496,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1272964285,
			"groupIds": [
				"U3LkdA1yjnPtIK8xDCAub"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "sd5FxR0ISfAxPCgzbnlp4",
					"type": "arrow"
				}
			],
			"updated": 1706531926424,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 953,
			"versionNonce": 979701368,
			"isDeleted": false,
			"id": "2h95OAvZrBb05RrEXCmYh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1012.6545317344396,
			"y": 3541.7391781359674,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 392054045,
			"groupIds": [
				"U3LkdA1yjnPtIK8xDCAub"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926424,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 951,
			"versionNonce": 1427322120,
			"isDeleted": false,
			"id": "LzYt-N59pEWsJ7ScqhiXr",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 993.3671319368368,
			"y": 3559.349412733779,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 955357565,
			"groupIds": [
				"U3LkdA1yjnPtIK8xDCAub"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926424,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1411,
			"versionNonce": 527094904,
			"isDeleted": false,
			"id": "OKlnp8cZfY5WyGj8TinYl",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 765.8297596475904,
			"y": 2325.170952286372,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1059921469,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "25zD6yu3"
				},
				{
					"id": "a8e47_kTDe_Ltbj0dmMTG",
					"type": "arrow"
				}
			],
			"updated": 1706532134418,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 961,
			"versionNonce": 1844925448,
			"isDeleted": false,
			"id": "25zD6yu3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 784.2516346475904,
			"y": 2347.170952286372,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1875398301,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926424,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK9",
			"rawText": "SK9",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "OKlnp8cZfY5WyGj8TinYl",
			"originalText": "SK9",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 954,
			"versionNonce": 249417848,
			"isDeleted": false,
			"id": "thp-5-CqECwadQIfpRwpY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 919.1136999423004,
			"y": 3475.905033324041,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1516139261,
			"groupIds": [
				"FvXuOewB85BUjAzpdn6ka"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "mFU7oQwcUloR_UiW7Mc_F",
					"type": "arrow"
				}
			],
			"updated": 1706531926424,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 953,
			"versionNonce": 855610120,
			"isDeleted": false,
			"id": "48jamim45JmoWqYW9Nm21",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 939.0058399917152,
			"y": 3476.238783209159,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1802570589,
			"groupIds": [
				"FvXuOewB85BUjAzpdn6ka"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926424,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 951,
			"versionNonce": 750584184,
			"isDeleted": false,
			"id": "GRBU6dhjOcpi4kUsoaRZ4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 919.7184401941124,
			"y": 3493.8490178069706,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 55678909,
			"groupIds": [
				"FvXuOewB85BUjAzpdn6ka"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926424,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 995,
			"versionNonce": 1252520456,
			"isDeleted": false,
			"id": "kcQMgGeZe6vUC0IP7UmlW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 845.2925853424904,
			"y": 3408.0326935544413,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1876069501,
			"groupIds": [
				"jDzAMf9-dmnGsa9uz2Sc-"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926424,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 995,
			"versionNonce": 160305784,
			"isDeleted": false,
			"id": "tcgckAuBxg90ZTGNlFC57",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 865.1847253919052,
			"y": 3408.366443439559,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1042674909,
			"groupIds": [
				"jDzAMf9-dmnGsa9uz2Sc-"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926424,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 993,
			"versionNonce": 736915720,
			"isDeleted": false,
			"id": "RDfwpmite-6zbwVuRkd8m",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 845.8973255943024,
			"y": 3425.9766780373698,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1387090237,
			"groupIds": [
				"jDzAMf9-dmnGsa9uz2Sc-"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926424,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1489,
			"versionNonce": 2113998600,
			"isDeleted": false,
			"id": "vwPhpEaKNmDdY35Kg4CsN",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 767.2059988871745,
			"y": 2256.1595737483867,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 464381437,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "jVkYUmTz"
				},
				{
					"id": "fro3Y85svpcMyO0EN5iPP",
					"type": "arrow"
				}
			],
			"updated": 1706532130100,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1041,
			"versionNonce": 239669256,
			"isDeleted": false,
			"id": "jVkYUmTz",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 785.6278738871745,
			"y": 2278.1595737483867,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1482301021,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926424,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK8",
			"rawText": "SK8",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "vwPhpEaKNmDdY35Kg4CsN",
			"originalText": "SK8",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1082,
			"versionNonce": 580244600,
			"isDeleted": false,
			"id": "yxDN1130TGxfTpDIDn2rY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 772.9724677664037,
			"y": 3338.0640930194877,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 933251773,
			"groupIds": [
				"zaHx6xtvCCEEj6PTpb_IU"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "uhf_YWtNwE4CRG9LtSSD3",
					"type": "arrow"
				}
			],
			"updated": 1706531926424,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1081,
			"versionNonce": 1505349384,
			"isDeleted": false,
			"id": "tURSmAOaAgIdB9hBZPYrW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 792.8646078158183,
			"y": 3338.3978429046056,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 975301405,
			"groupIds": [
				"zaHx6xtvCCEEj6PTpb_IU"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926424,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 1079,
			"versionNonce": 315917688,
			"isDeleted": false,
			"id": "NuCy1fWVDK1heJlqT1Z_n",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 773.5772080182157,
			"y": 3356.008077502416,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1347452797,
			"groupIds": [
				"zaHx6xtvCCEEj6PTpb_IU"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706531926424,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"id": "wE6R0I5tXgFCqY8jZUfUh",
			"type": "arrow",
			"x": 700.9135216879513,
			"y": 1736.4537786817166,
			"width": 60.26375886637936,
			"height": 0,
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
			"seed": 34096136,
			"version": 110,
			"versionNonce": 1333910536,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1706532355035,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					60.26375886637936,
					0
				]
			],
			"lastCommittedPoint": [
				60.26375886637936,
				0
			],
			"startBinding": {
				"elementId": "1qn0AX3yVYLu72-1iqAeZ",
				"focus": -0.013167495614155231,
				"gap": 2.2006516260398143
			},
			"endBinding": null,
			"startArrowhead": null,
			"endArrowhead": "triangle"
		},
		{
			"id": "oURlXJDvQUGwSLSXaD-bF",
			"type": "arrow",
			"x": 629.3228864200911,
			"y": 1801.4586200140482,
			"width": 132.70450697577007,
			"height": 1.19017495045523,
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
			"seed": 1025986168,
			"version": 181,
			"versionNonce": 1193265272,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1706532355035,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					132.70450697577007,
					1.19017495045523
				]
			],
			"lastCommittedPoint": [
				132.70450697577007,
				1.19017495045523
			],
			"startBinding": {
				"elementId": "Fn8PvtSYYDOetQfdAiVH5",
				"focus": -0.16640123725005948,
				"gap": 1.5452117056188968
			},
			"endBinding": {
				"elementId": "muTEKSytd7QVpco83nzQX",
				"focus": 0.10102212999669118,
				"gap": 1
			},
			"startArrowhead": null,
			"endArrowhead": "triangle"
		},
		{
			"type": "arrow",
			"version": 362,
			"versionNonce": 301538056,
			"isDeleted": false,
			"id": "LxNDA3mJjjMjQi5j8VtIu",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 406.3297899199281,
			"y": 2012.7234116383338,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 354.71043450707725,
			"height": 0,
			"seed": 967706488,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706532355035,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "FAvXRi4EDUlxQxcdzl3EI",
				"focus": 0.01575316794859351,
				"gap": 3.1340419686944188
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "triangle",
			"points": [
				[
					0,
					0
				],
				[
					354.71043450707725,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 355,
			"versionNonce": 2046818680,
			"isDeleted": false,
			"id": "h1ly_-pOKHE2B_GyfoTfQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 478.85334836131074,
			"y": 1945.1323075358903,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 281.9838700840951,
			"height": 0,
			"seed": 352849528,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706532355035,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "Ztcq1h-YfW398cWm6UqmO",
				"focus": 0.04433146830079776,
				"gap": 2.3427279220779837
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "triangle",
			"points": [
				[
					0,
					0
				],
				[
					281.9838700840951,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 419,
			"versionNonce": 556825096,
			"isDeleted": false,
			"id": "kFiwl21WYFcP0-zpaaT7T",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 551.764363529035,
			"y": 1874.997402952409,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 210.43652764110504,
			"height": 0,
			"seed": 1140716296,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706532355035,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "gFXy_aPg5UfJfxJp2m_5Y",
				"focus": -0.05510857181165457,
				"gap": 1
			},
			"endBinding": {
				"elementId": "8HIIeNSS4qTGsd5i5Bz0k",
				"focus": 0.030748603011047367,
				"gap": 1
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "triangle",
			"points": [
				[
					0,
					0
				],
				[
					210.43652764110504,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 490,
			"versionNonce": 598870648,
			"isDeleted": false,
			"id": "dLh5L945UhcFwp_dUDGsd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 337.11405636563876,
			"y": 2083.721781390435,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 421.29242196120225,
			"height": 0,
			"seed": 1477477128,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706532355036,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "-iqZieeYhFKpjN6qYNsHO",
				"focus": -0.03845545064493776,
				"gap": 1.6687394145623387
			},
			"endBinding": {
				"elementId": "k40tPKHD6lXU_0VBSQC_f",
				"focus": -0.054549414557280164,
				"gap": 4.77346804064257
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "triangle",
			"points": [
				[
					0,
					0
				],
				[
					421.29242196120225,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 459,
			"versionNonce": 807663880,
			"isDeleted": false,
			"id": "Ei1c0585ihI5zn_wuvdI4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 260.07698293583064,
			"y": 2153.516053044791,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 502.93855106629803,
			"height": 0,
			"seed": 748711032,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706532355036,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "Si3cJgg0F0kp8B3s1OWTj",
				"focus": -0.06019264041725257,
				"gap": 1
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "triangle",
			"points": [
				[
					0,
					0
				],
				[
					502.93855106629803,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 592,
			"versionNonce": 1325005688,
			"isDeleted": false,
			"id": "8qnsHjxregxPNcjRJI5xT",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 190.65223834269216,
			"y": 2222.092695198484,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 571.0464226093543,
			"height": 0,
			"seed": 656343160,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706532355036,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "MoMQQ5j1pkb-8lUkXwCUu",
				"focus": -0.00031699972104024297,
				"gap": 1.3481535675124547
			},
			"endBinding": {
				"elementId": "JGP5JckrKIjyRpC-HLY8I",
				"focus": -0.05560004292871835,
				"gap": 2.8575246550213933
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "triangle",
			"points": [
				[
					0,
					0
				],
				[
					571.0464226093543,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 469,
			"versionNonce": 1559894648,
			"isDeleted": false,
			"id": "qhFJoNO7aCvwbArKv41Lx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1324.6548783322196,
			"y": 3834.7296004850446,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 60.26375886637936,
			"height": 0,
			"seed": 1222593800,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926424,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "E00iW71kWMevby8X1e1UW",
				"focus": -0.05900239429903468,
				"gap": 1.172722060047363
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
					60.26375886637936,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 492,
			"versionNonce": 455403784,
			"isDeleted": false,
			"id": "umPKNbOeF1yu5zKhtcsx3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1253.0642430643597,
			"y": 3765.239291454146,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 132.70450697577007,
			"height": 1.19017495045523,
			"seed": 1082158088,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926424,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "NL-yoa8jKhe3o-U_8SdOW",
				"focus": 0.012747547736252895,
				"gap": 1.5687643457818012
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
					132.70450697577007,
					1.19017495045523
				]
			]
		},
		{
			"type": "arrow",
			"version": 670,
			"versionNonce": 1153436536,
			"isDeleted": false,
			"id": "sd5FxR0ISfAxPCgzbnlp4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1034.444972592269,
			"y": 3560.9906104115425,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 354.71043450707725,
			"height": 0,
			"seed": 77966088,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926424,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "Y_-GbVDgISp6HSLsfGUfO",
				"focus": 0.03238685171690728,
				"gap": 1.6331598943625067
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
					354.71043450707725,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 551,
			"versionNonce": 1873971208,
			"isDeleted": false,
			"id": "VJVyvDVQkzK9v-OUjWoVN",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1102.5947050055793,
			"y": 3627.8946566723284,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 281.9838700840951,
			"height": 0,
			"seed": 801835528,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926424,
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
					281.9838700840951,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 633,
			"versionNonce": 10476664,
			"isDeleted": false,
			"id": "KMs9rN13tg16ylrrWAJP0",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1176.5991766803218,
			"y": 3695.5352719731313,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 210.43652764110504,
			"height": 0,
			"seed": 753699080,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926424,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "1S0V0u1-WuPpWv-yhAf1l",
				"focus": -0.10867379946995422,
				"gap": 1.835576806425479
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
					210.43652764110504,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 858,
			"versionNonce": 1060390664,
			"isDeleted": false,
			"id": "mFU7oQwcUloR_UiW7Mc_F",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 959.7619565028892,
			"y": 3495.3069167863773,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 421.29242196120225,
			"height": 0,
			"seed": 663103496,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926424,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "thp-5-CqECwadQIfpRwpY",
				"focus": 0.022724691591577025,
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
					421.29242196120225,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 688,
			"versionNonce": 844991864,
			"isDeleted": false,
			"id": "oHu1gJkknX1Le7ci26JSO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 884.9117960871174,
			"y": 3427.3256685564497,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 496.8360685888292,
			"height": 0,
			"seed": 2073290504,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926424,
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
					496.8360685888292,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 922,
			"versionNonce": 1445340680,
			"isDeleted": false,
			"id": "uhf_YWtNwE4CRG9LtSSD3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 814.3935949869608,
			"y": 3357.033334318839,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 571.0464226093543,
			"height": 0,
			"seed": 630310408,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926424,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "yxDN1130TGxfTpDIDn2rY",
				"focus": -0.00008102330549171409,
				"gap": 1.3717062076752313
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
					571.0464226093543,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 503,
			"versionNonce": 591208056,
			"isDeleted": false,
			"id": "DvogTLZpoxAh0jzMyv-i2",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2106.8846940349454,
			"y": 1734.814672401697,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 60.26375886637936,
			"height": 0,
			"seed": 1768741384,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926424,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "Wwh95ATFX_WgWDbjcUY6_",
				"focus": 0.06102404197768705,
				"gap": 2.306520756477312
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
					60.26375886637936,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 619,
			"versionNonce": 293872904,
			"isDeleted": false,
			"id": "QRJNRrr3S098r5v3Cvn_P",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2035.2940587670855,
			"y": 1799.819513734028,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 132.70450697577007,
			"height": 1.19017495045523,
			"seed": 1909741832,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926424,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "BUS2Oo9G75U_d9Tz6CPs_",
				"focus": -0.09295505542217689,
				"gap": 1.651080836056508
			},
			"endBinding": {
				"elementId": "NiekXcfxur_YhkCNK-vbK",
				"focus": 0.060042989271296796,
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
					132.70450697577007,
					1.19017495045523
				]
			]
		},
		{
			"type": "arrow",
			"version": 714,
			"versionNonce": 1409453944,
			"isDeleted": false,
			"id": "WZ-RK8HZDFAXwlf9I3-O_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1812.3009622669224,
			"y": 2011.084305358314,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 354.71043450707725,
			"height": 0,
			"seed": 519305224,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926425,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "WfM5QlMRsq8rvz8FoJuiv",
				"focus": -0.025643044313750685,
				"gap": 3.028172838256978
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
					354.71043450707725,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 706,
			"versionNonce": 1321878536,
			"isDeleted": false,
			"id": "Pd44IE-SDakj894Ky_Nag",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1884.824520708305,
			"y": 1943.4932012558702,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 281.9838700840951,
			"height": 0,
			"seed": 1690810120,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926425,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "ywhOxWvdBCSjnD9O2_Cq7",
				"focus": 0.0029352560384803142,
				"gap": 2.2368587916407705
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
					281.9838700840951,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 857,
			"versionNonce": 217178232,
			"isDeleted": false,
			"id": "lY5_hYmpiNLzGlI2RCFGG",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1957.7355358760292,
			"y": 1873.3582966723889,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 210.43652764110504,
			"height": 0,
			"seed": 1472960008,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926425,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "rYngv4t0t8h8wLKpqyfIa",
				"focus": 0.019082965780127786,
				"gap": 1
			},
			"endBinding": {
				"elementId": "RhRJkcnLyNSNB--3srLMj",
				"focus": -0.010647609251290146,
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
					210.43652764110504,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 928,
			"versionNonce": 1542750984,
			"isDeleted": false,
			"id": "KcaG3GXcmdG5JeSmyvWj2",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1743.0852287126331,
			"y": 2082.082675110415,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 421.29242196120225,
			"height": 0,
			"seed": 486249736,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926425,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "_AVQ0p_iGK0f6w-Pbj5od",
				"focus": 0.03573608694688056,
				"gap": 1.7746085449996372
			},
			"endBinding": {
				"elementId": "Z79jLiQUrrrL1BGGAzUpq",
				"focus": -0.09594562681961767,
				"gap": 4.66759891020547
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
					421.29242196120225,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 811,
			"versionNonce": 1842286968,
			"isDeleted": false,
			"id": "YGb2-uStWGSzXjfgChC-6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1666.0481552828248,
			"y": 2151.8769467647717,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 502.93855106629803,
			"height": 0,
			"seed": 1507046408,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926425,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "9nLSw8ctMxTaPCuzG1h5v",
				"focus": -0.10158885267961684,
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
					502.93855106629803,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 1030,
			"versionNonce": 1736368648,
			"isDeleted": false,
			"id": "kYZeauI9HYYUNCXtvagex",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1596.6234106896864,
			"y": 2220.4535889184635,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 571.0464226093543,
			"height": 0,
			"seed": 609219336,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706531926425,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "7oWTzRtRb82uQLBYbP7C_",
				"focus": 0.0738745378707541,
				"gap": 1.45402269794954
			},
			"endBinding": {
				"elementId": "7lQgL-iQ8QbJyVoeC_kSZ",
				"focus": -0.09699625519104249,
				"gap": 2.751655524583839
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
					571.0464226093543,
					0
				]
			]
		},
		{
			"type": "line",
			"version": 381,
			"versionNonce": 1500577400,
			"isDeleted": false,
			"id": "8fWHEr-EdWE0kTNE9hCbn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 94.60756451487055,
			"y": 1687.3991064273432,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1180.5407221136436,
			"seed": 1789046536,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706532088329,
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
					1180.5407221136436
				]
			]
		},
		{
			"type": "line",
			"version": 398,
			"versionNonce": 1488613240,
			"isDeleted": false,
			"id": "_954fE0gND4FCf7gPUUnK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 22.162174201992116,
			"y": 1689.6111180681146,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1178.5216811076705,
			"seed": 1468501512,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706532088329,
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
					1178.5216811076705
				]
			]
		},
		{
			"type": "line",
			"version": 404,
			"versionNonce": 1873657976,
			"isDeleted": false,
			"id": "5XaVxtd9PSnu_6Al8aXYa",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -54.40046797063667,
			"y": 1689.6111180681146,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.1368683772161603e-13,
			"height": 1178.5216811076702,
			"seed": 846761224,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706532088329,
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
					-1.1368683772161603e-13,
					1178.5216811076702
				]
			]
		},
		{
			"type": "line",
			"version": 443,
			"versionNonce": 1309602168,
			"isDeleted": false,
			"id": "APlQvOYxocZ4ubQW2mQx9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -124.00286994575367,
			"y": 1689.6111180681146,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.684341886080802e-14,
			"height": 1181.8883461083487,
			"seed": 619817992,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706532088329,
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
					-5.684341886080802e-14,
					1181.8883461083487
				]
			]
		},
		{
			"type": "line",
			"version": 484,
			"versionNonce": 186778232,
			"isDeleted": false,
			"id": "FkRkZOCMmV118DA0VTG8e",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -196.58823200551865,
			"y": 1691.8045924431317,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.684341886080802e-14,
			"height": 1180.998074078317,
			"seed": 1223617288,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706532088329,
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
					-5.684341886080802e-14,
					1180.998074078317
				]
			]
		},
		{
			"type": "line",
			"version": 463,
			"versionNonce": 900395896,
			"isDeleted": false,
			"id": "LzCmeue3kyq90IA7YQ9_i",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -270.16791409349935,
			"y": 1686.6281579834667,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1186.1745085379823,
			"seed": 418138632,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706532088329,
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
					1186.1745085379823
				]
			]
		},
		{
			"type": "line",
			"version": 564,
			"versionNonce": 1676526712,
			"isDeleted": false,
			"id": "8hCcMyY3nJPhsY4SmuFKe",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -341.6906780188532,
			"y": 1688.0512735811608,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1182.1289503189232,
			"seed": 1608894728,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706532088329,
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
					1182.1289503189232
				]
			]
		},
		{
			"type": "line",
			"version": 483,
			"versionNonce": 1135506808,
			"isDeleted": false,
			"id": "SYBVvow6YQFD8OzuiindD",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -415.3386382130293,
			"y": 1691.5997581245465,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1185.4533009345473,
			"seed": 693594120,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706532088329,
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
					1185.4533009345473
				]
			]
		},
		{
			"type": "rectangle",
			"version": 331,
			"versionNonce": 1143001096,
			"isDeleted": false,
			"id": "mCebUb59XSZ0szTBeI_ig",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 76.45437176082396,
			"y": 2272.63054098642,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 172795256,
			"groupIds": [
				"BY0meZ5PxI6fXL1y7sg1t"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "fro3Y85svpcMyO0EN5iPP",
					"type": "arrow"
				}
			],
			"updated": 1706532120199,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 330,
			"versionNonce": 161639944,
			"isDeleted": false,
			"id": "4zIYW3R5RSOMMSjVhE74Z",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 96.34651181023833,
			"y": 2272.9642908715377,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1569273464,
			"groupIds": [
				"BY0meZ5PxI6fXL1y7sg1t"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706532120199,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 328,
			"versionNonce": 506948872,
			"isDeleted": false,
			"id": "k9W4_rLqq5WVC5bQjmHW1",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 77.05911201263575,
			"y": 2290.5745254693484,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 487303032,
			"groupIds": [
				"BY0meZ5PxI6fXL1y7sg1t"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706532120199,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 391,
			"versionNonce": 536764792,
			"isDeleted": false,
			"id": "zxUwtIzZapjh8yT902Eup",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4.072185932634625,
			"y": 2340.3787780868943,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 85457016,
			"groupIds": [
				"MJxJEh3zCJl0bG8AksNDx"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "a8e47_kTDe_Ltbj0dmMTG",
					"type": "arrow"
				}
			],
			"updated": 1706532151164,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 390,
			"versionNonce": 684930168,
			"isDeleted": false,
			"id": "Ier0PTY22xRWL6gWoQENx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 23.964325982049218,
			"y": 2340.712527972012,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 695347576,
			"groupIds": [
				"MJxJEh3zCJl0bG8AksNDx"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706532151165,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 388,
			"versionNonce": 711320952,
			"isDeleted": false,
			"id": "2HVL8wf2CxWt_5spzEp51",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4.676926184446643,
			"y": 2358.3227625698237,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 90061432,
			"groupIds": [
				"MJxJEh3zCJl0bG8AksNDx"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706532151165,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 442,
			"versionNonce": 6485112,
			"isDeleted": false,
			"id": "7-9H23ZMxKx98IKCVPzSp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -74.1066833927971,
			"y": 2411.9698201184437,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 195046264,
			"groupIds": [
				"Zz27ARxcAHaKjsOrw8wxn"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "14PLXaQZi8VYHhzkAR8tq",
					"type": "arrow"
				}
			],
			"updated": 1706532142685,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 441,
			"versionNonce": 790247032,
			"isDeleted": false,
			"id": "N57xAcV7td560YYaRHzmx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -54.2145433433825,
			"y": 2412.3035700035616,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 914095224,
			"groupIds": [
				"Zz27ARxcAHaKjsOrw8wxn"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706532142685,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 439,
			"versionNonce": 343713656,
			"isDeleted": false,
			"id": "YuU6tM2N8Kqs84Lw7nFuN",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -73.50194314098508,
			"y": 2429.913804601373,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 397782392,
			"groupIds": [
				"Zz27ARxcAHaKjsOrw8wxn"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706532142685,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 513,
			"versionNonce": 922878984,
			"isDeleted": false,
			"id": "-1SaUbN8DwmdSsRvBlF0U",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -142.39120278476412,
			"y": 2482.5665421217764,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1754349176,
			"groupIds": [
				"L40j8dSgYVTamokHfYULU"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706532120199,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 513,
			"versionNonce": 1731478280,
			"isDeleted": false,
			"id": "vDo9Kuz_XKe0EZoNtpxK2",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -122.49906273534953,
			"y": 2482.9002920068942,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 433237880,
			"groupIds": [
				"L40j8dSgYVTamokHfYULU"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706532120199,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 511,
			"versionNonce": 1959174664,
			"isDeleted": false,
			"id": "YLI2eW7AMvWD2amFYDEhr",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -141.7864625329521,
			"y": 2500.510526604706,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1673396344,
			"groupIds": [
				"L40j8dSgYVTamokHfYULU"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706532120199,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 557,
			"versionNonce": 2125799688,
			"isDeleted": false,
			"id": "KsCeeBOeLyT_qKufoftXL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -215.26745401959624,
			"y": 2549.185984012246,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1444360568,
			"groupIds": [
				"Sspx_vuyXG-oUr5fsAm9F"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706532120199,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 557,
			"versionNonce": 1685831688,
			"isDeleted": false,
			"id": "iS03XBqX1sgA1Od6cJPI0",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -195.37531397018165,
			"y": 2549.519733897364,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1747075704,
			"groupIds": [
				"Sspx_vuyXG-oUr5fsAm9F"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706532120199,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 555,
			"versionNonce": 907443976,
			"isDeleted": false,
			"id": "2cI28EUF28S7BpD4at8qs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -214.66271376778423,
			"y": 2567.1299684951755,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 144913272,
			"groupIds": [
				"Sspx_vuyXG-oUr5fsAm9F"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706532120199,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 604,
			"versionNonce": 604069384,
			"isDeleted": false,
			"id": "F5WApDqP4cBZw1KNkLFss",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -286.81318135001084,
			"y": 2620.3782758855714,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 769524856,
			"groupIds": [
				"WBegBcBFRmOcZRt45OzDM"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "TFfTFlGu_9Q00xJPKWISk",
					"type": "arrow"
				}
			],
			"updated": 1706532120199,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 603,
			"versionNonce": 1496808456,
			"isDeleted": false,
			"id": "GqbZ5wMIs7tfqPGTbi8_r",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -266.92104130059624,
			"y": 2620.7120257706893,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1704375672,
			"groupIds": [
				"WBegBcBFRmOcZRt45OzDM"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706532120199,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 601,
			"versionNonce": 335198984,
			"isDeleted": false,
			"id": "1Mr5woD8TFhz0SmIDNLi6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -286.2084410981988,
			"y": 2638.322260368501,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1695630968,
			"groupIds": [
				"WBegBcBFRmOcZRt45OzDM"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706532120199,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 670,
			"versionNonce": 838736392,
			"isDeleted": false,
			"id": "TA5ADK1aeTVbqTZ37PmXx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -360.63429594982085,
			"y": 2690.2501051222607,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 420591480,
			"groupIds": [
				"8MQCiCu90CpJSWNtsVKyn"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706532120199,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 670,
			"versionNonce": 373135624,
			"isDeleted": false,
			"id": "YWG63wMOCaOBimVtSEcYB",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -340.74215590040626,
			"y": 2690.5838550073786,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 903612536,
			"groupIds": [
				"8MQCiCu90CpJSWNtsVKyn"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706532120199,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 668,
			"versionNonce": 1681209352,
			"isDeleted": false,
			"id": "BRSMfC_ETHFL9orkcXpAd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -360.02955569800883,
			"y": 2708.194089605189,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1194604920,
			"groupIds": [
				"8MQCiCu90CpJSWNtsVKyn"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706532120199,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 723,
			"versionNonce": 1877014280,
			"isDeleted": false,
			"id": "QU6idrnRp0MVMuIO7KCAC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -432.95441352590774,
			"y": 2758.0256735935955,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1079921272,
			"groupIds": [
				"9xIlZSM1wtiio7UalBfPm"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "D7XTXfbHuyQ_zOn48LS3j",
					"type": "arrow"
				}
			],
			"updated": 1706532120199,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 722,
			"versionNonce": 583324936,
			"isDeleted": false,
			"id": "P-uikr0aIrsMNSQovMKBu",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -413.0622734764929,
			"y": 2758.3594234787133,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 203307896,
			"groupIds": [
				"9xIlZSM1wtiio7UalBfPm"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706532120199,
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
					37.31692569536174
				]
			]
		},
		{
			"type": "line",
			"version": 720,
			"versionNonce": 1416950792,
			"isDeleted": false,
			"id": "pB2jSat5nJBtoU8q_hhUt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -432.3496732740957,
			"y": 2775.969658076524,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 481823864,
			"groupIds": [
				"9xIlZSM1wtiio7UalBfPm"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1706532120199,
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
					38.9940908951531,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 434,
			"versionNonce": 844077064,
			"isDeleted": false,
			"id": "fro3Y85svpcMyO0EN5iPP",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 118.70444439974585,
			"y": 2291.351521719899,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 647.9605259173785,
			"height": 0,
			"seed": 2079309176,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706532355036,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "mCebUb59XSZ0szTBeI_ig",
				"focus": -0.013167495614155231,
				"gap": 2.2006516260400133
			},
			"endBinding": {
				"elementId": "vwPhpEaKNmDdY35Kg4CsN",
				"focus": -0.03505729327977914,
				"gap": 1
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "triangle",
			"points": [
				[
					0,
					0
				],
				[
					647.9605259173785,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 479,
			"versionNonce": 236702840,
			"isDeleted": false,
			"id": "a8e47_kTDe_Ltbj0dmMTG",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 45.666818651135486,
			"y": 2356.3563630522303,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 718.1041707044888,
			"height": 0,
			"seed": 1527336568,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706532355036,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "zxUwtIzZapjh8yT902Eup",
				"focus": -0.15777915645288745,
				"gap": 1.5452117056189891
			},
			"endBinding": {
				"elementId": "OKlnp8cZfY5WyGj8TinYl",
				"focus": 0.08278203629828676,
				"gap": 2.058770291966198
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "triangle",
			"points": [
				[
					0,
					0
				],
				[
					718.1041707044888,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 526,
			"versionNonce": 1269782280,
			"isDeleted": false,
			"id": "zRrsHq5Wjl144Ir7ImCXz",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -175.87928736827735,
			"y": 2567.621154676516,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 936.7562957624015,
			"height": 0,
			"seed": 583581560,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706532355036,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "j7bGUo1N1BU1W1xVl6WOs",
				"focus": -0.15603035925113654,
				"gap": 4.952751253466317
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "triangle",
			"points": [
				[
					0,
					0
				],
				[
					936.7562957624015,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 551,
			"versionNonce": 182156664,
			"isDeleted": false,
			"id": "zD7OORwmoWDUF7CFeCjPU",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -103.3557289268947,
			"y": 2500.0300505740724,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 866.0167496209291,
			"height": 0,
			"seed": 57806968,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706532355036,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "ZhY9L6nL0gLXdQHhD1R7c",
				"focus": -0.13625665892046152,
				"gap": 3.709064251741779
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "triangle",
			"points": [
				[
					0,
					0
				],
				[
					866.0167496209291,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 694,
			"versionNonce": 1086273032,
			"isDeleted": false,
			"id": "14PLXaQZi8VYHhzkAR8tq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -33.338694720670674,
			"y": 2429.895145990591,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 792.7687126340448,
			"height": 0,
			"seed": 80298360,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706532355036,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "7-9H23ZMxKx98IKCVPzSp",
				"focus": -0.055108571811666555,
				"gap": 1
			},
			"endBinding": {
				"elementId": "Wmgs4HVbpTAfLsAz5Mz6b",
				"focus": -0.07595372567786451,
				"gap": 6.399741734216036
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "triangle",
			"points": [
				[
					0,
					0
				],
				[
					792.7687126340448,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 771,
			"versionNonce": 377294456,
			"isDeleted": false,
			"id": "TFfTFlGu_9Q00xJPKWISk",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -245.09502092256673,
			"y": 2638.6195244286173,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1003.078048355191,
			"height": 0,
			"seed": 370299512,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706532355036,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "F5WApDqP4cBZw1KNkLFss",
				"focus": -0.03845545064491378,
				"gap": 1.6687394145622108
			},
			"endBinding": {
				"elementId": "gOE2b90CxdhqbTqXl4uFn",
				"focus": -0.17651495132997083,
				"gap": 7.8467322149662095
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "triangle",
			"points": [
				[
					0,
					0
				],
				[
					1003.078048355191,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 619,
			"versionNonce": 1719350536,
			"isDeleted": false,
			"id": "7TBKWzGS1_s2xsnHZ_O0o",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -322.1320943523749,
			"y": 2708.413796082973,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1081.562112265749,
			"height": 0,
			"seed": 504447864,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706532355036,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "5H8Ys7tmg5AM_CMfhtbML",
				"focus": -0.19419208124259058,
				"gap": 5.405421706000425
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "triangle",
			"points": [
				[
					0,
					0
				],
				[
					1081.562112265749,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 893,
			"versionNonce": 969179000,
			"isDeleted": false,
			"id": "D7XTXfbHuyQ_zOn48LS3j",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -390.10984846476345,
			"y": 2776.9904382366667,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1149.5398663781375,
			"height": 0,
			"seed": 185209976,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1706532355036,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "QU6idrnRp0MVMuIO7KCAC",
				"focus": -0.0003169997209923011,
				"gap": 2.795144048262472
			},
			"endBinding": {
				"elementId": "Mby2V4vQVKwgj9KMqJtqs",
				"focus": -0.2047122268043976,
				"gap": 4.972627768206621
			},
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": "triangle",
			"points": [
				[
					0,
					0
				],
				[
					1149.5398663781375,
					0
				]
			]
		},
		{
			"id": "svFJPgDpPpr_PgP3qiVJv",
			"type": "arrow",
			"x": 708.0997710429518,
			"y": 2973.9011276347196,
			"width": 1145.8362116863518,
			"height": 7.392491688298833,
			"angle": 0,
			"strokeColor": "#ffd43b",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"seed": 540704120,
			"version": 77,
			"versionNonce": 152423432,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1706532307036,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1145.8362116863518,
					7.392491688298833
				]
			],
			"lastCommittedPoint": [
				-1145.8362116863518,
				7.392491688298833
			],
			"startBinding": null,
			"endBinding": null,
			"startArrowhead": null,
			"endArrowhead": "arrow"
		},
		{
			"id": "qL1zqdgAj0r0o96pNVqho",
			"type": "arrow",
			"x": 709.9478939650267,
			"y": 1578.568321468275,
			"width": 1147.6843346084265,
			"height": 5.544368766224352,
			"angle": 0,
			"strokeColor": "#ffd43b",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"seed": 672375304,
			"version": 82,
			"versionNonce": 187019896,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1706532327178,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					-1147.6843346084265,
					5.544368766224352
				]
			],
			"lastCommittedPoint": [
				-1147.6843346084265,
				5.544368766224352
			],
			"startBinding": null,
			"endBinding": null,
			"startArrowhead": null,
			"endArrowhead": "arrow"
		},
		{
			"id": "V4C5YYoOV7iRRKtBI2NMS",
			"type": "arrow",
			"x": 876.2789569517552,
			"y": 1704.2406801693587,
			"width": 3.6962458441496437,
			"height": 1094.0887698682586,
			"angle": 0,
			"strokeColor": "#ffd43b",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"seed": 449148024,
			"version": 58,
			"versionNonce": 506820360,
			"isDeleted": false,
			"boundElements": null,
			"updated": 1706532335044,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					3.6962458441496437,
					1094.0887698682586
				]
			],
			"lastCommittedPoint": [
				3.6962458441496437,
				1094.0887698682586
			],
			"startBinding": null,
			"endBinding": null,
			"startArrowhead": null,
			"endArrowhead": "arrow"
		},
		{
			"id": "-wYOR3_S2PhHhSNnhgvNK",
			"type": "arrow",
			"x": -443.2808094096241,
			"y": 1589.6570590007236,
			"width": 1142.1399658422024,
			"height": 0,
			"angle": 0,
			"strokeColor": "#ffd43b",
			"backgroundColor": "transparent",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 2,
			"opacity": 100,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"seed": 445147656,
			"version": 71,
			"versionNonce": 1075921672,
			"isDeleted": true,
			"boundElements": null,
			"updated": 1706532320731,
			"link": null,
			"locked": false,
			"points": [
				[
					0,
					0
				],
				[
					1142.1399658422024,
					0
				]
			],
			"lastCommittedPoint": [
				1142.1399658422024,
				0
			],
			"startBinding": null,
			"endBinding": null,
			"startArrowhead": null,
			"endArrowhead": "arrow"
		}
	],
	"appState": {
		"theme": "light",
		"viewBackgroundColor": "#ffffff",
		"currentItemStrokeColor": "#ffd43b",
		"currentItemBackgroundColor": "transparent",
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
		"scrollX": 1094.7441394409773,
		"scrollY": -1390.9838448776868,
		"zoom": {
			"value": 0.5410895498646641
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