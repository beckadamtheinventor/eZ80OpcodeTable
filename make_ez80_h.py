
data = """
00 NOP              -                RLC  B           -                IN0  B,(&00)
01 LD   BC,&0000    -                RLC  C           -                OUT0 (&00),B
02 LD   (BC),A      -                RLC  D           -                LEA  BC,IX+d
03 INC  BC          -                RLC  E           -                LEA  BC,IY+d
04 INC  B           -                RLC  H           -                TST  A,B
05 DEC  B           -                RLC  L           -                -
06 LD   B,&00       -                RLC  (HL)        RLC (IY+d)       -
07 RLCA             LD   BC,(_IX+d)  RLC  A           -                LD   BC,(HL)
08 EX   AF,AF'      -                RRC  B           -                IN0  C,(&00)
09 ADD  HL,BC       ADD  _IX,BC      RRC  C           -                OUT0 (&00),C
0A LD   A,(BC)      -                RRC  D           -                -
0B DEC  BC          -                RRC  E           -                -
0C INC  C           -                RRC  H           -                TST  A,C
0D DEC  C           -                RRC  L           -                -
0E LD   C,&00       -                RRC  (HL)        RRC (IY+d)       -
0F RRCA             LD   (_IX+d),BC  RRC  A           -                LD   (HL),BC
10 DJNZ &00         -                RL   B           -                IN0  D,(&00)
11 LD   DE,&0000    -                RL   C           -                OUT0 (&00),D
12 LD   (DE),A      -                RL   D           -                LEA  DE,IX+d
13 INC  DE          -                RL   E           -                LEA  DE,IY+d
14 INC  D           -                RL   H           -                TST  A,D
15 DEC  D           -                RL   L           -                -
16 LD   D,&00       -                RL   (HL)        RL  (IY+d)       -
17 RLA              LD   DE,(_IX+d)  RL   A           -                LD   DE,(HL)
18 JR   &00         -                RR   B           -                IN0  E,(&00)
19 ADD  HL,DE       ADD  _IX,DE      RR   C           -                OUT0 (&00),E
1A LD   A,(DE)      -                RR   D           -                -
1B DEC  DE          -                RR   E           -                -
1C INC  E           -                RR   H           -                TST  A,E
1D DEC  E           -                RR   L           -                -
1E LD   E,&00       -                RR   (HL)        RR  (IY+d)       -
1F RRA              LD   (_IX+d),DE  RR   A           -                LD   (HL),DE
20 JR   NZ,&00      -                SLA  B           -                IN0  H,(&00)
21 LD   HL,&0000    LD   _IX,&0000   SLA  C           -                OUT0 (&00),H
22 LD   (&0000),HL  LD   (&0000),_IX SLA  D           -                LEA  HL,IX+d
23 INC  HL          INC  _IX         SLA  E           -                LEA  HL,IY+d
24 INC  H           INC  _IXH        SLA  H           -                TST  A,H
25 DEC  H           DEC  _IXH        SLA  L           -                -
26 LD   H,&00       LD   _IXH,&00    SLA  (HL)        SLA (IY+d)       -
27 DAA              LD   HL,(_IX+d)  SLA  A           -                LD   HL,(HL)
28 JR   Z,&00       -                SRA  B           -                IN0  L,(&00)
29 ADD  HL,HL       ADD  _IX,IX      SRA  C           -                OUT0 (&00),L
2A LD   HL,(&0000)  LD   _IX,(&0000) SRA  D           -                -
2B DEC  HL          DEC  _IX         SRA  E           -                -
2C INC  L           INC  _IXL        SRA  H           -                TST  A,L
2D DEC  L           DEC  _IXL        SRA  L           -                -
2E LD   L,&00       LD   _IXL,&00    SRA  (HL)        SRA (IY+d)       -
2F CPL              LD   (_IX+d),HL  SRA  A           -                LD   (HL),HL
30 JR   NC,&00      -                -                -                -
31 LD   SP,&0000    LD   IY,(_IX+d)  -                -                -
32 LD   (&0000),A   -                -                -                LEA  IX,IX+d
33 INC  SP          -                -                -                LEA  IY,IY+d
34 INC  (HL)        INC  (_IX+d)     -                -                TST  A,(HL)
35 DEC  (HL)        DEC  (_IX+d)     -                -                -
36 LD   (HL),&00    LD   (_IX+d),&00 -                -                LD   IY,(HL)
37 SCF              LD   IX,(_IX+d)  -                -                LD   IX,(HL)
38 JR   C,&00       -                SRL  B           -                IN0  A,(&00)
39 ADD  HL,SP       ADD  _IX,SP      SRL  C           -                OUT0 (&00),A
3A LD   A,(&0000)   -                SRL  D           -                -
3B DEC  SP          -                SRL  E           -                -
3C INC  A           -                SRL  H           -                TST  A,A
3D DEC  A           -                SRL  L           -                -
3E LD   A,&00       LD   (_IX+d), IY SRL  (HL)        SRL (IY+d)       LD  (HL), IY
3F CCF              LD   (_IX+d), IX SRL  A           -                LD  (HL), IX
40 .SIS suffix      -                BIT  0,B         -                IN   B,(BC)
41 LD   B,C         -                BIT  0,C         -                OUT  (BC),B
42 LD   B,D         -                BIT  0,D         -                SBC  HL,BC
43 LD   B,E         -                BIT  0,E         -                LD   (&0000),BC
44 LD   B,H         LD   B,_IXH       BIT  0,H         -                NEG
45 LD   B,L         LD   B,_IXL       BIT  0,L         -                RETN
46 LD   B,(HL)      LD   B,(_IX+d)    BIT  0,(HL)      BIT 0,(IY+d)     IM   0
47 LD   B,A         -                BIT  0,A         -                LD   I,A
48 LD   C,B         -                BIT  1,B         -                IN   C,(BC)
49 .LIS suffix      -                BIT  1,C         -                OUT  (BC),C
4A LD   C,D         -                BIT  1,D         -                ADC  HL,BC
4B LD   C,E         -                BIT  1,E         -                LD   BC,(&0000)
4C LD   C,H         LD   C,_IXH       BIT  1,H         -                MLT  BC
4D LD   C,L         LD   C,_IXL       BIT  1,L         -                RETI
4E LD   C,(HL)      LD   C,(_IX+d)    BIT  1,(HL)      BIT 1,(IY+d)     -
4F LD   C,A         -                BIT  1,A         -                LD   R,A
50 LD   D,B         -                BIT  2,B         -                IN   D,(BC)
51 LD   D,C         -                BIT  2,C         -                OUT  (BC),D
52 .SIL suffix      -                BIT  2,D         -                SBC  HL,DE
53 LD   D,E         -                BIT  2,E         -                LD   (&0000),DE
54 LD   D,H         LD   D,_IXH       BIT  2,H         -                LEA  IX,IY+d
55 LD   D,L         LD   D,_IXL       BIT  2,L         -                LEA  IY,IX+d
56 LD   D,(HL)      LD   D,(_IX+d)    BIT  2,(HL)      BIT 2,(IY+d)     IM   1
57 LD   D,A         -                BIT  2,A         -                LD   A,I
58 LD   E,B         -                BIT  3,B         -                IN   E,(BC)
59 LD   E,C         -                BIT  3,C         -                OUT  (BC),E
5A LD   E,D         -                BIT  3,D         -                ADC  HL,DE
5B .LIL suffix      -                BIT  3,E         -                LD   DE,(&0000)
5C LD   E,H         LD   E,_IXH      BIT  3,H         -                MLT  DE
5D LD   E,L         LD   E,_IXL      BIT  3,L         -                -
5E LD   E,(HL)      LD   E,(_IX+d)   BIT  3,(HL)      BIT 3,(IY+d)     IM   2
5F LD   E,A         -                BIT  3,A         -                LD   A,R
60 LD   H,B         LD   _IXH,B      BIT  4,B         -                IN   H,(BC)
61 LD   H,C         LD   _IXH,C      BIT  4,C         -                OUT  (BC),H
62 LD   H,D         LD   _IXH,D      BIT  4,D         -                SBC  HL,HL
63 LD   H,E         LD   _IXH,E      BIT  4,E         -                -
64 LD   H,H         LD   _IXH,_IXH   BIT  4,H         -                TST  A,&00
65 LD   H,L         LD   _IXH,_IXL   BIT  4,L         -                PEA  IX+d
66 LD   H,(HL)      LD   _H,(IX+d)   BIT  4,(HL)      BIT 4,(IY+d)     PEA  IY+d
67 LD   H,A         LD   _IXH,A      BIT  4,A         -                RRD
68 LD   L,B         LD   _IXL,B      BIT  5,B         -                IN   L,(BC)
69 LD   L,C         LD   _IXL,C      BIT  5,C         -                OUT  (BC),L
6A LD   L,D         LD   _IXL,D      BIT  5,D         -                ADC  HL,HL
6B LD   L,E         LD   _IXL,E      BIT  5,E         -                -
6C LD   L,H         LD   _IXL,_IXH   BIT  5,H         -                MLT  HL
6D LD   L,L         LD   _IXL,_IXL   BIT  5,L         -                LD   MB,A
6E LD   L,(HL)      LD   L,(_IX+d)   BIT  5,(HL)      BIT 5,(IY+d)     LD   A,MB
6F LD   L,A         LD   _IXL,A      BIT  5,A         -                RLD
70 LD   (HL),B      LD   (_IX+d),B   BIT  6,B         -                -
71 LD   (HL),C      LD   (_IX+d),C   BIT  6,C         -                -
72 LD   (HL),D      LD   (_IX+d),D   BIT  6,D         -                SBC  HL,SP
73 LD   (HL),E      LD   (_IX+d),E   BIT  6,E         -                LD   (&0000),SP
74 LD   (HL),H      LD   (_IX+d),H   BIT  6,H         -                TSTIO &00
75 LD   (HL),L      LD   (_IX+d),L   BIT  6,L         -                -
76 HALT             -                BIT  6,(HL)      BIT 6,(IY+d)     SLP
77 LD   (HL),A      LD   (_IX+d),A   BIT  6,A         -                -
78 LD   A,B         -                BIT  7,B         -                IN   A,(BC)
79 LD   A,C         -                BIT  7,C         -                OUT  (BC),A
7A LD   A,D         -                BIT  7,D         -                ADC  HL,SP
7B LD   A,E         -                BIT  7,E         -                LD   SP,(&0000)
7C LD   A,H         LD   A,_IXH      BIT  7,H         -                MLT  SP
7D LD   A,L         LD   A,_IXL      BIT  7,L         -                STMIX
7E LD   A,(HL)      LD   A,(_IX+d)   BIT  7,(HL)      BIT 7,(IY+d)     RSMIX
7F LD   A,A         -                BIT  7,A         -                -
80 ADD  A,B         -                RES  0,B         -                -
81 ADD  A,C         -                RES  0,C         -                -
82 ADD  A,D         -                RES  0,D         -                INIM
83 ADD  A,E         -                RES  0,E         -                OTIM
84 ADD  A,H         ADD  A,_IXH      RES  0,H         -                INI2
85 ADD  A,L         ADD  A,_IXL      RES  0,L         -                -
86 ADD  A,(HL)      ADD  A,(_IX+d)   RES  0,(HL)      RES 0,(IY+d)     -
87 ADD  A,A         -                RES  0,A         -                -
88 ADC  A,B         -                RES  1,B         -                -
89 ADC  A,C         -                RES  1,C         -                -
8A ADC  A,D         -                RES  1,D         -                INDM
8B ADC  A,E         -                RES  1,E         -                OTDM
8C ADC  A,H         ADC  A,_IXH      RES  1,H         -                IND2
8D ADC  A,L         ADC  A,_IXL      RES  1,L         -                -
8E ADC  A,(HL)      ADC  A,(_IX+d)   RES  1,(HL)      RES 1,(IY+d)     -
8F ADC  A,A         -                RES  1,A         -                -
90 SUB  A,B         -                RES  2,B         -                -
91 SUB  A,C         -                RES  2,C         -                -
92 SUB  A,D         -                RES  2,D         -                INIMR
93 SUB  A,E         -                RES  2,E         -                OTIMR
94 SUB  A,H         SUB  A,_IXH      RES  2,H         -                INI2R
95 SUB  A,L         SUB  A,_IXL      RES  2,L         -                -
96 SUB  A,(HL)      SUB  A,(_IX+d)   RES  2,(HL)      RES 2,(IY+d)     -
97 SUB  A,A         -                RES  2,A         -                -
98 SBC  A,B         -                RES  3,B         -                -
99 SBC  A,C         -                RES  3,C         -                -
9A SBC  A,D         -                RES  3,D         -                INDMR
9B SBC  A,E         -                RES  3,E         -                OTDMR
9C SBC  A,H         SBC  A,_IXH      RES  3,H         -                IND2R
9D SBC  A,L         SBC  A,_IXL      RES  3,L         -                -
9E SBC  A,(HL)      SBC  A,(_IX+d)   RES  3,(HL)      RES 3,(IY+d)     -
9F SBC  A,A         -                RES  3,A         -                -
A0 AND  B           -                RES  4,B         -                LDI
A1 AND  C           -                RES  4,C         -                CPI
A2 AND  D           -                RES  4,D         -                INI
A3 AND  E           -                RES  4,E         -                OTI
A4 AND  H           AND  _IXH        RES  4,H         -                OTI2
A5 AND  L           AND  _IXL        RES  4,L         -                -
A6 AND  (HL)        AND  (_IX+d)     RES  4,(HL)      RES 4,(IY+d)     -
A7 AND  A           -                RES  4,A         -                -
A8 XOR  B           -                RES  5,B         -                LDD
A9 XOR  C           -                RES  5,C         -                CPD
AA XOR  D           -                RES  5,D         -                IND
AB XOR  E           -                RES  5,E         -                OTD
AC XOR  H           XOR  _IXH        RES  5,H         -                OTD2
AD XOR  L           XOR  _IXL        RES  5,L         -                -
AE XOR  (HL)        XOR  (_IX+d)     RES  5,(HL)      RES 5,(IY+d)     -
AF XOR  A           -                RES  5,A         -                -
B0 OR   B           -                RES  6,B         -                LDIR
B1 OR   C           -                RES  6,C         -                CPIR
B2 OR   D           -                RES  6,D         -                INIR
B3 OR   E           -                RES  6,E         -                OTIR
B4 OR   H           OR   _IXH        RES  6,H         -                ORI2R
B5 OR   L           OR   _IXL        RES  6,L         -                -
B6 OR   (HL)        OR   (_IX+d)     RES  6,(HL)      RES 6,(IY+d)     -
B7 OR   A           -                RES  6,A         -                -
B8 CP   B           -                RES  7,B         -                LDDR
B9 CP   C           -                RES  7,C         -                CPDR
BA CP   D           -                RES  7,D         -                INDR
BB CP   E           -                RES  7,E         -                OTDR
BC CP   H           CP   _IXH        RES  7,H         -                OTD2R
BD CP   L           CP   _IXL        RES  7,L         -                -
BE CP   (HL)        CP   (_IX+d)     RES  7,(HL)      RES 7,(IY+d)     -
BF CP   A           -                RES  7,A         -                -
C0 RET  NZ          -                SET  0,B         -                -
C1 POP  BC          -                SET  0,C         -                -
C2 JP   NZ,&0000    -                SET  0,D         -                -
C3 JP   &0000       -                SET  0,E         -                -
C4 CALL NZ,&0000    -                SET  0,H         -                -
C5 PUSH BC          -                SET  0,L         -                -
C6 ADD  A,&00       -                SET  0,(HL)      SET 0,(IY+d)     -
C7 RST  &00         -                SET  0,A         -                -
C8 RET  Z           -                SET  1,B         -                -
C9 RET              -                SET  1,C         -                -
CA JP   Z,&0000     -                SET  1,D         -                -
CB **** CB ****     **** CB ****     SET  1,E         -                -
CC CALL Z,&0000     -                SET  1,H         -                -
CD CALL &0000       -                SET  1,L         -                -
CE ADC  A,&00       -                SET  1,(HL)      SET 1,(IY+d)     -
CF RST  &08         -                SET  1,A         -                -
D0 RET  NC          -                SET  2,B         -                -
D1 POP  DE          -                SET  2,C         -                -
D2 JP   NC,&0000    -                SET  2,D         -                -
D3 OUT  (&00),A     -                SET  2,E         -                -
D4 CALL NC,&0000    -                SET  2,H         -                -
D5 PUSH DE          -                SET  2,L         -                -
D6 SUB  A,&00       -                SET  2,(HL)      SET 2,(IY+d)     -
D7 RST  &10         -                SET  2,A         -                -
D8 RET  C           -                SET  3,B         -                -
D9 EXX              -                SET  3,C         -                -
DA JP   C,&0000     -                SET  3,D         -                -
DB IN   A,(&00)     -                SET  3,E         -                -
DC CALL C,&0000     -                SET  3,H         -                -
DD **** DD ****     -                SET  3,L         -                -
DE SBC  A,&00       -                SET  3,(HL)      SET 3,(IY+d)     -
DF RST  &18         -                SET  3,A         -                -
E0 RET  PO          -                SET  4,B         -                -
E1 POP  HL          POP _IX          SET  4,C         -                -
E2 JP   PO,&0000    -                SET  4,D         -                -
E3 EX   (SP),HL     EX   (SP),_IX    SET  4,E         -                -
E4 CALL PO,&0000    -                SET  4,H         -                -
E5 PUSH HL          PUSH _IX         SET  4,L         -                -
E6 AND  &00         -                SET  4,(HL)      SET 4,(IY+d)     -
E7 RST  &20         -                SET  4,A         -                -
E8 RET  PE          -                SET  5,B         -                -
E9 JP   (HL)        JP   (_IX)       SET  5,C         -                -
EA JP   PE,&0000    -                SET  5,D         -                -
EB EX   DE,HL       -                SET  5,E         -                -
EC CALL PE,&0000    -                SET  5,H         -                -
ED **** ED ****     -                SET  5,L         -                -
EE XOR  &00         -                SET  5,(HL)      SET 5,(IY+d)     -
EF RST  &28         -                SET  5,A         -                -
F0 RET  P           -                SET  6,B         -                -
F1 POP  AF          -                SET  6,C         -                -
F2 JP   P,&0000     -                SET  6,D         -                -
F3 DI               -                SET  6,E         -                -
F4 CALL P,&0000     -                SET  6,H         -                -
F5 PUSH AF          -                SET  6,L         -                -
F6 OR   &00         -                SET  6,(HL)      SET 6,(IY+d)     -
F7 RST  &30         -                SET  6,A         -                -
F8 RET  M           -                SET  7,B         -                -
F9 LD   SP,HL       LD   SP,_IX      SET  7,C         -                -
FA JP   M,&0000     -                SET  7,D         -                -
FB EI               -                SET  7,E         -                -
FC CALL M,&0000     -                SET  7,H         -                -
FD **** FD ****     -                SET  7,L         -                -
FE CP   &00         -                SET  7,(HL)      SET 7,(IY+d)     -
FF RST  &38         -                SET  7,A         -                -
"""

HEX="0123456789ABCDEF"
with open("ez80.h","w") as f:
	f.write("#ifndef __EZ80_H__\n#define __EZ80_H__\n// eZ80 opcode defines. Generated from http://mdfs.net/Docs.Comp.eZ80.OpList\n// Opcode values are defined little-endian.\n// Opcodes are uppercase with underscores for spaces, IND for indirects, IMM for immediates, DD for displacements, etc.\n// Each opcode has an accompanying define for how long (in bytes) the opcode (including arguments) is.\n// A macro is defined for emitting each opcode to a pointer.\n\n#define EMIT_8(p,o) (*(uint8_t*)(p)++ = (o))\n#define EMIT_16(p,o) {*(uint16_t*)(p) = (o); (p) += 2;}\n#ifndef uint24_t\n#define EMIT_24(p,o) {EMIT_8(p,(o)&0xff); EMIT_8(p, ((o)>>8)&0xff); EMIT_8(p,((o)>>16)&0xff);}\n#else\n#define EMIT_24(p,o) {*(uint24_t*)(p) = (o); (p) += 3;}\n#endif\n#define EMIT_32(p,o) {*(uint32_t*)(p) = (o); (p) += 4;}\n#define EMIT_8_8(p,o,v) EMIT_16(p,(o)|((v)<<8))\n#define EMIT_16_8(p,o,v) EMIT_24(p,(o)|((v)<<16))\n#define EMIT_8_24(p,o,v) EMIT_32(p,(o)|((v)<<8))\n#define EMIT_8_8_8(p,o,d,v) EMIT_24(p,(o)|((d)<<8)|((v)<<16))\n#define EMIT_16_8_8(p,o,d,v) EMIT_32(p,(o)|((d)<<16)|((v)<<24))\n#define EMIT_16_24(p,o,v) {EMIT_16(p,o); EMIT_24(p,v);}\n\n")
	N=0
	tbl = [[],[],[],[],[]]
	for line in data.splitlines():
		if len(line):
			tbl[0].append((line[3:20], N))
			tbl[1].append((line[20:36].replace("_IX","IX"), N*0x100+0xDD))
			tbl[1].append((line[20:36].replace("_IX","IY"), N*0x100+0xFD))
			tbl[2].append((line[37:54], N*0x100+0xCB))
			tbl[3].append((line[54:71].replace("IY","IX"), N*0x10000+0xCBDD))
			tbl[3].append((line[54:71], N*0x10000+0xCBFD))
			tbl[4].append((line[71:], N*0x100+0xED))
			N+=1

	for t in tbl:
		for l,n in t:
			if '*' not in l and '-' not in l:
				l = l.upper().strip(' ').replace('  ',' ').replace('  ',' ').replace('  ',' ').replace('.','').replace(' ','_').replace(',','_').replace('\'','')
				if "RST" in l:
					s = l.replace('&','')
				else:
					s = l.replace('(HL)','IND_HL').replace('(DE)','IND_DE').replace('(BC)','IND_BC').replace('(SP)','IND_SP').replace('(IX)','IND_IX').replace('(IY)','IND_IY').replace('&0000','IMM').replace('&00','IMM').replace('+D','_DD').replace('(IMM)','IND_IMM').replace('(IX_DD)','IND_IX_DD').replace('(IY_DD)','IND_IY_DD').replace("__","_")
				v = hex(n)[2:].rjust((len(hex(n)[2:])+(len(hex(n)[2:])&1)), '0').upper()
				f.write(f"#define O_{s} 0x{v}\n")
				if "CBFD" in v or "CBDD" in v:
					f.write(f"#define L_{s} {len(v)//2+2}\n")
					f.write(f"#define EMIT_{s}(p,v) EMIT_{8*(len(v)//2-1)}_8_8(p, O_{s}, v, 0x{hex(n//65536)[2:].upper()})\n")
				else:
					if "&0000" in l:
						f.write(f"#define L_{s} {len(v)//2+3}\n")
						f.write(f"#define EMIT_{s}(p,v) EMIT_{8*len(v)//2}_24(p, O_{s}, v)\n")
					elif "&00" in l and "+D" in l:
						f.write(f"#define L_{s} {len(v)//2+2}\n")
						f.write(f"#define EMIT_{s}(p,d,v) EMIT_{8*len(v)//2}_8_8(p, O_{s}, d, v)\n")
					elif "&00" in l or "+D" in l:
						f.write(f"#define L_{s} {len(v)//2+1}\n")
						f.write(f"#define EMIT_{s}(p,v) EMIT_{8*len(v)//2}_8(p, O_{s}, v)\n")
					else:
						f.write(f"#define L_{s} {len(v)//2}\n")
						f.write(f"#define EMIT_{s}(p) EMIT_{8*len(v)//2}(p, O_{s})\n")

	f.write("#endif")

with open("ti84pceg.inc") as f:
	data = f.read().split("\n")

with open("ti84pceg.h", "w") as f:
	f.write("#ifndef __TI84PCEG_H__\n#define __TI84PCEG_H__\n// Generated from ti84pceg.inc\n")
	for line in data:
		if line.startswith(";"):
			f.write(f"// {line[1:]}\n")
		elif line.startswith("?"):
			i = 1
			while line[i].isalnum() or line[i] in '_.':
				i += 1
			name = line[1:i].replace('.', '_')
			value = line[line.find(":=")+2:].strip(" \t")
			if ";" in value:
				value, comment = value.split(";", maxsplit=1)
			else:
				comment = None
			i = valnum = 0
			if "shl" in value:
				# valnuml, valnumr = value.split("shl", maxsplit=1)
				# if "h" in valnuml:
					# valnuml = int(valnuml.strip(" \t").replace("h",""), 16)
				# else:
					# valnuml = int(valnuml)
				# valnumr = valnumr.strip(" \t")
				# try:
					# if valnumr.endswith("h"):
						# valnum = int(valnumr.strip(" \t").replace("h",""), 16)
					# else:
						# valnum = int(valnumr)
				# except:
					# for line in data:
						# if line.startswith("?"+valnumr+" ") or line.startswith("?"+valnumr+"\t"):
							# valnum = line[line.find(":=")+2:].strip(" \t")
							# if ";" in valnum:
								# valnum, _ = valnum.split(";", maxsplit=1)
							# if "h" in valnum:
								# valnum = int(valnum.strip(" \t").replace("h",""), 16)
							# else:
								# valnum = int(valnum.strip(" \t"))
				# valnum = int(valnuml) * 2**(valnum)
				# f.write(f"#define TI_{name} {valnum}")
				valuel, valuer = value.split("shl", maxsplit=1)
				valuel = valuel.strip(" \t")
				valuer = valuer.strip(" \t")
				if valuel.endswith("h"):
					valuel = "0x" + valuel[:-1].upper()
				elif not valuel[0].isdigit():
					valuel = "TI_"+valuel
				if valuer[0].isdigit():
					f.write(f"#define TI_{name} ({valuel} << {valuer})")
				else:
					f.write(f"#define TI_{name} ({valuel} << TI_{valuer})")
			elif "+" in value:
				valuel, valuer = value.split("+", maxsplit=1)
				valuel = valuel.strip(" \t")
				valuer = valuer.strip(" \t")
				if valuel.endswith("h"):
					valuel = "0x" + valuel[:-1].upper()
				elif not valuel[0].isdigit():
					valuel = "TI_"+valuel
				if valuer.endswith("h"):
					valuer = "0x" + valuer[:-1].upper()
				elif not valuer[0].isdigit():
					valuer = "TI_"+valuer
				f.write(f"#define TI_{name} ({valuel} + {valuer})")
			else:
				if value.endswith("h"):
					f.write(f"#define TI_{name} 0x{value[:-1].upper()}")
				else:
					f.write(f"#define TI_{name} {value}")
			if comment is not None:
				f.write(f" // {comment}")
			f.write("\n")
	f.write("#endif")

