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

u8 s[134] = {0, 1, 0, 1, 1, 0, 1};
u8 delta[128] = { 0x00, };

delta[0] = (s[6] << 6) | (s[5] << 5) | (s[4] << 4) |
           (s[3] << 3) | (s[2] << 2) | (s[1] << 1) | s[0];

for (i = 1; i < 128; i++) {
    s[i + 6] = s[i + 2] ^ s[i - 1]; // XOR operation
    delta[i] = (s[i + 6] << 6) | (s[i + 5] << 5) | (s[i + 4] << 4) |
               (s[i + 3] << 3) | (s[i + 2] << 2) | (s[i + 1] << 1) | s[i];
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

for (i = 0; i < 8; i++) {
    for (j = 0; j < 8; j++)
        SK[16 * i + j + 0] = MK[((j - i) & 7) + 0] + delta[16 * i + j + 0];
    for (j = 0; j < 8; j++)
        SK[16 * i + j + 8] = MK[((j - i) & 7) + 8] + delta[16 * i + j + 8];
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

K13 ^WOTEQkFx

K15 ^yRPxkDIJ

K14 ^33z7mz9V

K12 ^5Uq2V4dD

K9 ^2lFCxT0R

K11 ^kStPxEaZ

K10 ^YmfBBR36

K8 ^BlYt1Vmf

K5 ^DY8L6U0p

K7 ^KWfJbjv9

K6 ^oeA51XQL

K4 ^oTY7SYXL

K1 ^9beOLkox

K3 ^guctQPr3

K2 ^F3MWdCmR

K0 ^EhCOXCCA

δ16 ^DfbxNeJX

δ18 ^vmAActkJ

δ17 ^bKtOOURV

δ19 ^BMj8hadh

δ21 ^iz2jqyyo

δ22 ^QLAvtCSi

δ23 ^sZQkBgg8

δ20 ^nl7BN3bl

δ31 ^GLzqKCpi

δ25 ^bZ1exOOw

δ24 ^4k6cMl4E

δ26 ^U6IbMo52

δ28 ^3nq5qDqf

δ29 ^lm0S67D9

δ30 ^fXCvFgYU

δ27 ^12cG9wx9

SK16 ^dY8qO96S

SK17 ^zouekWSS

SK18 ^g0lBIRp7

SK20 ^7IZu0Qu9

SK19 ^jl4DIr1G

SK21 ^PiZplHbw

SK22 ^xclbhArB

SK23 ^Q2nQIW0f

SK24 ^jpQDGINe

SK25 ^l7ldA8uu

SK26 ^wdyrCTnJ

SK28 ^Q0rDI7ZO

SK27 ^1jSD1Gdu

SK29 ^LzVoanOH

SK30 ^uqh7QMQo

SK31 ^XxsKYs7J

K13 ^kppR4KGA

K15 ^LkQWE1BH

K14 ^JI13M135

K12 ^0H2Jtr2t

K9 ^NK4VlekC

K11 ^BrS6Yr74

K10 ^HaMTIuTv

K8 ^JFyGwwKh

K5 ^LbxLuxEI

K7 ^JB9ZbqdJ

K6 ^SrkfO5q3

K4 ^wpMsmYk9

K1 ^sybskdfc

K3 ^HoPr1pHk

K2 ^GwUqZiJD

K0 ^kAP9Xnsz

δ32 ^VoiRiVa6

δ34 ^4GqnRjQx

δ33 ^cNhOQa37

δ35 ^f3JBy6vX

δ37 ^kGJJN4zm

δ38 ^ne4od2j6

δ39 ^6u4FcHsn

δ36 ^nJuUnbBg

δ47 ^ouztiQpQ

δ41 ^BpgOyxHX

δ40 ^cFDYy1Wt

δ42 ^08gWUJlH

δ44 ^T0exht3K

δ45 ^d4tIXOPe

δ46 ^gMXciqjk

δ43 ^OcB9M3BL

SK32 ^RtvWSxZa

SK33 ^I2gILt9w

SK34 ^qCPAaNlR

SK36 ^1KYUXm1G

SK35 ^Iprrt4M7

SK37 ^1KWqbHNt

SK38 ^6zitWD9d

SK39 ^7C2ChNYZ

SK40 ^LfskkNKd

SK41 ^b9iF6m6m

SK42 ^x60AXw8S

SK44 ^s3ymxn6f

SK43 ^1QcCbPJA

SK45 ^o8sXqMTS

SK46 ^gu9h268U

SK47 ^0ht2dR0N

K13 ^eBLe5N4u

K15 ^X3cz4n8k

K14 ^HkU81ViW

K12 ^Eg26RkHq

K9 ^Nv9oZQ2v

K11 ^M2UIBqN7

K10 ^OqJjAflo

K8 ^6aogS6zn

K5 ^iGz2WFiK

K7 ^tMyDGGa7

K6 ^KS7mDBFM

K4 ^JfSvRft3

K1 ^yUvzpMrT

K3 ^8SzfIulG

K2 ^yQL55uTO

K0 ^l1YUjkvA

δ112 ^o07qYDVG

δ114 ^KymE44w9

δ113 ^EHS0itOY

δ115 ^mnXgBCgc

δ117 ^ht9inVSe

δ118 ^YJpySkhd

δ119 ^h4JaCXSv

δ116 ^PBWpv8cS

δ127 ^FOe6vpR3

δ121 ^WRKgfV9j

δ120 ^qBEXs4dZ

δ122 ^B9XcY5mw

δ124 ^SRmuoxRb

δ125 ^g9JLY6kG

δ126 ^r8aHgXPs

δ123 ^2U4pbuyI

SK112 ^qvJPmQZW

SK113 ^liIp2xzn

SK114 ^3cWRp92n

SK116 ^2lFWloIn

SK115 ^6bw8QA0o

SK117 ^5AfuMMGM

SK118 ^9qDJSOUO

SK119 ^ecjPI5at

SK120 ^TWPdOKH8

SK121 ^bR3k4ZZN

SK122 ^vkUaWVBw

SK124 ^lGPd6sQr

SK123 ^h24PXh6R

SK125 ^MpXuz9Zj

SK126 ^S5aCrIDV

SK127 ^Qh5dBjN7

HIGHT ^EANXJtRl

Key Schedule ^gQct0tYH

s[7] ^eBTk0Ftb

<< 6 | ^Frc8edMk

s[6] ^iYjsDQAI

<< 5 | ^lOCtLPva

s[5] ^7YOvRKny

<< 4 | ^Kk1vBnVU

s[4] ^rXlbyLmW

<< 3 | ^zSKEXvnK

s[3] ^WRMYrvUl

<< 2 | ^MV9yd03J

s[2] ^etCGb47L

<< 1 | ^RcWgpT2A

s[1] ^TlQUOg1U

<< 0 | ^ZzYR6rfK

Encyption ^GaVNn86r

D5 ^VdQ9phV2

D7 ^99EySEnm

D6 ^SrMPQ2XU

D4 ^9bAxyAcv

D3 ^naFM9ozI

D2 ^5n9J0RGc

D1 ^cfTRnOf5

D0 ^qyK2cHbd

WK1 ^joHYsV99

WK3 ^11aPhKo2

WK2 ^x74DgJfW

WK0 ^567oJaLD

WK5 ^FDlMdyHB

WK7 ^vrqKBttm

WK6 ^bCnSUZVb

WK4 ^EFvxnuU0

. . . ^tMCSLaja

SK1 ^s3kbbXoc

SK3 ^KVHHm82R

SK2 ^ieI06OcH

SK0 ^u16eoVtB

F0 ^H67tlQuq

F1 ^JWGsKqS4

1 ^f08swrEc

0 ^591jFJuw

1 ^8niTbDI8

1 ^wYxUBasV

0 ^F5UDgcaT

1 ^pVlnCq9a

0 ^4OOqipBE

s6 ^o89RoOho

s0 ^gQGElOVr

s3 ^NmIwa5JK

0b ^fIiXkWy0

0 ^jxDUrlBS

δ0 = s6∥s5∥s4∥s3∥s2∥s1∥s0 = 0b01011010 = 0x5a ^2vn6mp5f

δ1 = s7∥s6∥s5∥s4∥s3∥s2∥s1 = 0b01101101 = 0x6d ^huhLy9z4

δ2 = s8∥s7∥s6∥s5∥s4∥s3∥s2 = 0b00110110 = 0x36 ^BPohb8Se

>> 1 ^SyZHlXic

.
.
. ^mur7IhHN

%%
# Drawing
```json
{
	"type": "excalidraw",
	"version": 2,
	"source": "https://github.com/zsviczian/obsidian-excalidraw-plugin/releases/tag/2.0.25",
	"elements": [
		{
			"type": "rectangle",
			"version": 181,
			"versionNonce": 653124580,
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
			"updated": 1707741780544,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 59,
			"versionNonce": 1916648540,
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
			"updated": 1707741780544,
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
			"version": 143,
			"versionNonce": 651151204,
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
			"updated": 1707741780544,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 60,
			"versionNonce": 1149096156,
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
			"updated": 1707741780544,
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
			"version": 186,
			"versionNonce": 665402084,
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
			"updated": 1707741780544,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 59,
			"versionNonce": 1858557276,
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
			"updated": 1707741780544,
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
			"version": 205,
			"versionNonce": 1141390948,
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
			"updated": 1707741780544,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 59,
			"versionNonce": 241977820,
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
			"updated": 1707741780544,
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
			"version": 135,
			"versionNonce": 347787748,
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
			"updated": 1707741780544,
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
			"version": 449,
			"versionNonce": 1182707292,
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
			"updated": 1707741780544,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 412,
			"versionNonce": 1758393700,
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
			"updated": 1707741780544,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 331,
			"versionNonce": 131105500,
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
			"updated": 1707741780544,
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
			"version": 454,
			"versionNonce": 2106763492,
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
			"updated": 1707741780544,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 473,
			"versionNonce": 1492371292,
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
			"updated": 1707741780544,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 463,
			"versionNonce": 915663972,
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
			"updated": 1707741780544,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 426,
			"versionNonce": 507149276,
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
			"updated": 1707741780544,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 348,
			"versionNonce": 1436598244,
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
			"updated": 1707741780544,
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
			"version": 468,
			"versionNonce": 1639358556,
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
			"updated": 1707741780544,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 487,
			"versionNonce": 851911524,
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
			"updated": 1707741780544,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 445,
			"versionNonce": 456799452,
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
			"updated": 1707741780544,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 122,
			"versionNonce": 1951733476,
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
			"updated": 1707741780544,
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
			"version": 407,
			"versionNonce": 2018982236,
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
			"updated": 1707741780544,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 328,
			"versionNonce": 1188600420,
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
			"updated": 1707741780544,
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
			"version": 452,
			"versionNonce": 610250204,
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
			"updated": 1707741780544,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 131,
			"versionNonce": 354397668,
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
			"updated": 1707741780544,
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
			"version": 469,
			"versionNonce": 275092060,
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
			"updated": 1707741780545,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 120,
			"versionNonce": 1077432676,
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
			"updated": 1707741780545,
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
			"version": 185,
			"versionNonce": 993715932,
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
			"updated": 1707741780545,
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
			"version": 376,
			"versionNonce": 1466991844,
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
			"updated": 1707741780545,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 85,
			"versionNonce": 2037492572,
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
			"updated": 1707741780545,
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
			"version": 415,
			"versionNonce": 1347831908,
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
			"updated": 1707741780545,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 126,
			"versionNonce": 1029431260,
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
			"updated": 1707741780545,
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
			"version": 445,
			"versionNonce": 1052220388,
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
			"updated": 1707741780545,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 156,
			"versionNonce": 1594590300,
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
			"updated": 1707741780545,
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
			"version": 440,
			"versionNonce": 211976036,
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
			"updated": 1707741780545,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 151,
			"versionNonce": 1683134684,
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
			"updated": 1707741780545,
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
			"version": 142,
			"versionNonce": 845476580,
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
			"updated": 1707741780545,
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
			"version": 198,
			"versionNonce": 1220746588,
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
			"updated": 1707741780545,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 79,
			"versionNonce": 1854731876,
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
			"updated": 1707741780545,
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
			"version": 160,
			"versionNonce": 1169101276,
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
			"updated": 1707741780545,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 80,
			"versionNonce": 2112391652,
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
			"updated": 1707741780545,
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
			"version": 204,
			"versionNonce": 438859356,
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
			"updated": 1707741780545,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 80,
			"versionNonce": 1401269604,
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
			"updated": 1707741780545,
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
			"version": 222,
			"versionNonce": 1392593628,
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
			"updated": 1707741780545,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 79,
			"versionNonce": 1353867492,
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
			"updated": 1707741780545,
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
			"version": 456,
			"versionNonce": 663283631,
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
			"updated": 1710908063955,
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
			"version": 478,
			"versionNonce": 1248331759,
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
			"updated": 1710908063955,
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
			"version": 481,
			"versionNonce": 2055911279,
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
			"updated": 1710908063954,
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
			"version": 507,
			"versionNonce": 866916399,
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
			"updated": 1710908063956,
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
			"version": 253,
			"versionNonce": 1312581724,
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
			"updated": 1707741780545,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 136,
			"versionNonce": 274848612,
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
			"updated": 1707741780545,
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
			"version": 215,
			"versionNonce": 63372508,
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
			"updated": 1707741780545,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 137,
			"versionNonce": 1037618916,
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
			"updated": 1707741780546,
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
			"version": 259,
			"versionNonce": 1141571932,
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
			"updated": 1707741780546,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 139,
			"versionNonce": 388321892,
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
			"updated": 1707741780546,
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
			"version": 277,
			"versionNonce": 1448768988,
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
			"updated": 1707741780546,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 136,
			"versionNonce": 722822628,
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
			"updated": 1707741780546,
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
			"version": 568,
			"versionNonce": 1181943983,
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
			"updated": 1710908063957,
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
			"version": 590,
			"versionNonce": 2080237807,
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
			"updated": 1710908063957,
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
			"version": 593,
			"versionNonce": 1658394735,
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
			"updated": 1710908063956,
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
			"version": 619,
			"versionNonce": 268286255,
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
			"updated": 1710908063957,
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
			"version": 633,
			"versionNonce": 151090012,
			"isDeleted": false,
			"id": "oUOhhplnhn8DptVdkBHeo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2328.770744486399,
			"y": 182.08007479819878,
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
			"updated": 1707741780546,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 362,
			"versionNonce": 411500644,
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
			"updated": 1707741780546,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 117,
			"versionNonce": 1471326172,
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
			"updated": 1707741780546,
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
			"version": 86,
			"versionNonce": 806441956,
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
			"updated": 1707741780546,
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
			"version": 328,
			"versionNonce": 323570780,
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
			"updated": 1707741780546,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 124,
			"versionNonce": 436549476,
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
			"updated": 1707741780546,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 146,
			"versionNonce": 1570201820,
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
			"updated": 1707741780546,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 177,
			"versionNonce": 1924180708,
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
			"updated": 1707741780546,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 99,
			"versionNonce": 1311696220,
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
			"updated": 1707741780546,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 172,
			"versionNonce": 480357988,
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
			"updated": 1707741780546,
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
			"version": 494,
			"versionNonce": 979491292,
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
			"updated": 1707741780546,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 173,
			"versionNonce": 2024161764,
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
			"updated": 1707741780546,
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
			"version": 548,
			"versionNonce": 2101493340,
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
			"updated": 1707741780546,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 173,
			"versionNonce": 499934564,
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
			"updated": 1707741780546,
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
			"version": 591,
			"versionNonce": 1067586268,
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
			"updated": 1707741780546,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 173,
			"versionNonce": 291641572,
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
			"updated": 1707741780546,
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
			"version": 629,
			"versionNonce": 1075009372,
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
			"updated": 1707741780546,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 173,
			"versionNonce": 2130009188,
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
			"updated": 1707741780546,
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
			"version": 553,
			"versionNonce": 451415004,
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
			"updated": 1707741780546,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 173,
			"versionNonce": 1884565476,
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
			"updated": 1707741780546,
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
			"version": 607,
			"versionNonce": 305279068,
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
			"updated": 1707741780547,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 173,
			"versionNonce": 93098852,
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
			"updated": 1707741780547,
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
			"version": 651,
			"versionNonce": 1438893276,
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
			"updated": 1707741780547,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 173,
			"versionNonce": 753698532,
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
			"updated": 1707741780547,
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
			"version": 1184,
			"versionNonce": 1261357404,
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
			"updated": 1707741780547,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 699,
			"versionNonce": 1526860388,
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
			"updated": 1707741780547,
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
			"version": 178,
			"versionNonce": 1438989788,
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
			"updated": 1707741780547,
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
			"version": 230,
			"versionNonce": 1117461988,
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
			"updated": 1707741780547,
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
			"version": 272,
			"versionNonce": 513352284,
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
			"updated": 1707741780547,
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
			"version": 507,
			"versionNonce": 214286692,
			"isDeleted": false,
			"id": "HGSTrmhpzk3GjU0Kio-ja",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2341.705371850706,
			"y": 83.0194720016217,
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
			"updated": 1707741780547,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 506,
			"versionNonce": 1551660764,
			"isDeleted": false,
			"id": "GGdiway39ZIY23-oiyXxO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2364.2772762882223,
			"y": 84.95420666769462,
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
			"updated": 1707741780547,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 499,
			"versionNonce": 282064100,
			"isDeleted": false,
			"id": "Pbl7OYYj1wVS4lNH20sVu",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2341.705371850706,
			"y": 107.52611110521104,
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
			"updated": 1707741780547,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 387,
			"versionNonce": 469842780,
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
			"updated": 1707741780547,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 385,
			"versionNonce": 206026852,
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
			"updated": 1707741780547,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 378,
			"versionNonce": 125399004,
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
			"updated": 1707741780547,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 343,
			"versionNonce": 1526402020,
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
			"updated": 1707741780547,
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
			"version": 139,
			"versionNonce": 787944540,
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
			"updated": 1707741780547,
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
			"version": 1267,
			"versionNonce": 788000612,
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
			"updated": 1707741780547,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 547,
			"versionNonce": 1347168476,
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
			"updated": 1707741780547,
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
			"version": 119,
			"versionNonce": 1217159908,
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
			"updated": 1707741780547,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 836,
			"versionNonce": 1039563119,
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
			"updated": 1710908063959,
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
			"version": 82,
			"versionNonce": 776365668,
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
			"updated": 1707741780547,
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
			"version": 176,
			"versionNonce": 210018780,
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
			"updated": 1707741780547,
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
			"version": 105,
			"versionNonce": 1693710820,
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
			"updated": 1707741780547,
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
			"version": 119,
			"versionNonce": 265029212,
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
			"updated": 1707741780547,
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
			"version": 121,
			"versionNonce": 665001316,
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
			"updated": 1707741780547,
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
			"version": 90,
			"versionNonce": 1840437980,
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
			"updated": 1707741780547,
			"link": null,
			"locked": false
		},
		{
			"type": "arrow",
			"version": 549,
			"versionNonce": 1122202511,
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
			"updated": 1710908063959,
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
			"version": 74,
			"versionNonce": 13311836,
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
			"updated": 1707741780547,
			"link": null,
			"locked": false
		},
		{
			"type": "arrow",
			"version": 96,
			"versionNonce": 478024804,
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
			"updated": 1707741780548,
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
			"version": 686,
			"versionNonce": 23516124,
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
			"updated": 1707741780548,
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
			"version": 227,
			"versionNonce": 1275455460,
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
			"updated": 1707741780548,
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
			"version": 439,
			"versionNonce": 1301805148,
			"isDeleted": false,
			"id": "iEMfONfM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1295.081132976228,
			"y": -63.35241894144713,
			"strokeColor": "#12b886",
			"backgroundColor": "transparent",
			"width": 867.1875,
			"height": 264,
			"seed": 1979831091,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780548,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "u8 s[134] = {0, 1, 0, 1, 1, 0, 1};\nu8 delta[128] = { 0x00, };\n\ndelta[0] = (s[6] << 6) | (s[5] << 5) | (s[4] << 4) |\n           (s[3] << 3) | (s[2] << 2) | (s[1] << 1) | s[0];\n\nfor (i = 1; i < 128; i++) {\n    s[i + 6] = s[i + 2] ^ s[i - 1]; // XOR operation\n    delta[i] = (s[i + 6] << 6) | (s[i + 5] << 5) | (s[i + 4] << 4) |\n               (s[i + 3] << 3) | (s[i + 2] << 2) | (s[i + 1] << 1) | s[i];\n}",
			"rawText": "u8 s[134] = {0, 1, 0, 1, 1, 0, 1};\nu8 delta[128] = { 0x00, };\n\ndelta[0] = (s[6] << 6) | (s[5] << 5) | (s[4] << 4) |\n           (s[3] << 3) | (s[2] << 2) | (s[1] << 1) | s[0];\n\nfor (i = 1; i < 128; i++) {\n    s[i + 6] = s[i + 2] ^ s[i - 1]; // XOR operation\n    delta[i] = (s[i + 6] << 6) | (s[i + 5] << 5) | (s[i + 4] << 4) |\n               (s[i + 3] << 3) | (s[i + 2] << 2) | (s[i + 1] << 1) | s[i];\n}",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "u8 s[134] = {0, 1, 0, 1, 1, 0, 1};\nu8 delta[128] = { 0x00, };\n\ndelta[0] = (s[6] << 6) | (s[5] << 5) | (s[4] << 4) |\n           (s[3] << 3) | (s[2] << 2) | (s[1] << 1) | s[0];\n\nfor (i = 1; i < 128; i++) {\n    s[i + 6] = s[i + 2] ^ s[i - 1]; // XOR operation\n    delta[i] = (s[i + 6] << 6) | (s[i + 5] << 5) | (s[i + 4] << 4) |\n               (s[i + 3] << 3) | (s[i + 2] << 2) | (s[i + 1] << 1) | s[i];\n}",
			"lineHeight": 1.2,
			"baseline": 259
		},
		{
			"type": "text",
			"version": 280,
			"versionNonce": 1917274980,
			"isDeleted": false,
			"id": "8ZXNLvfM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 587.5136433622986,
			"y": 323.99356290608273,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 282.65625,
			"height": 24,
			"seed": 1780234515,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780548,
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
			"version": 309,
			"versionNonce": 825265372,
			"isDeleted": false,
			"id": "X43ZvzjB",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 582.1849862415556,
			"y": 270.8170923178476,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 117.1875,
			"height": 24,
			"seed": 58784819,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780548,
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
			"version": 592,
			"versionNonce": 563101412,
			"isDeleted": false,
			"id": "j-lDAPAl5zqVVdadcVV-E",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 580.1699901115242,
			"y": 383.3846877770842,
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
			"updated": 1707741780548,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 155,
			"versionNonce": 767725916,
			"isDeleted": false,
			"id": "BDJfRsvO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 592.7324901115242,
			"y": 405.3846877770842,
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
			"updated": 1707741780548,
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
			"version": 144,
			"versionNonce": 1919861348,
			"isDeleted": false,
			"id": "sYdy8y7b",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 673.693209925766,
			"y": 405.06270635293527,
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
			"updated": 1707741780548,
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
			"version": 692,
			"versionNonce": 1117783516,
			"isDeleted": false,
			"id": "7Z8_nZALm1ZRTerf97u40",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 771.9157008958373,
			"y": 383.1328817915319,
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
			"updated": 1707741780548,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 257,
			"versionNonce": 1001444836,
			"isDeleted": false,
			"id": "Sb7aCKHF",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 784.4782008958373,
			"y": 405.1328817915319,
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
			"updated": 1707741780548,
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
			"version": 246,
			"versionNonce": 886762076,
			"isDeleted": false,
			"id": "Q0BvtAB6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 865.4389207100794,
			"y": 404.81090036738306,
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
			"updated": 1707741780548,
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
			"version": 675,
			"versionNonce": 1248098660,
			"isDeleted": false,
			"id": "SSR0G9jQxIyS1BlxPJFLJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 966.3016658081187,
			"y": 379.1328817915319,
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
			"updated": 1707741780548,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 240,
			"versionNonce": 1464155868,
			"isDeleted": false,
			"id": "vssxfXeV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 978.8641658081187,
			"y": 401.1328817915319,
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
			"updated": 1707741780548,
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
			"version": 229,
			"versionNonce": 433564900,
			"isDeleted": false,
			"id": "gPnakFYp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1059.8248856223609,
			"y": 400.8109003673828,
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
			"updated": 1707741780548,
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
			"version": 683,
			"versionNonce": 1383138140,
			"isDeleted": false,
			"id": "vs4srYIV1DFZ0WJfeb3BH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 580.6876307203995,
			"y": 467.6241098617071,
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
			"updated": 1707741780548,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 248,
			"versionNonce": 194539620,
			"isDeleted": false,
			"id": "dwPMxX9W",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 593.2501307203995,
			"y": 489.6241098617071,
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
			"updated": 1707741780548,
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
			"version": 238,
			"versionNonce": 1823487964,
			"isDeleted": false,
			"id": "9yqoORQj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 674.2108505346416,
			"y": 489.3021284375584,
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
			"updated": 1707741780548,
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
			"version": 743,
			"versionNonce": 527746020,
			"isDeleted": false,
			"id": "gdZNp_WwO7CDvT_InB4ts",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 775.354297387066,
			"y": 473.9398993353914,
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
			"updated": 1707741780548,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 308,
			"versionNonce": 1377098844,
			"isDeleted": false,
			"id": "d32afSPT",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 787.916797387066,
			"y": 495.9398993353914,
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
			"updated": 1707741780548,
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
			"version": 265,
			"versionNonce": 729458532,
			"isDeleted": false,
			"id": "AKquf8p4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 868.8775172013077,
			"y": 495.61791791124256,
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
			"updated": 1707741780548,
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
			"version": 754,
			"versionNonce": 1550905564,
			"isDeleted": false,
			"id": "aib6T4rrwnAEwh-lJp7fh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 968.6174552818029,
			"y": 478.0802502125839,
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
			"updated": 1707741780548,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 321,
			"versionNonce": 335026916,
			"isDeleted": false,
			"id": "97gArsBF",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 981.1799552818029,
			"y": 500.0802502125839,
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
			"updated": 1707741780548,
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
			"version": 307,
			"versionNonce": 1532392796,
			"isDeleted": false,
			"id": "rjS3MkdT",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1061.0880435170973,
			"y": 499.7582687884351,
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
			"updated": 1707741780548,
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
			"version": 855,
			"versionNonce": 58400356,
			"isDeleted": false,
			"id": "MdclyZwJQcQmWjK4IK9hw",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1151.5648237028556,
			"y": 476.25568880907485,
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
			"updated": 1707741780548,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 422,
			"versionNonce": 1545038300,
			"isDeleted": false,
			"id": "F1WPAoQf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1164.1273237028556,
			"y": 498.25568880907485,
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
			"updated": 1707741780548,
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
			"version": 409,
			"versionNonce": 584167908,
			"isDeleted": false,
			"id": "T0bVmNRd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1245.0880435170973,
			"y": 497.93370738492604,
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
			"updated": 1707741780548,
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
			"version": 329,
			"versionNonce": 1908788828,
			"isDeleted": false,
			"id": "Q80bKSYa",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 583.727421189958,
			"y": 595.9195052128302,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 282.65625,
			"height": 24,
			"seed": 175091539,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780549,
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
			"version": 447,
			"versionNonce": 1359598948,
			"isDeleted": false,
			"id": "s6gguK0c",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 585.060754523291,
			"y": 866.586171879497,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 282.65625,
			"height": 24,
			"seed": 1004550579,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780549,
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
			"version": 490,
			"versionNonce": 2100536028,
			"isDeleted": false,
			"id": "1c0pfTnM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 586.3940878566245,
			"y": 907.9195052128305,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 282.65625,
			"height": 24,
			"seed": 688970739,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780549,
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
			"version": 195,
			"versionNonce": 1534167268,
			"isDeleted": false,
			"id": "4Bezzzjq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 735.7222128566245,
			"y": 943.9195052128305,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 11.71875,
			"height": 72,
			"seed": 678693235,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780549,
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
			"version": 702,
			"versionNonce": 1962075996,
			"isDeleted": false,
			"id": "nmRkaqEs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 546.3940878566248,
			"y": 1067.91950521283,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 470.15625,
			"height": 24,
			"seed": 1935062045,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780549,
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
			"version": 755,
			"versionNonce": 899075172,
			"isDeleted": false,
			"id": "fYkibvyr",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 547.3107545232915,
			"y": 1037.2528385461635,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 470.15625,
			"height": 24,
			"seed": 1727535891,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780549,
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
			"version": 575,
			"versionNonce": 760585180,
			"isDeleted": false,
			"id": "JryMGpWhdxwmP0L-krQbu",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2431.1954063298185,
			"y": 163.58228687561234,
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
			"updated": 1707741780549,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 211,
			"versionNonce": 826777572,
			"isDeleted": false,
			"id": "Hqq3W1ye",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2449.6172813298185,
			"y": 185.58228687561234,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1024785149,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780549,
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
			"version": 602,
			"versionNonce": 544063580,
			"isDeleted": false,
			"id": "HcaTsvLDcP5p6VQd5u0XP",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2504.528739663152,
			"y": 163.5822868756121,
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
			"updated": 1707741780549,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 242,
			"versionNonce": 915538788,
			"isDeleted": false,
			"id": "CB1iLeTH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2522.950614663152,
			"y": 185.5822868756121,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1363326931,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780549,
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
			"version": 625,
			"versionNonce": 906843356,
			"isDeleted": false,
			"id": "jyIDEmAmZomXdi70-k24P",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2576.528739663152,
			"y": 163.58228687561234,
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
			"updated": 1707741780549,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 266,
			"versionNonce": 2076440292,
			"isDeleted": false,
			"id": "BFHijCTN",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2594.950614663152,
			"y": 185.58228687561234,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1071133597,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780549,
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
			"version": 616,
			"versionNonce": 197548380,
			"isDeleted": false,
			"id": "-80Ts-EiPweHTOd67Vqgf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2645.862072996485,
			"y": 163.58228687561257,
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
			"updated": 1707741780549,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 253,
			"versionNonce": 1030453860,
			"isDeleted": false,
			"id": "ri2dC9dV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2664.283947996485,
			"y": 185.58228687561257,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 705911187,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780549,
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
			"version": 391,
			"versionNonce": 1022021084,
			"isDeleted": false,
			"id": "TMyoRmvI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -476.63676150234915,
			"y": 1400.2528385461633,
			"strokeColor": "#12b886",
			"backgroundColor": "transparent",
			"width": 878.90625,
			"height": 144,
			"seed": 718403219,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780549,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "for (i = 0; i < 8; i++) {\n    for (j = 0; j < 8; j++)\n        SK[16 * i + j + 0] = MK[((j - i) & 7) + 0] + delta[16 * i + j + 0];\n    for (j = 0; j < 8; j++)\n        SK[16 * i + j + 8] = MK[((j - i) & 7) + 8] + delta[16 * i + j + 8];\n}",
			"rawText": "for (i = 0; i < 8; i++) {\n    for (j = 0; j < 8; j++)\n        SK[16 * i + j + 0] = MK[((j - i) & 7) + 0] + delta[16 * i + j + 0];\n    for (j = 0; j < 8; j++)\n        SK[16 * i + j + 8] = MK[((j - i) & 7) + 8] + delta[16 * i + j + 8];\n}",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "for (i = 0; i < 8; i++) {\n    for (j = 0; j < 8; j++)\n        SK[16 * i + j + 0] = MK[((j - i) & 7) + 0] + delta[16 * i + j + 0];\n    for (j = 0; j < 8; j++)\n        SK[16 * i + j + 8] = MK[((j - i) & 7) + 8] + delta[16 * i + j + 8];\n}",
			"lineHeight": 1.2,
			"baseline": 139
		},
		{
			"type": "text",
			"version": 322,
			"versionNonce": 1985383908,
			"isDeleted": false,
			"id": "FNy1Ts6W",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -471.6148811813355,
			"y": 1344.8554026487277,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 167.6998291015625,
			"height": 25,
			"seed": 1195865171,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780549,
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
			"version": 368,
			"versionNonce": 713863772,
			"isDeleted": false,
			"id": "fnAINbfMGlhDiO2ya0OKj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2364.5735333108705,
			"y": 348.46543342206303,
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
			"updated": 1707741780549,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 368,
			"versionNonce": 395522404,
			"isDeleted": false,
			"id": "X0Veqo1gxL55pO6OxXECj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2384.465673360285,
			"y": 348.7991833071809,
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
			"updated": 1707741780549,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 366,
			"versionNonce": 1132332764,
			"isDeleted": false,
			"id": "sFUH5-GtPwhQuvgdz0Wed",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2365.178273562683,
			"y": 366.40941790499244,
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
			"updated": 1707741780549,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 370,
			"versionNonce": 1081042148,
			"isDeleted": false,
			"id": "qpstOUGirOrc4n5LhNsHb",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2406.788443086658,
			"y": 516.2642326110955,
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
			"updated": 1707741780549,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 370,
			"versionNonce": 1280363356,
			"isDeleted": false,
			"id": "vj3D3_VDnQfzv6sAQwTyd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2426.6805831360725,
			"y": 516.5979824962134,
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
			"updated": 1707741780549,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 368,
			"versionNonce": 1987651684,
			"isDeleted": false,
			"id": "wyYtdBG1lGDDQi3R1HgAm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2407.3931833384704,
			"y": 534.2082170940249,
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
			"updated": 1707741780549,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 370,
			"versionNonce": 660013020,
			"isDeleted": false,
			"id": "pDCHrPUXfbgfpxreG_x96",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2405.794123058442,
			"y": 515.2699125828796,
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
			"updated": 1707741780549,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 370,
			"versionNonce": 1568570340,
			"isDeleted": false,
			"id": "Gqoug9Ee7_MJip3s9IBBQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2425.6862631078566,
			"y": 515.6036624679974,
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
			"updated": 1707741780549,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 368,
			"versionNonce": 480420956,
			"isDeleted": false,
			"id": "CdUJvYV-FvLUm7BufpZHd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2406.3988633102545,
			"y": 533.213897065809,
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
			"updated": 1707741780549,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 370,
			"versionNonce": 1871535972,
			"isDeleted": false,
			"id": "Qqia0q26detat9Ib0IzlJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2419.7146034534658,
			"y": 558.0256737961664,
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
			"updated": 1707741780549,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 370,
			"versionNonce": 570800348,
			"isDeleted": false,
			"id": "RA7tSiFzPkErFBMQiXKBf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2439.6067435028804,
			"y": 558.3594236812843,
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
			"updated": 1707741780549,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 368,
			"versionNonce": 888394468,
			"isDeleted": false,
			"id": "E5R89UTl1g73EZrYHi7cx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2420.319343705278,
			"y": 575.9696582790958,
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
			"updated": 1707741780549,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 505,
			"versionNonce": 588397916,
			"isDeleted": false,
			"id": "SnglzMF1TbrBFqyk5BGEp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2579.3812019344073,
			"y": 612.8016120138725,
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
			"updated": 1707741780549,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 505,
			"versionNonce": 2084558436,
			"isDeleted": false,
			"id": "3blFsbyYIrwnvSQOWz5Lm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2599.273341983822,
			"y": 613.1353618989904,
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
			"updated": 1707741780549,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 503,
			"versionNonce": 1226453468,
			"isDeleted": false,
			"id": "5QNhmmwIyVOz2tWmMS6xT",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2579.9859421862193,
			"y": 630.7455964968019,
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
			"updated": 1707741780550,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 812,
			"versionNonce": 306145764,
			"isDeleted": false,
			"id": "bkaw5FdtHCh13Ge0bK5Hy",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2526.1538041883196,
			"y": 285.9227897916835,
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
			"updated": 1707741780550,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 373,
			"versionNonce": 812394927,
			"isDeleted": false,
			"id": "lQo9ysGv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2544.5756791883196,
			"y": 307.9227897916835,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1218085171,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063961,
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
			"version": 819,
			"versionNonce": 2046856548,
			"isDeleted": false,
			"id": "7GVvR9umrOm7PsN1LNv0S",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2576.318085530411,
			"y": 430.909991205966,
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
			"updated": 1707741780550,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 371,
			"versionNonce": 237267676,
			"isDeleted": false,
			"id": "sW2HS8Gn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2594.7280968219147,
			"y": 452.409991205966,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.17997741699219,
			"height": 25,
			"seed": 1268867571,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780550,
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
			"version": 1132,
			"versionNonce": 617693412,
			"isDeleted": false,
			"id": "ASXoFt8wWEDS2yMM3Oc2A",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3024.927583583952,
			"y": 569.2866564673486,
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
			"updated": 1707741780550,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 554,
			"versionNonce": 1015721820,
			"isDeleted": false,
			"id": "zof5Fqxr",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 3049.208833583952,
			"y": 591.2866564673486,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 990669576,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780550,
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
			"version": 1142,
			"versionNonce": 708805732,
			"isDeleted": false,
			"id": "X-AS6D_L8RPQwl0UV_Xt0",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3388.018492674862,
			"y": 568.4684746491666,
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
			"updated": 1707741780550,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1082,
			"versionNonce": 1941511119,
			"isDeleted": false,
			"id": "eucqRqaA",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3412.508498168026,
			"y": 589.9684746491666,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.019989013671875,
			"height": 25,
			"seed": 144918792,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063961,
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
			"version": 1137,
			"versionNonce": 1660900,
			"isDeleted": false,
			"id": "-pspBXFagLt3v5izF6_0g",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2951.927583583952,
			"y": 570.2866564673486,
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
			"updated": 1707741780550,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 554,
			"versionNonce": 716408924,
			"isDeleted": false,
			"id": "ugtuYIrW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2976.208833583952,
			"y": 592.2866564673486,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 1754965768,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780550,
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
			"version": 1156,
			"versionNonce": 845986660,
			"isDeleted": false,
			"id": "QQ_4KudzQy9Npak8HjFIV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3097.927583583952,
			"y": 569.2866564673486,
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
			"updated": 1707741780550,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 570,
			"versionNonce": 1088604655,
			"isDeleted": false,
			"id": "GZfYThku",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 3120.987596401335,
			"y": 590.7866564673486,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 25.879974365234375,
			"height": 25,
			"seed": 483558664,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063961,
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
			"version": 1131,
			"versionNonce": 461876964,
			"isDeleted": false,
			"id": "QZEqalAP-_wXiKzMQaaOT",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3317.906526181177,
			"y": 568.3077138701246,
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
			"updated": 1707741780550,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 830,
			"versionNonce": 888255503,
			"isDeleted": false,
			"id": "xvuSZQBo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3340.896531674341,
			"y": 589.8077138701246,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 26.019989013671875,
			"height": 25,
			"seed": 1865081608,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063962,
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
			"version": 1093,
			"versionNonce": 469250660,
			"isDeleted": false,
			"id": "d2uL_iw1yNZuMzdMQaWVf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3171.906526181177,
			"y": 569.3077138701246,
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
			"updated": 1707741780550,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1036,
			"versionNonce": 937318959,
			"isDeleted": false,
			"id": "FfVN3wKz",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3194.6565338105715,
			"y": 590.8077138701246,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 26.499984741210938,
			"height": 25,
			"seed": 830718216,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063962,
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
			"version": 1138,
			"versionNonce": 1384924644,
			"isDeleted": false,
			"id": "aGxJZz-rVv8p_YE0luNCU",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3244.906526181177,
			"y": 569.3077138701246,
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
			"updated": 1707741780550,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 839,
			"versionNonce": 512834639,
			"isDeleted": false,
			"id": "0aONOF7d",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3272.0665298432864,
			"y": 590.8077138701246,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 17.67999267578125,
			"height": 25,
			"seed": 1035804424,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063962,
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
			"version": 1211,
			"versionNonce": 1414654308,
			"isDeleted": false,
			"id": "piIAvG2ZvrEUjMSElxUYo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2879.997435272086,
			"y": 570.1258956883066,
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
			"updated": 1707741780550,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 870,
			"versionNonce": 1093062364,
			"isDeleted": false,
			"id": "2G4V57Yq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2904.278685272086,
			"y": 592.1258956883066,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 1974926600,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780550,
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
			"version": 1169,
			"versionNonce": 1687624932,
			"isDeleted": false,
			"id": "XmZBR8QjI_GNMaZmrDoNn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3388.9906970599027,
			"y": -125.61295468423418,
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
			"updated": 1707741780550,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 704,
			"versionNonce": 698389340,
			"isDeleted": false,
			"id": "konRUdm3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 3407.4125720599027,
			"y": -103.61295468423418,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1129405192,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780550,
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
			"version": 1222,
			"versionNonce": 753524836,
			"isDeleted": false,
			"id": "awifrpKqXI5HI43xUBsup",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3240.77037696424,
			"y": -123.89900957147097,
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
			"updated": 1707741780550,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 758,
			"versionNonce": 1466812380,
			"isDeleted": false,
			"id": "yUrrojd2",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 3259.19225196424,
			"y": -101.89900957147097,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 409745672,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780550,
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
			"version": 1142,
			"versionNonce": 1964520420,
			"isDeleted": false,
			"id": "ClFfmo7aWNm_bDMlQvuLq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3313.9588936755913,
			"y": -123.8990095714696,
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
			"updated": 1707741780550,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 676,
			"versionNonce": 782265436,
			"isDeleted": false,
			"id": "oazoeTBw",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 3332.3807686755913,
			"y": -101.8990095714696,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1860671240,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780550,
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
			"version": 1175,
			"versionNonce": 1529878372,
			"isDeleted": false,
			"id": "WzEhpqeqyJZI4vVz7HVyw",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3171.848829402646,
			"y": -124.89332959968601,
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
			"updated": 1707741780550,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 710,
			"versionNonce": 1091207388,
			"isDeleted": false,
			"id": "FbI3hyEQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 3190.270704402646,
			"y": -102.89332959968601,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1218671880,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780550,
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
			"version": 1179,
			"versionNonce": 192908004,
			"isDeleted": false,
			"id": "PGFhz7yKMDhCTSdu55xIx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3028.1650670276936,
			"y": -124.18869860836617,
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
			"updated": 1707741780551,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 714,
			"versionNonce": 373163356,
			"isDeleted": false,
			"id": "DTSch2ig",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 3046.5869420276936,
			"y": -102.18869860836617,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 796906248,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780551,
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
			"version": 1165,
			"versionNonce": 2023001700,
			"isDeleted": false,
			"id": "bpbpt0T1OL0-mw5XNFBMe",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2955.970870344557,
			"y": -125.59796059100677,
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
			"updated": 1707741780551,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 704,
			"versionNonce": 1938618844,
			"isDeleted": false,
			"id": "6yRUIviH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2974.392745344557,
			"y": -103.59796059100677,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 895267080,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780551,
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
			"version": 1493,
			"versionNonce": 322773476,
			"isDeleted": false,
			"id": "CC-PO2jPjePmWx2_waIMh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2880.830021311604,
			"y": 1268.2143577090483,
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
			"updated": 1707741780551,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1028,
			"versionNonce": 604593756,
			"isDeleted": false,
			"id": "GWlZEJtO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2899.251896311604,
			"y": 1290.2143577090483,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1947864840,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780551,
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
			"version": 1182,
			"versionNonce": 42419556,
			"isDeleted": false,
			"id": "mH8jzqef9nVIb9Gv46x-q",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2882.492664596309,
			"y": -124.31395152589562,
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
			"updated": 1707741780551,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 717,
			"versionNonce": 1082471132,
			"isDeleted": false,
			"id": "8UvZMpu7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2900.914539596309,
			"y": -102.31395152589562,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 228060424,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780551,
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
			"version": 1181,
			"versionNonce": 1539373284,
			"isDeleted": false,
			"id": "VCYcik3MXnuSo2LeGplxQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3099.364943682614,
			"y": -123.89900957147006,
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
			"updated": 1707741780551,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 720,
			"versionNonce": 2006087516,
			"isDeleted": false,
			"id": "p6FFfasH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 3117.786818682614,
			"y": -101.89900957147006,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 733367048,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780551,
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
			"version": 1398,
			"versionNonce": 1517829220,
			"isDeleted": false,
			"id": "1nAsqy_B85PWizp8hNm4e",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3319.5796731151945,
			"y": 1265.7859157745388,
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
			"updated": 1707741780551,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 937,
			"versionNonce": 1434659804,
			"isDeleted": false,
			"id": "A6lXD134",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 3338.0015481151945,
			"y": 1287.7859157745388,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 5581064,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780551,
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
			"version": 1320,
			"versionNonce": 410718180,
			"isDeleted": false,
			"id": "wgTBInOG21-eYO2AMejot",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3392.768189826546,
			"y": 1265.7859157745388,
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
			"updated": 1707741780551,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 860,
			"versionNonce": 208228444,
			"isDeleted": false,
			"id": "FvonKt3g",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 3411.190064826546,
			"y": 1287.7859157745388,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1163167496,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780551,
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
			"version": 1345,
			"versionNonce": 1171747684,
			"isDeleted": false,
			"id": "3VRRWac6Seic640o0jUAG",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3247.675165468953,
			"y": 1265.7859157745388,
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
			"updated": 1707741780551,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 881,
			"versionNonce": 1008133340,
			"isDeleted": false,
			"id": "Z8O8GMDg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 3266.097040468953,
			"y": 1287.7859157745388,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1016358152,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780551,
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
			"version": 1346,
			"versionNonce": 1624991460,
			"isDeleted": false,
			"id": "10UU01Pby9tB3xS1G-YXW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3100.0141229811366,
			"y": 1264.5019067094272,
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
			"updated": 1707741780551,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 883,
			"versionNonce": 975038812,
			"isDeleted": false,
			"id": "F9aojpgS",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 3118.4359979811366,
			"y": 1286.5019067094272,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 804569864,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780551,
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
			"version": 1329,
			"versionNonce": 1846864484,
			"isDeleted": false,
			"id": "X7ouZBmtg3S60JYJYMUQN",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3026.825606269784,
			"y": 1267.0699248396504,
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
			"updated": 1707741780551,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 868,
			"versionNonce": 1506827740,
			"isDeleted": false,
			"id": "YFhWCWt4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 3045.247481269784,
			"y": 1289.0699248396504,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1901437192,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780551,
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
			"version": 1344,
			"versionNonce": 810679780,
			"isDeleted": false,
			"id": "VBr5U_gsydcl5r9EA-ESg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2952.3530804933202,
			"y": 1268.353933904762,
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
			"updated": 1707741780551,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 882,
			"versionNonce": 876626524,
			"isDeleted": false,
			"id": "6eaSDgY5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2970.7749554933202,
			"y": 1290.353933904762,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1519845128,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780551,
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
			"version": 1353,
			"versionNonce": 1621139812,
			"isDeleted": false,
			"id": "T7CZ09m7dnQlI-2JleiWJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3173.202639692489,
			"y": 1265.7859157745388,
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
			"updated": 1707741780551,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 889,
			"versionNonce": 1883215580,
			"isDeleted": false,
			"id": "DyVtFusZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 3191.624514692489,
			"y": 1287.7859157745388,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1301863688,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780551,
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
			"version": 1044,
			"versionNonce": 1716442340,
			"isDeleted": false,
			"id": "oOL_Hsdug53_UB7Im52rp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3507.7048336265107,
			"y": -35.849063811756196,
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
			"updated": 1707741780551,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 590,
			"versionNonce": 174087004,
			"isDeleted": false,
			"id": "QyF1iQIA",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 3520.2673336265107,
			"y": -13.849063811756196,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 876296968,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780551,
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
			"version": 491,
			"versionNonce": 250255460,
			"isDeleted": false,
			"id": "Wwh95ATFX_WgWDbjcUY6_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3405.666932480221,
			"y": -19.98002533533395,
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
			"updated": 1707741780551,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 490,
			"versionNonce": 485789660,
			"isDeleted": false,
			"id": "B7MnnlvIvsCUl1q5e0si5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3425.5590725296356,
			"y": -19.64627545021608,
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
			"updated": 1707741780551,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 488,
			"versionNonce": 1178725348,
			"isDeleted": false,
			"id": "Y--IxrN7VkS0i11TnFU7c",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3406.2716727320335,
			"y": -2.0360408524045397,
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
			"updated": 1707741780551,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 409,
			"versionNonce": 672019548,
			"isDeleted": false,
			"id": "sT2qBbsQaA3-GfP1iLA7Y",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3426.83961896974,
			"y": -58.122197063941485,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 624.5236947903879,
			"seed": 736196360,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780551,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 449,
			"versionNonce": 1315098468,
			"isDeleted": false,
			"id": "VdjUcI8XQa-gNCen-iyCO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3354.3942286568613,
			"y": -55.910185423170105,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 620.2087187373074,
			"seed": 363681288,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780552,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 469,
			"versionNonce": 1501513948,
			"isDeleted": false,
			"id": "gmlweKPtMxkZa9nK2YNOQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3277.831586484233,
			"y": -55.910185423170105,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 622.3116831496168,
			"seed": 950359304,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780552,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 455,
			"versionNonce": 2006663908,
			"isDeleted": false,
			"id": "la76W6i_kn-zj0f9uonhl",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3208.2291845091154,
			"y": -55.910185423170105,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 623.3631653557718,
			"seed": 1514501128,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780552,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 431,
			"versionNonce": 1423560028,
			"isDeleted": false,
			"id": "SvrEXSI-SQt4i2HUTzs9W",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3135.643822449351,
			"y": -56.90450545138606,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 624.357485383988,
			"seed": 814330632,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780552,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 524,
			"versionNonce": 1484342884,
			"isDeleted": false,
			"id": "QGodBwx4CPNx-rdm6Aw3y",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3062.0641403613704,
			"y": -58.89314550781796,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 627.3976076465744,
			"seed": 1374556680,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780552,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 542,
			"versionNonce": 2070921692,
			"isDeleted": false,
			"id": "09enAnji-t5SewPELfT2f",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2989.478778301605,
			"y": -55.910185423170105,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 625.4661297680814,
			"seed": 628003080,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780552,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 549,
			"versionNonce": 97180132,
			"isDeleted": false,
			"id": "r81fMVAAZwIBtICkycb5H",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2916.8934162418404,
			"y": -53.921545366738656,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 622.4260075054949,
			"seed": 1384591368,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780552,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1078,
			"versionNonce": 877864540,
			"isDeleted": false,
			"id": "NiekXcfxur_YhkCNK-vbK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3509.1891097704593,
			"y": 34.72763019609579,
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
			"updated": 1707741780552,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 630,
			"versionNonce": 1251868004,
			"isDeleted": false,
			"id": "Vu8313mK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 3521.7516097704593,
			"y": 56.72763019609579,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 972082696,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780552,
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
			"version": 1101,
			"versionNonce": 878050012,
			"isDeleted": false,
			"id": "RhRJkcnLyNSNB--3srLMj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3510.183429798675,
			"y": 104.33003217121336,
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
			"updated": 1707741780552,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 654,
			"versionNonce": 1614852324,
			"isDeleted": false,
			"id": "JMSp1dMv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 3522.745929798675,
			"y": 126.33003217121336,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1846209544,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780552,
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
			"version": 1143,
			"versionNonce": 1175076700,
			"isDeleted": false,
			"id": "WfM5QlMRsq8rvz8FoJuiv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3511.177749826891,
			"y": 241.54619606501478,
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
			"updated": 1707741780552,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 693,
			"versionNonce": 641791076,
			"isDeleted": false,
			"id": "NCdlDp84",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 3523.740249826891,
			"y": 263.5461960650148,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1555401224,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780552,
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
			"version": 1128,
			"versionNonce": 297923548,
			"isDeleted": false,
			"id": "ywhOxWvdBCSjnD9O2_Cq7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3510.183429798675,
			"y": 174.9267541745469,
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
			"updated": 1707741780552,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 682,
			"versionNonce": 1517078500,
			"isDeleted": false,
			"id": "o3fCXe7Y",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 3522.745929798675,
			"y": 196.9267541745469,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 2077272072,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780552,
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
			"version": 1136,
			"versionNonce": 1703876700,
			"isDeleted": false,
			"id": "Z79jLiQUrrrL1BGGAzUpq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3510.183429798675,
			"y": 310.1542780119164,
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
			"updated": 1707741780552,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 688,
			"versionNonce": 1355950948,
			"isDeleted": false,
			"id": "FpDrg8GY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 3522.745929798675,
			"y": 332.1542780119164,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1228686856,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780552,
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
			"version": 550,
			"versionNonce": 2101587164,
			"isDeleted": false,
			"id": "BUS2Oo9G75U_d9Tz6CPs_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3334.7317371327813,
			"y": 47.76821176514136,
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
			"updated": 1707741780552,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 549,
			"versionNonce": 733945572,
			"isDeleted": false,
			"id": "uuWUXgnNIom4C3nEhCpMo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3354.623877182196,
			"y": 48.10196165025923,
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
			"updated": 1707741780552,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 547,
			"versionNonce": 1248964956,
			"isDeleted": false,
			"id": "IogSh1uHRLd3YFqE3XQ1g",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3335.3364773845938,
			"y": 65.71219624807031,
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
			"updated": 1707741780552,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 600,
			"versionNonce": 331457124,
			"isDeleted": false,
			"id": "rYngv4t0t8h8wLKpqyfIa",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3257.9998582881003,
			"y": 119.35925379669084,
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
			"updated": 1707741780552,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 599,
			"versionNonce": 1013655004,
			"isDeleted": false,
			"id": "Itd4zf0mYWGUCjY-pR_Ur",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3277.891998337515,
			"y": 119.6930036818087,
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
			"updated": 1707741780552,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 597,
			"versionNonce": 1873262052,
			"isDeleted": false,
			"id": "yexOCBkX3uYMcdOp0xyfR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3258.604598539912,
			"y": 137.30323827961934,
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
			"updated": 1707741780552,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 673,
			"versionNonce": 138545756,
			"isDeleted": false,
			"id": "Ll3Q0gAtZbDsV7CBY-bEq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3186.8213579346325,
			"y": 189.95597580002345,
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
			"updated": 1707741780552,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 673,
			"versionNonce": 478108004,
			"isDeleted": false,
			"id": "l7UBvN2K-tXE5W4ovFQQa",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3206.713497984047,
			"y": 190.28972568514132,
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
			"updated": 1707741780552,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 671,
			"versionNonce": 1892179676,
			"isDeleted": false,
			"id": "-pv4u5z0mjqSOuWDGJ-hs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3187.426098186445,
			"y": 207.89996028295286,
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
			"updated": 1707741780552,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 717,
			"versionNonce": 630623460,
			"isDeleted": false,
			"id": "uCy4S0SiuDYaTmluETnzr",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3113.9451066998004,
			"y": 256.57541769049226,
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
			"updated": 1707741780552,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 717,
			"versionNonce": 244327260,
			"isDeleted": false,
			"id": "6TMwo7-9zLLTrQbQ2kMds",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3133.837246749216,
			"y": 256.9091675756101,
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
			"updated": 1707741780552,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 715,
			"versionNonce": 2088456292,
			"isDeleted": false,
			"id": "WG0rSQSalrKi-HD4KhXKR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3114.549846951613,
			"y": 274.51940217342167,
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
			"updated": 1707741780552,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1160,
			"versionNonce": 401299420,
			"isDeleted": false,
			"id": "9nLSw8ctMxTaPCuzG1h5v",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3510.183429798675,
			"y": 379.75667998703307,
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
			"updated": 1707741780552,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 713,
			"versionNonce": 821797860,
			"isDeleted": false,
			"id": "io69TSik",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 3522.745929798675,
			"y": 401.75667998703307,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 840143624,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780553,
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
			"version": 764,
			"versionNonce": 686554204,
			"isDeleted": false,
			"id": "_AVQ0p_iGK0f6w-Pbj5od",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3042.3993793693858,
			"y": 327.76770956381847,
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
			"updated": 1707741780553,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 763,
			"versionNonce": 690325348,
			"isDeleted": false,
			"id": "8jqmZ02cKSIcD6clnCYvm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3062.2915194188013,
			"y": 328.10145944893634,
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
			"updated": 1707741780553,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 761,
			"versionNonce": 191107292,
			"isDeleted": false,
			"id": "e6RsqgOWe6jmJ2QidmtSi",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3043.0041196211982,
			"y": 345.7116940467479,
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
			"updated": 1707741780553,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 830,
			"versionNonce": 1497823972,
			"isDeleted": false,
			"id": "Gk6tk_sVF-g2hfLyLfR3l",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2968.5782647695764,
			"y": 397.6395388005078,
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
			"updated": 1707741780553,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 830,
			"versionNonce": 2128975196,
			"isDeleted": false,
			"id": "dCUNJ0qzgf_l--pTV1W8l",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2988.470404818991,
			"y": 397.9732886856257,
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
			"updated": 1707741780553,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 828,
			"versionNonce": 2079194724,
			"isDeleted": false,
			"id": "JlCsBQRgCT6Wm5MLCrE45",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2969.183005021388,
			"y": 415.5835232834363,
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
			"updated": 1707741780553,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1203,
			"versionNonce": 12749276,
			"isDeleted": false,
			"id": "7lQgL-iQ8QbJyVoeC_kSZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3511.559669038259,
			"y": 448.48947045533623,
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
			"updated": 1707741780553,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 762,
			"versionNonce": 1239978468,
			"isDeleted": false,
			"id": "C7B0UV5l",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 3524.122169038259,
			"y": 470.48947045533623,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 288942344,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780553,
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
			"version": 883,
			"versionNonce": 336391772,
			"isDeleted": false,
			"id": "7oWTzRtRb82uQLBYbP7C_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2896.2581471934895,
			"y": 465.4151072718423,
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
			"updated": 1707741780553,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 882,
			"versionNonce": 843363684,
			"isDeleted": false,
			"id": "psgPnEvFWy5y5Npu5yq8U",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2916.150287242904,
			"y": 465.7488571569602,
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
			"updated": 1707741780553,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 880,
			"versionNonce": 160875228,
			"isDeleted": false,
			"id": "N6iOPSsAPsH4UITmtgSlz",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2896.862887445301,
			"y": 483.3590917547708,
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
			"updated": 1707741780553,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1360,
			"versionNonce": 307259620,
			"isDeleted": false,
			"id": "i2devUhDmkqpYWlshxRo9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 5036.089036697614,
			"y": 403.6427011069477,
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
			"updated": 1707741780553,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 912,
			"versionNonce": 1207043932,
			"isDeleted": false,
			"id": "HMkeVuyl",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 5048.651536697614,
			"y": 425.6427011069477,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 856195848,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780553,
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
			"version": 885,
			"versionNonce": 1838787684,
			"isDeleted": false,
			"id": "Na62KclgfLBPH08MnE_By",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4934.0511355513245,
			"y": 419.51173958336904,
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
			"updated": 1707741780553,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 885,
			"versionNonce": 326155228,
			"isDeleted": false,
			"id": "iGpXi9-Y416zv8b1XVELn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4953.943275600739,
			"y": 419.8454894684869,
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
			"updated": 1707741780553,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 883,
			"versionNonce": 636387300,
			"isDeleted": false,
			"id": "MFtNfBP_1RkgJvJRStyqv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4934.655875803136,
			"y": 437.45572406629753,
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
			"updated": 1707741780553,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 646,
			"versionNonce": 1445257308,
			"isDeleted": false,
			"id": "yZsg5WNh7xYMvKwHkmxur",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4954.172339834688,
			"y": -105.46669359494717,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 624.5236947903879,
			"seed": 1439350536,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780553,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 686,
			"versionNonce": 861725540,
			"isDeleted": false,
			"id": "S-gnDWpf2lFS91PbBNlCZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4881.72694952181,
			"y": -103.2546819541767,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 620.2087187373074,
			"seed": 1127063048,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780553,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 706,
			"versionNonce": 1742763228,
			"isDeleted": false,
			"id": "MrWHeFhZSp8awdmyeg3ql",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4805.164307349181,
			"y": -103.2546819541758,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 622.3116831496168,
			"seed": 1591516424,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780553,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 692,
			"versionNonce": 1546835684,
			"isDeleted": false,
			"id": "V1oekcHpWSKr8oq4YiEUa",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4735.561905374065,
			"y": -103.2546819541758,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 623.3631653557718,
			"seed": 1247001608,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780553,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 668,
			"versionNonce": 1446345052,
			"isDeleted": false,
			"id": "M3aw1JVxATn4D0vR5A_3e",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4662.976543314299,
			"y": -104.24900198239266,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 624.357485383988,
			"seed": 395246344,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780553,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 761,
			"versionNonce": 1828608612,
			"isDeleted": false,
			"id": "_9BQuI5MKDcK7v3vBI6d-",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4589.396861226318,
			"y": -106.23764203882456,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 627.3976076465744,
			"seed": 956979720,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780553,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 779,
			"versionNonce": 745926108,
			"isDeleted": false,
			"id": "Pu7ntMwy8J-DNE2lChp1T",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4516.811499166553,
			"y": -103.2546819541758,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 625.4661297680814,
			"seed": 1908529416,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780553,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 786,
			"versionNonce": 1888316900,
			"isDeleted": false,
			"id": "LkbSxMg2_S7idtCQhMO-M",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4444.226137106789,
			"y": -101.2660418977448,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 622.4260075054949,
			"seed": 1160869896,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780553,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1435,
			"versionNonce": 1001640540,
			"isDeleted": false,
			"id": "lcfml2Pcy8Nog9mypTa9M",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 5036.521830635407,
			"y": 335.4237439023541,
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
			"updated": 1707741780553,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 991,
			"versionNonce": 1743655268,
			"isDeleted": false,
			"id": "ziyKUjfa",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 5049.084330635407,
			"y": 357.4237439023541,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 749278728,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780553,
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
			"version": 1468,
			"versionNonce": 1656825564,
			"isDeleted": false,
			"id": "XTXQvdfiUbkPn3z9AtJdu",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 5037.516150663623,
			"y": 266.2304946650288,
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
			"updated": 1707741780553,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1027,
			"versionNonce": 40781028,
			"isDeleted": false,
			"id": "emOc0fwk",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 5050.078650663623,
			"y": 288.2304946650288,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 894514184,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780553,
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
			"version": 1549,
			"versionNonce": 1445981020,
			"isDeleted": false,
			"id": "UagyfsY5gDmbTKSdduykm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 5040.613435104149,
			"y": 129.0098027524068,
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
			"updated": 1707741780553,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1101,
			"versionNonce": 1436289124,
			"isDeleted": false,
			"id": "K719VHWR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 5053.175935104149,
			"y": 151.0098027524068,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 755618312,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780554,
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
			"version": 1472,
			"versionNonce": 1750212572,
			"isDeleted": false,
			"id": "laWBLWfDJ0P5Ntr4UYsZS",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 5037.516150663623,
			"y": 195.9286010436076,
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
			"updated": 1707741780554,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1032,
			"versionNonce": 356867044,
			"isDeleted": false,
			"id": "QRjQquFS",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 5050.078650663623,
			"y": 217.9286010436076,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1773334536,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780554,
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
			"version": 1496,
			"versionNonce": 1362740316,
			"isDeleted": false,
			"id": "hSLI11dsQvJ3f-qDpahYk",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 5037.516150663623,
			"y": 60.92519789917378,
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
			"updated": 1707741780554,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1049,
			"versionNonce": 1266171748,
			"isDeleted": false,
			"id": "TJ7oy2fo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 5050.078650663623,
			"y": 82.92519789917378,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1227656712,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780554,
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
			"version": 819,
			"versionNonce": 1991825628,
			"isDeleted": false,
			"id": "gKDVJl3_-_ql2cuKxqvET",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4975.135630048182,
			"y": 437.62267311146525,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 59.659201692957595,
			"height": 0,
			"seed": 662539528,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780554,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 958,
			"versionNonce": 277000932,
			"isDeleted": false,
			"id": "WnGi5707nWtbkN87SDC8p",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4862.064457997731,
			"y": 348.46432547140057,
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
			"updated": 1707741780554,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 958,
			"versionNonce": 878796124,
			"isDeleted": false,
			"id": "bzevZ7nd72Qgv8ixuvzlP",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4881.956598047145,
			"y": 348.79807535651844,
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
			"updated": 1707741780554,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 956,
			"versionNonce": 1123202660,
			"isDeleted": false,
			"id": "GzdmNELQWziTc8t_C8Vns",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4862.669198249542,
			"y": 366.40830995432907,
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
			"updated": 1707741780554,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 912,
			"versionNonce": 595939804,
			"isDeleted": false,
			"id": "2huXeBw498ffVCkhTPxA-",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4903.148952494588,
			"y": 366.5752589994968,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 133.5773571250446,
			"height": 0,
			"seed": 711641352,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780554,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1018,
			"versionNonce": 1066813924,
			"isDeleted": false,
			"id": "uMUhrRX1w6OznKvpI2XH6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4785.332579153048,
			"y": 281.25971629050537,
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
			"updated": 1707741780554,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1018,
			"versionNonce": 1664530012,
			"isDeleted": false,
			"id": "UslV_2-lSwFfSpTTo57mz",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4805.224719202462,
			"y": 281.59346617562323,
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
			"updated": 1707741780554,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1016,
			"versionNonce": 427519332,
			"isDeleted": false,
			"id": "CMLnijnogCNt8R0_Mjd5w",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4785.93731940486,
			"y": 299.20370077343387,
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
			"updated": 1707741780554,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1018,
			"versionNonce": 1615301340,
			"isDeleted": false,
			"id": "_d6_dt-hzqnjx_LGY8L7N",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4826.417073649907,
			"y": 299.3706498186016,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 210.30923596972627,
			"height": 0,
			"seed": 1591346440,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780554,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1069,
			"versionNonce": 1374691556,
			"isDeleted": false,
			"id": "SKpj3fXW8Eb2YNuCcQsoy",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4714.154078799582,
			"y": 210.95782266908418,
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
			"updated": 1707741780554,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1069,
			"versionNonce": 491376476,
			"isDeleted": false,
			"id": "Ehw4Nfol7OI1cBjDvxnsD",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4734.046218848996,
			"y": 211.29157255420205,
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
			"updated": 1707741780554,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1067,
			"versionNonce": 276980836,
			"isDeleted": false,
			"id": "_-YWbexd6dXKdIr8ldnBT",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4714.758819051393,
			"y": 228.9018071520145,
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
			"updated": 1707741780554,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1105,
			"versionNonce": 2056225756,
			"isDeleted": false,
			"id": "gc7E6jYm7pmHrROVdgPLR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4755.238573296439,
			"y": 229.0687561971822,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 282.48205635140937,
			"height": 0,
			"seed": 1942700296,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780554,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1175,
			"versionNonce": 1526740964,
			"isDeleted": false,
			"id": "FjGPjvtRDxk4n4Nc1Q3hI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4643.380791977059,
			"y": 144.03902437788338,
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
			"updated": 1707741780554,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1175,
			"versionNonce": 2116724828,
			"isDeleted": false,
			"id": "Vsap_qXeAQYgMMFIFhQsm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4663.272932026473,
			"y": 144.37277426300125,
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
			"updated": 1707741780554,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1173,
			"versionNonce": 1299684196,
			"isDeleted": false,
			"id": "-Oq1x15AYqceRjQOyvARl",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4643.985532228871,
			"y": 161.9830088608137,
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
			"updated": 1707741780554,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1242,
			"versionNonce": 468532444,
			"isDeleted": false,
			"id": "CS55DEVnyd5r9MhY-6c4h",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4684.465286473917,
			"y": 162.1499579059814,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 354.36398755802554,
			"height": 0,
			"seed": 406748424,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780554,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1495,
			"versionNonce": 1379307236,
			"isDeleted": false,
			"id": "xmeUKAO4Wnd1a3GSL4sTH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 5037.516150663623,
			"y": -7.216569131997403,
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
			"updated": 1707741780554,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1048,
			"versionNonce": 2104050012,
			"isDeleted": false,
			"id": "ZJnAIRfK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 5055.938025663623,
			"y": 14.783430868002597,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 167303944,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780554,
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
			"version": 1175,
			"versionNonce": 1506480740,
			"isDeleted": false,
			"id": "LOfvN4CvkYDe5KZw_JLCr",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4569.732100234334,
			"y": 78.53862945107494,
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
			"updated": 1707741780554,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1175,
			"versionNonce": 1240511964,
			"isDeleted": false,
			"id": "shaHAlBA5px-C2sep68wf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4589.624240283749,
			"y": 78.87237933619281,
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
			"updated": 1707741780554,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1173,
			"versionNonce": 318973412,
			"isDeleted": false,
			"id": "gDIs2ExN5r6TKtFxlYsQR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4570.336840486147,
			"y": 96.48261393400526,
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
			"updated": 1707741780554,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1280,
			"versionNonce": 1855298140,
			"isDeleted": false,
			"id": "nzkV24f7h7YtPpskGZ7_6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4610.816594731194,
			"y": 96.64956297917297,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 426.14537358638324,
			"height": 0,
			"seed": 1708070664,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780554,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1217,
			"versionNonce": 585943396,
			"isDeleted": false,
			"id": "-47uQov90I88OzL3KdCE4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4495.910985634524,
			"y": 10.666289681475519,
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
			"updated": 1707741780554,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1217,
			"versionNonce": 1714024156,
			"isDeleted": false,
			"id": "2hDeTqKg83GnPOSlRf1x0",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4515.803125683939,
			"y": 11.000039566593387,
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
			"updated": 1707741780554,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1215,
			"versionNonce": 1557527780,
			"isDeleted": false,
			"id": "dSRXBS4eajVPx08w8qpEj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4496.515725886336,
			"y": 28.610274164404018,
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
			"updated": 1707741780555,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1363,
			"versionNonce": 20951900,
			"isDeleted": false,
			"id": "e4htZq7RP2v15xBZ3y5Li",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4536.995480131383,
			"y": 28.77722320957173,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 500.96465717528883,
			"height": 0,
			"seed": 916935432,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780555,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1574,
			"versionNonce": 2051850340,
			"isDeleted": false,
			"id": "BvhADICDIU1OQoToUh-c-",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 5038.892389903207,
			"y": -76.22794766998277,
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
			"updated": 1707741780555,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1129,
			"versionNonce": 774432732,
			"isDeleted": false,
			"id": "evOSgzJ3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 5057.314264903207,
			"y": -54.22794766998277,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 950284552,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780555,
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
			"version": 1303,
			"versionNonce": 1394545636,
			"isDeleted": false,
			"id": "xsNyta-doy1S5yL9OhMrS",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4423.590868058438,
			"y": -59.30231085347805,
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
			"updated": 1707741780555,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1303,
			"versionNonce": 1089965148,
			"isDeleted": false,
			"id": "i0AmzLKdjN7AZPic1NrSr",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4443.483008107853,
			"y": -58.96856096836018,
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
			"updated": 1707741780555,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1301,
			"versionNonce": 358283108,
			"isDeleted": false,
			"id": "9GlAghMJ4fjL1Pkvq6oQh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4424.19560831025,
			"y": -41.35832637054955,
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
			"updated": 1707741780555,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1488,
			"versionNonce": 998088924,
			"isDeleted": false,
			"id": "V2_tVdiCGKLIDlFwRx1K4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4464.675362555296,
			"y": -41.191377325381836,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 572.7232805457052,
			"height": 0,
			"seed": 1897884936,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780555,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1137,
			"versionNonce": 2102291172,
			"isDeleted": false,
			"id": "iAdFUMJS8zwjWEpnixopA",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3507.743965253127,
			"y": 662.2203294102637,
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
			"updated": 1707741780555,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 686,
			"versionNonce": 357377372,
			"isDeleted": false,
			"id": "9I7SlFpi",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 3520.306465253127,
			"y": 684.2203294102637,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1329163528,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780555,
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
			"version": 634,
			"versionNonce": 226979428,
			"isDeleted": false,
			"id": "KTbyPhsaJ3tExA59dzO7I",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3405.706064106837,
			"y": 678.0893678866851,
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
			"updated": 1707741780555,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 633,
			"versionNonce": 62396892,
			"isDeleted": false,
			"id": "zM5jzXRCaALUjxQZS2xhI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3425.5982041562515,
			"y": 678.4231177718029,
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
			"updated": 1707741780555,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 631,
			"versionNonce": 1188299236,
			"isDeleted": false,
			"id": "8gC1MuXEH17GPyAxppb1l",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3406.3108043586494,
			"y": 696.0333523696154,
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
			"updated": 1707741780555,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 552,
			"versionNonce": 1104182876,
			"isDeleted": false,
			"id": "2yWzzzp1h8ZAuYbt0NqXT",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3426.878750596356,
			"y": 639.9471961580784,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 624.5236947903879,
			"seed": 624339208,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780555,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 592,
			"versionNonce": 1614947684,
			"isDeleted": false,
			"id": "fBvRKx0jEk8acU_nrteOb",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3354.433360283478,
			"y": 642.1592077988498,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 620.2087187373074,
			"seed": 1368147976,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780555,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 612,
			"versionNonce": 1483231964,
			"isDeleted": false,
			"id": "Lx9m2Rm1TtKg71ql3EWTb",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3277.870718110849,
			"y": 642.1592077988498,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 622.3116831496168,
			"seed": 1070991112,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780555,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 598,
			"versionNonce": 2132793572,
			"isDeleted": false,
			"id": "hGwJ5YYfSZ2jn_KXMOZKq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3208.268316135732,
			"y": 642.1592077988498,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 623.3631653557718,
			"seed": 1552934408,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780555,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 574,
			"versionNonce": 1712428892,
			"isDeleted": false,
			"id": "dUksdiM9KOXYx_2CCQTHz",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3135.682954075967,
			"y": 641.1648877706339,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 624.357485383988,
			"seed": 615900424,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780555,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 667,
			"versionNonce": 1861950564,
			"isDeleted": false,
			"id": "XL1eBJP-ec0ZcNs1I56qt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3062.1032719879863,
			"y": 639.176247714202,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 627.3976076465744,
			"seed": 365167624,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780555,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 685,
			"versionNonce": 1730038748,
			"isDeleted": false,
			"id": "qUDs0eFkC3vM5Gnpem4x3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2989.517909928222,
			"y": 642.1592077988498,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 625.4661297680814,
			"seed": 498483976,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780555,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 692,
			"versionNonce": 1503784932,
			"isDeleted": false,
			"id": "EyZRfOKWXd3IR-aWzDZmp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2916.9325478684564,
			"y": 644.1478478552808,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 622.4260075054949,
			"seed": 185115144,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780555,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1170,
			"versionNonce": 2107666524,
			"isDeleted": false,
			"id": "FBeSUP3Aq8ns7Nut7aDqL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3509.2282413970756,
			"y": 732.7970234181157,
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
			"updated": 1707741780555,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 724,
			"versionNonce": 2132956004,
			"isDeleted": false,
			"id": "PKD7VQ4n",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 3521.7907413970756,
			"y": 754.7970234181157,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1379778568,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780555,
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
			"version": 1193,
			"versionNonce": 963249372,
			"isDeleted": false,
			"id": "4E3EK8PfSVbdgWLT3CFFP",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3510.2225614252916,
			"y": 802.3994253932324,
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
			"updated": 1707741780555,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 750,
			"versionNonce": 1841972964,
			"isDeleted": false,
			"id": "G6Ibn3ay",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 3522.7850614252916,
			"y": 824.3994253932324,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 155409928,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780555,
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
			"version": 1235,
			"versionNonce": 1611467100,
			"isDeleted": false,
			"id": "E4H46NrK3_W8lvWiXPHBx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3511.2168814535075,
			"y": 939.6155892870338,
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
			"updated": 1707741780555,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 789,
			"versionNonce": 975686244,
			"isDeleted": false,
			"id": "tjiYQQZp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 3523.7793814535075,
			"y": 961.6155892870338,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1442413576,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780555,
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
			"version": 1220,
			"versionNonce": 886799836,
			"isDeleted": false,
			"id": "s_76ZHDIDvAhFM5gZ0lQA",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3510.2225614252916,
			"y": 872.9961473965668,
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
			"updated": 1707741780555,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 778,
			"versionNonce": 923327972,
			"isDeleted": false,
			"id": "KyclLfJA",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 3522.7850614252916,
			"y": 894.9961473965668,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1715477000,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780555,
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
			"version": 1228,
			"versionNonce": 1088905820,
			"isDeleted": false,
			"id": "lFXbSR1tQgrjJI7aSzl5d",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3510.2225614252916,
			"y": 1008.2236712339363,
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
			"updated": 1707741780555,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 782,
			"versionNonce": 763068772,
			"isDeleted": false,
			"id": "p9y0lIx9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 3522.7850614252916,
			"y": 1030.2236712339363,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1878472712,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780556,
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
			"version": 510,
			"versionNonce": 453162716,
			"isDeleted": false,
			"id": "2oLUrC9SiSoQDx2lU653P",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4258.6412315197485,
			"y": -73.21221287153912,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 59.659201692957595,
			"height": 0,
			"seed": 862123784,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780556,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 693,
			"versionNonce": 349025508,
			"isDeleted": false,
			"id": "zkcMzyC50TAIn8rIEGJzq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3334.770868759398,
			"y": 745.8376049871604,
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
			"updated": 1707741780556,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 692,
			"versionNonce": 801078108,
			"isDeleted": false,
			"id": "0ksNyw_3fPFfadNdeCypx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3354.6630088088127,
			"y": 746.1713548722782,
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
			"updated": 1707741780556,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 690,
			"versionNonce": 1250785380,
			"isDeleted": false,
			"id": "dhaaOXmu7e-hxdH1JB4Gc",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3335.3756090112097,
			"y": 763.7815894700907,
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
			"updated": 1707741780556,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 589,
			"versionNonce": 158314460,
			"isDeleted": false,
			"id": "IE7WlNK0htOCOT2o03keS",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4187.70603617231,
			"y": -5.463975771063815,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 133.5773571250446,
			"height": 0,
			"seed": 726348552,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780556,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 742,
			"versionNonce": 1250479076,
			"isDeleted": false,
			"id": "6_Vd32DZ6Jar7LHne9GgP",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3258.0389899147162,
			"y": 817.4286470187108,
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
			"updated": 1707741780556,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 742,
			"versionNonce": 405099612,
			"isDeleted": false,
			"id": "Hwj_0WMsjJ7CP62y5ioTa",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3277.931129964131,
			"y": 817.7623969038286,
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
			"updated": 1707741780556,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 740,
			"versionNonce": 1724755812,
			"isDeleted": false,
			"id": "Kq-zyKt5sq8h4HIaoabdM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3258.6437301665287,
			"y": 835.3726315016393,
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
			"updated": 1707741780556,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 685,
			"versionNonce": 2041735388,
			"isDeleted": false,
			"id": "hFTLjPKUhToszj1iH07gn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4110.974157327628,
			"y": 66.12706626048475,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 210.30923596972627,
			"height": 0,
			"seed": 2134208264,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780556,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 816,
			"versionNonce": 2141856484,
			"isDeleted": false,
			"id": "4Bjt2vaNH1jRqjknulzri",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3186.8604895612493,
			"y": 888.0253690220434,
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
			"updated": 1707741780556,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 816,
			"versionNonce": 1101589852,
			"isDeleted": false,
			"id": "Yb443kdc7-QS-itb-fMu7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3206.752629610664,
			"y": 888.3591189071612,
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
			"updated": 1707741780556,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 814,
			"versionNonce": 1001137764,
			"isDeleted": false,
			"id": "KUQyB32zfj_7CCdTL2w_r",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3187.465229813061,
			"y": 905.9693535049719,
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
			"updated": 1707741780556,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 795,
			"versionNonce": 1096475100,
			"isDeleted": false,
			"id": "lCAyhDwhGIE5jUli435Ab",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4039.7956569741605,
			"y": 136.72378826381737,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 282.48205635140937,
			"height": 0,
			"seed": 505522952,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780556,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 860,
			"versionNonce": 1067563492,
			"isDeleted": false,
			"id": "pmoxPAoDoyF6KN4W-aXYk",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3113.984238326417,
			"y": 954.6448109125122,
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
			"updated": 1707741780556,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 860,
			"versionNonce": 1339704924,
			"isDeleted": false,
			"id": "S9pCq5vIt0j297t7iEJMS",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3133.876378375832,
			"y": 954.97856079763,
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
			"updated": 1707741780556,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 858,
			"versionNonce": 1721294180,
			"isDeleted": false,
			"id": "1yYdfzx0R2j62S_XuM1dw",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3114.5889785782288,
			"y": 972.5887953954407,
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
			"updated": 1707741780556,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 870,
			"versionNonce": 301538012,
			"isDeleted": false,
			"id": "1rA6uY1tfoRVJ8vVk96mv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3966.9194057393283,
			"y": 203.34323015428618,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 354.36398755802554,
			"height": 0,
			"seed": 1997530888,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780556,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1252,
			"versionNonce": 2044694756,
			"isDeleted": false,
			"id": "hYB87Qbb4vxCQUSKCavmU",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3510.2225614252916,
			"y": 1077.826073209053,
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
			"updated": 1707741780556,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 809,
			"versionNonce": 1112104796,
			"isDeleted": false,
			"id": "5OWRv612",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 3522.7850614252916,
			"y": 1099.826073209053,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 2130167048,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780556,
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
			"version": 907,
			"versionNonce": 1761858660,
			"isDeleted": false,
			"id": "wveJyLM6Qqg7rxorwN7xH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3042.4385109960026,
			"y": 1025.8371027858375,
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
			"updated": 1707741780556,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 906,
			"versionNonce": 2031948764,
			"isDeleted": false,
			"id": "0a6Q2sy_HUu4BBe76LGlX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3062.330651045417,
			"y": 1026.1708526709554,
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
			"updated": 1707741780556,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 904,
			"versionNonce": 30648292,
			"isDeleted": false,
			"id": "dSNVJ8gNuDjv9VOZ7CnWy",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3043.043251247814,
			"y": 1043.7810872687678,
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
			"updated": 1707741780556,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 954,
			"versionNonce": 1954953308,
			"isDeleted": false,
			"id": "As-u0PnwGQNNDTqu6cIUb",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3895.3736784089147,
			"y": 274.5355220276133,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 426.14537358638324,
			"height": 0,
			"seed": 923336968,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780556,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 973,
			"versionNonce": 677186404,
			"isDeleted": false,
			"id": "5HSrtfH3ZdL_EXrRD2hyW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2968.6173963961924,
			"y": 1095.7089320225277,
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
			"updated": 1707741780556,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 973,
			"versionNonce": 1616301276,
			"isDeleted": false,
			"id": "zwy-PyJnPTsFDCrThLQLJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2988.509536445607,
			"y": 1096.0426819076456,
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
			"updated": 1707741780556,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 971,
			"versionNonce": 250478308,
			"isDeleted": false,
			"id": "9EKv642LBaA7fnywlC4TW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2969.222136648005,
			"y": 1113.6529165054562,
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
			"updated": 1707741780556,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1062,
			"versionNonce": 505467228,
			"isDeleted": false,
			"id": "5sggi95fNM3s63maf2yQV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3821.5525638091044,
			"y": 344.4073512643017,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 500.96465717528883,
			"height": 0,
			"seed": 1855733000,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780556,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1295,
			"versionNonce": 1846837860,
			"isDeleted": false,
			"id": "T8d2rcLW4UhG_3frgK0YW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3511.5988006648754,
			"y": 1146.5588636773555,
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
			"updated": 1707741780556,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 858,
			"versionNonce": 221660636,
			"isDeleted": false,
			"id": "29D4hxzh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 3524.1613006648754,
			"y": 1168.5588636773555,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 870750984,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780556,
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
			"version": 1026,
			"versionNonce": 1017026020,
			"isDeleted": false,
			"id": "M5r9hEMDazCWdI4Q8H-tR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2896.2972788201055,
			"y": 1163.4845004938616,
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
			"updated": 1707741780557,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1025,
			"versionNonce": 1386818140,
			"isDeleted": false,
			"id": "EKDdZ4OG8bxQcCvIAzBmJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2916.18941886952,
			"y": 1163.8182503789794,
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
			"updated": 1707741780557,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1023,
			"versionNonce": 1738160484,
			"isDeleted": false,
			"id": "gi0Pvng_vsddEy1cKNrGO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2896.902019071918,
			"y": 1181.42848497679,
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
			"updated": 1707741780557,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1153,
			"versionNonce": 558595804,
			"isDeleted": false,
			"id": "OErTDCnAsf7DYkGYfywGd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3749.2324462330175,
			"y": 412.18291973563555,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 572.7232805457052,
			"height": 0,
			"seed": 1255986952,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780557,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"type": "line",
			"version": 280,
			"versionNonce": 173370596,
			"isDeleted": false,
			"id": "oRurLagRPvj-GTxOj4Jme",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3545.307380784987,
			"y": 516.3403326369225,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.08991575201253,
			"height": 143.78207172525526,
			"seed": 1488681592,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707741780557,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
			"lastCommittedPoint": null,
			"startArrowhead": null,
			"endArrowhead": null,
			"points": [
				[
					0,
					0
				],
				[
					1.08991575201253,
					143.78207172525526
				]
			]
		},
		{
			"type": "arrow",
			"version": 992,
			"versionNonce": 144280559,
			"isDeleted": false,
			"id": "nbY0jm1hHQjbIQjLZJ-C-",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3446.8716925671165,
			"y": 697.0122820913966,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 59.87227268601009,
			"height": 0,
			"seed": 461483272,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063971,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "KTbyPhsaJ3tExA59dzO7I",
				"gap": 1.1162074473977555,
				"focus": -0.0025230472290846307
			},
			"endBinding": {
				"elementId": "iAdFUMJS8zwjWEpnixopA",
				"gap": 1.0000000000004547,
				"focus": -0.023292725915673468
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
					59.87227268601009,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 1028,
			"versionNonce": 1850514479,
			"isDeleted": false,
			"id": "Z9lQsYKpV1bi5bfJuh7_4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3375.82028977228,
			"y": 762.021959589405,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 132.16527450274725,
			"height": 1.1853387847777412,
			"seed": 1339477000,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063972,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "zkcMzyC50TAIn8rIEGJzq",
				"gap": 1,
				"focus": -0.15534874041696256
			},
			"endBinding": {
				"elementId": "FBeSUP3Aq8ns7Nut7aDqL",
				"gap": 1.2426771220484625,
				"focus": 0.09485541292826896
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
					132.16527450274725,
					1.1853387847777412
				]
			]
		},
		{
			"type": "arrow",
			"version": 943,
			"versionNonce": 170433647,
			"isDeleted": false,
			"id": "goL4pl9BAnD3vFfuh86xL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3152.287960799093,
			"y": 973.2819150480136,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 354.710434507077,
			"height": 0,
			"seed": 439356168,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063972,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "E4H46NrK3_W8lvWiXPHBx",
				"gap": 4.218486147337444,
				"focus": 0.009813948206475985
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
					354.710434507077,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 935,
			"versionNonce": 718878351,
			"isDeleted": false,
			"id": "YW2EbsLNNHz21niOHQQ05",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3224.811519240476,
			"y": 905.6908109455708,
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
			"updated": 1710908063973,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "s_76ZHDIDvAhFM5gZ0lQA",
				"gap": 3.427172100720327,
				"focus": 0.03839224855870699
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
			"version": 1006,
			"versionNonce": 837238351,
			"isDeleted": false,
			"id": "hdYO-XpD-IrQL9X-k2s6Y",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3297.7225344082003,
			"y": 835.5559063620894,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 210.43652764110493,
			"height": 0,
			"seed": 1801382152,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063972,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "4E3EK8PfSVbdgWLT3CFFP",
				"gap": 2.063499375986339,
				"focus": 0.024809383268909777
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
					210.43652764110493,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 1337,
			"versionNonce": 1968840399,
			"isDeleted": false,
			"id": "KXt6Ul4f2Wsr5DDJLgHWJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3083.4879320088844,
			"y": 1044.2802848001156,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 420.8767171971226,
			"height": 0,
			"seed": 682395656,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063973,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "wveJyLM6Qqg7rxorwN7xH",
				"gap": 1,
				"focus": -0.027811002259843186
			},
			"endBinding": {
				"elementId": "lFXbSR1tQgrjJI7aSzl5d",
				"gap": 5.857912219284572,
				"focus": -0.06048863429939099
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
					420.8767171971226,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 1040,
			"versionNonce": 225144047,
			"isDeleted": false,
			"id": "VJHaEDB6ax3wIG5ZVAX_l",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3006.0351538149957,
			"y": 1114.0745564544723,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 502.93855106629826,
			"height": 0,
			"seed": 1223575304,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063974,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "hYB87Qbb4vxCQUSKCavmU",
				"gap": 1.24885654399759,
				"focus": -0.06613186015939018
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
					502.93855106629826,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 1439,
			"versionNonce": 2128231727,
			"isDeleted": false,
			"id": "Jd4zDiysGrW9aLFI61WH-",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2937.3466998329873,
			"y": 1182.6511986081641,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 570.3101319982247,
			"height": 0,
			"seed": 413148680,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063974,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "M5r9hEMDazCWdI4Q8H-tR",
				"gap": 1,
				"focus": 0.010327448664030356
			},
			"endBinding": {
				"elementId": "T8d2rcLW4UhG_3frgK0YW",
				"gap": 3.9419688336633953,
				"focus": -0.061539262670842566
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
					570.3101319982247,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 766,
			"versionNonce": 1500820828,
			"isDeleted": false,
			"id": "E00iW71kWMevby8X1e1UW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4545.336842220082,
			"y": -313.42973790299675,
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
			"updated": 1707741780557,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 765,
			"versionNonce": 761323108,
			"isDeleted": false,
			"id": "cALMmlQ7QbbQDFrTX2Dpt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4565.228982269497,
			"y": -313.0959880178789,
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
			"updated": 1707741780557,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 763,
			"versionNonce": 2087561692,
			"isDeleted": false,
			"id": "jAo-2UQ9vC-GCIl4utWhc",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4545.941582471894,
			"y": -295.48575342006825,
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
			"updated": 1707741780557,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 526,
			"versionNonce": 167735780,
			"isDeleted": false,
			"id": "vi-cWkx6lir1DudqDsynK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4565.458046503446,
			"y": -838.408171081313,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 624.5236947903879,
			"seed": 78838045,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780557,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 566,
			"versionNonce": 760483420,
			"isDeleted": false,
			"id": "bByGaW-EGOYSGfEYcsjFF",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4493.012656190568,
			"y": -836.1961594405425,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 620.2087187373074,
			"seed": 26201469,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780557,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 586,
			"versionNonce": 209687908,
			"isDeleted": false,
			"id": "rhcMH7vnVusqOeuPq4QZz",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4416.450014017939,
			"y": -836.196159440542,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 622.3116831496168,
			"seed": 143857117,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780557,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 572,
			"versionNonce": 754574044,
			"isDeleted": false,
			"id": "QK7Y20K846Avo3nVpDNkC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4346.847612042822,
			"y": -836.196159440542,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 623.3631653557718,
			"seed": 1959678525,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780557,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 548,
			"versionNonce": 573524196,
			"isDeleted": false,
			"id": "98yEcPUOPkUewxyCZn-iH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4274.262249983058,
			"y": -837.1904794687584,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 624.357485383988,
			"seed": 1126367901,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780557,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 641,
			"versionNonce": 1374758748,
			"isDeleted": false,
			"id": "JBR6lntp2EMxY_Q3SJmbf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4200.682567895076,
			"y": -839.1791195251903,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 627.3976076465744,
			"seed": 1480763133,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780557,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 659,
			"versionNonce": 1587317860,
			"isDeleted": false,
			"id": "Yj_bxtlId8aDbNot9Bxks",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4128.097205835312,
			"y": -836.196159440542,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 625.4661297680814,
			"seed": 112115549,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780557,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 666,
			"versionNonce": 1351343068,
			"isDeleted": false,
			"id": "ZJQTeiMPK-FRf2aMcVHvb",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4055.5118437755464,
			"y": -834.2075193841106,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 622.4260075054949,
			"seed": 1421396925,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780557,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 839,
			"versionNonce": 865427428,
			"isDeleted": false,
			"id": "NL-yoa8jKhe3o-U_8SdOW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4473.350164666488,
			"y": -384.4771520149661,
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
			"updated": 1707741780557,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 838,
			"versionNonce": 47972444,
			"isDeleted": false,
			"id": "RI2_Yz2vP8bxsrSfcEpA7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4493.242304715903,
			"y": -384.14340212984825,
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
			"updated": 1707741780557,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 836,
			"versionNonce": 690471780,
			"isDeleted": false,
			"id": "uv9MxAs4MYwaGwq_zvnXV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4473.954904918301,
			"y": -366.53316753203717,
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
			"updated": 1707741780557,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 899,
			"versionNonce": 817075420,
			"isDeleted": false,
			"id": "1S0V0u1-WuPpWv-yhAf1l",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4396.618285821806,
			"y": -451.6817611958613,
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
			"updated": 1707741780557,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 898,
			"versionNonce": 362919652,
			"isDeleted": false,
			"id": "PxaYpk0HWlF3xXtptVZWd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4416.510425871221,
			"y": -451.34801131074346,
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
			"updated": 1707741780557,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 896,
			"versionNonce": 1470404956,
			"isDeleted": false,
			"id": "ErMPCarHuxg3YW9gmiHpQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4397.223026073619,
			"y": -433.7377767129319,
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
			"updated": 1707741780557,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 949,
			"versionNonce": 1435581028,
			"isDeleted": false,
			"id": "XZrfufGyAfpmYimuj2feX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4325.439785468339,
			"y": -521.9836548172816,
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
			"updated": 1707741780558,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 949,
			"versionNonce": 1929448924,
			"isDeleted": false,
			"id": "cGoK8BMIZqkQxhtdYthKx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4345.331925517754,
			"y": -521.6499049321637,
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
			"updated": 1707741780558,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 947,
			"versionNonce": 63196644,
			"isDeleted": false,
			"id": "hq5OYJqJSDdPwdBwHwW_O",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4326.044525720152,
			"y": -504.0396703343522,
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
			"updated": 1707741780558,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1056,
			"versionNonce": 1138422364,
			"isDeleted": false,
			"id": "Y_-GbVDgISp6HSLsfGUfO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4254.666498645816,
			"y": -588.902453108482,
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
			"updated": 1707741780558,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1055,
			"versionNonce": 826863972,
			"isDeleted": false,
			"id": "2h95OAvZrBb05RrEXCmYh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4274.558638695232,
			"y": -588.5687032233641,
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
			"updated": 1707741780558,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1053,
			"versionNonce": 419710684,
			"isDeleted": false,
			"id": "LzYt-N59pEWsJ7ScqhiXr",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4255.271238897629,
			"y": -570.9584686255525,
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
			"updated": 1707741780558,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1056,
			"versionNonce": 493692132,
			"isDeleted": false,
			"id": "thp-5-CqECwadQIfpRwpY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4181.017806903093,
			"y": -654.4028480352904,
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
			"updated": 1707741780558,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1055,
			"versionNonce": 386861916,
			"isDeleted": false,
			"id": "48jamim45JmoWqYW9Nm21",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4200.909946952507,
			"y": -654.0690981501725,
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
			"updated": 1707741780558,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1053,
			"versionNonce": 1841227876,
			"isDeleted": false,
			"id": "GRBU6dhjOcpi4kUsoaRZ4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4181.622547154904,
			"y": -636.458863552361,
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
			"updated": 1707741780558,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1097,
			"versionNonce": 5062620,
			"isDeleted": false,
			"id": "kcQMgGeZe6vUC0IP7UmlW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4107.196692303282,
			"y": -722.2751878048903,
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
			"updated": 1707741780558,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1097,
			"versionNonce": 1712077796,
			"isDeleted": false,
			"id": "tcgckAuBxg90ZTGNlFC57",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4127.088832352697,
			"y": -721.9414379197724,
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
			"updated": 1707741780558,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1095,
			"versionNonce": 2094064732,
			"isDeleted": false,
			"id": "RDfwpmite-6zbwVuRkd8m",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4107.801432555094,
			"y": -704.3312033219618,
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
			"updated": 1707741780558,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1184,
			"versionNonce": 543367012,
			"isDeleted": false,
			"id": "yxDN1130TGxfTpDIDn2rY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4034.8765747271955,
			"y": -792.2437883398438,
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
			"updated": 1707741780558,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1183,
			"versionNonce": 1651243228,
			"isDeleted": false,
			"id": "tURSmAOaAgIdB9hBZPYrW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4054.76871477661,
			"y": -791.910038454726,
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
			"updated": 1707741780558,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1181,
			"versionNonce": 1158779620,
			"isDeleted": false,
			"id": "NuCy1fWVDK1heJlqT1Z_n",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4035.481314979008,
			"y": -774.2998038569153,
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
			"updated": 1707741780558,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 656,
			"versionNonce": 2091941212,
			"isDeleted": false,
			"id": "qhFJoNO7aCvwbArKv41Lx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4586.558985293012,
			"y": -295.578280874287,
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
			"updated": 1707741780558,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "E00iW71kWMevby8X1e1UW",
				"focus": -0.05900239429903468,
				"gap": 1.1727220600478176
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
			"version": 679,
			"versionNonce": 1118148196,
			"isDeleted": false,
			"id": "umPKNbOeF1yu5zKhtcsx3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4514.968350025152,
			"y": -365.0685899051855,
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
			"updated": 1707741780558,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "NL-yoa8jKhe3o-U_8SdOW",
				"focus": 0.01274754773625069,
				"gap": 1.568764345782256
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
			"version": 857,
			"versionNonce": 1425043932,
			"isDeleted": false,
			"id": "sd5FxR0ISfAxPCgzbnlp4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4296.3490795530615,
			"y": -569.317270947789,
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
			"updated": 1707741780558,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "Y_-GbVDgISp6HSLsfGUfO",
				"focus": 0.032386851716907285,
				"gap": 1.6331598943634162
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
			"version": 653,
			"versionNonce": 99428836,
			"isDeleted": false,
			"id": "VJVyvDVQkzK9v-OUjWoVN",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4364.498811966371,
			"y": -502.4132246870031,
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
			"updated": 1707741780558,
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
			"version": 820,
			"versionNonce": 2050872924,
			"isDeleted": false,
			"id": "KMs9rN13tg16ylrrWAJP0",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4438.503283641114,
			"y": -434.7726093862002,
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
			"updated": 1707741780558,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "1S0V0u1-WuPpWv-yhAf1l",
				"focus": -0.10867379946995419,
				"gap": 1.8355768064257063
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
			"version": 1045,
			"versionNonce": 838225252,
			"isDeleted": false,
			"id": "mFU7oQwcUloR_UiW7Mc_F",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4221.666063463681,
			"y": -635.0009645729542,
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
			"updated": 1707741780558,
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
			"version": 790,
			"versionNonce": 1231727324,
			"isDeleted": false,
			"id": "oHu1gJkknX1Le7ci26JSO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4146.815903047909,
			"y": -702.9822128028818,
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
			"updated": 1707741780558,
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
			"version": 1109,
			"versionNonce": 1477378276,
			"isDeleted": false,
			"id": "uhf_YWtNwE4CRG9LtSSD3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 4076.297701947753,
			"y": -773.2745470404925,
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
			"updated": 1707741780558,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "yxDN1130TGxfTpDIDn2rY",
				"focus": -0.00008102330549171408,
				"gap": 1.371706207675743
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
			"version": 809,
			"versionNonce": 889778012,
			"isDeleted": false,
			"id": "DvogTLZpoxAh0jzMyv-i2",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3448.0228742495797,
			"y": 0.1484266150653184,
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
			"updated": 1707741780558,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "Wwh95ATFX_WgWDbjcUY6_",
				"focus": 0.06102404197768705,
				"gap": 2.306520756476857
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
			"version": 1248,
			"versionNonce": 396080271,
			"isDeleted": false,
			"id": "QRJNRrr3S098r5v3Cvn_P",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3376.4322389817194,
			"y": 65.15326794739644,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 131.75687078873943,
			"height": 1.1816759711991836,
			"seed": 1909741832,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063967,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "BUS2Oo9G75U_d9Tz6CPs_",
				"gap": 1.6510808360562805,
				"focus": -0.09295505542217555
			},
			"endBinding": {
				"elementId": "NiekXcfxur_YhkCNK-vbK",
				"gap": 1.0000000000004547,
				"focus": 0.06004298927130299
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
					131.75687078873943,
					1.1816759711991836
				]
			]
		},
		{
			"type": "arrow",
			"version": 1108,
			"versionNonce": 437693167,
			"isDeleted": false,
			"id": "WZ-RK8HZDFAXwlf9I3-O_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3153.439142481557,
			"y": 276.4180595716823,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 354.710434507077,
			"height": 0,
			"seed": 519305224,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063967,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "WfM5QlMRsq8rvz8FoJuiv",
				"gap": 3.028172838256978,
				"focus": -0.025643044313750692
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
					354.710434507077,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 1100,
			"versionNonce": 1593931023,
			"isDeleted": false,
			"id": "Pd44IE-SDakj894Ky_Nag",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3225.9627009229393,
			"y": 208.82695546923856,
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
			"updated": 1710908063968,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "ywhOxWvdBCSjnD9O2_Cq7",
				"gap": 2.2368587916407705,
				"focus": 0.0029352560384803142
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
			"version": 1486,
			"versionNonce": 370482383,
			"isDeleted": false,
			"id": "lY5_hYmpiNLzGlI2RCFGG",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3299.049279300982,
			"y": 138.69205088575723,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 210.1341504976931,
			"height": 0,
			"seed": 1472960008,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063967,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "rYngv4t0t8h8wLKpqyfIa",
				"gap": 1,
				"focus": 0.019082965780127782
			},
			"endBinding": {
				"elementId": "RhRJkcnLyNSNB--3srLMj",
				"gap": 1,
				"focus": -0.010647609251290144
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
					210.1341504976931,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 1557,
			"versionNonce": 1181007183,
			"isDeleted": false,
			"id": "KcaG3GXcmdG5JeSmyvWj2",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3084.2234089272674,
			"y": 347.4164293237834,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 421.2924219612023,
			"height": 0,
			"seed": 486249736,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063968,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "_AVQ0p_iGK0f6w-Pbj5od",
				"gap": 1.7746085449998645,
				"focus": 0.03573608694688055
			},
			"endBinding": {
				"elementId": "Z79jLiQUrrrL1BGGAzUpq",
				"gap": 4.66759891020547,
				"focus": -0.09594562681961767
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
					421.2924219612023,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 1205,
			"versionNonce": 1352547183,
			"isDeleted": false,
			"id": "YGb2-uStWGSzXjfgChC-6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 3007.186335497459,
			"y": 417.21070097814004,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 501.9970943012163,
			"height": 0,
			"seed": 1507046408,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063968,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "9nLSw8ctMxTaPCuzG1h5v",
				"gap": 1,
				"focus": -0.10158885267961684
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
					501.9970943012163,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 1659,
			"versionNonce": 1770744751,
			"isDeleted": false,
			"id": "kYZeauI9HYYUNCXtvagex",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2937.76159090432,
			"y": 485.78734313183213,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 571.0464226093541,
			"height": 0,
			"seed": 609219336,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063969,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "7oWTzRtRb82uQLBYbP7C_",
				"gap": 1.454022697948858,
				"focus": 0.07387453787077808
			},
			"endBinding": {
				"elementId": "7lQgL-iQ8QbJyVoeC_kSZ",
				"gap": 2.7516555245847485,
				"focus": -0.09699625519105586
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
					571.0464226093541,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 713,
			"versionNonce": 748183900,
			"isDeleted": false,
			"id": "FqqSXzUvR2OxAs3VS5MlA",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -311.7587835701678,
			"y": 1669.9957702738598,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
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
			"updated": 1707741780559,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 607,
			"versionNonce": 35176271,
			"isDeleted": false,
			"id": "hPHEqCtB",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -291.40876983725764,
			"y": 1691.4957702738598,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 31.299972534179688,
			"height": 25,
			"seed": 2030025853,
			"groupIds": [
				"G4WEwjyyvXvLhFaKNVRCx"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063974,
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
			"version": 675,
			"versionNonce": 104584668,
			"isDeleted": false,
			"id": "Fs61lYYDusA-xjOKzcxO0",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -457.7587835701678,
			"y": 1670.9957702738598,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
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
			"updated": 1707741780559,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 608,
			"versionNonce": 981597551,
			"isDeleted": false,
			"id": "eKexbMnq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -436.77877258383967,
			"y": 1692.4957702738598,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 30.03997802734375,
			"height": 25,
			"seed": 1984856381,
			"groupIds": [
				"G4WEwjyyvXvLhFaKNVRCx"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063974,
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
			"version": 718,
			"versionNonce": 880589404,
			"isDeleted": false,
			"id": "jsKLwoU0B2SRenDg4Rgx9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -384.7587835701678,
			"y": 1670.9957702738598,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
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
			"updated": 1707741780559,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 607,
			"versionNonce": 727611279,
			"isDeleted": false,
			"id": "rduUgoob",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -363.9987738045428,
			"y": 1692.4957702738598,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 30.47998046875,
			"height": 25,
			"seed": 1287853565,
			"groupIds": [
				"G4WEwjyyvXvLhFaKNVRCx"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063974,
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
			"version": 737,
			"versionNonce": 573378268,
			"isDeleted": false,
			"id": "p-JGqZsMZ_SKwWFvjrFUt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -238.7587835701678,
			"y": 1669.9957702738598,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
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
			"updated": 1707741780559,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 607,
			"versionNonce": 1525067183,
			"isDeleted": false,
			"id": "hvmzZc3D",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -218.71877502524592,
			"y": 1691.4957702738598,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 31.91998291015625,
			"height": 25,
			"seed": 690584253,
			"groupIds": [
				"G4WEwjyyvXvLhFaKNVRCx"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063974,
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
			"version": 982,
			"versionNonce": 266261340,
			"isDeleted": false,
			"id": "pvg-JL0qBuTL_92u4V13K",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -18.300898375719157,
			"y": 1667.5168276766353,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
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
			"updated": 1707741780559,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 178,
			"versionNonce": 11509860,
			"isDeleted": false,
			"id": "jDWT0gAj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 5.980351624280843,
			"y": 1689.5168276766353,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 23.4375,
			"height": 24,
			"seed": 1409489928,
			"groupIds": [
				"-1dINUSC8ooAKckOCcs6j"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780559,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K9",
			"rawText": "K9",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "pvg-JL0qBuTL_92u4V13K",
			"originalText": "K9",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 944,
			"versionNonce": 1541670876,
			"isDeleted": false,
			"id": "XQ6yRi1CgeQrdzTwnRbLZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -164.30089837571916,
			"y": 1668.5168276766353,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
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
			"updated": 1707741780559,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 879,
			"versionNonce": 1950556111,
			"isDeleted": false,
			"id": "1MpJzdul",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -139.85089379808244,
			"y": 1690.0168276766353,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 23.099990844726562,
			"height": 25,
			"seed": 1313126365,
			"groupIds": [
				"-1dINUSC8ooAKckOCcs6j"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063975,
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
			"version": 987,
			"versionNonce": 1246669916,
			"isDeleted": false,
			"id": "bjx9zMc7a3z2by9l8Sau7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -91.30089837571916,
			"y": 1668.5168276766353,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
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
			"updated": 1707741780559,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 179,
			"versionNonce": 1216730980,
			"isDeleted": false,
			"id": "yJtvtbVc",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -72.87902337571916,
			"y": 1690.5168276766353,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 35.15625,
			"height": 24,
			"seed": 1129346568,
			"groupIds": [
				"-1dINUSC8ooAKckOCcs6j"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780559,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K10",
			"rawText": "K10",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "bjx9zMc7a3z2by9l8Sau7",
			"originalText": "K10",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1006,
			"versionNonce": 1290846428,
			"isDeleted": false,
			"id": "1yACV6Ud0ouXsloxPME7k",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 54.69910162428084,
			"y": 1667.5168276766353,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
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
			"updated": 1707741780559,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 414,
			"versionNonce": 1209879268,
			"isDeleted": false,
			"id": "mTR1Q4yt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 78.98035162428084,
			"y": 1689.5168276766353,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 23.4375,
			"height": 24,
			"seed": 1860809533,
			"groupIds": [
				"-1dINUSC8ooAKckOCcs6j"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780559,
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
			"version": 996,
			"versionNonce": 1264338268,
			"isDeleted": false,
			"id": "F1fEKvOrexSzrVOln0mWi",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 275.6569868187295,
			"y": 1664.537885079411,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
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
			"updated": 1707741780559,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 416,
			"versionNonce": 1534742116,
			"isDeleted": false,
			"id": "SbtiJw9M",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 299.9382368187295,
			"y": 1686.537885079411,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 23.4375,
			"height": 24,
			"seed": 1681646077,
			"groupIds": [
				"ry4vmHMtG8utQ-0I2-5dR"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780559,
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
			"version": 958,
			"versionNonce": 1793276380,
			"isDeleted": false,
			"id": "_w4ZnE-DiJRwplNcPc4P1",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 129.65698681872948,
			"y": 1665.537885079411,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
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
			"updated": 1707741780559,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 896,
			"versionNonce": 697060847,
			"isDeleted": false,
			"id": "5PU6uSwr",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 154.14699231189354,
			"y": 1687.037885079411,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 23.019989013671875,
			"height": 25,
			"seed": 1831153085,
			"groupIds": [
				"ry4vmHMtG8utQ-0I2-5dR"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063975,
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
			"version": 1001,
			"versionNonce": 1452777052,
			"isDeleted": false,
			"id": "e7c9rT5Uex-VKDMm_BiH9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 202.65698681872948,
			"y": 1665.537885079411,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
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
			"updated": 1707741780559,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 416,
			"versionNonce": 922551652,
			"isDeleted": false,
			"id": "B3RszNtC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 226.93823681872948,
			"y": 1687.537885079411,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 23.4375,
			"height": 24,
			"seed": 1453863859,
			"groupIds": [
				"ry4vmHMtG8utQ-0I2-5dR"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780559,
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
			"version": 1020,
			"versionNonce": 122385116,
			"isDeleted": false,
			"id": "0xYNJqTuAoJsXn4zeqVS0",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 348.6569868187295,
			"y": 1664.537885079411,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
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
			"updated": 1707741780559,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 418,
			"versionNonce": 2071902436,
			"isDeleted": false,
			"id": "bjTnpKZX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 372.9382368187295,
			"y": 1686.537885079411,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 23.4375,
			"height": 24,
			"seed": 1503060157,
			"groupIds": [
				"ry4vmHMtG8utQ-0I2-5dR"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780560,
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
			"version": 977,
			"versionNonce": 194033500,
			"isDeleted": false,
			"id": "Ds92JaHQv6-Y1vXU2ZmSO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 568.6359294159539,
			"y": 1663.5589424821865,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
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
			"updated": 1707741780560,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 670,
			"versionNonce": 1439348751,
			"isDeleted": false,
			"id": "18dCOLqj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 595.7959330780633,
			"y": 1685.0589424821865,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 17.67999267578125,
			"height": 25,
			"seed": 587589437,
			"groupIds": [
				"d8Vg82cqON8Qs20mVMMat"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063975,
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
			"version": 939,
			"versionNonce": 1337551836,
			"isDeleted": false,
			"id": "L4vxf4s3UZIhjTmFcVqWZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 422.6359294159539,
			"y": 1664.5589424821865,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
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
			"updated": 1707741780560,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 876,
			"versionNonce": 1593237039,
			"isDeleted": false,
			"id": "gQMVZIw8",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 445.6959422333367,
			"y": 1686.0589424821865,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 25.879974365234375,
			"height": 25,
			"seed": 324598781,
			"groupIds": [
				"d8Vg82cqON8Qs20mVMMat"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063976,
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
			"version": 984,
			"versionNonce": 1708626012,
			"isDeleted": false,
			"id": "Y20yaTdEDL_r7Wqq1MyVX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 495.6359294159539,
			"y": 1664.5589424821865,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
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
			"updated": 1707741780560,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 679,
			"versionNonce": 1475952719,
			"isDeleted": false,
			"id": "6glpIZCP",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 518.3859370453484,
			"y": 1686.0589424821865,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 26.499984741210938,
			"height": 25,
			"seed": 66969789,
			"groupIds": [
				"d8Vg82cqON8Qs20mVMMat"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063976,
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
			"version": 1001,
			"versionNonce": 1304241372,
			"isDeleted": false,
			"id": "FBsA60ZkyvwWNSkA9VAyZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 641.6359294159539,
			"y": 1663.5589424821865,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
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
			"updated": 1707741780560,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 668,
			"versionNonce": 1655332463,
			"isDeleted": false,
			"id": "8dZovEvn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 664.625934909118,
			"y": 1685.0589424821865,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 26.019989013671875,
			"height": 25,
			"seed": 1187026301,
			"groupIds": [
				"d8Vg82cqON8Qs20mVMMat"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063976,
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
			"version": 1589,
			"versionNonce": 1023158620,
			"isDeleted": false,
			"id": "VQOE0eKnk0YiaONmdr_mZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 640.5776615361458,
			"y": 2911.376409202521,
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
			"updated": 1707741780560,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1120,
			"versionNonce": 1060809316,
			"isDeleted": false,
			"id": "A4z3dYHn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 664.8589115361458,
			"y": 2933.376409202521,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 246272733,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780560,
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
			"version": 1593,
			"versionNonce": 1726389724,
			"isDeleted": false,
			"id": "D6JJRvfjdHlOyc4EIvQZI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 495.2103799219328,
			"y": 2915.360074934886,
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
			"updated": 1707741780560,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1127,
			"versionNonce": 1455406564,
			"isDeleted": false,
			"id": "LeBEztZC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 519.4916299219328,
			"y": 2937.360074934886,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 48792221,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780560,
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
			"version": 1545,
			"versionNonce": 1150190172,
			"isDeleted": false,
			"id": "VTEx-Vy7NQT3qwOuWgiQJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 568.6848378643451,
			"y": 2913.3587487691816,
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
			"updated": 1707741780560,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1078,
			"versionNonce": 1935040868,
			"isDeleted": false,
			"id": "CNiX8anS",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 592.9660878643451,
			"y": 2935.3587487691816,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 19267453,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780560,
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
			"version": 1547,
			"versionNonce": 1556469468,
			"isDeleted": false,
			"id": "vl9j3ZvVKryanofH2XUQN",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 424.84184187958954,
			"y": 2914.3657549066706,
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
			"updated": 1707741780560,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1080,
			"versionNonce": 474780900,
			"isDeleted": false,
			"id": "iR5ybc7H",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 449.12309187958954,
			"y": 2936.3657549066706,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 594997811,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780560,
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
			"version": 1552,
			"versionNonce": 203332444,
			"isDeleted": false,
			"id": "2maVIDOknEbOb5WgqMrUs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 276.81710806238675,
			"y": 2916.517376378741,
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
			"updated": 1707741780560,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1085,
			"versionNonce": 1060132964,
			"isDeleted": false,
			"id": "WV1IhyA4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 301.09835806238675,
			"y": 2938.517376378741,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 1019586845,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780560,
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
			"version": 1541,
			"versionNonce": 1290457052,
			"isDeleted": false,
			"id": "KCvFcrwCGZ8-8X7HnUDPH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 203.1759208985004,
			"y": 2916.5551048768507,
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
			"updated": 1707741780560,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1074,
			"versionNonce": 1741663204,
			"isDeleted": false,
			"id": "df66r8Sy",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 227.4571708985004,
			"y": 2938.5551048768507,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 2139230643,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780560,
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
			"version": 1811,
			"versionNonce": 2134668380,
			"isDeleted": false,
			"id": "ECR2nKI_bulnt1qa1SGTQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 56.95327393134346,
			"y": 2921.4318982026484,
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
			"updated": 1707741780560,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1344,
			"versionNonce": 2016972644,
			"isDeleted": false,
			"id": "AtnS5346",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 81.23452393134346,
			"y": 2943.4318982026484,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 1841003795,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780560,
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
			"version": 1624,
			"versionNonce": 820349148,
			"isDeleted": false,
			"id": "t63wDyMMlGdi0OAm0HKdh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 131.3664399049852,
			"y": 2918.370053924033,
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
			"updated": 1707741780560,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1158,
			"versionNonce": 1622737636,
			"isDeleted": false,
			"id": "4hrQBUga",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 155.6476899049852,
			"y": 2940.370053924033,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 741570909,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780561,
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
			"version": 1566,
			"versionNonce": 1702366556,
			"isDeleted": false,
			"id": "vLbS1WViKAUQVD9UuhLLY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 350.91096567880777,
			"y": 2916.8070654156368,
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
			"updated": 1707741780561,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1098,
			"versionNonce": 1474233956,
			"isDeleted": false,
			"id": "4D5Msh97",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 375.19221567880777,
			"y": 2938.8070654156368,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 1382163,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780561,
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
			"version": 1756,
			"versionNonce": 1581646300,
			"isDeleted": false,
			"id": "5Dg60KnBpkWpPyroQT86_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -376.93735236861033,
			"y": 2923.6128221642844,
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
			"updated": 1707741780561,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1293,
			"versionNonce": 309893604,
			"isDeleted": false,
			"id": "N7obltZ1",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -358.51547736861033,
			"y": 2945.6128221642844,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 515289053,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780561,
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
			"version": 1650,
			"versionNonce": 1650550364,
			"isDeleted": false,
			"id": "HNV_QTaVex1ga6bhihDQ6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -448.44788373226226,
			"y": 2925.0598126450354,
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
			"updated": 1707741780561,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1184,
			"versionNonce": 2073279844,
			"isDeleted": false,
			"id": "AcG2jzEf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -430.02600873226226,
			"y": 2947.0598126450354,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 78126237,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780561,
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
			"version": 1674,
			"versionNonce": 110901980,
			"isDeleted": false,
			"id": "Lw5iNHRh0BlPb8Cuy_0Pp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -304.1428119398475,
			"y": 2922.165831683535,
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
			"updated": 1707741780561,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1208,
			"versionNonce": 1820225764,
			"isDeleted": false,
			"id": "NlRZrglL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -285.7209369398475,
			"y": 2944.165831683535,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 691362141,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780561,
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
			"version": 1644,
			"versionNonce": 1971879772,
			"isDeleted": false,
			"id": "OtTKpb9J08gzqAyA1OyjA",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -159.51177731615553,
			"y": 2923.7758035799234,
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
			"updated": 1707741780561,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1179,
			"versionNonce": 1690743908,
			"isDeleted": false,
			"id": "HtlqiIXR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -141.08990231615553,
			"y": 2945.7758035799234,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1403676189,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780561,
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
			"version": 1641,
			"versionNonce": 930624476,
			"isDeleted": false,
			"id": "_xQ-aWvXHDHTt_cVzxaNX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -86.55425547175389,
			"y": 2919.108869306396,
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
			"updated": 1707741780561,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1178,
			"versionNonce": 1111132132,
			"isDeleted": false,
			"id": "s11jIehP",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -68.13238047175389,
			"y": 2941.108869306396,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1750287069,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780561,
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
			"version": 1625,
			"versionNonce": 2055034972,
			"isDeleted": false,
			"id": "wMmYLkJWC-U_I2opwGssr",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -16.146810153423644,
			"y": 2919.48267679855,
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
			"updated": 1707741780561,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1160,
			"versionNonce": 2028464996,
			"isDeleted": false,
			"id": "oQRJPuYM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 8.134439846576356,
			"y": 2941.48267679855,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 1919970397,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780561,
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
			"version": 1668,
			"versionNonce": 1516891356,
			"isDeleted": false,
			"id": "iFNyE9BaEEpDkwmkCsu4r",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -232.4692991605574,
			"y": 2923.6128221642857,
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
			"updated": 1707741780561,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1202,
			"versionNonce": 1260183268,
			"isDeleted": false,
			"id": "8vE9McAu",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": -214.0474241605574,
			"y": 2945.6128221642857,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 24951069,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780561,
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
			"version": 776,
			"versionNonce": 684716380,
			"isDeleted": false,
			"id": "67M15hr0FY2IgrBqCezPG",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 758.4342368612877,
			"y": 1751.7402528205014,
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
			"updated": 1707741780561,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 320,
			"versionNonce": 23552612,
			"isDeleted": false,
			"id": "S1LUpqOV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 776.8561118612877,
			"y": 1773.7402528205014,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 2044550749,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780561,
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
			"version": 274,
			"versionNonce": 889284060,
			"isDeleted": false,
			"id": "1qn0AX3yVYLu72-1iqAeZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 656.3963357149981,
			"y": 1767.6092912969236,
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
			"updated": 1707741780561,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 273,
			"versionNonce": 580220388,
			"isDeleted": false,
			"id": "OWUvWOzvib8oHm1t6Vs3q",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 676.2884757644125,
			"y": 1767.9430411820415,
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
			"updated": 1707741780561,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 271,
			"versionNonce": 336611932,
			"isDeleted": false,
			"id": "gHs1PbegGbzFhS6qng35y",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 657.0010759668099,
			"y": 1785.5532757798526,
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
			"updated": 1707741780561,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 345,
			"versionNonce": 733288804,
			"isDeleted": false,
			"id": "JeVl-pXhkUA3ERAyp-z5t",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 677.5690222045171,
			"y": 1729.467119568316,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1180.5407221136436,
			"seed": 2101139720,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780561,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 362,
			"versionNonce": 1758371548,
			"isDeleted": false,
			"id": "7Usi1ShqMczYQ2P6g_jkj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 605.1236318916389,
			"y": 1731.679131209087,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1178.5216811076705,
			"seed": 1071095048,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780562,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 368,
			"versionNonce": 1209289956,
			"isDeleted": false,
			"id": "MtcEl9eNF7xZCR8gRN7dJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 528.5609897190101,
			"y": 1731.6791312090872,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.1368683772161603e-13,
			"height": 1178.5216811076702,
			"seed": 992750909,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780562,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 407,
			"versionNonce": 734946140,
			"isDeleted": false,
			"id": "jfNKUiNuQKgiLXRzv0Zg5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 458.95858774389296,
			"y": 1731.6791312090872,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.684341886080802e-14,
			"height": 1181.8883461083487,
			"seed": 601826675,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780562,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 448,
			"versionNonce": 155258980,
			"isDeleted": false,
			"id": "fnTZzVnVzmphFpzMvQGEd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 386.373225684128,
			"y": 1733.8726055841046,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.684341886080802e-14,
			"height": 1180.998074078317,
			"seed": 67497235,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780562,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 427,
			"versionNonce": 1935775708,
			"isDeleted": false,
			"id": "2bHGzXEziW1_Hd3zmE4Ds",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 312.7935435961473,
			"y": 1728.6961711244392,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1186.1745085379823,
			"seed": 810837107,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780562,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 528,
			"versionNonce": 520709092,
			"isDeleted": false,
			"id": "vLXpFqD6K2eE6-2Mz30vg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 241.27077967079344,
			"y": 1730.1192867221334,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1182.1289503189232,
			"seed": 1172497528,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780562,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 447,
			"versionNonce": 999963740,
			"isDeleted": false,
			"id": "ur2XxVviKVah-UGcP8rlM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 167.62281947661734,
			"y": 1733.6677712655187,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1185.4533009345473,
			"seed": 1923946803,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780562,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 810,
			"versionNonce": 259737444,
			"isDeleted": false,
			"id": "muTEKSytd7QVpco83nzQX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 759.9185130052365,
			"y": 1822.3169468283534,
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
			"updated": 1707741780562,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 359,
			"versionNonce": 776622300,
			"isDeleted": false,
			"id": "tftmasPD",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 778.3403880052365,
			"y": 1844.3169468283534,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 290974131,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780562,
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
			"version": 835,
			"versionNonce": 1860483812,
			"isDeleted": false,
			"id": "8HIIeNSS4qTGsd5i5Bz0k",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 760.9128330334524,
			"y": 1891.919348803471,
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
			"updated": 1707741780562,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 383,
			"versionNonce": 1795413340,
			"isDeleted": false,
			"id": "blwnIOBo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 779.3347080334524,
			"y": 1913.919348803471,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1885479261,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780562,
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
			"version": 876,
			"versionNonce": 399752804,
			"isDeleted": false,
			"id": "FAvXRi4EDUlxQxcdzl3EI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 761.9071530616684,
			"y": 2029.1355126972721,
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
			"updated": 1707741780562,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 423,
			"versionNonce": 1327024604,
			"isDeleted": false,
			"id": "QbYWlE5L",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 780.3290280616684,
			"y": 2051.135512697272,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1859914461,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780562,
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
			"version": 860,
			"versionNonce": 1662407140,
			"isDeleted": false,
			"id": "Ztcq1h-YfW398cWm6UqmO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 760.9128330334524,
			"y": 1962.5160708068038,
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
			"updated": 1707741780562,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 411,
			"versionNonce": 1033580124,
			"isDeleted": false,
			"id": "OVOkgLYO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 779.3347080334524,
			"y": 1984.5160708068038,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 263983347,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780562,
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
			"version": 868,
			"versionNonce": 1606055268,
			"isDeleted": false,
			"id": "k40tPKHD6lXU_0VBSQC_f",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 760.9128330334522,
			"y": 2097.7435946441738,
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
			"updated": 1707741780562,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 417,
			"versionNonce": 1734148828,
			"isDeleted": false,
			"id": "KnQAcpBC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 779.3347080334522,
			"y": 2119.7435946441738,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 682807219,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780562,
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
			"version": 333,
			"versionNonce": 185477348,
			"isDeleted": false,
			"id": "Fn8PvtSYYDOetQfdAiVH5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 585.4611403675589,
			"y": 1835.3575283973987,
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
			"updated": 1707741780562,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 332,
			"versionNonce": 317736796,
			"isDeleted": false,
			"id": "YBP2FOJQ4gNHq1HLA0BBV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 605.3532804169735,
			"y": 1835.6912782825166,
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
			"updated": 1707741780562,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 330,
			"versionNonce": 144665700,
			"isDeleted": false,
			"id": "YXPmXp7JM5ob91vJWKJVM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 586.0658806193709,
			"y": 1853.3015128803277,
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
			"updated": 1707741780562,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 383,
			"versionNonce": 1688665052,
			"isDeleted": false,
			"id": "gFXy_aPg5UfJfxJp2m_5Y",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 508.7292615228772,
			"y": 1906.9485704289477,
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
			"updated": 1707741780562,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 382,
			"versionNonce": 1513897956,
			"isDeleted": false,
			"id": "9ueZGrnbAGhEldjxxoKBm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 528.6214015722918,
			"y": 1907.2823203140656,
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
			"updated": 1707741780562,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 380,
			"versionNonce": 647176284,
			"isDeleted": false,
			"id": "NX1Oso0Dok2mDrPLQczpH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 509.3340017746892,
			"y": 1924.8925549118771,
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
			"updated": 1707741780562,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 456,
			"versionNonce": 401777508,
			"isDeleted": false,
			"id": "kzPFuX2ek8cAhSAZIjkpK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 437.55076116941007,
			"y": 1977.5452924322808,
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
			"updated": 1707741780562,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 456,
			"versionNonce": 277263580,
			"isDeleted": false,
			"id": "cP3ugDcOGxbH1-hkg72SD",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 457.44290121882466,
			"y": 1977.8790423173987,
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
			"updated": 1707741780562,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 454,
			"versionNonce": 672175844,
			"isDeleted": false,
			"id": "4ocuvZeu-M1N3q2NKK8_O",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 438.1555014212221,
			"y": 1995.4892769152102,
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
			"updated": 1707741780562,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 500,
			"versionNonce": 269728092,
			"isDeleted": false,
			"id": "GXyVxzNAwFqmcp41zVzuy",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 364.6745099345778,
			"y": 2044.1647343227498,
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
			"updated": 1707741780562,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 500,
			"versionNonce": 1998854756,
			"isDeleted": false,
			"id": "D_HF2O9U0gieddBzvPOW_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 384.56664998399253,
			"y": 2044.4984842078677,
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
			"updated": 1707741780562,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 498,
			"versionNonce": 277622236,
			"isDeleted": false,
			"id": "zETT1-86HMPl4XY4yTrf2",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 365.27925018638985,
			"y": 2062.108718805679,
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
			"updated": 1707741780562,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 894,
			"versionNonce": 804990436,
			"isDeleted": false,
			"id": "Si3cJgg0F0kp8B3s1OWTj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 760.9128330334524,
			"y": 2167.345996619291,
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
			"updated": 1707741780562,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 442,
			"versionNonce": 1124209244,
			"isDeleted": false,
			"id": "z28RSTvt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 779.3347080334524,
			"y": 2189.345996619291,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 2062542173,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780562,
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
			"version": 547,
			"versionNonce": 1940115812,
			"isDeleted": false,
			"id": "-iqZieeYhFKpjN6qYNsHO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 293.12878260416323,
			"y": 2115.357026196076,
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
			"updated": 1707741780563,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 546,
			"versionNonce": 1715955420,
			"isDeleted": false,
			"id": "bUkpenVIGzNE5MTYg2VcY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 313.02092265357794,
			"y": 2115.6907760811937,
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
			"updated": 1707741780563,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 544,
			"versionNonce": 292291812,
			"isDeleted": false,
			"id": "eVpWWIIPjG9ChNSSXpPGd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 293.73352285597525,
			"y": 2133.3010106790052,
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
			"updated": 1707741780563,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 613,
			"versionNonce": 250489692,
			"isDeleted": false,
			"id": "myRqma99ltKHTHkv9JJ3I",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 219.30766800435322,
			"y": 2185.2288554327647,
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
			"updated": 1707741780563,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 613,
			"versionNonce": 1054984292,
			"isDeleted": false,
			"id": "AR89F8LOKASHdAS8nwRF4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 239.19980805376792,
			"y": 2185.5626053178826,
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
			"updated": 1707741780563,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 611,
			"versionNonce": 1867014108,
			"isDeleted": false,
			"id": "w0rHwbka-onSzsMkjzkZX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 219.91240825616524,
			"y": 2203.172839915693,
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
			"updated": 1707741780563,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 935,
			"versionNonce": 1339235300,
			"isDeleted": false,
			"id": "JGP5JckrKIjyRpC-HLY8I",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 762.2890722730365,
			"y": 2236.078787087594,
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
			"updated": 1707741780563,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 501,
			"versionNonce": 733679599,
			"isDeleted": false,
			"id": "RCF1W9Sz",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 780.6990835645404,
			"y": 2257.578787087594,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.17997741699219,
			"height": 25,
			"seed": 1474629811,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063982,
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
			"version": 666,
			"versionNonce": 1850605412,
			"isDeleted": false,
			"id": "MoMQQ5j1pkb-8lUkXwCUu",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 146.98755042826645,
			"y": 2253.0044239041,
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
			"updated": 1707741780563,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 665,
			"versionNonce": 1696536796,
			"isDeleted": false,
			"id": "LYb0qVOYOvvXME4SHWnMo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 166.87969047768115,
			"y": 2253.3381737892178,
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
			"updated": 1707741780563,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 663,
			"versionNonce": 1386246884,
			"isDeleted": false,
			"id": "q_yyg_1S5-ndsPV8Tlzle",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 147.59229068007846,
			"y": 2270.9484083870284,
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
			"updated": 1707741780563,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1331,
			"versionNonce": 2080349532,
			"isDeleted": false,
			"id": "Mby2V4vQVKwgj9KMqJtqs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 762.1355323475493,
			"y": 2785.9067158740036,
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
			"updated": 1707741780563,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 880,
			"versionNonce": 2069395044,
			"isDeleted": false,
			"id": "AwqVmo46",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 774.6980323475493,
			"y": 2807.9067158740036,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 684863389,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780563,
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
			"version": 1406,
			"versionNonce": 1566282204,
			"isDeleted": false,
			"id": "5H8Ys7tmg5AM_CMfhtbML",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 762.5683262853431,
			"y": 2717.6877586694113,
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
			"updated": 1707741780563,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 959,
			"versionNonce": 1698957796,
			"isDeleted": false,
			"id": "9EldL8HI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 775.1308262853431,
			"y": 2739.6877586694113,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1341964413,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780563,
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
			"version": 1437,
			"versionNonce": 138737244,
			"isDeleted": false,
			"id": "gOE2b90CxdhqbTqXl4uFn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 763.5626463135591,
			"y": 2648.4945094320847,
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
			"updated": 1707741780563,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 995,
			"versionNonce": 1131490660,
			"isDeleted": false,
			"id": "jka3pbbc",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 776.1251463135591,
			"y": 2670.4945094320847,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 752518461,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780563,
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
			"version": 1527,
			"versionNonce": 1234029276,
			"isDeleted": false,
			"id": "ZhY9L6nL0gLXdQHhD1R7c",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 764.1029716117448,
			"y": 2511.273817519463,
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
			"updated": 1707741780563,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1076,
			"versionNonce": 925753572,
			"isDeleted": false,
			"id": "Xf35fjKE",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 776.6654716117448,
			"y": 2533.273817519463,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 186522109,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780563,
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
			"version": 1443,
			"versionNonce": 63442780,
			"isDeleted": false,
			"id": "j7bGUo1N1BU1W1xVl6WOs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 763.5626463135591,
			"y": 2578.192615810664,
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
			"updated": 1707741780563,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1000,
			"versionNonce": 134751332,
			"isDeleted": false,
			"id": "00zJdro0",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 776.1251463135591,
			"y": 2600.192615810664,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 127106749,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780563,
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
			"version": 1467,
			"versionNonce": 2001060828,
			"isDeleted": false,
			"id": "Wmgs4HVbpTAfLsAz5Mz6b",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 763.5626463135588,
			"y": 2443.18921266623,
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
			"updated": 1707741780563,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1017,
			"versionNonce": 1540224996,
			"isDeleted": false,
			"id": "alkDqRaX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 776.1251463135588,
			"y": 2465.18921266623,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 2080813949,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780563,
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
			"version": 1466,
			"versionNonce": 169404508,
			"isDeleted": false,
			"id": "OKlnp8cZfY5WyGj8TinYl",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 763.5626463135591,
			"y": 2375.0474456350585,
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
			"updated": 1707741780563,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1016,
			"versionNonce": 1854757732,
			"isDeleted": false,
			"id": "25zD6yu3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 781.9845213135591,
			"y": 2397.0474456350585,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1875398301,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780563,
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
			"version": 1544,
			"versionNonce": 269712604,
			"isDeleted": false,
			"id": "vwPhpEaKNmDdY35Kg4CsN",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 764.9388855531431,
			"y": 2306.036067097073,
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
			"updated": 1707741780563,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1096,
			"versionNonce": 1251233508,
			"isDeleted": false,
			"id": "jVkYUmTz",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 783.3607605531431,
			"y": 2328.036067097073,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1482301021,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780563,
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
			"type": "arrow",
			"version": 198,
			"versionNonce": 315064668,
			"isDeleted": false,
			"id": "wE6R0I5tXgFCqY8jZUfUh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 698.6464083539199,
			"y": 1786.330272030403,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 60.26375886637936,
			"height": 0,
			"seed": 34096136,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707741780563,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "1qn0AX3yVYLu72-1iqAeZ",
				"focus": -0.013167495614155231,
				"gap": 2.2006516260398143
			},
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
					60.26375886637936,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 368,
			"versionNonce": 187354799,
			"isDeleted": false,
			"id": "oURlXJDvQUGwSLSXaD-bF",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 627.0557730860597,
			"y": 1851.3351133627348,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 131.86273991917676,
			"height": 1.1826254701268226,
			"seed": 1025986168,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063980,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "Fn8PvtSYYDOetQfdAiVH5",
				"gap": 1.5452117056188968,
				"focus": -0.16640123725004605
			},
			"endBinding": {
				"elementId": "muTEKSytd7QVpco83nzQX",
				"gap": 1,
				"focus": 0.10102212999669283
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
					131.86273991917676,
					1.1826254701268226
				]
			]
		},
		{
			"type": "arrow",
			"version": 483,
			"versionNonce": 328628495,
			"isDeleted": false,
			"id": "LxNDA3mJjjMjQi5j8VtIu",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 404.0626765858967,
			"y": 2062.59990498702,
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
			"updated": 1710908063980,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "FAvXRi4EDUlxQxcdzl3EI",
				"gap": 3.1340419686944188,
				"focus": 0.015753167948586826
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
			"version": 476,
			"versionNonce": 1336049455,
			"isDeleted": false,
			"id": "h1ly_-pOKHE2B_GyfoTfQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 476.5862350272794,
			"y": 1995.0088008845767,
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
			"updated": 1710908063981,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "Ztcq1h-YfW398cWm6UqmO",
				"gap": 2.3427279220779837,
				"focus": 0.04433146830079776
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
			"version": 606,
			"versionNonce": 1576808175,
			"isDeleted": false,
			"id": "kFiwl21WYFcP0-zpaaT7T",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 549.7786825357591,
			"y": 1924.8738963010953,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 210.13415049769333,
			"height": 0,
			"seed": 1140716296,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063980,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "gFXy_aPg5UfJfxJp2m_5Y",
				"gap": 1,
				"focus": -0.05510857181165457
			},
			"endBinding": {
				"elementId": "8HIIeNSS4qTGsd5i5Bz0k",
				"gap": 1,
				"focus": 0.030748603011047367
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
					210.13415049769333,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 677,
			"versionNonce": 60931951,
			"isDeleted": false,
			"id": "dLh5L945UhcFwp_dUDGsd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 334.8469430316074,
			"y": 2133.5982747391213,
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
			"updated": 1710908063981,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "-iqZieeYhFKpjN6qYNsHO",
				"gap": 1.6687394145623387,
				"focus": -0.03845545064493776
			},
			"endBinding": {
				"elementId": "k40tPKHD6lXU_0VBSQC_f",
				"gap": 4.77346804064257,
				"focus": -0.054549414557280164
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
			"version": 580,
			"versionNonce": 2134243727,
			"isDeleted": false,
			"id": "Ei1c0585ihI5zn_wuvdI4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 257.8098696017993,
			"y": 2203.3925463934775,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 502.10296343165317,
			"height": 0,
			"seed": 748711032,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063981,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "Si3cJgg0F0kp8B3s1OWTj",
				"gap": 1,
				"focus": -0.060192640417252585
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
					502.10296343165317,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 779,
			"versionNonce": 899817935,
			"isDeleted": false,
			"id": "8qnsHjxregxPNcjRJI5xT",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 188.3851250086608,
			"y": 2271.9691885471702,
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
			"updated": 1710908063982,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "MoMQQ5j1pkb-8lUkXwCUu",
				"gap": 1.3481535675124547,
				"focus": -0.00031699972104024297
			},
			"endBinding": {
				"elementId": "JGP5JckrKIjyRpC-HLY8I",
				"gap": 2.8575246550213933,
				"focus": -0.05560004292871835
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
			"type": "line",
			"version": 436,
			"versionNonce": 1434317660,
			"isDeleted": false,
			"id": "8fWHEr-EdWE0kTNE9hCbn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 92.34045118083918,
			"y": 1737.2755997760296,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1180.5407221136436,
			"seed": 1789046536,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780564,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 453,
			"versionNonce": 1074954340,
			"isDeleted": false,
			"id": "_954fE0gND4FCf7gPUUnK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 19.89506086796075,
			"y": 1739.487611416801,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1178.5216811076705,
			"seed": 1468501512,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780564,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 459,
			"versionNonce": 1621043164,
			"isDeleted": false,
			"id": "5XaVxtd9PSnu_6Al8aXYa",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -56.66758130466803,
			"y": 1739.487611416801,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.1368683772161603e-13,
			"height": 1178.5216811076702,
			"seed": 846761224,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780564,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 498,
			"versionNonce": 1512887268,
			"isDeleted": false,
			"id": "APlQvOYxocZ4ubQW2mQx9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -126.26998327978504,
			"y": 1739.487611416801,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.684341886080802e-14,
			"height": 1181.8883461083487,
			"seed": 619817992,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780564,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 539,
			"versionNonce": 1252379740,
			"isDeleted": false,
			"id": "FkRkZOCMmV118DA0VTG8e",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -198.85534533955,
			"y": 1741.681085791818,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.684341886080802e-14,
			"height": 1180.998074078317,
			"seed": 1223617288,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780564,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 518,
			"versionNonce": 1957738340,
			"isDeleted": false,
			"id": "LzCmeue3kyq90IA7YQ9_i",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -272.4350274275307,
			"y": 1736.5046513321531,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1186.1745085379823,
			"seed": 418138632,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780564,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 619,
			"versionNonce": 1969479900,
			"isDeleted": false,
			"id": "8hCcMyY3nJPhsY4SmuFKe",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -343.95779135288456,
			"y": 1737.9277669298472,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1182.1289503189232,
			"seed": 1608894728,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780564,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 538,
			"versionNonce": 1810639588,
			"isDeleted": false,
			"id": "SYBVvow6YQFD8OzuiindD",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -417.60575154706066,
			"y": 1741.4762514732329,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1185.4533009345473,
			"seed": 693594120,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780564,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 386,
			"versionNonce": 946562396,
			"isDeleted": false,
			"id": "mCebUb59XSZ0szTBeI_ig",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 74.1872584267926,
			"y": 2322.5070343351063,
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
			"updated": 1707741780564,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 385,
			"versionNonce": 1651322468,
			"isDeleted": false,
			"id": "4zIYW3R5RSOMMSjVhE74Z",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 94.07939847620696,
			"y": 2322.840784220224,
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
			"updated": 1707741780564,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 383,
			"versionNonce": 688806364,
			"isDeleted": false,
			"id": "k9W4_rLqq5WVC5bQjmHW1",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 74.79199867860439,
			"y": 2340.4510188180348,
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
			"updated": 1707741780564,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 446,
			"versionNonce": 2030158308,
			"isDeleted": false,
			"id": "zxUwtIzZapjh8yT902Eup",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1.8050725986032603,
			"y": 2390.2552714355807,
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
			"updated": 1707741780564,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 445,
			"versionNonce": 1650376284,
			"isDeleted": false,
			"id": "Ier0PTY22xRWL6gWoQENx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 21.697212648017853,
			"y": 2390.5890213206985,
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
			"updated": 1707741780564,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"versionNonce": 112715108,
			"isDeleted": false,
			"id": "2HVL8wf2CxWt_5spzEp51",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2.4098128504152783,
			"y": 2408.19925591851,
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
			"updated": 1707741780564,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 497,
			"versionNonce": 1294897884,
			"isDeleted": false,
			"id": "7-9H23ZMxKx98IKCVPzSp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -76.37379672682846,
			"y": 2461.84631346713,
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
			"updated": 1707741780564,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 496,
			"versionNonce": 1356699876,
			"isDeleted": false,
			"id": "N57xAcV7td560YYaRHzmx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -56.481656677413866,
			"y": 2462.180063352248,
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
			"updated": 1707741780564,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 494,
			"versionNonce": 1745868636,
			"isDeleted": false,
			"id": "YuU6tM2N8Kqs84Lw7nFuN",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -75.76905647501644,
			"y": 2479.7902979500595,
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
			"updated": 1707741780564,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 568,
			"versionNonce": 1124129892,
			"isDeleted": false,
			"id": "-1SaUbN8DwmdSsRvBlF0U",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -144.65831611879548,
			"y": 2532.4430354704627,
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
			"updated": 1707741780564,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 568,
			"versionNonce": 257199068,
			"isDeleted": false,
			"id": "vDo9Kuz_XKe0EZoNtpxK2",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -124.76617606938089,
			"y": 2532.7767853555806,
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
			"updated": 1707741780564,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 566,
			"versionNonce": 653242340,
			"isDeleted": false,
			"id": "YLI2eW7AMvWD2amFYDEhr",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -144.05357586698346,
			"y": 2550.387019953392,
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
			"updated": 1707741780564,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 612,
			"versionNonce": 1158590556,
			"isDeleted": false,
			"id": "KsCeeBOeLyT_qKufoftXL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -217.5345673536276,
			"y": 2599.0624773609325,
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
			"updated": 1707741780564,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 612,
			"versionNonce": 1555567460,
			"isDeleted": false,
			"id": "iS03XBqX1sgA1Od6cJPI0",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -197.64242730421302,
			"y": 2599.3962272460503,
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
			"updated": 1707741780564,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 610,
			"versionNonce": 2031109340,
			"isDeleted": false,
			"id": "2cI28EUF28S7BpD4at8qs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -216.9298271018156,
			"y": 2617.006461843862,
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
			"updated": 1707741780564,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 659,
			"versionNonce": 313001700,
			"isDeleted": false,
			"id": "F5WApDqP4cBZw1KNkLFss",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -289.0802946840422,
			"y": 2670.2547692342578,
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
			"updated": 1707741780564,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 658,
			"versionNonce": 1357597020,
			"isDeleted": false,
			"id": "GqbZ5wMIs7tfqPGTbi8_r",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -269.1881546346276,
			"y": 2670.5885191193756,
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
			"updated": 1707741780564,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 656,
			"versionNonce": 2102233700,
			"isDeleted": false,
			"id": "1Mr5woD8TFhz0SmIDNLi6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -288.4755544322302,
			"y": 2688.198753717187,
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
			"updated": 1707741780564,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"versionNonce": 1878113756,
			"isDeleted": false,
			"id": "TA5ADK1aeTVbqTZ37PmXx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -362.9014092838522,
			"y": 2740.126598470947,
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
			"updated": 1707741780564,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 725,
			"versionNonce": 259431908,
			"isDeleted": false,
			"id": "YWG63wMOCaOBimVtSEcYB",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -343.0092692344376,
			"y": 2740.460348356065,
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
			"updated": 1707741780565,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 723,
			"versionNonce": 1060479580,
			"isDeleted": false,
			"id": "BRSMfC_ETHFL9orkcXpAd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -362.2966690320402,
			"y": 2758.0705829538756,
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
			"updated": 1707741780565,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 778,
			"versionNonce": 842088804,
			"isDeleted": false,
			"id": "QU6idrnRp0MVMuIO7KCAC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -435.2215268599391,
			"y": 2807.902166942282,
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
			"updated": 1707741780565,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 777,
			"versionNonce": 898168540,
			"isDeleted": false,
			"id": "P-uikr0aIrsMNSQovMKBu",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -415.3293868105243,
			"y": 2808.2359168273997,
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
			"updated": 1707741780565,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 775,
			"versionNonce": 2093708516,
			"isDeleted": false,
			"id": "pB2jSat5nJBtoU8q_hhUt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -434.6167866081271,
			"y": 2825.8461514252103,
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
			"updated": 1707741780565,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 621,
			"versionNonce": 1925806991,
			"isDeleted": false,
			"id": "fro3Y85svpcMyO0EN5iPP",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 116.43733106571449,
			"y": 2341.2280150685856,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 647.5015544874286,
			"height": 0,
			"seed": 2079309176,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063983,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "mCebUb59XSZ0szTBeI_ig",
				"gap": 2.2006516260400133,
				"focus": -0.01316749561415523
			},
			"endBinding": {
				"elementId": "vwPhpEaKNmDdY35Kg4CsN",
				"gap": 1,
				"focus": -0.03505729327977914
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
					647.5015544874286,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 666,
			"versionNonce": 1169474383,
			"isDeleted": false,
			"id": "a8e47_kTDe_Ltbj0dmMTG",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 43.39970531710412,
			"y": 2406.2328564009167,
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
			"updated": 1710908063983,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "zxUwtIzZapjh8yT902Eup",
				"gap": 1.5452117056189891,
				"focus": -0.15777915645288745
			},
			"endBinding": {
				"elementId": "OKlnp8cZfY5WyGj8TinYl",
				"gap": 2.058770291966198,
				"focus": 0.08278203629828676
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
			"version": 647,
			"versionNonce": 974660303,
			"isDeleted": false,
			"id": "zRrsHq5Wjl144Ir7ImCXz",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -178.1464007023087,
			"y": 2617.4976480252026,
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
			"updated": 1710908063982,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "j7bGUo1N1BU1W1xVl6WOs",
				"gap": 4.952751253466317,
				"focus": -0.15603035925113654
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
			"version": 672,
			"versionNonce": 534778031,
			"isDeleted": false,
			"id": "zD7OORwmoWDUF7CFeCjPU",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -105.62284226092606,
			"y": 2549.906543922759,
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
			"updated": 1710908063982,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "ZhY9L6nL0gLXdQHhD1R7c",
				"gap": 3.709064251741779,
				"focus": -0.1362566589204615
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
			"version": 881,
			"versionNonce": 914029327,
			"isDeleted": false,
			"id": "14PLXaQZi8VYHhzkAR8tq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -35.32437571394655,
			"y": 2479.7716393392775,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 792.4872802932894,
			"height": 0,
			"seed": 80298360,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063983,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "7-9H23ZMxKx98IKCVPzSp",
				"gap": 1.000000000000032,
				"focus": -0.055108571811666555
			},
			"endBinding": {
				"elementId": "Wmgs4HVbpTAfLsAz5Mz6b",
				"gap": 6.399741734216036,
				"focus": -0.07595372567786451
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
					792.4872802932894,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 958,
			"versionNonce": 344472207,
			"isDeleted": false,
			"id": "TFfTFlGu_9Q00xJPKWISk",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -247.3621342565981,
			"y": 2688.4960177773037,
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
			"updated": 1710908063982,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "F5WApDqP4cBZw1KNkLFss",
				"gap": 1.6687394145622108,
				"focus": -0.03845545064491378
			},
			"endBinding": {
				"elementId": "gOE2b90CxdhqbTqXl4uFn",
				"gap": 7.8467322149662095,
				"focus": -0.17651495132997083
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
			"version": 740,
			"versionNonce": 415711823,
			"isDeleted": false,
			"id": "7TBKWzGS1_s2xsnHZ_O0o",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -324.39920768640627,
			"y": 2758.2902894316594,
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
			"updated": 1710908063982,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "5H8Ys7tmg5AM_CMfhtbML",
				"gap": 5.405421706000425,
				"focus": -0.19419208124259058
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
			"version": 1080,
			"versionNonce": 299704367,
			"isDeleted": false,
			"id": "D7XTXfbHuyQ_zOn48LS3j",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -392.3769617987948,
			"y": 2826.866931585353,
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
			"updated": 1710908063982,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "QU6idrnRp0MVMuIO7KCAC",
				"gap": 2.795144048262472,
				"focus": -0.0003169997209923011
			},
			"endBinding": {
				"elementId": "Mby2V4vQVKwgj9KMqJtqs",
				"gap": 4.972627768206621,
				"focus": -0.2047122268043976
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
			"type": "rectangle",
			"version": 1313,
			"versionNonce": 1078406492,
			"isDeleted": false,
			"id": "YOak2DZkqd1alegPhlt7i",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1089.626952668331,
			"y": 1654.6234241562315,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 72,
			"height": 68,
			"seed": 97130104,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "WOTEQkFx"
				}
			],
			"updated": 1707741780565,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1210,
			"versionNonce": 105984431,
			"isDeleted": false,
			"id": "WOTEQkFx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1109.976966401241,
			"y": 1676.1234241562315,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 31.299972534179688,
			"height": 25,
			"seed": 1244694392,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063983,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K13",
			"rawText": "K13",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "YOak2DZkqd1alegPhlt7i",
			"originalText": "K13",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1200,
			"versionNonce": 1378951644,
			"isDeleted": false,
			"id": "NPjEHDNJulzl0KCFilZpm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1525.7856731218806,
			"y": 1653.7753012341568,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#99e9f2",
			"width": 72,
			"height": 68,
			"seed": 2057361528,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "yRPxkDIJ"
				}
			],
			"updated": 1707741780565,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1135,
			"versionNonce": 1472013263,
			"isDeleted": false,
			"id": "yRPxkDIJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1546.7656841082087,
			"y": 1675.2753012341568,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 30.03997802734375,
			"height": 25,
			"seed": 987695480,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063983,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K15",
			"rawText": "K15",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "NPjEHDNJulzl0KCFilZpm",
			"originalText": "K15",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1318,
			"versionNonce": 1810400860,
			"isDeleted": false,
			"id": "qd2ZNDcJCsDfupCW0ORem",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1016.6269526683309,
			"y": 1655.6234241562315,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 72,
			"height": 68,
			"seed": 372185720,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "33z7mz9V"
				}
			],
			"updated": 1707741780565,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1210,
			"versionNonce": 388354543,
			"isDeleted": false,
			"id": "33z7mz9V",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1037.386962433956,
			"y": 1677.1234241562315,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 30.47998046875,
			"height": 25,
			"seed": 257231736,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063983,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K14",
			"rawText": "K14",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "qd2ZNDcJCsDfupCW0ORem",
			"originalText": "K14",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1337,
			"versionNonce": 306141916,
			"isDeleted": false,
			"id": "ZtyycJcw3iMSI3pA86-yw",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1162.626952668331,
			"y": 1654.6234241562315,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 72,
			"height": 68,
			"seed": 815062136,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "5Uq2V4dD"
				}
			],
			"updated": 1707741780565,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1210,
			"versionNonce": 1569963023,
			"isDeleted": false,
			"id": "5Uq2V4dD",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1182.6669612132528,
			"y": 1676.1234241562315,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 31.91998291015625,
			"height": 25,
			"seed": 464686456,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063983,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K12",
			"rawText": "K12",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "ZtyycJcw3iMSI3pA86-yw",
			"originalText": "K12",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1512,
			"versionNonce": 1606917980,
			"isDeleted": false,
			"id": "MB5GHKkfLOwYGQ1_OtHcV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1379.3885920186299,
			"y": 1653.9926044810818,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 72,
			"height": 68,
			"seed": 435297912,
			"groupIds": [
				"kuE5Y65q8OUtaMbcpn8aj",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "2lFCxT0R"
				}
			],
			"updated": 1707741780565,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 708,
			"versionNonce": 428446820,
			"isDeleted": false,
			"id": "2lFCxT0R",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1403.6698420186299,
			"y": 1675.9926044810818,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 23.4375,
			"height": 24,
			"seed": 739741560,
			"groupIds": [
				"kuE5Y65q8OUtaMbcpn8aj",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780565,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K9",
			"rawText": "K9",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "MB5GHKkfLOwYGQ1_OtHcV",
			"originalText": "K9",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1474,
			"versionNonce": 1288917980,
			"isDeleted": false,
			"id": "6tBzgku_fH15hFNqp-zG5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1233.3885920186299,
			"y": 1654.9926044810818,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 72,
			"height": 68,
			"seed": 442949752,
			"groupIds": [
				"kuE5Y65q8OUtaMbcpn8aj",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "kStPxEaZ"
				}
			],
			"updated": 1707741780565,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1413,
			"versionNonce": 251617839,
			"isDeleted": false,
			"id": "kStPxEaZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1257.8385965962666,
			"y": 1676.4926044810818,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 23.099990844726562,
			"height": 25,
			"seed": 77861240,
			"groupIds": [
				"kuE5Y65q8OUtaMbcpn8aj",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063983,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K11",
			"rawText": "K11",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "6tBzgku_fH15hFNqp-zG5",
			"originalText": "K11",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1517,
			"versionNonce": 2004121692,
			"isDeleted": false,
			"id": "thv02AmWm0RfCgCJ5I6d3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1306.3885920186299,
			"y": 1654.9926044810818,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 72,
			"height": 68,
			"seed": 1913856632,
			"groupIds": [
				"kuE5Y65q8OUtaMbcpn8aj",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "YmfBBR36"
				}
			],
			"updated": 1707741780565,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 709,
			"versionNonce": 1114819428,
			"isDeleted": false,
			"id": "YmfBBR36",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1324.8104670186299,
			"y": 1676.9926044810818,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 35.15625,
			"height": 24,
			"seed": 1635259256,
			"groupIds": [
				"kuE5Y65q8OUtaMbcpn8aj",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780565,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K10",
			"rawText": "K10",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "thv02AmWm0RfCgCJ5I6d3",
			"originalText": "K10",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1536,
			"versionNonce": 1803357404,
			"isDeleted": false,
			"id": "K9apcuWXq3BGVmgnZPCmb",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1452.3885920186299,
			"y": 1653.9926044810818,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 72,
			"height": 68,
			"seed": 1494672504,
			"groupIds": [
				"kuE5Y65q8OUtaMbcpn8aj",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "BlYt1Vmf"
				}
			],
			"updated": 1707741780565,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 944,
			"versionNonce": 1615576804,
			"isDeleted": false,
			"id": "BlYt1Vmf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1476.6698420186299,
			"y": 1675.9926044810818,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 23.4375,
			"height": 24,
			"seed": 1991480696,
			"groupIds": [
				"kuE5Y65q8OUtaMbcpn8aj",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780565,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K8",
			"rawText": "K8",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "K9apcuWXq3BGVmgnZPCmb",
			"originalText": "K8",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1586,
			"versionNonce": 1786712412,
			"isDeleted": false,
			"id": "NTiRwMzOB5IYgTUDw82BQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1669.6502313689293,
			"y": 1652.8617848059328,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 72,
			"height": 68,
			"seed": 2140284536,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "DY8L6U0p"
				}
			],
			"updated": 1707741780566,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1005,
			"versionNonce": 1304052324,
			"isDeleted": false,
			"id": "DY8L6U0p",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1693.9314813689293,
			"y": 1674.8617848059328,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 1886820216,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780566,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K5",
			"rawText": "K5",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "NTiRwMzOB5IYgTUDw82BQ",
			"originalText": "K5",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1479,
			"versionNonce": 869041628,
			"isDeleted": false,
			"id": "LBWnf7XX_5_WvbnBAb3vf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2105.808951822479,
			"y": 1652.0136618838576,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#99e9f2",
			"width": 72,
			"height": 68,
			"seed": 228911224,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "KWfJbjv9"
				}
			],
			"updated": 1707741780566,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1420,
			"versionNonce": 2085700687,
			"isDeleted": false,
			"id": "KWfJbjv9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2130.298957315643,
			"y": 1673.5136618838576,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.019989013671875,
			"height": 25,
			"seed": 1927354744,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063983,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K7",
			"rawText": "K7",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "LBWnf7XX_5_WvbnBAb3vf",
			"originalText": "K7",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1591,
			"versionNonce": 1282894428,
			"isDeleted": false,
			"id": "gee4a3DyhXXQhrETXXrC1",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1596.6502313689293,
			"y": 1653.8617848059328,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 72,
			"height": 68,
			"seed": 594487928,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "oeA51XQL"
				}
			],
			"updated": 1707741780566,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1005,
			"versionNonce": 1758460260,
			"isDeleted": false,
			"id": "oeA51XQL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1620.9314813689293,
			"y": 1675.8617848059328,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 437459832,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780566,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K6",
			"rawText": "K6",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "gee4a3DyhXXQhrETXXrC1",
			"originalText": "K6",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1611,
			"versionNonce": 1196539612,
			"isDeleted": false,
			"id": "4hMUhgX-Vb61J0OtNTCDD",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1742.6502313689296,
			"y": 1652.8617848059328,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 72,
			"height": 68,
			"seed": 1494281336,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "oTY7SYXL"
				}
			],
			"updated": 1707741780566,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1007,
			"versionNonce": 1590897892,
			"isDeleted": false,
			"id": "oTY7SYXL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1766.9314813689296,
			"y": 1674.8617848059328,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 2049744248,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780566,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K4",
			"rawText": "K4",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "4hMUhgX-Vb61J0OtNTCDD",
			"originalText": "K4",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1471,
			"versionNonce": 216892252,
			"isDeleted": false,
			"id": "7slFN8Ndk8160DjUJi3fP",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1958.9329281220041,
			"y": 1651.882842208708,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 72,
			"height": 68,
			"seed": 1051340408,
			"groupIds": [
				"LfPKfwLRI6d6otSkrgPiB",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "9beOLkox"
				}
			],
			"updated": 1707741780566,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1168,
			"versionNonce": 1164042863,
			"isDeleted": false,
			"id": "9beOLkox",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1986.0929317841135,
			"y": 1673.382842208708,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 17.67999267578125,
			"height": 25,
			"seed": 525180792,
			"groupIds": [
				"LfPKfwLRI6d6otSkrgPiB",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063983,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K1",
			"rawText": "K1",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "7slFN8Ndk8160DjUJi3fP",
			"originalText": "K1",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1433,
			"versionNonce": 597473244,
			"isDeleted": false,
			"id": "LctMwPalhxskVaLjFTFac",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1812.9329281220041,
			"y": 1652.882842208708,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 72,
			"height": 68,
			"seed": 1549463672,
			"groupIds": [
				"LfPKfwLRI6d6otSkrgPiB",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "guctQPr3"
				}
			],
			"updated": 1707741780566,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1374,
			"versionNonce": 2063187087,
			"isDeleted": false,
			"id": "guctQPr3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1835.992940939387,
			"y": 1674.382842208708,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 25.879974365234375,
			"height": 25,
			"seed": 227942776,
			"groupIds": [
				"LfPKfwLRI6d6otSkrgPiB",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063984,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K3",
			"rawText": "K3",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "LctMwPalhxskVaLjFTFac",
			"originalText": "K3",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1478,
			"versionNonce": 2003917916,
			"isDeleted": false,
			"id": "X_iAbRW55MIp6Qd5H75cx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1885.9329281220041,
			"y": 1652.882842208708,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 72,
			"height": 68,
			"seed": 843264632,
			"groupIds": [
				"LfPKfwLRI6d6otSkrgPiB",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "F3MWdCmR"
				}
			],
			"updated": 1707741780566,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1177,
			"versionNonce": 13718191,
			"isDeleted": false,
			"id": "F3MWdCmR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1908.6829357513986,
			"y": 1674.382842208708,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 26.499984741210938,
			"height": 25,
			"seed": 1093018488,
			"groupIds": [
				"LfPKfwLRI6d6otSkrgPiB",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063984,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K2",
			"rawText": "K2",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "X_iAbRW55MIp6Qd5H75cx",
			"originalText": "K2",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1496,
			"versionNonce": 574451932,
			"isDeleted": false,
			"id": "rCfn2iJkaRTpwdfbCcFGL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2031.9329281220043,
			"y": 1651.882842208708,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 72,
			"height": 68,
			"seed": 948106360,
			"groupIds": [
				"LfPKfwLRI6d6otSkrgPiB",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "EhCOXCCA"
				}
			],
			"updated": 1707741780566,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1166,
			"versionNonce": 798041295,
			"isDeleted": false,
			"id": "EhCOXCCA",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2054.9229336151684,
			"y": 1673.382842208708,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 26.019989013671875,
			"height": 25,
			"seed": 773694840,
			"groupIds": [
				"LfPKfwLRI6d6otSkrgPiB",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063984,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K0",
			"rawText": "K0",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "rCfn2iJkaRTpwdfbCcFGL",
			"originalText": "K0",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 723,
			"versionNonce": 865269084,
			"isDeleted": false,
			"id": "U1XVtQ3AC0WwoolJRKf9S",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2122.4663742261137,
			"y": 1757.7813139455202,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1508972664,
			"groupIds": [
				"fTqqUJ81PoWdxptgegY62",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "L2nymxYslAimYzrhDtjP5",
					"type": "arrow"
				}
			],
			"updated": 1707741780566,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 722,
			"versionNonce": 994483812,
			"isDeleted": false,
			"id": "8QY4Jw7oKCjbU0dng_P_q",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2142.3585142755283,
			"y": 1758.115063830638,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1176979832,
			"groupIds": [
				"fTqqUJ81PoWdxptgegY62",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780566,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"versionNonce": 2026105308,
			"isDeleted": false,
			"id": "octxe57GrD_HUtj-a6H8A",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2123.071114477925,
			"y": 1775.7252984284487,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 242178680,
			"groupIds": [
				"fTqqUJ81PoWdxptgegY62",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780566,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 794,
			"versionNonce": 1429025252,
			"isDeleted": false,
			"id": "bFou4vRIv36JgvepeKo_X",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2143.6390607156327,
			"y": 1719.6391422169127,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1180.5407221136436,
			"seed": 361581432,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780566,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 811,
			"versionNonce": 1155681884,
			"isDeleted": false,
			"id": "6IjvvLxSxuzktDKMFNykz",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2071.193670402754,
			"y": 1721.8511538576831,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1178.5216811076705,
			"seed": 1170545784,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780566,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 817,
			"versionNonce": 737498468,
			"isDeleted": false,
			"id": "vJb1QFzBoL0XP9Q2mql6C",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1994.6310282301254,
			"y": 1721.8511538576836,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.1368683772161603e-13,
			"height": 1178.5216811076702,
			"seed": 551210360,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780566,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 856,
			"versionNonce": 952115932,
			"isDeleted": false,
			"id": "1Xk1U8SqTTK5vGz4R1PvF",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1925.0286262550082,
			"y": 1721.8511538576836,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.684341886080802e-14,
			"height": 1181.8883461083487,
			"seed": 1343381112,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780566,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 897,
			"versionNonce": 1290602724,
			"isDeleted": false,
			"id": "-UC4IeOjmsigLn5hNlUzd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1852.4432641952433,
			"y": 1724.0446282327011,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.684341886080802e-14,
			"height": 1180.998074078317,
			"seed": 875548536,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780566,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 876,
			"versionNonce": 183461724,
			"isDeleted": false,
			"id": "0up9rIkCXcKEdVtEFI0a6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1778.8635821072626,
			"y": 1718.8681937730353,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1186.1745085379823,
			"seed": 1970741368,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780566,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 977,
			"versionNonce": 1805798500,
			"isDeleted": false,
			"id": "IS01xjAyxORd2WLWXmKK2",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1707.3408181819088,
			"y": 1720.2913093707298,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1182.1289503189232,
			"seed": 330060152,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780566,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 896,
			"versionNonce": 1338121180,
			"isDeleted": false,
			"id": "X2NljzbH5iRUNmZ4Z8YTP",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1633.6928579877326,
			"y": 1723.839793914115,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1185.4533009345473,
			"seed": 1980981880,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780566,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 782,
			"versionNonce": 434315236,
			"isDeleted": false,
			"id": "p-kv-1R3AOUrbooV7sjat",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2051.531178878674,
			"y": 1825.529551045995,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 114613624,
			"groupIds": [
				"vtDN2NNzaxtAvVipVgYXH",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "qazGCx6uq8Xc2Rau0-679",
					"type": "arrow"
				}
			],
			"updated": 1707741780566,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 781,
			"versionNonce": 1095385180,
			"isDeleted": false,
			"id": "WnO3EG8vPS8kQT4JCL9N8",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2071.4233189280885,
			"y": 1825.863300931113,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 206204536,
			"groupIds": [
				"vtDN2NNzaxtAvVipVgYXH",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780566,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 779,
			"versionNonce": 2143126372,
			"isDeleted": false,
			"id": "AJ_6oMZamWYQJi7x_SZ5e",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2052.1359191304864,
			"y": 1843.473535528924,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1323687800,
			"groupIds": [
				"vtDN2NNzaxtAvVipVgYXH",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780566,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 832,
			"versionNonce": 123327708,
			"isDeleted": false,
			"id": "yrNZ_MaGDii6EjHuFK67h",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1974.7993000339923,
			"y": 1897.120593077544,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1860907128,
			"groupIds": [
				"oj89H4mMEwLSD4yWELLdr",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "8bKGsi6TT7rGrR92nRGRD",
					"type": "arrow"
				}
			],
			"updated": 1707741780567,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 831,
			"versionNonce": 327120612,
			"isDeleted": false,
			"id": "764gpqd2zBd-z_ZH3-mS-",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1994.6914400834069,
			"y": 1897.454342962662,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1679712632,
			"groupIds": [
				"oj89H4mMEwLSD4yWELLdr",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780567,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 829,
			"versionNonce": 2139281756,
			"isDeleted": false,
			"id": "P9W2lP0TvCaCnm1UopxQC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1975.4040402858047,
			"y": 1915.0645775604735,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 230912632,
			"groupIds": [
				"oj89H4mMEwLSD4yWELLdr",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780567,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 905,
			"versionNonce": 1370946148,
			"isDeleted": false,
			"id": "jAXhSOUeb2xsc20dEKigZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1903.6207996805254,
			"y": 1967.7173150808771,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1117676408,
			"groupIds": [
				"3Z1i-fHHQVA7CW1vykC1I",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780567,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 905,
			"versionNonce": 85413340,
			"isDeleted": false,
			"id": "vNxrz7kfnbBKc0vkRsUvy",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1923.51293972994,
			"y": 1968.051064965995,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1626551416,
			"groupIds": [
				"3Z1i-fHHQVA7CW1vykC1I",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780567,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 903,
			"versionNonce": 1966214628,
			"isDeleted": false,
			"id": "W7VIv5C_irLDbSHsgxI-J",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1904.2255399323374,
			"y": 1985.6612995638066,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1585833336,
			"groupIds": [
				"3Z1i-fHHQVA7CW1vykC1I",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780567,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 949,
			"versionNonce": 959001180,
			"isDeleted": false,
			"id": "JHABJaoGgCcdMMbDp3gso",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1830.7445484456932,
			"y": 2034.3367569713464,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1486517880,
			"groupIds": [
				"U_gI5Yq7CgLonjX_SvXGU",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780567,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 949,
			"versionNonce": 788443492,
			"isDeleted": false,
			"id": "0w5JKRNo4eF8wKN8_OX30",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1850.6366884951078,
			"y": 2034.6705068564643,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 603252600,
			"groupIds": [
				"U_gI5Yq7CgLonjX_SvXGU",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780567,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 947,
			"versionNonce": 1250592476,
			"isDeleted": false,
			"id": "xjRJqZt9pJBws0d4FUsho",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1831.3492886975052,
			"y": 2052.280741454276,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1557739640,
			"groupIds": [
				"U_gI5Yq7CgLonjX_SvXGU",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780567,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 996,
			"versionNonce": 1584063716,
			"isDeleted": false,
			"id": "_7cF3A7tO1UKhNR3Gq6O8",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1759.1988211152786,
			"y": 2105.5290488446717,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 870935416,
			"groupIds": [
				"uQnnPVSeTb4sPr6Yan1pu",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "qdqB5LUQJNjJg2QZxRkoP",
					"type": "arrow"
				}
			],
			"updated": 1707741780567,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 995,
			"versionNonce": 1036864348,
			"isDeleted": false,
			"id": "B_IA4ajxJ8R244B3eMjgd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1779.0909611646932,
			"y": 2105.8627987297896,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 60636280,
			"groupIds": [
				"uQnnPVSeTb4sPr6Yan1pu",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780567,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"versionNonce": 1225042020,
			"isDeleted": false,
			"id": "sFqKlq1Qr60aobpgcFSJ5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1759.8035613670907,
			"y": 2123.473033327602,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 783215992,
			"groupIds": [
				"uQnnPVSeTb4sPr6Yan1pu",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780567,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1062,
			"versionNonce": 893616092,
			"isDeleted": false,
			"id": "CxyUxnrQ_iTX2GK4cp9ey",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1685.3777065154684,
			"y": 2175.400878081361,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1315077752,
			"groupIds": [
				"wx8Y_riwntapN1hwPu8Fj",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780567,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1062,
			"versionNonce": 1385823204,
			"isDeleted": false,
			"id": "TTQNbypHAar1A5IK_cQG_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1705.2698465648832,
			"y": 2175.734627966479,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 863760248,
			"groupIds": [
				"wx8Y_riwntapN1hwPu8Fj",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780567,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1060,
			"versionNonce": 956245084,
			"isDeleted": false,
			"id": "55dUzef5WtpvxSgmktWeF",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1685.9824467672804,
			"y": 2193.3448625642895,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1983856760,
			"groupIds": [
				"wx8Y_riwntapN1hwPu8Fj",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780567,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1115,
			"versionNonce": 892919652,
			"isDeleted": false,
			"id": "Qkz3YQeAKsrlPDgYwrwIO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1613.0575889393817,
			"y": 2243.176446552696,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1672246136,
			"groupIds": [
				"JR54Pu773SS2OLJ9ZA-ks",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "2HPZcFXWFN4sm41IZlRAR",
					"type": "arrow"
				}
			],
			"updated": 1707741780567,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1114,
			"versionNonce": 2127706332,
			"isDeleted": false,
			"id": "dX75C_WMxAtaxNoMuv4Ef",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1632.9497289887966,
			"y": 2243.5101964378136,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1438598264,
			"groupIds": [
				"JR54Pu773SS2OLJ9ZA-ks",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780567,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1112,
			"versionNonce": 959402724,
			"isDeleted": false,
			"id": "VL1mcArz1xcJjheUAoOOV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1613.6623291911937,
			"y": 2261.1204310356243,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 2135946616,
			"groupIds": [
				"JR54Pu773SS2OLJ9ZA-ks",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780567,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1365,
			"versionNonce": 1058766095,
			"isDeleted": false,
			"id": "L2nymxYslAimYzrhDtjP5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2164.7164468650353,
			"y": 1776.5022946789995,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 60.26375886637925,
			"height": 0,
			"seed": 2022348408,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063984,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "U1XVtQ3AC0WwoolJRKf9S",
				"gap": 2.200651626039871,
				"focus": -0.013167495614155231
			},
			"endBinding": {
				"elementId": "fiGe9PVwne0VI7no_iPEM",
				"gap": 6.40790722850852,
				"focus": -0.049760587302530974
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
					60.26375886637925,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 1831,
			"versionNonce": 1570555215,
			"isDeleted": false,
			"id": "qazGCx6uq8Xc2Rau0-679",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2093.125811597175,
			"y": 1841.5071360113307,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 131.86273991917687,
			"height": 1.1826254701272774,
			"seed": 283182968,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063984,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "p-kv-1R3AOUrbooV7sjat",
				"gap": 1.5452117056192947,
				"focus": -0.16640123725007325
			},
			"endBinding": {
				"elementId": "-q_K0iFtSBNrzxYpdRfgr",
				"gap": 7.883837587518883,
				"focus": -0.05082044618154638
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
					131.86273991917687,
					1.1826254701272774
				]
			]
		},
		{
			"type": "arrow",
			"version": 1442,
			"versionNonce": 1348498351,
			"isDeleted": false,
			"id": "w1OM5x85RSWstZRgqi_AI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1870.1327150970121,
			"y": 2052.7719276356165,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 354.71043450707725,
			"height": 0,
			"seed": 390158456,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063985,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "H7jw37-9vW9YTXU82mC-Z",
				"gap": 7.319150367055045,
				"focus": -0.05634110713855775
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
			"version": 1435,
			"versionNonce": 1653876175,
			"isDeleted": false,
			"id": "6quI4W4AUIuXV-pP6eqvi",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1942.6562735383948,
			"y": 1985.1808235331728,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 281.98387008409486,
			"height": 0,
			"seed": 1869580664,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063985,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "KYRWUnDUnTYThy02EryTa",
				"gap": 6.527836320438837,
				"focus": -0.027762806786333444
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
					281.98387008409486,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 2070,
			"versionNonce": 236518799,
			"isDeleted": false,
			"id": "8bKGsi6TT7rGrR92nRGRD",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2015.848721046874,
			"y": 1915.0459189496914,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 209.85271815693773,
			"height": 4.547473508864641e-13,
			"seed": 1689229944,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063985,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "yrNZ_MaGDii6EjHuFK67h",
				"gap": 1,
				"focus": -0.05510857181166883
			},
			"endBinding": {
				"elementId": "vDKwRGiO5jKwS7pfC_iZQ",
				"gap": 6.8159053336958095,
				"focus": -0.08103286603432949
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
					209.85271815693773,
					4.547473508864641e-13
				]
			]
		},
		{
			"type": "arrow",
			"version": 2141,
			"versionNonce": 1007828495,
			"isDeleted": false,
			"id": "qdqB5LUQJNjJg2QZxRkoP",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1800.9169815427226,
			"y": 2123.7702973877176,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 421.29242196120185,
			"height": 9.094947017729282e-13,
			"seed": 969247608,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063985,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "_7cF3A7tO1UKhNR3Gq6O8",
				"gap": 1.6687394145621965,
				"focus": -0.03845545064491617
			},
			"endBinding": {
				"elementId": "7XIYeXd1nK3bwXKXVfwO_",
				"gap": 10.30794103358312,
				"focus": -0.04726930172803499
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
					421.29242196120185,
					9.094947017729282e-13
				]
			]
		},
		{
			"type": "arrow",
			"version": 1539,
			"versionNonce": 1583195183,
			"isDeleted": false,
			"id": "KO61PiFqfwc4Wb_G_zKjH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1723.8799081129146,
			"y": 2193.5645690420733,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 502.1029634316528,
			"height": 4.547473508864641e-13,
			"seed": 955604088,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063985,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "uqvAH6gq-HKWFCIYNY5DJ",
				"gap": 5.185108398361081,
				"focus": -0.013225333629782614
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
					502.1029634316528,
					4.547473508864641e-13
				]
			]
		},
		{
			"type": "arrow",
			"version": 2249,
			"versionNonce": 1603773551,
			"isDeleted": false,
			"id": "2HPZcFXWFN4sm41IZlRAR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1654.455163519776,
			"y": 2262.141211195767,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 569.6970580147752,
			"height": 0,
			"seed": 1141050744,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063985,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "Qkz3YQeAKsrlPDgYwrwIO",
				"gap": 1.3481535675125542,
				"focus": -0.00031699972099230117
			},
			"endBinding": {
				"elementId": "XquJ4yfIkdFSgR0MEBntg",
				"gap": 9.741362242541072,
				"focus": 0.03105445781696236
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
					569.6970580147752,
					0
				]
			]
		},
		{
			"type": "line",
			"version": 885,
			"versionNonce": 159854428,
			"isDeleted": false,
			"id": "UUpR-l1UiFyrFx9grqXrl",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1558.4104896919546,
			"y": 1727.447622424626,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1180.5407221136436,
			"seed": 1681038968,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780567,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 902,
			"versionNonce": 424346724,
			"isDeleted": false,
			"id": "x3z_EsELuKDjcVcC3_ySQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1485.965099379076,
			"y": 1729.6596340653973,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1178.5216811076705,
			"seed": 1514671992,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780567,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 908,
			"versionNonce": 941679580,
			"isDeleted": false,
			"id": "T_JfkplWHF4aTh3iUXHJZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1409.4024572064473,
			"y": 1729.6596340653973,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.1368683772161603e-13,
			"height": 1178.5216811076702,
			"seed": 780623992,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780567,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 947,
			"versionNonce": 28628964,
			"isDeleted": false,
			"id": "BnEL3Q2Y7UceZ7SeEZmCr",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1339.8000552313304,
			"y": 1729.6596340653973,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.684341886080802e-14,
			"height": 1181.8883461083487,
			"seed": 1085575544,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780567,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 988,
			"versionNonce": 1116735580,
			"isDeleted": false,
			"id": "yTz2UVJzDNR-o7Y1E9x0j",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1267.2146931715654,
			"y": 1731.8531084404144,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.684341886080802e-14,
			"height": 1180.998074078317,
			"seed": 1477681784,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780567,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 967,
			"versionNonce": 1956133732,
			"isDeleted": false,
			"id": "24Kv-6H2sSXazAqhtdMLQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1193.6350110835845,
			"y": 1726.6766739807495,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1186.1745085379823,
			"seed": 862491512,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780568,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1068,
			"versionNonce": 1822858460,
			"isDeleted": false,
			"id": "UTcMG1Pbc_XhleyKcrStQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1122.1122471582307,
			"y": 1728.0997895784435,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1182.1289503189232,
			"seed": 418866296,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780568,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 987,
			"versionNonce": 205729508,
			"isDeleted": false,
			"id": "SnqmUPnv1tPK6ir9EWIrt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1048.4642869640545,
			"y": 1731.6482741218292,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1185.4533009345473,
			"seed": 1719932280,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780568,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 835,
			"versionNonce": 804692316,
			"isDeleted": false,
			"id": "2pqI9WTc0_vk-KQ0v-VK9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1540.2572969379078,
			"y": 2312.679056983703,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 559064696,
			"groupIds": [
				"4tT8MI8ixZsMwkwgtFdJY",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "1as3NPZSaOia8sCXFhzOD",
					"type": "arrow"
				}
			],
			"updated": 1707741780568,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 834,
			"versionNonce": 1766044260,
			"isDeleted": false,
			"id": "fBv_vSTJ1gcnq7bKWz0ao",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1560.1494369873224,
			"y": 2313.012806868821,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 103225208,
			"groupIds": [
				"4tT8MI8ixZsMwkwgtFdJY",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780568,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 832,
			"versionNonce": 64099804,
			"isDeleted": false,
			"id": "5NXRoi4yzv5a0D1SGvO2p",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1540.8620371897198,
			"y": 2330.6230414666315,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 423979128,
			"groupIds": [
				"4tT8MI8ixZsMwkwgtFdJY",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780568,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 895,
			"versionNonce": 1785185764,
			"isDeleted": false,
			"id": "L4vGg191GsbtJbbdeT1QN",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1467.8751111097185,
			"y": 2380.4272940841765,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 913414520,
			"groupIds": [
				"EOvDV-L4Npa7pZfvXiypw",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "3AYrTgSryOOuq1BYM4tmz",
					"type": "arrow"
				}
			],
			"updated": 1707741780568,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 894,
			"versionNonce": 625670748,
			"isDeleted": false,
			"id": "dUkxHiXM8nvvusm09Y2E9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1487.7672511591331,
			"y": 2380.7610439692944,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 552577656,
			"groupIds": [
				"EOvDV-L4Npa7pZfvXiypw",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780568,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 892,
			"versionNonce": 1690134884,
			"isDeleted": false,
			"id": "R5tgKwocNV8t1FG4ryT_a",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1468.4798513615306,
			"y": 2398.371278567107,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 327392120,
			"groupIds": [
				"EOvDV-L4Npa7pZfvXiypw",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780568,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 946,
			"versionNonce": 1597198044,
			"isDeleted": false,
			"id": "XQ4gAuol4nH0s8pEZogNE",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1389.6962417842867,
			"y": 2452.018336115727,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1349610616,
			"groupIds": [
				"qSfp4f0unbovrwPz83KEQ",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "CC42bZSOjSVC1ZcTZzMoY",
					"type": "arrow"
				}
			],
			"updated": 1707741780568,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 945,
			"versionNonce": 1536335076,
			"isDeleted": false,
			"id": "KTF-CQ5ZaXbLMPsG8Xxzt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1409.5883818337013,
			"y": 2452.352086000845,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 830283128,
			"groupIds": [
				"qSfp4f0unbovrwPz83KEQ",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780568,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 943,
			"versionNonce": 1377637212,
			"isDeleted": false,
			"id": "ZzELWCyuAmOQ3fjY3WrJI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1390.3009820360987,
			"y": 2469.9623205986554,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 938126968,
			"groupIds": [
				"qSfp4f0unbovrwPz83KEQ",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780568,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1017,
			"versionNonce": 947216484,
			"isDeleted": false,
			"id": "hd86F_AI1lmpVUCl0rx7v",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1321.4117223923197,
			"y": 2522.6150581190595,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 478027640,
			"groupIds": [
				"-brCFejoqnYh2NTiQKTE_",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780568,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1017,
			"versionNonce": 1012549596,
			"isDeleted": false,
			"id": "e45PgT9egwP5fLHPB552i",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1341.3038624417343,
			"y": 2522.9488080041774,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1601925240,
			"groupIds": [
				"-brCFejoqnYh2NTiQKTE_",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780568,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1015,
			"versionNonce": 53720036,
			"isDeleted": false,
			"id": "O4fsJ_knoD2yUESaZn61s",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1322.0164626441317,
			"y": 2540.559042601988,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1487315320,
			"groupIds": [
				"-brCFejoqnYh2NTiQKTE_",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780568,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1061,
			"versionNonce": 1107094620,
			"isDeleted": false,
			"id": "YZ_Qn5WCt4NGhI5VZ4_Qs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1248.5354711574876,
			"y": 2589.2345000095283,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1195618936,
			"groupIds": [
				"5vdWARafnTSWffnEZy_vk",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780568,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1061,
			"versionNonce": 433821540,
			"isDeleted": false,
			"id": "TEKG1lNabwYtZFcw6f_ka",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1268.4276112069022,
			"y": 2589.568249894646,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1645650808,
			"groupIds": [
				"5vdWARafnTSWffnEZy_vk",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780568,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1059,
			"versionNonce": 886505692,
			"isDeleted": false,
			"id": "1xPnJFZn6kWqZpw8X0zo5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1249.1402114092996,
			"y": 2607.1784844924587,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1734571128,
			"groupIds": [
				"5vdWARafnTSWffnEZy_vk",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780568,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1108,
			"versionNonce": 1757088484,
			"isDeleted": false,
			"id": "6FHpOI2RAdEDn0JqR2x83",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1176.989743827073,
			"y": 2660.4267918828536,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 753804664,
			"groupIds": [
				"grKq_SNp8hG1zwkCSvWp0",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "0pihcj_7z2NjOtR-1_N5P",
					"type": "arrow"
				}
			],
			"updated": 1707741780568,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1107,
			"versionNonce": 1551533404,
			"isDeleted": false,
			"id": "UC4qBtnLKDPpbq96kSId7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1196.8818838764876,
			"y": 2660.7605417679715,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 804959864,
			"groupIds": [
				"grKq_SNp8hG1zwkCSvWp0",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780568,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1105,
			"versionNonce": 576720484,
			"isDeleted": false,
			"id": "3CsCIhLj2-OuMBGELsXWT",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1177.594484078885,
			"y": 2678.370776365784,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 625813368,
			"groupIds": [
				"grKq_SNp8hG1zwkCSvWp0",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780568,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1174,
			"versionNonce": 1043954140,
			"isDeleted": false,
			"id": "uc0izPhuN2hI9yHDnlclW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1103.1686292272632,
			"y": 2730.298621119544,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 153712760,
			"groupIds": [
				"V4xM8EiK6z56ABVyM7C0Z",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780568,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1174,
			"versionNonce": 2006491620,
			"isDeleted": false,
			"id": "HAgvYIAIChvnYomyok10P",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1123.0607692766778,
			"y": 2730.6323710046618,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 794012024,
			"groupIds": [
				"V4xM8EiK6z56ABVyM7C0Z",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780568,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1172,
			"versionNonce": 1696980572,
			"isDeleted": false,
			"id": "QDlNyWpnVCtEv970e8gtj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1103.7733694790752,
			"y": 2748.2426056024724,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1393539704,
			"groupIds": [
				"V4xM8EiK6z56ABVyM7C0Z",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780568,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1227,
			"versionNonce": 1332921700,
			"isDeleted": false,
			"id": "VS50v7dlbrt8keJEUoSf4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1030.8485116511763,
			"y": 2798.0741895908777,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 656518008,
			"groupIds": [
				"TKYd-iHJZTVWlOn7kCje-",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "FSIILL5gOD5sKxTYUPp64",
					"type": "arrow"
				}
			],
			"updated": 1707741780568,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1226,
			"versionNonce": 705802972,
			"isDeleted": false,
			"id": "5sl6YJgkI6hSRbPN9OHua",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1050.740651700591,
			"y": 2798.4079394759956,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1707965560,
			"groupIds": [
				"TKYd-iHJZTVWlOn7kCje-",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780568,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1224,
			"versionNonce": 2134669540,
			"isDeleted": false,
			"id": "BH3cta2CsmCQ-cWWGTG-a",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1031.4532519029883,
			"y": 2816.018174073806,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1624714616,
			"groupIds": [
				"TKYd-iHJZTVWlOn7kCje-",
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780568,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 2085,
			"versionNonce": 905876655,
			"isDeleted": false,
			"id": "1as3NPZSaOia8sCXFhzOD",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1582.50736957683,
			"y": 2331.4000377171815,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 647.5015544874284,
			"height": 9.094947017729282e-13,
			"seed": 293781112,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063985,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "2pqI9WTc0_vk-KQ0v-VK9",
				"gap": 2.200651626040326,
				"focus": -0.013167495614201507
			},
			"endBinding": {
				"elementId": "rAWjJE2Opt3uSDTAGzt8O",
				"gap": 3.4134063665405847,
				"focus": -0.01985900339412231
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
					647.5015544874284,
					-9.094947017729282e-13
				]
			]
		},
		{
			"type": "arrow",
			"version": 2138,
			"versionNonce": 1326871791,
			"isDeleted": false,
			"id": "3AYrTgSryOOuq1BYM4tmz",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1509.4697438282194,
			"y": 2396.4048790495126,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 714.0560769207511,
			"height": 0,
			"seed": 680800120,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063986,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "L4vGg191GsbtJbbdeT1QN",
				"gap": 1.5452117056190673,
				"focus": -0.15777915645288748
			},
			"endBinding": {
				"elementId": "MtKOuXJHNqh170gANjSoH",
				"gap": 10.031421231197783,
				"focus": -0.01472975935872883
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
					714.0560769207511,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 1606,
			"versionNonce": 608225103,
			"isDeleted": false,
			"id": "RQCEgrlD6ukFUj7BjCegq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1287.9236378088065,
			"y": 2607.6696706737985,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 936.7562957624011,
			"height": 4.547473508864641e-13,
			"seed": 508526712,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063986,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "fAS1fFhroS_67Zul7nxiO",
				"gap": 9.51658387081352,
				"focus": -0.026439523230224946
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
					936.7562957624011,
					4.547473508864641e-13
				]
			]
		},
		{
			"type": "arrow",
			"version": 1631,
			"versionNonce": 1785267567,
			"isDeleted": false,
			"id": "B6TpUIz6-Pp65W9N-p4r7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1360.447196250189,
			"y": 2540.0785665713556,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 866.016749620929,
			"height": 4.547473508864641e-13,
			"seed": 1115206008,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063986,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "fHTWdjLqNvWhUG2npJjyO",
				"gap": 8.087616137266195,
				"focus": -0.1169228047525948
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
					866.016749620929,
					-4.547473508864641e-13
				]
			]
		},
		{
			"type": "arrow",
			"version": 2345,
			"versionNonce": 123946287,
			"isDeleted": false,
			"id": "CC42bZSOjSVC1ZcTZzMoY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1430.7456627971685,
			"y": 2469.9436619878743,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 792.2058479525342,
			"height": 4.547473508864641e-13,
			"seed": 1280557688,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063986,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "XQ4gAuol4nH0s8pEZogNE",
				"gap": 1,
				"focus": -0.05510857181166589
			},
			"endBinding": {
				"elementId": "sk9A8Noa-LO2x01WKYt1B",
				"gap": 11.60005125868156,
				"focus": -0.13050567004240526
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
					792.2058479525342,
					-4.547473508864641e-13
				]
			]
		},
		{
			"type": "arrow",
			"version": 2421,
			"versionNonce": 1923855791,
			"isDeleted": false,
			"id": "0pihcj_7z2NjOtR-1_N5P",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1218.7079042545172,
			"y": 2678.6680404259005,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1003.078048355191,
			"height": 0,
			"seed": 1789178744,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063987,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "6FHpOI2RAdEDn0JqR2x83",
				"gap": 1.668739414562424,
				"focus": -0.03845545064486584
			},
			"endBinding": {
				"elementId": "v4WYz0EhbAfVyS_1r6G5m",
				"gap": 11.416244804097005,
				"focus": -0.05705491177786825
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
			"version": 1698,
			"versionNonce": 1579624399,
			"isDeleted": false,
			"id": "bkrFWh3clphRHulrsRkvc",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1141.6708308247091,
			"y": 2748.4623120802553,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1081.5621122657492,
			"height": 4.547473508864641e-13,
			"seed": 1404011640,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063987,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "C-ASdwnj37rH2VYwg1e4d",
				"gap": 9.969254323346831,
				"focus": 0.016676250278591463
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
					1081.5621122657492,
					4.547473508864641e-13
				]
			]
		},
		{
			"type": "arrow",
			"version": 2544,
			"versionNonce": 206356495,
			"isDeleted": false,
			"id": "FSIILL5gOD5sKxTYUPp64",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1073.6930767123206,
			"y": 2817.038954233949,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1149.5398663781377,
			"height": 0,
			"seed": 1429747064,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063988,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "VS50v7dlbrt8keJEUoSf4",
				"gap": 2.7951440482625003,
				"focus": -0.0003169997209923011
			},
			"endBinding": {
				"elementId": "DN3mQWyQJdJr83yP3Lmdq",
				"gap": 9.996128968351513,
				"focus": 0.021268847767112894
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
					1149.5398663781377,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1308,
			"versionNonce": 467298652,
			"isDeleted": false,
			"id": "Wf3_j49Z6gGw4J5KgxxRV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2105.323309752661,
			"y": 2907.5713133199806,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 515862280,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "DfbxNeJX"
				}
			],
			"updated": 1707741780569,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 843,
			"versionNonce": 1952475748,
			"isDeleted": false,
			"id": "DfbxNeJX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2123.745184752661,
			"y": 2929.5713133199806,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1779191304,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780569,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ16",
			"rawText": "δ16",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "Wf3_j49Z6gGw4J5KgxxRV",
			"originalText": "δ16",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1361,
			"versionNonce": 1341971932,
			"isDeleted": false,
			"id": "BSFT2T101TwhhxiKVe_My",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1957.1029896569974,
			"y": 2909.285258432744,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 375737608,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "vmAActkJ"
				}
			],
			"updated": 1707741780569,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 897,
			"versionNonce": 1630371300,
			"isDeleted": false,
			"id": "vmAActkJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1975.5248646569974,
			"y": 2931.285258432744,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1833331720,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780569,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ18",
			"rawText": "δ18",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "BSFT2T101TwhhxiKVe_My",
			"originalText": "δ18",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1282,
			"versionNonce": 819774044,
			"isDeleted": false,
			"id": "rL0Qg5UyoF9k-YHbN0Of0",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2030.2915063683495,
			"y": 2909.2852584327447,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 682339080,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "bKtOOURV"
				}
			],
			"updated": 1707741780569,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 815,
			"versionNonce": 1779179876,
			"isDeleted": false,
			"id": "bKtOOURV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2048.7133813683495,
			"y": 2931.2852584327447,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1662061064,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780569,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ17",
			"rawText": "δ17",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "rL0Qg5UyoF9k-YHbN0Of0",
			"originalText": "δ17",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1320,
			"versionNonce": 625743580,
			"isDeleted": false,
			"id": "LFrxbZSU3KuTY7f1b-Kp9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1884.797860029949,
			"y": 2908.290938404529,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 124946696,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "BMj8hadh"
				}
			],
			"updated": 1707741780569,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 855,
			"versionNonce": 910841060,
			"isDeleted": false,
			"id": "BMj8hadh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1903.219735029949,
			"y": 2930.290938404529,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1095510024,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780569,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ19",
			"rawText": "δ19",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "LFrxbZSU3KuTY7f1b-Kp9",
			"originalText": "δ19",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1324,
			"versionNonce": 1776081756,
			"isDeleted": false,
			"id": "18vfJeNEynwkDg6CcKABe",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1741.1140976549966,
			"y": 2908.995569395849,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1822025480,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "iz2jqyyo"
				}
			],
			"updated": 1707741780569,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 859,
			"versionNonce": 1400248420,
			"isDeleted": false,
			"id": "iz2jqyyo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1759.5359726549966,
			"y": 2930.995569395849,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 98027016,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780569,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ21",
			"rawText": "δ21",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "18vfJeNEynwkDg6CcKABe",
			"originalText": "δ21",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1310,
			"versionNonce": 1491144668,
			"isDeleted": false,
			"id": "GBMbU_5YdyHVsdFHx5hPF",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1668.9199009718598,
			"y": 2907.5863074132085,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 436323592,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "QLAvtCSi"
				}
			],
			"updated": 1707741780569,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 849,
			"versionNonce": 1834839012,
			"isDeleted": false,
			"id": "QLAvtCSi",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1687.3417759718598,
			"y": 2929.5863074132085,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 915661832,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780569,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ22",
			"rawText": "δ22",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "GBMbU_5YdyHVsdFHx5hPF",
			"originalText": "δ22",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1327,
			"versionNonce": 845853788,
			"isDeleted": false,
			"id": "bxaC3FFhYvLcePXiYr9wN",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1595.4416952236122,
			"y": 2908.870316478319,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1502225160,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "sZQkBgg8"
				}
			],
			"updated": 1707741780569,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 862,
			"versionNonce": 101601124,
			"isDeleted": false,
			"id": "sZQkBgg8",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1613.8635702236122,
			"y": 2930.870316478319,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1633714696,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780569,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ23",
			"rawText": "δ23",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "bxaC3FFhYvLcePXiYr9wN",
			"originalText": "δ23",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1326,
			"versionNonce": 1682688220,
			"isDeleted": false,
			"id": "rbNA7Az5lEJtsK3y4dyYV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1812.313974309917,
			"y": 2909.2852584327447,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 2098397448,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "nl7BN3bl"
				}
			],
			"updated": 1707741780569,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 865,
			"versionNonce": 769049316,
			"isDeleted": false,
			"id": "nl7BN3bl",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1830.735849309917,
			"y": 2931.2852584327447,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 471703560,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780569,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ20",
			"rawText": "δ20",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "rbNA7Az5lEJtsK3y4dyYV",
			"originalText": "δ20",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1659,
			"versionNonce": 1377193308,
			"isDeleted": false,
			"id": "9v8kbygnUpaIMM6mscDy5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1015.0748159453206,
			"y": 2911.147861890189,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1250674696,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "GLzqKCpi"
				}
			],
			"updated": 1707741780569,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1194,
			"versionNonce": 994362980,
			"isDeleted": false,
			"id": "GLzqKCpi",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1033.4966909453206,
			"y": 2933.147861890189,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1826981640,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780569,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ31",
			"rawText": "δ31",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "9v8kbygnUpaIMM6mscDy5",
			"originalText": "δ31",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1564,
			"versionNonce": 488391132,
			"isDeleted": false,
			"id": "MnKxisVMqzndyyTj57aye",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1453.824467748911,
			"y": 2908.7194199556793,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1001350664,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "bZ1exOOw"
				}
			],
			"updated": 1707741780569,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1103,
			"versionNonce": 52845028,
			"isDeleted": false,
			"id": "bZ1exOOw",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1472.246342748911,
			"y": 2930.7194199556793,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1944413448,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780569,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ25",
			"rawText": "δ25",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "MnKxisVMqzndyyTj57aye",
			"originalText": "δ25",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1486,
			"versionNonce": 1819256412,
			"isDeleted": false,
			"id": "LIaWS30gWSa42i-3SGR9Z",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1527.012984460263,
			"y": 2908.7194199556793,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1392739336,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "4k6cMl4E"
				}
			],
			"updated": 1707741780569,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1026,
			"versionNonce": 277445988,
			"isDeleted": false,
			"id": "4k6cMl4E",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1545.434859460263,
			"y": 2930.7194199556793,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 117818120,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780569,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ24",
			"rawText": "δ24",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "LIaWS30gWSa42i-3SGR9Z",
			"originalText": "δ24",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1511,
			"versionNonce": 887257820,
			"isDeleted": false,
			"id": "f-fL5ouNOP4uGvbnNU530",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1381.9199601026694,
			"y": 2908.7194199556793,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 510140936,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "U6IbMo52"
				}
			],
			"updated": 1707741780569,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1047,
			"versionNonce": 1555837156,
			"isDeleted": false,
			"id": "U6IbMo52",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1400.3418351026694,
			"y": 2930.7194199556793,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 2015797512,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780569,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ26",
			"rawText": "δ26",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "f-fL5ouNOP4uGvbnNU530",
			"originalText": "δ26",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1512,
			"versionNonce": 17219420,
			"isDeleted": false,
			"id": "J9_2rjBjbCh9cSORJyB9w",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1234.258917614853,
			"y": 2907.4354108905677,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 868040712,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "3nq5qDqf"
				}
			],
			"updated": 1707741780569,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1049,
			"versionNonce": 122451044,
			"isDeleted": false,
			"id": "3nq5qDqf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1252.680792614853,
			"y": 2929.4354108905677,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 556269320,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780569,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ28",
			"rawText": "δ28",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "J9_2rjBjbCh9cSORJyB9w",
			"originalText": "δ28",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1495,
			"versionNonce": 959345628,
			"isDeleted": false,
			"id": "UdI4J6XOt_cSe85aoIUvy",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1161.0704009035007,
			"y": 2910.003429020791,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 820174344,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "lm0S67D9"
				}
			],
			"updated": 1707741780569,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1034,
			"versionNonce": 235423716,
			"isDeleted": false,
			"id": "lm0S67D9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1179.4922759035007,
			"y": 2932.003429020791,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1676270856,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780570,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ29",
			"rawText": "δ29",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "UdI4J6XOt_cSe85aoIUvy",
			"originalText": "δ29",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1510,
			"versionNonce": 1802213468,
			"isDeleted": false,
			"id": "F0EtiSMvWGjo3nU3O1TEt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1086.5978751270368,
			"y": 2911.2874380859025,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1001978888,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "fXCvFgYU"
				}
			],
			"updated": 1707741780570,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1048,
			"versionNonce": 83733348,
			"isDeleted": false,
			"id": "fXCvFgYU",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1105.0197501270368,
			"y": 2933.2874380859025,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 709638920,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780570,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ30",
			"rawText": "δ30",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "F0EtiSMvWGjo3nU3O1TEt",
			"originalText": "δ30",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1519,
			"versionNonce": 328215772,
			"isDeleted": false,
			"id": "b0pZtZeRK_33HtSTX2xti",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1307.447434326206,
			"y": 2908.7194199556793,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 35625480,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "12cG9wx9"
				}
			],
			"updated": 1707741780570,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1055,
			"versionNonce": 1316658916,
			"isDeleted": false,
			"id": "12cG9wx9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1325.869309326206,
			"y": 2930.7194199556793,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1714362632,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780570,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ27",
			"rawText": "δ27",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "b0pZtZeRK_33HtSTX2xti",
			"originalText": "δ27",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1505,
			"versionNonce": 1663971676,
			"isDeleted": false,
			"id": "fiGe9PVwne0VI7no_iPEM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2231.388112959923,
			"y": 1740.8104347107135,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 444807288,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "dY8qO96S"
				},
				{
					"id": "L2nymxYslAimYzrhDtjP5",
					"type": "arrow"
				}
			],
			"updated": 1707741780570,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1047,
			"versionNonce": 1393369700,
			"isDeleted": false,
			"id": "dY8qO96S",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2243.950612959923,
			"y": 1762.8104347107135,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1869965688,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780570,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK16",
			"rawText": "SK16",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "fiGe9PVwne0VI7no_iPEM",
			"originalText": "SK16",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1515,
			"versionNonce": 160933340,
			"isDeleted": false,
			"id": "-q_K0iFtSBNrzxYpdRfgr",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2232.872389103871,
			"y": 1807.3390349348279,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 687438456,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "zouekWSS"
				},
				{
					"id": "qazGCx6uq8Xc2Rau0-679",
					"type": "arrow"
				}
			],
			"updated": 1707741780570,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1063,
			"versionNonce": 964900324,
			"isDeleted": false,
			"id": "zouekWSS",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2245.434889103871,
			"y": 1829.3390349348279,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 433286008,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780570,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK17",
			"rawText": "SK17",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "-q_K0iFtSBNrzxYpdRfgr",
			"originalText": "SK17",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1545,
			"versionNonce": 2078181980,
			"isDeleted": false,
			"id": "vDKwRGiO5jKwS7pfC_iZQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2232.5173445375076,
			"y": 1878.2908015045248,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 474430584,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "g0lBIRp7"
				},
				{
					"id": "8bKGsi6TT7rGrR92nRGRD",
					"type": "arrow"
				}
			],
			"updated": 1707741780570,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1094,
			"versionNonce": 518707556,
			"isDeleted": false,
			"id": "g0lBIRp7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2245.0798445375076,
			"y": 1900.2908015045248,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 572059000,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780570,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK18",
			"rawText": "SK18",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "vDKwRGiO5jKwS7pfC_iZQ",
			"originalText": "SK18",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1579,
			"versionNonce": 1020583644,
			"isDeleted": false,
			"id": "H7jw37-9vW9YTXU82mC-Z",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2232.1622999711444,
			"y": 2016.8563299929056,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1150058104,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "7IZu0Qu9"
				},
				{
					"id": "w1OM5x85RSWstZRgqi_AI",
					"type": "arrow"
				}
			],
			"updated": 1707741780570,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1125,
			"versionNonce": 1318194404,
			"isDeleted": false,
			"id": "7IZu0Qu9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2244.7247999711444,
			"y": 2038.8563299929056,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1415966584,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780570,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK20",
			"rawText": "SK20",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "H7jw37-9vW9YTXU82mC-Z",
			"originalText": "SK20",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1554,
			"versionNonce": 621585244,
			"isDeleted": false,
			"id": "KYRWUnDUnTYThy02EryTa",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2231.1679799429285,
			"y": 1950.2368881024374,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1776894072,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "jl4DIr1G"
				},
				{
					"id": "6quI4W4AUIuXV-pP6eqvi",
					"type": "arrow"
				}
			],
			"updated": 1707741780570,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1104,
			"versionNonce": 2047266916,
			"isDeleted": false,
			"id": "jl4DIr1G",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2243.7304799429285,
			"y": 1972.2368881024374,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1960472952,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780570,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK19",
			"rawText": "SK19",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "KYRWUnDUnTYThy02EryTa",
			"originalText": "SK19",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1605,
			"versionNonce": 718788572,
			"isDeleted": false,
			"id": "7XIYeXd1nK3bwXKXVfwO_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2232.5173445375076,
			"y": 2088.1631411289654,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1283293816,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "PiZplHbw"
				},
				{
					"id": "qdqB5LUQJNjJg2QZxRkoP",
					"type": "arrow"
				}
			],
			"updated": 1707741780570,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1153,
			"versionNonce": 1897341924,
			"isDeleted": false,
			"id": "PiZplHbw",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2245.0798445375076,
			"y": 2110.1631411289654,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1066824568,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780570,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK21",
			"rawText": "SK21",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "7XIYeXd1nK3bwXKXVfwO_",
			"originalText": "SK21",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1591,
			"versionNonce": 709393500,
			"isDeleted": false,
			"id": "uqvAH6gq-HKWFCIYNY5DJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2231.1679799429285,
			"y": 2159.114907698661,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 610878584,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "xclbhArB"
				},
				{
					"id": "KO61PiFqfwc4Wb_G_zKjH",
					"type": "arrow"
				}
			],
			"updated": 1707741780570,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1140,
			"versionNonce": 1506871140,
			"isDeleted": false,
			"id": "xclbhArB",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2243.7304799429285,
			"y": 2181.114907698661,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1757017464,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780570,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK22",
			"rawText": "SK22",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "uqvAH6gq-HKWFCIYNY5DJ",
			"originalText": "SK22",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1671,
			"versionNonce": 758157532,
			"isDeleted": false,
			"id": "XquJ4yfIkdFSgR0MEBntg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2233.8935837770923,
			"y": 2229.1970627615437,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 567051896,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "Q2nQIW0f"
				},
				{
					"id": "2HPZcFXWFN4sm41IZlRAR",
					"type": "arrow"
				}
			],
			"updated": 1707741780570,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1226,
			"versionNonce": 1753381604,
			"isDeleted": false,
			"id": "Q2nQIW0f",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2246.4560837770923,
			"y": 2251.1970627615437,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 476379000,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780570,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK23",
			"rawText": "SK23",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "XquJ4yfIkdFSgR0MEBntg",
			"originalText": "SK23",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1607,
			"versionNonce": 857871708,
			"isDeleted": false,
			"id": "rAWjJE2Opt3uSDTAGzt8O",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2233.422330430799,
			"y": 2296.7248316017804,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 486148728,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "jpQDGINe"
				},
				{
					"id": "1as3NPZSaOia8sCXFhzOD",
					"type": "arrow"
				}
			],
			"updated": 1707741780570,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1152,
			"versionNonce": 398032484,
			"isDeleted": false,
			"id": "jpQDGINe",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2245.984830430799,
			"y": 2318.7248316017804,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1598159736,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780570,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK24",
			"rawText": "SK24",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "rAWjJE2Opt3uSDTAGzt8O",
			"originalText": "SK24",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1631,
			"versionNonce": 2037320156,
			"isDeleted": false,
			"id": "MtKOuXJHNqh170gANjSoH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2233.5572419801683,
			"y": 2361.904067231316,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1432603768,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "l7ldA8uu"
				},
				{
					"id": "3AYrTgSryOOuq1BYM4tmz",
					"type": "arrow"
				}
			],
			"updated": 1707741780570,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1181,
			"versionNonce": 1615073764,
			"isDeleted": false,
			"id": "l7ldA8uu",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2246.1197419801683,
			"y": 2383.904067231316,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 690191736,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780570,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK25",
			"rawText": "SK25",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "MtKOuXJHNqh170gANjSoH",
			"originalText": "SK25",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1690,
			"versionNonce": 1126788700,
			"isDeleted": false,
			"id": "sk9A8Noa-LO2x01WKYt1B",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2234.5515620083843,
			"y": 2431.506469206432,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 734334584,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "wdyrCTnJ"
				},
				{
					"id": "CC42bZSOjSVC1ZcTZzMoY",
					"type": "arrow"
				}
			],
			"updated": 1707741780570,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1243,
			"versionNonce": 1898984804,
			"isDeleted": false,
			"id": "wdyrCTnJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2247.1140620083843,
			"y": 2453.506469206432,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1712095096,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780570,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK26",
			"rawText": "SK26",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "sk9A8Noa-LO2x01WKYt1B",
			"originalText": "SK26",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1711,
			"versionNonce": 555959004,
			"isDeleted": false,
			"id": "fAS1fFhroS_67Zul7nxiO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2234.196517442021,
			"y": 2572.7707268839713,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 675139704,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "Q0rDI7ZO"
				},
				{
					"id": "RQCEgrlD6ukFUj7BjCegq",
					"type": "arrow"
				}
			],
			"updated": 1707741780570,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1262,
			"versionNonce": 1741416676,
			"isDeleted": false,
			"id": "Q0rDI7ZO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2246.759017442021,
			"y": 2594.7707268839713,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 438108536,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780570,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK28",
			"rawText": "SK28",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "fAS1fFhroS_67Zul7nxiO",
			"originalText": "SK28",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1678,
			"versionNonce": 971933532,
			"isDeleted": false,
			"id": "fHTWdjLqNvWhUG2npJjyO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2234.5515620083843,
			"y": 2502.103191209767,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1257116280,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "1jSD1Gdu"
				},
				{
					"id": "B6TpUIz6-Pp65W9N-p4r7",
					"type": "arrow"
				}
			],
			"updated": 1707741780571,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1233,
			"versionNonce": 128265316,
			"isDeleted": false,
			"id": "1jSD1Gdu",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2247.1140620083843,
			"y": 2524.103191209767,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1098187640,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780571,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK27",
			"rawText": "SK27",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "fHTWdjLqNvWhUG2npJjyO",
			"originalText": "SK27",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1698,
			"versionNonce": 299711452,
			"isDeleted": false,
			"id": "v4WYz0EhbAfVyS_1r6G5m",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2233.202197413805,
			"y": 2642.728173425453,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 200660088,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "LzVoanOH"
				},
				{
					"id": "0pihcj_7z2NjOtR-1_N5P",
					"type": "arrow"
				}
			],
			"updated": 1707741780571,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1248,
			"versionNonce": 1921646564,
			"isDeleted": false,
			"id": "LzVoanOH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2245.764697413805,
			"y": 2664.728173425453,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1345619320,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780571,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK29",
			"rawText": "SK29",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "v4WYz0EhbAfVyS_1r6G5m",
			"originalText": "SK29",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1705,
			"versionNonce": 1392599132,
			"isDeleted": false,
			"id": "C-ASdwnj37rH2VYwg1e4d",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2233.202197413805,
			"y": 2715.029304589728,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1534400120,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "uqh7QMQo"
				},
				{
					"id": "bkrFWh3clphRHulrsRkvc",
					"type": "arrow"
				}
			],
			"updated": 1707741780571,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1259,
			"versionNonce": 1619551076,
			"isDeleted": false,
			"id": "uqh7QMQo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2245.764697413805,
			"y": 2737.029304589728,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 846956408,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780571,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK30",
			"rawText": "SK30",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "C-ASdwnj37rH2VYwg1e4d",
			"originalText": "SK30",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1671,
			"versionNonce": 355267804,
			"isDeleted": false,
			"id": "DN3mQWyQJdJr83yP3Lmdq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 2233.22907205881,
			"y": 2783.762095058031,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 562813048,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "XxsKYs7J"
				},
				{
					"id": "FSIILL5gOD5sKxTYUPp64",
					"type": "arrow"
				}
			],
			"updated": 1707741780571,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1231,
			"versionNonce": 1475237604,
			"isDeleted": false,
			"id": "XxsKYs7J",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 2245.79157205881,
			"y": 2805.762095058031,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1282017656,
			"groupIds": [
				"pmZJZjh6CBQkQvxlf5IPS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780571,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK31",
			"rawText": "SK31",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "DN3mQWyQJdJr83yP3Lmdq",
			"originalText": "SK31",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1506,
			"versionNonce": 636615004,
			"isDeleted": false,
			"id": "l84QBhAJeOR_X4D6x66WL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -445.1755988557535,
			"y": 3276.530477530079,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 72,
			"height": 68,
			"seed": 196767710,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "kppR4KGA"
				}
			],
			"updated": 1707741780571,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1407,
			"versionNonce": 133686831,
			"isDeleted": false,
			"id": "kppR4KGA",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -424.82558512284334,
			"y": 3298.030477530079,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 31.299972534179688,
			"height": 25,
			"seed": 417121310,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063988,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K13",
			"rawText": "K13",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "l84QBhAJeOR_X4D6x66WL",
			"originalText": "K13",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1341,
			"versionNonce": 1352822236,
			"isDeleted": false,
			"id": "ImsPLQBGRUxpgx_SvcCsi",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -6.749765068172678,
			"y": 3275.6823546080045,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#99e9f2",
			"width": 72,
			"height": 68,
			"seed": 791318622,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "LkQWE1BH"
				}
			],
			"updated": 1707741780571,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1280,
			"versionNonce": 1268336719,
			"isDeleted": false,
			"id": "LkQWE1BH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 14.230245918155447,
			"y": 3297.1823546080045,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 30.03997802734375,
			"height": 25,
			"seed": 175428766,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063988,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K15",
			"rawText": "K15",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "ImsPLQBGRUxpgx_SvcCsi",
			"originalText": "K15",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1532,
			"versionNonce": 642798172,
			"isDeleted": false,
			"id": "SN1di-IZW8w1j6tUeZZ5Y",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 62.205414656233756,
			"y": 3277.530477530079,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#99e9f2",
			"width": 72,
			"height": 68,
			"seed": 1147965662,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "JI13M135"
				}
			],
			"updated": 1707741780571,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1426,
			"versionNonce": 1963550319,
			"isDeleted": false,
			"id": "JI13M135",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 82.96542442185876,
			"y": 3299.030477530079,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 30.47998046875,
			"height": 25,
			"seed": 413320478,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063988,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K14",
			"rawText": "K14",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "SN1di-IZW8w1j6tUeZZ5Y",
			"originalText": "K14",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1530,
			"versionNonce": 1171105500,
			"isDeleted": false,
			"id": "TCaW8KvRrDEx0GAld2Pxh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -372.1755988557535,
			"y": 3276.530477530079,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 72,
			"height": 68,
			"seed": 680030558,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "0H2Jtr2t"
				}
			],
			"updated": 1707741780571,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1407,
			"versionNonce": 1393606799,
			"isDeleted": false,
			"id": "0H2Jtr2t",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -352.1355903108316,
			"y": 3298.030477530079,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 31.91998291015625,
			"height": 25,
			"seed": 1064211870,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063988,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K12",
			"rawText": "K12",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "TCaW8KvRrDEx0GAld2Pxh",
			"originalText": "K12",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1705,
			"versionNonce": 598502236,
			"isDeleted": false,
			"id": "oqqu7X1j6PEm50ptrSQl_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -155.4139595054545,
			"y": 3275.8996578549295,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 72,
			"height": 68,
			"seed": 377893342,
			"groupIds": [
				"uIRanoazGUI3x5gn1XkWk",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "NK4VlekC"
				}
			],
			"updated": 1707741780571,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 901,
			"versionNonce": 203917412,
			"isDeleted": false,
			"id": "NK4VlekC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -131.1327095054545,
			"y": 3297.8996578549295,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 23.4375,
			"height": 24,
			"seed": 417351198,
			"groupIds": [
				"uIRanoazGUI3x5gn1XkWk",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780571,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K9",
			"rawText": "K9",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "oqqu7X1j6PEm50ptrSQl_",
			"originalText": "K9",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1667,
			"versionNonce": 1379835868,
			"isDeleted": false,
			"id": "9UUAfCvry89LBbcV25Hp8",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -301.4139595054545,
			"y": 3276.8996578549295,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 72,
			"height": 68,
			"seed": 661508702,
			"groupIds": [
				"uIRanoazGUI3x5gn1XkWk",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "BrS6Yr74"
				}
			],
			"updated": 1707741780571,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1610,
			"versionNonce": 1197987503,
			"isDeleted": false,
			"id": "BrS6Yr74",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -276.9639549278178,
			"y": 3298.3996578549295,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 23.099990844726562,
			"height": 25,
			"seed": 1560270494,
			"groupIds": [
				"uIRanoazGUI3x5gn1XkWk",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063988,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K11",
			"rawText": "K11",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "9UUAfCvry89LBbcV25Hp8",
			"originalText": "K11",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1710,
			"versionNonce": 1234584668,
			"isDeleted": false,
			"id": "i3ydFHBd9xWOw66tiKbNh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -228.4139595054545,
			"y": 3276.8996578549295,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 72,
			"height": 68,
			"seed": 1380405982,
			"groupIds": [
				"uIRanoazGUI3x5gn1XkWk",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "HaMTIuTv"
				}
			],
			"updated": 1707741780571,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 902,
			"versionNonce": 1965277028,
			"isDeleted": false,
			"id": "HaMTIuTv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -209.9920845054545,
			"y": 3298.8996578549295,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 35.15625,
			"height": 24,
			"seed": 1641367326,
			"groupIds": [
				"uIRanoazGUI3x5gn1XkWk",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780571,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K10",
			"rawText": "K10",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "i3ydFHBd9xWOw66tiKbNh",
			"originalText": "K10",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1729,
			"versionNonce": 797268188,
			"isDeleted": false,
			"id": "KL1HZXJaOl0nqRRzrmflp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -82.4139595054545,
			"y": 3275.8996578549295,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 72,
			"height": 68,
			"seed": 1813689182,
			"groupIds": [
				"uIRanoazGUI3x5gn1XkWk",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "JFyGwwKh"
				}
			],
			"updated": 1707741780571,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1137,
			"versionNonce": 2025730788,
			"isDeleted": false,
			"id": "JFyGwwKh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -58.1327095054545,
			"y": 3297.8996578549295,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 23.4375,
			"height": 24,
			"seed": 459839390,
			"groupIds": [
				"uIRanoazGUI3x5gn1XkWk",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780571,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K8",
			"rawText": "K8",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "KL1HZXJaOl0nqRRzrmflp",
			"originalText": "K8",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1722,
			"versionNonce": 530439516,
			"isDeleted": false,
			"id": "KZesFWdsKt7udvk-ki_Q8",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 137.11479317887608,
			"y": 3274.7688381797807,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 72,
			"height": 68,
			"seed": 670036958,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "LbxLuxEI"
				}
			],
			"updated": 1707741780571,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1141,
			"versionNonce": 398341732,
			"isDeleted": false,
			"id": "LbxLuxEI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 161.39604317887608,
			"y": 3296.7688381797807,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 465684510,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780571,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K5",
			"rawText": "K5",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "KZesFWdsKt7udvk-ki_Q8",
			"originalText": "K5",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1615,
			"versionNonce": 1932644828,
			"isDeleted": false,
			"id": "oPWcSiJrNrdV5norVJ4qR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 573.2735136324255,
			"y": 3273.9207152577055,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#99e9f2",
			"width": 72,
			"height": 68,
			"seed": 382669918,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "JB9ZbqdJ"
				}
			],
			"updated": 1707741780571,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1560,
			"versionNonce": 1756833999,
			"isDeleted": false,
			"id": "JB9ZbqdJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 597.7635191255896,
			"y": 3295.4207152577055,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.019989013671875,
			"height": 25,
			"seed": 317249694,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063988,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K7",
			"rawText": "K7",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "oPWcSiJrNrdV5norVJ4qR",
			"originalText": "K7",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1765,
			"versionNonce": 156448348,
			"isDeleted": false,
			"id": "iahRiidLaYMOJ7zCHs4Xi",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 649.0300333589263,
			"y": 3271.2346115117184,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#99e9f2",
			"width": 72,
			"height": 68,
			"seed": 666899678,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "SrkfO5q3"
				}
			],
			"updated": 1707741780571,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1178,
			"versionNonce": 1365699940,
			"isDeleted": false,
			"id": "SrkfO5q3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 673.3112833589263,
			"y": 3293.2346115117184,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 1323682078,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780571,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K6",
			"rawText": "K6",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "iahRiidLaYMOJ7zCHs4Xi",
			"originalText": "K6",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1747,
			"versionNonce": 248777436,
			"isDeleted": false,
			"id": "_xrc1_nPdTZFE7W9cbvr4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 210.11479317887608,
			"y": 3274.7688381797807,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 72,
			"height": 68,
			"seed": 667612510,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "wpMsmYk9"
				}
			],
			"updated": 1707741780572,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1143,
			"versionNonce": 7053540,
			"isDeleted": false,
			"id": "wpMsmYk9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 234.39604317887608,
			"y": 3296.7688381797807,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 1002477982,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780572,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K4",
			"rawText": "K4",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "_xrc1_nPdTZFE7W9cbvr4",
			"originalText": "K4",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1607,
			"versionNonce": 1179012956,
			"isDeleted": false,
			"id": "xMOS0-Z3vj1U_k-QhJdwl",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 426.39748993195064,
			"y": 3273.789895582556,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 72,
			"height": 68,
			"seed": 1106752990,
			"groupIds": [
				"d20zzWGnT5TyM6Lmo4djV",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "sybskdfc"
				}
			],
			"updated": 1707741780572,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1308,
			"versionNonce": 1687631599,
			"isDeleted": false,
			"id": "sybskdfc",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 453.55749359406,
			"y": 3295.289895582556,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 17.67999267578125,
			"height": 25,
			"seed": 1669417502,
			"groupIds": [
				"d20zzWGnT5TyM6Lmo4djV",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063988,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K1",
			"rawText": "K1",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "xMOS0-Z3vj1U_k-QhJdwl",
			"originalText": "K1",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1569,
			"versionNonce": 1341916124,
			"isDeleted": false,
			"id": "Whr76re8xSW8tTzmUs6M4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 280.39748993195064,
			"y": 3274.789895582556,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 72,
			"height": 68,
			"seed": 2135840350,
			"groupIds": [
				"d20zzWGnT5TyM6Lmo4djV",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "HoPr1pHk"
				}
			],
			"updated": 1707741780572,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1514,
			"versionNonce": 563118351,
			"isDeleted": false,
			"id": "HoPr1pHk",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 303.45750274933346,
			"y": 3296.289895582556,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 25.879974365234375,
			"height": 25,
			"seed": 1848629918,
			"groupIds": [
				"d20zzWGnT5TyM6Lmo4djV",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063988,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K3",
			"rawText": "K3",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "Whr76re8xSW8tTzmUs6M4",
			"originalText": "K3",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1614,
			"versionNonce": 1913071708,
			"isDeleted": false,
			"id": "VNlQ6fBHl6NXw2oUb88cW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 353.39748993195064,
			"y": 3274.789895582556,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 72,
			"height": 68,
			"seed": 1188484830,
			"groupIds": [
				"d20zzWGnT5TyM6Lmo4djV",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "GwUqZiJD"
				}
			],
			"updated": 1707741780572,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1317,
			"versionNonce": 555452207,
			"isDeleted": false,
			"id": "GwUqZiJD",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 376.1474975613452,
			"y": 3296.289895582556,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 26.499984741210938,
			"height": 25,
			"seed": 567560990,
			"groupIds": [
				"d20zzWGnT5TyM6Lmo4djV",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063988,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K2",
			"rawText": "K2",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "VNlQ6fBHl6NXw2oUb88cW",
			"originalText": "K2",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1631,
			"versionNonce": 1614396636,
			"isDeleted": false,
			"id": "Ex1SUUWX4tCFqZcsQPljN",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 499.39748993195155,
			"y": 3273.789895582556,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 72,
			"height": 68,
			"seed": 1570322270,
			"groupIds": [
				"d20zzWGnT5TyM6Lmo4djV",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "kAP9Xnsz"
				}
			],
			"updated": 1707741780572,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1306,
			"versionNonce": 564185423,
			"isDeleted": false,
			"id": "kAP9Xnsz",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 522.3874954251156,
			"y": 3295.289895582556,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 26.019989013671875,
			"height": 25,
			"seed": 1651940254,
			"groupIds": [
				"d20zzWGnT5TyM6Lmo4djV",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063988,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K0",
			"rawText": "K0",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "Ex1SUUWX4tCFqZcsQPljN",
			"originalText": "K0",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 829,
			"versionNonce": 69583196,
			"isDeleted": false,
			"id": "aEqTZyeILoHae-FS4jcft",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 662.4785627250591,
			"y": 3379.688367319368,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1721595870,
			"groupIds": [
				"QdowYdfdsZbV9RAj1iBal",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "PGj2VuFEpoiXW6Lk7Y41o",
					"type": "arrow"
				}
			],
			"updated": 1707741780572,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 828,
			"versionNonce": 186028644,
			"isDeleted": false,
			"id": "w2dpvCnvBtSxeQlfnbqhb",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 682.3707027744737,
			"y": 3380.0221172044858,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 840879134,
			"groupIds": [
				"QdowYdfdsZbV9RAj1iBal",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780572,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 826,
			"versionNonce": 1159542236,
			"isDeleted": false,
			"id": "xktc_WYlaincyhYqWRLm2",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 663.0833029768706,
			"y": 3397.6323518022964,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1659607134,
			"groupIds": [
				"QdowYdfdsZbV9RAj1iBal",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780572,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 900,
			"versionNonce": 249472484,
			"isDeleted": false,
			"id": "dEWCmE0ZSAMJqu90NMMEZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 683.6512492145781,
			"y": 3341.5461955907604,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1180.5407221136436,
			"seed": 819256478,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780572,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 917,
			"versionNonce": 1345460828,
			"isDeleted": false,
			"id": "f6QosUxWULtOg0WKotGoK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 611.2058589016993,
			"y": 3343.758207231531,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1178.5216811076705,
			"seed": 831232222,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780572,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 923,
			"versionNonce": 391661924,
			"isDeleted": false,
			"id": "venOSrAcw4yh6eGg8YqCQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 534.6432167290706,
			"y": 3343.7582072315313,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.1368683772161603e-13,
			"height": 1178.5216811076702,
			"seed": 480300318,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780572,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 962,
			"versionNonce": 1614180060,
			"isDeleted": false,
			"id": "Lk8kELwphkxoBvxYPQQ61",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 465.0408147539539,
			"y": 3343.7582072315313,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.684341886080802e-14,
			"height": 1181.8883461083487,
			"seed": 260405598,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780572,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1003,
			"versionNonce": 936475876,
			"isDeleted": false,
			"id": "JXGhNBHGJpe9cpKz-l19S",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 392.45545269418847,
			"y": 3345.951681606549,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.684341886080802e-14,
			"height": 1180.998074078317,
			"seed": 1368038814,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780572,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 982,
			"versionNonce": 96219996,
			"isDeleted": false,
			"id": "CMAbePbMN6pW0yXVr954_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 318.875770606208,
			"y": 3340.775247146883,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1186.1745085379823,
			"seed": 400636382,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780572,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1083,
			"versionNonce": 1775779940,
			"isDeleted": false,
			"id": "SMkBKZ7qnBSBDVpELGWWD",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 247.3530066808545,
			"y": 3342.1983627445775,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1182.1289503189232,
			"seed": 1234849310,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780572,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1002,
			"versionNonce": 1863673820,
			"isDeleted": false,
			"id": "jSGjNLePF1gSG3UGJxj4W",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 173.70504648667804,
			"y": 3345.7468472879627,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1185.4533009345473,
			"seed": 1135008350,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780572,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 888,
			"versionNonce": 1161466852,
			"isDeleted": false,
			"id": "rNSS7zOZu6-xsqDn-99bQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 591.5433673776193,
			"y": 3447.4366044198428,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 483909278,
			"groupIds": [
				"4RRmAO15CkipH5yX62vbw",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "5CN0Eu4HCzzaHvpVQ-kus",
					"type": "arrow"
				}
			],
			"updated": 1707741780572,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 887,
			"versionNonce": 810814556,
			"isDeleted": false,
			"id": "XldLe0mvGqDnw3L4tPeZD",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 611.4355074270339,
			"y": 3447.7703543049606,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1776179934,
			"groupIds": [
				"4RRmAO15CkipH5yX62vbw",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780572,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 885,
			"versionNonce": 939947876,
			"isDeleted": false,
			"id": "Pmhp3aCnAZZ-vT48Zf-gh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 592.1481076294318,
			"y": 3465.3805889027717,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 21712670,
			"groupIds": [
				"4RRmAO15CkipH5yX62vbw",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780572,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 938,
			"versionNonce": 189407452,
			"isDeleted": false,
			"id": "yq4oLQCeXSfdpfxqiBcvy",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 514.8114885329379,
			"y": 3519.027646451392,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1066384222,
			"groupIds": [
				"24To6BehW8qcwswfdOVRq",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "2Gd9KQViWY_voLQ71fKwz",
					"type": "arrow"
				}
			],
			"updated": 1707741780572,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 937,
			"versionNonce": 1049225956,
			"isDeleted": false,
			"id": "VYd_bBbzye0MLUGVJVkdU",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 534.7036285823525,
			"y": 3519.3613963365096,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1258069918,
			"groupIds": [
				"24To6BehW8qcwswfdOVRq",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780572,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 935,
			"versionNonce": 931767644,
			"isDeleted": false,
			"id": "jys8sEJf759dwvr326ASK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 515.4162287847504,
			"y": 3536.971630934321,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1472396254,
			"groupIds": [
				"24To6BehW8qcwswfdOVRq",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780572,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1011,
			"versionNonce": 458419812,
			"isDeleted": false,
			"id": "8XxxFu4Jn0M_MLZkHGt6o",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 443.632988179471,
			"y": 3589.6243684547253,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1811140638,
			"groupIds": [
				"YRB8wf90AlCREkV7b04wc",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780572,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1011,
			"versionNonce": 711236060,
			"isDeleted": false,
			"id": "wXpyerl1ocZ6JQJH7W5Ew",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 463.5251282288856,
			"y": 3589.958118339843,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 595598430,
			"groupIds": [
				"YRB8wf90AlCREkV7b04wc",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780572,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1009,
			"versionNonce": 254771684,
			"isDeleted": false,
			"id": "_DtCN8twjjLwXOxNHBZnk",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 444.23772843128256,
			"y": 3607.568352937654,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1949884574,
			"groupIds": [
				"YRB8wf90AlCREkV7b04wc",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780572,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1055,
			"versionNonce": 1592589916,
			"isDeleted": false,
			"id": "W9Os7KXwmWrt4EeKyGJHx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 370.7567369446389,
			"y": 3656.243810345194,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1909398750,
			"groupIds": [
				"wqxR6g_XjWRH1D05VL7Xg",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780573,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1055,
			"versionNonce": 288204132,
			"isDeleted": false,
			"id": "PYwPvF5V2_UpU8dqzVzIB",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 390.64887699405347,
			"y": 3656.577560230312,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 299094302,
			"groupIds": [
				"wqxR6g_XjWRH1D05VL7Xg",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780573,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1053,
			"versionNonce": 502584028,
			"isDeleted": false,
			"id": "3TdFz6eBziv8CLYY9bXEJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 371.36147719645044,
			"y": 3674.1877948281235,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1874328926,
			"groupIds": [
				"wqxR6g_XjWRH1D05VL7Xg",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780573,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1102,
			"versionNonce": 110844132,
			"isDeleted": false,
			"id": "fq-eyjoPhiIBXOoL0jYaD",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 299.2110096142243,
			"y": 3727.4361022185194,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 281846174,
			"groupIds": [
				"NUFaEyBTmXBPtytYbzNOJ",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "i0eWT8cGKCvUKGNNOsnhV",
					"type": "arrow"
				}
			],
			"updated": 1707741780573,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1101,
			"versionNonce": 1175328604,
			"isDeleted": false,
			"id": "wgd_jEqcskqM9YNT5WJnV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 319.1031496636389,
			"y": 3727.7698521036373,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 675462622,
			"groupIds": [
				"NUFaEyBTmXBPtytYbzNOJ",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780573,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1099,
			"versionNonce": 2064030820,
			"isDeleted": false,
			"id": "FcMYCjd3mL1_QGV4WTfPI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 299.81574986603584,
			"y": 3745.3800867014497,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1529565726,
			"groupIds": [
				"NUFaEyBTmXBPtytYbzNOJ",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780573,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1168,
			"versionNonce": 327863260,
			"isDeleted": false,
			"id": "NMgARekf0LKOuSFgjlAZh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 225.38989501441404,
			"y": 3797.3079314552087,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 74931806,
			"groupIds": [
				"hLbpS_WcClNq_Y1FnlV45",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780573,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1168,
			"versionNonce": 1480421348,
			"isDeleted": false,
			"id": "MqvY7hOem8wgZvwbo6IWa",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 245.28203506382863,
			"y": 3797.6416813403266,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 2029511326,
			"groupIds": [
				"hLbpS_WcClNq_Y1FnlV45",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780573,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1166,
			"versionNonce": 1753018460,
			"isDeleted": false,
			"id": "YfCWJq75QYOrWcp01_-kp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 225.9946352662256,
			"y": 3815.2519159381372,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1264443102,
			"groupIds": [
				"hLbpS_WcClNq_Y1FnlV45",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780573,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1221,
			"versionNonce": 508416868,
			"isDeleted": false,
			"id": "VrYyN0-AvBo7Gr_-Otnxt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 153.06977743832715,
			"y": 3865.0834999265435,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 272257822,
			"groupIds": [
				"jvbBPkCKa43xPt8F4q2Sm",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "BH7xHE5Y3cI47wHxUfrZn",
					"type": "arrow"
				}
			],
			"updated": 1707741780573,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1220,
			"versionNonce": 347505884,
			"isDeleted": false,
			"id": "T5p7nf5d66_RCk9T7Eizm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 172.96191748774174,
			"y": 3865.4172498116613,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 570310494,
			"groupIds": [
				"jvbBPkCKa43xPt8F4q2Sm",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780573,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1218,
			"versionNonce": 461752036,
			"isDeleted": false,
			"id": "LBcVUyxEHOy23967IE1N5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 153.67451769013917,
			"y": 3883.027484409472,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1694147486,
			"groupIds": [
				"jvbBPkCKa43xPt8F4q2Sm",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780573,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1689,
			"versionNonce": 1542193551,
			"isDeleted": false,
			"id": "PGj2VuFEpoiXW6Lk7Y41o",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 704.7286353639807,
			"y": 3398.4093480528472,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 60.26375886637925,
			"height": 0,
			"seed": 190873566,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063993,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "aEqTZyeILoHae-FS4jcft",
				"gap": 2.2006516260397007,
				"focus": -0.013167495614155231
			},
			"endBinding": {
				"elementId": "gt0-CPvx963oklODoxMtY",
				"gap": 6.40790722850852,
				"focus": -0.0497605873025243
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
					60.26375886637925,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 2155,
			"versionNonce": 1383475663,
			"isDeleted": false,
			"id": "5CN0Eu4HCzzaHvpVQ-kus",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 633.1380000961204,
			"y": 3463.4141893851784,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 131.86273991917687,
			"height": 1.1826254701272774,
			"seed": 1497420830,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063993,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "rNSS7zOZu6-xsqDn-99bQ",
				"gap": 1.5452117056191241,
				"focus": -0.1664012372500732
			},
			"endBinding": {
				"elementId": "Vyrm2F_cKxwI5Lwcx4PJh",
				"gap": 7.883837587518883,
				"focus": -0.05082044618154638
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
					131.86273991917687,
					1.1826254701272774
				]
			]
		},
		{
			"type": "arrow",
			"version": 1657,
			"versionNonce": 332277807,
			"isDeleted": false,
			"id": "RqVpE14h63lQGpIgatBr9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 410.14490359595777,
			"y": 3674.678981009464,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 354.710434507077,
			"height": 0,
			"seed": 1754046558,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063994,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "j3Lkzedt1ZLfjQGigXAbP",
				"gap": 7.319150367055045,
				"focus": -0.056341107138557764
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
					354.710434507077,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 1650,
			"versionNonce": 1196902991,
			"isDeleted": false,
			"id": "Zgx2kalmg4QkDijBgf_4N",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 482.66846203733996,
			"y": 3607.0878769070205,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 281.9838700840951,
			"height": 0,
			"seed": 1830085790,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063994,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "DkTeQLdD7Jw1429NuC13n",
				"gap": 6.527836320438837,
				"focus": -0.02776280678632675
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
			"version": 2394,
			"versionNonce": 1447248399,
			"isDeleted": false,
			"id": "2Gd9KQViWY_voLQ71fKwz",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 555.8609095458198,
			"y": 3536.952972323539,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 209.85271815693739,
			"height": 9.094947017729282e-13,
			"seed": 2022351070,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063994,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "yq4oLQCeXSfdpfxqiBcvy",
				"gap": 1,
				"focus": -0.05510857181167111
			},
			"endBinding": {
				"elementId": "g_4xvptkAPSlmN9uaveFA",
				"gap": 6.8159053336958095,
				"focus": -0.08103286603433871
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
					209.85271815693739,
					9.094947017729282e-13
				]
			]
		},
		{
			"type": "arrow",
			"version": 2465,
			"versionNonce": 1421230735,
			"isDeleted": false,
			"id": "i0eWT8cGKCvUKGNNOsnhV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 340.92917004166804,
			"y": 3745.6773507615653,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 421.2924219612016,
			"height": 9.094947017729282e-13,
			"seed": 1048499486,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063995,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "fq-eyjoPhiIBXOoL0jYaD",
				"gap": 1.6687394145619407,
				"focus": -0.03845545064491617
			},
			"endBinding": {
				"elementId": "D1W2TaSiiihEcmB9e8hF3",
				"gap": 10.307941033583347,
				"focus": -0.04726930172803499
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
					421.2924219612016,
					9.094947017729282e-13
				]
			]
		},
		{
			"type": "arrow",
			"version": 1754,
			"versionNonce": 1024268463,
			"isDeleted": false,
			"id": "oENPf3g082JBSWSg0L9Ig",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 263.89209661186,
			"y": 3815.471622415921,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 502.1029634316528,
			"height": 4.547473508864641e-13,
			"seed": 1482850654,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063995,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "dYhr4jxWg4udIY5UB4mTr",
				"gap": 5.185108398361081,
				"focus": -0.013225333629782614
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
					502.1029634316528,
					4.547473508864641e-13
				]
			]
		},
		{
			"type": "arrow",
			"version": 2573,
			"versionNonce": 2136209647,
			"isDeleted": false,
			"id": "BH7xHE5Y3cI47wHxUfrZn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 194.46735201872173,
			"y": 3884.0482645696147,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 569.6970580147752,
			"height": 0,
			"seed": 159819166,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063995,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "VrYyN0-AvBo7Gr_-Otnxt",
				"gap": 1.3481535675126821,
				"focus": -0.00031699972099230106
			},
			"endBinding": {
				"elementId": "TR_woFguk8c2ZILuKgsc2",
				"gap": 9.741362242540845,
				"focus": 0.03105445781696236
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
					569.6970580147752,
					0
				]
			]
		},
		{
			"type": "line",
			"version": 991,
			"versionNonce": 1799093084,
			"isDeleted": false,
			"id": "_fvshEknWT3-yH4HGz7ha",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 98.42267819090023,
			"y": 3349.3546757984736,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1180.5407221136436,
			"seed": 52183518,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780573,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1008,
			"versionNonce": 1931016292,
			"isDeleted": false,
			"id": "MctQbqyzVm1C4qeAharEm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 25.977287878021457,
			"y": 3351.566687439245,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1178.5216811076705,
			"seed": 674518558,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780573,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1014,
			"versionNonce": 559689692,
			"isDeleted": false,
			"id": "w-VzKqzmQaOV-dQbpY5Li",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -50.58535429460733,
			"y": 3351.566687439245,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.1368683772161603e-13,
			"height": 1178.5216811076702,
			"seed": 1371529822,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780573,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1053,
			"versionNonce": 1436830692,
			"isDeleted": false,
			"id": "RFPB7KUfciOGvR2_XwPoV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -120.18775626972445,
			"y": 3351.566687439245,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.684341886080802e-14,
			"height": 1181.8883461083487,
			"seed": 311420574,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780573,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1094,
			"versionNonce": 2122437724,
			"isDeleted": false,
			"id": "CGKGdON0634t80AVfSayC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -192.77311832948897,
			"y": 3353.760161814262,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.684341886080802e-14,
			"height": 1180.998074078317,
			"seed": 2069193438,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780573,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1073,
			"versionNonce": 41496420,
			"isDeleted": false,
			"id": "zPquroByDcM6mgtsUMT0q",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -266.35280041747035,
			"y": 3348.583727354597,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1186.1745085379823,
			"seed": 1587631902,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780573,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1174,
			"versionNonce": 1618929884,
			"isDeleted": false,
			"id": "0E3zlTG49nZrWX3bir0A_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -337.87556434282385,
			"y": 3350.006842952291,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1182.1289503189232,
			"seed": 350536542,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780573,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1093,
			"versionNonce": 434479844,
			"isDeleted": false,
			"id": "k89zTo6ruYBW62ii1ttDV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -411.5235245370003,
			"y": 3353.555327495677,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1185.4533009345473,
			"seed": 1081124766,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780573,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 941,
			"versionNonce": 451243356,
			"isDeleted": false,
			"id": "aljwpQfUN3AmB3e-tiAfY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 80.26948543685296,
			"y": 3934.5861103575508,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 292946910,
			"groupIds": [
				"vi97qg9iEPWRlwiO_kKtR",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "ZVpW0wiNgEs3MwsPN9Iyr",
					"type": "arrow"
				}
			],
			"updated": 1707741780573,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 940,
			"versionNonce": 41395812,
			"isDeleted": false,
			"id": "aOIEOUpSGdErOmR107aSl",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 100.16162548626755,
			"y": 3934.9198602426686,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 168155166,
			"groupIds": [
				"vi97qg9iEPWRlwiO_kKtR",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780573,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 938,
			"versionNonce": 1057448412,
			"isDeleted": false,
			"id": "SpW5jL85AcgZteB03aZRX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 80.87422568866543,
			"y": 3952.5300948404793,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1108419678,
			"groupIds": [
				"vi97qg9iEPWRlwiO_kKtR",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780574,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1001,
			"versionNonce": 553466340,
			"isDeleted": false,
			"id": "uJniiDB9jhvCo9-sMces8",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 7.887299608663966,
			"y": 4002.3343474580242,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 728295582,
			"groupIds": [
				"O-zEwJnWlD4OeBTw1fhWZ",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "epXkiost5X3qRVWse0AuC",
					"type": "arrow"
				}
			],
			"updated": 1707741780574,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1000,
			"versionNonce": 1677117020,
			"isDeleted": false,
			"id": "kkxCB1xsNOdSQOs8XjtG1",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 27.77943965807856,
			"y": 4002.668097343142,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1438524638,
			"groupIds": [
				"O-zEwJnWlD4OeBTw1fhWZ",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780574,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 998,
			"versionNonce": 277110116,
			"isDeleted": false,
			"id": "Lyb8XSDyCKd6Lc0EusGze",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 8.492039860475984,
			"y": 4020.2783319409546,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 849467678,
			"groupIds": [
				"O-zEwJnWlD4OeBTw1fhWZ",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780574,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1052,
			"versionNonce": 1854249692,
			"isDeleted": false,
			"id": "kPbGBrSIdyhIJYrxBNFqJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -70.2915697167681,
			"y": 4073.9253894895746,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1501889886,
			"groupIds": [
				"SGIssHaIgtCCiecv2tE-u",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "gicpuIC2jeHqwfR-8x58y",
					"type": "arrow"
				}
			],
			"updated": 1707741780574,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1051,
			"versionNonce": 1515917540,
			"isDeleted": false,
			"id": "RgjW1SJoFnrhl9Of3KUjO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -50.3994296673535,
			"y": 4074.2591393746925,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1270393246,
			"groupIds": [
				"SGIssHaIgtCCiecv2tE-u",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780574,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1049,
			"versionNonce": 1497751388,
			"isDeleted": false,
			"id": "a5rEFkMPvU3zyw-1tWI9Z",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -69.68682946495562,
			"y": 4091.869373972503,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 946718174,
			"groupIds": [
				"SGIssHaIgtCCiecv2tE-u",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780574,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1123,
			"versionNonce": 772756580,
			"isDeleted": false,
			"id": "44WzWVZuFc-tW3MX6MeoJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -138.57608910873466,
			"y": 4144.522111492907,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1085626910,
			"groupIds": [
				"9sdIEorvPqMTQ_at0z0qN",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780574,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1123,
			"versionNonce": 2089391068,
			"isDeleted": false,
			"id": "o_s2FP5IJbolYEXGqEWK3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -118.68394905932007,
			"y": 4144.855861378025,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 998270558,
			"groupIds": [
				"9sdIEorvPqMTQ_at0z0qN",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780574,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1121,
			"versionNonce": 426715108,
			"isDeleted": false,
			"id": "0Knq8KE2jTdWk3vG7Y4Xp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -137.9713488569231,
			"y": 4162.466095975836,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 2040523422,
			"groupIds": [
				"9sdIEorvPqMTQ_at0z0qN",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780574,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1167,
			"versionNonce": 1449310300,
			"isDeleted": false,
			"id": "S6GhalWQCN8bbAoqkivqq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -211.4523403435668,
			"y": 4211.141553383375,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 163899102,
			"groupIds": [
				"sI67pik14sAADDhHBQnkx",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780574,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1167,
			"versionNonce": 1082690404,
			"isDeleted": false,
			"id": "jJ0ZQXhkwboon_3c167rY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -191.5602002941522,
			"y": 4211.475303268493,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 2088786718,
			"groupIds": [
				"sI67pik14sAADDhHBQnkx",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780574,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1165,
			"versionNonce": 1386433756,
			"isDeleted": false,
			"id": "LySN5tge60Rm7iEv4MKf2",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -210.84760009175523,
			"y": 4229.0855378663055,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 675497822,
			"groupIds": [
				"sI67pik14sAADDhHBQnkx",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780574,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1214,
			"versionNonce": 363429604,
			"isDeleted": false,
			"id": "E7-eHaK88uozM0A4QJlrH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -282.9980676739814,
			"y": 4282.3338452567,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1834920862,
			"groupIds": [
				"LwIoJ3H8LtQraDR2btbrV",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "vIfbZjRJR6Y-BDS5QWGP-",
					"type": "arrow"
				}
			],
			"updated": 1707741780574,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1213,
			"versionNonce": 316494172,
			"isDeleted": false,
			"id": "BzjWb_bNVVBUGt-J6zV6D",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -263.1059276245668,
			"y": 4282.667595141818,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 2047051742,
			"groupIds": [
				"LwIoJ3H8LtQraDR2btbrV",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780574,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1211,
			"versionNonce": 291504740,
			"isDeleted": false,
			"id": "jJtnKn11PgUa5KiSNxu5i",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -282.3933274221698,
			"y": 4300.277829739631,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 239262750,
			"groupIds": [
				"LwIoJ3H8LtQraDR2btbrV",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780574,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1280,
			"versionNonce": 912442844,
			"isDeleted": false,
			"id": "On75hiSYr8gP19VmefWNM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -356.8191822737916,
			"y": 4352.205674493391,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1074636894,
			"groupIds": [
				"FXDvMKRhef1pFBs3deHb9",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780574,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1280,
			"versionNonce": 1786385892,
			"isDeleted": false,
			"id": "n-Uu2IoSt7GBTuZxDY9Ek",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -336.92704222437703,
			"y": 4352.539424378509,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1060433054,
			"groupIds": [
				"FXDvMKRhef1pFBs3deHb9",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780574,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1278,
			"versionNonce": 574990940,
			"isDeleted": false,
			"id": "BdMHhM2H8RS7c93F0dNO0",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -356.21444202197915,
			"y": 4370.149658976319,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 426354910,
			"groupIds": [
				"FXDvMKRhef1pFBs3deHb9",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780574,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1333,
			"versionNonce": 1308997988,
			"isDeleted": false,
			"id": "XkgBMNhX_0dfk8Jjd6amM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -429.1392998498785,
			"y": 4419.9812429647245,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 2117917982,
			"groupIds": [
				"tMJuc6QZSYO8Nc0p65CKy",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "PrLNCrzJK3ePgRIpADAoE",
					"type": "arrow"
				}
			],
			"updated": 1707741780574,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1332,
			"versionNonce": 1230503644,
			"isDeleted": false,
			"id": "7xQ79rlfYSgjGwquvGx2H",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -409.2471598004639,
			"y": 4420.314992849842,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 52398430,
			"groupIds": [
				"tMJuc6QZSYO8Nc0p65CKy",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780574,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1330,
			"versionNonce": 391179492,
			"isDeleted": false,
			"id": "3a2zmty2g5Ja3fWXI4m-V",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -428.53455959806604,
			"y": 4437.925227447653,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1734520222,
			"groupIds": [
				"tMJuc6QZSYO8Nc0p65CKy",
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780574,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 2409,
			"versionNonce": 554682671,
			"isDeleted": false,
			"id": "ZVpW0wiNgEs3MwsPN9Iyr",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 122.51955807577554,
			"y": 3953.307091091029,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 647.5015544874286,
			"height": 9.094947017729282e-13,
			"seed": 1480018398,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063996,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "aljwpQfUN3AmB3e-tiAfY",
				"gap": 2.2006516260406954,
				"focus": -0.013167495614201509
			},
			"endBinding": {
				"elementId": "Ua23wd9vopp5nCSPXqOrO",
				"gap": 3.41340636654013,
				"focus": -0.01985900339412231
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
					647.5015544874286,
					-9.094947017729282e-13
				]
			]
		},
		{
			"type": "arrow",
			"version": 2462,
			"versionNonce": 499419503,
			"isDeleted": false,
			"id": "epXkiost5X3qRVWse0AuC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 49.481932327165055,
			"y": 4018.3119324233603,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 714.0560769207511,
			"height": 0,
			"seed": 883842590,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063996,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "uJniiDB9jhvCo9-sMces8",
				"gap": 1.5452117056192165,
				"focus": -0.1577791564528875
			},
			"endBinding": {
				"elementId": "Esqcz71S5gxFIo4XfVqM9",
				"gap": 10.031421231197555,
				"focus": -0.01472975935872883
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
					714.0560769207511,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 1821,
			"versionNonce": 1199647695,
			"isDeleted": false,
			"id": "r_5ABNgTOJR5AXnUTbAEI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -172.0641736922479,
			"y": 4229.576724047645,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 936.7562957624009,
			"height": 0,
			"seed": 1371073118,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063997,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "iXwTFpXor12lrOC3szlUn",
				"gap": 9.51658387081352,
				"focus": -0.026439523230184187
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
					936.7562957624009,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 1846,
			"versionNonce": 19454447,
			"isDeleted": false,
			"id": "msVxC3qihUbfwKZp1cm0X",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -99.5406152508657,
			"y": 4161.985619945203,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 866.0167496209292,
			"height": 9.094947017729282e-13,
			"seed": 1042804382,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063997,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "TN__--ddeNo1VHtlnaI3i",
				"gap": 8.087616137266195,
				"focus": -0.11692280475258071
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
					866.0167496209292,
					-9.094947017729282e-13
				]
			]
		},
		{
			"type": "arrow",
			"version": 2669,
			"versionNonce": 1609972143,
			"isDeleted": false,
			"id": "gicpuIC2jeHqwfR-8x58y",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -29.242148703886244,
			"y": 4091.850715361722,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 792.2058479525344,
			"height": 9.094947017729282e-13,
			"seed": 111962846,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063997,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "kPbGBrSIdyhIJYrxBNFqJ",
				"gap": 1,
				"focus": -0.055108571811665216
			},
			"endBinding": {
				"elementId": "-rBz116a3msXCxZaOeQ9s",
				"gap": 11.60005125868156,
				"focus": -0.13050567004240435
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
					792.2058479525344,
					-9.094947017729282e-13
				]
			]
		},
		{
			"type": "arrow",
			"version": 2745,
			"versionNonce": 165702191,
			"isDeleted": false,
			"id": "vIfbZjRJR6Y-BDS5QWGP-",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -241.27990724653762,
			"y": 4300.575093799747,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1003.0780483551907,
			"height": 0,
			"seed": 2044157726,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063998,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "E7-eHaK88uozM0A4QJlrH",
				"gap": 1.6687394145618697,
				"focus": -0.03845545064488982
			},
			"endBinding": {
				"elementId": "s1vZI94vXAZq6GUDTx8-5",
				"gap": 11.41624480409746,
				"focus": -0.0570549117778415
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
					1003.0780483551907,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 1913,
			"versionNonce": 97602639,
			"isDeleted": false,
			"id": "yxv8b5vAexfKGZhL2ea7e",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -318.3169806763452,
			"y": 4370.369365454102,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1081.562112265749,
			"height": 0,
			"seed": 1813629790,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063998,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "DbYqblhchvXHS2cCTJwSn",
				"gap": 9.969254323346718,
				"focus": 0.016676250278632166
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
			"version": 2868,
			"versionNonce": 437765263,
			"isDeleted": false,
			"id": "PrLNCrzJK3ePgRIpADAoE",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -386.2947347887339,
			"y": 4438.946007607796,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1149.539866378138,
			"height": 0,
			"seed": 2076487582,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908063998,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "XkgBMNhX_0dfk8Jjd6amM",
				"gap": 2.7951440482628698,
				"focus": -0.0003169997210162721
			},
			"endBinding": {
				"elementId": "cbRg8HF5mqdiOYk5LkRK4",
				"gap": 9.996128968351172,
				"focus": 0.021268847767126262
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
					1149.539866378138,
					0
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1414,
			"versionNonce": 1773221212,
			"isDeleted": false,
			"id": "ZbieOBDyHrz4zYzyAviZO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 645.3354982516063,
			"y": 4529.478366693827,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1426656222,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "VoiRiVa6"
				}
			],
			"updated": 1707741780574,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 951,
			"versionNonce": 757882468,
			"isDeleted": false,
			"id": "VoiRiVa6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 663.7573732516063,
			"y": 4551.478366693827,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1979179038,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780575,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ32",
			"rawText": "δ32",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "ZbieOBDyHrz4zYzyAviZO",
			"originalText": "δ32",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1467,
			"versionNonce": 1360669148,
			"isDeleted": false,
			"id": "EC8ykeVrrmAvmsYNVEeG6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 497.115178155943,
			"y": 4531.1923118065915,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1921133662,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "4GqnRjQx"
				}
			],
			"updated": 1707741780575,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1005,
			"versionNonce": 73069028,
			"isDeleted": false,
			"id": "4GqnRjQx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 515.537053155943,
			"y": 4553.1923118065915,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 947450014,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780575,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ34",
			"rawText": "δ34",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "EC8ykeVrrmAvmsYNVEeG6",
			"originalText": "δ34",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1387,
			"versionNonce": 946900572,
			"isDeleted": false,
			"id": "3ZkHET_bo2bgXXOrjPv9C",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 570.3036948672944,
			"y": 4531.1923118065915,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1401760990,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "cNhOQa37"
				}
			],
			"updated": 1707741780575,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 924,
			"versionNonce": 795546980,
			"isDeleted": false,
			"id": "cNhOQa37",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 588.7255698672944,
			"y": 4553.1923118065915,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 827318558,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780575,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ33",
			"rawText": "δ33",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "3ZkHET_bo2bgXXOrjPv9C",
			"originalText": "δ33",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1426,
			"versionNonce": 545678044,
			"isDeleted": false,
			"id": "s9gsrDahoNHDbof5zjaqH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 424.8100485288943,
			"y": 4530.197991778376,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1697779038,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "f3JBy6vX"
				}
			],
			"updated": 1707741780575,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 965,
			"versionNonce": 1537919204,
			"isDeleted": false,
			"id": "f3JBy6vX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 443.2319235288943,
			"y": 4552.197991778376,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1820635550,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780575,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ35",
			"rawText": "δ35",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "s9gsrDahoNHDbof5zjaqH",
			"originalText": "δ35",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1430,
			"versionNonce": 535668572,
			"isDeleted": false,
			"id": "LMsQJbSl4JSRMlWZoxud5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 281.1262861539418,
			"y": 4530.902622769696,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1920519646,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "kGJJN4zm"
				}
			],
			"updated": 1707741780575,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 967,
			"versionNonce": 1554517092,
			"isDeleted": false,
			"id": "kGJJN4zm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 299.5481611539418,
			"y": 4552.902622769696,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 337601054,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780575,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ37",
			"rawText": "δ37",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "LMsQJbSl4JSRMlWZoxud5",
			"originalText": "δ37",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1416,
			"versionNonce": 720919516,
			"isDeleted": false,
			"id": "6K7Hlv7SFKeTdpUnKtl1h",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 208.9320894708054,
			"y": 4529.493360787055,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 610889310,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "ne4od2j6"
				}
			],
			"updated": 1707741780575,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 957,
			"versionNonce": 1680924644,
			"isDeleted": false,
			"id": "ne4od2j6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 227.3539644708054,
			"y": 4551.493360787055,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1881666206,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780575,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ38",
			"rawText": "δ38",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "6K7Hlv7SFKeTdpUnKtl1h",
			"originalText": "δ38",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1433,
			"versionNonce": 1538818140,
			"isDeleted": false,
			"id": "yDqOi-DsyLk2EIn34uIrt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 135.4538837225574,
			"y": 4530.777369852167,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 34336478,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "6u4FcHsn"
				}
			],
			"updated": 1707741780575,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 970,
			"versionNonce": 978535268,
			"isDeleted": false,
			"id": "6u4FcHsn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 153.8757587225574,
			"y": 4552.777369852167,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1722180382,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780575,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ39",
			"rawText": "δ39",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "yDqOi-DsyLk2EIn34uIrt",
			"originalText": "δ39",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1432,
			"versionNonce": 973083868,
			"isDeleted": false,
			"id": "ua7sDgsaNr3gKT4U0DI23",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 352.32616280886225,
			"y": 4531.1923118065915,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1885884254,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "nJuUnbBg"
				}
			],
			"updated": 1707741780575,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 975,
			"versionNonce": 1969043172,
			"isDeleted": false,
			"id": "nJuUnbBg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 370.74803780886225,
			"y": 4553.1923118065915,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 2074260382,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780575,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ36",
			"rawText": "δ36",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "ua7sDgsaNr3gKT4U0DI23",
			"originalText": "δ36",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1765,
			"versionNonce": 56695132,
			"isDeleted": false,
			"id": "a6rU-B9yd7McneX9sMS7m",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -444.912995555734,
			"y": 4533.054915264036,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 847679454,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "ouztiQpQ"
				}
			],
			"updated": 1707741780575,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1302,
			"versionNonce": 836549220,
			"isDeleted": false,
			"id": "ouztiQpQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -426.491120555734,
			"y": 4555.054915264036,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1361372190,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780575,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ47",
			"rawText": "δ47",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "a6rU-B9yd7McneX9sMS7m",
			"originalText": "δ47",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1670,
			"versionNonce": 1932365276,
			"isDeleted": false,
			"id": "7aOxEH4C4d3VnYj9iBq3Z",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -6.163343752143533,
			"y": 4530.626473329527,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1768861790,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "BpgOyxHX"
				}
			],
			"updated": 1707741780575,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1211,
			"versionNonce": 1251986916,
			"isDeleted": false,
			"id": "BpgOyxHX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 12.258531247856467,
			"y": 4552.626473329527,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 657781918,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780575,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ41",
			"rawText": "δ41",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "7aOxEH4C4d3VnYj9iBq3Z",
			"originalText": "δ41",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1592,
			"versionNonce": 175600220,
			"isDeleted": false,
			"id": "eEOBd9kDL8mCKQYV1SgiI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 67.02517295920836,
			"y": 4530.626473329527,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 338211038,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "cFDYy1Wt"
				}
			],
			"updated": 1707741780575,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1136,
			"versionNonce": 280260964,
			"isDeleted": false,
			"id": "cFDYy1Wt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 85.44704795920836,
			"y": 4552.626473329527,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1541072158,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780575,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ40",
			"rawText": "δ40",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "eEOBd9kDL8mCKQYV1SgiI",
			"originalText": "δ40",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1617,
			"versionNonce": 1477494492,
			"isDeleted": false,
			"id": "zn98NCepuBzI8l_-zqGW3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -78.06785139838519,
			"y": 4530.626473329527,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 264016222,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "08gWUJlH"
				}
			],
			"updated": 1707741780575,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1155,
			"versionNonce": 57189604,
			"isDeleted": false,
			"id": "08gWUJlH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -59.64597639838519,
			"y": 4552.626473329527,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1797174686,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780575,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ42",
			"rawText": "δ42",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "zn98NCepuBzI8l_-zqGW3",
			"originalText": "δ42",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1618,
			"versionNonce": 1082887004,
			"isDeleted": false,
			"id": "2kBRWFPj_zvbGwq6FZ9K_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -225.7288938862015,
			"y": 4529.342464264415,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 389173726,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "T0exht3K"
				}
			],
			"updated": 1707741780575,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1158,
			"versionNonce": 139094116,
			"isDeleted": false,
			"id": "T0exht3K",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -207.3070188862015,
			"y": 4551.342464264415,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1862821406,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780575,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ44",
			"rawText": "δ44",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "2kBRWFPj_zvbGwq6FZ9K_",
			"originalText": "δ44",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1601,
			"versionNonce": 1178189788,
			"isDeleted": false,
			"id": "DOBC6UcR6JLQMVovr2_ov",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -298.91741059755384,
			"y": 4531.910482394638,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1133638238,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "d4tIXOPe"
				}
			],
			"updated": 1707741780575,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1142,
			"versionNonce": 589806564,
			"isDeleted": false,
			"id": "d4tIXOPe",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -280.49553559755384,
			"y": 4553.910482394638,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 530577054,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780575,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ45",
			"rawText": "δ45",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "DOBC6UcR6JLQMVovr2_ov",
			"originalText": "δ45",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1616,
			"versionNonce": 1361929308,
			"isDeleted": false,
			"id": "oqMW8-aQwWpjBhRs0JYcC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -373.3899363740178,
			"y": 4533.19449145975,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 199455454,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "gMXciqjk"
				}
			],
			"updated": 1707741780575,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1156,
			"versionNonce": 772710244,
			"isDeleted": false,
			"id": "gMXciqjk",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -354.9680613740178,
			"y": 4555.19449145975,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 1391290142,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780575,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ46",
			"rawText": "δ46",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "oqMW8-aQwWpjBhRs0JYcC",
			"originalText": "δ46",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1625,
			"versionNonce": 2000189660,
			"isDeleted": false,
			"id": "5LlP7htOCzcEUv1l8bRbs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -152.5403771748487,
			"y": 4530.626473329527,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1160696670,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "OcB9M3BL"
				}
			],
			"updated": 1707741780575,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1163,
			"versionNonce": 290263780,
			"isDeleted": false,
			"id": "OcB9M3BL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -134.1185021748487,
			"y": 4552.626473329527,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 35.15625,
			"height": 24,
			"seed": 2096674718,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780576,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ43",
			"rawText": "δ43",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "5LlP7htOCzcEUv1l8bRbs",
			"originalText": "δ43",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1611,
			"versionNonce": 1139604828,
			"isDeleted": false,
			"id": "gt0-CPvx963oklODoxMtY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 771.4003014588685,
			"y": 3362.7174880845614,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 578556894,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "RtvWSxZa"
				},
				{
					"id": "PGj2VuFEpoiXW6Lk7Y41o",
					"type": "arrow"
				}
			],
			"updated": 1707741780576,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1157,
			"versionNonce": 2071008868,
			"isDeleted": false,
			"id": "RtvWSxZa",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 783.9628014588685,
			"y": 3384.7174880845614,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 801761310,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780576,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK32",
			"rawText": "SK32",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "gt0-CPvx963oklODoxMtY",
			"originalText": "SK32",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1621,
			"versionNonce": 10285532,
			"isDeleted": false,
			"id": "Vyrm2F_cKxwI5Lwcx4PJh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 772.8845776028162,
			"y": 3429.2460883086756,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 886256734,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "I2gILt9w"
				},
				{
					"id": "5CN0Eu4HCzzaHvpVQ-kus",
					"type": "arrow"
				}
			],
			"updated": 1707741780576,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1171,
			"versionNonce": 424192484,
			"isDeleted": false,
			"id": "I2gILt9w",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 785.4470776028162,
			"y": 3451.2460883086756,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 459864222,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780576,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK33",
			"rawText": "SK33",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "Vyrm2F_cKxwI5Lwcx4PJh",
			"originalText": "SK33",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1651,
			"versionNonce": 2086295132,
			"isDeleted": false,
			"id": "g_4xvptkAPSlmN9uaveFA",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 772.529533036453,
			"y": 3500.1978548783727,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1799107806,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "qCPAaNlR"
				},
				{
					"id": "2Gd9KQViWY_voLQ71fKwz",
					"type": "arrow"
				}
			],
			"updated": 1707741780576,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1202,
			"versionNonce": 1306643812,
			"isDeleted": false,
			"id": "qCPAaNlR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 785.092033036453,
			"y": 3522.1978548783727,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 232646942,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780576,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK34",
			"rawText": "SK34",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "g_4xvptkAPSlmN9uaveFA",
			"originalText": "SK34",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1685,
			"versionNonce": 1408707292,
			"isDeleted": false,
			"id": "j3Lkzedt1ZLfjQGigXAbP",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 772.1744884700898,
			"y": 3638.7633833667533,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 314512734,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "1KYUXm1G"
				},
				{
					"id": "RqVpE14h63lQGpIgatBr9",
					"type": "arrow"
				}
			],
			"updated": 1707741780576,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1233,
			"versionNonce": 1787461860,
			"isDeleted": false,
			"id": "1KYUXm1G",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 784.7369884700898,
			"y": 3660.7633833667533,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1932573086,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780576,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK36",
			"rawText": "SK36",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "j3Lkzedt1ZLfjQGigXAbP",
			"originalText": "SK36",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1660,
			"versionNonce": 973434716,
			"isDeleted": false,
			"id": "DkTeQLdD7Jw1429NuC13n",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 771.1801684418739,
			"y": 3572.1439414762854,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1449383390,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "Iprrt4M7"
				},
				{
					"id": "Zgx2kalmg4QkDijBgf_4N",
					"type": "arrow"
				}
			],
			"updated": 1707741780576,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1212,
			"versionNonce": 1724957796,
			"isDeleted": false,
			"id": "Iprrt4M7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 783.7426684418739,
			"y": 3594.1439414762854,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1432971806,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780576,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK35",
			"rawText": "SK35",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "DkTeQLdD7Jw1429NuC13n",
			"originalText": "SK35",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1711,
			"versionNonce": 1054286812,
			"isDeleted": false,
			"id": "D1W2TaSiiihEcmB9e8hF3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 772.529533036453,
			"y": 3710.070194502813,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1060271710,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "1KWqbHNt"
				},
				{
					"id": "i0eWT8cGKCvUKGNNOsnhV",
					"type": "arrow"
				}
			],
			"updated": 1707741780576,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1263,
			"versionNonce": 411211748,
			"isDeleted": false,
			"id": "1KWqbHNt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 785.092033036453,
			"y": 3732.070194502813,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1552939678,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780576,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK37",
			"rawText": "SK37",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "D1W2TaSiiihEcmB9e8hF3",
			"originalText": "SK37",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1697,
			"versionNonce": 410929244,
			"isDeleted": false,
			"id": "dYhr4jxWg4udIY5UB4mTr",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 771.1801684418739,
			"y": 3781.021961072509,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 875755230,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "6zitWD9d"
				},
				{
					"id": "oENPf3g082JBSWSg0L9Ig",
					"type": "arrow"
				}
			],
			"updated": 1707741780576,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1250,
			"versionNonce": 1806564196,
			"isDeleted": false,
			"id": "6zitWD9d",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 783.7426684418739,
			"y": 3803.021961072509,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1319922462,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780576,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK38",
			"rawText": "SK38",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "dYhr4jxWg4udIY5UB4mTr",
			"originalText": "SK38",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1777,
			"versionNonce": 1791810780,
			"isDeleted": false,
			"id": "TR_woFguk8c2ZILuKgsc2",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 773.9057722760377,
			"y": 3851.1041161353915,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 2053986142,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "7C2ChNYZ"
				},
				{
					"id": "BH7xHE5Y3cI47wHxUfrZn",
					"type": "arrow"
				}
			],
			"updated": 1707741780576,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1336,
			"versionNonce": 446754532,
			"isDeleted": false,
			"id": "7C2ChNYZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 786.4682722760377,
			"y": 3873.1041161353915,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 264682398,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780576,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK39",
			"rawText": "SK39",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "TR_woFguk8c2ZILuKgsc2",
			"originalText": "SK39",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1713,
			"versionNonce": 257220956,
			"isDeleted": false,
			"id": "Ua23wd9vopp5nCSPXqOrO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 773.4345189297443,
			"y": 3918.631884975628,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 887723998,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "LfskkNKd"
				},
				{
					"id": "ZVpW0wiNgEs3MwsPN9Iyr",
					"type": "arrow"
				}
			],
			"updated": 1707741780576,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1266,
			"versionNonce": 1709797988,
			"isDeleted": false,
			"id": "LfskkNKd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 785.9970189297443,
			"y": 3940.631884975628,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 568781854,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780576,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK40",
			"rawText": "SK40",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "Ua23wd9vopp5nCSPXqOrO",
			"originalText": "SK40",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1737,
			"versionNonce": 1567118812,
			"isDeleted": false,
			"id": "Esqcz71S5gxFIo4XfVqM9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 773.5694304791137,
			"y": 3983.8111206051635,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1689237598,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "b9iF6m6m"
				},
				{
					"id": "epXkiost5X3qRVWse0AuC",
					"type": "arrow"
				}
			],
			"updated": 1707741780576,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1291,
			"versionNonce": 1280673252,
			"isDeleted": false,
			"id": "b9iF6m6m",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 786.1319304791137,
			"y": 4005.8111206051635,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 622132382,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780576,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK41",
			"rawText": "SK41",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "Esqcz71S5gxFIo4XfVqM9",
			"originalText": "SK41",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1796,
			"versionNonce": 1914255964,
			"isDeleted": false,
			"id": "-rBz116a3msXCxZaOeQ9s",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 774.5637505073297,
			"y": 4053.4135225802793,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1757919454,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "x60AXw8S"
				},
				{
					"id": "gicpuIC2jeHqwfR-8x58y",
					"type": "arrow"
				}
			],
			"updated": 1707741780576,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1353,
			"versionNonce": 1123232100,
			"isDeleted": false,
			"id": "x60AXw8S",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 787.1262505073297,
			"y": 4075.4135225802793,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1465445662,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780576,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK42",
			"rawText": "SK42",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "-rBz116a3msXCxZaOeQ9s",
			"originalText": "SK42",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1817,
			"versionNonce": 2017038044,
			"isDeleted": false,
			"id": "iXwTFpXor12lrOC3szlUn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 774.2087059409665,
			"y": 4194.677780257819,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 2117704030,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "s3ymxn6f"
				},
				{
					"id": "r_5ABNgTOJR5AXnUTbAEI",
					"type": "arrow"
				}
			],
			"updated": 1707741780576,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1373,
			"versionNonce": 1829788900,
			"isDeleted": false,
			"id": "s3ymxn6f",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 786.7712059409665,
			"y": 4216.677780257819,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 347782558,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780576,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK44",
			"rawText": "SK44",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "iXwTFpXor12lrOC3szlUn",
			"originalText": "SK44",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1784,
			"versionNonce": 1885033308,
			"isDeleted": false,
			"id": "TN__--ddeNo1VHtlnaI3i",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 774.5637505073297,
			"y": 4124.010244583615,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1074616798,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "1QcCbPJA"
				},
				{
					"id": "msVxC3qihUbfwKZp1cm0X",
					"type": "arrow"
				}
			],
			"updated": 1707741780576,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1347,
			"versionNonce": 1413161060,
			"isDeleted": false,
			"id": "1QcCbPJA",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 787.1262505073297,
			"y": 4146.010244583615,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1463971358,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780576,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK43",
			"rawText": "SK43",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "TN__--ddeNo1VHtlnaI3i",
			"originalText": "SK43",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1804,
			"versionNonce": 2026932188,
			"isDeleted": false,
			"id": "s1vZI94vXAZq6GUDTx8-5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 773.2143859127506,
			"y": 4264.635226799301,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 659225182,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "o8sXqMTS"
				},
				{
					"id": "vIfbZjRJR6Y-BDS5QWGP-",
					"type": "arrow"
				}
			],
			"updated": 1707741780576,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1360,
			"versionNonce": 541160420,
			"isDeleted": false,
			"id": "o8sXqMTS",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 785.7768859127506,
			"y": 4286.635226799301,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 922222238,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780576,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK45",
			"rawText": "SK45",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "s1vZI94vXAZq6GUDTx8-5",
			"originalText": "SK45",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1811,
			"versionNonce": 363539548,
			"isDeleted": false,
			"id": "DbYqblhchvXHS2cCTJwSn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 773.2143859127506,
			"y": 4336.936357963576,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 184187614,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "gu9h268U"
				},
				{
					"id": "yxv8b5vAexfKGZhL2ea7e",
					"type": "arrow"
				}
			],
			"updated": 1707741780577,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1369,
			"versionNonce": 1328633700,
			"isDeleted": false,
			"id": "gu9h268U",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 785.7768859127506,
			"y": 4358.936357963576,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1776512798,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780577,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK46",
			"rawText": "SK46",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "DbYqblhchvXHS2cCTJwSn",
			"originalText": "SK46",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1777,
			"versionNonce": 2025668828,
			"isDeleted": false,
			"id": "cbRg8HF5mqdiOYk5LkRK4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 773.2412605577553,
			"y": 4405.669148431878,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 539220830,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "0ht2dR0N"
				},
				{
					"id": "PrLNCrzJK3ePgRIpADAoE",
					"type": "arrow"
				}
			],
			"updated": 1707741780577,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1341,
			"versionNonce": 1834535652,
			"isDeleted": false,
			"id": "0ht2dR0N",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 785.8037605577553,
			"y": 4427.669148431878,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1141686174,
			"groupIds": [
				"qL6zWBPbytGFlEAaPPIfG"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780577,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK47",
			"rawText": "SK47",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "cbRg8HF5mqdiOYk5LkRK4",
			"originalText": "SK47",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1639,
			"versionNonce": 1234748764,
			"isDeleted": false,
			"id": "MZpTUKgiGOcBKh9M0IHOv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1240.1562580859554,
			"y": 3268.7396662293736,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#99e9f2",
			"width": 72,
			"height": 68,
			"seed": 1318494558,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "eBLe5N4u"
				}
			],
			"updated": 1707741780577,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1541,
			"versionNonce": 518937263,
			"isDeleted": false,
			"id": "eBLe5N4u",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1260.5062718188656,
			"y": 3290.2396662293736,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 31.299972534179688,
			"height": 25,
			"seed": 1681311134,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063999,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K13",
			"rawText": "K13",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "MZpTUKgiGOcBKh9M0IHOv",
			"originalText": "K13",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1500,
			"versionNonce": 1838135772,
			"isDeleted": false,
			"id": "uL3KcO-PNKw0a_pK8lu0g",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1099.8797872137284,
			"y": 3266.3316988203455,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#99e9f2",
			"width": 72,
			"height": 68,
			"seed": 1388863966,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "X3cz4n8k"
				}
			],
			"updated": 1707741780577,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1441,
			"versionNonce": 348990671,
			"isDeleted": false,
			"id": "X3cz4n8k",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1120.8597982000565,
			"y": 3287.8316988203455,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 30.03997802734375,
			"height": 25,
			"seed": 1834776094,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063999,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K15",
			"rawText": "K15",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "uL3KcO-PNKw0a_pK8lu0g",
			"originalText": "K15",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1691,
			"versionNonce": 1337204316,
			"isDeleted": false,
			"id": "wta0tDZ58xGVTPtyGjATt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1168.8349669381346,
			"y": 3268.17982174242,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#99e9f2",
			"width": 72,
			"height": 68,
			"seed": 2095317598,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "HkU81ViW"
				}
			],
			"updated": 1707741780577,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1587,
			"versionNonce": 659340015,
			"isDeleted": false,
			"id": "HkU81ViW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1189.5949767037596,
			"y": 3289.67982174242,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 30.47998046875,
			"height": 25,
			"seed": 70256286,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063999,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K14",
			"rawText": "K14",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "wta0tDZ58xGVTPtyGjATt",
			"originalText": "K14",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1663,
			"versionNonce": 685241052,
			"isDeleted": false,
			"id": "WX8Y5iLIvgdRk-5bRlwdj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1313.1562580859554,
			"y": 3268.7396662293736,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#99e9f2",
			"width": 72,
			"height": 68,
			"seed": 66159326,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "Eg26RkHq"
				}
			],
			"updated": 1707741780577,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1541,
			"versionNonce": 2062910735,
			"isDeleted": false,
			"id": "Eg26RkHq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1333.1962666308773,
			"y": 3290.2396662293736,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 31.91998291015625,
			"height": 25,
			"seed": 1052342046,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063999,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K12",
			"rawText": "K12",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "WX8Y5iLIvgdRk-5bRlwdj",
			"originalText": "K12",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1839,
			"versionNonce": 1200437084,
			"isDeleted": false,
			"id": "IoP0od27mmIx5qBXUY_xd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1529.9178974362544,
			"y": 3268.108846554224,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#99e9f2",
			"width": 72,
			"height": 68,
			"seed": 2096685918,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "Nv9oZQ2v"
				}
			],
			"updated": 1707741780577,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1034,
			"versionNonce": 747207780,
			"isDeleted": false,
			"id": "Nv9oZQ2v",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1554.1991474362544,
			"y": 3290.108846554224,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 23.4375,
			"height": 24,
			"seed": 1359005598,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780577,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K9",
			"rawText": "K9",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "IoP0od27mmIx5qBXUY_xd",
			"originalText": "K9",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1801,
			"versionNonce": 1478880220,
			"isDeleted": false,
			"id": "6OvfOogmy-ByQkTSA0SMY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1383.9178974362544,
			"y": 3269.108846554224,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#99e9f2",
			"width": 72,
			"height": 68,
			"seed": 1526866910,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "M2UIBqN7"
				}
			],
			"updated": 1707741780577,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1745,
			"versionNonce": 255855407,
			"isDeleted": false,
			"id": "M2UIBqN7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1408.3679020138911,
			"y": 3290.608846554224,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 23.099990844726562,
			"height": 25,
			"seed": 219019294,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063999,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K11",
			"rawText": "K11",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "6OvfOogmy-ByQkTSA0SMY",
			"originalText": "K11",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1844,
			"versionNonce": 749998172,
			"isDeleted": false,
			"id": "JpUBrc8pV_NTGH5ypYPkA",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1456.9178974362544,
			"y": 3269.108846554224,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#99e9f2",
			"width": 72,
			"height": 68,
			"seed": 1863664734,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "OqJjAflo"
				}
			],
			"updated": 1707741780577,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1035,
			"versionNonce": 882422628,
			"isDeleted": false,
			"id": "OqJjAflo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1475.3397724362544,
			"y": 3291.108846554224,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 35.15625,
			"height": 24,
			"seed": 1659439262,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780577,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K10",
			"rawText": "K10",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "JpUBrc8pV_NTGH5ypYPkA",
			"originalText": "K10",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1828,
			"versionNonce": 84518108,
			"isDeleted": false,
			"id": "GLnFhKL7KlPakC58TYLCW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1025.7754372634004,
			"y": 3268.1088465542243,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 72,
			"height": 68,
			"seed": 1748649182,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "6aogS6zn"
				}
			],
			"updated": 1707741780577,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1236,
			"versionNonce": 1702143716,
			"isDeleted": false,
			"id": "6aogS6zn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1050.0566872634004,
			"y": 3290.1088465542243,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 23.4375,
			"height": 24,
			"seed": 1620703518,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780577,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K8",
			"rawText": "K8",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "GLnFhKL7KlPakC58TYLCW",
			"originalText": "K8",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1846,
			"versionNonce": 1454942556,
			"isDeleted": false,
			"id": "NsMmf7tIvj1XDCAlHS8G_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1824.0012562016534,
			"y": 3266.9780268790755,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#99e9f2",
			"width": 72,
			"height": 68,
			"seed": 1400448350,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "iGz2WFiK"
				}
			],
			"updated": 1707741780577,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1265,
			"versionNonce": 226896484,
			"isDeleted": false,
			"id": "iGz2WFiK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1848.2825062016534,
			"y": 3288.9780268790755,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 841533854,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780577,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K5",
			"rawText": "K5",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "NsMmf7tIvj1XDCAlHS8G_",
			"originalText": "K5",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1687,
			"versionNonce": 353574364,
			"isDeleted": false,
			"id": "TAbHTUT55eI8HlAbkdpWt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1674.8002793314722,
			"y": 3267.8216949897273,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#99e9f2",
			"width": 72,
			"height": 68,
			"seed": 467264990,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "tMyDGGa7"
				}
			],
			"updated": 1707741780577,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1634,
			"versionNonce": 1620364623,
			"isDeleted": false,
			"id": "tMyDGGa7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1699.2902848246363,
			"y": 3289.3216949897273,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.019989013671875,
			"height": 25,
			"seed": 563968542,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063999,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K7",
			"rawText": "K7",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "TAbHTUT55eI8HlAbkdpWt",
			"originalText": "K7",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1837,
			"versionNonce": 2032861788,
			"isDeleted": false,
			"id": "kvxw2N04ie2mmx_iNPsB_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1750.556799057973,
			"y": 3265.13559124374,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#99e9f2",
			"width": 72,
			"height": 68,
			"seed": 174360158,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "KS7mDBFM"
				}
			],
			"updated": 1707741780577,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1250,
			"versionNonce": 1153556836,
			"isDeleted": false,
			"id": "KS7mDBFM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1774.838049057973,
			"y": 3287.13559124374,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 385878686,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780577,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K6",
			"rawText": "K6",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "kvxw2N04ie2mmx_iNPsB_",
			"originalText": "K6",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1872,
			"versionNonce": 1238521564,
			"isDeleted": false,
			"id": "CiIa0Rq1VPaSkGABM7mzc",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1897.0012562016536,
			"y": 3266.9780268790755,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#99e9f2",
			"width": 72,
			"height": 68,
			"seed": 1176569566,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "JfSvRft3"
				}
			],
			"updated": 1707741780577,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1266,
			"versionNonce": 877139172,
			"isDeleted": false,
			"id": "JfSvRft3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1921.2825062016536,
			"y": 3288.9780268790755,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 23.4375,
			"height": 24,
			"seed": 408451870,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780577,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K4",
			"rawText": "K4",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "CiIa0Rq1VPaSkGABM7mzc",
			"originalText": "K4",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1732,
			"versionNonce": 597367644,
			"isDeleted": false,
			"id": "hTGqeKXGXHKAGOMBoEqPC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2113.283952954728,
			"y": 3265.9990842818506,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#99e9f2",
			"width": 72,
			"height": 68,
			"seed": 1410819934,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "yUvzpMrT"
				}
			],
			"updated": 1707741780577,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1434,
			"versionNonce": 1246514031,
			"isDeleted": false,
			"id": "yUvzpMrT",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2140.4439566168376,
			"y": 3287.4990842818506,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 17.67999267578125,
			"height": 25,
			"seed": 1236192158,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063999,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K1",
			"rawText": "K1",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "hTGqeKXGXHKAGOMBoEqPC",
			"originalText": "K1",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1694,
			"versionNonce": 1087852508,
			"isDeleted": false,
			"id": "GxjFUazvw7dLzHcQiGb9w",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1967.2839529547282,
			"y": 3266.9990842818506,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#99e9f2",
			"width": 72,
			"height": 68,
			"seed": 391096286,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "8SzfIulG"
				}
			],
			"updated": 1707741780578,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1640,
			"versionNonce": 682558863,
			"isDeleted": false,
			"id": "8SzfIulG",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1990.343965772111,
			"y": 3288.4990842818506,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 25.879974365234375,
			"height": 25,
			"seed": 1829436446,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063999,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K3",
			"rawText": "K3",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "GxjFUazvw7dLzHcQiGb9w",
			"originalText": "K3",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1739,
			"versionNonce": 1100543068,
			"isDeleted": false,
			"id": "Z4U1wHUc9PwyxTXXAw64l",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2040.2839529547282,
			"y": 3266.9990842818506,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#99e9f2",
			"width": 72,
			"height": 68,
			"seed": 1355925598,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "yQL55uTO"
				}
			],
			"updated": 1707741780578,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1443,
			"versionNonce": 989166511,
			"isDeleted": false,
			"id": "yQL55uTO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2063.0339605841227,
			"y": 3288.4990842818506,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 26.499984741210938,
			"height": 25,
			"seed": 1651838110,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063999,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K2",
			"rawText": "K2",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "Z4U1wHUc9PwyxTXXAw64l",
			"originalText": "K2",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 1732,
			"versionNonce": 1941047516,
			"isDeleted": false,
			"id": "k3hi6cQ1c79kEELyIwhpJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1604.3078376964536,
			"y": 3269.382666347305,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 72,
			"height": 68,
			"seed": 530958558,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "l1YUjkvA"
				}
			],
			"updated": 1707741780578,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1409,
			"versionNonce": 1162358223,
			"isDeleted": false,
			"id": "l1YUjkvA",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1627.2978431896177,
			"y": 3290.882666347305,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#ffc9c9",
			"width": 26.019989013671875,
			"height": 25,
			"seed": 670367006,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1710908063999,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "K0",
			"rawText": "K0",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "k3hi6cQ1c79kEELyIwhpJ",
			"originalText": "K0",
			"lineHeight": 1.2,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 871,
			"versionNonce": 448040284,
			"isDeleted": false,
			"id": "uFiQo5l2FSQQjhMDMCKyU",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2129.4321914932557,
			"y": 3371.8975560186623,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 13871454,
			"groupIds": [
				"zI_iQ4cheS3nR0c4L36IK",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "kwe-F_7JIvKNdgenF8e2R",
					"type": "arrow"
				}
			],
			"updated": 1707741780578,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 870,
			"versionNonce": 44729956,
			"isDeleted": false,
			"id": "5pzf0nZsTaTvQBc4u4l8s",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2149.3243315426703,
			"y": 3372.23130590378,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1502793118,
			"groupIds": [
				"zI_iQ4cheS3nR0c4L36IK",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780578,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 868,
			"versionNonce": 938639836,
			"isDeleted": false,
			"id": "nkHtcZZXieebI6majAVRg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2130.0369317450672,
			"y": 3389.8415405015908,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1331915230,
			"groupIds": [
				"zI_iQ4cheS3nR0c4L36IK",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780578,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 942,
			"versionNonce": 1473518052,
			"isDeleted": false,
			"id": "N6EPPx8Kv_fm4pod2rvZ-",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2150.6048779827747,
			"y": 3333.7553842900547,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1180.5407221136436,
			"seed": 827751966,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780578,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 959,
			"versionNonce": 1383982684,
			"isDeleted": false,
			"id": "iGBPdKwyHhtRDvgKveNZI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2078.159487669896,
			"y": 3335.967395930825,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1178.5216811076705,
			"seed": 1146948190,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780578,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 965,
			"versionNonce": 159333732,
			"isDeleted": false,
			"id": "f6AZ8tnFJW3RZjyJhTy-3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2001.5968454972672,
			"y": 3335.967395930825,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.1368683772161603e-13,
			"height": 1178.5216811076702,
			"seed": 122162846,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780578,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1004,
			"versionNonce": 1059633884,
			"isDeleted": false,
			"id": "q3YvLaaHGv7pYrdXW0u94",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1931.9944435221505,
			"y": 3335.967395930825,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.684341886080802e-14,
			"height": 1181.8883461083487,
			"seed": 1992854238,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780578,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1048,
			"versionNonce": 821686500,
			"isDeleted": false,
			"id": "LIgjhFTC_o6pjBWrmeMHN",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1859.409081462385,
			"y": 3338.160870305843,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.684341886080802e-14,
			"height": 1180.998074078317,
			"seed": 1366261534,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780578,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1024,
			"versionNonce": 1753546588,
			"isDeleted": false,
			"id": "qDb4EyPnNh02bgUZsW1hN",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1785.8293993744046,
			"y": 3332.9844358461773,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1186.1745085379823,
			"seed": 1538124638,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780578,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1125,
			"versionNonce": 231879780,
			"isDeleted": false,
			"id": "LcGUCxX-owrs4bugJspcR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1714.306635449051,
			"y": 3334.4075514438714,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1182.1289503189232,
			"seed": 601149342,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780578,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1044,
			"versionNonce": 384087004,
			"isDeleted": false,
			"id": "0BPaTZjv-yFoagdGylnP8",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1640.6586752548747,
			"y": 3337.956035987257,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1185.4533009345473,
			"seed": 1175792606,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780578,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 930,
			"versionNonce": 1037436900,
			"isDeleted": false,
			"id": "nNatPkGK5FBKXxYFdzNBp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2058.496996145816,
			"y": 3439.6457931191376,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 813695006,
			"groupIds": [
				"B6Qjbpo_4ADyVCbdEm1-P",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "OV_GHEVwlg7FxNsUh-v71",
					"type": "arrow"
				}
			],
			"updated": 1707741780578,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 929,
			"versionNonce": 945412188,
			"isDeleted": false,
			"id": "P1P5SWvIkhpPkJH4ha-iy",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2078.3891361952305,
			"y": 3439.9795430042554,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1728466014,
			"groupIds": [
				"B6Qjbpo_4ADyVCbdEm1-P",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780578,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 927,
			"versionNonce": 1964206948,
			"isDeleted": false,
			"id": "-AGEITlZGcn2lsnAenysK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2059.1017363976284,
			"y": 3457.589777602066,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1199116446,
			"groupIds": [
				"B6Qjbpo_4ADyVCbdEm1-P",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780578,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 980,
			"versionNonce": 683044060,
			"isDeleted": false,
			"id": "yZE1VVYgVeyMNnlqwgMrf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1981.7651173011345,
			"y": 3511.236835150686,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1300843742,
			"groupIds": [
				"xOziXmzlGpGU6M7JdamdD",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "_yd0T_HHjVth6B6XuO2vp",
					"type": "arrow"
				}
			],
			"updated": 1707741780578,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 979,
			"versionNonce": 903372516,
			"isDeleted": false,
			"id": "TTFYvk1BnY1nWIJZbZaUW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2001.6572573505491,
			"y": 3511.570585035804,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1455948062,
			"groupIds": [
				"xOziXmzlGpGU6M7JdamdD",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780578,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 977,
			"versionNonce": 2039247196,
			"isDeleted": false,
			"id": "bho_3uP6Q6ozBtrb4836V",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1982.369857552947,
			"y": 3529.180819633615,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1722166622,
			"groupIds": [
				"xOziXmzlGpGU6M7JdamdD",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780578,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1053,
			"versionNonce": 145941092,
			"isDeleted": false,
			"id": "B_utE0ZbebyF2plaE-oAy",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1910.5866169476676,
			"y": 3581.833557154019,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1786040734,
			"groupIds": [
				"104XzAeogjSl1Ur1cN0nS",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780578,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1053,
			"versionNonce": 976086492,
			"isDeleted": false,
			"id": "CgZ8n7id2cDA_w3mGN0hu",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1930.4787569970822,
			"y": 3582.167307039137,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 2103766494,
			"groupIds": [
				"104XzAeogjSl1Ur1cN0nS",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780578,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1051,
			"versionNonce": 879818212,
			"isDeleted": false,
			"id": "HpVCu5taCiSzz8eu5KxFt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1911.1913571994792,
			"y": 3599.7775416369477,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 747078174,
			"groupIds": [
				"104XzAeogjSl1Ur1cN0nS",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780578,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1097,
			"versionNonce": 1068288604,
			"isDeleted": false,
			"id": "e6hgQNLQeBC30o8q2NbHv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1837.7103657128355,
			"y": 3648.452999044488,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 986549854,
			"groupIds": [
				"5FXAGzGYvE70r5GC36DjY",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780578,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1097,
			"versionNonce": 1981847908,
			"isDeleted": false,
			"id": "Sqyycz46YaYlCzqHa4tr_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1857.60250576225,
			"y": 3648.786748929606,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1695027870,
			"groupIds": [
				"5FXAGzGYvE70r5GC36DjY",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780578,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1095,
			"versionNonce": 1826299612,
			"isDeleted": false,
			"id": "Ps325lOpLACoVvZuw7emo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1838.315105964647,
			"y": 3666.3969835274183,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 635965150,
			"groupIds": [
				"5FXAGzGYvE70r5GC36DjY",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780578,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1144,
			"versionNonce": 957336804,
			"isDeleted": false,
			"id": "3mPoApWulHXOl-cqg7ukI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1766.164638382421,
			"y": 3719.6452909178133,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 2046722846,
			"groupIds": [
				"wIVT0h77-mTog1nZNPGpe",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "AeS1noN7__2Qmt63e1C0f",
					"type": "arrow"
				}
			],
			"updated": 1707741780579,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1143,
			"versionNonce": 2051728220,
			"isDeleted": false,
			"id": "jGWLXCkNoizthGCpmQ8iQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1786.0567784318355,
			"y": 3719.979040802931,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 599551838,
			"groupIds": [
				"wIVT0h77-mTog1nZNPGpe",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780579,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1141,
			"versionNonce": 1322029156,
			"isDeleted": false,
			"id": "8I2MpjAaVsx5myg03kAX4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1766.7693786342325,
			"y": 3737.5892754007436,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1869796254,
			"groupIds": [
				"wIVT0h77-mTog1nZNPGpe",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780579,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1210,
			"versionNonce": 1045305308,
			"isDeleted": false,
			"id": "_X1RExWmebLkhXGOJCwqv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1692.3435237826106,
			"y": 3789.5171201545036,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 2001907678,
			"groupIds": [
				"4Q0x7sbQCTAUNi8CK1Fxq",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780579,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1210,
			"versionNonce": 656729060,
			"isDeleted": false,
			"id": "vLtC68aHNCPNn-s7suzXp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1712.2356638320252,
			"y": 3789.8508700396214,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1735197726,
			"groupIds": [
				"4Q0x7sbQCTAUNi8CK1Fxq",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780579,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1208,
			"versionNonce": 1962327132,
			"isDeleted": false,
			"id": "m1MbXPhfisCwgbJgeo3PF",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1692.9482640344222,
			"y": 3807.461104637432,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1102237790,
			"groupIds": [
				"4Q0x7sbQCTAUNi8CK1Fxq",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780579,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1263,
			"versionNonce": 136759140,
			"isDeleted": false,
			"id": "74iNr9icANZ1o0ug_yFsu",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1620.0234062065238,
			"y": 3857.2926886258374,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 569709726,
			"groupIds": [
				"wcMtYqIEbq_87q6ftLmj6",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "sycw23io5yohJd-oRK4TA",
					"type": "arrow"
				}
			],
			"updated": 1707741780579,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1262,
			"versionNonce": 135712988,
			"isDeleted": false,
			"id": "ZrCi8GxXNG9_hc3m67_2j",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1639.9155462559384,
			"y": 3857.6264385109553,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 31772894,
			"groupIds": [
				"wcMtYqIEbq_87q6ftLmj6",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780579,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1260,
			"versionNonce": 1176517348,
			"isDeleted": false,
			"id": "MJEzO67ar7zxWjq9X-rU1",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1620.6281464583358,
			"y": 3875.236673108766,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 2098398494,
			"groupIds": [
				"wcMtYqIEbq_87q6ftLmj6",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780579,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1825,
			"versionNonce": 2003060239,
			"isDeleted": false,
			"id": "kwe-F_7JIvKNdgenF8e2R",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2171.6822641321774,
			"y": 3390.6185367521416,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 60.26375886637925,
			"height": 0,
			"seed": 351318366,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908064003,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "uFiQo5l2FSQQjhMDMCKyU",
				"gap": 2.200651626039871,
				"focus": -0.013167495614155231
			},
			"endBinding": {
				"elementId": "1PYQlcrC5ZYGdqTzR2Gu-",
				"gap": 6.40790722850852,
				"focus": -0.0497605873025243
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
					60.26375886637925,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 2291,
			"versionNonce": 252137039,
			"isDeleted": false,
			"id": "OV_GHEVwlg7FxNsUh-v71",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2100.091628864317,
			"y": 3455.623378084473,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 131.86273991917687,
			"height": 1.1826254701263679,
			"seed": 1959712158,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908064004,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "nNatPkGK5FBKXxYFdzNBp",
				"gap": 1.5452117056192947,
				"focus": -0.16640123725006664
			},
			"endBinding": {
				"elementId": "Q6m1qd5f_fUzRlm0sOkAu",
				"gap": 7.883837587518883,
				"focus": -0.05082044618153792
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
					131.86273991917687,
					1.1826254701263679
				]
			]
		},
		{
			"type": "arrow",
			"version": 1746,
			"versionNonce": 1963695279,
			"isDeleted": false,
			"id": "Cr-3iE40sMgxwF5p5GoZ1",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1877.0985323641544,
			"y": 3666.888169708758,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 354.710434507077,
			"height": 9.094947017729282e-13,
			"seed": 903770590,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908064005,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "j98jRsANvqZAltZfVNCPo",
				"gap": 7.319150367055045,
				"focus": -0.05634110713856087
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
					354.710434507077,
					9.094947017729282e-13
				]
			]
		},
		{
			"type": "arrow",
			"version": 1739,
			"versionNonce": 2045914831,
			"isDeleted": false,
			"id": "U8kIA8yuGjWHTEO_7UFnx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1949.6220908055366,
			"y": 3599.2970656063153,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 281.9838700840951,
			"height": 9.094947017729282e-13,
			"seed": 590382622,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908064005,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "St9RoucexhW-w_b3__deC",
				"gap": 6.527836320438837,
				"focus": -0.027762806786322623
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
					-9.094947017729282e-13
				]
			]
		},
		{
			"type": "arrow",
			"version": 2530,
			"versionNonce": 724911759,
			"isDeleted": false,
			"id": "_yd0T_HHjVth6B6XuO2vp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2022.8145383140163,
			"y": 3529.162161022834,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 209.8527181569375,
			"height": 0,
			"seed": 2109084254,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908064004,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "yZE1VVYgVeyMNnlqwgMrf",
				"gap": 1,
				"focus": -0.055108571811642595
			},
			"endBinding": {
				"elementId": "YSVl8AGHKm971Zxhu6P2b",
				"gap": 6.8159053336958095,
				"focus": -0.08103286603433364
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
					209.8527181569375,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 2601,
			"versionNonce": 2017593103,
			"isDeleted": false,
			"id": "AeS1noN7__2Qmt63e1C0f",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1807.8827988098647,
			"y": 3737.88653946086,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 421.2924219612014,
			"height": 0,
			"seed": 1077941918,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908064005,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "3mPoApWulHXOl-cqg7ukI",
				"gap": 1.6687394145619692,
				"focus": -0.03845545064486584
			},
			"endBinding": {
				"elementId": "_N7TNeqOxohvioU40oci7",
				"gap": 10.307941033583575,
				"focus": -0.04726930172803216
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
					421.2924219612014,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 1843,
			"versionNonce": 1940671791,
			"isDeleted": false,
			"id": "yBsDDrisiJxXH2lFjt6Ig",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1730.8457253800566,
			"y": 3807.680811115215,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 502.1029634316528,
			"height": 1.8189894035458565e-12,
			"seed": 1669305054,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908064006,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "e7pJ-l6l7-p7GAf2RvW3Q",
				"gap": 5.185108398361081,
				"focus": -0.013225333629799245
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
					502.1029634316528,
					1.8189894035458565e-12
				]
			]
		},
		{
			"type": "arrow",
			"version": 2709,
			"versionNonce": 235933039,
			"isDeleted": false,
			"id": "sycw23io5yohJd-oRK4TA",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1661.4209807869186,
			"y": 3876.2574532689086,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 569.6970580147752,
			"height": 9.094947017729282e-13,
			"seed": 570787614,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908064006,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "74iNr9icANZ1o0ug_yFsu",
				"gap": 1.348153567513009,
				"focus": -0.0003169997209940992
			},
			"endBinding": {
				"elementId": "0jSgNAGrBODCLTHyZXKkx",
				"gap": 9.741362242540617,
				"focus": 0.03105445781696016
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
					569.6970580147752,
					9.094947017729282e-13
				]
			]
		},
		{
			"type": "line",
			"version": 1033,
			"versionNonce": 1022150492,
			"isDeleted": false,
			"id": "RobtqXBXpJL07-gZ-qfSJ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1565.3763069590968,
			"y": 3341.5638644977676,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1180.5407221136436,
			"seed": 1011020638,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780579,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1050,
			"versionNonce": 1789586532,
			"isDeleted": false,
			"id": "sffo5HyQqBeqklblhLF4t",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1492.930916646218,
			"y": 3343.775876138539,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1178.5216811076705,
			"seed": 1015601054,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780579,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1056,
			"versionNonce": 454261724,
			"isDeleted": false,
			"id": "oojQTTxT5uM9zipTg3glP",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1416.3682744735893,
			"y": 3343.775876138539,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.1368683772161603e-13,
			"height": 1178.5216811076702,
			"seed": 990393310,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780579,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1095,
			"versionNonce": 1859633124,
			"isDeleted": false,
			"id": "GwAYzwvpyZXKoKsRpB6cI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1346.7658724984722,
			"y": 3343.775876138539,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.684341886080802e-14,
			"height": 1181.8883461083487,
			"seed": 567412766,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780579,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1136,
			"versionNonce": 1534042204,
			"isDeleted": false,
			"id": "fhBgx8VSyysiikuP81voR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1274.1805104387076,
			"y": 3345.969350513556,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 5.684341886080802e-14,
			"height": 1180.998074078317,
			"seed": 1893160030,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780579,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1115,
			"versionNonce": 220078948,
			"isDeleted": false,
			"id": "K-IjBlOnN2liFFnON1046",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1200.6008283507263,
			"y": 3340.792916053891,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1186.1745085379823,
			"seed": 32053406,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780579,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1216,
			"versionNonce": 1976775900,
			"isDeleted": false,
			"id": "KQakFYy1ME4vEnfSM-rrU",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1129.0780644253728,
			"y": 3342.216031651585,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1182.1289503189232,
			"seed": 1287148766,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780579,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1135,
			"versionNonce": 1808537316,
			"isDeleted": false,
			"id": "ZauEqsO8HIzVjxwf9O6D7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1055.4301042311963,
			"y": 3345.764516194971,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 1185.4533009345473,
			"seed": 718670110,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780579,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 983,
			"versionNonce": 399522140,
			"isDeleted": false,
			"id": "7BjVT-KgB9Sr24JDJBsz-",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1547.2231142050496,
			"y": 3926.7952990568447,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 464729438,
			"groupIds": [
				"-JAa1nrPBrg9U4evbZ_SN",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "jyiyS6QNDWnFy1J4_K3q4",
					"type": "arrow"
				}
			],
			"updated": 1707741780579,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 982,
			"versionNonce": 930060900,
			"isDeleted": false,
			"id": "olYRF1aIebHpSwJq2YPko",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1567.1152542544642,
			"y": 3927.1290489419625,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 144759198,
			"groupIds": [
				"-JAa1nrPBrg9U4evbZ_SN",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780579,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 980,
			"versionNonce": 1824042460,
			"isDeleted": false,
			"id": "XpXclxq3BR5VtpbeChOE5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1547.827854456862,
			"y": 3944.739283539773,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 147846622,
			"groupIds": [
				"-JAa1nrPBrg9U4evbZ_SN",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780579,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1043,
			"versionNonce": 1524018660,
			"isDeleted": false,
			"id": "U5Pn4-PnLlujy_jJiN2eK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1474.8409283768606,
			"y": 3994.543536157318,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 626100766,
			"groupIds": [
				"Py7qi66wR25yLNy0W4Gpm",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "-_-BWFeNFjz9yuu1JfB_t",
					"type": "arrow"
				}
			],
			"updated": 1707741780579,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1042,
			"versionNonce": 1704890972,
			"isDeleted": false,
			"id": "cvnwk_FnfJY7H6GI1m8KF",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1494.7330684262752,
			"y": 3994.877286042436,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 488019550,
			"groupIds": [
				"Py7qi66wR25yLNy0W4Gpm",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780579,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1040,
			"versionNonce": 923750756,
			"isDeleted": false,
			"id": "0YdC-R5DD2VctHLcMZKLZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1475.4456686286726,
			"y": 4012.4875206402485,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 686824094,
			"groupIds": [
				"Py7qi66wR25yLNy0W4Gpm",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780579,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1094,
			"versionNonce": 22275804,
			"isDeleted": false,
			"id": "vBgMfxOP2FyhlbpmACW9i",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1396.6620590514285,
			"y": 4066.1345781888685,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1066342110,
			"groupIds": [
				"681ogsqQE7k2WUE0APu24",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "sclfFGGL0Jqn52PUvZx1T",
					"type": "arrow"
				}
			],
			"updated": 1707741780580,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1093,
			"versionNonce": 1533510884,
			"isDeleted": false,
			"id": "MS9lQb2RLxg5aFj43Vw5r",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1416.554199100843,
			"y": 4066.4683280739864,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1501858590,
			"groupIds": [
				"681ogsqQE7k2WUE0APu24",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780580,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1091,
			"versionNonce": 342535004,
			"isDeleted": false,
			"id": "jVJR8Uzw2oGTRqWA5v4Ex",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1397.266799303241,
			"y": 4084.078562671797,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 893482846,
			"groupIds": [
				"681ogsqQE7k2WUE0APu24",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780580,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1165,
			"versionNonce": 1030572132,
			"isDeleted": false,
			"id": "kWz_yzJnevGm-RUEkG7Ty",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1328.377539659462,
			"y": 4136.731300192201,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 454482846,
			"groupIds": [
				"uMIEMYF6oJdHzajHpv2Lo",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780580,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1165,
			"versionNonce": 288677852,
			"isDeleted": false,
			"id": "nrGlaQqgf2PXccuLKqgC5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1348.2696797088765,
			"y": 4137.065050077319,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 557168606,
			"groupIds": [
				"uMIEMYF6oJdHzajHpv2Lo",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780580,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1163,
			"versionNonce": 1894685668,
			"isDeleted": false,
			"id": "WN6x44vTcqdVe10OngtCg",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1328.9822799112735,
			"y": 4154.67528467513,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1873742878,
			"groupIds": [
				"uMIEMYF6oJdHzajHpv2Lo",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780580,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1209,
			"versionNonce": 1338279004,
			"isDeleted": false,
			"id": "-4M5XUH6qVhF9ao3Q4Zbw",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1255.5012884246298,
			"y": 4203.35074208267,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 74700894,
			"groupIds": [
				"J87qRpjlsihohLCRF_BxL",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780580,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1209,
			"versionNonce": 1610186596,
			"isDeleted": false,
			"id": "nzjUX9yIvb-bzx10XRtFi",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1275.3934284740444,
			"y": 4203.684491967788,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 2002066590,
			"groupIds": [
				"J87qRpjlsihohLCRF_BxL",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780580,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1207,
			"versionNonce": 1441503452,
			"isDeleted": false,
			"id": "dCgEKtnhhV3h0_pzFbXSf",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1256.1060286764414,
			"y": 4221.2947265656,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 1040439518,
			"groupIds": [
				"J87qRpjlsihohLCRF_BxL",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780580,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1256,
			"versionNonce": 47968996,
			"isDeleted": false,
			"id": "trCbr44BPuD2x-_UTUQeI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1183.9555610942152,
			"y": 4274.543033955995,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 1880165662,
			"groupIds": [
				"qNS5GWGmfQxSUL8RPlh_z",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "6ef94UN84ntwym_MNwPNL",
					"type": "arrow"
				}
			],
			"updated": 1707741780580,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1255,
			"versionNonce": 524033372,
			"isDeleted": false,
			"id": "XWdLCyYJJzyx5CJeemrtX",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1203.8477011436298,
			"y": 4274.876783841113,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 183351646,
			"groupIds": [
				"qNS5GWGmfQxSUL8RPlh_z",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780580,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1253,
			"versionNonce": 405010020,
			"isDeleted": false,
			"id": "495EsjXaVlHHCg6VGzPmH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1184.5603013460268,
			"y": 4292.487018438926,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 904584606,
			"groupIds": [
				"qNS5GWGmfQxSUL8RPlh_z",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780580,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1322,
			"versionNonce": 1695027676,
			"isDeleted": false,
			"id": "8e7Km9pE1rLmIZgyQQRf9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1110.134446494405,
			"y": 4344.4148631926855,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 104430046,
			"groupIds": [
				"yv4IUsrKwMp9R8qcojhOI",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780580,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1322,
			"versionNonce": 1553959396,
			"isDeleted": false,
			"id": "XR5A74o_mdLOttfvLMB6U",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1130.0265865438196,
			"y": 4344.748613077803,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1122668062,
			"groupIds": [
				"yv4IUsrKwMp9R8qcojhOI",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780580,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1320,
			"versionNonce": 1717663324,
			"isDeleted": false,
			"id": "rAdk2DVLI2oWxgPBeg1l7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1110.7391867462175,
			"y": 4362.358847675614,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 686758494,
			"groupIds": [
				"yv4IUsrKwMp9R8qcojhOI",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780580,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1382,
			"versionNonce": 1130147172,
			"isDeleted": false,
			"id": "a_2G_KzqFeoPFlGCM6xfL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1036.2544844313643,
			"y": 4413.750276150972,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 790109854,
			"groupIds": [
				"gcMtQLyoqBAHEgY7dlX-z",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [
				{
					"id": "68hQEIrlFSG7XUk2cUwha",
					"type": "arrow"
				}
			],
			"updated": 1707741780580,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 1381,
			"versionNonce": 807029468,
			"isDeleted": false,
			"id": "XOKb2887zIzKZoTiT_6gn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1056.1466244807789,
			"y": 4414.08402603609,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 1242995422,
			"groupIds": [
				"gcMtQLyoqBAHEgY7dlX-z",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780580,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 1379,
			"versionNonce": 766075108,
			"isDeleted": false,
			"id": "R2IWpeUL9RunOD-sZFcu_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1036.8592246831768,
			"y": 4431.694260633901,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 813403934,
			"groupIds": [
				"gcMtQLyoqBAHEgY7dlX-z",
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780580,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 2545,
			"versionNonce": 238075311,
			"isDeleted": false,
			"id": "jyiyS6QNDWnFy1J4_K3q4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1589.4731868439724,
			"y": 3945.516279790323,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 647.5015544874284,
			"height": 0,
			"seed": 515373918,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908064006,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "7BjVT-KgB9Sr24JDJBsz-",
				"gap": 2.200651626041008,
				"focus": -0.013167495614203174
			},
			"endBinding": {
				"elementId": "8sGk76ctOIFsqzLzSKBZm",
				"gap": 3.41340636654013,
				"focus": -0.01985900339412397
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
					647.5015544874284,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 2598,
			"versionNonce": 2106744303,
			"isDeleted": false,
			"id": "-_-BWFeNFjz9yuu1JfB_t",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1516.435561095362,
			"y": 4010.521121122654,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 714.0560769207511,
			"height": 9.094947017729282e-13,
			"seed": 454877086,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908064007,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "U5Pn4-PnLlujy_jJiN2eK",
				"gap": 1.545211705619522,
				"focus": -0.1577791564528887
			},
			"endBinding": {
				"elementId": "me9S3PAB9N0JWVyMPXvkR",
				"gap": 10.031421231197328,
				"focus": -0.014729759358730539
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
					714.0560769207511,
					9.094947017729282e-13
				]
			]
		},
		{
			"type": "arrow",
			"version": 1910,
			"versionNonce": 1794723919,
			"isDeleted": false,
			"id": "5omTy8mciCS6wyXzRhxJ5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1294.8894550759487,
			"y": 4221.78591274694,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 936.7562957624009,
			"height": 9.094947017729282e-13,
			"seed": 970669022,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908064008,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "GTZv74OlObndeh7gjJ67i",
				"gap": 9.51658387081352,
				"focus": -0.02643952323018286
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
					936.7562957624009,
					-9.094947017729282e-13
				]
			]
		},
		{
			"type": "arrow",
			"version": 1936,
			"versionNonce": 992505455,
			"isDeleted": false,
			"id": "b7Eb93YPcX_Px13lvHEsd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1367.413013517331,
			"y": 4154.194808644497,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 866.0167496209292,
			"height": 2.147357481127983,
			"seed": 1627656222,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908064008,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "jIhNkXgfjfC0Ae_yWi2qx",
				"gap": 8.087616137266195,
				"focus": -0.11692280475258218
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
					866.0167496209292,
					-2.147357481127983
				]
			]
		},
		{
			"type": "arrow",
			"version": 2805,
			"versionNonce": 1421405743,
			"isDeleted": false,
			"id": "sclfFGGL0Jqn52PUvZx1T",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1437.7114800643105,
			"y": 4084.059904061016,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 792.2058479525342,
			"height": 9.094947017729282e-13,
			"seed": 210263134,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908064007,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "vBgMfxOP2FyhlbpmACW9i",
				"gap": 1.0000000000002274,
				"focus": -0.055108571811665216
			},
			"endBinding": {
				"elementId": "SdOBDRvN0FrtPsUbAskB5",
				"gap": 11.60005125868156,
				"focus": -0.13050567004240435
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
					792.2058479525342,
					-9.094947017729282e-13
				]
			]
		},
		{
			"type": "arrow",
			"version": 2881,
			"versionNonce": 1197792943,
			"isDeleted": false,
			"id": "6ef94UN84ntwym_MNwPNL",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1225.6737215216592,
			"y": 4292.784282499042,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1003.0780483551905,
			"height": 0,
			"seed": 305733790,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908064008,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "trCbr44BPuD2x-_UTUQeI",
				"gap": 1.6687394145621965,
				"focus": -0.03845545064488981
			},
			"endBinding": {
				"elementId": "xT7LvzFsEdr1ykL9_A5O8",
				"gap": 11.41624480409746,
				"focus": -0.0570549117778415
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
					1003.0780483551905,
					0
				]
			]
		},
		{
			"type": "arrow",
			"version": 2002,
			"versionNonce": 1943220431,
			"isDeleted": false,
			"id": "WgxwtUY6ybMlBq1GwbaQS",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1148.6366480918514,
			"y": 4362.578554153397,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1081.562112265749,
			"height": 0,
			"seed": 1707564254,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908064009,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": {
				"elementId": "2BkpAO2NGJZfmewz7wAgF",
				"gap": 9.969254323346831,
				"focus": 0.016676250278632166
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
			"version": 3030,
			"versionNonce": 189434127,
			"isDeleted": false,
			"id": "68hQEIrlFSG7XUk2cUwha",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1079.099049492509,
			"y": 4432.685835905315,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1151.0997108650918,
			"height": 1.4727696884438046,
			"seed": 1556353310,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1710908064009,
			"link": null,
			"locked": false,
			"startBinding": {
				"elementId": "a_2G_KzqFeoPFlGCM6xfL",
				"gap": 2.795144048262955,
				"focus": -0.00031699972101627207
			},
			"endBinding": {
				"elementId": "cOc3WZW9nyADxNqwvhbUY",
				"gap": 9.996128968351059,
				"focus": 0.021268847767126266
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
					1151.0997108650918,
					-1.4727696884438046
				]
			]
		},
		{
			"type": "rectangle",
			"version": 1456,
			"versionNonce": 1367605596,
			"isDeleted": false,
			"id": "BVChfESZEmTLq2pSVLO4O",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2112.289127019803,
			"y": 4521.687555393122,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1923104094,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "o07qYDVG"
				}
			],
			"updated": 1707741780580,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 995,
			"versionNonce": 2042384996,
			"isDeleted": false,
			"id": "o07qYDVG",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2124.851627019803,
			"y": 4543.687555393122,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 212656542,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780580,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ112",
			"rawText": "δ112",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "BVChfESZEmTLq2pSVLO4O",
			"originalText": "δ112",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1509,
			"versionNonce": 1286829532,
			"isDeleted": false,
			"id": "VALl-OsYcEL7gkz1RHli6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1964.0688069241396,
			"y": 4523.401500505886,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1041956318,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "KymE44w9"
				}
			],
			"updated": 1707741780580,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1049,
			"versionNonce": 583820772,
			"isDeleted": false,
			"id": "KymE44w9",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1976.6313069241396,
			"y": 4545.401500505886,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 201036318,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780580,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ114",
			"rawText": "δ114",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "VALl-OsYcEL7gkz1RHli6",
			"originalText": "δ114",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1429,
			"versionNonce": 184572508,
			"isDeleted": false,
			"id": "nZk8tTZzvk8bMxH_DTqKC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2037.257323635491,
			"y": 4523.401500505886,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 826252894,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "EHS0itOY"
				}
			],
			"updated": 1707741780580,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 970,
			"versionNonce": 1737361764,
			"isDeleted": false,
			"id": "EHS0itOY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2049.819823635491,
			"y": 4545.401500505886,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1656234654,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780581,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ113",
			"rawText": "δ113",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "nZk8tTZzvk8bMxH_DTqKC",
			"originalText": "δ113",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1468,
			"versionNonce": 658288348,
			"isDeleted": false,
			"id": "-EdWRWft7iSTB0oADi3yN",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1891.763677297091,
			"y": 4522.40718047767,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 320216798,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "mnXgBCgc"
				}
			],
			"updated": 1707741780581,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1009,
			"versionNonce": 2068790500,
			"isDeleted": false,
			"id": "mnXgBCgc",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1904.326177297091,
			"y": 4544.40718047767,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 921342750,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780581,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ115",
			"rawText": "δ115",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "-EdWRWft7iSTB0oADi3yN",
			"originalText": "δ115",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1472,
			"versionNonce": 301626204,
			"isDeleted": false,
			"id": "GvykBDyIS9viN_8K3WkNC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1748.0799149221384,
			"y": 4523.111811468991,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 145129310,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "ht9inVSe"
				}
			],
			"updated": 1707741780581,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1011,
			"versionNonce": 2006843492,
			"isDeleted": false,
			"id": "ht9inVSe",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1760.6424149221384,
			"y": 4545.111811468991,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1285219230,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780581,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ117",
			"rawText": "δ117",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "GvykBDyIS9viN_8K3WkNC",
			"originalText": "δ117",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1459,
			"versionNonce": 1502324700,
			"isDeleted": false,
			"id": "mr5qoPbjWbP17nzKZeKkQ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1675.885718239002,
			"y": 4521.70254948635,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 351846366,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "YJpySkhd"
				}
			],
			"updated": 1707741780581,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1002,
			"versionNonce": 340284388,
			"isDeleted": false,
			"id": "YJpySkhd",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1688.448218239002,
			"y": 4543.70254948635,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 97588254,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780581,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ118",
			"rawText": "δ118",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "mr5qoPbjWbP17nzKZeKkQ",
			"originalText": "δ118",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1475,
			"versionNonce": 1912753244,
			"isDeleted": false,
			"id": "HCyp3bE8RRphsRyOcxMIt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1602.407512490754,
			"y": 4522.986558551462,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 420798558,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "h4JaCXSv"
				}
			],
			"updated": 1707741780581,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1014,
			"versionNonce": 1599879012,
			"isDeleted": false,
			"id": "h4JaCXSv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1614.970012490754,
			"y": 4544.986558551462,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1653941406,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780581,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ119",
			"rawText": "δ119",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "HCyp3bE8RRphsRyOcxMIt",
			"originalText": "δ119",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1474,
			"versionNonce": 2100322524,
			"isDeleted": false,
			"id": "BJuy1vS06rwlwpbqwF961",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1819.2797915770589,
			"y": 4523.401500505886,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1409474782,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "PBWpv8cS"
				}
			],
			"updated": 1707741780581,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1019,
			"versionNonce": 1965533924,
			"isDeleted": false,
			"id": "PBWpv8cS",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1831.8422915770589,
			"y": 4545.401500505886,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 15668510,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780581,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ116",
			"rawText": "δ116",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "BJuy1vS06rwlwpbqwF961",
			"originalText": "δ116",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1808,
			"versionNonce": 312993116,
			"isDeleted": false,
			"id": "i_xfziIaNQiurqtgnbIeZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1022.0406332124626,
			"y": 4525.264103963331,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1657454942,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "FOe6vpR3"
				}
			],
			"updated": 1707741780581,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1346,
			"versionNonce": 943238756,
			"isDeleted": false,
			"id": "FOe6vpR3",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1034.6031332124626,
			"y": 4547.264103963331,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 484894110,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780581,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ127",
			"rawText": "δ127",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "i_xfziIaNQiurqtgnbIeZ",
			"originalText": "δ127",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1712,
			"versionNonce": 129685980,
			"isDeleted": false,
			"id": "vCjpALfKSlip-CcjZQxPt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1460.790285016053,
			"y": 4522.835662028821,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1081377246,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "WRKgfV9j"
				}
			],
			"updated": 1707741780581,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1255,
			"versionNonce": 157106660,
			"isDeleted": false,
			"id": "WRKgfV9j",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1473.352785016053,
			"y": 4544.835662028821,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 277124638,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780581,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ121",
			"rawText": "δ121",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "vCjpALfKSlip-CcjZQxPt",
			"originalText": "δ121",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1634,
			"versionNonce": 930823772,
			"isDeleted": false,
			"id": "nXv5oxCL91FNqki-Gb869",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1533.978801727405,
			"y": 4522.835662028821,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1174938206,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "qBEXs4dZ"
				}
			],
			"updated": 1707741780581,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1180,
			"versionNonce": 2141414756,
			"isDeleted": false,
			"id": "qBEXs4dZ",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1546.541301727405,
			"y": 4544.835662028821,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1406150302,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780581,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ120",
			"rawText": "δ120",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "nXv5oxCL91FNqki-Gb869",
			"originalText": "δ120",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1660,
			"versionNonce": 1253774044,
			"isDeleted": false,
			"id": "eFJ0I3pJU4DbEsgYMdML7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1388.8857773698114,
			"y": 4520.5685486947905,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 713925342,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "B9XcY5mw"
				}
			],
			"updated": 1707741780581,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1200,
			"versionNonce": 542709988,
			"isDeleted": false,
			"id": "B9XcY5mw",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1401.4482773698114,
			"y": 4542.5685486947905,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 2094110494,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780581,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ122",
			"rawText": "δ122",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "eFJ0I3pJU4DbEsgYMdML7",
			"originalText": "δ122",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1660,
			"versionNonce": 808796,
			"isDeleted": false,
			"id": "yLTJywvqb6toW11xESn9o",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1241.2247348819951,
			"y": 4521.55165296371,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 51184478,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "SRmuoxRb"
				}
			],
			"updated": 1707741780581,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1202,
			"versionNonce": 386686052,
			"isDeleted": false,
			"id": "SRmuoxRb",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1253.7872348819951,
			"y": 4543.55165296371,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1066461086,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780581,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ124",
			"rawText": "δ124",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "yLTJywvqb6toW11xESn9o",
			"originalText": "δ124",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1643,
			"versionNonce": 1942031324,
			"isDeleted": false,
			"id": "5ZNkZ9eY8METvt5AxgmtG",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1168.0362181706428,
			"y": 4524.119671093933,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1116619742,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "g9JLY6kG"
				}
			],
			"updated": 1707741780581,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1186,
			"versionNonce": 1837838308,
			"isDeleted": false,
			"id": "g9JLY6kG",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1180.5987181706428,
			"y": 4546.119671093933,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1846941726,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780581,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ125",
			"rawText": "δ125",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "5ZNkZ9eY8METvt5AxgmtG",
			"originalText": "δ125",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1658,
			"versionNonce": 1743466588,
			"isDeleted": false,
			"id": "9J4SlufwUq6CbDfTzrpJq",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1093.5636923941788,
			"y": 4525.403680159045,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 974742622,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "r8aHgXPs"
				}
			],
			"updated": 1707741780581,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1200,
			"versionNonce": 1138987876,
			"isDeleted": false,
			"id": "r8aHgXPs",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1106.1261923941788,
			"y": 4547.403680159045,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 2020157598,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780581,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ126",
			"rawText": "δ126",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "9J4SlufwUq6CbDfTzrpJq",
			"originalText": "δ126",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1667,
			"versionNonce": 207406300,
			"isDeleted": false,
			"id": "bA_jrkVNbt4S5IAzPqKfh",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1314.413251593348,
			"y": 4522.835662028821,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 414606558,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "2U4pbuyI"
				}
			],
			"updated": 1707741780581,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1207,
			"versionNonce": 140740324,
			"isDeleted": false,
			"id": "2U4pbuyI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 1326.975751593348,
			"y": 4544.835662028821,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1821514014,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780581,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "δ123",
			"rawText": "δ123",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "bA_jrkVNbt4S5IAzPqKfh",
			"originalText": "δ123",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1653,
			"versionNonce": 1185401180,
			"isDeleted": false,
			"id": "1PYQlcrC5ZYGdqTzR2Gu-",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2238.353930227065,
			"y": 3354.926676783856,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1802323294,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "qvJPmQZW"
				},
				{
					"id": "kwe-F_7JIvKNdgenF8e2R",
					"type": "arrow"
				}
			],
			"updated": 1707741780581,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1201,
			"versionNonce": 798558820,
			"isDeleted": false,
			"id": "qvJPmQZW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2245.057055227065,
			"y": 3376.926676783856,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 1989732766,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780581,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK112",
			"rawText": "SK112",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "1PYQlcrC5ZYGdqTzR2Gu-",
			"originalText": "SK112",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1663,
			"versionNonce": 2048802268,
			"isDeleted": false,
			"id": "Q6m1qd5f_fUzRlm0sOkAu",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2239.838206371013,
			"y": 3421.4552770079695,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 491128286,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "liIp2xzn"
				},
				{
					"id": "OV_GHEVwlg7FxNsUh-v71",
					"type": "arrow"
				}
			],
			"updated": 1707741780581,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1218,
			"versionNonce": 1817320932,
			"isDeleted": false,
			"id": "liIp2xzn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2246.541331371013,
			"y": 3443.4552770079695,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 1619368478,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780582,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK113",
			"rawText": "SK113",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "Q6m1qd5f_fUzRlm0sOkAu",
			"originalText": "SK113",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1694,
			"versionNonce": 1339171420,
			"isDeleted": false,
			"id": "YSVl8AGHKm971Zxhu6P2b",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2239.4831618046496,
			"y": 3492.4070435776666,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 2001249886,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "3cWRp92n"
				},
				{
					"id": "_yd0T_HHjVth6B6XuO2vp",
					"type": "arrow"
				}
			],
			"updated": 1707741780582,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1248,
			"versionNonce": 1738326372,
			"isDeleted": false,
			"id": "3cWRp92n",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2246.1862868046496,
			"y": 3514.4070435776666,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 308292254,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780582,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK114",
			"rawText": "SK114",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "YSVl8AGHKm971Zxhu6P2b",
			"originalText": "SK114",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1727,
			"versionNonce": 2123724508,
			"isDeleted": false,
			"id": "j98jRsANvqZAltZfVNCPo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2239.1281172382864,
			"y": 3630.972572066048,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 545072862,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "2lFWloIn"
				},
				{
					"id": "Cr-3iE40sMgxwF5p5GoZ1",
					"type": "arrow"
				}
			],
			"updated": 1707741780582,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1277,
			"versionNonce": 2026304740,
			"isDeleted": false,
			"id": "2lFWloIn",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2245.8312422382864,
			"y": 3652.972572066048,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 305175326,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780582,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK116",
			"rawText": "SK116",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "j98jRsANvqZAltZfVNCPo",
			"originalText": "SK116",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1702,
			"versionNonce": 318389084,
			"isDeleted": false,
			"id": "St9RoucexhW-w_b3__deC",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2238.1337972100705,
			"y": 3564.3531301755793,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 501974878,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "6bw8QA0o"
				},
				{
					"id": "U8kIA8yuGjWHTEO_7UFnx",
					"type": "arrow"
				}
			],
			"updated": 1707741780582,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1256,
			"versionNonce": 1566488676,
			"isDeleted": false,
			"id": "6bw8QA0o",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2244.8369222100705,
			"y": 3586.3531301755793,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 67038110,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780582,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK115",
			"rawText": "SK115",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "St9RoucexhW-w_b3__deC",
			"originalText": "SK115",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1753,
			"versionNonce": 928149468,
			"isDeleted": false,
			"id": "_N7TNeqOxohvioU40oci7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2239.4831618046496,
			"y": 3702.279383202107,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1385940958,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "5AfuMMGM"
				},
				{
					"id": "AeS1noN7__2Qmt63e1C0f",
					"type": "arrow"
				}
			],
			"updated": 1707741780582,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1307,
			"versionNonce": 1899105252,
			"isDeleted": false,
			"id": "5AfuMMGM",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2246.1862868046496,
			"y": 3724.279383202107,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 701701150,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780582,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK117",
			"rawText": "SK117",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "_N7TNeqOxohvioU40oci7",
			"originalText": "SK117",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1739,
			"versionNonce": 2075137116,
			"isDeleted": false,
			"id": "e7pJ-l6l7-p7GAf2RvW3Q",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2238.1337972100705,
			"y": 3773.2311497718038,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 2140530782,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "9qDJSOUO"
				},
				{
					"id": "yBsDDrisiJxXH2lFjt6Ig",
					"type": "arrow"
				}
			],
			"updated": 1707741780582,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1294,
			"versionNonce": 1716449124,
			"isDeleted": false,
			"id": "9qDJSOUO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2244.8369222100705,
			"y": 3795.2311497718038,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 1672817822,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780582,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK118",
			"rawText": "SK118",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "e7pJ-l6l7-p7GAf2RvW3Q",
			"originalText": "SK118",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1819,
			"versionNonce": 501557468,
			"isDeleted": false,
			"id": "0jSgNAGrBODCLTHyZXKkx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2240.8594010442343,
			"y": 3843.3133048346863,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1138878686,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "ecjPI5at"
				},
				{
					"id": "sycw23io5yohJd-oRK4TA",
					"type": "arrow"
				}
			],
			"updated": 1707741780582,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1380,
			"versionNonce": 2097373924,
			"isDeleted": false,
			"id": "ecjPI5at",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2247.5625260442343,
			"y": 3865.3133048346863,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 799874334,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780582,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK119",
			"rawText": "SK119",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "0jSgNAGrBODCLTHyZXKkx",
			"originalText": "SK119",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1755,
			"versionNonce": 1367584092,
			"isDeleted": false,
			"id": "8sGk76ctOIFsqzLzSKBZm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2240.388147697941,
			"y": 3910.841073674923,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 478660958,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "TWPdOKH8"
				},
				{
					"id": "jyiyS6QNDWnFy1J4_K3q4",
					"type": "arrow"
				}
			],
			"updated": 1707741780582,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1310,
			"versionNonce": 1004365412,
			"isDeleted": false,
			"id": "TWPdOKH8",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2247.091272697941,
			"y": 3932.841073674923,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 700640670,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780582,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK120",
			"rawText": "SK120",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "8sGk76ctOIFsqzLzSKBZm",
			"originalText": "SK120",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1779,
			"versionNonce": 131965404,
			"isDeleted": false,
			"id": "me9S3PAB9N0JWVyMPXvkR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2240.5230592473104,
			"y": 3976.0203093044584,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1687128542,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "bR3k4ZZN"
				},
				{
					"id": "-_-BWFeNFjz9yuu1JfB_t",
					"type": "arrow"
				}
			],
			"updated": 1707741780582,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1335,
			"versionNonce": 665516516,
			"isDeleted": false,
			"id": "bR3k4ZZN",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2247.2261842473104,
			"y": 3998.0203093044584,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 201235998,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780582,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK121",
			"rawText": "SK121",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "me9S3PAB9N0JWVyMPXvkR",
			"originalText": "SK121",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1838,
			"versionNonce": 939853404,
			"isDeleted": false,
			"id": "SdOBDRvN0FrtPsUbAskB5",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2241.5173792755263,
			"y": 4045.622711279573,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1426139742,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "vkUaWVBw"
				},
				{
					"id": "sclfFGGL0Jqn52PUvZx1T",
					"type": "arrow"
				}
			],
			"updated": 1707741780582,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1397,
			"versionNonce": 2071600484,
			"isDeleted": false,
			"id": "vkUaWVBw",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2248.2205042755263,
			"y": 4067.622711279573,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 778579614,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780582,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK122",
			"rawText": "SK122",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "SdOBDRvN0FrtPsUbAskB5",
			"originalText": "SK122",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1859,
			"versionNonce": 650894044,
			"isDeleted": false,
			"id": "GTZv74OlObndeh7gjJ67i",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2241.162334709163,
			"y": 4186.886968957113,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 82094814,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "lGPd6sQr"
				},
				{
					"id": "5omTy8mciCS6wyXzRhxJ5",
					"type": "arrow"
				}
			],
			"updated": 1707741780582,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1417,
			"versionNonce": 1620627684,
			"isDeleted": false,
			"id": "lGPd6sQr",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2247.865459709163,
			"y": 4208.886968957113,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 117939998,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780582,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK124",
			"rawText": "SK124",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "GTZv74OlObndeh7gjJ67i",
			"originalText": "SK124",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1827,
			"versionNonce": 784605020,
			"isDeleted": false,
			"id": "jIhNkXgfjfC0Ae_yWi2qx",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2241.5173792755263,
			"y": 4113.952319948878,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1765935966,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "h24PXh6R"
				},
				{
					"id": "b7Eb93YPcX_Px13lvHEsd",
					"type": "arrow"
				}
			],
			"updated": 1707741780582,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1392,
			"versionNonce": 647304292,
			"isDeleted": false,
			"id": "h24PXh6R",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2248.2205042755263,
			"y": 4135.952319948878,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 702869406,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780582,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK123",
			"rawText": "SK123",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "jIhNkXgfjfC0Ae_yWi2qx",
			"originalText": "SK123",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1846,
			"versionNonce": 138400732,
			"isDeleted": false,
			"id": "xT7LvzFsEdr1ykL9_A5O8",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2240.168014680947,
			"y": 4256.8444154985955,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1428245470,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "MpXuz9Zj"
				},
				{
					"id": "6ef94UN84ntwym_MNwPNL",
					"type": "arrow"
				}
			],
			"updated": 1707741780582,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1404,
			"versionNonce": 2067589092,
			"isDeleted": false,
			"id": "MpXuz9Zj",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2246.871139680947,
			"y": 4278.8444154985955,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 1225269278,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780582,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK125",
			"rawText": "SK125",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "xT7LvzFsEdr1ykL9_A5O8",
			"originalText": "SK125",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1853,
			"versionNonce": 290519132,
			"isDeleted": false,
			"id": "2BkpAO2NGJZfmewz7wAgF",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2240.168014680947,
			"y": 4329.14554666287,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 2039114846,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "S5aCrIDV"
				},
				{
					"id": "WgxwtUY6ybMlBq1GwbaQS",
					"type": "arrow"
				}
			],
			"updated": 1707741780582,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1413,
			"versionNonce": 580799332,
			"isDeleted": false,
			"id": "S5aCrIDV",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2246.871139680947,
			"y": 4351.14554666287,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 880357534,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780582,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK126",
			"rawText": "SK126",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "2BkpAO2NGJZfmewz7wAgF",
			"originalText": "SK126",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "rectangle",
			"version": 1819,
			"versionNonce": 365530332,
			"isDeleted": false,
			"id": "cOc3WZW9nyADxNqwvhbUY",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2240.194889325952,
			"y": 4397.878337131173,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1703242974,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "Qh5dBjN7"
				},
				{
					"id": "68hQEIrlFSG7XUk2cUwha",
					"type": "arrow"
				}
			],
			"updated": 1707741780582,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 1385,
			"versionNonce": 789004004,
			"isDeleted": false,
			"id": "Qh5dBjN7",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 2246.898014325952,
			"y": 4419.878337131173,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 58.59375,
			"height": 24,
			"seed": 1514152222,
			"groupIds": [
				"S72NVuvgnt02wRpWZCQRS"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780582,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "SK127",
			"rawText": "SK127",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "cOc3WZW9nyADxNqwvhbUY",
			"originalText": "SK127",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "text",
			"version": 78,
			"versionNonce": 389779804,
			"isDeleted": false,
			"id": "EANXJtRl",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -533.3603825024339,
			"y": -1043.2851694818305,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#99e9f2",
			"width": 773.904541015625,
			"height": 298.59462823035585,
			"seed": 1242323576,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780583,
			"link": null,
			"locked": false,
			"fontSize": 238.87570258428468,
			"fontFamily": 1,
			"text": "HIGHT",
			"rawText": "HIGHT",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "HIGHT",
			"lineHeight": 1.25,
			"baseline": 210
		},
		{
			"type": "text",
			"version": 156,
			"versionNonce": 956678756,
			"isDeleted": false,
			"id": "gQct0tYH",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -520.575586790735,
			"y": -593.2603604300305,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#99e9f2",
			"width": 493.87933349609375,
			"height": 99.15181512785344,
			"seed": 856260616,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780583,
			"link": null,
			"locked": false,
			"fontSize": 79.32145210228275,
			"fontFamily": 1,
			"text": "Key Schedule",
			"rawText": "Key Schedule",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Key Schedule",
			"lineHeight": 1.25,
			"baseline": 69
		},
		{
			"type": "rectangle",
			"version": 631,
			"versionNonce": 351864284,
			"isDeleted": false,
			"id": "ZdKwPXwYWGvFsK5NhRsJ-",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 581.2420188288404,
			"y": 651.9714885026902,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 41353218,
			"groupIds": [
				"ha2quzDJzn93XOtYHzdFj",
				"iijonC1nYxclW-iPNBZPA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707741780583,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 196,
			"versionNonce": 392680932,
			"isDeleted": false,
			"id": "eBTk0Ftb",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 593.8045188288404,
			"y": 673.9714885026902,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 828092354,
			"groupIds": [
				"ha2quzDJzn93XOtYHzdFj",
				"iijonC1nYxclW-iPNBZPA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780583,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 3,
			"text": "s[7]",
			"rawText": "s[7]",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": null,
			"originalText": "s[7]",
			"lineHeight": 1.2,
			"baseline": 19
		},
		{
			"type": "text",
			"version": 183,
			"versionNonce": 1410591324,
			"isDeleted": false,
			"id": "Frc8edMk",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 674.7652386430823,
			"y": 673.6495070785414,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.3125,
			"height": 24,
			"seed": 1200908162,
			"groupIds": [
				"ha2quzDJzn93XOtYHzdFj",
				"iijonC1nYxclW-iPNBZPA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780583,
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
			"version": 733,
			"versionNonce": 389773668,
			"isDeleted": false,
			"id": "PYk4ENH3dEU5QLbYYuJ6Y",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 772.9877296131535,
			"y": 651.7196825171378,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1298147138,
			"groupIds": [
				"qkEI5JhROSNoslemdNiyj",
				"iijonC1nYxclW-iPNBZPA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707741780583,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 298,
			"versionNonce": 660487900,
			"isDeleted": false,
			"id": "iYjsDQAI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 785.5502296131535,
			"y": 673.7196825171378,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1797123842,
			"groupIds": [
				"qkEI5JhROSNoslemdNiyj",
				"iijonC1nYxclW-iPNBZPA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780583,
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
			"version": 285,
			"versionNonce": 869182692,
			"isDeleted": false,
			"id": "lOCtLPva",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 866.5109494273956,
			"y": 673.397701092989,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.3125,
			"height": 24,
			"seed": 1699528386,
			"groupIds": [
				"qkEI5JhROSNoslemdNiyj",
				"iijonC1nYxclW-iPNBZPA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780583,
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
			"version": 714,
			"versionNonce": 929694556,
			"isDeleted": false,
			"id": "aJc2eOcidviW9BrkJtbAt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 967.373694525435,
			"y": 647.7196825171378,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 411801218,
			"groupIds": [
				"f_J-Qpx-IEQfkxKK-0E99",
				"iijonC1nYxclW-iPNBZPA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707741780583,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 281,
			"versionNonce": 1320120420,
			"isDeleted": false,
			"id": "7YOvRKny",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 979.936194525435,
			"y": 669.7196825171378,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1972991554,
			"groupIds": [
				"f_J-Qpx-IEQfkxKK-0E99",
				"iijonC1nYxclW-iPNBZPA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780583,
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
			"version": 268,
			"versionNonce": 1250506716,
			"isDeleted": false,
			"id": "Kk1vBnVU",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1060.896914339677,
			"y": 669.397701092989,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.3125,
			"height": 24,
			"seed": 2102746626,
			"groupIds": [
				"f_J-Qpx-IEQfkxKK-0E99",
				"iijonC1nYxclW-iPNBZPA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780583,
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
			"version": 722,
			"versionNonce": 1739310052,
			"isDeleted": false,
			"id": "BdNBgImiX_Y5wV1Oa_8g6",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 581.7596594377158,
			"y": 736.210910587313,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1019104706,
			"groupIds": [
				"ZeVN8CDkRJGwWgsquIGHK",
				"iijonC1nYxclW-iPNBZPA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707741780583,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 289,
			"versionNonce": 214817884,
			"isDeleted": false,
			"id": "rXlbyLmW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 594.3221594377158,
			"y": 758.210910587313,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1223902594,
			"groupIds": [
				"ZeVN8CDkRJGwWgsquIGHK",
				"iijonC1nYxclW-iPNBZPA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780583,
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
			"version": 277,
			"versionNonce": 1423026020,
			"isDeleted": false,
			"id": "zSKEXvnK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 675.2828792519579,
			"y": 757.8889291631647,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.3125,
			"height": 24,
			"seed": 993215810,
			"groupIds": [
				"ZeVN8CDkRJGwWgsquIGHK",
				"iijonC1nYxclW-iPNBZPA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780583,
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
			"version": 782,
			"versionNonce": 1477046492,
			"isDeleted": false,
			"id": "V2mrmOKbnHsE_lU0U_rG_",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 776.4263261043823,
			"y": 742.5267000609977,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 752700674,
			"groupIds": [
				"AWtwDOqGqZVcRXUkKSbJb",
				"iijonC1nYxclW-iPNBZPA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707741780583,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 348,
			"versionNonce": 2054101732,
			"isDeleted": false,
			"id": "WRMYrvUl",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 788.9888261043823,
			"y": 764.5267000609977,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 863001794,
			"groupIds": [
				"AWtwDOqGqZVcRXUkKSbJb",
				"iijonC1nYxclW-iPNBZPA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780583,
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
			"version": 304,
			"versionNonce": 2077193564,
			"isDeleted": false,
			"id": "MV9yd03J",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 869.9495459186239,
			"y": 764.2047186368488,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.3125,
			"height": 24,
			"seed": 1552643202,
			"groupIds": [
				"AWtwDOqGqZVcRXUkKSbJb",
				"iijonC1nYxclW-iPNBZPA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780583,
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
			"version": 793,
			"versionNonce": 51519076,
			"isDeleted": false,
			"id": "CnCjJt-vX5xbmi5l0jtC4",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 969.6894839991191,
			"y": 746.66705093819,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 703435842,
			"groupIds": [
				"8oFm-1TAAGhOF6iIB7MGG",
				"iijonC1nYxclW-iPNBZPA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707741780583,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 361,
			"versionNonce": 91253212,
			"isDeleted": false,
			"id": "etCGb47L",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 982.2519839991191,
			"y": 768.66705093819,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 225819650,
			"groupIds": [
				"8oFm-1TAAGhOF6iIB7MGG",
				"iijonC1nYxclW-iPNBZPA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780583,
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
			"version": 346,
			"versionNonce": 394834404,
			"isDeleted": false,
			"id": "RcWgpT2A",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1062.1600722344135,
			"y": 768.3450695140411,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.3125,
			"height": 24,
			"seed": 1696787394,
			"groupIds": [
				"8oFm-1TAAGhOF6iIB7MGG",
				"iijonC1nYxclW-iPNBZPA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780583,
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
			"version": 894,
			"versionNonce": 134139484,
			"isDeleted": false,
			"id": "oAUEvsNn9TVkhOiwnjC0z",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 1152.6368524201719,
			"y": 744.8424895346809,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1997808514,
			"groupIds": [
				"P27MssgxTJ_ImW0QNER5S",
				"iijonC1nYxclW-iPNBZPA"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707741780583,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 462,
			"versionNonce": 383833444,
			"isDeleted": false,
			"id": "TlQUOg1U",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1165.1993524201719,
			"y": 766.8424895346809,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 46.875,
			"height": 24,
			"seed": 1837654850,
			"groupIds": [
				"P27MssgxTJ_ImW0QNER5S",
				"iijonC1nYxclW-iPNBZPA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780583,
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
			"version": 448,
			"versionNonce": 1682744028,
			"isDeleted": false,
			"id": "ZzYR6rfK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 2,
			"opacity": 100,
			"angle": 0,
			"x": 1246.1600722344135,
			"y": 766.5205081105321,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 70.3125,
			"height": 24,
			"seed": 1390324482,
			"groupIds": [
				"P27MssgxTJ_ImW0QNER5S",
				"iijonC1nYxclW-iPNBZPA"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780583,
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
			"version": 253,
			"versionNonce": 1315473636,
			"isDeleted": false,
			"id": "GaVNn86r",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -439.99786966762304,
			"y": 4892.91986227567,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "#99e9f2",
			"width": 349.7684020996094,
			"height": 99.15181512785344,
			"seed": 1282205737,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780583,
			"link": null,
			"locked": false,
			"fontSize": 79.32145210228275,
			"fontFamily": 1,
			"text": "Encyption",
			"rawText": "Encyption",
			"textAlign": "left",
			"verticalAlign": "top",
			"containerId": null,
			"originalText": "Encyption",
			"lineHeight": 1.25,
			"baseline": 69
		},
		{
			"type": "rectangle",
			"version": 203,
			"versionNonce": 283895644,
			"isDeleted": false,
			"id": "Z6yr3fOg0-Eko7IoB-wxB",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -299.0390841604552,
			"y": 5074.600924812647,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1743031049,
			"groupIds": [
				"JGCcw5qKSiLeZw1v0WgIq"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "VdQ9phV2"
				}
			],
			"updated": 1707741780583,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 85,
			"versionNonce": 833473636,
			"isDeleted": false,
			"id": "VdQ9phV2",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -277.01907225859975,
			"y": 5096.100924812647,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 27.959976196289062,
			"height": 25,
			"seed": 319832553,
			"groupIds": [
				"JGCcw5qKSiLeZw1v0WgIq"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780583,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "D5",
			"rawText": "D5",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "Z6yr3fOg0-Eko7IoB-wxB",
			"originalText": "D5",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 166,
			"versionNonce": 1647221724,
			"isDeleted": false,
			"id": "q9atkKhOxrqZfQOFZN54f",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -445.0390841604552,
			"y": 5075.600924812647,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 291642569,
			"groupIds": [
				"JGCcw5qKSiLeZw1v0WgIq"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "99EySEnm"
				},
				{
					"id": "TzPPoeXEKdrtjaj4rRqcz",
					"type": "arrow"
				}
			],
			"updated": 1707741780583,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 91,
			"versionNonce": 310288356,
			"isDeleted": false,
			"id": "99EySEnm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -422.21907683623647,
			"y": 5097.100924812647,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 26.3599853515625,
			"height": 25,
			"seed": 1651874729,
			"groupIds": [
				"JGCcw5qKSiLeZw1v0WgIq"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780583,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "D7",
			"rawText": "D7",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "q9atkKhOxrqZfQOFZN54f",
			"originalText": "D7",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 209,
			"versionNonce": 1378271324,
			"isDeleted": false,
			"id": "F7WKfME7ZnVefvuRkmVpp",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -372.0390841604552,
			"y": 5075.600924812647,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 108412553,
			"groupIds": [
				"JGCcw5qKSiLeZw1v0WgIq"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "SrMPQ2XU"
				},
				{
					"id": "2YdlC9d2fxfV8FerJEOzG",
					"type": "arrow"
				}
			],
			"updated": 1707741780583,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 85,
			"versionNonce": 1491665764,
			"isDeleted": false,
			"id": "SrMPQ2XU",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -350.2390734793029,
			"y": 5097.100924812647,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 28.399978637695312,
			"height": 25,
			"seed": 1814005097,
			"groupIds": [
				"JGCcw5qKSiLeZw1v0WgIq"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780584,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "D6",
			"rawText": "D6",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "F7WKfME7ZnVefvuRkmVpp",
			"originalText": "D6",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 228,
			"versionNonce": 1218860252,
			"isDeleted": false,
			"id": "7IfYP2P4QcSnpDikI6m4o",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -226.03908416045522,
			"y": 5074.600924812647,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 515698761,
			"groupIds": [
				"JGCcw5qKSiLeZw1v0WgIq"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "9bAxyAcv"
				},
				{
					"id": "HwjrBnYiA8xcuKJ3iA9gb",
					"type": "arrow"
				}
			],
			"updated": 1707741780584,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 85,
			"versionNonce": 993720036,
			"isDeleted": false,
			"id": "9bAxyAcv",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -204.23907347930287,
			"y": 5096.100924812647,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 28.399978637695312,
			"height": 25,
			"seed": 875167529,
			"groupIds": [
				"JGCcw5qKSiLeZw1v0WgIq"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780584,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "D4",
			"rawText": "D4",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "7IfYP2P4QcSnpDikI6m4o",
			"originalText": "D4",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 473,
			"versionNonce": 1665096028,
			"isDeleted": false,
			"id": "VbcJAqoheDkcUF6zUGeCe",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -5.581198966006582,
			"y": 5072.121982215423,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 2060595721,
			"groupIds": [
				"cfZiUJY0e3cHdNOP3nl6G"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "cfTRnOf5"
				},
				{
					"id": "3NUY0zxmyBvqPLNtPBEke",
					"type": "arrow"
				}
			],
			"updated": 1707741780584,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 10,
			"versionNonce": 1979873892,
			"isDeleted": false,
			"id": "cfTRnOf5",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 19.90880652715748,
			"y": 5093.621982215423,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 21.019989013671875,
			"height": 25,
			"seed": 151868231,
			"groupIds": [
				"cfZiUJY0e3cHdNOP3nl6G"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780584,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "D1",
			"rawText": "D1",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "VbcJAqoheDkcUF6zUGeCe",
			"originalText": "D1",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 435,
			"versionNonce": 1027853788,
			"isDeleted": false,
			"id": "IbYP9OplavC2hnbw91ivr",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -151.58119896600658,
			"y": 5073.121982215423,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1739655401,
			"groupIds": [
				"cfZiUJY0e3cHdNOP3nl6G"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "naFM9ozI"
				},
				{
					"id": "JJWCXp7b7d46-iu0tKP0K",
					"type": "arrow"
				}
			],
			"updated": 1707741780584,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 355,
			"versionNonce": 67997156,
			"isDeleted": false,
			"id": "naFM9ozI",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -130.19118431756908,
			"y": 5094.621982215423,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 29.219970703125,
			"height": 25,
			"seed": 1146225609,
			"groupIds": [
				"cfZiUJY0e3cHdNOP3nl6G"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780584,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "D3",
			"rawText": "D3",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "IbYP9OplavC2hnbw91ivr",
			"originalText": "D3",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 480,
			"versionNonce": 935703132,
			"isDeleted": false,
			"id": "6_rIH6wjzPkl-uOhAR0ng",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -78.58119896600658,
			"y": 5073.121982215423,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 483435177,
			"groupIds": [
				"cfZiUJY0e3cHdNOP3nl6G"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "5n9J0RGc"
				},
				{
					"id": "vzfO3mtk8wiqfwIO7kGAl",
					"type": "arrow"
				}
			],
			"updated": 1707741780584,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 12,
			"versionNonce": 1449800036,
			"isDeleted": false,
			"id": "5n9J0RGc",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -57.50118950555736,
			"y": 5094.621982215423,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 29.839981079101562,
			"height": 25,
			"seed": 523158633,
			"groupIds": [
				"cfZiUJY0e3cHdNOP3nl6G"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780584,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "D2",
			"rawText": "D2",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "6_rIH6wjzPkl-uOhAR0ng",
			"originalText": "D2",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 499,
			"versionNonce": 1100416732,
			"isDeleted": false,
			"id": "x9rh1Q_qQiASSiGOZaij1",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 67.41880103399342,
			"y": 5072.121982215423,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1842898313,
			"groupIds": [
				"cfZiUJY0e3cHdNOP3nl6G"
			],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "qyK2cHbd"
				},
				{
					"id": "0u08-3shzQu1fdUPeB3x1",
					"type": "arrow"
				}
			],
			"updated": 1707741780584,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 10,
			"versionNonce": 208037092,
			"isDeleted": false,
			"id": "qyK2cHbd",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 88.73880835821217,
			"y": 5093.621982215423,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 29.3599853515625,
			"height": 25,
			"seed": 601542631,
			"groupIds": [
				"cfZiUJY0e3cHdNOP3nl6G"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780584,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "D0",
			"rawText": "D0",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "x9rh1Q_qQiASSiGOZaij1",
			"originalText": "D0",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 154,
			"versionNonce": 524929884,
			"isDeleted": false,
			"id": "TZjLpGvaijPBT4eyrFEdy",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": -532.9413595608974,
			"y": 1654.3563909829186,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 663.6363636363637,
			"height": 1367.8897562975285,
			"seed": 1721105449,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707741780584,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 286,
			"versionNonce": 730867812,
			"isDeleted": false,
			"id": "dYszCr9atRXHOpEcc36xu",
			"fillStyle": "hachure",
			"strokeWidth": 2,
			"strokeStyle": "dashed",
			"roughness": 0,
			"opacity": 100,
			"angle": 0,
			"x": 128.8756976413497,
			"y": 1654.1202121831443,
			"strokeColor": "#e03131",
			"backgroundColor": "transparent",
			"width": 737.8403984131962,
			"height": 1367.8897562975285,
			"seed": 904527783,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [],
			"updated": 1707741780584,
			"link": null,
			"locked": false
		},
		{
			"type": "rectangle",
			"version": 285,
			"versionNonce": 858783708,
			"isDeleted": false,
			"id": "WE_oRyu4l3Pj_mm95sJd-",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 187.38303392339708,
			"y": 5248.593900365998,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1567865161,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "joHYsV99"
				}
			],
			"updated": 1707741780584,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 166,
			"versionNonce": 1471511524,
			"isDeleted": false,
			"id": "joHYsV99",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 207.08304613042833,
			"y": 5270.093900365998,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 32.5999755859375,
			"height": 25,
			"seed": 1663019049,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780584,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "WK1",
			"rawText": "WK1",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "WE_oRyu4l3Pj_mm95sJd-",
			"originalText": "WK1",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 209,
			"versionNonce": 1163633756,
			"isDeleted": false,
			"id": "i0HHhkQ50nVCl1qXZ7pVK",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 187.81821869103192,
			"y": 5386.957878997584,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1865071369,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "11aPhKo2"
				}
			],
			"updated": 1707741780584,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 129,
			"versionNonce": 182738788,
			"isDeleted": false,
			"id": "11aPhKo2",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 203.4182400533366,
			"y": 5408.457878997584,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.799957275390625,
			"height": 25,
			"seed": 839938537,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780584,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "WK3",
			"rawText": "WK3",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "i0HHhkQ50nVCl1qXZ7pVK",
			"originalText": "WK3",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 283,
			"versionNonce": 1268693212,
			"isDeleted": false,
			"id": "n4lbJY4lIWIPHeGSo29oS",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 186.63573901814254,
			"y": 5318.27588968179,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1088179401,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "x74DgJfW"
				}
			],
			"updated": 1707741780584,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 159,
			"versionNonce": 1298846436,
			"isDeleted": false,
			"id": "x74DgJfW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 201.92575519245895,
			"y": 5339.77588968179,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 41.41996765136719,
			"height": 25,
			"seed": 53070761,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780584,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "WK2",
			"rawText": "WK2",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "n4lbJY4lIWIPHeGSo29oS",
			"originalText": "WK2",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 323,
			"versionNonce": 831208796,
			"isDeleted": false,
			"id": "PO_MgtYXKG90mJ_QaLnaR",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 183.92572506241982,
			"y": 5179.911911050203,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1629777545,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "567oJaLD"
				}
			],
			"updated": 1707741780584,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 180,
			"versionNonce": 1842796132,
			"isDeleted": false,
			"id": "567oJaLD",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 199.45573910050575,
			"y": 5201.411911050203,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.939971923828125,
			"height": 25,
			"seed": 830977385,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780584,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "WK0",
			"rawText": "WK0",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "PO_MgtYXKG90mJ_QaLnaR",
			"originalText": "WK0",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 342,
			"versionNonce": 544420316,
			"isDeleted": false,
			"id": "0QwFAGLLtGzms-jH1RQnu",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 759.9992242127269,
			"y": 4957.19636955366,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 609688041,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "FDlMdyHB"
				}
			],
			"updated": 1707741780584,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 225,
			"versionNonce": 955673060,
			"isDeleted": false,
			"id": "FDlMdyHB",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 776.2292428284495,
			"y": 4978.69636955366,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 39.53996276855469,
			"height": 25,
			"seed": 68023497,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780584,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "WK5",
			"rawText": "WK5",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "0QwFAGLLtGzms-jH1RQnu",
			"originalText": "WK5",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 304,
			"versionNonce": 1198036572,
			"isDeleted": false,
			"id": "WkHiC7lgK7EkCybCpoMct",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 613.9992242127269,
			"y": 4958.19636955366,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1105621929,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "vrqKBttm"
				}
			],
			"updated": 1707741780584,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 226,
			"versionNonce": 836210020,
			"isDeleted": false,
			"id": "vrqKBttm",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 631.0292382508128,
			"y": 4979.69636955366,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 37.939971923828125,
			"height": 25,
			"seed": 1913394825,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780584,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "WK7",
			"rawText": "WK7",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "WkHiC7lgK7EkCybCpoMct",
			"originalText": "WK7",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 348,
			"versionNonce": 591227612,
			"isDeleted": false,
			"id": "vvQ9RjqpPH56CabadEQPt",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 687.9781668099512,
			"y": 4958.19636955366,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 389700969,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "bCnSUZVb"
				}
			],
			"updated": 1707741780584,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 228,
			"versionNonce": 1237860580,
			"isDeleted": false,
			"id": "bCnSUZVb",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 703.9881842049707,
			"y": 4979.69636955366,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 39.97996520996094,
			"height": 25,
			"seed": 1354549321,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780584,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "WK6",
			"rawText": "WK6",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "vvQ9RjqpPH56CabadEQPt",
			"originalText": "WK6",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 366,
			"versionNonce": 1183035228,
			"isDeleted": false,
			"id": "JUODY_JrNkb14VnMw7KdO",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 832.9992242127269,
			"y": 4957.19636955366,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 72,
			"height": 68,
			"seed": 1215223593,
			"groupIds": [],
			"frameId": null,
			"roundness": {
				"type": 3
			},
			"boundElements": [
				{
					"type": "text",
					"id": "EFvxnuU0"
				}
			],
			"updated": 1707741780584,
			"link": null,
			"locked": false
		},
		{
			"type": "text",
			"version": 226,
			"versionNonce": 408323172,
			"isDeleted": false,
			"id": "EFvxnuU0",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": 849.0092416077464,
			"y": 4978.69636955366,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 39.97996520996094,
			"height": 25,
			"seed": 1622936073,
			"groupIds": [],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780584,
			"link": null,
			"locked": false,
			"fontSize": 20,
			"fontFamily": 1,
			"text": "WK4",
			"rawText": "WK4",
			"textAlign": "center",
			"verticalAlign": "middle",
			"containerId": "JUODY_JrNkb14VnMw7KdO",
			"originalText": "WK4",
			"lineHeight": 1.25,
			"baseline": 18
		},
		{
			"type": "rectangle",
			"version": 737,
			"versionNonce": 562914268,
			"isDeleted": false,
			"id": "Vmm94IPxqEzxKKmvRe7fl",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -211.5088119754032,
			"y": 5334.111128675985,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 40.04942101288187,
			"height": 37.94155674904596,
			"seed": 458677929,
			"groupIds": [
				"9rzitjNMa2qE8LyMTdsHX"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780584,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 736,
			"versionNonce": 324032484,
			"isDeleted": false,
			"id": "RolkHNBr0Q8W4xmqMXvcU",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -191.6166719259886,
			"y": 5334.444878561103,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 0,
			"height": 37.31692569536174,
			"seed": 943137161,
			"groupIds": [
				"9rzitjNMa2qE8LyMTdsHX"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780585,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"versionNonce": 1248626780,
			"isDeleted": false,
			"id": "AmxjNxXs_FJa_QfgBLlAo",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -210.9040717235912,
			"y": 5352.055113158915,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 38.9940908951531,
			"height": 0,
			"seed": 432801897,
			"groupIds": [
				"9rzitjNMa2qE8LyMTdsHX"
			],
			"frameId": null,
			"roundness": null,
			"boundElements": [],
			"updated": 1707741780585,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"type": "ellipse",
			"version": 750,
			"versionNonce": 1187232612,
			"isDeleted": false,
			"id": "SOtYnzkbd80HL08u9Tv0d",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -64.3307081708059,
			"y": 5256.663909412907,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 48.36836665182087,
			"height": 49.65818976253612,
			"seed": 670581895,
			"groupIds": [
				"YZK1Z2Cil1AxCPEG4rkEN"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707741780585,
			"link": null,
			"locked": false
		},
		{
			"type": "line",
			"version": 749,
			"versionNonce": 1156783324,
			"isDeleted": false,
			"id": "lVBg-i8qDt0WGdGVLaobW",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -41.75880373328948,
			"y": 5258.59864407898,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 1.9347346660728861,
			"height": 47.723455096463304,
			"seed": 1168907175,
			"groupIds": [
				"YZK1Z2Cil1AxCPEG4rkEN"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707741780585,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"version": 742,
			"versionNonce": 218017508,
			"isDeleted": false,
			"id": "Rcktw22zsDDBjD1kjnsok",
			"fillStyle": "solid",
			"strokeWidth": 2,
			"strokeStyle": "solid",
			"roughness": 1,
			"opacity": 100,
			"angle": 0,
			"x": -64.3307081708059,
			"y": 5281.170548516497,
			"strokeColor": "#1e1e1e",
			"backgroundColor": "transparent",
			"width": 49.01327820717848,
			"height": 0,
			"seed": 689442503,
			"groupIds": [
				"YZK1Z2Cil1AxCPEG4rkEN"
			],
			"frameId": null,
			"roundness": {
				"type": 2
			},
			"boundElements": [],
			"updated": 1707741780585,
			"link": null,
			"locked": false,
			"startBinding": null,
			"endBinding": null,
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
			"type": "line",
			"version": 996,
			"versionNonce": 1253253468,
			"isDeleted": false,
			"id": "9JCqwqa0xYbIRcSxuSTtr",
			"fillStyle": "solid",
			"strokeWidth": 2,
				[
				[