#ifndef __TI84PCEG_H__
#define __TI84PCEG_H__
// Generated from ti84pceg.inc
// TI-84 Plus CE Include File
// Various Parts Contributed by
// - BrandonW
// - calc84
// - MateoConLechuga
// - Runer112
// - tr1p1ea
// - Kerm Martian
// - Texas Instruments (ti83plus.inc)
//  Included for Assembler Compatibility
// ------------------------------------
//  Hardware Defines
// ------------------------------
#define TI_lcdWidth 320
#define TI_lcdHeight 240
//  System Calls
//  Jump Table located at 020104h
// --------------------------------
#define TI_OSSize 0020104h  //  not a routine; jump location is end of OS
#define TI_BootOS 0x0020108
#define TI_InterruptHandler 0x002010C
#define TI_Rst10Handler 0x0020110
#define TI_Rst18Handler 0x0020114
#define TI_Rst20Handler 0x0020118
#define TI_Rst28Handler 0x002011C
#define TI_Rst30Handler 0x0020120
//                           equ 0020124h
//                           equ 0020128h
#define TI_JErrorNo 0x002012C
#define TI_CallFontHook 0x0020130
#define TI_CallLocalizeHook 0x0020134
#define TI_LoadHLInd_s 0x0020138
#define TI_CpHLDE 0x002013C
#define TI_DivHLBy10_s 0x0020140
#define TI_DivHLByA_s 0x0020144
#define TI_KbdScan 0x0020148
#define TI_GetCSC 0x002014C
#define TI_CoorMon 0x0020150
#define TI_Mon 0x0020154
#define TI_MonForceKey 0x0020158
#define TI_SendKPress 0x002015C
#define TI_JForceCmdNoChar 0x0020160
#define TI_JForceCmd 0x0020164
#define TI_SysErrHandler 0x0020168
#define TI_NewContext 0x002016C
#define TI_NewContext0 0x0020170
#define TI_PPutawayPrompt 0x0020174
#define TI_PPutAway 0x0020178
#define TI_PutAway 0x002017C
#define TI_SizeWind 0x0020180
#define TI_ErrorEP 0x0020184
#define TI_CallMain 0x0020188
#define TI_MonErrHand 0x002018C
#define TI_AppInit 0x0020190
#define TI_Initialize 0x0020194
#define TI_Min 0x0020198
#define TI_Max 0x002019C
#define TI_AbsO1PAbsO2 0x00201A0
#define TI_Intgr 0x00201A4
#define TI_TRunc 0x00201A8
#define TI_InvSub 0x00201AC
#define TI_Times2 0x00201B0
#define TI_Plus1 0x00201B4
#define TI_Minus1 0x00201B8
#define TI_FPSub 0x00201BC
#define TI_FPAdd 0x00201C0
#define TI_DToR 0x00201C4
#define TI_RToD 0x00201C8
#define TI_Cube 0x00201CC
#define TI_TimesPT5 0x00201D0
#define TI_FPSquare 0x00201D4
#define TI_FPMult 0x00201D8
#define TI_LJRnd 0x00201DC
#define TI_InvOP1Sc 0x00201E0
#define TI_InvOP1S 0x00201E4
#define TI_InvOP2S 0x00201E8
#define TI_Frac 0x00201EC
#define TI_FPRecip 0x00201F0
#define TI_FPDiv 0x00201F4
#define TI_SqRoot 0x00201F8
#define TI_RndGuard 0x00201FC
#define TI_Rnfx 0x0020200
#define TI_Int 0x0020204
#define TI_Round 0x0020208
#define TI_LnX 0x002020C
#define TI_LogX 0x0020210
#define TI_LJNoRnd 0x0020214
#define TI_EToX 0x0020218
#define TI_TenX 0x002021C
#define TI_SinCosRad 0x0020220
#define TI_Sin 0x0020224
#define TI_Cos 0x0020228
#define TI_Tan 0x002022C
#define TI_SinhCosh 0x0020230
#define TI_Tanh 0x0020234
#define TI_Cosh 0x0020238
#define TI_Sinh 0x002023C
#define TI_ACosRad 0x0020240
#define TI_ATanRad 0x0020244
#define TI_ATan2Rad 0x0020248
#define TI_ASinRad 0x002024C
#define TI_ACos 0x0020250
#define TI_ATan 0x0020254
#define TI_ASin 0x0020258
#define TI_ATan2 0x002025C
#define TI_ATanh 0x0020260
#define TI_ASinh 0x0020264
#define TI_ACosh 0x0020268
#define TI_PToR 0x002026C
#define TI_RToP 0x0020270
#define TI_HLTimes9 0x0020274
#define TI_CkOP1Cplx 0x0020278
#define TI_CkOP1Real 0x002027C
#define TI_Angle 0x0020280
#define TI_COP1Set0 0x0020284
#define TI_Cpop4OP3 0x0020288
#define TI_Mov9OP2Cp 0x002028C
#define TI_AbsO1O2Cp 0x0020290
#define TI_CpOP1OP2 0x0020294
#define TI_OP3ToOP4 0x0020298
#define TI_OP1ToOP4 0x002029C
#define TI_OP2ToOP4 0x00202A0
#define TI_OP4ToOP2 0x00202A4
#define TI_OP3ToOP2 0x00202A8
#define TI_OP1ToOP3 0x00202AC
#define TI_OP5ToOP2 0x00202B0
#define TI_OP5ToOP6 0x00202B4
#define TI_OP5ToOP4 0x00202B8
#define TI_OP1ToOP2 0x00202BC
#define TI_OP6ToOP2 0x00202C0
#define TI_OP6ToOP1 0x00202C4
#define TI_OP4ToOP1 0x00202C8
#define TI_OP5ToOP1 0x00202CC
#define TI_OP3ToOP1 0x00202D0
#define TI_OP6ToOP5 0x00202D4
#define TI_OP4ToOP5 0x00202D8
#define TI_OP3ToOP5 0x00202DC
#define TI_OP2ToOP5 0x00202E0
#define TI_OP2ToOP6 0x00202E4
#define TI_OP1ToOP6 0x00202E8
#define TI_OP1ToOP5 0x00202EC
#define TI_OP2ToOP1 0x00202F0
#define TI_Mov11b 0x00202F4
#define TI_Mov10b 0x00202F8
#define TI_Mov9b 0x00202FC
#define TI_Mov9b_ 0x0020300
#define TI_Mov8b 0x0020304
#define TI_Mov7b 0x0020308
#define TI_Mov7b_ 0x002030C
#define TI_OP2ToOP3 0x0020310
#define TI_OP4ToOP3 0x0020314
#define TI_OP5ToOP3 0x0020318
#define TI_OP4ToOP6 0x002031C
#define TI_Mov9ToOP1 0x0020320
#define TI_Mov9OP1OP2 0x0020324
#define TI_Mov9ToOP2 0x0020328
#define TI_MovFrOP1 0x002032C
#define TI_OP4Set1 0x0020330
#define TI_OP3Set1 0x0020334
#define TI_OP2Set8 0x0020338
#define TI_OP2Set5 0x002033C
#define TI_OP2SetA 0x0020340
#define TI_OP2Set4 0x0020344
#define TI_OP2Set3 0x0020348
#define TI_OP1Set1 0x002034C
#define TI_OP1Set4 0x0020350
#define TI_OP1Set3 0x0020354
#define TI_OP3Set2 0x0020358
#define TI_OP1Set2 0x002035C
#define TI_OP2Set2 0x0020360
#define TI_OP2Set1 0x0020364
#define TI_Zero16D 0x0020368
#define TI_OP5Set0 0x002036C
#define TI_OP4Set0 0x0020370
#define TI_OP3Set0 0x0020374
#define TI_OP2Set0 0x0020378
#define TI_OP1Set0 0x002037C
#define TI_SetNum0 0x0020380
#define TI_ZeroOP1 0x0020384
#define TI_ZeroOP2 0x0020388
#define TI_ZeroOP3 0x002038C
#define TI_ZeroOP 0x0020390
#define TI_ClrLP 0x0020394
#define TI_ShrACC 0x0020398
#define TI_ShlACC 0x002039C
#define TI_Shr18 0x00203A0
#define TI_Shr18a 0x00203A4
#define TI_Shr16 0x00203A8
#define TI_Shr14 0x00203AC
#define TI_Shl16 0x00203B0
#define TI_Shl14 0x00203B4
#define TI_Srdo1 0x00203B8
#define TI_ShrdRnd 0x00203BC
#define TI_MantPa 0x00203C0
#define TI_AddPrOP 0x00203C4
#define TI_AddPrOPlP 0x00203C8
//                           equ 00203CCh
//                           equ 00203D0h
#define TI_Sub16d 0x00203D4
#define TI_Sub14d 0x00203D8
#define TI_OP2ExOP6 0x00203DC
#define TI_OP5ExOP6 0x00203E0
#define TI_OP1ExOP5 0x00203E4
#define TI_OP1ExOP6 0x00203E8
#define TI_OP2ExOP4 0x00203EC
#define TI_OP2ExOP5 0x00203F0
#define TI_OP1ExOP3 0x00203F4
#define TI_OP1ExOP4 0x00203F8
#define TI_OP1ExOP2 0x00203FC
#define TI_ExLP 0x0020400
#define TI_CkOP10 0x0020404
#define TI_CkOP1FP0 0x0020408
#define TI_CkOP2FP0 0x002040C
#define TI_PosNo0Int 0x0020410
#define TI_CkPosInt 0x0020414
#define TI_CkInt 0x0020418
#define TI_CkOdd 0x002041C
#define TI_CkOP1EX 0x0020420
#define TI_GetCon1 0x0020424
#define TI_GetCon 0x0020428
#define TI_PiDiv2 0x002042C
#define TI_PiDiv4 0x0020430
#define TI_TwoPi 0x0020434
#define TI_PiCon 0x0020438
#define TI_ExpToHex 0x002043C
#define TI_OP1ExpToDec 0x0020440
#define TI_CkOP2Pos 0x0020444
#define TI_CkOP1Pos 0x0020448
#define TI_ClrOP2S 0x002044C
#define TI_ClrOP1S 0x0020450
#define TI_FDiv100 0x0020454
#define TI_FDiv10 0x0020458
#define TI_DecO1Exp 0x002045C
#define TI_IncO1exp 0x0020460
#define TI_IncExp 0x0020464
#define TI_CkValidNum 0x0020468
#define TI_GetExp 0x002046C
#define TI_HtimesL 0x0020470
#define TI_EOP1NotReal 0x0020474
#define TI_ThetaName 0x0020478
#define TI_RName 0x002047C
#define TI_RegEqName 0x0020480
#define TI_RecurNName 0x0020484
#define TI_XName 0x0020488
#define TI_YName 0x002048C
#define TI_TName 0x0020490
#define TI_RealName 0x0020494
#define TI_SetEStoFPS 0x0020498
#define TI_ChkTempDirt 0x002049C
#define TI_OP1ExOP2Exp 0x00204A0
#define TI_OP1ExpMinusE 0x00204A4
#define TI_ChkErrBreak 0x00204A8
#define TI_Isa2ByteTok 0x00204AC
#define TI_GetLastEntry 0x00204B0
#define TI_GetLastEntryPtr 0x00204B4
#define TI_RegRclrChng 0x00204B8
#define TI_ResetWinTop 0x00204BC
#define TI_IsO1NonTLstOrProg 0x00204C0
#define TI_IsO1NonTempLst 0x00204C4
#define TI_Is_A_LstOrCLst 0x00204C8
#define TI_Chk_HL_999 0x00204CC
#define TI_Equ_Or_NewEqu 0x00204D0
#define TI_Errd_OP1NotPos 0x00204D4
#define TI_Errd_OP1Not_R 0x00204D8
#define TI_Errd_OP1NotPosInt 0x00204DC
#define TI_Errd_OP1_le_0 0x00204E0
#define TI_Errd_OP1_0 0x00204E4
#define TI_ChkFindSym_Get_Size 0x00204E8
#define TI_Sto_StatVar 0x00204EC
#define TI_Rcl_StatVar 0x00204F0
#define TI_CkOP2Real 0x00204F4
#define TI_Get_X_Indirect 0x00204F8
#define TI_MemChk 0x00204FC
#define TI_CmpPrgNamLen1 0x0020500
#define TI_CmpPrgNamLen 0x0020504
#define TI_FindProgSym 0x0020508
#define TI_ChkFindSym 0x002050C
#define TI_FindSym 0x0020510
#define TI_InsertMem 0x0020514
#define TI_InsertMemA 0x0020518
#define TI_EnoughMem 0x002051C
#define TI_CmpMemNeed 0x0020520
#define TI_CreatePVar4 0x0020524
#define TI_CreatePVar3 0x0020528
#define TI_CreateVar3 0x002052C
#define TI_CreateCplx 0x0020530
#define TI_CreateReal 0x0020534
#define TI_CreateTRList 0x0020538
#define TI_CreateRList 0x002053C
#define TI_CreateTCList 0x0020540
#define TI_CreateCList 0x0020544
#define TI_CreateTRMat 0x0020548
#define TI_CreateRMat 0x002054C
#define TI_CreateTStrng 0x0020550
#define TI_CreateStrng 0x0020554
#define TI_Create0Equ 0x0020558
#define TI_CreatetEqu 0x002055C
#define TI_CreateEqu 0x0020560
#define TI_CreateGDB 0x0020564
#define TI_CreateProg 0x0020568
#define TI_ChkDel 0x002056C
#define TI_ChkDelA 0x0020570
#define TI_AdjParser 0x0020574
#define TI_AdjMath 0x0020578
#define TI_AdjM7 0x002057C
#define TI_DelMemA 0x0020580
#define TI_Get_Form_Num 0x0020584
#define TI_DelVar 0x0020588
#define TI_DelVarIO 0x002058C
#define TI_DelMem 0x0020590
#define TI_DelVar3D 0x0020594
#define TI_DelVar3C 0x0020598
#define TI_DelVar3DC 0x002059C
#define TI_Sym_Prog_non_t_Lst 0x00205A0
#define TI_AdjSymPtrs 0x00205A4
#define TI_DataSizeA 0x00205A8
#define TI_DataSize 0x00205AC
#define TI_PopMCplxO1 0x00205B0
#define TI_PopMCplx 0x00205B4
#define TI_MovCplx 0x00205B8
#define TI_PopOP5 0x00205BC
#define TI_PopOP3 0x00205C0
#define TI_PopOP1 0x00205C4
#define TI_PopRealO6 0x00205C8
#define TI_PopRealO5 0x00205CC
#define TI_PopRealO4 0x00205D0
#define TI_PopRealO3 0x00205D4
#define TI_PopRealO2 0x00205D8
#define TI_PopRealO1 0x00205DC
#define TI_PopReal 0x00205E0
#define TI_FPopCplx 0x00205E4
#define TI_FPopReal 0x00205E8
#define TI_FPopFPS 0x00205EC
#define TI_DeallocFPS 0x00205F0
#define TI_DeallocFPS1 0x00205F4
#define TI_AllocFPS 0x00205F8
#define TI_AllocFPS1 0x00205FC
#define TI_PushRealO6 0x0020600
#define TI_PushRealO5 0x0020604
#define TI_PushRealO4 0x0020608
#define TI_PushRealO3 0x002060C
#define TI_PushRealO2 0x0020610
#define TI_PushRealO1 0x0020614
#define TI_PushReal 0x0020618
#define TI_PushOP5 0x002061C
#define TI_PushOP3 0x0020620
#define TI_PushMCplxO3 0x0020624
#define TI_PushOP1 0x0020628
#define TI_PushMCplxO1 0x002062C
#define TI_PushMCplx 0x0020630
#define TI_ExMCplxO1 0x0020634
#define TI_Exch9 0x0020638
#define TI_CpyTo1FPS11 0x002063C
#define TI_CpyTo2FPS5 0x0020640
#define TI_CpyTo1FPS5 0x0020644
#define TI_CpyTo2FPS6 0x0020648
#define TI_CpyTo1FPS6 0x002064C
#define TI_CpyTo2FPS7 0x0020650
#define TI_CpyTo1FPS7 0x0020654
#define TI_CpyTo1FPS8 0x0020658
#define TI_CpyTo2FPS8 0x002065C
#define TI_CpyTo1FPS10 0x0020660
#define TI_CpyTo1FPS9 0x0020664
#define TI_CpyTo2FPS4 0x0020668
#define TI_CpyTo6FPS3 0x002066C
#define TI_CpyTo6FPS2 0x0020670
#define TI_CpyTo2FPS3 0x0020674
#define TI_Cpycto1FPS3 0x0020678
#define TI_CpyTo1FPS3 0x002067C
#define TI_CpyFPS3 0x0020680
#define TI_CpyTo1FPS4 0x0020684
#define TI_CpyTo3FPS2 0x0020688
#define TI_CpyTo5FPST 0x002068C
#define TI_CpyTo6FPST 0x0020690
#define TI_CpyTo4FPST 0x0020694
#define TI_CpyTo3FPST 0x0020698
#define TI_CpyTo2FPST 0x002069C
#define TI_CpyTo1FPST 0x00206A0
#define TI_CpyFPST 0x00206A4
#define TI_CpyStack 0x00206A8
#define TI_CpyTo3FPS1 0x00206AC
#define TI_CpyTo2FPS1 0x00206B0
#define TI_CpyTo1FPS1 0x00206B4
#define TI_CpyFPS1 0x00206B8
#define TI_CpyTo2FPS2 0x00206BC
#define TI_CpyTo1FPS2 0x00206C0
#define TI_CpyFPS2 0x00206C4
#define TI_CpyO3ToFPST 0x00206C8
#define TI_CpyO2ToFPST 0x00206CC
#define TI_CpyO6ToFPST 0x00206D0
#define TI_CpyO1ToFPST 0x00206D4
#define TI_CpyToFPST 0x00206D8
#define TI_CpyToStack 0x00206DC
#define TI_CpyO3ToFPS1 0x00206E0
#define TI_CpyO5ToFPS1 0x00206E4
#define TI_CpyO2ToFPS1 0x00206E8
#define TI_CpyO1ToFPS1 0x00206EC
#define TI_CpyToFPS1 0x00206F0
#define TI_CpyO2ToFPS2 0x00206F4
#define TI_CpyO3ToFPS2 0x00206F8
#define TI_CpyO6ToFPS2 0x00206FC
#define TI_CpyO1ToFPS2 0x0020700
#define TI_CpyToFPS2 0x0020704
#define TI_CpyO5ToFPS3 0x0020708
#define TI_CpyO2ToFPS3 0x002070C
#define TI_CpyO1ToFPS3 0x0020710
#define TI_CpyToFPS3 0x0020714
#define TI_CpyO1ToFPS6 0x0020718
#define TI_CpyO1ToFPS7 0x002071C
#define TI_CpyO1ToFPS5 0x0020720
#define TI_CpyO2ToFPS4 0x0020724
#define TI_CpyO1ToFPS4 0x0020728
#define TI_ErrNotEnoughMem 0x002072C
#define TI_FPSMinus9 0x0020730
#define TI_HLMinus9 0x0020734
#define TI_ErrOverflow 0x0020738
#define TI_ErrDivBy0 0x002073C
#define TI_ErrSingularMat 0x0020740
#define TI_ErrDomain 0x0020744
#define TI_ErrIncrement 0x0020748
#define TI_ErrNon_Real 0x002074C
#define TI_ErrSyntax 0x0020750
#define TI_ErrDataType 0x0020754
#define TI_ErrArgument 0x0020758
#define TI_ErrDimMismatch 0x002075C
#define TI_ErrDimension 0x0020760
#define TI_ErrUndefined 0x0020764
#define TI_ErrMemory 0x0020768
#define TI_ErrInvalid 0x002076C
#define TI_ErrBreak 0x0020770
#define TI_ErrStat 0x0020774
#define TI_ErrSignChange 0x0020778
#define TI_ErrIterations 0x002077C
#define TI_ErrBadGuess 0x0020780
#define TI_ErrTolTooSmall 0x0020784
#define TI_ErrStatPlot 0x0020788
#define TI_ErrLinkXmit 0x002078C
#define TI_JError 0x0020790
#define TI_NoErrorEntry 0x0020794
#define TI_PushErrorHandler 0x0020798
#define TI_PopErrorHandler 0x002079C
#define TI_StrCopy 0x00207A0
#define TI_StrngCat 0x00207A4
#define TI_IsInSet 0x00207A8
#define TI_GEQNameA 0x00207AC
#define TI_RecName 0x00207B0
#define TI_PutMap 0x00207B4
#define TI_PutC 0x00207B8
#define TI_DispHL_s 0x00207BC
#define TI_PutS 0x00207C0
#define TI_PutPSB 0x00207C4
#define TI_PutPS 0x00207C8
#define TI_WPutPS 0x00207CC
#define TI_PutBuf 0x00207D0
#define TI_PutBuf1 0x00207D4
#define TI_WPutC 0x00207D8
#define TI_WPutS 0x00207DC
#define TI_WPutSEOL 0x00207E0
#define TI_WDispEOL 0x00207E4
#define TI_WHomeUp 0x00207E8
#define TI_SetNumWindow 0x00207EC
#define TI_NewLine 0x00207F0
#define TI_MoveDown 0x00207F4
#define TI_ScrollUp 0x00207F8
#define TI_ShrinkWindow 0x00207FC
#define TI_MoveUp 0x0020800
#define TI_ScrollDown 0x0020804
#define TI_ClrLCDFull 0x0020808
#define TI_ClrLCD 0x002080C
#define TI_ClrScrnFull 0x0020810
#define TI_ClrScrn 0x0020814
#define TI_ClrTxtShd 0x0020818
#define TI_ClrWindow 0x002081C
#define TI_EraseEOL 0x0020820
#define TI_EraseEOW 0x0020824
#define TI_HomeUp 0x0020828
#define TI_GetCurloc 0x002082C
#define TI_VPutMap 0x0020830
#define TI_VPutS 0x0020834
#define TI_VPutSN 0x0020838
#define TI_VPutSNG 0x002083C
#define TI_VPutSNT 0x0020840
#define TI_RunIndicOn 0x0020844
#define TI_RunIndicOff 0x0020848
#define TI_SaveCmdShadow 0x002084C
#define TI_SaveShadow 0x0020850
#define TI_RStrShadow 0x0020854
#define TI_RStrPartial 0x0020858
#define TI_RStrCurRow 0x002085C
#define TI_RStrUnderMenu 0x0020860
#define TI_RStrbotRow 0x0020864
#define TI_GetKeypress 0x0020868
#define TI_GetTokLen 0x002086C
#define TI_Get_Tok_Strng 0x0020870
#define TI_GetTokString 0x0020874
#define TI_PutBPatBuf2 0x0020878
#define TI_PutBPatBuf 0x002087C
#define TI_PutBPat 0x0020880
#define TI_PutcChkScroll 0x0020884
#define TI_DispEOL 0x0020888
#define TI_FDispEOL 0x002088C
#define TI_MakeRowCmd 0x0020890
#define TI_ToToStrp 0x0020894
#define TI_SetVarName 0x0020898
#define TI_DispDone 0x002089C
#define TI_FinishOutput 0x00208A0
#define TI_CurBlink 0x00208A4
#define TI_CursorOff 0x00208A8
#define TI_HideCursor 0x00208AC
#define TI_CursorOn 0x00208B0
#define TI_ShowCursor 0x00208B4
#define TI_KeyToString 0x00208B8
#define TI_PullDownChk 0x00208BC
#define TI_MenuCatCommon 0x00208C0
#define TI_LoadCurCat 0x00208C4
#define TI_NCIFPrgmedMode 0x00208C8
#define TI_LoadMenuNum 0x00208CC
#define TI_LoadMenuNuml 0x00208D0
#define TI_MenuEdKey 0x00208D4
#define TI_MenCatRet 0x00208D8
#define TI_NotAlphNum 0x00208DC
#define TI_SetMenuFlags 0x00208E0
#define TI_ResetSomeFlags 0x00208E4
//                           equ 00208E8h
//                           equ 00208ECh
#define TI_DispListName 0x00208F0
#define TI_DispLAlphaName 0x00208F4
#define TI_AbortPrgmode 0x00208F8
#define TI_IsFullCntx 0x00208FC
#define TI_AdrMRow 0x0020900
#define TI_AdrmeLE 0x0020904
#define TI_GetmatOP1A 0x0020908
#define TI_Getm1toOP1 0x002090C
#define TI_Getm1tOP1A 0x0020910
#define TI_GetMToOP1 0x0020914
#define TI_PutToM1A 0x0020918
#define TI_PutToMA1 0x002091C
#define TI_PutToMat 0x0020920
#define TI_MatELDiv 0x0020924
#define TI_CMatFun 0x0020928
#define TI_RowEchPoly 0x002092C
#define TI_RowEchelon 0x0020930
#define TI_AdrLELE 0x0020934
#define TI_Getl1ToOP1 0x0020938
#define TI_Getl1TOP1A 0x002093C
#define TI_GetlToOP1 0x0020940
#define TI_Getl1ToOP2 0x0020944
#define TI_Getl1TOP2A 0x0020948
#define TI_Getl2TOP1A 0x002094C
#define TI_PutTola1 0x0020950
#define TI_PutToL 0x0020954
#define TI_MaxMinLst 0x0020958
#define TI_LLow 0x002095C
#define TI_LHigh 0x0020960
#define TI_LSum 0x0020964
#define TI_CumSum 0x0020968
#define TI_ToFrac 0x002096C
#define TI_SeqSet 0x0020970
#define TI_SeqSolve 0x0020974
#define TI_CmpNumInit 0x0020978
#define TI_BinopExec 0x002097C
#define TI_ExMeanL 0x0020980
#define TI_Set2MVLPtrs 0x0020984
#define TI_SetMat1 0x0020988
#define TI_CreateTLIst 0x002098C
#define TI_UnopExec 0x0020990
#define TI_ThreeExec 0x0020994
#define TI_RestoreErrNo 0x0020998
#define TI_FourExec 0x002099C
#define TI_FiveExec 0x00209A0
#define TI_CpyTo2ES1 0x00209A4
#define TI_CpyTo6ES1 0x00209A8
#define TI_CpyTo1ES1 0x00209AC
#define TI_CpyTo3ES1 0x00209B0
#define TI_CpyTo3ES2 0x00209B4
#define TI_CpyTo2ES2 0x00209B8
#define TI_CpyTo1ES2 0x00209BC
#define TI_CpyTo2ES3 0x00209C0
#define TI_CpyTo1ES3 0x00209C4
#define TI_CpyTo3ES4 0x00209C8
#define TI_CpyTo6ES3 0x00209CC
#define TI_CpyTo2ES4 0x00209D0
#define TI_CpyTo1ES4 0x00209D4
#define TI_CpyTo2ES5 0x00209D8
#define TI_CpyTo1ES5 0x00209DC
#define TI_CpyTo4ESt 0x00209E0
#define TI_CpyTo2ESt 0x00209E4
#define TI_CpyTo1ESt 0x00209E8
#define TI_CpyTo2ES6 0x00209EC
#define TI_CpyTo1ES6 0x00209F0
#define TI_CpyTo2ES7 0x00209F4
#define TI_CpyTo1ES7 0x00209F8
#define TI_CpyTo2ES8 0x00209FC
#define TI_CpyTo1ES8 0x0020A00
#define TI_CpyTo1ES9 0x0020A04
#define TI_CpyTo2ES9 0x0020A08
#define TI_CpyTo2ES10 0x0020A0C
#define TI_CpyTo1ES10 0x0020A10
#define TI_CpyTo2ES11 0x0020A14
#define TI_CpyTo1ES11 0x0020A18
#define TI_CpyTo2ES12 0x0020A1C
#define TI_CpyTo1ES12 0x0020A20
#define TI_CpyTo2ES13 0x0020A24
#define TI_CpyTo1ES13 0x0020A28
#define TI_CpyTo1ES14 0x0020A2C
#define TI_CpyTo1ES16 0x0020A30
#define TI_CpyTo1ES17 0x0020A34
#define TI_CpyTo1ES18 0x0020A38
#define TI_CpyTo1ES15 0x0020A3C
#define TI_CpyTo2ES15 0x0020A40
#define TI_CpyO1ToESt 0x0020A44
#define TI_CpyO1ToES1 0x0020A48
#define TI_CpyO6ToES1 0x0020A4C
#define TI_CpyO6ToES3 0x0020A50
#define TI_CpyO1ToES2 0x0020A54
#define TI_CpyO2ToES2 0x0020A58
#define TI_CpyO1ToES3 0x0020A5C
#define TI_CpyO1ToES4 0x0020A60
#define TI_CpyO1ToES5 0x0020A64
#define TI_CpyO1ToES6 0x0020A68
#define TI_CpyO1ToES7 0x0020A6C
#define TI_CpyO2ToES4 0x0020A70
#define TI_CpyO2ToES5 0x0020A74
#define TI_CpyO2ToES6 0x0020A78
#define TI_CpyO2ToES7 0x0020A7C
#define TI_CpyO2ToES8 0x0020A80
#define TI_CpyO2ToES9 0x0020A84
#define TI_CpyO1ToES8 0x0020A88
#define TI_CpyO1ToES9 0x0020A8C
#define TI_CpyO1ToES10 0x0020A90
#define TI_CpyO1ToES11 0x0020A94
#define TI_CpyO1ToES12 0x0020A98
#define TI_CpyO1ToES13 0x0020A9C
#define TI_CpyO1ToES14 0x0020AA0
#define TI_EvalF3A 0x0020AA4
#define TI_GetK 0x0020AA8
#define TI_SetTitle 0x0020AAC
#define TI_DispVarVal 0x0020AB0
#define TI_RecallEd 0x0020AB4
#define TI_SetUpBuffer 0x0020AB8
#define TI_CreateNumEditBuf 0x0020ABC
#define TI_CallCommon 0x0020AC0
#define TI_CommonKeys 0x0020AC4
#define TI_LeftMore 0x0020AC8
#define TI_FDel 0x0020ACC
#define TI_FClear 0x0020AD0
#define TI_FInsDisp 0x0020AD4
#define TI_FInsDispNoConv 0x0020AD8
#define TI_SetIndicator 0x0020ADC
#define TI_CloseEditBufNoR 0x0020AE0
#define TI_ReleaseBuffer 0x0020AE4
#define TI_VarNameToOP1HL 0x0020AE8
#define TI_NameToOP1 0x0020AEC
#define TI_NumpPutAway 0x0020AF0
#define TI_NumReDisp 0x0020AF4
#define TI_NumError02 0x0020AF8
#define TI_Load_Sfont 0x0020AFC
#define TI_Sfont_Len 0x0020B00
#define TI_InitNumVec 0x0020B04
#define TI_SetxxOP1 0x0020B08
#define TI_SetxxOP2 0x0020B0C
#define TI_SetxxxxOP2 0x0020B10
#define TI_UCLines 0x0020B14
#define TI_CLine 0x0020B18
#define TI_CLines 0x0020B1C
#define TI_XrootY 0x0020B20
#define TI_YtoX 0x0020B24
#define TI_ZmStats 0x0020B28
#define TI_PointStatHelp 0x0020B2C
#define TI_DrawSPlot 0x0020B30
#define TI_InitNewTraceP 0x0020B34
#define TI_SPlotCoord 0x0020B38
#define TI_SPlotRight 0x0020B3C
#define TI_SPlotLeft 0x0020B40
#define TI_CmpBoxInfo 0x0020B44
#define TI_NextPlot 0x0020B48
#define TI_PrevPlot 0x0020B4C
#define TI_ClrPrevPlot 0x0020B50
#define TI_PutIndexList 0x0020B54
#define TI_GetIndexList 0x0020B58
#define TI_HeapSort 0x0020B5C
#define TI_StoGDB2 0x0020B60
#define TI_RclGDB2 0x0020B64
#define TI_CircCmd 0x0020B68
#define TI_GrphCirc 0x0020B6C
#define TI_Mov18b 0x0020B70
#define TI_DarkLine 0x0020B74
#define TI_ILine 0x0020B78
#define TI_IPoint 0x0020B7C
#define TI_XYRndBoth 0x0020B80
#define TI_XYRnd 0x0020B84
#define TI_CheckTOP 0x0020B88
#define TI_CheckXY 0x0020B8C
#define TI_DarkPnt 0x0020B90
#define TI_CPointS 0x0020B94
#define TI_WToV 0x0020B98
#define TI_VtoWHLDE 0x0020B9C
#define TI_Xitof 0x0020BA0
#define TI_YftoI 0x0020BA4
#define TI_XftoI 0x0020BA8
#define TI_TraceOff 0x0020BAC
#define TI_GrRedisp 0x0020BB0
#define TI_GDispToken 0x0020BB4
#define TI_GrdeCoda 0x0020BB8
#define TI_LabCoor 0x0020BBC
#define TI_CoorDisp 0x0020BC0
#define TI_TmpEquNoSrc 0x0020BC4
#define TI_GrLabels 0x0020BC8
#define TI_YPixSet 0x0020BCC
#define TI_XPixSet 0x0020BD0
#define TI_CopyRng 0x0020BD4
#define TI_ValCur 0x0020BD8
#define TI_GrPutAway 0x0020BDC
#define TI_RstGFlags 0x0020BE0
#define TI_GrReset 0x0020BE4
#define TI_XYCent 0x0020BE8
#define TI_ZoomXYCmd 0x0020BEC
#define TI_CptDelY 0x0020BF0
#define TI_CptDelX 0x0020BF4
#define TI_SetFuncM 0x0020BF8
#define TI_SetSeqM 0x0020BFC
#define TI_SetPolM 0x0020C00
#define TI_SetParM 0x0020C04
#define TI_ZmInt 0x0020C08
#define TI_ZmDecml 0x0020C0C
#define TI_ZmPrev 0x0020C10
#define TI_ZmUsr 0x0020C14
#define TI_SetUZM 0x0020C18
#define TI_ZmFit 0x0020C1C
#define TI_ZmSquare 0x0020C20
#define TI_ZmTrig 0x0020C24
#define TI_SetXMinMax 0x0020C28
#define TI_ZooDefault 0x0020C2C
#define TI_GrBufCpy 0x0020C30
#define TI_DrawSplitLine 0x0020C34
//                           equ 0020C38h
//                           equ 0020C3Ch
//                           equ 0020C40h
//                           equ 0020C44h
//                           equ 0020C48h
//                           equ 0020C4Ch
//                           equ 0020C50h
//                           equ 0020C54h
#define TI_ChkTextCurs 0x0020C58
#define TI_Regraph 0x0020C5C
#define TI_DoRefFlags02 0x0020C60
#define TI_InitNSeq 0x0020C64
#define TI_YRes 0x0020C68
#define TI_Ceiling 0x0020C6C
#define TI_PutXY 0x0020C70
#define TI_PutEquNo 0x0020C74
#define TI_PDspGrph 0x0020C78
#define TI_HorizCmd 0x0020C7C
#define TI_VertCmd 0x0020C80
#define TI_LineCmd 0x0020C84
#define TI_UnLineCmd 0x0020C88
#define TI_PointCmd 0x0020C8C
#define TI_PixelTest 0x0020C90
#define TI_PixelCmd 0x0020C94
#define TI_TanLnF 0x0020C98
#define TI_DrawCmdInit 0x0020C9C
#define TI_DrawCmd 0x0020CA0
#define TI_ShadeCmd 0x0020CA4
#define TI_InvCmd 0x0020CA8
#define TI_StatShade 0x0020CAC
#define TI_DspMatTable 0x0020CB0
#define TI_DspLsts 0x0020CB4
#define TI_CloseEditBuf 0x0020CB8
#define TI_ParseEditBuf 0x0020CBC
#define TI_PutSM 0x0020CC0
#define TI_DspCurTbl 0x0020CC4
#define TI_DspGrTbl 0x0020CC8
#define TI_ZeroTemplate 0x0020CCC
#define TI_SetTblRefs 0x0020CD0
#define TI_DispTblBot 0x0020CD4
#define TI_DispTblTop 0x0020CD8
#define TI_DispTblBody 0x0020CDC
#define TI_VPutBlank 0x0020CE0
#define TI_TblTrace 0x0020CE4
#define TI_DispListNameY 0x0020CE8
#define TI_CurNameLength 0x0020CEC
#define TI_NameToBuf 0x0020CF0
#define TI_JPromptCursor 0x0020CF4
#define TI_BufLeft 0x0020CF8
#define TI_BufRight 0x0020CFC
#define TI_BufInsert 0x0020D00
#define TI_BufQueueChar 0x0020D04
#define TI_BufReplace 0x0020D08
#define TI_BufDelete 0x0020D0C
#define TI_BufPeek 0x0020D10
#define TI_BufPeek1 0x0020D14
#define TI_BufPeek2 0x0020D18
#define TI_BufPeek3 0x0020D1C
#define TI_BufToBtm 0x0020D20
#define TI_SetupEditEqu 0x0020D24
#define TI_BufToTop 0x0020D28
#define TI_IsEditFull 0x0020D2C
#define TI_IsEditEmpty 0x0020D30
#define TI_IsAtTop 0x0020D34
#define TI_IsAtBtm 0x0020D38
#define TI_BufClear 0x0020D3C
#define TI_JCursorFirst 0x0020D40
#define TI_JCursorLast 0x0020D44
#define TI_CursorLeft 0x0020D48
#define TI_CursorRight 0x0020D4C
#define TI_CursorUp 0x0020D50
#define TI_CursorDown 0x0020D54
#define TI_CursorToOffset 0x0020D58
#define TI_InsDisp 0x0020D5C
#define TI_FDispBOL1 0x0020D60
#define TI_FDispBOL 0x0020D64
#define TI_DispEOW 0x0020D68
#define TI_DispHead 0x0020D6C
#define TI_DispTail 0x0020D70
#define TI_PutTokString 0x0020D74
#define TI_SetUpEditCmd 0x0020D78
#define TI_SetEmptyeditEqu 0x0020D7C
#define TI_SetEmptyEditPtr 0x0020D80
#define TI_CloseEditEqu 0x0020D84
#define TI_GetPrevTok 0x0020D88
#define TI_GetKey 0x0020D8C
#define TI_CanIndic 0x0020D90
#define TI_DFMin 0x0020D94
#define TI_FormDisp 0x0020D98
#define TI_FormMatrix 0x0020D9C
#define TI_WScrollLeft 0x0020DA0
#define TI_WScrollUp 0x0020DA4
#define TI_WScrollDown 0x0020DA8
#define TI_WScrollRight 0x0020DAC
#define TI_FormEReal 0x0020DB0
#define TI_FormERealTok 0x0020DB4
#define TI_FormDCplx 0x0020DB8
#define TI_FormReal 0x0020DBC
#define TI_SetWinAbove 0x0020DC0
#define TI_DisarmScroll 0x0020DC4
#define TI_MinToEdit 0x0020DC8
#define TI_RclVarToEdit 0x0020DCC
#define TI_RclVarToEditPtr 0x0020DD0
#define TI_RclEntryToEdit 0x0020DD4
#define TI_RclToQueue 0x0020DD8
#define TI_FormToTok 0x0020DDC
#define TI_DispInterval 0x0020DE0
#define TI_DispLstName 0x0020DE4
#define TI_DispSLstNameHL 0x0020DE8
#define TI_EditEqu 0x0020DEC
#define TI_CloseEquField 0x0020DF0
#define TI_AutoSelect 0x0020DF4
#define TI_DispYEOS 0x0020DF8
#define TI_DispNumEOS 0x0020DFC
#define TI_SetupDispEq 0x0020E00
#define TI_DispForward 0x0020E04
#define TI_DispYPrompt2 0x0020E08
#define TI_StringWidth 0x0020E0C
#define TI_DispErrorScreen 0x0020E10
#define TI_PopCX 0x0020E14
#define TI_LoadNoEEntry 0x0020E18
#define TI_SaveScreen 0x0020E1C
#define TI_RetScreen 0x0020E20
#define TI_RetScreenErr 0x0020E24
#define TI_CheckSplitFlag 0x0020E28
#define TI_SolveRedisp 0x0020E2C
#define TI_SolveDisp 0x0020E30
#define TI_ItemName 0x0020E34
#define TI_SetNorm_Vals 0x0020E38
#define TI_SetYOffset 0x0020E3C
#define TI_ConvKeyToTok 0x0020E40
#define TI_ConvFCKeyToTok 0x0020E44
#define TI_ConvFEKeyToTok 0x0020E48
#define TI_TokToKey 0x0020E4C
#define TI_GetVarCmdUSB 0x0020E50
//                           equ 0020E54h
#define TI_DeselectAllVars 0x0020E58
#define TI_DelRes 0x0020E5C
#define TI_ConvLcToLr 0x0020E60
#define TI_RedimMat 0x0020E64
#define TI_IncLstSize 0x0020E68
#define TI_InsertList 0x0020E6C
#define TI_DelListEl 0x0020E70
#define TI_EditProg 0x0020E74
#define TI_CloseProg 0x0020E78
#define TI_ClrGraphRef 0x0020E7C
#define TI_FixTempCnt 0x0020E80
#define TI_SaveData 0x0020E84
#define TI_RestoreData 0x0020E88
#define TI_FindAlphaUp 0x0020E8C
#define TI_FindAlphaDn 0x0020E90
#define TI_CmpSyms 0x0020E94
#define TI_CreateTemp 0x0020E98
#define TI_CleanAll 0x0020E9C
#define TI_MoveToNextSym 0x0020EA0
#define TI_ConvLrToLc 0x0020EA4
#define TI_TblScreenDown 0x0020EA8
#define TI_TblScreenUp 0x0020EAC
#define TI_ScreenScrollPixelsUp 0x0020EB0
// ;_ret                     equ 0020EB4h
#define TI_ZIfRclHandler 0x0020EB8
#define TI_ZIfRclKApp 0x0020EBC
//                           equ 0020EC0h
//                           equ 0020EC4h
#define TI_InitNamePrompt 0x0020EC8
#define TI_InitNamePrompt_ 0x0020ECC
#define TI_CatalogChk 0x0020ED0
#define TI_ClrTR 0x0020ED4
//                           equ 0020ED8h
//                           equ 0020EDCh
//                           equ 0020EE0h
//                           equ 0020EE4h
#define TI_ErrNonReal_FPST_FPS1 0x0020EE8
#define TI_ErrNonReal 0x0020EEC
#define TI_WriteText 0x0020EF0
//                           equ 0020EF4h
#define TI_GraphPars 0x0020EF8
#define TI_PlotPars 0x0020EFC
#define TI_ParseInp 0x0020F00
#define TI_ParseOn 0x0020F04
#define TI_ParseScan 0x0020F08
#define TI_GetParse 0x0020F0C
#define TI_SaveParse 0x0020F10
#define TI_InitPFlgs 0x0020F14
#define TI_CkEndLineRR 0x0020F18
#define TI_OP2Set60 0x0020F1C
#define TI_GetStatPtr 0x0020F20
#define TI_CmpStatPtr 0x0020F24
#define TI_VarSysAdr 0x0020F28
#define TI_StoSysTok 0x0020F2C
#define TI_StoAns 0x0020F30
#define TI_StoTheta 0x0020F34
#define TI_StoR 0x0020F38
#define TI_StoY 0x0020F3C
#define TI_StoN 0x0020F40
#define TI_StoT 0x0020F44
#define TI_StoX 0x0020F48
#define TI_StoOther 0x0020F4C
#define TI_RclAns 0x0020F50
#define TI_RclY 0x0020F54
#define TI_RclN 0x0020F58
#define TI_RclX 0x0020F5C
#define TI_RclVarSym 0x0020F60
#define TI_RclsyStok 0x0020F64
#define TI_StMatel 0x0020F68
#define TI_StLstvecel 0x0020F6C
#define TI_ConvOP1 0x0020F70
#define TI_FindParseFormula 0x0020F74
#define TI_ParseFormula 0x0020F78
#define TI_StrngEnt1 0x0020F7C
#define TI_Prgrdlp 0x0020F80
#define TI_VarEnt 0x0020F84
#define TI_ParseOnC 0x0020F88
#define TI_ParseOn_ 0x0020F8C
#define TI_ParseCmd 0x0020F90
#define TI_StoType 0x0020F94
#define TI_CreatePair 0x0020F98
#define TI_PushNum 0x0020F9C
#define TI_IncCurPCErrEnd 0x0020FA0
#define TI_ErrEnd 0x0020FA4
#define TI_CommaErrF 0x0020FA8
#define TI_CommaErr 0x0020FAC
#define TI_StEQArg2 0x0020FB0
#define TI_StEQArg 0x0020FB4
#define TI_InpArg 0x0020FB8
#define TI_StEQArg3 0x0020FBC
#define TI_NxtFetch 0x0020FC0
#define TI_CkFetchVar 0x0020FC4
#define TI_FetchVarA 0x0020FC8
#define TI_FetchVar 0x0020FCC
#define TI_CkEndLin 0x0020FD0
#define TI_CkEndExp 0x0020FD4
#define TI_CkParsEnd 0x0020FD8
#define TI_StoTypeArg 0x0020FDC
#define TI_ConvDim 0x0020FE0
#define TI_ConvDim00 0x0020FE4
#define TI_AheadEqual 0x0020FE8
#define TI_ParseHeads 0x0020FEC
#define TI_ParseHead 0x0020FF0
#define TI_AnsName 0x0020FF4
#define TI_StoCmpReals 0x0020FF8
#define TI_GetDEPtr 0x0020FFC
#define TI_Push2BOper 0x0021000
#define TI_Push3BOper 0x0021004
#define TI_Pop2BOper 0x0021008
#define TI_Pop3BOper 0x002100C
#define TI_PushOper 0x0021010
#define TI_PopOper 0x0021014
#define TI_FindEUndef 0x0021018
#define TI_SttmpEQ 0x002101C
#define TI_FindEOL 0x0021020
#define TI_BrkInc 0x0021024
#define TI_IncFetch 0x0021028
#define TI_CurFetch 0x002102C
#define TI_Random 0x0021030
#define TI_StoRand 0x0021034
#define TI_RandInit 0x0021038
#define TI_ResetStacks 0x002103C
#define TI_Factorial 0x0021040
#define TI_YEquOnOff 0x0021044
#define TI_EquSelUnsel 0x0021048
#define TI_ITSolver 0x002104C
#define TI_GRITSolver 0x0021050
#define TI_ITSolverB 0x0021054
#define TI_ITSolverNB 0x0021058
#define TI_ExTestInt 0x002105C
#define TI_DistFun 0x0021060
#define TI_LogGamma 0x0021064
#define TI_OneVar 0x0021068
#define TI_OneVars0 0x002106C
#define TI_OrdStat 0x0021070
#define TI_InitStatAns 0x0021074
#define TI_AnovaSpec 0x0021078
#define TI_OutputExpr 0x002107C
#define TI_CentCursor 0x0021080
//                           equ 0021084h
//                           equ 0021088h
//                           equ 002108Ch
//                           equ 0021090h
#define TI_CkValDeltaX 0x0021094
#define TI_CkValDelta 0x0021098
#define TI_GrBufClr 0x002109C
#define TI_GrBufCpyV 0x00210A0
#define TI_FndSelEQ 0x00210A4
#define TI_ClrGraphXY 0x00210A8
#define TI_NEDXTYStyle 0x00210AC
#define TI_PlotPt 0x00210B0
#define TI_NewWindEP 0x00210B4
#define TI_DrawAxes 0x00210B8
#define TI_SetPenX 0x00210BC
#define TI_SetPenY 0x00210C0
#define TI_SetPenT 0x00210C4
#define TI_TanEquDisp 0x00210C8
#define TI_PutAns 0x00210CC
#define TI_DispOP1A 0x00210D0
//                           equ 00210D4h
#define TI_SetTblGraphDraw 0x00210D8
#define TI_MemClear 0x00210DC
#define TI_MemSet 0x00210E0
#define TI_PointOn 0x00210E4
#define TI_ExecuteNewPrgm 0x00210E8
#define TI_StrLength 0x00210EC
#define TI_VPutMapRec 0x00210F0
#define TI_FindAppUp 0x00210F4
#define TI_FindAppDown 0x00210F8
#define TI_FindApp 0x00210FC
#define TI_os_FindAppStart 0x0021100
#define TI_SkipAppHeader 0x0021104
#define TI_FindAppStart 0x0021108
#define TI_IBounds 0x002110C
#define TI_IOffset 0x0021110
#define TI_DrawCirc 0x0021114
#define TI_CanAlphIns 0x0021118
#define TI_CxReDisp 0x002111C
#define TI_GetBaseVer 0x0021120
#define TI_OPSet0 0x0021124
#define TI_AppGetCBLUSB 0x0021128
#define TI_SetIgnoreKey 0x002112C
#define TI_SetSendThisKeyBack 0x0021130
#define TI_DisableAPD 0x0021134
#define TI_EnableAPD 0x0021138
#define TI_Set2IY34 0x002113C
#define TI_ForceCmd 0x0021140
#define TI_ApdSetup 0x0021144
#define TI_AppSetup 0x0021148
//                           equ 002114Ch
#define TI_ReleaseSedit 0x0021150
#define TI_InitSmallEditLine 0x0021154
#define TI_StartSmallEdit 0x0021158
//                           equ 002115Ch
#define TI_SGetTokString 0x0021160
#define TI_LoadPattern 0x0021164
#define TI_SStringLength 0x0021168
#define TI_RestorePenCol 0x002116C
//                           equ 0021170h
#define TI_EmptyHook 0x0021174
#define TI_ForceSmallEditReturn 0x0021178
#define TI_SaveContext 0x002117C
//                           equ 0021180h
#define TI_ClearRow 0x0021184
//                           equ 0021188h
//                           equ 002118Ch
//                           equ 0021190h
//                           equ 0021194h
//                           equ 0021198h
//                           equ 002119Ch
//                           equ 00211A0h
//                           equ 00211A4h
//                           equ 00211A8h
//                           equ 00211ACh
//                           equ 00211B0h
//                           equ 00211B4h
//                           equ 00211B8h
//                           equ 00211BCh
//                           equ 00211C0h
//                           equ 00211C4h
//                           equ 00211C8h
//                           equ 00211CCh
//                           equ 00211D0h
//                           equ 00211D4h
//                           equ 00211D8h
//                           equ 00211DCh
//                           equ 00211E0h
//                           equ 00211E4h
//                           equ 00211E8h
//                           equ 00211ECh
// ;_ret                     equ 00211F0h
//                           equ 00211F4h
#define TI_InitSmallEditLineVar 0x00211F8
#define TI_InitSmallEditLineOP1 0x00211FC
#define TI_InitSmallEditBoxVar 0x0021200
#define TI_InitSmallEditBoxOP1 0x0021204
#define TI_RclEntryToEditA 0x0021208
#define TI_ErrCustom1 0x002120C
#define TI_ErrCustom2 0x0021210
// ;_ret                     equ 0021214h
#define TI_ClearRect 0x0021218
#define TI_InvertRect 0x002121C
#define TI_FillRect 0x0021220
#define TI_RestoreTextFlags 0x0021224
#define TI_InitCellBox 0x0021228
#define TI_DrawCell 0x002122C
//                           equ 0021230h
#define TI_InvertCell 0x0021234
#define TI_SetCellOverride 0x0021238
#define TI_DrawRectBorder 0x002123C
#define TI_ClearCell 0x0021240
#define TI_CoverCell 0x0021244
#define TI_EraseRectBorder 0x0021248
#define TI_FillRectPattern 0x002124C
#define TI_DrawRectBorderClear 0x0021250
//                           equ 0021254h
#define TI_VerticalLine 0x0021258
#define TI_IBoundsFull 0x002125C
//                           equ 0021260h
//                           equ 0021264h
#define TI_CPoint 0x0021268
#define TI_DeleteApp 0x002126C
#define TI_GetModeCellFlagOR 0x0021270
#define TI_ResetModeCellFlag 0x0021274
#define TI_IsModeCellSet 0x0021278
#define TI_GetModeCellFlag 0x002127C
//                           equ 0021280h
#define TI_SetCurCellBoxManager 0x0021284
//                           equ 0021288h
#define TI_CellBoxManager 0x002128C
#define TI_StartNewCell 0x0021290
#define TI_RunInCellOveride 0x0021294
#define TI_RunCellOveride 0x0021298
#define TI_ClearCurCell 0x002129C
#define TI_DrawCurCell 0x00212A0
#define TI_InvertCurCell 0x00212A4
#define TI_CoverCurCell 0x00212A8
#define TI_BlinkCell 0x00212AC
#define TI_BlinkCellNoLookUp 0x00212B0
#define TI_BlinkCurCell 0x00212B4
#define TI_BlinkCellToOn 0x00212B8
#define TI_BlinkCellToOnNoLookUp 0x00212BC
#define TI_BlinkCurCellToOn 0x00212C0
#define TI_BlinkCellToOff 0x00212C4
#define TI_BlinkCellToOffNoLookUp 0x00212C8
#define TI_BlinkCurCellToOff 0x00212CC
#define TI_GetCurModeCellFlag 0x00212D0
//                           equ 00212D4h
#define TI_StartSmallEditReturn 0x00212D8
//                           equ 00212DCh
//                           equ 00212E0h
#define TI_CellKeyHandle 0x00212E4
//                           equ 00212E8h
//                           equ 00212ECh
//                           equ 00212F0h
//                           equ 00212F4h
//                           equ 00212F8h
#define TI_EraseAllCells 0x00212FC
#define TI_IsCurModeCellSet 0x0021300
//                           equ 0021304h
//                           equ 0021308h
//                           equ 002130Ch
//                           equ 0021310h
#define TI_DrawBlnkCell 0x0021314
#define TI_ClearBlnkCell 0x0021318
#define TI_InvertBlnkCell 0x002131C
#define TI_GetStringInput 0x0021320
#define TI_GetStringInput2 0x0021324
#define TI_WaitEnterKeyValue 0x0021328
#define TI_HorizontalLine 0x002132C
#define TI_CreateAppVar 0x0021330
#define TI_CreateProtProg 0x0021334
#define TI_CreateVar 0x0021338
#define TI_AsmComp 0x002133C
#define TI_GetAsmSize 0x0021340
#define TI_SquishPrgm 0x0021344
#define TI_ExecutePrgm 0x0021348
#define TI_ChkFindSymAsm 0x002134C
#define TI_ParsePrgmName 0x0021350
#define TI_CSub 0x0021354
#define TI_CAdd 0x0021358
#define TI_CSquare 0x002135C
#define TI_CMult 0x0021360
#define TI_CRecip 0x0021364
#define TI_CDiv 0x0021368
#define TI_CAbs 0x002136C
#define TI_AddSquares 0x0021370
#define TI_CSqRoot 0x0021374
#define TI_CLN 0x0021378
#define TI_CLog 0x002137C
#define TI_CTenX 0x0021380
#define TI_CEtoX 0x0021384
#define TI_CXrootY 0x0021388
//                           equ 002138Ch
#define TI_CYtoX 0x0021390
#define TI_InvertNonReal 0x0021394
#define TI_CTrunc 0x0021398
#define TI_CFrac 0x002139C
#define TI_CFloor 0x00213A0
#define TI_SrchVLstUp 0x00213A4
#define TI_SrchVLstDn 0x00213A8
#define TI_FlashWriteDisable 0x00213AC
#define TI_Disp 0x00213B0
#define TI_GetBytePaged 0x00213B4
#define TI_RunCursorHook 0x00213B8
#define TI_RunLibraryHook 0x00213BC
#define TI_RunRawKeyHook 0x00213C0
#define TI_SetCursorHook 0x00213C4
#define TI_SetLibraryHook 0x00213C8
#define TI_SetGetKeyHook 0x00213CC
#define TI_ClrCursorHook 0x00213D0
#define TI_ClrLibraryHook 0x00213D4
#define TI_ClrRawKeyHook 0x00213D8
#define TI_GetKeyHook 0x00213DC
#define TI_SetGetCSCHook 0x00213E0
#define TI_ClrGetKeyHook 0x00213E4
#define TI_SetCatalog2Hook 0x00213E8
#define TI_ClrCatalog2Hook 0x00213EC
#define TI_SetLocalizeHook 0x00213F0
#define TI_ClrLocalizeHook 0x00213F4
#define TI_SetTokenHook 0x00213F8
#define TI_ClrTokenHook 0x00213FC
//                           equ 0021400h
//                           equ 0021404h
#define TI_DispListElementOffLA 0x0021408
#define TI_BitVertSplit 0x002140C
#define TI_SetHomescreenHook 0x0021410
#define TI_ClrHomescreenHook 0x0021414
#define TI_SetWindowHook 0x0021418
#define TI_ClrWindowHook 0x002141C
#define TI_SetGraphModeHook 0x0021420
#define TI_ClrGraphModeHook 0x0021424
#define TI_ParseAndStoreSysVar 0x0021428
#define TI_DisplayEditSysVar 0x002142C
#define TI_JForceWIndowSettings 0x0021430
#define TI_DelVarArc 0x0021434
#define TI_DelVarNoArc 0x0021438
#define TI_SetAllPlots 0x002143C
#define TI_SetYeditHook 0x0021440
#define TI_ClrYeditHook 0x0021444
#define TI_Arc_Unarc 0x0021448
#define TI_ArchiveVar 0x002144C
#define TI_UnarchiveVar 0x0021450
#define TI_SetFontHook 0x0021454
#define TI_ClrFontHook 0x0021458
#define TI_SetRegraphHook 0x002145C
#define TI_ClrRegraphHook 0x0021460
#define TI_RunGraphingHook 0x0021464
#define TI_SetTraceHook 0x0021468
#define TI_ClrTraceHook 0x002146C
#define TI_RunTraceHook 0x0021470
#define TI_NDeriv 0x0021474
#define TI_PolarDerivative 0x0021478
#define TI_JForceGraphNoKey 0x002147C
#define TI_JForceGraphKey 0x0021480
#define TI_PowerOff 0x0021484
#define TI_GetKeyRetOff 0x0021488
#define TI_FindGroupSym 0x002148C
#define TI_LoadDEIndPaged 0x0021490
#define TI_SetUpPagedPtr 0x0021494
#define TI_PagedGet 0x0021498
#define TI_SetParserHook 0x002149C
#define TI_ClrParserHook 0x00214A0
#define TI_SetAppChangeHook 0x00214A4
#define TI_ClrAppChangeHook 0x00214A8
#define TI_SetGraphicsHook 0x00214AC
#define TI_ClrGraphicsHook 0x00214B0
#define TI_ILineNoGraphicsHook 0x00214B4
#define TI_ILineNoHook 0x00214B8
//                           equ 00214BCh
#define TI_DeleteTempPrograms 0x00214C0
#define TI_SetCatalog1Hook 0x00214C4
#define TI_ClrCatalog1Hook 0x00214C8
#define TI_SetHelpHook 0x00214CC
#define TI_ClrHelpHook 0x00214D0
#define TI_DispCatalogEnd 0x00214D4
#define TI_GetMenuKeypress 0x00214D8
#define TI_GetCatalogItem 0x00214DC
#define TI_RunCatalog2Hook 0x00214E0
#define TI_RunCatalog1Hook 0x00214E4
//                           equ 00214E8h
//                           equ 00214ECh
#define TI_DispMenuTitle 0x00214F0
//                           equ 00214F4h
#define TI_SetCxReDispHook 0x00214F8
#define TI_ClrCxReDispHook 0x00214FC
#define TI_DrawStatusBarMode 0x0021500
#define TI_BufClr 0x0021504
#define TI_UnOPExec2 0x0021508
#define TI_BinOPExec2 0x002150C
#define TI_LoadMenuB 0x0021510
#define TI_DisplayVarInfo 0x0021514
#define TI_SetMenuHook 0x0021518
#define TI_ClrMenuHook 0x002151C
#define TI_GetBCOffSetIX 0x0021520
#define TI_GetBCOffSetIX_ 0x0021524
#define TI_ForceFullScreen 0x0021528
#define TI_HLMinus5 0x002152C
// ;_ret                     equ 0021530h
//                           equ 0021534h
//                           equ 0021538h
#define TI_Arc_Unarc_ 0x002153C
#define TI_RclExit 0x0021540
#define TI_SetSilentLinkHook 0x0021544
#define TI_ClrSilentLinkHook 0x0021548
#define TI_TwoVarSet 0x002154C
#define TI_ExecClassCToken 0x0021550
#define TI_ExecClass3Token 0x0021554
#define TI_GetSysInfo 0x0021558
#define TI_RunChkCTenX 0x002155C
#define TI_TenXNoClr 0x0021560
//                           equ 0021564h
//                           equ 0021568h
#define TI_GetVarVersion 0x002156C
#define TI_ParseGraphCmdToken 0x0021570
//                           equ 0021574h
#define TI_DeleteTempEditEqu 0x0021578
#define TI_PromptMoveBackLeft 0x002157C
#define TI_WPutSEOLRes10E 0x0021580
#define TI_InvertTextInsMode 0x0021584
//                           equ 0021588h
#define TI_ResetDefaults 0x002158C
#define TI_ZeroFinanceVars 0x0021590
#define TI_DispHeader 0x0021594
#define TI_JForceGroup 0x0021598
//                           equ 002159Ch
//                           equ 00215A0h
#define TI_DispCoords 0x00215A4
//                           equ 00215A8h
//                           equ 00215ACh
#define TI_ChkTmr 0x00215B0
#define TI_ClockOff 0x00215B4
#define TI_ClockOn 0x00215B8
//                           equ 00215BCh
#define TI_GetDate 0x00215C0
#define TI_GetDateString 0x00215C4
#define TI_GetDtFmt 0x00215C8
#define TI_GetDtStr 0x00215CC
#define TI_GetTime 0x00215D0
#define TI_FormTime 0x00215D4
#define TI_GetTmFmt 0x00215D8
#define TI_GetTmStr 0x00215DC
#define TI_SetZeroOne 0x00215E0
#define TI_SetDate 0x00215E4
#define TI_IsOneTwoThree 0x00215E8
#define TI_SetTime 0x00215EC
#define TI_IsOP112or24 0x00215F0
#define TI_ChkTimer0 0x00215F4
#define TI_TimeCnv 0x00215F8
#define TI_ClrWindowAndFlags 0x00215FC
#define TI_ResetAllLists 0x0021600
#define TI_DispValue 0x0021604
//                           equ 0021608h
//                           equ 002160Ch
//                           equ 0021610h
#define TI_CpOP1OP2Rounded 0x0021614
#define TI_CpOP1OP2Rounded2 0x0021618
//                           equ 002161Ch
//                           equ 0021620h
#define TI_ResetIOPrompt 0x0021624
//                           equ 0021628h
#define TI_SetUpEditor 0x002162C
#define TI_SortA 0x0021630
#define TI_SortD 0x0021634
//                           equ 0021638h
#define TI_IsOP1ResID 0x002163C
//                           equ 0021640h
//                           equ 0021644h
//                           equ 0021648h
#define TI_ForceModeKeypress 0x002164C
#define TI_DispAboutScreen 0x0021650
#define TI_ChkHelpHookVer 0x0021654
#define TI_Draw32 0x0021658
//                           equ 002165Ch
//                           equ 0021660h
//                           equ 0021664h
#define TI_DrawPlotStatus 0x0021668
#define TI_DrawTableEditor 0x002166C
#define TI_DisplayListNameEquals 0x0021670
#define TI_DisplayListHeader 0x0021674
#define TI_DispMatrixDimensions 0x0021678
#define TI_HighlightListEdItem 0x002167C
//                           equ 0021680h
//                           equ 0021684h
#define TI_MatrixName 0x0021688
//                           equ 002168Ch
//                           equ 0021690h
//                           equ 0021694h
//                           equ 0021698h
//                           equ 002169Ch
#define TI_ChkCxMainPtr 0x00216A0
#define TI_NumError02_ 0x00216A4
//                           equ 00216A8h
#define TI_SetupEmptyEditTempEqu 0x00216AC
#define TI_Res1IY0E 0x00216B0
#define TI_RestoreBuffer 0x00216B4
//                           equ 00216B8h
//                           equ 00216BCh
//                           equ 00216C0h
//                           equ 00216C4h
//                           equ 00216C8h
//                           equ 00216CCh
#define TI_DisplayListEquals 0x00216D0
#define TI_GetCurPlotListOffset 0x00216D4
#define TI_GoToLastRow 0x00216D8
#define TI_DrawRectBorder_ 0x00216DC
//                           equ 00216E0h
//                           equ 00216E4h
//                           equ 00216E8h
//                           equ 00216ECh
#define TI_NamedListToOP1 0x00216F0
//                           equ 00216F4h
//                           equ 00216F8h
//                           equ 00216FCh
#define TI_InitUSBDeviceCallback 0x0021700
#define TI_KillUSBDevice 0x0021704
#define TI_SetUSBConfiguration 0x0021708
#define TI_RequestUSBData 0x002170C
#define TI_StopReceivingUSBData 0x0021710
#define TI_SetVertGraphActive 0x0021714
#define TI_ClrVertGraphActive 0x0021718
#define TI_SetUSBActivityHook 0x002171C
#define TI_ClrUSBActivityHook 0x0021720
// ;_ret                     equ 0021724h
#define TI_GetCurPlotOffsetPrev 0x0021728
#define TI_SplitUpdateStatPlotLists 0x002172C
#define TI_GraphLine 0x0021730
//                           equ 0021734h
//                           equ 0021738h
//                           equ 002173Ch
//                           equ 0021740h
//                           equ 0021744h
//                           equ 0021748h
#define TI_ZIfInTblEditor 0x002174C
//                           equ 0021750h
#define TI_GetCurPlotOffset 0x0021754
//                           equ 0021758h
//                           equ 002175Ch
//                           equ 0021760h
//                           equ 0021764h
//                           equ 0021768h
#define TI_UpdateStatPlotLists 0x002176C
#define TI_ChkSomethingElseFPS5 0x0021770
#define TI_ChkSomethingFPS5 0x0021774
#define TI_VDispRealOP1 0x0021778
#define TI_DispXEqualsNum 0x002177C
#define TI_ResetGraphSettings 0x0021780
#define TI_InitializeVariables 0x0021784
// ;_ret                     equ 0021788h
#define TI_DelVarSym 0x002178C
#define TI_FindAppUpNoCase 0x0021790
#define TI_FindAppDnNoCase 0x0021794
#define TI_SetupHome 0x0021798
#define TI_GrPutawayFull 0x002179C
// ;_ret                     equ 00217A0h
#define TI_ToggleUSBSmartPadInput 0x00217A4
#define TI_IsUSBDeviceConnected 0x00217A8
#define TI_PolarEquToOP1 0x00217AC
#define TI_ParamXEquToOP1 0x00217B0
#define TI_ParamYEquToOP1 0x00217B4
#define TI_DispTestModeResetComplete 0x00217B8
#define TI_PTTReset 0x00217BC
#define TI_FindAppCustom 0x00217C0
#define TI_ClearGraphStyles 0x00217C4
#define TI_BufToNextBASICSeparator 0x00217C8
//                           equ 00217CCh
//                           equ 00217D0h
#define TI_ZooStandard 0x00217D4
//                           equ 00217D8h
//                           equ 00217DCh
//                           equ 00217E0h
//                           equ 00217E4h
//                           equ 00217E8h
//                           equ 00217ECh
//                           equ 00217F0h
//                           equ 00217F4h
//                           equ 00217F8h
//                           equ 00217FCh
//                           equ 0021800h
//                           equ 0021804h
//                           equ 0021808h
//                           equ 002180Ch
#define TI_AddHistoryEntryString 0x0021810
#define TI_CurrEntryToPrevEntry 0x0021814
//                           equ 0021818h
//                           equ 002181Ch
//                           equ 0021820h
//                           equ 0021824h
//                           equ 0021828h
//                           equ 002182Ch
//                           equ 0021830h
//                           equ 0021834h
//                           equ 0021838h
//                           equ 002183Ch
//                           equ 0021840h
//                           equ 0021844h
//                           equ 0021848h
//                           equ 002184Ch
//                           equ 0021850h
//                           equ 0021854h
//                           equ 0021858h
//                           equ 002185Ch
//                           equ 0021860h
//                           equ 0021864h
//                           equ 0021868h
//                           equ 002186Ch
//                           equ 0021870h
//                           equ 0021874h
//                           equ 0021878h
//                           equ 002187Ch
//                           equ 0021880h
//                           equ 0021884h
//                           equ 0021888h
//                           equ 002188Ch
//                           equ 0021890h
//                           equ 0021894h
//                           equ 0021898h
//                           equ 002189Ch
//                           equ 00218A0h
//                           equ 00218A4h
//                           equ 00218A8h
//                           equ 00218ACh
//                           equ 00218B0h
//                           equ 00218B4h
//                           equ 00218B8h
//                           equ 00218BCh
//                           equ 00218C0h
//                           equ 00218C4h
//                           equ 00218C8h
//                           equ 00218CCh
//                           equ 00218D0h
//                           equ 00218D4h
//                           equ 00218D8h
//                           equ 00218DCh
//                           equ 00218E0h
//                           equ 00218E4h
//                           equ 00218E8h
//                           equ 00218ECh
#define TI_RunInitialBootMenu 0x00218F0
//                           equ 00218F4h
//                           equ 00218F8h
//                           equ 00218FCh
#define TI_Clr05RclFlags 0x0021900
//                           equ 0021904h
//                           equ 0021908h
//                           equ 002190Ch
//                           equ 0021910h
#define TI_DeleteHistoryEntry 0x0021914
//                           equ 0021918h
//                           equ 002191Ch
//                           equ 0021920h
//                           equ 0021924h
//                           equ 0021928h
//                           equ 002192Ch
//                           equ 0021930h
//                           equ 0021934h
//                           equ 0021938h
//                           equ 002193Ch
#define TI_CommonKeys_ 0x0021940
//                           equ 0021944h
//                           equ 0021948h
//                           equ 002194Ch
//                           equ 0021950h
//                           equ 0021954h
//                           equ 0021958h
//                           equ 002195Ch
//                           equ 0021960h
//                           equ 0021964h
//                           equ 0021968h
//                           equ 002196Ch
//                           equ 0021970h
//                           equ 0021974h
//                           equ 0021978h
//                           equ 002197Ch
//                           equ 0021980h
//                           equ 0021984h
//                           equ 0021988h
//                           equ 002198Ch
//                           equ 0021990h
//                           equ 0021994h
#define TI_ResetLastEntryStack 0x0021998
//                           equ 002199Ch
//                           equ 00219A0h
#define TI_jp_JForceCmdNoChar 0x00219A4
#define TI_Load_LFont 0x00219A8
//                           equ 00219ACh
//                           equ 00219B0h
//                           equ 00219B4h
//                           equ 00219B8h
//                           equ 00219BCh
//                           equ 00219C0h
//                           equ 00219C4h
//                           equ 00219C8h
//                           equ 00219CCh
//                           equ 00219D0h
//                           equ 00219D4h
//                           equ 00219D8h
#define TI_EnterSelfTest 0x00219DC
#define TI_DrawEntrySepLine 0x00219E0
//                           equ 00219E4h
#define TI_GetGraphModeProperties 0x00219E8
//                           equ 00219ECh
//                           equ 00219F0h
//                           equ 00219F4h
//                           equ 00219F8h
//                           equ 00219FCh
//                           equ 0021A00h
//                           equ 0021A04h
//                           equ 0021A08h
//                           equ 0021A0Ch
#define TI_ClrLCDAll 0x0021A10
#define TI_BufIPoint 0x0021A14
//                           equ 0021A18h
//                           equ 0021A1Ch
//                           equ 0021A20h
//                           equ 0021A24h
#define TI_SetDrawFGColorA 0x0021A28
//                           equ 0021A2Ch
//                           equ 0021A30h
//                           equ 0021A34h
#define TI_DrawGraphBackground 0x0021A38
#define TI_DrawStatusBar 0x0021A3C
//                           equ 0021A40h
//                           equ 0021A44h
//                           equ 0021A48h
//                           equ 0021A4Ch
#define TI_DrawBatteryIndicator 0x0021A50
#define TI_DrawBatteryStatus 0x0021A54
#define TI_VDispHL 0x0021A58
#define TI_PDspGrphNoColorReload 0x0021A5C
//                           equ 0021A60h
//                           equ 0021A64h
//                           equ 0021A68h
//                           equ 0021A6Ch
//                           equ 0021A70h
//                           equ 0021A74h
//                           equ 0021A78h
//                           equ 0021A7Ch
//                           equ 0021A80h
//                           equ 0021A84h
//                           equ 0021A88h
//                           equ 0021A8Ch
//                           equ 0021A90h
//                           equ 0021A94h
//                           equ 0021A98h
//                           equ 0021A9Ch
//                           equ 0021AA0h
//                           equ 0021AA4h
//                           equ 0021AA8h
//                           equ 0021AACh
//                           equ 0021AB0h
#define TI_DrawStatusBarInfo 0x0021AB4
#define TI_RestoreLCDBrightness 0x0021AB8
#define TI_RestoreLCDBrightness_ 0x0021ABC
#define TI_DimLCDSlow 0x0021AC0
//                           equ 0021AC4h
//                           equ 0021AC8h
//                           equ 0021ACCh
//                           equ 0021AD0h
//                           equ 0021AD4h
//                           equ 0021AD8h
//                           equ 0021ADCh
#define TI_SetTextFGBGcolors 0x0021AE0
#define TI_SetTextFGBGcolors_ 0x0021AE4
#define TI_SetTextBGcolor 0x0021AE8
#define TI_VPutPS 0x0021AEC
//                           equ 0021AF0h
//                           equ 0021AF4h
//                           equ 0021AF8h
//                           equ 0021AFCh
#define TI_DrawTILogo 0x0021B00
#define TI_DrawThickRectBorder 0x0021B04
//                           equ 0021B08h
#define TI_DrawStatusBarTextClr 0x0021B0C
//                           equ 0021B10h
//                           equ 0021B14h
//                           equ 0021B18h
//                           equ 0021B1Ch
#define TI_VPutPSN 0x0021B20
//                           equ 0021B24h
//                           equ 0021B28h
//                           equ 0021B2Ch
//                           equ 0021B30h
#define TI_RStrGraphFlags 0x0021B34
//                           equ 0021B38h
//                           equ 0021B3Ch
#define TI_VPutMapSpecial 0x0021B40
//                           equ 0021B44h
//                           equ 0021B48h
//                           equ 0021B4Ch
//                           equ 0021B50h
//                           equ 0021B54h
//                           equ 0021B58h
//                           equ 0021B5Ch
//                           equ 0021B60h
#define TI_DrawSprite16bpp 0x0021B64
//                           equ 0021B68h
//                           equ 0021B6Ch
//                           equ 0021B70h
//                           equ 0021B74h
//                           equ 0021B78h
//                           equ 0021B7Ch
//                           equ 0021B80h
//                           equ 0021B84h
//                           equ 0021B88h
//                           equ 0021B8Ch
//                           equ 0021B90h
//                           equ 0021B94h
//                           equ 0021B98h
//                           equ 0021B9Ch
//                           equ 0021BA0h
//                           equ 0021BA4h
//                           equ 0021BA8h
#define TI_GetColorValue 0x0021BAC
//                           equ 0021BB0h
//                           equ 0021BB4h
//                           equ 0021BB8h
//                           equ 0021BBCh
//                           equ 0021BC0h
#define TI_GraphBGColorToDrawBGColor 0x0021BC4
#define TI_SetWhiteDrawBGColor 0x0021BC8
//                           equ 0021BCCh
#define TI_ChkResAppTextSave 0x0021BD0
#define TI_ChkCxMain 0x0021BD4
//                           equ 0021BD8h
//                           equ 0021BDCh
#define TI_DrawRectBorder__ 0x0021BE0
//                           equ 0021BE4h
//                           equ 0021BE8h
//                           equ 0021BECh
//                           equ 0021BF0h
//                           equ 0021BF4h
//                           equ 0021BF8h
//                           equ 0021BFCh
//                           equ 0021C00h
//                           equ 0021C04h
//                           equ 0021C08h
//                           equ 0021C0Ch
//                           equ 0021C10h
//                           equ 0021C14h
//                           equ 0021C18h
//                           equ 0021C1Ch
//                           equ 0021C20h
//                           equ 0021C24h
//                           equ 0021C28h
//                           equ 0021C2Ch
//                           equ 0021C30h
//                           equ 0021C34h
//                           equ 0021C38h
//                           equ 0021C3Ch
//                           equ 0021C40h
//                           equ 0021C44h
#define TI_DrawLineEndEntry 0x0021C48
//                           equ 0021C4Ch
//                           equ 0021C50h
// ;_ret                     equ 0021C54h
//                           equ 0021C58h
//                           equ 0021C5Ch
//                           equ 0021C60h
//                           equ 0021C64h
//                           equ 0021C68h
#define TI_BitGrfFuncM 0x0021C6C
// ;_ret                     equ 0021C70h
#define TI_GetScrollPxlAmount 0x0021C74
#define TI_os_PushErrorHandler 0x0021C78
#define TI_os_PopErrorHandler 0x0021C7C
#define TI_os_ThrowError 0x0021C80
#define TI_os_RealCopy 0x0021C84
#define TI_os_RealAcosRad 0x0021C88
#define TI_os_RealAsinRad 0x0021C8C
#define TI_os_RealAtanRad 0x0021C90
#define TI_os_RealAdd 0x0021C94
#define TI_os_CplxAdd 0x0021C98
#define TI_os_RealCompare 0x0021C9C
#define TI_os_RealCosRad 0x0021CA0
#define TI_os_RealRadToDeg 0x0021CA4
#define TI_os_RealDiv 0x0021CA8
#define TI_os_RealExp 0x0021CAC
#define TI_os_RealFloor 0x0021CB0
#define TI_os_RealToStr 0x0021CB4
#define TI_os_RealFrac 0x0021CB8
#define TI_os_RealGcd 0x0021CBC
#define TI_os_RealRoundInt 0x0021CC0
#define TI_os_RealLcm 0x0021CC4
#define TI_os_RealLog 0x0021CC8
#define TI_os_RealMax 0x0021CCC
#define TI_os_RealMin 0x0021CD0
#define TI_os_RealMul 0x0021CD4
#define TI_os_RealNcr 0x0021CD8
#define TI_os_RealNeg 0x0021CDC
#define TI_os_RealNpr 0x0021CE0
#define TI_os_RealPow 0x0021CE4
#define TI_os_RealDegToRad 0x0021CE8
#define TI_os_RealRandInt 0x0021CEC
#define TI_os_RealInv 0x0021CF0
#define TI_os_RealMod 0x0021CF4
#define TI_os_RealRound 0x0021CF8
#define TI_os_RealSinRad 0x0021CFC
#define TI_os_RealSqrt 0x0021D00
#define TI_os_RealSub 0x0021D04
#define TI_os_RealTanRad 0x0021D08
#define TI_os_StrToReal 0x0021D0C
#define TI_os_RealTrunc 0x0021D10
#define TI_os_SetFlagBits 0x0021D14
#define TI_os_ResetFlagBits 0x0021D18
#define TI_os_TestFlagBits 0x0021D1C
#define TI_os_SetFlagByte 0x0021D20
#define TI_os_GetFlagByte 0x0021D24
#define TI_os_GetCursorPos 0x0021D28
#define TI_os_PutStrFull 0x0021D2C
#define TI_os_PutStrLine 0x0021D30
#define TI_os_SetCursorPos 0x0021D34
#define TI_os_GetKey 0x0021D38
#define TI_os_GetCSC 0x0021D3C
#define TI_os_AppInit 0x0021D40
//                           equ 0021D44h
#define TI_ChkBCIs0 0x0021D48
#define TI_ChkDEIs0 0x0021D4C
#define TI_ChkHLIs0 0x0021D50
#define TI_SetAToBCU 0x0021D54
#define TI_SetAToDEU 0x0021D58
#define TI_SetAToHLU 0x0021D5C
#define TI_SetBCUToA 0x0021D60
#define TI_SetBCUToB 0x0021D64
#define TI_SetDEUToA 0x0021D68
#define TI_SetDEUToB 0x0021D6C
#define TI_SetHLUToA 0x0021D70
#define TI_SetHLUToB 0x0021D74
#define TI_SignExtendBC 0x0021D78
#define TI_SignExtendDE 0x0021D7C
#define TI_SignExtendHL 0x0021D80
#define TI_SetBCUTo0 0x0021D84
#define TI_SetDEUTo0 0x0021D88
#define TI_SetHLUTo0 0x0021D8C
#define TI_DivHLByA 0x0021D90
#define TI_CpHLDE_s 0x0021D94
#define TI_CpHLDE_ 0x0021D98
#define TI_LoadDEInd_s 0x0021D9C
#define TI_LoadDEInd 0x0021DA0
#define TI_CpHLDEBC 0x0021DA4
#define TI_NegBC 0x0021DA8
#define TI_NegDE 0x0021DAC
#define TI_StrCmpre 0x0021DB0
#define TI_AddHLAndA 0x0021DB4
#define TI_NextFlashPage 0x0021DB8
#define TI_PrevFlashPage 0x0021DBC
#define TI_SwapEndianHL_s 0x0021DC0
#define TI_ReloadAppEntryVecs 0x0021DC4
//                           equ 0021DC8h
//                           equ 0021DCCh
//                           equ 0021DD0h
//                           equ 0021DD4h
//                           equ 0021DD8h
//                           equ 0021DDCh
#define TI_os_ClearVRAMLines 0x0021DE0
#define TI_os_DisableCursor 0x0021DE4
#define TI_os_EnableCursor 0x0021DE8
//                           equ 0021DECh
//                           equ 0021DF0h
//                           equ 0021DF4h
//                           equ 0021DF8h
//                           equ 0021DFCh
#define TI_os_FontDrawText 0x0021E00
//                           equ 0021E04h
//                           equ 0021E08h
//                           equ 0021E0Ch
//                           equ 0021E10h
#define TI_os_FontGetHeight 0x0021E14
#define TI_os_FontGetWidth 0x0021E18
#define TI_os_InitDrawing 0x0021E1C
#define TI_os_SetDrawBGColor 0x0021E20
#define TI_os_SetDrawFGColor 0x0021E24
#define TI_os_FontSelect 0x0021E28
//                           equ 0021E2Ch
//                           equ 0021E30h
#define TI_tolower 0x0021E34
#define TI_toupper 0x0021E38
//                           equ 0021E3Ch
//                           equ 0021E40h
//                           equ 0021E44h
//                           equ 0021E48h
//                           equ 0021E4Ch
//                           equ 0021E50h
//                           equ 0021E54h
//                           equ 0021E58h
//                           equ 0021E5Ch
//                           equ 0021E60h
//                           equ 0021E64h
#define TI_ChkACplx 0x0021E68
//                           equ 0021E6Ch
#define TI_os_RclAns 0x0021E70
//                           equ 0021E74h
//                           equ 0021E78h
//                           equ 0021E7Ch
//                           equ 0021E80h
//                           equ 0021E84h
//                           equ 0021E88h
#define TI_SetPolarEquToOP1 0x0021E8C
//                           equ 0021E90h
//                           equ 0021E94h
//                           equ 0021E98h
//                           equ 0021E9Ch
//                           equ 0021EA0h
//                           equ 0021EA4h
//                           equ 0021EA8h
//                           equ 0021EACh
//                           equ 0021EB0h
//                           equ 0021EB4h
//                           equ 0021EB8h
//                           equ 0021EBCh
//                           equ 0021EC0h
//                           equ 0021EC4h
#define TI_os_SetTimer1 0x0021EC8
#define TI_os_DisableTimer1 0x0021ECC
#define TI_os_SetKbdKey 0x0021ED0
#define TI_os_GetSystemInfo 0x0021ED4
//                           equ 0021ED8h
//                           equ 0021EDCh
#define TI_DispHL 0x0021EE0
#define TI_os_GetDrawBGColor_BROKEN 0021EE4h		 //  fixed in OS 5.2
#define TI_os_GetDrawFGColor 0x0021EE8
#define TI_os_FontGetID 0x0021EEC
//                           equ 0021EF0h
#define TI_os_RealToInt24 0x0021EF4
#define TI_os_Int24ToReal 0x0021EF8
#define TI_GetOpenLibPtr 0x0021EFC
#define TI_RestoreColCoordinates 0x0021F00
//                           equ 0021F04h
//                           equ 0021F08h
//                           equ 0021F0Ch
//                           equ 0021F10h
//                           equ 0021F14h
//                           equ 0021F18h
//                           equ 0021F1Ch
//                           equ 0021F20h
//                           equ 0021F24h
//                           equ 0021F28h
//                           equ 0021F2Ch
//                           equ 0021F30h
//                           equ 0021F34h
//                           equ 0021F38h
//                           equ 0021F3Ch
//                           equ 0021F40h
#define TI_VPutMapNoReset0IY23 0x0021F44
//                           equ 0021F48h
//                           equ 0021F4Ch
#define TI_BufCpy 0x0021F50
//                           equ 0021F54h
//                           equ 0021F58h
//                           equ 0021F5Ch
#define TI_DrawStandardEntrySepLine 0x0021F60
#define TI_DrawHomeNewSepLine 0x0021F64
#define TI_DrawStatusBarText 0x0021F68
//                           equ 0021F6Ch
//                           equ 0021F70h
//                           equ 0021F74h
//                           equ 0021F78h
//                           equ 0021F7Ch
#define TI_MovFrOP1OP2 0x0021F80
//                           equ 0021F84h
//                           equ 0021F88h
//                           equ 0021F8Ch
//                           equ 0021F90h
//                           equ 0021F94h
#define TI_ChkInRam 0x0021F98
//                           equ 0021F9Ch
//                           equ 0021FA0h
#define TI_FontGetWidth 0x0021FA4
#define TI_os_ForceCmdNoChar 0x0021FA8
#define TI_os_DelVarEntry 0x0021FAC
#define TI_os_GetSymTablePtr 0x0021FB0
#define TI_os_NextSymEntry 0x0021FB4
#define TI_os_ChkFindSym 0x0021FB8
#define TI_os_GetVarSize 0x0021FBC
#define TI_os_GetVarSizeBytes 0x0021FC0
//                           equ 0021FC4h
#define TI_os_GetRealListElement 0x0021FC8
#define TI_os_GetRealVar 0x0021FCC
#define TI_os_ResizeList 0x0021FD0
#define TI_os_ResizeMatrix 0x0021FD4
//                           equ 0021FD8h
#define TI_os_SetRealListElement 0x0021FDC
#define TI_os_SetRealVar 0x0021FE0
#define TI_os_GetAppVersionString 0x0021FE4
//                           equ 0021FE8h
//                           equ 0021FECh
#define TI_os_MemChk 0x0021FF0
//                           equ 0021FF4h
//                           equ 0021FF8h
//                           equ 0021FFCh
//                           equ 0022000h
//                           equ 0022004h
//                           equ 0022008h
//                           equ 002200Ch
//                           equ 0022010h
//                           equ 0022014h
//                           equ 0022018h
//                           equ 002201Ch
//                           equ 0022020h
//                           equ 0022024h
//                           equ 0022028h
//                           equ 002202Ch
//                           equ 0022030h
//                           equ 0022034h
//                           equ 0022038h
//                           equ 002203Ch
#define TI_ArcChk 0x0022040
#define TI_LoadDEIndFlash 0x0022044
#define TI_ChkInRamB 0x0022048
//                           equ 002204Ch
//                           equ 0022050h
//                           equ 0022054h
#define TI_os_InitUSBDeviceCallback 0x0022058
#define TI_os_KillUSBDevice 0x002205C
#define TI_os_SetUSBConfiguration 0x0022060
#define TI_os_RequestUSBData 0x0022064
#define TI_os_StopReceivingUSBData 0x0022068
//                           equ 002206Ch
//                           equ 0022070h
#define TI_Mov11ToOP1 0x0022074
#define TI_FindFreeArcSpot 0x0022078
//                           equ 002207Ch
#define TI_os_SetTimer2 0x0022080
#define TI_os_DisableTimer2 0x0022084
//                           equ 0022088h
// ;_ret                     equ 002208Ch
#define TI_os_GetYDrawLocation 0x0022090
#define TI_os_SetYDrawLocation 0x0022094
#define TI_RunLocalizeHook 0x0022098
#define TI_os_IntSize 0x002209C
#define TI_os_ClearStatusBarLow 0x00220A0
//                           equ 00220A4h
#define TI_NMIHandler 0x00220A8
//                           equ 00220ACh
//                           equ 00220B0h
//                           equ 00220B4h
//                           equ 00220B8h
//                           equ 00220BCh
//                           equ 00220C0h
//                           equ 00220C4h
//                           equ 00220C8h
//                           equ 00220CCh
//                           equ 00220D0h
//                           equ 00220D4h
//                           equ 00220D8h
//                           equ 00220DCh
//                           equ 00220E0h
//                           equ 00220E4h
//                           equ 00220E8h
//                           equ 00220ECh
//                           equ 00220F0h
//                           equ 00220F4h
//                           equ 00220F8h
//                           equ 00220FCh
//                           equ 0022100h
//                           equ 0022104h
//                           equ 0022108h
//                           equ 002210Ch
//                           equ 0022110h
//                           equ 0022114h
//                           equ 0022118h
//                           equ 002211Ch
//                           equ 0022120h
//                           equ 0022124h
//                           equ 0022128h
//                           equ 002212Ch
//                           equ 0022130h
//                           equ 0022134h
//                           equ 0022138h
//                           equ 002213Ch
//                           equ 0022140h
//                           equ 0022144h
//                           equ 0022148h
//                           equ 002214Ch
//                           equ 0022150h
//                           equ 0022154h
//                           equ 0022158h
//                           equ 002215Ch
//                           equ 0022160h
#define TI_os_RToP 0x0022164
#define TI_os_PToR 0x0022168
#define TI_os_ResetEditOpen 0x002216C
#define TI_os_FloatToReal 0x0022170
#define TI_os_RealToFloat 0x0022174
#define TI_os_FontDrawTransText 0x0022178
#define TI_os_DelAppVar 0x002217C
#define TI_os_GetAppVarData 0x0022180
#define TI_os_CreateAppVar 0x0022184
//                           equ 0022188h
//                           equ 002218Ch
//                           equ 0022190h
//                           equ 0022194h
#define TI_os_CreateString 0x0022198
#define TI_os_GetStringData 0x002219C
//                           equ 00221A0h
//                           equ 00221A4h
//                           equ 00221A8h
//                           equ 00221ACh
//                           equ 00221B0h
//                           equ 00221B4h
//                           equ 00221B8h
//                           equ 00221BCh
//                           equ 00221C0h
//                           equ 00221C4h
//                           equ 00221C8h
//                           equ 00221CCh
//                           equ 00221D0h
//                           equ 00221D4h
//                           equ 00221D8h
//                           equ 00221DCh
//                           equ 00221E0h
//                           equ 00221E4h
//                           equ 00221E8h
//                           equ 00221ECh
//                           equ 00221F0h
//                           equ 00221F4h
//                           equ 00221F8h
//                           equ 00221FCh
//                           equ 0022200h
//                           equ 0022204h
//                           equ 0022208h
//                           equ 002220Ch
//                           equ 0022210h
//                           equ 0022214h
//                           equ 0022218h
//                           equ 002221Ch
//                           equ 0022220h
//                           equ 0022224h
//                           equ 0022228h
//                           equ 002222Ch
//                           equ 0022230h
//                           equ 0022234h
//                           equ 0022238h
//                           equ 002223Ch
#define TI_os_CreateEquation 0x0022240
#define TI_os_GetEquationData 0x0022244
//  Boot Calls
// -----------------------------------
#define TI_boot_GetHardwareVers 0x0000084
#define TI_boot_GetKeyID 0x0000088
#define TI_boot_GetBootVerMinor 0x000008C
#define TI_boot_GetBootVerBuild 0x0000090
#define TI_dbgout 0x0000094
#define TI__longjmp 0x0000098
#define TI__memchr 0x000009C
#define TI__memcmp 0x00000A0
#define TI__memcpy 0x00000A4
#define TI__memmove 0x00000A8
#define TI__memset 0x00000AC
#define TI__memclear 0x00000B0
#define TI_printf 0x00000B4
#define TI__setjmp 0x00000B8
#define TI_sprintf 0x00000BC
#define TI__strcat 0x00000C0
#define TI__strchr 0x00000C4
#define TI__strcmp 0x00000C8
#define TI__strcpy 0x00000CC
#define TI__strcspn 0x00000D0
#define TI__strlen 0x00000D4
#define TI__strncat 0x00000D8
#define TI__strncmp 0x00000DC
#define TI__strncpy 0x00000E0
#define TI__strpbrk 0x00000E4
#define TI__strrchr 0x00000E8
#define TI__strspn 0x00000EC
#define TI__strstr 0x00000F0
#define TI_strtok 0x00000F4
#define TI_ret 0x00000F8
#define TI__bldiy 0x00000FC
#define TI__bshl 0x0000100
#define TI__bshru 0x0000104
#define TI__bstiy 0x0000108
#define TI__bstix 0x000010C
#define TI__case 0x0000110
#define TI__case16 0x0000114
#define TI__case16D 0x0000118
#define TI__case24 0x000011C
#define TI__case24D 0x0000120
#define TI__case8 0x0000124
#define TI__case8D 0x0000128
#define TI__frameset 0x000012C
#define TI__frameset0 0x0000130
#define TI__iand 0x0000134
#define TI__icmpzero 0x0000138
#define TI__idivs 0x000013C
#define TI__idivu 0x0000140
#define TI__idvrmu 0x0000144
#define TI__ildix 0x0000148
#define TI__ildiy 0x000014C
#define TI__imul_b 0x0000150
#define TI__imulu 0x0000154
#define TI__imuls 0x0000158
#define TI__indcall 0x000015C
#define TI__ineg 0x0000160
#define TI__inot 0x0000164
#define TI__ior 0x0000168
#define TI__irems 0x000016C
#define TI__iremu 0x0000170
#define TI__ishl 0x0000174
#define TI__ishl_b 0x0000178
#define TI__ishrs 0x000017C
#define TI__ishrs_b 0x0000180
#define TI__ishru 0x0000184
#define TI__ishru_b 0x0000188
#define TI__istix 0x000018C
#define TI__istiy 0x0000190
#define TI__itol 0x0000194
#define TI__ixor 0x0000198
#define TI__ladd 0x000019C
#define TI__ladd_b 0x00001A0
#define TI__land 0x00001A4
#define TI__lcmps 0x00001A8
#define TI__lcmpu 0x00001AC
#define TI__lcmpzero 0x00001B0
#define TI__ldivs 0x00001B4
#define TI__ldivu 0x00001B8
#define TI__ldvrmu 0x00001BC
#define TI__lldix 0x00001C0
#define TI__lldiy 0x00001C4
#define TI__lmuls 0x00001C8
#define TI__lmulu 0x00001CC
#define TI__lneg 0x00001D0
#define TI__lnot 0x00001D4
#define TI__lor 0x00001D8
#define TI__lrems 0x00001DC
#define TI__lremu 0x00001E0
#define TI__lshl 0x00001E4
#define TI__lshrs 0x00001E8
#define TI__lshru 0x00001EC
#define TI__lstix 0x00001F0
#define TI__lstiy 0x00001F4
#define TI__lsub 0x00001F8
#define TI__lxor 0x00001FC
#define TI__sand 0x0000200
#define TI__scmpzero 0x0000204
#define TI__sdivs 0x0000208
#define TI__sdivu 0x000020C
#define TI__seqcase 0x0000210
#define TI__seqcaseD 0x0000214
#define TI__setflag 0x0000218
#define TI__sldix 0x000021C
#define TI__sldiy 0x0000220
#define TI__smuls 0x0000224
#define TI__smulu 0x0000228
#define TI__sneg 0x000022C
#define TI__snot 0x0000230
#define TI__sor 0x0000234
#define TI__srems 0x0000238
#define TI__sremu 0x000023C
#define TI__sshl 0x0000240
#define TI__sshl_b 0x0000244
#define TI__sshrs 0x0000248
#define TI__sshrs_b 0x000024C
#define TI__sshru 0x0000250
#define TI__sshru_b 0x0000254
#define TI__sstix 0x0000258
#define TI__sstiy 0x000025C
#define TI__stoi 0x0000260
#define TI__stoiu 0x0000264
#define TI__sxor 0x0000268
#define TI__fppack 0x000026C
#define TI__fadd 0x0000270
#define TI__fcmp 0x0000274
#define TI__fdiv 0x0000278
#define TI__ftol 0x000027C
#define TI__ultof 0x0000280
#define TI__ltof 0x0000284
#define TI__fmul 0x0000288
#define TI__fneg 0x000028C
#define TI__fsub 0x0000290
#define TI_FLTMAX 0x0000294
#define TI_sqrtf 0x0000298
#define TI__frbtof 0x000029C
#define TI__frftob 0x00002A0
#define TI__frftoub 0x00002A4
#define TI__frftoi 0x00002A8
#define TI__frftoui 0x00002AC
#define TI__frftos 0x00002B0
#define TI__frftous 0x00002B4
#define TI__fritof 0x00002B8
#define TI__fruitof 0x00002BC
#define TI__frstof 0x00002C0
#define TI__frubtof 0x00002C4
#define TI__frustof 0x00002C8
#define TI_ResetPorts 0x00002CC
#define TI_ChkIfOSInterruptAvailable 0x00002D0
#define TI_WriteFlashByte 0x00002D4
#define TI_EraseFlash 0x00002D8
#define TI_EraseFlashSector 0x00002DC
#define TI_WriteFlash 0x00002E0
#define TI_WriteFlashByteDuplicate 0x00002E4
#define TI_WriteFlashA 0x00002E8
#define TI_CleanupCertificate 0x00002EC
#define TI_ClrHeap 0x00002F0
#define TI_CpyToHeap 0x00002F4
#define TI_ChkHeapTop 0x00002F8
#define TI_ExecuteInRAM 0x00002FC
#define TI_ExecuteInRAMDup 0x0000300
#define TI_ExecuteInRAMDup2 0x0000304
#define TI_ChkCertSpace 0x0000308
#define TI_GetFieldSizeFromType 0x000030C
#define TI_FindFirstCertField 0x0000310
#define TI_FindField 0x0000314
#define TI_FindNextField 0x0000318
#define TI_GetCertificateEnd 0x000031C
#define TI_GetFieldSizeFromType_ 0x0000320
#define TI_GetFieldFromSize 0x0000324
#define TI_NextFieldFromSize 0x0000328
#define TI_NextFieldFromType 0x000032C
#define TI_GetOffsetToNextField 0x0000330
#define TI_WriteFlashUnsafe 0x0000334
#define TI_boot_GetCertCalcString 0x0000338
#define TI_boot_GetCertCalcID 0x000033C
#define TI_GetSerial 0x0000340
//                           equ 0000344h
#define TI_Mult16By8 0x0000348
#define TI_Div16By8 0x000034C
#define TI_Div16By16 0x0000350
#define TI_Div32By16 0x0000354
#define TI_CmpStr 0x0000358
#define TI_boot_Sha256Init 0x000035C
#define TI_boot_Sha256Part 0x0000360
#define TI_boot_Sha256Hash 0x0000364
#define TI_FindAppHeaderSubField 0x0000368
//                           equ 000036Ch
#define TI_FindAppHeaderTimestamp 0x0000370
#define TI_boot_ClearVRAM 0x0000374
#define TI_boot_PutS 0x0000378
#define TI_PutSpinner 0x000037C
#define TI_boot_GetLFontPtr 0x0000380
#define TI_boot_InitializeHardware 0x0000384
#define TI_boot_TurnOffHardware 0x0000388
#define TI_MakeColCmd 0x000038C
#define TI_boot_NewLine 0x0000390
#define TI_PutBootVersion 0x0000394
#define TI_DrawSectorProtectionTable 0x0000398
#define TI_boot_Set6MHzMode 0x000039C
#define TI_boot_Set48MHzMode 0x00003A0
#define TI_boot_Set6MHzModeI 0x00003A4
#define TI_boot_Set48MHzModeI 0x00003A8
#define TI_CheckHardware 0x00003AC
#define TI_GetBatteryStatus 0x00003B0
#define TI_Delay10ms 0x00003B4
#define TI_DelayTenTimesAms 0x00003B8
//                           equ 00003BCh
//                           equ 00003C0h
//                           equ 00003C4h
//                           equ 00003C8h
#define TI_usb_IsBusPowered 0x00003CC
#define TI_KeypadScan 0x00003D0
#define TI_KeypadScanFull 0x00003D4
// _ret                      equ 00003D8h
// _ret                      equ 00003DCh
#define TI_MarkOSInvalid 0x00003E0
#define TI_usb_BusPowered 0x00003E4
#define TI_usb_SelfPowered 0x00003E8
//                           equ 00003ECh
//                           equ 00003F0h
//                           equ 00003F4h
//                           equ 00003F8h
#define TI_usb_SetDeviceB 0x00003FC
//                           equ 0000400h
#define TI_usb_DMACXReadNext 0x0000404
#define TI_usb_DMACXWrite 0x0000408
#define TI_usb_DMACXRead 0x000040C
#define TI_usb_DMACXWriteNext 0x0000410
#define TI_usb_DMACXWriteCheck 0x0000414
//                           equ 0000418h
//                           equ 000041Ch
//                           equ 0000420h
//                           equ 0000424h
//                           equ 0000428h
//                           equ 000042Ch
//                           equ 0000430h
//                           equ 0000434h
//                           equ 0000438h
//                           equ 000043Ch
//                           equ 0000440h
//                           equ 0000444h
//                           equ 0000448h
//                           equ 000044Ch
//                           equ 0000450h
//                           equ 0000454h
//                           equ 0000458h
//                           equ 000045Ch
#define TI_MarkOSValid 0x0000460
//                           equ 0000464h
//                           equ 0000468h
//                           equ 000046Ch
//                           equ 0000470h
//                           equ 0000474h
//                           equ 0000478h
//                           equ 000047Ch
//                           equ 0000480h
//                           equ 0000484h
//                           equ 0000488h
//                           equ 000048Ch
//                           equ 0000490h
//                           equ 0000494h
//                           equ 0000498h
//                           equ 000049Ch
//                           equ 00004A0h
//                           equ 00004A4h
#define TI_usb_SetDMAState 0x00004A8
#define TI_usb_DMATransfer 0x00004AC
#define TI_usb_DMACXTransferWait 0x00004B0
//                           equ 00004B4h
//                           equ 00004B8h
#define TI_usb_ResetFIFOS 0x00004BC
//                           equ 00004C0h
//                           equ 00004C4h
//                           equ 00004C8h
//                           equ 00004CCh
//                           equ 00004D0h
//                           equ 00004D4h
//                           equ 00004D8h
//                           equ 00004DCh
//                           equ 00004E0h
//                           equ 00004E4h
//                           equ 00004E8h
//                           equ 00004ECh
#define TI_usb_ResetTimer 0x00004F0
#define TI_usb_DisableTimer 0x00004F4
#define TI_usb_EnableTimer 0x00004F8
//                           equ 00004FCh
//                           equ 0000500h
//                           equ 0000504h
//                           equ 0000508h
//                           equ 000050Ch
//                           equ 0000510h
//                           equ 0000514h
//                           equ 0000518h
//                           equ 000051Ch
#define TI_boot_SetTimersControl 0x0000520
#define TI_boot_GetTimersControl 0x0000524
#define TI_boot_SetTimersInterrupt 0x0000528
#define TI_boot_GetTimersInterrupt 0x000052C
#define TI_boot_SetTimersInterruptM 0x0000530
#define TI_boot_GetTimersInterruptM 0x0000534
#define TI_boot_SetTimer1Counter 0x0000538
#define TI_boot_GetTimer1Counter 0x000053C
#define TI_boot_SetTimer1ReloadValue 0x0000540
#define TI_boot_GetTimer1ReloadValue 0x0000544
#define TI_boot_SetTimer1MatchValue1 0x0000548
#define TI_boot_GetTimer1MatchValue1 0x000054C
#define TI_boot_SetTimer1MatchValue2 0x0000550
#define TI_boot_GetTimer1MatchValue2 0x0000554
#define TI_boot_SetTimer2Counter 0x0000558
#define TI_boot_GetTimer2Counter 0x000055C
#define TI_boot_SetTimer2ReloadValue 0x0000560
#define TI_boot_GetTimer2ReloadValue 0x0000564
#define TI_boot_SetTimer2MatchValue1 0x0000568
#define TI_boot_GetTimer2MatchValue1 0x000056C
#define TI_boot_SetTimer2MatchValue2 0x0000570
#define TI_boot_GetTimer2MatchValue2 0x0000574
#define TI_CheckIfEmulated 0x0000578
#define TI_boot_GetOnInt 0x000057C
#define TI_boot_RTCIntHandler 0x0000580
#define TI_boot_RTCInitialize 0x0000584
#define TI_boot_RTCGetInitStatus 0x0000588
#define TI_boot_RTCEnable 0x000058C
#define TI_boot_RTCDisable 0x0000590
#define TI_boot_RTCSet24Hours 0x0000594
//                           equ 0000598h
//                           equ 000059Ch
#define TI_boot_RTCAckAlarmInt 0x00005A0
//                           equ 00005A4h
#define TI_boot_RTCWriteTime 0x00005A8
#define TI_boot_RTCGetTime12Hour 0x00005AC
#define TI_boot_RTCGetTime 0x00005B0
#define TI_boot_RTCSetTime 0x00005B4
#define TI_boot_RTCGetAlarm 0x00005B8
#define TI_boot_RTCSetAlarmSafe 0x00005BC
#define TI_boot_RTCCheckAlarmInt 0x00005C0
#define TI_boot_RTCSetAlarmInt 0x00005C4
#define TI_boot_RTCIsAfternoon 0x00005C8
#define TI_boot_RTCGetDay 0x00005CC
#define TI_boot_RTCSetAlarmIntSafe 0x00005D0
#define TI_boot_RTCSetAlarm 0x00005D4
#define TI_boot_RTCEnableInt 0x00005D8
#define TI_boot_RTCDisableInt 0x00005DC
#define TI_boot_RTCSetCallback 0x00005E0
#define TI_boot_RTCResetTimeStruct 0x00005E4
//                           equ 00005E8h
#define TI_boot_RTCSetFlags 0x00005EC
//                           equ 00005F0h
#define TI_CheckEmulationBit 0x00005F4
#define TI_usb_SetDMAAddress 0x00005F8
//                           equ 00005FCh
#define TI_boot_SectorsBegin 0x0000600
//                           equ 0000604h
#define TI_usb_InEndpointClrStall 0x0000608
#define TI_usb_InEndpointSetStall 0x000060C
#define TI_usb_InEndpointClrReset 0x0000610
#define TI_usb_InEndpointSetReset 0x0000614
#define TI_usb_InEndpointSendZlp 0x0000618
#define TI_usb_OutEndpointClrStall 0x000061C
#define TI_usb_OutEndpointSetStall 0x0000620
#define TI_usb_OutEndpointClrReset 0x0000624
#define TI_usb_OutEndpointSetReset 0x0000628
#define TI_usb_SetFifoMap 0x000062C
#define TI_usb_SetEndpointConfig 0x0000630
#define TI_usb_ClrEndpointConfig 0x0000634
#define TI_usb_SetFifoConfig 0x0000638
//                           equ 000063Ch
// RAM Equates
// --------------------------------
#define TI_ramStart 0x0D00000
#define TI_flags 0D00080h		 //  location of OS Flags (+-80h)
#define TI_textFlagsLoc 0D00085h             //  location of Text Flags
#define TI_apdFlagsLoc 0D00088h		 //  location of APD Flags
#define TI_appFlagsLoc 0D0008Dh		 //  location of App Flags
#define TI_rclFlagsLoc 0D0008Eh             //  location of RCLQueue Flags
#define TI_shiftFlagsLoc 0D00092h             //  location of Shifting Flags
#define TI_mathprintFlagsLoc 0D000C4h		 //  location of MathPrint Flags
#define TI_strtokPtr 0D000FFh             //  location of pointer used by C strtok
#define TI_printRoutine 0D00108h             //  stores pointer to printing routines (3 scrap)
#define TI_flashByte 0D00125h		 //  used for writing to flash
#define TI_cellOverrideAddr 0x0D00166
#define TI_curCell 0D0016Eh             //  selected list cell
#define TI_SmallEditCancelParse 0x0D001A4
#define TI_curRowBackup 0D0033Ch		 //  backup of curRow
#define TI_shiftFlagsLocBackup 0D00358h		 //  backup of shiftFlagsLoc
#define TI_appFlagsLocBackup 0D00366h		 //  backup of appFlagsLoc
#define TI_penRowBackup 0D003E3h		 //  backup of penRow
#define TI_mathprintBackup 0D003E6h		 //  backup of mathprint flags
#define TI_winLeftEdgeBackup 0D003D2h		 //  backup of winLeftEdge
#define TI_catalogCurrentBackup 0D003D3h		 //  backup of catalogCurrent
#define TI_menuCurrentSubBackup 0D003D6h		 //  backup of menuCurrentSub
#define TI_menuNumMenusBackup 0D003D8h		 //  backup of menuNumMenus
#define TI_menuCurrentBackup 0D003DAh		 //  backup of menuCurrent
#define TI_cxCurAppBackup 0D003DDh		 //  backup of cxCurApp
#define TI_curUnderBackup 0D003E8h		 //  backup of curUnder
#define TI_appData 0D00429h		 //  formerly used for OFFSCRPT and ONSCRPT
#define TI_arcPtrEnd 0x0D0052F
#define TI_tempSP 0D0053Fh		 //  3 byte scrap
#define TI_arcInfo 0x0D00543
#define TI_savedArcInfo 0x0D0055B
#define TI_appBank_jump 0x0D00584
#define TI_kbdScanCode 0D00587h		 //  scancode returned by GetCSC
#define TI_kbdLGSC 0x0D00588
#define TI_kbdPSC 0x0D00589
#define TI_kbdWUR 0x0D0058A
#define TI_kbdDebncCnt 0x0D0058B
#define TI_kbdKey 0x0D0058C
#define TI_kbdGetKy 0x0D0058D
#define TI_keyExtend 0x0D0058E
#define TI_brightness 0x0D0058F
#define TI_apdSubTimer 0x0D00590
#define TI_apdTimer 0x0D00591
#define TI_curTime 0x0D00594
#define TI_curRow 0x0D00595
#define TI_curCol 0x0D00596
#define TI_curOffset 0x0D00598
#define TI_curUnder 0x0D00599
#define TI_curYCol 0x0D0059C
#define TI_curType 0x0D0059F
#define TI_curXRow 0x0D005A0
#define TI_prevDData 0x0D005A1
#define TI_lFont_record 0x0D005A4
#define TI_sFont_record 0x0D005C5
#define TI_tokVarPtr 0x0D005E9
#define TI_tokLen 0x0D005EC
#define TI_indicCounter 0x0D005F6
#define TI_OP1 0x0D005F8
#define TI_OP1M 0x0D005FA
#define TI_OP2 0x0D00603
#define TI_OP2M 0x0D00605
#define TI_OP2EXT 0x0D0060C
#define TI_OP3 0x0D0060E
#define TI_OP3M 0x0D00610
#define TI_OP4 0x0D00619
#define TI_OP4M 0x0D0061B
#define TI_OP5 0x0D00624
#define TI_OP5M 0x0D00626
#define TI_OP6 0x0D0062F
#define TI_OP6M 0x0D00631
#define TI_OP6EXT 0x0D00638
#define TI_progToEdit 0x0D0065B
#define TI_nameBuff 0x0D00663
#define TI_equ_edit_save 0x0D0066E
#define TI_iMathPtr1 0x0D0066F
#define TI_iMathPtr2 0x0D00672
#define TI_iMathPtr3 0x0D00675
#define TI_iMathPtr4 0x0D00678
#define TI_iMathPtr5 0x0D0067B
#define TI_asm_data_ptr1 0x0D0067E
#define TI_asm_data_ptr2 0x0D00681
#define TI_asm_ram 0x0D00687
#define TI_textShadow 0x0D006C0
#define TI_textShadCur 0x0D007C4
#define TI_textShadTop 0x0D007C7
#define TI_textShadAlph 0x0D007C8
#define TI_textShadIns 0x0D007C9
#define TI_cxMain 0x0D007CA
#define TI_cxPPutAway 0x0D007CD
#define TI_cxPutAway 0x0D007D0
#define TI_cxReDisp 0x0D007D3
#define TI_cxErrorEP 0x0D007D6
#define TI_cxSizeWind 0x0D007D9
#define TI_cxPage 0x0D007DC
#define TI_cxCurApp 0x0D007E0
#define TI_cxPrev 0D007E2h  //  23 bytes are shadows of cxMain through cxCurApp and appFlags
#define TI_cxAppReturn 0x0D007EB
#define TI_onSP 0x0D007FA
#define TI_promptRow 0x0D00800
#define TI_promptCol 0x0D00801
#define TI_promptIns 0x0D00802
#define TI_promptShift 0x0D00803
#define TI_promptRet 0x0D00804
#define TI_promptValid 0x0D00807
#define TI_varType 0x0D00813
#define TI_varCurrent 0x0D00814
#define TI_varClass 0x0D0081C
#define TI_catalogCurrent 0D0081Dh  //  word at this location starting with 6007h corresponds to what is highlighted in catalog
#define TI_catalogCurrentBackupM 0D00820h  //  backup of catalogCurrent for menus
#define TI_menuAppDepth 0x0D00823
#define TI_menuCurrent 0x0D00824
#define TI_menuCurrentSub 0D00825h  //  holds current submenu index
#define TI_menuSelected 0D00826h  //  holds currently selected item in current submenu
#define TI_menuNumMenus 0D00827h  //  holds number of submenus for this menu
#define TI_menuNumItems 0D00828h  //  holds number of items in this submenu
#define TI_appFlagsBackup 0D00829h  //  iy+appFlags backup for menu stuff
#define TI_cursorFlagsBackup 0D0082Ah  //  iy+cursorFlags backup for menu stuff
#define TI_curGStyleBackup 0D0082Bh  //  curGStyle backup for menu stuff
#define TI_graphFlagsBackup 0D0082Ch  //  iy+graphFlags backup for menu stuff
#define TI_progCurrent 0x0D0082D
// D0082E	; something used to execute apps with _NewContext0
#define TI_userMenuSA 0x0D00838
#define TI_tempErrorMessage 0x0D00842
#define TI_ioPrompt 0x0D00879
#define TI_ioFlag 0x0D00894
#define TI_sndRecState 0x0D00896
#define TI_ioErrState 0x0D00897
#define TI_ioData 0x0D008A1
#define TI_penCol 0x0D008D2
#define TI_penRow 0x0D008D5
#define TI_rclQueue 0x0D008D6
#define TI_rclQueueEnd 0x0D008D9
#define TI_errNo 0x0D008DF
#define TI_errSP 0x0D008E0
#define TI_errOffset 0x0D008E3
#define TI_entryString 0x0D008E6
#define TI_entryResult 0x0D008EA
#define TI_statVarsOffset 0x0D0117F
#define TI_asm_prgm_size 0x0D0118C
#define TI_bstCounter 0x0D0118F
#define TI_statVars 0x0D01191
#define TI_infVars 0x0D013A4
#define TI_infVar1 0x0D013AD
#define TI_infVar2 0x0D013B6
#define TI_infVar3 0x0D013BF
#define TI_infVar4 0x0D013C8
#define TI_infVar5 0x0D013D1
#define TI_infVar6 0x0D013DA
#define TI_infVar7 0x0D013E3
#define TI_infVar8 0x0D013EC
#define TI_infVar9 0x0D013F5
#define TI_infVar10 0x0D013FE
#define TI_infVar11 0x0D01407
#define TI_infVar12 0x0D01410
#define TI_infVar13 0x0D01419
#define TI_infVar14 0x0D01422
#define TI_infVar15 0x0D0142B
#define TI_infVar16 0x0D01434
#define TI_infVar17 0x0D0143D
#define TI_infVar18 0x0D01446
#define TI_infVar19 0x0D0144F
#define TI_infVar20 0x0D01458
#define TI_curGStyle 0x0D0146D
#define TI_curGY 0x0D0146E
#define TI_curGY2 0x0D01470
#define TI_curGX2 0D01471h  //  currently selected equation while graphing
#define TI_freeSaveY 0x0D01472
#define TI_freeSaveX 0x0D01474
#define TI_XOffset 0x0D014FA
#define TI_YOffset 0x0D014FC
#define TI_lcdTallP 0x0D014FD
#define TI_pixWideP 0x0D014FE
#define TI_pixWide_m_1 0x0D014FF
#define TI_pixWide_m_2 0x0D01501
#define TI_lastEntryStkPtr 0x0D01508
#define TI_lastEntryStk 0x0D0150B
#define TI_numLastEntries 0x0D01D0B
#define TI_currLastEntry 0x0D01D0C
#define TI_curPlotNumber 0x0D01D45
#define TI_curInc 0x0D01D49
#define TI_uXmin 0x0D01D61
#define TI_uXmax 0x0D01D6A
#define TI_uXscl 0x0D01D73
#define TI_uYmin 0x0D01D7C
#define TI_uYmax 0x0D01D85
#define TI_uYscl 0x0D01D8E
#define TI_uThetMin 0x0D01D97
#define TI_uThetMax 0x0D01DA0
#define TI_uThetStep 0x0D01DA9
#define TI_uTmin 0x0D01DB2
#define TI_uTmax 0x0D01DBB
#define TI_uTStep 0x0D01DC4
#define TI_uPlotStart 0x0D01DCD
#define TI_unMax 0x0D01DD6
#define TI_uu0 0x0D01DDF
#define TI_uv0 0x0D01DE8
#define TI_unMin 0x0D01DF1
#define TI_uu02 0x0D01DFA
#define TI_uv02 0x0D01E03
#define TI_uw0 0x0D01E0C
#define TI_uPlotStep 0x0D01E15
#define TI_uXres 0x0D01E1E
#define TI_uw02 0x0D01E27
#define TI_Xmin 0x0D01E33
#define TI_Xmax 0x0D01E3C
#define TI_Xscl 0x0D01E45
#define TI_Ymin 0x0D01E4E
#define TI_Ymax 0x0D01E57
#define TI_Yscl 0x0D01E60
#define TI_ThetaMin 0x0D01E69
#define TI_ThetaMax 0x0D01E72
#define TI_ThetaStep 0x0D01E7B
#define TI_TminPar 0x0D01E84
#define TI_TmaxPar 0x0D01E8D
#define TI_Tstep 0x0D01E96
#define TI_PlotStart 0x0D01E9F
#define TI_nMax 0x0D01EA8
#define TI_u0 0x0D01EB1
#define TI_v0 0x0D01EBA
#define TI_nMin 0x0D01EC3
#define TI_u02 0x0D01ECC
#define TI_v02 0x0D01ED5
#define TI_w0 0x0D01EDE
#define TI_PlotStep 0x0D01EE7
#define TI_XresO 0x0D01EF0
#define TI_w02 0x0D01EF9
#define TI_un1 0x0D01F02
#define TI_un2 0x0D01F0B
#define TI_vn1 0x0D01F14
#define TI_vn2 0x0D01F1D
#define TI_wn1 0x0D01F26
#define TI_wn2 0x0D01F2F
#define TI_fin_N 0x0D01F38
#define TI_fin_I 0x0D01F41
#define TI_fin_PV 0x0D01F4A
#define TI_fin_PMT 0x0D01F53
#define TI_fin_FV 0x0D01F5C
#define TI_fin_PY 0x0D01F65
#define TI_fin_CY 0x0D01F6E
#define TI_cal_N 0x0D01F77
#define TI_cal_I 0x0D01F80
#define TI_cal_PV 0x0D01F89
#define TI_cal_PMT 0x0D01F92
#define TI_cal_FV 0x0D01F9B
#define TI_cal_PY 0x0D01FA4
#define TI_DeltaX 0x0D01FAE
#define TI_DeltaY 0x0D01FB7
#define TI_TraceStep 0x0D0203D
#define TI_TblStart 0x0D02267
#define TI_DeltaTbl 0x0D02270
#define TI_Plot1MarkType 0x0D0227E
#define TI_Plot1List1 0x0D0227F
#define TI_Plot1List2 0x0D02284
#define TI_Plot1FreqList 0x0D02289
#define TI_Plot1XYOnOff 0x0D0228E
#define TI_Plot1Color 0x0D0228F
#define TI_Plot2MarkType 0x0D02290
#define TI_Plot2List1 0x0D02291
#define TI_Plot2List2 0x0D02296
#define TI_Plot2FreqList 0x0D0229B
#define TI_Plot2XYOnOff 0x0D022A0
#define TI_Plot2Color 0x0D022A1
#define TI_Plot3MarkType 0x0D022A2
#define TI_Plot3List1 0x0D022A3
#define TI_Plot3List2 0x0D022A8
#define TI_Plot3FreqList 0x0D022AD
#define TI_Plot3XYOnOff 0x0D022B2
#define TI_Plot3Color 0x0D022B3
#define TI_ES 0x0D022BA
#define TI_seed1 0x0D022FC
#define TI_seed2 0x0D02305
#define TI_basic_prog 0x0D0230E
#define TI_begPC 0x0D02317
#define TI_curPC 0x0D0231A
#define TI_endPC 0x0D0231D
#define TI_numArguments 0x0D02320
#define TI_cmdShadow 0x0D0232D
#define TI_cmdShadCur 0x0D02431
#define TI_cmdShadAlph 0x0D02433
#define TI_cmdShadIns 0x0D02435
#define TI_cmdCursor 0x0D02434
#define TI_editTop 0x0D02437
#define TI_editCursor 0x0D0243A
#define TI_editTail 0x0D0243D
#define TI_editBtm 0x0D02440
#define TI_currListHighlight 0D0244Bh  //  word, this is offset into list for currently-highlighted element in list editor
#define TI_editSym 0D0244Eh  //  pointer to vat of variable being edited
#define TI_editDat 0D02451h  //  pointer to data of variable being edited
#define TI_currListPageOffset 0x0D02457
#define TI_currList 0x0D02458
#define TI_listName1 0x0D02459
#define TI_listName2 0x0D0245E
#define TI_listName3 0x0D02463
#define TI_listName4 0x0D02468
#define TI_listName5 0x0D0246D
#define TI_listName6 0x0D02472
#define TI_listName7 0x0D02477
#define TI_listName8 0x0D0247C
#define TI_listName9 0x0D02481
#define TI_listName10 0x0D02486
#define TI_listName11 0x0D0248B
#define TI_listName12 0x0D02490
#define TI_listName13 0x0D02495
#define TI_listName14 0x0D0249A
#define TI_listName15 0x0D0249F
#define TI_listName16 0x0D024A4
#define TI_listName17 0x0D024A9
#define TI_listName18 0x0D024AE
#define TI_listName19 0x0D024B3
#define TI_listName20 0x0D024B8
#define TI_currGrphStyle 0x0D024BE
#define TI_y1LineType 0x0D024BF
#define TI_y2LineType 0x0D024C0
#define TI_y3LineType 0x0D024C1
#define TI_y4LineType 0x0D024C2
#define TI_y5LineType 0x0D024C3
#define TI_y6LineType 0x0D024C4
#define TI_y7LineType 0x0D024C5
#define TI_y8LineType 0x0D024C6
#define TI_y9LineType 0x0D024C7
#define TI_y0LineType 0x0D024C8
#define TI_para1LineType 0x0D024C9
#define TI_para2LineType 0x0D024CA
#define TI_para3LineType 0x0D024CB
#define TI_para4LineType 0x0D024CC
#define TI_para5LineType 0x0D024CD
#define TI_para6LineType 0x0D024CE
#define TI_polar1LineType 0x0D024CF
#define TI_polar2LineType 0x0D024D0
#define TI_polar3LineType 0x0D024D1
#define TI_polar4LineType 0x0D024D2
#define TI_polar5LineType 0x0D024D3
#define TI_polar6LineType 0x0D024D4
#define TI_secULineType 0x0D024D5
#define TI_secVLineType 0x0D024D6
#define TI_secWLineType 0x0D024D7
#define TI_y1LineColor 0x0D024D8
#define TI_y2LineColor 0x0D024D9
#define TI_y3LineColor 0x0D024DA
#define TI_y4LineColor 0x0D024DB
#define TI_y5LineColor 0x0D024DC
#define TI_y6LineColor 0x0D024DD
#define TI_y7LineColor 0x0D024DE
#define TI_y8LineColor 0x0D024DF
#define TI_y9LineColor 0x0D024E0
#define TI_y0LineColor 0x0D024E1
#define TI_para1LineColor 0x0D024E2
#define TI_para2LineColor 0x0D024E3
#define TI_para3LineColor 0x0D024E4
#define TI_para4LineColor 0x0D024E5
#define TI_para5LineColor 0x0D024E6
#define TI_para6LineColor 0x0D024E7
#define TI_polar1LineColor 0x0D024E8
#define TI_polar2LineColor 0x0D024E9
#define TI_polar3LineColor 0x0D024EA
#define TI_polar4LineColor 0x0D024EB
#define TI_polar5LineColor 0x0D024EC
#define TI_polar6LineColor 0x0D024ED
#define TI_secULineColor 0x0D024EE
#define TI_secVLineColor 0x0D024EF
#define TI_secWLineColor 0x0D024F0
#define TI_winTop 0x0D02504
#define TI_winBtm 0x0D02505
#define TI_winLeftEdge 0x0D02506
#define TI_winLeft 0x0D02507
#define TI_winAbove 0x0D02509
#define TI_winRow 0x0D0250B
#define TI_winCol 0x0D0250D
#define TI_fmtDigits 0x0D0250F
#define TI_fmtString 0x0D02510
#define TI_fmtLeft 0x0D02561
#define TI_fmtIndex 0x0D02564
#define TI_fmtMatSym 0x0D02567
#define TI_fmtMatMem 0x0D0256A
#define TI_tSymPtr1 0x0D0257B
#define TI_tSymPtr2 0x0D0257E
#define TI_chkDelPtr3 0x0D02581
#define TI_chkDelPtr4 0x0D02584
#define TI_tempMem 0x0D02587
#define TI_FPSbase 0x0D0258A
#define TI_FPS 0x0D0258D
#define TI_OPBase 0x0D02590
#define TI_OPS 0x0D02593
#define TI_pTempCnt 0x0D02596
#define TI_cleanTmp 0x0D02598
#define TI_pTemp 0x0D0259A
#define TI_progPtr 0x0D0259D
#define TI_newDataPtr 0x0D025A0
#define TI_pagedGetPtr 0D025A3h  //  3 byte scrap (unstable)
#define TI_pagedPutPtr 0x0D025A6
#define TI_appErr1 0D025A9h  //  use with _ErrCustom1
#define TI_appErr2 0D025B6h  //  use with _ErrCustom2
#define TI_arcPtr 0x0D025C8
#define TI_appRawKeyHandle 0x0D025CB
#define TI_customHeight 0x0D025CE
#define TI_localLanguage 0x0D025CF
#define TI_hookExecTemp 0x0D025D2
#define TI_cursorHookPtr 0x0D025D5
#define TI_libraryHookPtr 0x0D025D8
#define TI_rawKeyHookPtr 0x0D025DB
#define TI_getKeyHookPtr 0x0D025DE
#define TI_homescreenHookPtr 0x0D025E1
#define TI_windowHookPtr 0x0D025E4
#define TI_graphHookPtr 0x0D025E7
#define TI_yEqualsHookPtr 0x0D025EA
#define TI_fontHookPtr 0x0D025ED
#define TI_regraphHookPtr 0x0D025F0
#define TI_graphicsHookPtr 0x0D025F3
#define TI_traceHookPtr 0x0D025F6
#define TI_parserHookPtr 0x0D025F9
#define TI_appChangeHookPtr 0x0D025FC
#define TI_catalog1HookPtr 0x0D025FF
#define TI_helpHookPtr 0x0D02602
#define TI_cxRedispHookPtr 0x0D02605
#define TI_menuHookPtr 0x0D02608
#define TI_catalog2HookPtr 0x0D0260B
#define TI_tokenHookPtr 0x0D0260E
#define TI_localizeHookPtr 0x0D02611
#define TI_silentLinkHookPtr 0x0D02614
#define TI_USBActivityHookPtr 0x0D0261A
#define TI_tempFreeArc 0D02655h  //  set after _ArcChk call
#define TI_textFGColor 0x0D02688
#define TI_textBGColor 0x0D0268A
#define TI_drawBGColor 0x0D026AA
#define TI_drawFGColor 0x0D026AC
#define TI_drawColorCode 0x0D026AE
#define TI_keyToStrRam 0x0D026EA
#define TI_sEditMonSp 0x0D02706
#define TI_bpSave 0x0D02709
#define TI_batteryStatus 0x0D02A86
#define TI_graphBGColor 0x0D02A98
#define TI_errorLineY 0x0D02A1B
#define TI_errorLineX 0x0D02A23
#define TI_fillRectColor 0x0D02AC0
#define TI_statusBarBGColor 0x0D02ACC
#define TI_scrapMem 0D02AD7h  //  3 byte scrap (unstable)
#define TI_TempOP2ToOP6 0D02B39h  //  55 bytes where OP2 to OP6 are temporary saved
#define TI_gCurYLoc 0D02FD6h  //  current y pixel location for C functions
// safeRAM Locations
// ---------------------------------------------
// appData		equ 0D00429h ; 256 bytes
// textShadow		equ 0D006C0h ; 260 bytes	; Call _ClrTxtShdw to put spaces in here
// cmdShadow		equ 0D0232Dh ; 260 bytes
#define TI_pixelShadow 0D031F6h  //  8400 bytes
#define TI_pixelShadow2 0D052C6h  //  8400 bytes
#define TI_cmdPixelShadow 0D07396h  //  8400 bytes
#define TI_plotSScreen 0D09466h  //  21945 bytes	; Set GraphDraw Flag to redraw graph if used
#define TI_saveSScreen 0D0EA1Fh  //  21945 bytes	; Set GraphDraw Flag to redraw graph if used
#define TI_cursorImage 0E30800h  //  1020 bytes
// semiSafeRAM Locations
// ---------------------------------------------
#define TI_usbArea 0D13FD8h  //  14306 bytes used for usb, probably need to disable timer3/usb interrupts to use
#define TI_usbHandleKeys 0D14091h  //  zero this byte while using usbArea to keep GetCSC from affecting other parts of usbArea
#define TI_usbInited 0D177B7h  //  zero this byte while using usbArea and to reset the usb stack when interrupts are re-enabled
#define TI_heapBot 0D1887Ch  //  1024 bytes used for flash ram routines, rest used rarely
#define TI_ramCodeTop 0x0D18C7C
#define TI_heapTop 0x0D1987C
#define TI_stackBot 0x0D1987E
#define TI_stackTop 0x0D1A87E
// RAM Equates Continued
// ---------------------------------------------
#define TI_userMem 0x0D1A881
#define TI_symTable 0x0D3FFFF
#define TI_vRam 0x0D40000
#define TI_vRamEnd 0x0D65800
// Ports
// --------------------------------
#define TI_pCpuSpeed 0x0001
#define TI_pHardwareId 0x0003
// SHA256 Ports
// --------------------------------
#define TI_pShaRange 0x02000
#define TI_mpShaRange 0x0E10000
#define TI_shaCtrl 00h  //  1 byte
#define TI_pShaCtrl (TI_pShaRange + TI_shaCtrl)
#define TI_mpShaCtrl (TI_mpShaRange + TI_shaCtrl)
#define TI_shaData 10h  //  40h bytes
#define TI_pShaData (TI_pShaRange + TI_shaData)
#define TI_mpShaData (TI_mpShaRange + TI_shaData)
#define TI_shaState 60h  //  20h bytes
#define TI_pShaState (TI_pShaRange + TI_shaState)
#define TI_mpShaState (TI_mpShaRange + TI_shaState)
// USB Ports
// --------------------------------
#define TI_pUsbRange 0x03000
#define TI_mpUsbRange 0x0E20000
#define TI_usbCapLen 0x0000
#define TI_pUsbCapLen (TI_pUsbRange + TI_usbCapLen)
#define TI_mpUsbCapLen (TI_mpUsbRange + TI_usbCapLen)
#define TI_usbHciVer 0x0002
#define TI_pUsbHciVer (TI_pUsbRange + TI_usbHciVer)
#define TI_mpUsbHciVer (TI_mpUsbRange + TI_usbHciVer)
#define TI_usbHcsParams 0x0004
#define TI_pUsbHcsParams (TI_pUsbRange + TI_usbHcsParams)
#define TI_mpUsbHcsParams (TI_mpUsbRange + TI_usbHcsParams)
#define TI_bUsbNumPorts 0
#define TI_bmUsbNumPorts (0x0F << TI_bUsbNumPorts)
#define TI_bUsbPortPwrCtrl 4
#define TI_bmUsbPortPwrCtrl (1 << TI_bUsbPortPwrCtrl)
#define TI_bUsbPortRoutRules 7
#define TI_bmUsbPortRoutRules (1 << TI_bUsbPortRoutRules)
#define TI_bUsbNumPortsPerCC 8
#define TI_bmUsbNumPortsPerCC (0x0F << TI_bUsbNumPortsPerCC)
#define TI_bUsbNumCC 12
#define TI_bmUsbNumCC (0x0F << TI_bUsbNumCC)
#define TI_bUsbPortIndics 16
#define TI_bmUsbPortIndics (1 << TI_bUsbPortIndics)
#define TI_bUsbDebugPortNum 20
#define TI_bmUsbDebugPortNum (0x0F << TI_bUsbDebugPortNum)
#define TI_usbHccParams 0x0008
#define TI_pUsbHccParams (TI_pUsbRange + TI_usbHccParams)
#define TI_mpUsbHccParams (TI_mpUsbRange + TI_usbHccParams)
#define TI_bUsb64Bit 0
#define TI_bmUsb64Bit (1 << TI_bUsb64Bit)
#define TI_bUsbProgFrameList 1
#define TI_bmUsbProgFrameList (1 << TI_bUsbProgFrameList)
#define TI_bUsbAsyncSchedParkCap 2
#define TI_bmUsbAsyncSchedParkCap (1 << TI_bUsbAsyncSchedParkCap)
#define TI_bUsbIsochSchedThresh 4
#define TI_bmUsbIsochSchedThresh (0x0F << TI_bUsbIsochSchedThresh)
#define TI_bUsbEhciExtendCap 8
#define TI_bmUsbEhciExtendCap (0x0FF << TI_bUsbEhciExtendCap)
#define TI_usbHcspPortRout 0x000C
#define TI_pUsbHcspPortRout (TI_pUsbRange + TI_usbHcspPortRout)
#define TI_mpUsbHcspPortRout (TI_mpUsbRange + TI_usbHcspPortRout)
#define TI_usbCmd 0x0010
#define TI_pUsbCmd (TI_pUsbRange + TI_usbCmd)
#define TI_mpUsbCmd (TI_mpUsbRange + TI_usbCmd)
#define TI_bUsbRunStop 0
#define TI_bmUsbRunStop (1 << TI_bUsbRunStop)
#define TI_bUsbHcReset 1
#define TI_bmUsbHcReset (1 << TI_bUsbHcReset)
#define TI_bUsbFrameListSize 2
#define TI_bmUsbFrameListSize (3 << TI_bUsbFrameListSize)
#define TI_bUsbPeriodicSchedEn 4
#define TI_bmUsbPeriodicSchedEn (1 << TI_bUsbPeriodicSchedEn)
#define TI_bUsbAsyncSchedEn 5
#define TI_bmUsbAsyncSchedEn (1 << TI_bUsbAsyncSchedEn)
#define TI_bUsbIntAsyncAdvDrbl 6
#define TI_bmUsbIntAsyncAdvDrbl (1 << TI_bUsbIntAsyncAdvDrbl)
#define TI_bUsbLightHcReset 7
#define TI_bmUsbLightHcReset (1 << TI_bUsbLightHcReset)
#define TI_bUsbAsyncSchedParkCnt 8
#define TI_bmUsbAsyncSchedParkCnt (3 << TI_bUsbAsyncSchedParkCnt)
#define TI_bUsbAsyncSchedParkEn 11
#define TI_bmUsbAsyncSchedParkEn (1 << TI_bUsbAsyncSchedParkEn)
#define TI_bUsbIntThreshCtrl 16
#define TI_bmUsbIntThreshCtrl (0x0FF << TI_bUsbIntThreshCtrl)
#define TI_usbSts 0x0014
#define TI_pUsbSts (TI_pUsbRange + TI_usbSts)
#define TI_mpUsbSts (TI_mpUsbRange + TI_usbSts)
#define TI_usbIntEn 0x0018
#define TI_pUsbIntEn (TI_pUsbRange + TI_usbIntEn)
#define TI_mpUsbIntEn (TI_mpUsbRange + TI_usbIntEn)
#define TI_bUsbInt 0
#define TI_bmUsbInt (1 << TI_bUsbInt)
#define TI_bUsbIntErr 1
#define TI_bmUsbIntErr (1 << TI_bUsbIntErr)
#define TI_bUsbIntPortChgDetect 2
#define TI_bmUsbIntPortChgDetect (1 << TI_bUsbIntPortChgDetect)
#define TI_bUsbIntFrameListOver 3
#define TI_bmUsbIntFrameListOver (1 << TI_bUsbIntFrameListOver)
#define TI_bUsbIntHostSysErr 4
#define TI_bmUsbIntHostSysErr (1 << TI_bUsbIntHostSysErr)
#define TI_bUsbIntAsyncAdv 5
#define TI_bmUsbIntAsyncAdv (1 << TI_bUsbIntAsyncAdv)
#define TI_bUsbHcHalted 12
#define TI_bmUsbHcHalted (1 << TI_bUsbHcHalted)
#define TI_bUsbReclamation 13
#define TI_bmUsbReclamation (1 << TI_bUsbReclamation)
#define TI_bUsbPeriodicSchedSts 14
#define TI_bmUsbPeriodicSchedSts (1 << TI_bUsbPeriodicSchedSts)
#define TI_bUsbAsyncSchedSts 15
#define TI_bmUsbAsyncSchedSts (1 << TI_bUsbAsyncSchedSts)
#define TI_usbFrameIdx 0x001C
#define TI_pUsbFrameIdx (TI_pUsbRange + TI_usbFrameIdx)
#define TI_mpUsbFrameIdx (TI_mpUsbRange + TI_usbFrameIdx)
#define TI_bUsbFrameIdx 0
#define TI_bmUsbFrameIdx (0x03FFF << TI_bUsbFrameIdx)
#define TI_usbCtrlDsSeg 0x0020
#define TI_pUsbCtrlDsSeg (TI_pUsbRange + TI_usbCtrlDsSeg)
#define TI_mpUsbCtrlDsSeg (TI_mpUsbRange + TI_usbCtrlDsSeg)
#define TI_usbPeriodicListBase 0x0024
#define TI_pUsbPeriodicListBase (TI_pUsbRange + TI_usbPeriodicListBase)
#define TI_mpUsbPeriodicListBase (TI_mpUsbRange + TI_usbPeriodicListBase)
#define TI_bUsbPeriodicListBase 12
#define TI_bmUsbPeriodicListBase (0x0FFFFF << TI_bUsbPeriodicListBase)
#define TI_usbAsyncListAddr 0x0028
#define TI_pUsbAsyncListAddr (TI_pUsbRange + TI_usbAsyncListAddr)
#define TI_mpUsbAsyncListAddr (TI_mpUsbRange + TI_usbAsyncListAddr)
#define TI_bUsbAsyncListAddr 5
#define TI_bmUsbAsyncListAddr (0x07FFFFFF << TI_bUsbAsyncListAddr)
#define TI_usbPortStsCtrl 0x0030
#define TI_pUsbPortStsCtrl (TI_pUsbRange + TI_usbPortStsCtrl)
#define TI_mpUsbPortStsCtrl (TI_mpUsbRange + TI_usbPortStsCtrl)
#define TI_bUsbCurConnSts 0
#define TI_bmUsbCurConnSts (1 << TI_bUsbCurConnSts)
#define TI_bUsbConnStsChg 1
#define TI_bmUsbConnStsChg (1 << TI_bUsbConnStsChg)
#define TI_bUsbPortEn 2
#define TI_bmUsbPortEn (1 << TI_bUsbPortEn)
#define TI_bUsbPortEnChg 3
#define TI_bmUsbPortEnChg (1 << TI_bUsbPortEnChg)
#define TI_bUsbOvercurrActive 4
#define TI_bmUsbOvercurrActive (1 << TI_bUsbOvercurrActive)
#define TI_bUsbOvercurrChg 5
#define TI_bmUsbOvercurrChg (1 << TI_bUsbOvercurrChg)
#define TI_bUsbForcePortResume 6
#define TI_bmUsbForcePortResume (1 << TI_bUsbForcePortResume)
#define TI_bUsbPortSuspended 7
#define TI_bmUsbPortSuspended (1 << TI_bUsbPortSuspended)
#define TI_bUsbPortReset 8
#define TI_bmUsbPortReset (1 << TI_bUsbPortReset)
#define TI_bUsbLineSts 10
#define TI_bmUsbLineSts (3 << TI_bUsbLineSts)
#define TI_bUsbPortPwr 12
#define TI_bmUsbPortPwr (1 << TI_bUsbPortPwr)
#define TI_bUsbPortOwner 13
#define TI_bmUsbPortOwner (1 << TI_bUsbPortOwner)
#define TI_bUsbPortIndicCtrl 14
#define TI_bmUsbPortIndicCtrl (3 << TI_bUsbPortIndicCtrl)
#define TI_bUsbPortTestCtrl 16
#define TI_bmUsbPortTestCtrl (0x0F << TI_bUsbPortTestCtrl)
#define TI_bUsbWakeConnEn 20
#define TI_bmUsbWakeConnEn (1 << TI_bUsbWakeConnEn)
#define TI_bUsbWakeDiscEn 21
#define TI_bmUsbWakeDiscEn (1 << TI_bUsbWakeDiscEn)
#define TI_bUsbWakeOvercurrEn 22
#define TI_bmUsbWakeOvercurrEn (1 << TI_bUsbWakeOvercurrEn)
#define TI_usbMisc 0x0040
#define TI_pUsbMisc (TI_pUsbRange + TI_usbMisc)
#define TI_mpUsbMisc (TI_mpUsbRange + TI_usbMisc)
#define TI_bUsbAsyncSchedSleepTmr 0
#define TI_bmUsbAsyncSchedSleepTmr (3 << TI_bUsbAsyncSchedSleepTmr)
#define TI_bUsbEof1Timing 2
#define TI_bmUsbEof1Timing (3 << TI_bUsbEof1Timing)
#define TI_bUsbEof2Timing 4
#define TI_bmUsbEof2Timing (3 << TI_bUsbEof2Timing)
#define TI_bUsbHostSuspend 6
#define TI_bmUsbHostSuspend (1 << TI_bUsbHostSuspend)
#define TI_usbOtgCsr 0x0080
#define TI_pUsbOtgCsr (TI_pUsbRange + TI_usbOtgCsr)
#define TI_mpUsbOtgCsr (TI_mpUsbRange + TI_usbOtgCsr)
#define TI_bUsbBBusReq 0
#define TI_bmUsbBBusReq (1 << TI_bUsbBBusReq)
#define TI_bUsbBHnp 1
#define TI_bmUsbBHnp (1 << TI_bUsbBHnp)
#define TI_bUsbBVbusDisc 2
#define TI_bmUsbBVbusDisc (1 << TI_bUsbBVbusDisc)
#define TI_bUsbABusReq 4
#define TI_bmUsbABusReq (1 << TI_bUsbABusReq)
#define TI_bUsbABusDrop 5
#define TI_bmUsbABusDrop (1 << TI_bUsbABusDrop)
#define TI_bUsbAHnp 6
#define TI_bmUsbAHnp (1 << TI_bUsbAHnp)
#define TI_bUsbASrpEn 7
#define TI_bmUsbASrpEn (1 << TI_bUsbASrpEn)
#define TI_bUsbASrpMode 8
#define TI_usbASrpModeVbus (0 << TI_bUsbASrpMode)
#define TI_usbASrpModeData (1 << TI_bUsbASrpMode)
#define TI_bmUsbASrpMode (1 << TI_bUsbASrpMode)
#define TI_bUsbIdFilt 9
#define TI_usbIdFiltShort (0 << TI_bUsbIdFilt)
#define TI_usbIdFiltLong (1 << TI_bUsbIdFilt)
#define TI_bmUsbIdFilt (1 << TI_bUsbIdFilt)
#define TI_bUsbVbusFilt 10
#define TI_usbVbusFiltShort (0 << TI_bUsbVbusFilt)
#define TI_usbVbusFiltLong (1 << TI_bUsbVbusFilt)
#define TI_bmUsbVbusFilt (1 << TI_bUsbVbusFilt)
#define TI_bUsbHdiscFilt 11
#define TI_usbHdiscFiltShort (0 << TI_bUsbHdiscFilt)
#define TI_usbHdiscFiltLong (1 << TI_bUsbHdiscFilt)
#define TI_bmUsbHdiscFilt (1 << TI_bUsbHdiscFilt)
#define TI_bUsbBSessEnd 16
#define TI_bmUsbBSessEnd (1 << TI_bUsbBSessEnd)
#define TI_bUsbBSessVld 17
#define TI_bmUsbBSessVld (1 << TI_bUsbBSessVld)
#define TI_bUsbASessVld 18
#define TI_bmUsbASessVld (1 << TI_bUsbASessVld)
#define TI_bUsbAVbusVld 19
#define TI_bmUsbAVbusVld (1 << TI_bUsbAVbusVld)
#define TI_bUsbRole 20
#define TI_usbRoleHost (0 << TI_bUsbRole)
#define TI_usbRoleDev (1 << TI_bUsbRole)
#define TI_bmUsbRole (1 << TI_bUsbRole)
#define TI_bUsbId 21
#define TI_usbIdA (0 << TI_bUsbId)
#define TI_usbIdB (1 << TI_bUsbId)
#define TI_bmUsbId (1 << TI_bUsbId)
#define TI_bUsbSpd 22
#define TI_usbSpdFull (0 << TI_bUsbSpd)
#define TI_usbSpdLow (1 << TI_bUsbSpd)
#define TI_usbSpdHigh (2 << TI_bUsbSpd)
#define TI_bmUsbSpd (3 << TI_bUsbSpd)
#define TI_usbOtgIsr 0x0084
#define TI_pUsbOtgIsr (TI_pUsbRange + TI_usbOtgIsr)
#define TI_mpUsbOtgIsr (TI_mpUsbRange + TI_usbOtgIsr)
#define TI_usbOtgIer 0x0088
#define TI_pUsbOtgIer (TI_pUsbRange + TI_usbOtgIer)
#define TI_mpUsbOtgIer (TI_mpUsbRange + TI_usbOtgIer)
#define TI_bUsbIntBSrpComplete 0
#define TI_bmUsbIntBSrpComplete (1 << TI_bUsbIntBSrpComplete)
#define TI_bUsbIntASrpDetect 4
#define TI_bmUsbIntASrpDetect (1 << TI_bUsbIntASrpDetect)
#define TI_bUsbIntAVbusErr 5
#define TI_bmUsbIntAVbusErr (1 << TI_bUsbIntAVbusErr)
#define TI_bUsbIntBSessEnd 6
#define TI_bmUsbIntBSessEnd (1 << TI_bUsbIntBSessEnd)
#define TI_bUsbIntRoleChg 8
#define TI_bmUsbIntRoleChg (1 << TI_bUsbIntRoleChg)
#define TI_bUsbIntIdChg 9
#define TI_bmUsbIntIdChg (1 << TI_bUsbIntIdChg)
#define TI_bUsbIntOvercurr 10
#define TI_bmUsbIntOvercurr (1 << TI_bUsbIntOvercurr)
#define TI_bUsbIntBPlugRemoved 11
#define TI_bmUsbIntBPlugRemoved (1 << TI_bUsbIntBPlugRemoved)
#define TI_bUsbIntAPlugRemoved 12
#define TI_bmUsbIntAPlugRemoved (1 << TI_bUsbIntAPlugRemoved)
#define TI_usbIsr 0x00C0
#define TI_pUsbIsr (TI_pUsbRange + TI_usbIsr)
#define TI_mpUsbIsr (TI_mpUsbRange + TI_usbIsr)
#define TI_usbImr 0x00C4
#define TI_pUsbImr (TI_pUsbRange + TI_usbImr)
#define TI_mpUsbImr (TI_mpUsbRange + TI_usbImr)
#define TI_bUsbIntDev 0
#define TI_bmUsbIntDev (1 << TI_bUsbIntDev)
#define TI_bUsbIntOtg 1
#define TI_bmUsbIntOtg (1 << TI_bUsbIntOtg)
#define TI_bUsbIntHost 2
#define TI_bmUsbIntHost (1 << TI_bUsbIntHost)
#define TI_bUsbIntLevel 3
#define TI_usbIntLevelLow (0 << TI_bUsbIntLevel)
#define TI_usbIntLevelHigh (1 << TI_bUsbIntLevel)
#define TI_bmUsbIntLevel (1 << TI_bUsbIntLevel)
#define TI_usbDevCtrl 0x0100
#define TI_pUsbDevCtrl (TI_pUsbRange + TI_usbDevCtrl)
#define TI_mpUsbDevCtrl (TI_mpUsbRange + TI_usbDevCtrl)
#define TI_bUsbRemoteWake 0
#define TI_bmUsbRemoteWake (1 << TI_bUsbRemoteWake)
#define TI_bUsbHalfSpd 1
#define TI_bmUsbHalfSpd (1 << TI_bUsbHalfSpd)
#define TI_bUsbGirqEn 2
#define TI_bmUsbGirqEn (1 << TI_bUsbGirqEn)
#define TI_bUsbDevSuspend 3
#define TI_bmUsbDevSuspend (1 << TI_bUsbDevSuspend)
#define TI_bUsbDevReset 4
#define TI_bmUsbDevReset (1 << TI_bUsbDevReset)
#define TI_bUsbDevEn 5
#define TI_bmUsbDevEn (1 << TI_bUsbDevEn)
#define TI_bUsbDevSpd 6
#define TI_bmUsbDevSpd (1 << TI_bUsbDevSpd)
#define TI_bUsbDevForceFullSpd 9
#define TI_bmUsbDevForceFullSpd (1 << TI_bUsbDevForceFullSpd)
#define TI_usbDevAddr 0x0104
#define TI_pUsbDevAddr (TI_pUsbRange + TI_usbDevAddr)
#define TI_mpUsbDevAddr (TI_mpUsbRange + TI_usbDevAddr)
#define TI_bUsbDevAddr 0
#define TI_bmUsbDevAddr (0x07F << TI_bUsbDevAddr)
#define TI_bUsbDevConf 7
#define TI_bmUsbDevConf (1 << TI_bUsbDevConf)
#define TI_usbDevTest 0x0108
#define TI_pUsbDevTest (TI_pUsbRange + TI_usbDevTest)
#define TI_mpUsbDevTest (TI_mpUsbRange + TI_usbDevTest)
#define TI_bUsbTstClrFifo 0
#define TI_bmUsbTstClrFifo (1 << TI_bUsbTstClrFifo)
#define TI_bUsbTstCxLp 1
#define TI_bmUsbTstCxLp (1 << TI_bUsbTstCxLp)
#define TI_bUsbTstClrEa 2
#define TI_bmUsbTstClrEa (1 << TI_bUsbTstClrEa)
#define TI_bUsbTstNoCrc 3
#define TI_bmUsbTstNoCrc (1 << TI_bUsbTstNoCrc)
#define TI_bUsbTstNoTs 4
#define TI_bmUsbTstNoTs (1 << TI_bUsbTstNoTs)
#define TI_bUsbTstMode 5
#define TI_bmUsbTstMode (1 << TI_bUsbTstMode)
#define TI_bUsbNoSof 6
#define TI_bmUsbNoSof (1 << TI_bUsbNoSof)
#define TI_usbSofFrNum 0x010C
#define TI_pUsbSofFrNum (TI_pUsbRange + TI_usbSofFrNum)
#define TI_mpUsbSofFrNum (TI_mpUsbRange + TI_usbSofFrNum)
#define TI_bUsbSofFrNum 0
#define TI_bmUsbSofFrNum (0x07FF << TI_bUsbSofFrNum)
#define TI_bUsbSofUFrNum 11
#define TI_bmUsbSofUFrNum (7 << TI_bUsbSofUFrNum)
#define TI_usbSofMtr 0x0110
#define TI_pUsbSofMtr (TI_pUsbRange + TI_usbSofMtr)
#define TI_mpUsbSofMtr (TI_mpUsbRange + TI_usbSofMtr)
#define TI_bUsbSofMtrTmr 0
#define TI_bmUsbSofMtrTmr (0x0FFFF << TI_bUsbSofMtrTmr)
#define TI_usbPhyTmsr 0x0114
#define TI_pUsbPhyTmsr (TI_pUsbRange + TI_usbPhyTmsr)
#define TI_mpUsbPhyTmsr (TI_mpUsbRange + TI_usbPhyTmsr)
#define TI_bUsbUnplug 0
#define TI_bmUsbUnplug (1 << TI_bUsbUnplug)
#define TI_bUsbTstJState 1
#define TI_bmUsbTstJState (1 << TI_bUsbTstJState)
#define TI_bUsbTstKState 2
#define TI_bmUsbTstKState (1 << TI_bUsbTstKState)
#define TI_bUsbTstSe0Nak 3
#define TI_bmUsbTstSe0Nak (1 << TI_bUsbTstSe0Nak)
#define TI_bUsbTstPkt 4
#define TI_bmUsbTstPkt (1 << TI_bUsbTstPkt)
#define TI_usbCxsr 0x011C
#define TI_pUsbCxsr (TI_pUsbRange + TI_usbCxsr)
#define TI_mpUsbCxsr (TI_mpUsbRange + TI_usbCxsr)
#define TI_usbCxFifo 0x0120
#define TI_pUsbCxFifo (TI_pUsbRange + TI_usbCxFifo)
#define TI_mpUsbCxFifo (TI_mpUsbRange + TI_usbCxFifo)
#define TI_bCxFifoFin 0
#define TI_bmCxFifoFin (1 << TI_bCxFifoFin)
#define TI_bTstPktFin 1
#define TI_bmTstPktFin (1 << TI_bTstPktFin)
#define TI_bCxFifoStall 2
#define TI_bmCxFifoStall (1 << TI_bCxFifoStall)
#define TI_bCxFifoClr 3
#define TI_bmCxFifoClr (1 << TI_bCxFifoClr)
#define TI_bCxFifoFull 4
#define TI_bmCxFifoFull (1 << TI_bCxFifoFull)
#define TI_bCxFifoEmpty 5
#define TI_bmCxFifoEmpty (1 << TI_bCxFifoEmpty)
#define TI_bFifo0Empty 8
#define TI_bmFifo0Empty (1 << TI_bFifo0Empty)
#define TI_bFifo1Empty 9
#define TI_bmFifo1Empty (1 << TI_bFifo1Empty)
#define TI_bFifo2Empty 10
#define TI_bmFifo2Empty (1 << TI_bFifo2Empty)
#define TI_bFifo3Empty 11
#define TI_bmFifo3Empty (1 << TI_bFifo3Empty)
#define TI_bFifoEmpty 8
#define TI_bmFifoEmpty (0x0F << TI_bFifoEmpty)
#define TI_usbCxFifoBytes 0x0123
#define TI_pUsbCxFifoBytes (TI_pUsbRange + TI_usbCxFifoBytes)
#define TI_mpUsbCxFifoBytes (TI_mpUsbRange + TI_usbCxFifoBytes)
#define TI_bUsbCxFifoBytes 0
#define TI_bmUsbCxFifoBytes 0x07F
#define TI_usbIdle 0x0124
#define TI_pUsbIdle (TI_pUsbRange + TI_usbIdle)
#define TI_mpUsbIdle (TI_mpUsbRange + TI_usbIdle)
#define TI_bUsbIdleMs 0
#define TI_bmUsbIdleMs (7 << TI_bUsbIdleMs)
#define TI_usbGimr 0x0130
#define TI_pUsbGimr (TI_pUsbRange + TI_usbGimr)
#define TI_mpUsbGimr (TI_mpUsbRange + TI_usbGimr)
#define TI_usbGisr 0x0140
#define TI_pUsbGisr (TI_pUsbRange + TI_usbGisr)
#define TI_mpUsbGisr (TI_mpUsbRange + TI_usbGisr)
#define TI_bUsbDevIntCx 0
#define TI_bmUsbDevIntCx (1 << TI_bUsbDevIntCx)
#define TI_bUsbDevIntFifo 1
#define TI_bmUsbDevIntFifo (1 << TI_bUsbDevIntFifo)
#define TI_bUsbDevIntDev 2
#define TI_bmUsbDevIntDev (1 << TI_bUsbDevIntDev)
#define TI_usbCxImr 0x0134
#define TI_pUsbCxImr (TI_pUsbRange + TI_usbCxImr)
#define TI_mpUsbCxImr (TI_mpUsbRange + TI_usbCxImr)
#define TI_usbCxIsr 0x0144
#define TI_pUsbCxIsr (TI_pUsbRange + TI_usbCxIsr)
#define TI_mpUsbCxIsr (TI_mpUsbRange + TI_usbCxIsr)
#define TI_bUsbIntCxSetup 0
#define TI_bmUsbIntCxSetup (1 << TI_bUsbIntCxSetup)
#define TI_bUsbIntCxIn 1
#define TI_bmUsbIntCxIn (1 << TI_bUsbIntCxIn)
#define TI_bUsbIntCxOut 2
#define TI_bmUsbIntCxOut (1 << TI_bUsbIntCxOut)
#define TI_bUsbIntCxEnd 3
#define TI_bmUsbIntCxEnd (1 << TI_bUsbIntCxEnd)
#define TI_bUsbIntCxErr 4
#define TI_bmUsbIntCxErr (1 << TI_bUsbIntCxErr)
#define TI_bUsbIntCxAbort 5
#define TI_bmUsbIntCxAbort (1 << TI_bUsbIntCxAbort)
#define TI_bUsbIntCx 0
#define TI_bmUsbIntCx (0x01F << TI_bUsbIntCx)
#define TI_usbFifoRxImr 0x0138
#define TI_pUsbFifoRxImr (TI_pUsbRange + TI_usbFifoRxImr)
#define TI_mpUsbFifoRxImr (TI_mpUsbRange + TI_usbFifoRxImr)
#define TI_usbFifoRxIsr 0x0148
#define TI_pUsbFifoRxIsr (TI_pUsbRange + TI_usbFifoRxIsr)
#define TI_mpUsbFifoRxIsr (TI_mpUsbRange + TI_usbFifoRxIsr)
#define TI_bUsbIntFifo0Out 0
#define TI_bmUsbIntFifo0Out (1 << TI_bUsbIntFifo0Out)
#define TI_bUsbIntFifo0Spk 1
#define TI_bmUsbIntFifo0Spk (1 << TI_bUsbIntFifo0Spk)
#define TI_bUsbIntFifo1Out 2
#define TI_bmUsbIntFifo1Out (1 << TI_bUsbIntFifo1Out)
#define TI_bUsbIntFifo1Spk 3
#define TI_bmUsbIntFifo1Spk (1 << TI_bUsbIntFifo1Spk)
#define TI_bUsbIntFifo2Out 4
#define TI_bmUsbIntFifo2Out (1 << TI_bUsbIntFifo2Out)
#define TI_bUsbIntFifo2Spk 5
#define TI_bmUsbIntFifo2Spk (1 << TI_bUsbIntFifo2Spk)
#define TI_bUsbIntFifo3Out 6
#define TI_bmUsbIntFifo3Out (1 << TI_bUsbIntFifo3Out)
#define TI_bUsbIntFifo3Spk 7
#define TI_bmUsbIntFifo3Spk (1 << TI_bUsbIntFifo3Spk)
#define TI_bUsbFifoRxInts 0
#define TI_bmUsbFifoRxInts (0x0FF << TI_bUsbFifoRxInts)
#define TI_usbFifoTxImr 0x013A
#define TI_pUsbFifoTxImr (TI_pUsbRange + TI_usbFifoTxImr)
#define TI_mpUsbFifoTxImr (TI_mpUsbRange + TI_usbFifoTxImr)
#define TI_usbFifoTxIsr 0x014A
#define TI_pUsbFifoTxIsr (TI_pUsbRange + TI_usbFifoTxIsr)
#define TI_mpUsbFifoTxIsr (TI_mpUsbRange + TI_usbFifoTxIsr)
#define TI_bUsbIntFifo0In 0
#define TI_bmUsbIntFifo0In (1 << TI_bUsbIntFifo0In)
#define TI_bUsbIntFifo1In 1
#define TI_bmUsbIntFifo1In (1 << TI_bUsbIntFifo1In)
#define TI_bUsbIntFifo2In 2
#define TI_bmUsbIntFifo2In (1 << TI_bUsbIntFifo2In)
#define TI_bUsbIntFifo3In 3
#define TI_bmUsbIntFifo3In (1 << TI_bUsbIntFifo3In)
#define TI_bUsbFifoTxInts 0
#define TI_bmUsbFifoTxInts (0x0F << TI_bUsbFifoTxInts)
#define TI_usbDevImr 0x013C
#define TI_pUsbDevImr (TI_pUsbRange + TI_usbDevImr)
#define TI_mpUsbDevImr (TI_mpUsbRange + TI_usbDevImr)
#define TI_usbDevIsr 0x014C
#define TI_pUsbDevIsr (TI_pUsbRange + TI_usbDevIsr)
#define TI_mpUsbDevIsr (TI_mpUsbRange + TI_usbDevIsr)
#define TI_bUsbIntDevReset 0
#define TI_bmUsbIntDevReset (1 << TI_bUsbIntDevReset)
#define TI_bUsbIntDevSuspend 1
#define TI_bmUsbIntDevSuspend (1 << TI_bUsbIntDevSuspend)
#define TI_bUsbIntDevResume 2
#define TI_bmUsbIntDevResume (1 << TI_bUsbIntDevResume)
#define TI_bUsbIntDevIsocErr 3
#define TI_bmUsbIntDevIsocErr (1 << TI_bUsbIntDevIsocErr)
#define TI_bUsbIntDevIsocAbt 4
#define TI_bmUsbIntDevIsocAbt (1 << TI_bUsbIntDevIsocAbt)
#define TI_bUsbIntDevZlpTx 5
#define TI_bmUsbIntDevZlpTx (1 << TI_bUsbIntDevZlpTx)
#define TI_bUsbIntDevZlpRx 6
#define TI_bmUsbIntDevZlpRx (1 << TI_bUsbIntDevZlpRx)
#define TI_bUsbIntDevDmaFin 7
#define TI_bmUsbIntDevDmaFin (1 << TI_bUsbIntDevDmaFin)
#define TI_bUsbIntDevDmaErr 8
#define TI_bmUsbIntDevDmaErr (1 << TI_bUsbIntDevDmaErr)
#define TI_bUsbIntDevIdle 9
#define TI_bmUsbIntDevIdle (1 << TI_bUsbIntDevIdle)
#define TI_bUsbIntDevWakeup 10
#define TI_bmUsbIntDevWakeup (1 << TI_bUsbIntDevWakeup)
#define TI_bUsbDevInts 0
#define TI_bmUsbDevInts (0x07FF << TI_bUsbDevInts)
#define TI_usbRxZlp 0x0150
#define TI_pUsbRxZlp (TI_pUsbRange + TI_usbRxZlp)
#define TI_mpUsbRxZlp (TI_mpUsbRange + TI_usbRxZlp)
#define TI_usbTxZlp 0x0154
#define TI_pUsbTxZlp (TI_pUsbRange + TI_usbTxZlp)
#define TI_mpUsbTxZlp (TI_mpUsbRange + TI_usbTxZlp)
#define TI_bUsbEp1Zlp 0
#define TI_bmUsbEp1Zlp (1 << TI_bUsbEp1Zlp)
#define TI_bUsbEp2Zlp 1
#define TI_bmUsbEp2Zlp (1 << TI_bUsbEp2Zlp)
#define TI_bUsbEp3Zlp 2
#define TI_bmUsbEp3Zlp (1 << TI_bUsbEp3Zlp)
#define TI_bUsbEp4Zlp 3
#define TI_bmUsbEp4Zlp (1 << TI_bUsbEp4Zlp)
#define TI_bUsbEp5Zlp 4
#define TI_bmUsbEp5Zlp (1 << TI_bUsbEp5Zlp)
#define TI_bUsbEp6Zlp 5
#define TI_bmUsbEp6Zlp (1 << TI_bUsbEp6Zlp)
#define TI_bUsbEp7Zlp 6
#define TI_bmUsbEp7Zlp (1 << TI_bUsbEp7Zlp)
#define TI_bUsbEp8Zlp 7
#define TI_bmUsbEp8Zlp (1 << TI_bUsbEp8Zlp)
#define TI_bUsbZlp 0
#define TI_bmUsbZlp (0x0FF << TI_bUsbZlp)
#define TI_usbIsoEasr 0x0158
#define TI_pUsbIsoEasr (TI_pUsbRange + TI_usbIsoEasr)
#define TI_mpUsbIsoEasr (TI_mpUsbRange + TI_usbIsoEasr)
#define TI_bUsbEp1IsocAbort 0
#define TI_bmUsbEp1IsocAbort (1 << TI_bUsbEp1IsocAbort)
#define TI_bUsbEp2IsocAbort 1
#define TI_bmUsbEp2IsocAbort (1 << TI_bUsbEp2IsocAbort)
#define TI_bUsbEp3IsocAbort 2
#define TI_bmUsbEp3IsocAbort (1 << TI_bUsbEp3IsocAbort)
#define TI_bUsbEp4IsocAbort 3
#define TI_bmUsbEp4IsocAbort (1 << TI_bUsbEp4IsocAbort)
#define TI_bUsbEp5IsocAbort 4
#define TI_bmUsbEp5IsocAbort (1 << TI_bUsbEp5IsocAbort)
#define TI_bUsbEp6IsocAbort 5
#define TI_bmUsbEp6IsocAbort (1 << TI_bUsbEp6IsocAbort)
#define TI_bUsbEp7IsocAbort 6
#define TI_bmUsbEp7IsocAbort (1 << TI_bUsbEp7IsocAbort)
#define TI_bUsbEp8IsocAbort 7
#define TI_bmUsbEp8IsocAbort (1 << TI_bUsbEp8IsocAbort)
#define TI_bUsbEp1IsocErr 16
#define TI_bmUsbEp1IsocErr (1 << TI_bUsbEp1IsocErr)
#define TI_bUsbEp2IsocErr 17
#define TI_bmUsbEp2IsocErr (1 << TI_bUsbEp2IsocErr)
#define TI_bUsbEp3IsocErr 18
#define TI_bmUsbEp3IsocErr (1 << TI_bUsbEp3IsocErr)
#define TI_bUsbEp4IsocErr 19
#define TI_bmUsbEp4IsocErr (1 << TI_bUsbEp4IsocErr)
#define TI_bUsbEp5IsocErr 20
#define TI_bmUsbEp5IsocErr (1 << TI_bUsbEp5IsocErr)
#define TI_bUsbEp6IsocErr 21
#define TI_bmUsbEp6IsocErr (1 << TI_bUsbEp6IsocErr)
#define TI_bUsbEp7IsocErr 22
#define TI_bmUsbEp7IsocErr (1 << TI_bUsbEp7IsocErr)
#define TI_bUsbEp8IsocErr 23
#define TI_bmUsbEp8IsocErr (1 << TI_bUsbEp8IsocErr)
#define TI_usbInEp1 0x0160
#define TI_pUsbInEp1 (TI_pUsbRange + TI_usbInEp1)
#define TI_mpUsbInEp1 (TI_mpUsbRange + TI_usbInEp1)
#define TI_usbInEp2 0x0164
#define TI_pUsbInEp2 (TI_pUsbRange + TI_usbInEp2)
#define TI_mpUsbInEp2 (TI_mpUsbRange + TI_usbInEp2)
#define TI_usbInEp3 0x0168
#define TI_pUsbInEp3 (TI_pUsbRange + TI_usbInEp3)
#define TI_mpUsbInEp3 (TI_mpUsbRange + TI_usbInEp3)
#define TI_usbInEp4 0x016C
#define TI_pUsbInEp4 (TI_pUsbRange + TI_usbInEp4)
#define TI_mpUsbInEp4 (TI_mpUsbRange + TI_usbInEp4)
#define TI_usbInEp5 0x0170
#define TI_pUsbInEp5 (TI_pUsbRange + TI_usbInEp5)
#define TI_mpUsbInEp5 (TI_mpUsbRange + TI_usbInEp5)
#define TI_usbInEp6 0x0174
#define TI_pUsbInEp6 (TI_pUsbRange + TI_usbInEp6)
#define TI_mpUsbInEp6 (TI_mpUsbRange + TI_usbInEp6)
#define TI_usbInEp7 0x0178
#define TI_pUsbInEp7 (TI_pUsbRange + TI_usbInEp7)
#define TI_mpUsbInEp7 (TI_mpUsbRange + TI_usbInEp7)
#define TI_usbInEp8 0x017C
#define TI_pUsbInEp8 (TI_pUsbRange + TI_usbInEp8)
#define TI_mpUsbInEp8 (TI_mpUsbRange + TI_usbInEp8)
#define TI_usbOutEp1 0x0180
#define TI_pUsbOutEp1 (TI_pUsbRange + TI_usbOutEp1)
#define TI_mpUsbOutEp1 (TI_mpUsbRange + TI_usbOutEp1)
#define TI_usbOutEp2 0x0184
#define TI_pUsbOutEp2 (TI_pUsbRange + TI_usbOutEp2)
#define TI_mpUsbOutEp2 (TI_mpUsbRange + TI_usbOutEp2)
#define TI_usbOutEp3 0x0188
#define TI_pUsbOutEp3 (TI_pUsbRange + TI_usbOutEp3)
#define TI_mpUsbOutEp3 (TI_mpUsbRange + TI_usbOutEp3)
#define TI_usbOutEp4 0x018C
#define TI_pUsbOutEp4 (TI_pUsbRange + TI_usbOutEp4)
#define TI_mpUsbOutEp4 (TI_mpUsbRange + TI_usbOutEp4)
#define TI_usbOutEp5 0x0190
#define TI_pUsbOutEp5 (TI_pUsbRange + TI_usbOutEp5)
#define TI_mpUsbOutEp5 (TI_mpUsbRange + TI_usbOutEp5)
#define TI_usbOutEp6 0x0194
#define TI_pUsbOutEp6 (TI_pUsbRange + TI_usbOutEp6)
#define TI_mpUsbOutEp6 (TI_mpUsbRange + TI_usbOutEp6)
#define TI_usbOutEp7 0x0198
#define TI_pUsbOutEp7 (TI_pUsbRange + TI_usbOutEp7)
#define TI_mpUsbOutEp7 (TI_mpUsbRange + TI_usbOutEp7)
#define TI_usbOutEp8 0x019C
#define TI_pUsbOutEp8 (TI_pUsbRange + TI_usbOutEp8)
#define TI_mpUsbOutEp8 (TI_mpUsbRange + TI_usbOutEp8)
#define TI_bUsbEpMaxPktSz 0
#define TI_bmUsbEpMaxPktSz (0x07FF << TI_bUsbEpMaxPktSz)
#define TI_bUsbEpStall 11
#define TI_bmUsbEpStall (1 << TI_bUsbEpStall)
#define TI_bUsbEpReset 12
#define TI_bmUsbEpReset (1 << TI_bUsbEpReset)
#define TI_bUsbInEpTxNum 13
#define TI_bmUsbInEpTxNum (3 << TI_bUsbInEpTxNum)
#define TI_bUsbInEpSendZlp 15
#define TI_bmUsbInEpSendZlp (1 << TI_bUsbInEpSendZlp)
#define TI_usbEp1Map 0x01A0
#define TI_pUsbEp1Map (TI_pUsbRange + TI_usbEp1Map)
#define TI_mpUsbEp1Map (TI_mpUsbRange + TI_usbEp1Map)
#define TI_usbEp2Map 0x01A1
#define TI_pUsbEp2Map (TI_pUsbRange + TI_usbEp2Map)
#define TI_mpUsbEp2Map (TI_mpUsbRange + TI_usbEp2Map)
#define TI_usbEp3Map 0x01A2
#define TI_pUsbEp3Map (TI_pUsbRange + TI_usbEp3Map)
#define TI_mpUsbEp3Map (TI_mpUsbRange + TI_usbEp3Map)
#define TI_usbEp4Map 0x01A3
#define TI_pUsbEp4Map (TI_pUsbRange + TI_usbEp4Map)
#define TI_mpUsbEp4Map (TI_mpUsbRange + TI_usbEp4Map)
#define TI_usbEp5Map 0x01A4
#define TI_pUsbEp5Map (TI_pUsbRange + TI_usbEp5Map)
#define TI_mpUsbEp5Map (TI_mpUsbRange + TI_usbEp5Map)
#define TI_usbEp6Map 0x01A5
#define TI_pUsbEp6Map (TI_pUsbRange + TI_usbEp6Map)
#define TI_mpUsbEp6Map (TI_mpUsbRange + TI_usbEp6Map)
#define TI_usbEp7Map 0x01A6
#define TI_pUsbEp7Map (TI_pUsbRange + TI_usbEp7Map)
#define TI_mpUsbEp7Map (TI_mpUsbRange + TI_usbEp7Map)
#define TI_usbEp8Map 0x01A7
#define TI_pUsbEp8Map (TI_pUsbRange + TI_usbEp8Map)
#define TI_mpUsbEp8Map (TI_mpUsbRange + TI_usbEp8Map)
#define TI_bUsbEpMapIn 0
#define TI_bmUsbEpMapIn (0x0F << TI_bUsbEpMapIn)
#define TI_bUsbEpMapOut 4
#define TI_bmUsbEpMapOut (0x0F << TI_bUsbEpMapOut)
#define TI_usbFifo0Map 0x01A8
#define TI_pUsbFifo0Map (TI_pUsbRange + TI_usbFifo0Map)
#define TI_mpUsbFifo0Map (TI_mpUsbRange + TI_usbFifo0Map)
#define TI_usbFifo1Map 0x01A9
#define TI_pUsbFifo1Map (TI_pUsbRange + TI_usbFifo1Map)
#define TI_mpUsbFifo1Map (TI_mpUsbRange + TI_usbFifo1Map)
#define TI_usbFifo2Map 0x01AA
#define TI_pUsbFifo2Map (TI_pUsbRange + TI_usbFifo2Map)
#define TI_mpUsbFifo2Map (TI_mpUsbRange + TI_usbFifo2Map)
#define TI_usbFifo3Map 0x01AB
#define TI_pUsbFifo3Map (TI_pUsbRange + TI_usbFifo3Map)
#define TI_mpUsbFifo3Map (TI_mpUsbRange + TI_usbFifo3Map)
#define TI_bUsbFifoEp 0
#define TI_bmUsbFifoEp (0x0F << TI_bUsbFifoEp)
#define TI_bUsbFifoDir 4
#define TI_usbFifoOut (0 << TI_bUsbFifoDir)
#define TI_usbFifoIn (1 << TI_bUsbFifoDir)
#define TI_usbFifoBi (2 << TI_bUsbFifoDir)
#define TI_bmUsbFifoDir (3 << TI_bUsbFifoDir)
#define TI_usbFifo0Cfg 0x01AC
#define TI_pUsbFifo0Cfg (TI_pUsbRange + TI_usbFifo0Cfg)
#define TI_mpUsbFifo0Cfg (TI_mpUsbRange + TI_usbFifo0Cfg)
#define TI_usbFifo1Cfg 0x01AD
#define TI_pUsbFifo1Cfg (TI_pUsbRange + TI_usbFifo1Cfg)
#define TI_mpUsbFifo1Cfg (TI_mpUsbRange + TI_usbFifo1Cfg)
#define TI_usbFifo2Cfg 0x01AE
#define TI_pUsbFifo2Cfg (TI_pUsbRange + TI_usbFifo2Cfg)
#define TI_mpUsbFifo2Cfg (TI_mpUsbRange + TI_usbFifo2Cfg)
#define TI_usbFifo3Cfg 0x01AF
#define TI_pUsbFifo3Cfg (TI_pUsbRange + TI_usbFifo3Cfg)
#define TI_mpUsbFifo3Cfg (TI_mpUsbRange + TI_usbFifo3Cfg)
#define TI_bUsbFifoType 0
#define TI_usbFifoIsoc (1 << TI_bUsbFifoType)
#define TI_usbFifoBulk (2 << TI_bUsbFifoType)
#define TI_usbFifoIntr (3 << TI_bUsbFifoType)
#define TI_bmUsbFifoType (3 << TI_bUsbFifoType)
#define TI_bUsbFifoNumBlks 2
#define TI_usbFifo1Blk (0 << TI_bUsbFifoNumBlks)
#define TI_usbFifo2Blks (1 << TI_bUsbFifoNumBlks)
#define TI_usbFifo3Blks (2 << TI_bUsbFifoNumBlks)
#define TI_bmUsbFifoNumBlks (3 << TI_bUsbFifoNumBlks)
#define TI_bUsbFifoBlkSz 4
#define TI_usbFifoBlkSz512 (0 << TI_bUsbFifoBlkSz)
#define TI_usbFifoBlkSz1024 (1 << TI_bUsbFifoBlkSz)
#define TI_bmUsbFifoBlkSz (1 << TI_bUsbFifoBlkSz)
#define TI_bUsbFifoEn 5
#define TI_bmUsbFifoEn (1 << TI_bUsbFifoEn)
#define TI_usbFifo0Csr 0x01B0
#define TI_pUsbFifo0Csr (TI_pUsbRange + TI_usbFifo0Csr)
#define TI_mpUsbFifo0Csr (TI_mpUsbRange + TI_usbFifo0Csr)
#define TI_usbFifo1Csr 0x01B4
#define TI_pUsbFifo1Csr (TI_pUsbRange + TI_usbFifo1Csr)
#define TI_mpUsbFifo1Csr (TI_mpUsbRange + TI_usbFifo1Csr)
#define TI_usbFifo2Csr 0x01B8
#define TI_pUsbFifo2Csr (TI_pUsbRange + TI_usbFifo2Csr)
#define TI_mpUsbFifo2Csr (TI_mpUsbRange + TI_usbFifo2Csr)
#define TI_usbFifo3Csr 0x01BC
#define TI_pUsbFifo3Csr (TI_pUsbRange + TI_usbFifo3Csr)
#define TI_mpUsbFifo3Csr (TI_mpUsbRange + TI_usbFifo3Csr)
#define TI_bUsbFifoLen 0
#define TI_bmUsbFifoLen (0x07FF << TI_bUsbFifoLen)
#define TI_bUsbFifoReset 12
#define TI_bmUsbFifoReset (1 << TI_bUsbFifoReset)
#define TI_usbDmaFifo 0x01C0
#define TI_pUsbDmaFifo (TI_pUsbRange + TI_usbDmaFifo)
#define TI_mpUsbDmaFifo (TI_mpUsbRange + TI_usbDmaFifo)
#define TI_bUsbDmaFifo0 0
#define TI_bmUsbDmaFifo0 (1 << TI_bUsbDmaFifo0)
#define TI_bUsbDmaFifo1 1
#define TI_bmUsbDmaFifo1 (1 << TI_bUsbDmaFifo1)
#define TI_bUsbDmaFifo2 2
#define TI_bmUsbDmaFifo2 (1 << TI_bUsbDmaFifo2)
#define TI_bUsbDmaFifo3 3
#define TI_bmUsbDmaFifo3 (1 << TI_bUsbDmaFifo3)
#define TI_bUsbDmaCxFifo 4
#define TI_bmUsbDmaCxFifo (1 << TI_bUsbDmaCxFifo)
#define TI_bUsbDmaFifo 0
#define TI_bmUsbDmaNoFifo (0 << TI_bUsbDmaFifo)
#define TI_bmUsbDmaFifo (0x01F << TI_bUsbDmaFifo)
#define TI_usbDmaCtrl 0x01C8
#define TI_pUsbDmaCtrl (TI_pUsbRange + TI_usbDmaCtrl)
#define TI_mpUsbDmaCtrl (TI_mpUsbRange + TI_usbDmaCtrl)
#define TI_bUsbDmaStart 0
#define TI_bmUsbDmaStart (1 << TI_bUsbDmaStart)
#define TI_bUsbDmaDir 1
#define TI_usbDmaFifo2Mem (0 << TI_bUsbDmaDir)
#define TI_usbDmaMem2Fifo (1 << TI_bUsbDmaDir)
#define TI_usbDmaFifo2Fifo (2 << TI_bUsbDmaDir)
#define TI_bmUsbDmaDir (3 << TI_bUsbDmaDir)
#define TI_bUsbDmaAbort 3
#define TI_bmUsbDmaAbort (1 << TI_bUsbDmaAbort)
#define TI_bUsbDmaClrFifo 4
#define TI_bmUsbDmaClrFifo (1 << TI_bUsbDmaClrFifo)
#define TI_usbDmaLen 0x01C9
#define TI_pUsbDmaLen (TI_pUsbRange + TI_usbDmaLen)
#define TI_mpUsbDmaLen (TI_mpUsbRange + TI_usbDmaLen)
#define TI_bUsbDmaLen 0
#define TI_bmUsbDmaLen (0x01FFFF << TI_bUsbDmaLen)
#define TI_usbDmaAddr 0x01CC
#define TI_pUsbDmaAddr (TI_pUsbRange + TI_usbDmaAddr)
#define TI_mpUsbDmaAddr (TI_mpUsbRange + TI_usbDmaAddr)
#define TI_bUsbDmaAddr 0
#define TI_bmUsbDmaAddr (0x07FFFF << TI_bUsbDmaAddr)
#define TI_usbEp0Data 0x01D0
#define TI_pUsbEp0Data (TI_pUsbRange + TI_usbEp0Data)
#define TI_mpUsbEp0Data (TI_mpUsbRange + TI_usbEp0Data)
#define TI_bUsbEp0Data 0
#define TI_bmUsbEp0Data (0x0FFFFFFFF << TI_bUsbEp0Data)
// LCD Ports
// --------------------------------
#define TI_pLcdRange 0x04000
#define TI_mpLcdRange 0x0E30000
#define TI_lcdTiming0 0x0000
#define TI_pLcdTiming0 (TI_pLcdRange + TI_lcdTiming0)
#define TI_mpLcdTiming0 (TI_mpLcdRange + TI_lcdTiming0)
#define TI_lcdTiming1 0x0004
#define TI_pLcdTiming1 (TI_pLcdRange + TI_lcdTiming1)
#define TI_mpLcdTiming1 (TI_mpLcdRange + TI_lcdTiming1)
#define TI_lcdTiming2 0x0008
#define TI_pLcdTiming2 (TI_pLcdRange + TI_lcdTiming2)
#define TI_mpLcdTiming2 (TI_mpLcdRange + TI_lcdTiming2)
#define TI_lcdTiming3 0x000C
#define TI_pLcdTiming3 (TI_pLcdRange + TI_lcdTiming3)
#define TI_mpLcdTiming3 (TI_mpLcdRange + TI_lcdTiming3)
#define TI_lcdBase 0x0010
#define TI_pLcdBase (TI_pLcdRange + TI_lcdBase)
#define TI_mpLcdBase (TI_mpLcdRange + TI_lcdBase)
#define TI_lcdUpbase 0x0010
#define TI_pLcdUpbase (TI_pLcdRange + TI_lcdUpbase)
#define TI_mpLcdUpbase (TI_mpLcdRange + TI_lcdUpbase)
#define TI_lcdLpbase 0x0014
#define TI_pLcdLpbase (TI_pLcdRange + TI_lcdLpbase)
#define TI_mpLcdLpbase (TI_mpLcdRange + TI_lcdLpbase)
#define TI_lcdCtrl 0x0018
#define TI_pLcdCtrl (TI_pLcdRange + TI_lcdCtrl)
#define TI_mpLcdCtrl (TI_mpLcdRange + TI_lcdCtrl)
#define TI_lcdEn 0x01
#define TI_lcdTft 0x20
#define TI_lcdBpp1 0000b or lcdTft or lcdEn
#define TI_lcdBpp2 0010b or lcdTft or lcdEn
#define TI_lcdBpp4 0100b or lcdTft or lcdEn
#define TI_lcdBpp8 0110b or lcdTft or lcdEn
#define TI_lcdBpp16Alt 1000b or lcdTft or lcdEn
#define TI_lcdBpp24 1010b or lcdTft or lcdEn
#define TI_lcdBpp16 1100b or lcdTft or lcdEn  //  Default LCD mode
#define TI_lcdBpp12 1110b or lcdTft or lcdEn
#define TI_lcdBgr 0x100
#define TI_lcdBigEndian 0x200
#define TI_lcdBigEndianPixels 0x400
#define TI_lcdPwr 0x800
#define TI_lcdIntVSync 0x0000
#define TI_lcdIntBack 0x1000
#define TI_lcdIntActiveVideo 0x2000
#define TI_lcdIntFront 0x3000
#define TI_lcdWatermark 0x10000
#define TI_lcdNormalMode lcdPwr or lcdBgr or lcdBpp16
#define TI_lcdImsc 0x001C
#define TI_pLcdImsc (TI_pLcdRange + TI_lcdImsc)
#define TI_mpLcdImsc (TI_mpLcdRange + TI_lcdImsc)
#define TI_lcdRis 0x0020
#define TI_pLcdRis (TI_pLcdRange + TI_lcdRis)
#define TI_mpLcdRis (TI_mpLcdRange + TI_lcdRis)
#define TI_lcdMis 0x0024
#define TI_pLcdMis (TI_pLcdRange + TI_lcdMis)
#define TI_mpLcdMis (TI_mpLcdRange + TI_lcdMis)
#define TI_lcdIcr 0x0028
#define TI_pLcdIcr (TI_pLcdRange + TI_lcdIcr)
#define TI_mpLcdIcr (TI_mpLcdRange + TI_lcdIcr)
#define TI_bLcdIntFuf 1
#define TI_lcdIntFuf (1 << TI_bLcdIntFuf)
#define TI_bLcdIntLNBU 2
#define TI_lcdIntLNBU (1 << TI_bLcdIntLNBU)
#define TI_bLcdIntVcomp 3
#define TI_lcdIntVcomp (1 << TI_bLcdIntVcomp)
#define TI_bLcdIntMbErr 4
#define TI_lcdIntMbErr (1 << TI_bLcdIntMbErr)
#define TI_lcdCurr 0x002C
#define TI_pLcdCurr (TI_pLcdRange + TI_lcdCurr)
#define TI_mpLcdCurr (TI_mpLcdRange + TI_lcdCurr)
#define TI_lcdUpcurr 0x002C
#define TI_pLcdUpcurr (TI_pLcdRange + TI_lcdUpcurr)
#define TI_mpLcdUpcurr (TI_mpLcdRange + TI_lcdUpcurr)
#define TI_lcdLpcurr 0x0030
#define TI_pLcdLpcurr (TI_pLcdRange + TI_lcdLpcurr)
#define TI_mpLcdLpcurr (TI_mpLcdRange + TI_lcdLpcurr)
#define TI_lcdPalette 0x0200
#define TI_pLcdPalette (TI_pLcdRange + TI_lcdPalette)
#define TI_mpLcdPalette (TI_mpLcdRange + TI_lcdPalette)
#define TI_lcdCrsrImage 0x0800
#define TI_pLcdCrsrImage (TI_pLcdRange + TI_lcdCrsrImage)
#define TI_mpLcdCrsrImage (TI_mpLcdRange + TI_lcdCrsrImage)
#define TI_lcdCrsrCtrl 0x0C00
#define TI_pLcdCrsrCtrl (TI_pLcdRange + TI_lcdCrsrCtrl)
#define TI_mpLcdCrsrCtrl (TI_mpLcdRange + TI_lcdCrsrCtrl)
#define TI_lcdCrsrConfig 0x0C04
#define TI_pLcdCrsrConfig (TI_pLcdRange + TI_lcdCrsrConfig)
#define TI_mpLcdCrsrConfig (TI_mpLcdRange + TI_lcdCrsrConfig)
#define TI_lcdCrsrPalette0 0x0C08
#define TI_pLcdCrsrPalette0 (TI_pLcdRange + TI_lcdCrsrPalette0)
#define TI_mpLcdCrsrPalette0 (TI_mpLcdRange + TI_lcdCrsrPalette0)
#define TI_lcdCrsrPalette1 0x0C0C
#define TI_pLcdCrsrPalette1 (TI_pLcdRange + TI_lcdCrsrPalette1)
#define TI_mpLcdCrsrPalette1 (TI_mpLcdRange + TI_lcdCrsrPalette1)
#define TI_lcdCrsrXY 0x0C10
#define TI_pLcdCrsrXY (TI_pLcdRange + TI_lcdCrsrXY)
#define TI_mpLcdCrsrXY (TI_mpLcdRange + TI_lcdCrsrXY)
#define TI_lcdCrsrClip 0x0C14
#define TI_pLcdCrsrClip (TI_pLcdRange + TI_lcdCrsrClip)
#define TI_mpLcdCrsrClip (TI_mpLcdRange + TI_lcdCrsrClip)
#define TI_lcdCrsrImsc 0x0C20
#define TI_pLcdCrsrImsc (TI_pLcdRange + TI_lcdCrsrImsc)
#define TI_mpLcdCrsrImsc (TI_mpLcdRange + TI_lcdCrsrImsc)
#define TI_lcdCrsrIcr 0x0C24
#define TI_pLcdCrsrIcr (TI_pLcdRange + TI_lcdCrsrIcr)
#define TI_mpLcdCrsrIcr (TI_mpLcdRange + TI_lcdCrsrIcr)
#define TI_lcdCrsrRis 0x0C28
#define TI_pLcdCrsrRis (TI_pLcdRange + TI_lcdCrsrRis)
#define TI_mpLcdCrsrRis (TI_mpLcdRange + TI_lcdCrsrRis)
#define TI_lcdCrsrMis 0x0C2C
#define TI_pLcdCrsrMis (TI_pLcdRange + TI_lcdCrsrMis)
#define TI_mpLcdCrsrMis (TI_mpLcdRange + TI_lcdCrsrMis)
// Interrupt Ports
// -----------------------------------
#define TI_pIntRange 0x05000
#define TI_mpIntRange 0x0F00000
#define TI_intStat 0
#define TI_pIntStat (TI_pIntRange + TI_intStat)
#define TI_mpIntStat (TI_mpIntRange + TI_intStat)
#define TI_intMask 4
#define TI_pIntMask (TI_pIntRange + TI_intMask)
#define TI_mpIntMask (TI_mpIntRange + TI_intMask)
#define TI_intAck 8
#define TI_pIntAck (TI_pIntRange + TI_intAck)
#define TI_mpIntAck (TI_mpIntRange + TI_intAck)
#define TI_intLatch 12
#define TI_pIntLatch (TI_pIntRange + 0xINTLATC)
#define TI_mpIntLatch (TI_mpIntRange + 0xINTLATC)
#define TI_intInvert 16
#define TI_pIntInvert (TI_pIntRange + TI_intInvert)
#define TI_mpIntInvert (TI_mpIntRange + TI_intInvert)
#define TI_intMasked 20
#define TI_pIntMasked (TI_pIntRange + TI_intMasked)
#define TI_mpIntMasked (TI_mpIntRange + TI_intMasked)
#define TI_bIntOn 0
#define TI_intOn (1 << TI_bIntOn)
#define TI_bIntTmr1 1
#define TI_intTmr1 (1 << TI_bIntTmr1)
#define TI_bIntTmr2 2
#define TI_intTmr2 (1 << TI_bIntTmr2)
#define TI_bIntTmr3 3
#define TI_intTmr3 (1 << TI_bIntTmr3)
#define TI_bIntOSTmr 4
#define TI_intOSTmr (1 << TI_bIntOSTmr)
#define TI_bIntKey 10
#define TI_intKey (1 << TI_bIntKey)
#define TI_bIntLcd 11
#define TI_intLcd (1 << TI_bIntLcd)
#define TI_bIntRtc 12
#define TI_intRtc (1 << TI_bIntRtc)
#define TI_bIntUsb 13
#define TI_intUsb (1 << TI_bIntUsb)
#define TI_intDefaultMask intOn or intTmr3 or intOSTmr or intRtc or intUsb
// Timer Ports
// -----------------------------------
#define TI_tmrRange 0x00
#define TI_pTmrRange 0x7000
#define TI_mpTmrRange 0x0F20000
#define TI_tmr1Counter 0x00
#define TI_pTmr1Counter 0x7000
#define TI_mpTmr1Counter 0x0F20000
#define TI_tmr1Load 0x04
#define TI_pTmr1Load 0x7004
#define TI_mpTmr1Load 0x0F20004
#define TI_tmr1Match1 0x08
#define TI_pTmr1Match1 0x7008
#define TI_mpTmr1Match1 0x0F20008
#define TI_tmr1Match2 0x0C
#define TI_pTmr1Match2 0x700C
#define TI_mpTmr1Match2 0x0F2000C
#define TI_tmr2Counter 0x10
#define TI_pTmr2Counter 0x7010
#define TI_mpTmr2Counter 0x0F20010
#define TI_tmr2Load 0x14
#define TI_pTmr2Load 0x7014
#define TI_mpTmr2Load 0x0F20014
#define TI_tmr2Match1 0x18
#define TI_pTmr2Match1 0x7018
#define TI_mpTmr2Match1 0x0F20018
#define TI_tmr2Match2 0x1C
#define TI_pTmr2Match2 0x701C
#define TI_mpTmr2Match2 0x0F2001C
#define TI_tmr3Counter 0x20
#define TI_pTmr3Counter 0x7020
#define TI_mpTmr3Counter 0x0F20020
#define TI_tmr3Load 0x24
#define TI_pTmr3Load 0x7024
#define TI_mpTmr3Load 0x0F20024
#define TI_tmr3Match1 0x28
#define TI_pTmr3Match1 0x7028
#define TI_mpTmr3Match1 0x0F20028
#define TI_tmr3Match2 0x2C
#define TI_pTmr3Match2 0x702C
#define TI_mpTmr3Match2 0x0F2002C
#define TI_tmrCtrl 0x30
#define TI_pTmrCtrl 0x7030
#define TI_mpTmrCtrl 0x0F20030
#define TI_bTmr1Enable 0
#define TI_tmr1Enable (1 << TI_bTmr1Enable)
#define TI_bTmr1Crystal 1
#define TI_tmr1Crystal (1 << TI_bTmr1Crystal)
#define TI_bTmr1Overflow 2
#define TI_tmr1Overflow (1 << TI_bTmr1Overflow)
#define TI_bTmr2Enable 3
#define TI_tmr2Enable (1 << TI_bTmr2Enable)
#define TI_bTmr2Crystal 4
#define TI_tmr2Crystal (1 << TI_bTmr2Crystal)
#define TI_bTmr2Overflow 5
#define TI_tmr2Overflow (1 << TI_bTmr2Overflow)
#define TI_bTmr3Enable 6
#define TI_tmr3Enable (1 << TI_bTmr3Enable)
#define TI_bTmr3Crystal 7
#define TI_tmr3Crystal (1 << TI_bTmr3Crystal)
#define TI_bTmr3Overflow 8
#define TI_tmr3Overflow (1 << TI_bTmr3Overflow)
#define TI_bTmr1CountUp 9
#define TI_tmr1CountUp (1 << TI_bTmr1CountUp)
#define TI_bTmr2CountUp 10
#define TI_tmr2CountUp (1 << TI_bTmr2CountUp)
#define TI_bTmr3CountUp 11
#define TI_tmr3CountUp (1 << TI_bTmr3CountUp)
#define TI_tmrIntStatus 0x34
#define TI_pTmrIntStatus 0x7034
#define TI_mpTmrIntStatus 0x0F20034
#define TI_bTmr1IntMatch1 0
#define TI_tmr1IntMatch1 (1 << TI_bTmr1IntMatch1)
#define TI_bTmr1IntMatch2 1
#define TI_tmr1IntMatch2 (1 << TI_bTmr1IntMatch2)
#define TI_bTmr1IntOverflow 2
#define TI_tmr1IntOverflow (1 << TI_bTmr1IntOverflow)
#define TI_bTmr2IntMatch1 3
#define TI_tmr2IntMatch1 (1 << TI_bTmr2IntMatch1)
#define TI_bTmr2IntMatch2 4
#define TI_tmr2IntMatch2 (1 << TI_bTmr2IntMatch2)
#define TI_bTmr2IntOverflow 5
#define TI_tmr2IntOverflow (1 << TI_bTmr2IntOverflow)
#define TI_bTmr3IntMatch1 6
#define TI_tmr3IntMatch1 (1 << TI_bTmr3IntMatch1)
#define TI_bTmr3IntMatch2 7
#define TI_tmr3IntMatch2 (1 << TI_bTmr3IntMatch2)
#define TI_bTmr3IntOverflow 8
#define TI_tmr3IntOverflow (1 << TI_bTmr3IntOverflow)
#define TI_tmrIntMask 0x38
#define TI_pTmrIntMask 0x7038
#define TI_mpTmrIntMask 0x0F20038
#define TI_tmrRevision 0x3C
#define TI_pTmrRevision 0x703C
#define TI_mpTmrRevision 0x0F2003C
// RTC Ports
// -----------------------------------
#define TI_pRtcRange 0x8000
#define TI_mpRtcRange 0x0F30000
// Keypad Ports
// -----------------------------------
#define TI_pKeyRange 0x0A000
#define TI_mpKeyRange 0x0F50000
#define TI_keyMode 0
#define TI_pKeyMode (TI_pKeyRange + TI_keyMode)
#define TI_mpKeyMode (TI_mpKeyRange + TI_keyMode)
#define TI_keyRows 4
#define TI_pKeyRows (TI_pKeyRange + TI_keyRows)
#define TI_mpKeyRows (TI_mpKeyRange + TI_keyRows)
#define TI_keyCols 5
#define TI_pKeyCols (TI_pKeyRange + TI_keyCols)
#define TI_mpKeyCols (TI_mpKeyRange + TI_keyCols)
#define TI_keyIntStat 8
#define TI_pKeyIntStat (TI_pKeyRange + TI_keyIntStat)
#define TI_mpKeyIntStat (TI_mpKeyRange + TI_keyIntStat)
#define TI_keyIntAck 8
#define TI_pKeyIntAck (TI_pKeyRange + TI_keyIntAck)
#define TI_mpKeyIntAck (TI_mpKeyRange + TI_keyIntAck)
#define TI_keyIntMask 12
#define TI_pKeyIntMask (TI_pKeyRange + TI_keyIntMask)
#define TI_mpKeyIntMask (TI_mpKeyRange + TI_keyIntMask)
#define TI_keyData 16
#define TI_pKeyData (TI_pKeyRange + TI_keyData)
#define TI_mpKeyData (TI_mpKeyRange + TI_keyData)
#define TI_keyGpio 48
#define TI_pKeyGpio (TI_pKeyRange + TI_keyGpio)
#define TI_mpKeyGpio (TI_mpKeyRange + TI_keyGpio)
#define TI_bKeyIntScanDone 0
#define TI_keyIntScanDone (1 << TI_bKeyIntScanDone)
#define TI_bKeyIntKeyChange 1
#define TI_keyIntKeyChange (1 << TI_bKeyIntKeyChange)
#define TI_bKeyIntKeyPress 2
#define TI_keyIntKeyPress (1 << TI_bKeyIntKeyPress)
#define TI_keyModeIdle 0
#define TI_keyModeAny 1
#define TI_keyModeScanOnce 2
#define TI_keyModeScan 3
// Backlight Ports
// -----------------------------------
#define TI_pBlLevel 0x0B024
#define TI_mpBlLevel 0x0F60024
// SPI Ports
// -----------------------------------
#define TI_pSpiRange 0x0D000
#define TI_mpSpiRange 0x0F80000
#define TI_spiCtrl0 0x000
#define TI_pSpiCtrl0 (TI_pSpiRange + TI_spiCtrl0)
#define TI_mpSpiCtrl0 (TI_mpSpiRange + TI_spiCtrl0)
#define TI_bSpiClkPolarity 0
#define TI_bmSpiClkPolarity (1 << TI_bSpiClkPolarity)
#define TI_bSpiClkPhase 1
#define TI_bmSpiClkPhase (1 << TI_bSpiClkPhase)
#define TI_bSpiOpMode 2
#define TI_bmSpiSlave (0 << TI_bSpiOpMode)
#define TI_bmSpiMaster (3 << TI_bSpiOpMode)
#define TI_bmSpiSlaveMono (0 << TI_bSpiOpMode)
#define TI_bmSpiSlaveStereo (1 << TI_bSpiOpMode)
#define TI_bmSpiMasterMono (2 << TI_bSpiOpMode)
#define TI_bmSpiMasterStereo (3 << TI_bSpiOpMode)
#define TI_bmSpiOpMode (3 << TI_bSpiOpMode)
#define TI_bSpiFsJustify 4
#define TI_bmSpiFsJustify (1 << TI_bSpiFsJustify)
#define TI_bSpiFsPolarity 5
#define TI_bmSpiFsPolarity (1 << TI_bSpiFsPolarity)
#define TI_bSpiLsb 6
#define TI_bmSpiLsb (1 << TI_bSpiLsb)
#define TI_bSpiLoopback 7
#define TI_bmSpiLoopback (1 << TI_bSpiLoopback)
#define TI_bSpiFsDist 8
#define TI_bmSpiFsDist (3 << TI_bSpiFsDist)
#define TI_bSpiFlash 11
#define TI_bmSpiFlash (1 << TI_bSpiFlash)
#define TI_bSpiFrFmt 12
#define TI_spiSspFrFmt (0 << TI_bSpiFrFmt)
#define TI_spiSpiFrFmt (1 << TI_bSpiFrFmt)
#define TI_spiMicrowaveFrFmt (2 << TI_bSpiFrFmt)
#define TI_spiI2sFrFmt (3 << TI_bSpiFrFmt)
#define TI_bmSpiFrFmt (3 << TI_bSpiFrFmt)
#define TI_spiCtrl1 0x004
#define TI_pSpiCtrl1 (TI_pSpiRange + TI_spiCtrl1)
#define TI_mpSpiCtrl1 (TI_mpSpiRange + TI_spiCtrl1)
#define TI_spiClkDiv (TI_spiCtrl1 + 0)
#define TI_pSpiClkDiv (TI_pSpiRange + TI_spiClkDiv)
#define TI_mpSpiClkDiv (TI_mpSpiRange + TI_spiClkDiv)
#define TI_bSpiClkDiv 0
#define TI_bmSpiClkDiv (0x0FFFF << TI_bSpiClkDiv)
#define TI_spiDataWidth (TI_spiCtrl1 + 2)
#define TI_pSpiDataWidth (TI_pSpiRange + 0xSPIDATAWIDT)
#define TI_mpSpiDataWidth (TI_mpSpiRange + 0xSPIDATAWIDT)
#define TI_bSpiDataWidth 0
#define TI_bmSpiDataWidth (0x01F << TI_bSpiDataWidth)
#define TI_spiPadWidth (TI_spiCtrl1 + 3)
#define TI_pSpiPadWidth (TI_pSpiRange + 0xSPIPADWIDT)
#define TI_mpSpiPadWidth (TI_mpSpiRange + 0xSPIPADWIDT)
#define TI_bSpiPadWidth 0
#define TI_bmSpiPadWidth (0x0FF << TI_bSpiPadWidth)
#define TI_spiCtrl2 0x008
#define TI_pSpiCtrl2 (TI_pSpiRange + TI_spiCtrl2)
#define TI_mpSpiCtrl2 (TI_mpSpiRange + TI_spiCtrl2)
#define TI_bSpiChipEn 0
#define TI_bmSpiChipEn (1 << TI_bSpiChipEn)
#define TI_bSpiTxDataOutEn 1
#define TI_bmSpiTxDataOutEn (1 << TI_bSpiTxDataOutEn)
#define TI_bSpiRxClr 2
#define TI_bmSpiRxClr (1 << TI_bSpiRxClr)
#define TI_bSpiTxClr 3
#define TI_bmSpiTxClr (1 << TI_bSpiTxClr)
#define TI_bSpiChipReset 6
#define TI_bmSpiChipReset (1 << TI_bSpiChipReset)
#define TI_bSpiRxEn 7
#define TI_bmSpiRxEn (1 << TI_bSpiRxEn)
#define TI_bSpiTxEn 8
#define TI_bmSpiTxEn (1 << TI_bSpiTxEn)
#define TI_bSpiFs 9
#define TI_bmSpiFs (1 << TI_bSpiFs)
#define TI_bSpiCs 10
#define TI_bmSpiCs (3 << TI_bSpiCs)
#define TI_spiStatus 0x00C
#define TI_pSpiStatus (TI_pSpiRange + TI_spiStatus)
#define TI_mpSpiStatus (TI_mpSpiRange + TI_spiStatus)
#define TI_bSpiRxFifoFull 0
#define TI_bmSpiRxFifoFull (1 << TI_bSpiRxFifoFull)
#define TI_bSpiTxFifoNotFull 1
#define TI_bmSpiTxFifoNotFull (1 << TI_bSpiTxFifoNotFull)
#define TI_bSpiChipBusy 2
#define TI_bmSpiChipBusy (1 << TI_bSpiChipBusy)
#define TI_bSpiRxFifoBytes 4
#define TI_bmSpiRxFifoBytes (0x01F << TI_bSpiRxFifoBytes)
#define TI_bSpiTxFifoBytes 12
#define TI_bmSpiTxFifoBytes (0x01F << TI_bSpiTxFifoBytes)
#define TI_spiIntCtrl 0x010
#define TI_pSpiIntCtrl (TI_pSpiRange + TI_spiIntCtrl)
#define TI_mpSpiIntCtrl (TI_mpSpiRange + TI_spiIntCtrl)
#define TI_spiIntStatus 0x014
#define TI_pSpiIntStatus (TI_pSpiRange + TI_spiIntStatus)
#define TI_mpSpiIntStatus (TI_mpSpiRange + TI_spiIntStatus)
#define TI_spiData 0x018
#define TI_pSpiData (TI_pSpiRange + TI_spiData)
#define TI_mpSpiData (TI_mpSpiRange + TI_spiData)
#define TI_bSpiData 0
#define TI_bmSpiData 0x0FFFFFFFF
// Character Font Equates
// -------------------------------------
#define TI_LrecurN 0x001
#define TI_LrecurU 0x002
#define TI_LrecurV 0x003
#define TI_LrecurW 0x004
#define TI_Lconvert 0x005
#define TI_LsqUp 0x006
#define TI_LsqDown 0x007
#define TI_Lintegral 0x008
#define TI_Lcross 0x009
#define TI_LboxIcon 0x00A
#define TI_LcrossIcon 0x00B
#define TI_LdotIcon 0x00C
#define TI_LsubT 00Dh  // small capital T for parametric mode.
#define TI_LcubeR 00Eh  // slightly different 3 for cubed root.
#define TI_LhexF 0x00F
#define TI_Lroot 0x010
#define TI_Linverse 0x011
#define TI_Lsquare 0x012
#define TI_Langle 0x013
#define TI_Ldegree 0x014
#define TI_Lradian 0x015
#define TI_Ltranspose 0x016
#define TI_LLE 0x017
#define TI_LNE 0x018
#define TI_LGE 0x019
#define TI_Lneg 0x01A
#define TI_Lexponent 0x01B
#define TI_Lstore 0x01C
#define TI_Lten 0x01D
#define TI_LupArrow 0x01E
#define TI_LdownArrow 0x01F
#define TI_Lspace 0x020
#define TI_Lexclam 0x021
#define TI_Lquote 0x022
#define TI_Lpound 0x023
#define TI_Lfourth 0x024
#define TI_Lpercent 0x025
#define TI_Lampersand 0x026
#define TI_Lapostrophe 0x027
#define TI_LlParen 0x028
#define TI_LrParen 0x029
#define TI_Lasterisk 0x02A
#define TI_LplusSign 0x02B
#define TI_Lcomma 0x02C
#define TI_Ldash 0x02D
#define TI_Lperiod 0x02E
#define TI_Lslash 0x02F
#define TI_L0 0x030
#define TI_L1 0x031
#define TI_L2 0x032
#define TI_L3 0x033
#define TI_L4 0x034
#define TI_L5 0x035
#define TI_L6 0x036
#define TI_L7 0x037
#define TI_L8 0x038
#define TI_L9 0x039
#define TI_Lcolon 0x03A
#define TI_Lsemicolon 0x03B
#define TI_LLT 0x03C
#define TI_LEQ 0x03D
#define TI_LGT 0x03E
#define TI_Lquestion 0x03F
#define TI_LatSign 0x040
#define TI_LcapA 0x041
#define TI_LcapB 0x042
#define TI_LcapC 0x043
#define TI_LcapD 0x044
#define TI_LcapE 0x045
#define TI_LcapF 0x046
#define TI_LcapG 0x047
#define TI_LcapH 0x048
#define TI_LcapI 0x049
#define TI_LcapJ 0x04A
#define TI_LcapK 0x04B
#define TI_LcapL 0x04C
#define TI_LcapM 0x04D
#define TI_LcapN 0x04E
#define TI_LcapO 0x04F
#define TI_LcapP 0x050
#define TI_LcapQ 0x051
#define TI_LcapR 0x052
#define TI_LcapS 0x053
#define TI_LcapT 0x054
#define TI_LcapU 0x055
#define TI_LcapV 0x056
#define TI_LcapW 0x057
#define TI_LcapX 0x058
#define TI_LcapY 0x059
#define TI_LcapZ 0x05A
#define TI_Ltheta 0x05B
#define TI_Lbackslash 0x05C
#define TI_LrBrack 0x05D
#define TI_Lcaret 0x05E
#define TI_Lunderscore 0x05F
#define TI_Lbackquote 0x060
#define TI_La 0x061
#define TI_Lb 0x062
#define TI_Lc 0x063
#define TI_Ld 0x064
#define TI_Le 0x065
#define TI_Lf 0x066
#define TI_Lg 0x067
#define TI_Lh 0x068
#define TI_Li 0x069
#define TI_Lj 0x06A
#define TI_Lk 0x06B
#define TI_Ll 0x06C
#define TI_Lm 0x06D
#define TI_Ln 0x06E
#define TI_Lo 0x06F
#define TI_Lp 0x070
#define TI_Lq 0x071
#define TI_Lr 0x072
#define TI_Ls 0x073
#define TI_Lt 0x074
#define TI_Lu 0x075
#define TI_Lv 0x076
#define TI_Lw 0x077
#define TI_Lx 0x078
#define TI_Ly 0x079
#define TI_Lz 0x07A
#define TI_LlBrace 0x07B
#define TI_Lbar 0x07C
#define TI_LrBrace 0x07D
#define TI_Ltilde 0x07E
#define TI_LinvEQ 0x07F
#define TI_Lsub0 0x080
#define TI_Lsub1 0x081
#define TI_Lsub2 0x082
#define TI_Lsub3 0x083
#define TI_Lsub4 0x084
#define TI_Lsub5 0x085
#define TI_Lsub6 0x086
#define TI_Lsub7 0x087
#define TI_Lsub8 0x088
#define TI_Lsub9 0x089
#define TI_LcapAAcute 0x08A
#define TI_LcapAGrave 0x08B
#define TI_LcapACaret 0x08C
#define TI_LcapADier 0x08D
#define TI_LaAcute 0x08E
#define TI_LaGrave 0x08F
#define TI_LaCaret 0x090
#define TI_LaDier 0x091
#define TI_LcapEAcute 0x092
#define TI_LcapEGrave 0x093
#define TI_LcapECaret 0x094
#define TI_LcapEDier 0x095
#define TI_LeAcute 0x096
#define TI_LeGrave 0x097
#define TI_LeCaret 0x098
#define TI_LeDier 0x099
#define TI_LcapIAcute 0x09A
#define TI_LcapIGrave 0x09B
#define TI_LcapICaret 0x09C
#define TI_LcapIDier 0x09D
#define TI_LiAcute 0x09E
#define TI_LiGrave 0x09F
#define TI_LiCaret 0x0A0
#define TI_LiDier 0x0A1
#define TI_LcapOAcute 0x0A2
#define TI_LcapOGrave 0x0A3
#define TI_LcapOCaret 0x0A4
#define TI_LcapODier 0x0A5
#define TI_LoAcute 0x0A6
#define TI_LoGrave 0x0A7
#define TI_LoCaret 0x0A8
#define TI_LoDier 0x0A9
#define TI_LcapUAcute 0x0AA
#define TI_LcapUGrave 0x0AB
#define TI_LcapUCaret 0x0AC
#define TI_LcapUDier 0x0AD
#define TI_LuAcute 0x0AE
#define TI_LuGrave 0x0AF
#define TI_LuCaret 0x0B0
#define TI_LuDier 0x0B1
#define TI_LcapCCed 0x0B2
#define TI_LcCed 0x0B3
#define TI_LcapNTilde 0x0B4
#define TI_LnTilde 0x0B5
#define TI_Laccent 0x0B6
#define TI_Lgrave 0x0B7
#define TI_Ldieresis 0x0B8
#define TI_LquesDown 0x0B9
#define TI_LexclamDown 0x0BA
#define TI_Lalpha 0x0BB
#define TI_Lbeta 0x0BC
#define TI_Lgamma 0x0BD
#define TI_LcapDelta 0x0BE
#define TI_Ldelta 0x0BF
#define TI_Lepsilon 0x0C0
#define TI_LlBrack 0x0C1
#define TI_Llambda 0x0C2
#define TI_Lmu 0x0C3
#define TI_Lpi 0x0C4
#define TI_Lrho 0x0C5
#define TI_LcapSigma 0x0C6
#define TI_Lsigma 0x0C7
#define TI_Ltau 0x0C8
#define TI_Lphi 0x0C9
#define TI_LcapOmega 0x0CA
#define TI_LxMean 0x0CB
#define TI_LyMean 0x0CC
#define TI_LsupX 0x0CD
#define TI_Lellipsis 0x0CE
#define TI_Lleft 0x0CF
#define TI_Lblock 0x0D0
#define TI_Lper 0x0D1
#define TI_Lhyphen 0x0D2
#define TI_Larea 0x0D3
#define TI_Ltemp 0x0D4
#define TI_Lcube 0x0D5
#define TI_Lenter 0x0D6
#define TI_LimagI 0x0D7
#define TI_Lphat 0x0D8
#define TI_Lchi 0x0D9
#define TI_LstatF 0x0DA
#define TI_Llne 0x0DB
#define TI_LlistL 0x0DC
#define TI_LfinanN 0x0DD
#define TI_L2_r_paren 0x0DE
#define TI_LblockArrow 0x0DF
#define TI_LcurO 0x0E0
#define TI_LcurO2 0x0E1
#define TI_LcurOcapA 0x0E2
#define TI_LcurOa 0x0E3
#define TI_LcurI 0x0E4
#define TI_LcurI2 0x0E5
#define TI_LcurIcapA 0x0E6
#define TI_LcurIa 0x0E7
#define TI_LGline 0E8h  //  = 0
#define TI_LGthick 0E9h  //  = 1
#define TI_LGabove 0EAh  //  = 2
#define TI_LGbelow 0EBh  //  = 3
#define TI_LGpath 0ECh  //  = 4
#define TI_LGanimate 0EDh  //  = 5
#define TI_LGdot 0EEh  //  = 6
#define TI_LUpBlk 0EFh  // Up arrow and Block in solver
#define TI_LDnBlk 0F0h  // Down arrow and Block in solver
#define TI_LcurFull 0F1h  // note: must be last char (PutMap checks)
// (MenuCurrent) Values
// -----------------------------------
#define TI_mConfirmation 0x01
#define TI_mApps 0x02
#define TI_mProgramHome 0x03
#define TI_mPrgm_Run 0x00
#define TI_mPrgm_Edit 0x01
#define TI_mPrgm_New 0x02
#define TI_mZoom 0x04
#define TI_mZoom_Zoom 0x00
#define TI_mZoom_Memory 0x01
#define TI_mDraw 0x05
#define TI_mDraw_Draw 0x00
#define TI_mDraw_Points 0x01
#define TI_mDraw_Store 0x02
#define TI_mDraw_Background 0x03
#define TI_mStatPlots 0x06
#define TI_mStat 0x07
#define TI_mStat_Edit 0x00
#define TI_mStat_Calc 0x01
#define TI_mStat_Tests 0x02
#define TI_mMath 0x08
#define TI_mMath_Math 0x00
#define TI_mMath_Number 0x01
#define TI_mMath_Complex 0x02
#define TI_mMath_Prob 0x03
#define TI_mMath_Frac 0x04
#define TI_mTest 0x09
#define TI_mTest_Test 0x00
#define TI_mTest_Logic 0x01
#define TI_mVars 0x0B
#define TI_mVars_Vars 0x00
#define TI_mVars_YVars 0x01
#define TI_mVars_Colors 0x02
#define TI_mMemory 0x0C
#define TI_mMatrix 0x0D
#define TI_mMatrix_Name 0x00
#define TI_mMatrix_Math 0x01
#define TI_mMatrix_Edit 0x02
#define TI_mDistr 0x0E
#define TI_mDistr_Distr 0x00
#define TI_mDistr_Draw 0x01
#define TI_mAngle 0x0F
#define TI_mList 0x10
#define TI_mList_Names 0x00
#define TI_mList_Ops 0x01
#define TI_mList_Math 0x02
#define TI_mCalculate 0x11
#define TI_mVarsWin 0x15
#define TI_mVarsWin_XY 0x00
#define TI_mVarsWin_TTh 0x01
#define TI_mVarsWin_UVW 0x02
#define TI_mVarsZoom 0x16
#define TI_mVarsZoom_ZXY 0x00
#define TI_mVarsZoom_ZT 0x01
#define TI_mVarsZoom_UVW 0x02
#define TI_mVarsGDB 0x17
#define TI_mVarsPics 0x18
#define TI_mVarsPics_Pics 0x01
#define TI_mVarsPics_Bckgrnds 0x01
#define TI_mVarsStrings 0x19
#define TI_mVarsStat 0x1A
#define TI_mVarsStat_XY 0x00
#define TI_mVarsStat_Sigma 0x01
#define TI_mVarsStat_EQ 0x02
#define TI_mVarsStat_Test 0x03
#define TI_mVarsStat_Pts 0x04
#define TI_mVarsTable 0x1B
#define TI_mVarsYequ 0x1C
#define TI_mVarsParametric 0x1D
#define TI_mVarsPolar 0x1E
#define TI_mVarsFnOnOff 0x1F
#define TI_mMemReset 0x20
#define TI_mMemReset_RAM 0x00
#define TI_mMemReset_ROM 0x01
#define TI_mMemReset_All 0x02
#define TI_mMemMgmtDel 0x21
#define TI_mMemResetDefaults 0x22
#define TI_mMemResetRAMAll 0x24
#define TI_mMemResetROMVars 0x25
#define TI_mMemResetROMApps 0x26
#define TI_mMemResetROMAll 0x27
#define TI_mMemResetAll 0x28
#define TI_mGroup 0x29
#define TI_mGroup_New 0x00
#define TI_mGroup_Ungroup 0x01
#define TI_mGroupVars 0x2A
#define TI_mProgramEdit 0x2B
#define TI_mPrgmEd_Ctrl 0x00
#define TI_mPrgmEd_IO 0x01
#define TI_mPrgmEd_Color 0x02
#define TI_mPrgmEd_Exec 0x03
#define TI_mPrgmZoom 0x2C
#define TI_mPrgmZoom_Zoom 0x00
#define TI_mPrgmZoom_Mem 0x01
#define TI_mPrgmDraw 0x2D
#define TI_mPrgmDraw_Draw 0x00
#define TI_mPrgmDraw_Pt 0x01
#define TI_mPrgmDraw_Store 0x02
#define TI_mPrgmDraw_Bckgrnd 0x03
#define TI_mPrgmStatPlot 0x2E
#define TI_mPrgmSP_Plots 0x00
#define TI_mPrgmSP_Type 0x01
#define TI_mPrgmSP_Mark 0x02
#define TI_mPrgmStat 0x2F
#define TI_mPrgmStat_Edit 0x00
#define TI_mPrgmStat_Calc 0x01
#define TI_mPrgmStat_Tests 0x02
#define TI_mPrgmMath 0x30
#define TI_mPrgmMath_Math 0x00
#define TI_mPrgmMath_Num 0x01
#define TI_mPrgmMath_Cplx 0x02
#define TI_mPrgmMath_Prob 0x03
#define TI_mPrgmMath_Frac 0x04
#define TI_mLink 0x31
#define TI_mLink_Send 0x00
#define TI_mLink_Recieve 0x01
#define TI_mLinkTrasmit 0x32
#define TI_mLinkXmit_Xmit 0x01
#define TI_mGarbageCollect 0x40
#define TI_mSelectGroupVars 0x41
#define TI_mSelGrpVars_Sel 0x00
#define TI_mSelGrpVars_Grp 0x01
#define TI_mDuplicateName 0x43
#define TI_mCatalog 0x46
#define TI_mFinance 0x22
#define TI_mFinance_Calc 0x00
#define TI_mFinance_Vars 0x01
// Keypress Equates
// -----------------------------------
#define TI_kRight 0x001
#define TI_kLeft 0x002
#define TI_kUp 0x003
#define TI_kDown 0x004
#define TI_kEnter 0x005
#define TI_kAlphaEnter 0x006
#define TI_kAlphaUp 0x007
#define TI_kAlphaDown 0x008
#define TI_kClear 0x009
#define TI_kDel 0x00A
#define TI_kIns 0x00B
#define TI_kRecall 0x00C
#define TI_kLastEnt 0x00D
#define TI_kBOL 0x00E
#define TI_kEOL 0x00F
#define TI_kSelAll 0x010
#define TI_kUnselAll 0x011
#define TI_kLtoTI82 0x012
#define TI_kBackup 0x013
#define TI_kRecieve 0x014
#define TI_kLnkQuit 0x015
#define TI_kTrans 0x016
#define TI_kRename 0x017
#define TI_kOverw 0x018
#define TI_kOmit 0x019
#define TI_kCont 0x01A
#define TI_kSendID 0x01B
#define TI_kSendSW 0x01C
#define TI_kYes 0x01D
#define TI_kNoWay 0x01E
#define TI_kvSendType 0x01F
#define TI_kOverWAll 0x020
#define TI_kNo 0x025
#define TI_kKReset 0x026
#define TI_kApp 0x027
#define TI_kDoug 0x028
#define TI_kListflag 0x029
#define TI_menuStart 0x02B
#define TI_kAreYouSure 0x02B
#define TI_kAppsMenu 0x02C
#define TI_kPrgm 0x02D
#define TI_kZoom 0x02E
#define TI_kDraw 0x02F
#define TI_kSPlot 0x030
#define TI_kStat 0x031
#define TI_kMath 0x032
#define TI_kTest 0x033
#define TI_kChar 0x034
#define TI_kVars 0x035
#define TI_kMem 0x036
#define TI_kMatrix 0x037
#define TI_kDist 0x038
#define TI_kAngle 0x039
#define TI_kList 0x03A
#define TI_kCalc 0x03B
#define TI_kFin 0x03C
#define TI_menuEnd kFin
#define TI_kCatalog 0x03E
#define TI_kInputDone 0x03F
#define TI_kOff kInputDone
#define TI_kQuit 0x040
#define TI_appStart kQuit
#define TI_kLinkIO 0x041
#define TI_kMatrixEd 0x042
#define TI_kStatEd 0x043
#define TI_kGraph 0x044
#define TI_kMode 0x045
#define TI_kPrgmEd 046h  // PROGRAM EDIT
#define TI_kPrgmCr 047h  // PROGRAM CREATE
#define TI_kWindow 048h  // RANGE EDITOR
#define TI_kYequ 049h  // EQUATION EDITOR
#define TI_kTable 04Ah  // TABLE EDITOR
#define TI_kTblSet 04Bh  // TABLE SET
#define TI_kChkRAM 04Ch  // CHECK RAM (About screen)
#define TI_kDelMem 04Dh  // DELETE MEM
#define TI_kResetMem 04Eh  // RESET MEM
#define TI_kResetDef 04Fh  // RESET DEFAULT
#define TI_kPrgmInput 050h  // PROGRAM INPUT
#define TI_kZFactEd 051h  // ZOOM FACTOR EDITOR
#define TI_kError 052h  // ERROR
#define TI_kSolveTVM 053h  // TVM SOLVER
#define TI_kSolveRoot 054h  // SOLVE EDITOR
#define TI_kStatP 055h  // stat plot
#define TI_kInfStat 056h  // Inferential Statistic
#define TI_kFormat 057h  // FORMAT
#define TI_kExtApps 058h  // External Applications.		NEW
#define TI_kNewApps 059h  // New Apps for Cerberus.
#define TI_append kNewApps
#define TI_echoStart1 0x05A
#define TI_kTrace 0x05A
#define TI_kZFit 0x05B
#define TI_kZIn 0x05C
#define TI_kZOut 0x05D
#define TI_kZPrev 0x05E
#define TI_kBox 0x05F
#define TI_kDecml 0x060
#define TI_kSetZm 0x061
#define TI_kSquar 0x062
#define TI_kStd 0x063
#define TI_kTrig 0x064
#define TI_kUsrZm 0x065
#define TI_kZSto 0x066
#define TI_kZInt 0x067
#define TI_kZStat 0x068
#define TI_echoStart2 0x069
#define TI_kSelect 0x069
#define TI_kCircl 0x06A
#define TI_kClDrw 0x06B
#define TI_kLine 0x06C
#define TI_kPen 0x06D
#define TI_kPtChg 0x06E
#define TI_kPtOff 0x06F
#define TI_kPtOn 0x070
#define TI_kVert 0x071
#define TI_kHoriz 0x072
#define TI_kText 0x073
#define TI_kTanLn 0x074
#define TI_kEval 0x075
#define TI_kInters 0x076
#define TI_kDYDX 0x077
#define TI_kFnIntg 0x078
#define TI_kRootG 0x079
#define TI_kDYDT 0x07A
#define TI_kDXDT 0x07B
#define TI_kDRDo 0x07C
#define TI_KGFMin 0x07D
#define TI_KGFMax 0x07E
#define TI_EchoStart 0x07F
#define TI_kListName 0x07F
#define TI_kAdd 0x080
#define TI_kSub 0x081
#define TI_kMul 0x082
#define TI_kDiv 0x083
#define TI_kExpon 0x084
#define TI_kLParen 0x085
#define TI_kRParen 0x086
#define TI_kLBrack 0x087
#define TI_kRBrack 0x088
#define TI_kShade 0x089
#define TI_kStore 0x08A
#define TI_kComma 0x08B
#define TI_kChs 0x08C
#define TI_kDecPnt 0x08D
#define TI_k0 0x08E
#define TI_k1 0x08F
#define TI_k2 0x090
#define TI_k3 0x091
#define TI_k4 0x092
#define TI_k5 0x093
#define TI_k6 0x094
#define TI_k7 0x095
#define TI_k8 0x096
#define TI_k9 0x097
#define TI_kEE 0x098
#define TI_kSpace 0x099
#define TI_kCapA 0x09A
#define TI_kCapB 0x09B
#define TI_kCapC 0x09C
#define TI_kCapD 0x09D
#define TI_kCapE 0x09E
#define TI_kCapF 0x09F
#define TI_kCapG 0x0A0
#define TI_kCapH 0x0A1
#define TI_kCapI 0x0A2
#define TI_kCapJ 0x0A3
#define TI_kCapK 0x0A4
#define TI_kCapL 0x0A5
#define TI_kCapM 0x0A6
#define TI_kCapN 0x0A7
#define TI_kCapO 0x0A8
#define TI_kCapP 0x0A9
#define TI_kCapQ 0x0AA
#define TI_kCapR 0x0AB
#define TI_kCapS 0x0AC
#define TI_kCapT 0x0AD
#define TI_kCapU 0x0AE
#define TI_kCapV 0x0AF
#define TI_kCapW 0x0B0
#define TI_kCapX 0x0B1
#define TI_kCapY 0x0B2
#define TI_kCapZ 0x0B3
#define TI_kVarx 0x0B4
#define TI_kPi 0x0B5
#define TI_kInv 0x0B6
#define TI_kSin 0x0B7
#define TI_kASin 0x0B8
#define TI_kCos 0x0B9
#define TI_kACos 0x0BA
#define TI_kTan 0x0BB
#define TI_kATan 0x0BC
#define TI_kSquare 0x0BD
#define TI_kSqrt 0x0BE
#define TI_kLn 0x0BF
#define TI_kExp 0x0C0
#define TI_kLog 0x0C1
#define TI_kALog 0x0C2
#define TI_kToABC 0x0C3
#define TI_kClrTbl 0x0C4
#define TI_kAns 0x0C5
#define TI_kColon 0x0C6
#define TI_kNDeriv 0x0C7
#define TI_kFnInt 0x0C8
#define TI_kRoot 0x0C9
#define TI_kQuest 0x0CA
#define TI_kQuote 0x0CB
#define TI_kTheta 0x0CC
#define TI_kIf 0x0CD
#define TI_kThen 0x0CE
#define TI_kElse 0x0CF
#define TI_kFor 0x0D0
#define TI_kWhile 0x0D1
#define TI_kRepeat 0x0D2
#define TI_kEnd 0x0D3
#define TI_kPause 0x0D4
#define TI_kLbl 0x0D5
#define TI_kGoto 0x0D6
#define TI_kISG 0x0D7
#define TI_kDSL 0x0D8
#define TI_kMenu 0x0D9
#define TI_kExec 0x0DA
#define TI_kReturn 0x0DB
#define TI_kStop 0x0DC
#define TI_kInput 0x0DD
#define TI_kPrompt 0x0DE
#define TI_kDisp 0x0DF
#define TI_kDispG 0x0E0
#define TI_kDispT 0x0E1
#define TI_kOutput 0x0E2
#define TI_kGetKey 0x0E3
#define TI_kClrHome 0x0E4
#define TI_kPrtScr 0x0E5
#define TI_kSinH 0x0E6
#define TI_kCosH 0x0E7
#define TI_kTanH 0x0E8
#define TI_kASinH 0x0E9
#define TI_kACosH 0x0EA
#define TI_kATanH 0x0EB
#define TI_kLBrace 0x0EC
#define TI_kRBrace 0x0ED
#define TI_kI 0x0EE
#define TI_kCONSTeA 0x0EF
#define TI_kPlot3 0x0F0
#define TI_kFMin 0x0F1
#define TI_kFMax 0x0F2
#define TI_kL1A 0x0F3
#define TI_kL2A 0x0F4
#define TI_kL3A 0x0F5
#define TI_kL4A 0x0F6
#define TI_kL5A 0x0F7
#define TI_kL6A 0x0F8
#define TI_kunA 0x0F9
#define TI_kvnA 0x0FA
#define TI_kwnA 0x0FB
//  THIS KEY MEANS THAT THE KEY PRESS IS ONE THAT ECHOS
//  INTO A BUFFER, AND IT IS A 2 BYTE KEY CODE, GO LOOK AT
//  (EXTECHO) FOR THE KEY VALUE
// --------------------------------------------------------
#define TI_kExtendEcho 0x0FE
#define TI_kE1BT 0
#define TI_kDrawInv kE1BT
#define TI_kDrawF (TI_kE1BT + 1)
#define TI_kPixelOn (TI_kE1BT + 2)
#define TI_kPixelOff (TI_kE1BT + 3)
#define TI_kPxlTest (TI_kE1BT + 4)
#define TI_kRCGDB (TI_kE1BT + 5)
#define TI_kRCPic (TI_kE1BT + 6)
#define TI_kSTGDB (TI_kE1BT + 7)
#define TI_kSTPic (TI_kE1BT + 8)
#define TI_kAbs (TI_kE1BT + 9)
#define TI_kTequ (TI_kE1BT + 10) // ==
#define TI_kTNoteQ (TI_kE1BT + 11) // <>
#define TI_kTGT (TI_kE1BT + 12) // >
#define TI_kTGTE (TI_kE1BT + 13) // >=
#define TI_kTLT (TI_kE1BT + 14) // <
#define TI_kTLTE (TI_kE1BT + 15) // <=
#define TI_kAnd (TI_kE1BT + 16)
#define TI_kOr (TI_kE1BT + 17)
#define TI_kXor (TI_kE1BT + 18)
#define TI_kNot (TI_kE1BT + 19)
#define TI_kLR1 (TI_kE1BT + 20)
#define TI_kXRoot (TI_kE1BT + 21)
#define TI_kCube (TI_kE1BT + 22)
#define TI_kCbRt (TI_kE1BT + 23) // Cube ROOT
#define TI_kToDec (TI_kE1BT + 24)
#define TI_kCubicR (TI_kE1BT + 25)
#define TI_kQuartR (TI_kE1BT + 26)
#define TI_kPlot1 (TI_kE1BT + 27)
#define TI_kPlot2 (TI_kE1BT + 28)
#define TI_kRound (TI_kE1BT + 29)
#define TI_kIPart (TI_kE1BT + 30)
#define TI_kFPart (TI_kE1BT + 31)
#define TI_kInt (TI_kE1BT + 32)
#define TI_kRand (TI_kE1BT + 33)
#define TI_kNPR (TI_kE1BT + 34)
#define TI_kNCR (TI_kE1BT + 35)
#define TI_kXFactorial (TI_kE1BT + 36)
#define TI_kRad (TI_kE1BT + 37)
#define TI_kDegr (TI_kE1BT + 38) // DEGREES CONV
#define TI_kAPost (TI_kE1BT + 39)
#define TI_kToDMS (TI_kE1BT + 40)
#define TI_kRToPo (TI_kE1BT + 41) // R
#define TI_kRToPr (TI_kE1BT + 42)
#define TI_kPToRx (TI_kE1BT + 43)
#define TI_kPToRy (TI_kE1BT + 44)
#define TI_kRowSwap (TI_kE1BT + 45)
#define TI_kRowPlus (TI_kE1BT + 46)
#define TI_kTimRow (TI_kE1BT + 47)
#define TI_kTRowP (TI_kE1BT + 48)
#define TI_kSortA (TI_kE1BT + 49)
#define TI_kSortD (TI_kE1BT + 50)
#define TI_kSeq (TI_kE1BT + 51)
#define TI_kMin (TI_kE1BT + 52)
#define TI_kMax (TI_kE1BT + 53)
#define TI_kMean (TI_kE1BT + 54)
#define TI_kMedian (TI_kE1BT + 55)
#define TI_kSum (TI_kE1BT + 56)
#define TI_kProd (TI_kE1BT + 57)
#define TI_kDet (TI_kE1BT + 58)
#define TI_kTransp (TI_kE1BT + 59)
#define TI_kDim (TI_kE1BT + 60)
#define TI_kFill (TI_kE1BT + 61)
#define TI_kIdent (TI_kE1BT + 62)
#define TI_kRandm (TI_kE1BT + 63)
#define TI_kAug (TI_kE1BT + 64)
#define TI_kOneVar (TI_kE1BT + 65)
#define TI_kTwoVar (TI_kE1BT + 66)
#define TI_kLR (TI_kE1BT + 67)
#define TI_kLRExp (TI_kE1BT + 68)
#define TI_kLRLn (TI_kE1BT + 69)
#define TI_kLRPwr (TI_kE1BT + 70)
#define TI_kMedMed (TI_kE1BT + 71)
#define TI_kQuad (TI_kE1BT + 72)
#define TI_kClrLst (TI_kE1BT + 73)
#define TI_kHist (TI_kE1BT + 74)
#define TI_kxyLine (TI_kE1BT + 75)
#define TI_kScatter (TI_kE1BT + 76)
#define TI_kmRad (TI_kE1BT + 77)
#define TI_kmDeg (TI_kE1BT + 78)
#define TI_kmNormF (TI_kE1BT + 79)
#define TI_kmSci (TI_kE1BT + 80)
#define TI_kmEng (TI_kE1BT + 81)
#define TI_kmFloat (TI_kE1BT + 82)
#define TI_kFix (TI_kE1BT + 83)
#define TI_kSplitOn (TI_kE1BT + 84)
#define TI_kFullScreen (TI_kE1BT + 85)
#define TI_kStndrd (TI_kE1BT + 86)
#define TI_kParam (TI_kE1BT + 87)
#define TI_kPolar (TI_kE1BT + 88)
#define TI_kSeqG (TI_kE1BT + 89)
#define TI_kAFillOn (TI_kE1BT + 90)
#define TI_kAFillOff (TI_kE1BT + 91)
#define TI_kACalcOn (TI_kE1BT + 92)
#define TI_kACalcOff (TI_kE1BT + 93)
#define TI_kFNOn (TI_kE1BT + 94)
#define TI_kFNOff (TI_kE1BT + 95)
#define TI_kPlotsOn (TI_kE1BT + 96)
#define TI_kPlotsOff (TI_kE1BT + 97)
#define TI_kPixelChg (TI_kE1BT + 98)
#define TI_kSendMBL (TI_kE1BT + 99)
#define TI_kRecvMBL (TI_kE1BT + 100)
#define TI_kBoxPlot (TI_kE1BT + 101)
#define TI_kBoxIcon (TI_kE1BT + 102)
#define TI_kCrossIcon (TI_kE1BT + 103)
#define TI_kDotIcon (TI_kE1BT + 104)
#define TI_kE2BT (TI_kE1BT + 105)
#define TI_kSeqential kE2BT
#define TI_kSimulG (TI_kE2BT + 1)
#define TI_kPolarG (TI_kE2BT + 2)
#define TI_kRectG (TI_kE2BT + 3)
#define TI_kCoordOn (TI_kE2BT + 4)
#define TI_kCoordOff (TI_kE2BT + 5)
#define TI_kDrawLine (TI_kE2BT + 6)
#define TI_kDrawDot (TI_kE2BT + 7)
#define TI_kAxisOn (TI_kE2BT + 8)
#define TI_kAxisOff (TI_kE2BT + 9)
#define TI_kGridOn (TI_kE2BT + 10)
#define TI_kGridOff (TI_kE2BT + 11)
#define TI_kLblOn (TI_kE2BT + 12)
#define TI_kLblOff (TI_kE2BT + 13)
#define TI_kL1 (TI_kE2BT + 14)
#define TI_kL2 (TI_kE2BT + 15)
#define TI_kL3 (TI_kE2BT + 16)
#define TI_kL4 (TI_kE2BT + 17)
#define TI_kL5 (TI_kE2BT + 18)
#define TI_kL6 (TI_kE2BT + 19)
// These keys are laid on top of existing keys to
// enable localization in the inferential stats editor.
// ----------------------------------------------------
#define TI_kinfData kL1
#define TI_kinfStats (TI_kL1 + 1)
#define TI_kinfYes (TI_kL1 + 2)
#define TI_kinfNo (TI_kL1 + 3)
#define TI_kinfCalc (TI_kL1 + 4)
#define TI_kinfDraw (TI_kL1 + 5)
#define TI_kinfAlt1ne (TI_kL1 + 6)
#define TI_kinfAlt1lt (TI_kL1 + 7)
#define TI_kinfAlt1gt (TI_kL1 + 8)
#define TI_kinfAlt2ne (TI_kL1 + 9)
#define TI_kinfAlt2lt (TI_kL1 + 10)
#define TI_kinfAlt2gt (TI_kL1 + 11)
#define TI_kinfAlt3ne (TI_kL1 + 12)
#define TI_kinfAlt3lt (TI_kL1 + 13)
#define TI_kinfAlt3gt (TI_kL1 + 14)
#define TI_kinfAlt4ne (TI_kL1 + 15)
#define TI_kinfAlt4lt (TI_kL1 + 16)
#define TI_kinfAlt4gt (TI_kL1 + 17)
#define TI_kinfAlt5ne (TI_kL1 + 18)
#define TI_kinfAlt5lt (TI_kL1 + 19)
#define TI_kinfAlt5gt (TI_kL1 + 20)
#define TI_kinfAlt6ne (TI_kL1 + 21)
#define TI_kinfAlt6lt (TI_kL1 + 22)
#define TI_kinfAlt6gt (TI_kL1 + 23)
#define TI_kMatA (TI_kE2BT + 20)
#define TI_kMatB (TI_kE2BT + 21)
#define TI_kMatC (TI_kE2BT + 22)
#define TI_kMatD (TI_kE2BT + 23)
#define TI_kMatE (TI_kE2BT + 24)
#define TI_kXmin (TI_kE2BT + 25)
#define TI_kXmax (TI_kE2BT + 26)
#define TI_kXscl (TI_kE2BT + 27)
#define TI_kYmin (TI_kE2BT + 28)
#define TI_kYmax (TI_kE2BT + 29)
#define TI_kYscl (TI_kE2BT + 30)
#define TI_kTmin (TI_kE2BT + 31)
#define TI_kTmax (TI_kE2BT + 32)
#define TI_kTStep (TI_kE2BT + 33)
#define TI_kOmin (TI_kE2BT + 34)
#define TI_kOmax (TI_kE2BT + 35)
#define TI_kOStep (TI_kE2BT + 36)
#define TI_ku0 (TI_kE2BT + 37)
#define TI_kv0 (TI_kE2BT + 38)
#define TI_knMin (TI_kE2BT + 39)
#define TI_knMax (TI_kE2BT + 40)
#define TI_kDeltaY (TI_kE2BT + 41)
#define TI_kDeltaX (TI_kE2BT + 42)
#define TI_kZXmin (TI_kE2BT + 43)
#define TI_kZXmax (TI_kE2BT + 44)
#define TI_kZXscl (TI_kE2BT + 45)
#define TI_kZYmin (TI_kE2BT + 46)
#define TI_kZYmax (TI_kE2BT + 47)
#define TI_kZYscl (TI_kE2BT + 48)
#define TI_kZTmin (TI_kE2BT + 49)
#define TI_kZTmax (TI_kE2BT + 50)
#define TI_kZTStep (TI_kE2BT + 51)
#define TI_kZOmin (TI_kE2BT + 52)
#define TI_kZOmax (TI_kE2BT + 53)
#define TI_kZOStep (TI_kE2BT + 54)
#define TI_kZu0 (TI_kE2BT + 55)
#define TI_kZv0 (TI_kE2BT + 56)
#define TI_kZnMin (TI_kE2BT + 57)
#define TI_kZnMax (TI_kE2BT + 58)
#define TI_kDelLast (TI_kE2BT + 59)
#define TI_kSinReg (TI_kE2BT + 60)
#define TI_kConstE (TI_kE2BT + 61)
#define TI_kPic1 (TI_kE2BT + 62)
#define TI_kPic2 (TI_kE2BT + 63)
#define TI_kPic3 (TI_kE2BT + 64)
#define TI_kDelVar (TI_kE2BT + 65)
#define TI_kGetCalc (TI_kE2BT + 66)
#define TI_kRealM (TI_kE2BT + 67)
#define TI_kPolarM (TI_kE2BT + 68)
#define TI_kRectM (TI_kE2BT + 69)
#define TI_kuv (TI_kE2BT + 70) // U vs V
#define TI_kvw (TI_kE2BT + 71) // V vs W
#define TI_kuw (TI_kE2BT + 72) // U vs W
#define TI_kFinPMTend (TI_kE2BT + 73)
#define TI_kFinPMTbeg (TI_kE2BT + 74)
#define TI_kGraphStyle (TI_kE2BT + 75)
#define TI_kExprOn (TI_kE2BT + 76)
#define TI_kExprOff (TI_kE2BT + 77)
#define TI_kStatA (TI_kE2BT + 78)
#define TI_kStatB (TI_kE2BT + 79)
#define TI_kStatC (TI_kE2BT + 80)
#define TI_kCorr (TI_kE2BT + 81)
#define TI_kStatD (TI_kE2BT + 82)
#define TI_kStatE (TI_kE2BT + 83)
#define TI_kRegEq (TI_kE2BT + 84)
#define TI_kMinX (TI_kE2BT + 85)
#define TI_kQ1 (TI_kE2BT + 86)
#define TI_kMD (TI_kE2BT + 87)
#define TI_kQ3 (TI_kE2BT + 88)
#define TI_kMaxX (TI_kE2BT + 89)
#define TI_kStatX1 (TI_kE2BT + 90)
#define TI_kStatY1 (TI_kE2BT + 91)
#define TI_kStatX2 (TI_kE2BT + 92)
#define TI_kStatY2 (TI_kE2BT + 93)
#define TI_kStatX3 (TI_kE2BT + 94)
#define TI_kStatY3 (TI_kE2BT + 95)
#define TI_kTblMin (TI_kE2BT + 96)
#define TI_kTblStep (TI_kE2BT + 97)
#define TI_kSetupLst (TI_kE2BT + 98)
#define TI_kClrAllLst (TI_kE2BT + 99)
#define TI_kLogistic (TI_kE2BT + 100)
#define TI_kZTest (TI_kE2BT + 101)
#define TI_kTTest (TI_kE2BT + 102)
#define TI_k2SampZTest (TI_kE2BT + 103)
#define TI_k2SampTTest (TI_kE2BT + 104)
#define TI_k1PropZTest (TI_kE2BT + 105)
#define TI_k2PropZTest (TI_kE2BT + 106)
#define TI_kChiTest (TI_kE2BT + 107)
#define TI_k2SampFTest (TI_kE2BT + 108)
#define TI_kZIntVal (TI_kE2BT + 109)
#define TI_kTIntVal (TI_kE2BT + 110)
#define TI_k2SampTInt (TI_kE2BT + 111)
#define TI_k2SampZInt (TI_kE2BT + 112)
#define TI_k1PropZInt (TI_kE2BT + 113)
#define TI_k2PropZInt (TI_kE2BT + 114)
#define TI_kDNormal (TI_kE2BT + 115)
#define TI_kInvNorm (TI_kE2BT + 116)
#define TI_kDT (TI_kE2BT + 117)
#define TI_kChi (TI_kE2BT + 118)
#define TI_kDF (TI_kE2BT + 119)
#define TI_kBinPDF (TI_kE2BT + 120)
#define TI_kBinCDF (TI_kE2BT + 121)
#define TI_kPoiPDF (TI_kE2BT + 122)
#define TI_kPoiCDF (TI_kE2BT + 123)
#define TI_kun (TI_kE2BT + 124)
#define TI_kvn (TI_kE2BT + 125)
#define TI_kwn (TI_kE2BT + 126)
#define TI_kRecn (TI_kE2BT + 127)
#define TI_kPlotStart (TI_kE2BT + 128)
#define TI_kZPlotStart (TI_kE2BT + 129) // recursion n
#define TI_kXFact (TI_kE2BT + 130) // PlotStart
#define TI_kYFact (TI_kE2BT + 131) // ZPlotStart
#define TI_kANOVA (TI_kE2BT + 132) // XFact
#define TI_kMaxY (TI_kE2BT + 133) // YFact
#define TI_kWebOn (TI_kE2BT + 134) // MinY
#define TI_kWebOff (TI_kE2BT + 135) // MaxY
#define TI_kTblInput (TI_kE2BT + 136) // WEB ON
#define TI_kGeoPDF (TI_kE2BT + 137) // WEB OFF
#define TI_kGeoCDF (TI_kE2BT + 138) // WEB OFF
#define TI_kShadeNorm (TI_kE2BT + 139)
#define TI_kShadeT (TI_kE2BT + 140)
#define TI_kShadeChi (TI_kE2BT + 141)
#define TI_kShadeF (TI_kE2BT + 142)
#define TI_kPlotStep (TI_kE2BT + 143)
#define TI_kZPlotStep (TI_kE2BT + 144)
#define TI_kLinRegtTest (TI_kE2BT + 145)
#define TI_KMGT (TI_kE2BT + 146) // VERT SPLIT
#define TI_kSelectA (TI_kE2BT + 147)
#define TI_kZFitA (TI_kE2BT + 148)
#define TI_kE2BT_End kZFitA
//  THIS KEY MEANS THAT IT IS A 2 BYTE KEYCODE
//  THERE ARE 3 OF THESE KEYS; BE CAREFUL WITH USAGE
// --------------------------------------------------------
#define TI_kExtendEcho2 0x0FC
// More 2 Byte Keys
// -------------------------------------
#define TI_kE2BT2 0x00
#define TI_kGDB1 kE2BT2
#define TI_kGDB2 (TI_kE2BT2 + 1)
#define TI_kGDB3 (TI_kE2BT2 + 2)
#define TI_kY1 (TI_kE2BT2 + 3)
#define TI_kY2 (TI_kE2BT2 + 4)
#define TI_kY3 (TI_kE2BT2 + 5)
#define TI_kY4 (TI_kE2BT2 + 6)
#define TI_kY5 (TI_kE2BT2 + 7)
#define TI_kY6 (TI_kE2BT2 + 8)
#define TI_kY7 (TI_kE2BT2 + 9)
#define TI_kY8 (TI_kE2BT2 + 10)
#define TI_kY9 (TI_kE2BT2 + 11)
#define TI_kY0 (TI_kE2BT2 + 12)
#define TI_kX1T (TI_kE2BT2 + 13)
#define TI_kY1T (TI_kE2BT2 + 14)
#define TI_kX2T (TI_kE2BT2 + 15)
#define TI_kY2T (TI_kE2BT2 + 16)
#define TI_kX3T (TI_kE2BT2 + 17)
#define TI_kY3T (TI_kE2BT2 + 18)
#define TI_kX4T (TI_kE2BT2 + 19)
#define TI_kY4T (TI_kE2BT2 + 20)
#define TI_kX5T (TI_kE2BT2 + 21)
#define TI_kY5T (TI_kE2BT2 + 22)
#define TI_kX6T (TI_kE2BT2 + 23)
#define TI_kY6T (TI_kE2BT2 + 24)
#define TI_kR1 (TI_kE2BT2 + 25)
#define TI_kR2 (TI_kE2BT2 + 26)
#define TI_kR3 (TI_kE2BT2 + 27)
#define TI_kR4 (TI_kE2BT2 + 28)
#define TI_kR5 (TI_kE2BT2 + 29)
#define TI_kR6 (TI_kE2BT2 + 30)
#define TI_kGDB4 (TI_kE2BT2 + 31)
#define TI_kGDB5 (TI_kE2BT2 + 32)
#define TI_kGDB6 (TI_kE2BT2 + 33)
#define TI_kPic4 (TI_kE2BT2 + 34)
#define TI_kPic5 (TI_kE2BT2 + 35)
#define TI_kPic6 (TI_kE2BT2 + 36)
#define TI_kGDB7 (TI_kE2BT2 + 37)
#define TI_kGDB8 (TI_kE2BT2 + 38)
#define TI_kGDB9 (TI_kE2BT2 + 39)
#define TI_kGDB0 (TI_kE2BT2 + 40)
#define TI_kPic7 (TI_kE2BT2 + 41)
#define TI_kPic8 (TI_kE2BT2 + 42)
#define TI_kPic9 (TI_kE2BT2 + 43)
#define TI_kPic0 (TI_kE2BT2 + 44)
#define TI_kStatN (TI_kE2BT2 + 45)
#define TI_kXMean (TI_kE2BT2 + 46)
#define TI_kConj (TI_kE2BT2 + 47)
#define TI_kReal (TI_kE2BT2 + 48)
#define TI_kFAngle (TI_kE2BT2 + 49)
#define TI_kLCM (TI_kE2BT2 + 50)
#define TI_kGCD (TI_kE2BT2 + 51)
#define TI_kRandInt (TI_kE2BT2 + 52)
#define TI_kRandNorm (TI_kE2BT2 + 53)
#define TI_kToPolar (TI_kE2BT2 + 54)
#define TI_kToRect (TI_kE2BT2 + 55)
#define TI_kYMean (TI_kE2BT2 + 56)
#define TI_kStdX (TI_kE2BT2 + 57)
#define TI_kStdX1 (TI_kE2BT2 + 58)
#define TI_kw0 (TI_kE2BT2 + 59)
#define TI_kMatF (TI_kE2BT2 + 60)
#define TI_kMatG (TI_kE2BT2 + 61)
#define TI_kMatRH (TI_kE2BT2 + 62)
#define TI_kMatI (TI_kE2BT2 + 63)
#define TI_kMatJ (TI_kE2BT2 + 64)
#define TI_kYMean1 (TI_kE2BT2 + 65)
#define TI_kStdY (TI_kE2BT2 + 66)
#define TI_kStdY1 (TI_kE2BT2 + 67)
#define TI_kMatToLst (TI_kE2BT2 + 68)
#define TI_kLstToMat (TI_kE2BT2 + 69)
#define TI_kCumSum (TI_kE2BT2 + 70)
#define TI_kDeltaLst (TI_kE2BT2 + 71)
#define TI_kStdDev (TI_kE2BT2 + 72)
#define TI_kVariance (TI_kE2BT2 + 73)
#define TI_kLength (TI_kE2BT2 + 74)
#define TI_kEquToStrng (TI_kE2BT2 + 75)
#define TI_kStrngToequ (TI_kE2BT2 + 76)
#define TI_kExpr (TI_kE2BT2 + 77)
#define TI_kSubStrng (TI_kE2BT2 + 78)
#define TI_kInStrng (TI_kE2BT2 + 79)
#define TI_kStr1 (TI_kE2BT2 + 80)
#define TI_kStr2 (TI_kE2BT2 + 81)
#define TI_kStr3 (TI_kE2BT2 + 82)
#define TI_kStr4 (TI_kE2BT2 + 83)
#define TI_kStr5 (TI_kE2BT2 + 84)
#define TI_kStr6 (TI_kE2BT2 + 85)
#define TI_kStr7 (TI_kE2BT2 + 86)
#define TI_kStr8 (TI_kE2BT2 + 87)
#define TI_kStr9 (TI_kE2BT2 + 88)
#define TI_kStr0 (TI_kE2BT2 + 89)
#define TI_kFinN (TI_kE2BT2 + 90)
#define TI_kFinI (TI_kE2BT2 + 91)
#define TI_kFinPV (TI_kE2BT2 + 92)
#define TI_kFinPMT (TI_kE2BT2 + 93)
#define TI_kFinFV (TI_kE2BT2 + 94)
#define TI_kFinPY (TI_kE2BT2 + 95)
#define TI_kFinCY (TI_kE2BT2 + 96)
#define TI_kFinFPMT (TI_kE2BT2 + 97)
#define TI_kFinFI (TI_kE2BT2 + 98)
#define TI_kFinFPV (TI_kE2BT2 + 99)
#define TI_kFinFN (TI_kE2BT2 + 100)
#define TI_kFinFFV (TI_kE2BT2 + 101)
#define TI_kFinNPV (TI_kE2BT2 + 102)
#define TI_kFinIRR (TI_kE2BT2 + 103)
#define TI_kFinBAL (TI_kE2BT2 + 104)
#define TI_kFinPRN (TI_kE2BT2 + 105)
#define TI_kFinINT (TI_kE2BT2 + 106)
#define TI_kSumX (TI_kE2BT2 + 107)
#define TI_kSumX2 (TI_kE2BT2 + 108)
#define TI_kFinToNom (TI_kE2BT2 + 109)
#define TI_kFinToEff (TI_kE2BT2 + 110)
#define TI_kFinDBD (TI_kE2BT2 + 111)
#define TI_kStatVP (TI_kE2BT2 + 112)
#define TI_kStatZ (TI_kE2BT2 + 113)
#define TI_kStatT (TI_kE2BT2 + 114)
#define TI_kStatChi (TI_kE2BT2 + 115)
#define TI_kStatF (TI_kE2BT2 + 116)
#define TI_kStatDF (TI_kE2BT2 + 117)
#define TI_kStatPhat (TI_kE2BT2 + 118)
#define TI_kStatPhat1 (TI_kE2BT2 + 119)
#define TI_kStatPhat2 (TI_kE2BT2 + 120)
#define TI_kStatMeanX1 (TI_kE2BT2 + 121)
#define TI_kStatMeanX2 (TI_kE2BT2 + 122)
#define TI_kStatStdX1 (TI_kE2BT2 + 123)
#define TI_kStatStdX2 (TI_kE2BT2 + 124)
#define TI_kStatStdXP (TI_kE2BT2 + 125)
#define TI_kStatN1 (TI_kE2BT2 + 126)
#define TI_kStatN2 (TI_kE2BT2 + 127)
#define TI_kStatLower (TI_kE2BT2 + 128)
#define TI_kStatUpper (TI_kE2BT2 + 129)
#define TI_kuw0 (TI_kE2BT2 + 130)
#define TI_kImag (TI_kE2BT2 + 131)
#define TI_kSumY (TI_kE2BT2 + 132)
#define TI_kXres (TI_kE2BT2 + 133)
#define TI_kStat_s (TI_kE2BT2 + 134)
#define TI_kSumY2 (TI_kE2BT2 + 135)
#define TI_kSumXY (TI_kE2BT2 + 136)
#define TI_kuXres (TI_kE2BT2 + 137)
#define TI_kModBox (TI_kE2BT2 + 138)
#define TI_kNormProb (TI_kE2BT2 + 139)
#define TI_kNormalPDF (TI_kE2BT2 + 140)
#define TI_kTPDF (TI_kE2BT2 + 141)
#define TI_kChiPDF (TI_kE2BT2 + 142)
#define TI_kFPDF (TI_kE2BT2 + 143)
#define TI_kMinY (TI_kE2BT2 + 144) // MinY
#define TI_kRandBin (TI_kE2BT2 + 145)
#define TI_kRef (TI_kE2BT2 + 146)
#define TI_kRRef (TI_kE2BT2 + 147)
#define TI_kLRSqr (TI_kE2BT2 + 148)
#define TI_kBRSqr (TI_kE2BT2 + 149)
#define TI_kDiagOn (TI_kE2BT2 + 150)
#define TI_kDiagOff (TI_kE2BT2 + 151)
#define TI_kun1 (TI_kE2BT2 + 152) // FOR RCL USE WHEN GOTTEN FROM 82
#define TI_kvn1 (TI_kE2BT2 + 153) // FOR RCL USE WHEN GOTTEN FROM 82
#define TI_k83_00End kvn1  // end of original keys...
#define TI_kArchive (TI_k83_00End + 1)
#define TI_kUnarchive (TI_k83_00End + 2)
#define TI_kAsm (TI_k83_00End + 3) // Asm(
#define TI_kAsmPrgm (TI_k83_00End + 4) // AsmPrgm
#define TI_kAsmComp (TI_k83_00End + 5) // AsmComp(
#define TI_kcapAAcute (TI_k83_00End + 6)
#define TI_kcapAGrave (TI_k83_00End + 7)
#define TI_kcapACaret (TI_k83_00End + 8)
#define TI_kcapADier (TI_k83_00End + 9)
#define TI_kaAcute (TI_k83_00End + 10)
#define TI_kaGrave (TI_k83_00End + 11)
#define TI_kaCaret (TI_k83_00End + 12)
#define TI_kaDier (TI_k83_00End + 13)
#define TI_kcapEAcute (TI_k83_00End + 14)
#define TI_kcapEGrave (TI_k83_00End + 15)
#define TI_kcapECaret (TI_k83_00End + 16)
#define TI_kcapEDier (TI_k83_00End + 17)
#define TI_keAcute (TI_k83_00End + 18)
#define TI_keGrave (TI_k83_00End + 19)
#define TI_keCaret (TI_k83_00End + 20)
#define TI_keDier (TI_k83_00End + 21)
#define TI_kcapIAcute (TI_k83_00End + 22)
#define TI_kcapIGrave (TI_k83_00End + 23)
#define TI_kcapICaret (TI_k83_00End + 24)
#define TI_kcapIDier (TI_k83_00End + 25)
#define TI_kiAcute (TI_k83_00End + 26)
#define TI_kiGrave (TI_k83_00End + 27)
#define TI_kiCaret (TI_k83_00End + 28)
#define TI_kiDier (TI_k83_00End + 29)
#define TI_kcapOAcute (TI_k83_00End + 30)
#define TI_kcapOGrave (TI_k83_00End + 31)
#define TI_kcapOCaret (TI_k83_00End + 32)
#define TI_kcapODier (TI_k83_00End + 33)
#define TI_koAcute (TI_k83_00End + 34)
#define TI_koGrave (TI_k83_00End + 35)
#define TI_koCaret (TI_k83_00End + 36)
#define TI_koDier (TI_k83_00End + 37)
#define TI_kcapUAcute (TI_k83_00End + 38)
#define TI_kcapUGrave (TI_k83_00End + 39)
#define TI_kcapUCaret (TI_k83_00End + 40)
#define TI_kcapUDier (TI_k83_00End + 41)
#define TI_kuAcute (TI_k83_00End + 42)
#define TI_kuGrave (TI_k83_00End + 43)
#define TI_kuCaret (TI_k83_00End + 44)
#define TI_kuDier (TI_k83_00End + 45)
#define TI_kcapCCed (TI_k83_00End + 46)
#define TI_kcCed (TI_k83_00End + 47)
#define TI_kcapNTilde (TI_k83_00End + 48)
#define TI_knTilde (TI_k83_00End + 49)
#define TI_kaccent (TI_k83_00End + 50)
#define TI_kgrave (TI_k83_00End + 51)
#define TI_kdieresis (TI_k83_00End + 52)
#define TI_kquesDown (TI_k83_00End + 53)
#define TI_kexclamDown (TI_k83_00End + 54)
#define TI_kalpha (TI_k83_00End + 55)
#define TI_kbeta (TI_k83_00End + 56)
#define TI_kgamma (TI_k83_00End + 57)
#define TI_kcapDelta (TI_k83_00End + 58)
#define TI_kdelta (TI_k83_00End + 59)
#define TI_kepsilon (TI_k83_00End + 60)
#define TI_klambda (TI_k83_00End + 61)
#define TI_kmu (TI_k83_00End + 62)
#define TI_kpi2 (TI_k83_00End + 63)
#define TI_krho (TI_k83_00End + 64)
#define TI_kcapSigma (TI_k83_00End + 65)
#define TI_ksigma (TI_k83_00End + 66)
#define TI_ktau (TI_k83_00End + 67)
#define TI_kphi (TI_k83_00End + 68)
#define TI_kcapOmega (TI_k83_00End + 69)
#define TI_kphat (TI_k83_00End + 70)
#define TI_kchi2 (TI_k83_00End + 71)
#define TI_kstatF2 (TI_k83_00End + 72)
#define TI_kLa (TI_k83_00End + 73)
#define TI_kLb (TI_k83_00End + 74)
#define TI_kLc (TI_k83_00End + 75)
#define TI_kLd (TI_k83_00End + 76)
#define TI_kLe (TI_k83_00End + 77)
#define TI_kLf (TI_k83_00End + 78)
#define TI_kLg (TI_k83_00End + 79)
#define TI_kLh (TI_k83_00End + 80)
#define TI_kLi (TI_k83_00End + 81)
#define TI_kLj (TI_k83_00End + 82)
#define TI_kLk (TI_k83_00End + 83)
#define TI_kLl (TI_k83_00End + 84)
#define TI_kLm (TI_k83_00End + 85)
#define TI_kLsmalln (TI_k83_00End + 86)
#define TI_kLo (TI_k83_00End + 87)
#define TI_kLp (TI_k83_00End + 88)
#define TI_kLq (TI_k83_00End + 89)
#define TI_kLsmallr (TI_k83_00End + 90)
#define TI_kLs (TI_k83_00End + 91)
#define TI_kLt (TI_k83_00End + 92)
#define TI_kLu (TI_k83_00End + 93)
#define TI_kLv (TI_k83_00End + 94)
#define TI_kLw (TI_k83_00End + 95)
#define TI_kLx (TI_k83_00End + 96)
#define TI_kLy (TI_k83_00End + 97)
#define TI_kLz (TI_k83_00End + 98)
#define TI_kGarbageC (TI_k83_00End + 99) // GarbageCollect
#define TI_kE2BT2_End kGarbageC
//  THIS KEY MEANS THAT IT IS A 2 BYTE KEYCODE
//  UNLESS (EXTECHO) IS 0 THEN IT IS AN OLD 1 BYTE KEYCODE
//  THERE ARE 3 OF THESE KEYS; BE CAREFUL WITH USAGE
// --------------------------------------------------------
#define TI_kExtendEcho3 0x0FB
// Even More 2 Byte Keys
// -------------------------------------
#define TI_kE2BT3 0x00
#define TI_kSingleQuote (TI_kE2BT3 + 1)
#define TI_kAt (TI_kE2BT3 + 2)
#define TI_kHash (TI_kE2BT3 + 3)
#define TI_kDollar (TI_kE2BT3 + 4)
#define TI_kAmp (TI_kE2BT3 + 5)
#define TI_kBackquote (TI_kE2BT3 + 6)
#define TI_kSemicolon (TI_kE2BT3 + 7)
#define TI_kBackslash (TI_kE2BT3 + 8)
#define TI_kBar (TI_kE2BT3 + 9)
#define TI_kUnderscore (TI_kE2BT3 + 10)
#define TI_kTilde (TI_kE2BT3 + 11)
#define TI_kPercent (TI_kE2BT3 + 12)
#define TI_kEllipsis (TI_kE2BT3 + 140)
#define TI_kAng (TI_kE2BT3 + 141)
#define TI_kSS (TI_kE2BT3 + 142)
#define TI_kSupX (TI_kE2BT3 + 143)
#define TI_kSubT (TI_kE2BT3 + 144)
#define TI_kSub0 (TI_kE2BT3 + 145)
#define TI_kSub1 (TI_kE2BT3 + 146)
#define TI_kSub2 (TI_kE2BT3 + 147)
#define TI_kSub3 (TI_kE2BT3 + 148)
#define TI_kSub4 (TI_kE2BT3 + 149)
#define TI_kSub5 (TI_kE2BT3 + 150)
#define TI_kSub6 (TI_kE2BT3 + 151)
#define TI_kSub7 (TI_kE2BT3 + 152)
#define TI_kSub8 (TI_kE2BT3 + 153)
#define TI_kSub9 (TI_kE2BT3 + 154)
#define TI_kSub10 (TI_kE2BT3 + 155)
// TI-83 Plus Context Equates
// --------------------------------------------------------------
#define TI_cxCmd kQuit  // home screen
#define TI_cxMatEdit kMatrixEd  // matrix editor
#define TI_cxPrgmEdit kPrgmEd  // program editor
#define TI_cxEquEdit kYequ  // equation editor
#define TI_cxGrRange kWindow  // graph range editor
#define TI_cxGrZfact kZFactEd  // graph zoom factors editor
#define TI_cxGraph kGraph  // graph mode
#define TI_cxStatEdit kStatEd  // statistics list editor
#define TI_cxPrgmInput kPrgmInput  // programmed input
#define TI_cxError kError  // error handler
#define TI_cxLinkIO kLinkIO  // LINK I/O interface
#define TI_cxMem kResetMem  // reset memory
#define TI_cxDefMem kResetDef  // reset default
#define TI_cxRAMApp kChkRAM  // RAM usage screen
#define TI_cxMode kMode  // mode settings screen
#define TI_cxErase kDelMem  // memory erase
#define TI_cxPrgmCreate kPrgmCr  // PROGRAM CREATE
#define TI_cxTableEditor kTable  // TABLE EDITOR
#define TI_cxTableSet kTblSet  // TABLE SET UP
#define TI_cxStatPlot kStatP  // STAT PLOTS
#define TI_cxInfStat kInfStat  // Inferential Statistic
#define TI_cxFormat kFormat  // FORMAT CONTEXT
#define TI_cxSolveTVM kSolveTVM  // Solve TVM
#define TI_cxSolveRoot kSolveRoot  // Solve Root
#define TI_lastOldApp kExtApps  // external applications
#define TI_cxextapps kExtApps
#define TI_cxNewApps kNewApps  // new cerberus applications
#define TI_cxGroup (TI_cxNewApps + 0) // 1st new app.
#define TI_cxUnGroup (TI_cxNewApps + 1) // 2nd new app.
#define TI_lastNewApp cxUnGroup  // last new app for this ver
// Scan Code Equates
// ------------------------------
#define TI_skDown 0x01
#define TI_skLeft 0x02
#define TI_skRight 0x03
#define TI_skUp 0x04
#define TI_skEnter 0x09
#define TI_skAdd 0x0A
#define TI_skSub 0x0B
#define TI_skMul 0x0C
#define TI_skDiv 0x0D
#define TI_skPower 0x0E
#define TI_skClear 0x0F
#define TI_skChs 0x11
#define TI_sk3 0x12
#define TI_sk6 0x13
#define TI_sk9 0x14
#define TI_skRParen 0x15
#define TI_skTan 0x16
#define TI_skVars 0x17
#define TI_skDecPnt 0x19
#define TI_sk2 0x1A
#define TI_sk5 0x1B
#define TI_sk8 0x1C
#define TI_skLParen 0x1D
#define TI_skCos 0x1E
#define TI_skPrgm 0x1F
#define TI_skStat 0x20
#define TI_sk0 0x21
#define TI_sk1 0x22
#define TI_sk4 0x23
#define TI_sk7 0x24
#define TI_skComma 0x25
#define TI_skSin 0x26
#define TI_skMatrix 0x27
#define TI_skGraphvar 0x28
#define TI_skStore 0x2A
#define TI_skLn 0x2B
#define TI_skLog 0x2C
#define TI_skSquare 0x2D
#define TI_skRecip 0x2E
#define TI_skMath 0x2F
#define TI_skAlpha 0x30
#define TI_skGraph 0x31
#define TI_skTrace 0x32
#define TI_skZoom 0x33
#define TI_skWindow 0x34
#define TI_skYequ 0x35
#define TI_sk2nd 0x36
#define TI_skMode 0x37
#define TI_skDel 0x38
//  DI Keyboard Equates
// ---------------------------
#define TI_DI_Mode 0x0F50000
#define TI_DI_Cntrl 0x0F50004
#define TI_DI_Int 0x0F50008
#define TI_DI_IntMask 0x0F5000C
#define TI_kbdG1 0x0F50012
// ----------------------------
#define TI_kbdGraph 00000001b
#define TI_kbdTrace 00000010b
#define TI_kbdZoom 00000100b
#define TI_kbdWindow 00001000b
#define TI_kbdYequ 00010000b
#define TI_kbd2nd 00100000b
#define TI_kbdMode 01000000b
#define TI_kbdDel 10000000b
#define TI_kbitGraph 0x00
#define TI_kbitTrace 0x01
#define TI_kbitZoom 0x02
#define TI_kbitWindow 0x03
#define TI_kbitYequ 0x04
#define TI_kbit2nd 0x05
#define TI_kbitMode 0x06
#define TI_kbitDel 0x07
#define TI_kbdG2 0x0F50014
// ----------------------------
#define TI_kbdStore 00000010b
#define TI_kbdLn 00000100b
#define TI_kbdLog 00001000b
#define TI_kbdSquare 00010000b
#define TI_kbdRecip 00100000b
#define TI_kbdMath 01000000b
#define TI_kbdAlpha 10000000b
#define TI_kbitStore 0x01
#define TI_kbitLn 0x02
#define TI_kbitLog 0x03
#define TI_kbitSquare 0x04
#define TI_kbitRecip 0x05
#define TI_kbitMath 0x06
#define TI_kbitAlpha 0x07
#define TI_kbdG3 0x0F50016
// ----------------------------
#define TI_kbd0 00000001b
#define TI_kbd1 00000010b
#define TI_kbd4 00000100b
#define TI_kbd7 00001000b
#define TI_kbdComma 00010000b
#define TI_kbdSin 00100000b
#define TI_kbdApps 01000000b
#define TI_kbdGraphVar 10000000b
#define TI_kbit0 0x00
#define TI_kbit1 0x01
#define TI_kbit4 0x02
#define TI_kbit7 0x03
#define TI_kbitComma 0x04
#define TI_kbitSin 0x05
#define TI_kbitApps 0x06
#define TI_kbitGraphVar 0x07
#define TI_kbdG4 0x0F50018
// ----------------------------
#define TI_kbdDecPnt 00000001b
#define TI_kbd2 00000010b
#define TI_kbd5 00000100b
#define TI_kbd8 00001000b
#define TI_kbdLParen 00010000b
#define TI_kbdCos 00100000b
#define TI_kbdPgrm 01000000b
#define TI_kbdStat 10000000b
#define TI_kbitDecPnt 0x00
#define TI_kbit2 0x01
#define TI_kbit5 0x02
#define TI_kbit8 0x03
#define TI_kbitLParen 0x04
#define TI_kbitCos 0x05
#define TI_kbitPgrm 0x06
#define TI_kbitStat 0x07
#define TI_kbdG5 0x0F5001A
// ----------------------------
#define TI_kbdChs 00000001b
#define TI_kbd3 00000010b
#define TI_kbd6 00000100b
#define TI_kbd9 00001000b
#define TI_kbdRParen 00010000b
#define TI_kbdTan 00100000b
#define TI_kbdVars 01000000b
#define TI_kbitChs 0x00
#define TI_kbit3 0x01
#define TI_kbit6 0x02
#define TI_kbit9 0x03
#define TI_kbitRParen 0x04
#define TI_kbitTan 0x05
#define TI_kbitVars 0x06
#define TI_kbdG6 0x0F5001C
// ----------------------------
#define TI_kbdEnter 00000001b
#define TI_kbdAdd 00000010b
#define TI_kbdSub 00000100b
#define TI_kbdMul 00001000b
#define TI_kbdDiv 00010000b
#define TI_kbdPower 00100000b
#define TI_kbdClear 01000000b
#define TI_kbitEnter 0x00
#define TI_kbitAdd 0x01
#define TI_kbitSub 0x02
#define TI_kbitMul 0x03
#define TI_kbitDiv 0x04
#define TI_kbitPower 0x05
#define TI_kbitClear 0x06
#define TI_kbdG7 0x0F5001E
// ----------------------------
#define TI_kbdDown 00000001b
#define TI_kbdLeft 00000010b
#define TI_kbdRight 00000100b
#define TI_kbdUp 00001000b
#define TI_kbitDown 0x00
#define TI_kbitLeft 0x01
#define TI_kbitRight 0x02
#define TI_kbitUp 0x03
// Tokens
// -----------------------------------------------------
#define TI_EOSSTART 0x00
// DISPLAY CONVERSIONS COME IMMEDIATELY BEFORE 'TSTORE'
// 
#define TI_DCONV 0x01
// 
#define TI_tToDMS DCONV  // 01h
#define TI_tToDEC (TI_DCONV + 1) // 02h
#define TI_tToAbc (TI_DCONV + 2) // 03h > A b/c
// 
#define TI_tStore (TI_DCONV + 3) // 04h Lstore 01
// 
#define TI_tBoxPlot 0x05
// 
#define TI_BRACKS 0x06
// 
#define TI_tLBrack BRACKS  // 06h '['
#define TI_tRBrack (TI_BRACKS + 1) // 07h ']'
#define TI_tLBrace (TI_BRACKS + 2) // 08h '{'
#define TI_tRBrace (TI_BRACKS + 3) // 09h '}'
// 
#define TI_tPOST1 (TI_BRACKS + 4)
// 
#define TI_tFromRad tPOST1  // 0Ah Lradian
#define TI_tFromDeg (TI_tPOST1 + 1) // 0Bh Ldegree
#define TI_tRecip (TI_tPOST1 + 2) // 0Ch Linverse
#define TI_tSqr (TI_tPOST1 + 3) // 0Dh Lsquare
#define TI_tTrnspos (TI_tPOST1 + 4) // 0Eh Ltranspose
#define TI_tCube (TI_tPOST1 + 5) // 0Fh ' xor 3'
// 
#define TI_tLParen 10h  // 10h '('
#define TI_tRParen 11h  // 11h ')'
// 
#define TI_IMUN 0x12
// 
#define TI_tRound IMUN  // 12h 'round'
#define TI_tPxTst (TI_IMUN + 1) // 13h 'PXL-TEST'
#define TI_tAug (TI_IMUN + 2) // 14h 'aug'
#define TI_tRowSwap (TI_IMUN + 3) // 15h 'rSwap'
#define TI_tRowPlus (TI_IMUN + 4) // 16h 'rAdd'
#define TI_tmRow (TI_IMUN + 5) // 17h 'multR'
#define TI_tmRowPlus (TI_IMUN + 6) // 18h 'mRAdd'
#define TI_tMax (TI_IMUN + 7) // 19h 'max'
#define TI_tMin (TI_IMUN + 8) // 1Ah 'min'
#define TI_tRToPr (TI_IMUN + 9) // 1Bh 'R>Pr
#define TI_tRToPo (TI_IMUN + 10) // 1Ch 'R>Po
#define TI_tPToRx (TI_IMUN + 11) // 1Dh 'P>Rx
#define TI_tPToRy (TI_IMUN + 12) // 1Eh 'P>Ry
#define TI_tMedian (TI_IMUN + 13) // 1Fh 'MEDIAN
#define TI_tRandM (TI_IMUN + 14) // 20h 'randM'
#define TI_tMean (TI_IMUN + 15) // 21h
#define TI_tRoot (TI_IMUN + 16) // 22h 'ROOT'
#define TI_tSeries (TI_IMUN + 17) // 23h 'seq'
#define TI_tFnInt (TI_IMUN + 18) // 24h 'fnInt'
#define TI_tNDeriv (TI_IMUN + 19) // 25h 'fnIr'
#define TI_tEvalF (TI_IMUN + 20) // 26h
#define TI_tFmin (TI_IMUN + 21) // 27h
#define TI_tFmax (TI_IMUN + 22) // 28h
// 
#define TI_tEOSEL (TI_IMUN + 23)
// 
#define TI_tSpace tEOSEL  // 29h ' '
#define TI_tString (TI_tEOSEL + 1) // 2Ah '"'
#define TI_tComma (TI_tEOSEL + 2) // 2Bh ','
// 
#define TI_tii 2Ch  // i
// Postfix Functions
// -----------------------------------------
#define TI_tPost 0x2D
// 
#define TI_tFact tPost  // 2Dh '!'
// 
#define TI_tCubicR 0x2E
#define TI_tQuartR 0x2F
// Number Tokens
// ---------------------------------------
#define TI_NUMS 0x30
// 
#define TI_t0 NUMS  // 30h
#define TI_t1 (TI_NUMS + 1) // 31h
#define TI_t2 (TI_NUMS + 2) // 32h
#define TI_t3 (TI_NUMS + 3) // 33h
#define TI_t4 (TI_NUMS + 4) // 34h
#define TI_t5 (TI_NUMS + 5) // 35h
#define TI_t6 (TI_NUMS + 6) // 36h
#define TI_t7 (TI_NUMS + 7) // 37h
#define TI_t8 (TI_NUMS + 8) // 38h
#define TI_t9 (TI_NUMS + 9) // 39h
#define TI_tDecPt (TI_NUMS + 10) // 3Ah
#define TI_tee (TI_NUMS + 11) // 3Bh
// Binary OP
// -------------------------------------------
#define TI_tOr 3Ch  // 3Ch '_or_'
#define TI_tXor 3Dh  // 3Dh
// 
#define TI_tColon 3Eh  // 3Eh ':'
#define TI_tEnter 3Fh  // 3Fh Lenter
// 
#define TI_tAnd 40h  // 40h '_and_'
// Letter Tokens
// --------------------------------------
#define TI_LET 0x41
#define TI_tA LET  // 41h
#define TI_tB (TI_LET + 1) // 42h
#define TI_tC (TI_LET + 2) // 43h
#define TI_tD (TI_LET + 3) // 44h
#define TI_tE (TI_LET + 4) // 45h
#define TI_tF (TI_LET + 5) // 46h
#define TI_tG (TI_LET + 6) // 47h
#define TI_tH (TI_LET + 7) // 48h
#define TI_tI (TI_LET + 8) // 49h
#define TI_tJ (TI_LET + 9) // 4Ah
#define TI_tK (TI_LET + 10) // 4Bh
#define TI_tL (TI_LET + 11) // 4Ch
#define TI_tM (TI_LET + 12) // 4Dh
#define TI_tN (TI_LET + 13) // 4Eh
#define TI_tO (TI_LET + 14) // 4Fh
#define TI_tP (TI_LET + 15) // 50h
#define TI_tQ (TI_LET + 16) // 51h
#define TI_tR (TI_LET + 17) // 52h
#define TI_tS (TI_LET + 18) // 53h
#define TI_tT (TI_LET + 19) // 54h
#define TI_tU (TI_LET + 20) // 55h
#define TI_tV (TI_LET + 21) // 56h
#define TI_tW (TI_LET + 22) // 57h
#define TI_tX (TI_LET + 23) // 58h
#define TI_tY (TI_LET + 24) // 59h
#define TI_tZ (TI_LET + 25) // 5Ah
#define TI_tTheta (TI_LET + 26) // 5Bh
//  Extended Tokens
// ---------------------------
#define TI_tExtTok 0x0EF
#define TI_tSetDate 0x00
#define TI_tSetTime 0x01
#define TI_tCheckTmr 0x02
#define TI_tSetDtFmt 0x03
#define TI_tSetTmFmt 0x04
#define TI_tTimeCnv 0x05
#define TI_tDayOfWk 0x06
#define TI_tGetDtStr 0x07
#define TI_tGetTmStr 0x08
#define TI_tGetDate 0x09
#define TI_tGetTime 0x0A
#define TI_tStartTmr 0x0B
#define TI_tGtDtFmt 0x0C
#define TI_tGetTmFmt 0x0D
#define TI_tIsClockOn 0x0E
#define TI_tClockOff 0x0F
#define TI_tClockOn 0x10
#define TI_tOpenLib 0x11
#define TI_tExecLib 0x12
#define TI_tInvT 0x13
#define TI_tChiSquaredGofTest 0x14
#define TI_tLinRegTInt 0x15
#define TI_tManualFit 0x16
//  MathPrint
#define TI_tZQuadrant 0x17
#define TI_tZFracHalf 0x18
#define TI_tZFracThird 0x19
#define TI_tZFracFourth 0x1A
#define TI_tZFracFifth 0x1B
#define TI_tZFracEighth 0x1C
#define TI_tZFracTenth 0x1D
#define TI_tFracSlash 0x2E
#define TI_tFracMixedNum 0x2F
#define TI_tSwapImProper 0x30
#define TI_tSwapFracDec 0x31
#define TI_tRemainder 0x32
#define TI_tSummationSigma 0x33
#define TI_tLogBase 0x34
#define TI_tRandIntNoRep 0x35
#define TI_tMathPrint 0x37
#define TI_tClassic 0x38
#define TI_tAutoAnswer 0x3B
#define TI_tDecAnswer 0x3C
#define TI_tFracAnswer 0x3D
//  TI-84+CSE/CE
#define TI_tBlue 0x41
#define TI_tRed 0x42
#define TI_tBlack 0x43
#define TI_tMagenta 0x44
#define TI_tGreen 0x45
#define TI_tOrange 0x46
#define TI_tBrown 0x47
#define TI_tNavy 0x48
#define TI_tLtBlue 0x49
#define TI_tYellow 0x4A
#define TI_tWhite 0x4B
#define TI_tLtGray 0x4C
#define TI_tMedGray 0x4D
#define TI_tGray 0x4E
#define TI_tDarkGray 0x4F
#define TI_tGraphColor 0x65
#define TI_tTextColor 0x67
#define TI_tBackgroundOn 0x5B
#define TI_tBackgroundOff 0x64
#define TI_tThin 0x74
// tThick - 0x7E 0x06 (was "Connected"?)
#define TI_tAsm84CPrgm 0x68
#define TI_tAsm84CCmp 0x69
#define TI_tBorderColor 0x6C
#define TI_tAsm84CeCmp 0x07B
#define TI_tAsm84CePrgm 0x07A
//  OS 5.2+ only
#define TI_tLEFT 0x92
#define TI_tCENTER 0x93
#define TI_tRIGHT 0x94
#define TI_tInvBinom 0x95
#define TI_tWait 0x96
#define TI_tToString 0x97
#define TI_tEval 0x98
// These Var Tokens Are 1st Of A Double Token
// -----------------------------------------------
#define TI_vToks (TI_LET + 27)
// User Matrix Token, 2nd Token Needed For Name
// 
#define TI_tVarMat vToks  // 5Ch
// 
// User List Token, 2nd Token Needed For Name
// 
#define TI_tVarLst (TI_vToks + 1) // 5Dh
// 
// User Equation Token, 2nd Token Needed For Name
// 
#define TI_tVarequ (TI_vToks + 2) // 5Eh
#define TI_tProg (TI_vToks + 3) // 5Fh
// 
// User Pict Token, 2nd Token Needed For Name
// 
#define TI_tVarPict (TI_vToks + 4) // 60h
// 
// User GDB Token, 2nd Token Needed For Name
// 
#define TI_tVarGDB (TI_vToks + 5) // 61h
#define TI_tVarOut (TI_vToks + 6) // 62h
#define TI_tVarSys (TI_vToks + 7) // 63h
// Mode Setting Commands
// -------------------------------------------------
#define TI_MODESA (TI_vToks + 8) // 64h
#define TI_tRad MODESA  // 64h 'Radian'
#define TI_tDeg (TI_MODESA + 1) // 65h 'Degree'
#define TI_tNormF (TI_MODESA + 2) // 66h 'Normal'
#define TI_tSci (TI_MODESA + 3) // 67h 'Sci'
#define TI_tEng (TI_MODESA + 4) // 68h 'Eng'
#define TI_tFloat (TI_MODESA + 5) // 69h 'Float'
#define TI_CMPS 0x6A
#define TI_tEQ CMPS  // 6Ah '=='
#define TI_tLT (TI_CMPS + 1) // 6Bh '<'
#define TI_tGT (TI_CMPS + 2) // 6Ch '>'
#define TI_tLE (TI_CMPS + 3) // 6Dh LLE
#define TI_tGE (TI_CMPS + 4) // 6Eh LGE
#define TI_tNE (TI_CMPS + 5) // 6Fh LNE
// Binary OP
// ---------------------------------------
#define TI_tAdd 70h  // 70h '+'
#define TI_tSub 71h  // 71h '-'
#define TI_tAns 72h  // 72h
// Mode Setting Commands
// ------------------------------------------------------
#define TI_MODES 0x73
#define TI_tFix MODES  // 73h 'Fix_'
#define TI_tSplitOn (TI_MODES + 1) // 74h
#define TI_tFullScreen (TI_MODES + 2) // 75h
#define TI_tStndrd (TI_MODES + 3) // 76h 'Func'
#define TI_tParam (TI_MODES + 4) // 77h 'Param'
#define TI_tPolar (TI_MODES + 5) // 78h 'Pol'
#define TI_tSeqG (TI_MODES + 6) // 79h
#define TI_tAFillOn (TI_MODES + 7) // 7Ah 'AUTO FILL ON'
#define TI_tAFillOff (TI_MODES + 8) // 7Bh
#define TI_tACalcOn (TI_MODES + 9) // 7Ch
#define TI_tACalcOff (TI_MODES + 10) // 7Dh 'AutoFill OFF'
// Graph Format Tokens Are 2 Byte Tokens
// ----------------------------------------
#define TI_tGFormat (TI_MODES + 11) // 7Eh
#define TI_tBoxIcon 0x7F
#define TI_tCrossIcon 0x80
#define TI_tDotIcon 0x81
// (More) Binary OP
// ---------------------------------------
#define TI_tMul 82h  // 82h '*'
#define TI_tDiv 83h  // 83h '/'
// Some Graph Commands
// -----------------------------------------------------
#define TI_GRCMDS 0x84
#define TI_tTrace GRCMDS  //  84h 'Trace'
#define TI_tClDrw (TI_GRCMDS + 1) //  85h 'ClDrw'
#define TI_tZoomStd (TI_GRCMDS + 2) //  86h 'ZStd'
#define TI_tZoomtrg (TI_GRCMDS + 3) //  87h 'Ztrg'
#define TI_tZoomBox (TI_GRCMDS + 4) //  88h 'ZBOX'
#define TI_tZoomIn (TI_GRCMDS + 5) //  89h 'ZIn'
#define TI_tZoomOut (TI_GRCMDS + 6) //  8Ah 'ZOut'
#define TI_tZoomSqr (TI_GRCMDS + 7) //  8Bh 'ZSqr'
#define TI_tZoomInt (TI_GRCMDS + 8) //  8Ch 'ZInt'
#define TI_tZoomPrev (TI_GRCMDS + 9) //  8Dh 'ZPrev'
#define TI_tZoomDec (TI_GRCMDS + 10) //  8Eh 'ZDecm'
#define TI_tZoomStat (TI_GRCMDS + 11) //  8Fh 'ZStat
#define TI_tUsrZm (TI_GRCMDS + 12) //  90h 'ZRcl'
#define TI_tPrtScrn (TI_GRCMDS + 13) //  91h 'PrtScrn'
#define TI_tZoomSto (TI_GRCMDS + 14) //  92h  ZOOM STORE
#define TI_tText (TI_GRCMDS + 15) //  93h
// Binary OP (Combination and Permutation)
// -------------------------------------------------
#define TI_tnPr (TI_GRCMDS + 16) // 94h '_nPr_'
#define TI_tnCr (TI_GRCMDS + 17) // 95h '_nCr_'
// More Graph Commands
// --------------------------------------------------
#define TI_tYOn (TI_GRCMDS + 18) // 96h 'FnOn_'
#define TI_tYOff (TI_GRCMDS + 19) // 97h 'FnOff_'
#define TI_tStPic (TI_GRCMDS + 20) // 98h 'StPic_'
#define TI_tRcPic (TI_GRCMDS + 21) // 99h 'RcPic_'
#define TI_tStoDB (TI_GRCMDS + 22) // 9Ah 'StGDB_'
#define TI_tRclDB (TI_GRCMDS + 23) // 9Bh 'RcGDB_'
#define TI_tLine (TI_GRCMDS + 24) // 9Ch 'Line'
#define TI_tVert (TI_GRCMDS + 25) // 9Dh 'Vert_'
#define TI_tPtOn (TI_GRCMDS + 26) // 9Eh 'PtOn'
#define TI_tPtOff (TI_GRCMDS + 27) // 9Fh 'PtOff'
// Token A0 Cannot Be An EOS Function Since Low MULT=A0 Already
// -----------------------------------------------------
#define TI_tPtChg (TI_GRCMDS + 28) // A0h 'PtChg'
#define TI_tPXOn (TI_GRCMDS + 29) // A1h
#define TI_tPXOff (TI_GRCMDS + 30) // A2h
#define TI_tPXChg (TI_GRCMDS + 31) // A3h
#define TI_tShade (TI_GRCMDS + 32) // A4h 'Shade'
#define TI_tCircl (TI_GRCMDS + 33) // A5h 'Circl'
#define TI_tHorz (TI_GRCMDS + 34) // A6h 'HORIZONTAL'
#define TI_tTanLn (TI_GRCMDS + 35) // A7h 'TanLn'
#define TI_tDrInv (TI_GRCMDS + 36) // A8h 'DrInv_'
#define TI_tDrawF (TI_GRCMDS + 37) // A9h 'DrawF_'
#define TI_tVarStrng 0x0AA
// Functions with No Arguments
// --------------------------------------------------
#define TI_NOARG 0x0AB
#define TI_tRand NOARG  // ABh 'rand'
#define TI_tPi (TI_NOARG + 1) // ACh  Lpi
#define TI_tGetKey (TI_NOARG + 2) // ADh 'getKy'
#define TI_tAPost (TI_tGetKey + 1) // APOSTROPHY
#define TI_tQuest (TI_tAPost + 1) // QUESTION MARK
#define TI_UNARY (TI_tQuest + 1) // B0h
#define TI_tChs UNARY  // B0h
#define TI_tInt (TI_UNARY + 1) // B1h
#define TI_tAbs (TI_UNARY + 2) // B2h
#define TI_tDet (TI_UNARY + 3) // B3h
#define TI_tIdent (TI_UNARY + 4) // B4h
#define TI_tDim (TI_UNARY + 5) // B5h
#define TI_tSum (TI_UNARY + 6) // B6h
#define TI_tProd (TI_UNARY + 7) // B7h
#define TI_tNot (TI_UNARY + 8) // B8h
#define TI_tIPart (TI_UNARY + 9) // B9h
#define TI_tFPart (TI_UNARY + 10) // BAh
// New 2 Byte Tokens
// ------------------------------------------
#define TI_t2ByteTok 0x0BB
#define TI_UNARYLR (TI_UNARY + 12)
#define TI_tSqrt UNARYLR  // BCh
#define TI_tCubRt (TI_UNARYLR + 1) // BDh
#define TI_tLn (TI_UNARYLR + 2) // BEh
#define TI_tExp (TI_UNARYLR + 3) // BFh
#define TI_tLog (TI_UNARYLR + 4) // C0h
#define TI_tALog (TI_UNARYLR + 5) // C1h
#define TI_tSin (TI_UNARYLR + 6) // C2h
#define TI_tASin (TI_UNARYLR + 7) // C3h
#define TI_tCos (TI_UNARYLR + 8) // C4h
#define TI_tACos (TI_UNARYLR + 9) // C5h
#define TI_tTan (TI_UNARYLR + 10) // C6h
#define TI_tATan (TI_UNARYLR + 11) // C7h
#define TI_tSinH (TI_UNARYLR + 12) // C8h
#define TI_tASinH (TI_UNARYLR + 13) // C9h
#define TI_tCoshH (TI_UNARYLR + 14) // CAh
#define TI_tACosH (TI_UNARYLR + 15) // CBh
#define TI_tTanH (TI_UNARYLR + 16) // CCh
#define TI_tATanH (TI_UNARYLR + 17) // CDh
// Some Programming Commands
// ---------------------------------------------------
#define TI_PROGTOK (TI_UNARYLR + 18)
#define TI_tIf PROGTOK  // CEh
#define TI_tThen (TI_PROGTOK + 1) // CFh
#define TI_tElse (TI_PROGTOK + 2) // D0h
#define TI_tWhile (TI_PROGTOK + 3) // D1h
#define TI_tRepeat (TI_PROGTOK + 4) // D2h
#define TI_tFor (TI_PROGTOK + 5) // D3h
#define TI_tEnd (TI_PROGTOK + 6) // D4h
#define TI_tReturn (TI_PROGTOK + 7) // D5h
#define TI_tLbl (TI_PROGTOK + 8) // D6h 'Lbl_'
#define TI_tGoto (TI_PROGTOK + 9) // D7h 'Goto_'
#define TI_tPause (TI_PROGTOK + 10) // D8h 'Pause_'
#define TI_tStop (TI_PROGTOK + 11) // D9h 'Stop'
#define TI_tISG (TI_PROGTOK + 12) // DAh 'IS>'
#define TI_tDSL (TI_PROGTOK + 13) // DBh 'DS<'
#define TI_tInput (TI_PROGTOK + 14) // DCh 'Input_'
#define TI_tPrompt (TI_PROGTOK + 15) // DDh 'Prompt_'
#define TI_tDisp (TI_PROGTOK + 16) // DEh 'Disp_'
#define TI_tDispG (TI_PROGTOK + 17) // DFh 'DispG'
#define TI_tOutput (TI_PROGTOK + 18) // E0h 'Outpt'
#define TI_tClLCD (TI_PROGTOK + 19) // E1h 'ClLCD'
#define TI_tConst (TI_PROGTOK + 20) // E2h 'Fill'
#define TI_tSortA (TI_PROGTOK + 21) // E3h 'sortA_'
#define TI_tSortD (TI_PROGTOK + 22) // E4h 'sortD_'
#define TI_tDispTab (TI_PROGTOK + 23) // E5h 'Disp Table
#define TI_tMenu (TI_PROGTOK + 24) // E6h 'Menu'
#define TI_tSendMBL (TI_PROGTOK + 25) // E7h 'SEND'
#define TI_tGetMBL (TI_PROGTOK + 26) // E8h 'GET'
// Stat Plot Commands
// -----------------------------------------------------
#define TI_statPCmd (TI_PROGTOK + 27)
#define TI_tPlotOn statPCmd  // E9h ' PLOTSON'
#define TI_tPlotOff (TI_statPCmd + 1) // EAh ' PLOTSOFF
#define TI_tListName 0EBh  // LIST DESignATOR
#define TI_tPlot1 0x0EC
#define TI_tPlot2 0x0ED
#define TI_tPlot3 0x0EE
#define TI_tUnused01 0EFh  // available?
#define TI_tPower 0F0h  // ' xor '
#define TI_tXRoot 0F1h  // LsupX,Lroot
#define TI_STATCMD 0x0F2
#define TI_tOneVar STATCMD  // F2h 'OneVar_'
#define TI_tTwoVar (TI_STATCMD + 1) // F3h
#define TI_tLR (TI_STATCMD + 2) // F4h 'LinR(A+BX
#define TI_tLRExp (TI_STATCMD + 3) // F5h 'ExpR_'
#define TI_tLRLn (TI_STATCMD + 4) // F6h 'LnR_'
#define TI_tLRPwr (TI_STATCMD + 5) // F7h 'PwrR_'
#define TI_tMedMed (TI_STATCMD + 6) // F8h
#define TI_tQuad (TI_STATCMD + 7) // F9h
#define TI_tClrLst (TI_STATCMD + 8) // FAh 'CLEAR LIST
#define TI_tClrTbl (TI_STATCMD + 9) // FBh CLEAR TABLE
#define TI_tHist (TI_STATCMD + 10) // FCh 'Hist_'
#define TI_txyLine (TI_STATCMD + 11) // FDh 'xyline_'
#define TI_tScatter (TI_STATCMD + 12) // FEh 'Scatter_'
#define TI_tLR1 (TI_STATCMD + 13) // FFh 'LINR(AX+B
// 2nd Half Of Graph Format Tokens
// Format settings commands
// ---------------------------------------------
#define TI_GFMT 0x00
#define TI_tSeq GFMT  //  'SeqG'
#define TI_tSimulG (TI_GFMT + 1) //  'SimulG'
#define TI_tPolarG (TI_GFMT + 2) //  'PolarGC'
#define TI_tRectG (TI_GFMT + 3) //  'RectGC'
#define TI_tCoordOn (TI_GFMT + 4) //  'CoordOn'
#define TI_tCoordOff (TI_GFMT + 5) //  'CoordOff'
#define TI_tDrawLine (TI_GFMT + 6) //  'DrawLine'
#define TI_tDrawDot (TI_GFMT + 7) //  'DrawDot'
#define TI_tAxisOn (TI_GFMT + 8) //  'AxesOn'
#define TI_tAxisOff (TI_GFMT + 9) //  'AxesOff'
#define TI_tGridOn (TI_GFMT + 10) //  'GridOn'
#define TI_tGridOff (TI_GFMT + 11) //  'GridOff'
#define TI_tLblOn (TI_GFMT + 12) //  'LabelOn'
#define TI_tLblOff (TI_GFMT + 13) //  'LabelOff'
#define TI_tWebOn (TI_GFMT + 14) //  'WebOn'
#define TI_tWebOff (TI_GFMT + 15) //  'WebOFF'
#define TI_tuv (TI_GFMT + 16) //  U vs V
#define TI_tvw (TI_GFMT + 17) //  V vs W
#define TI_tuw (TI_GFMT + 18) //  U vs W
// 2nd Half Of User Matrix Tokens
// -------------------------------------
#define TI_tMatA 00h  // MAT A
#define TI_tMatB 01h  // MAT B
#define TI_tMatC 02h  // MAT C
#define TI_tMatD 03h  // MAT D
#define TI_tMatE 04h  // MAT E
#define TI_tMatF 05h  // MAT F
#define TI_tMatG 06h  // MAT G
#define TI_tMatH 07h  // MAT H
#define TI_tMatI 08h  // MAT I
#define TI_tMatJ 09h  // MAT J
// 2nd Half Of User List Tokens
// --------------------------------------
#define TI_tL1 00h  // LIST 1
#define TI_tL2 01h  // LIST 2
#define TI_tL3 02h  // LIST 3
#define TI_tL4 03h  // LIST 4
#define TI_tL5 04h  // LIST 5
#define TI_tL6 05h  // LIST 6
// 2nd Half Of User Equation Tokens
// ----------------------------------
//   "Y" EQUATIONS HAVE BIT 4 SET
// 
#define TI_tY1 10h  // Y1
#define TI_tY2 11h  // Y2
#define TI_tY3 12h  // Y3
#define TI_tY4 13h  // Y4
#define TI_tY5 14h  // Y5
#define TI_tY6 15h  // Y6
#define TI_tY7 16h  // Y7
#define TI_tY8 17h  // Y8
#define TI_tY9 18h  // Y9
#define TI_tY0 19h  // Y0
// Param Equations Have Bit 5 Set
// -----------------------------------
#define TI_tX1T 20h  // X1t
#define TI_tY1T 21h  // Y1t
#define TI_tX2T 22h  // X2t
#define TI_tY2T 23h  // Y2t
#define TI_tX3T 24h  // X3t
#define TI_tY3T 25h  // Y3t
#define TI_tX4T 26h  // X4t
#define TI_tY4T 27h  // Y4t
#define TI_tX5T 28h  // X5t
#define TI_tY5T 29h  // Y5t
#define TI_tX6T 2Ah  // X6t
#define TI_tY6T 2Bh  // Y6t
// Polar Equations Have Bit 6 Set
// ----------------------------------
#define TI_tR1 40h  // R1
#define TI_tR2 41h  // R2
#define TI_tR3 42h  // R3
#define TI_tR4 43h  // R4
#define TI_tR5 44h  // R5
#define TI_tR6 45h  // R6
// Recursion Equations Have Bit 7 Set
// ----------------------------------
#define TI_tun 80h  // Un
#define TI_tvn 81h  // Vn
#define TI_twn 82h  // Wn
// 2nd Half User Picture Tokens
// ------------------------------------
#define TI_tPic1 00h  // PIC1
#define TI_tPic2 01h  // PIC2
#define TI_tPic3 02h  // PIC3
#define TI_tPic4 03h  // PIC4
#define TI_tPic5 04h  // PIC5
#define TI_tPic6 05h  // PIC6
#define TI_tPic7 06h  // PIC7
#define TI_tPic8 07h  // PIC8
#define TI_tPic9 08h  // PIC9
#define TI_tPic0 09h  // PIC0
// 2nd Half User Graph Database Tokens
// ------------------------------------
#define TI_tGDB1 00h  // GDB1
#define TI_tGDB2 01h  // GDB2
#define TI_tGDB3 02h  // GDB3
#define TI_tGDB4 03h  // GDB4
#define TI_tGDB5 04h  // GDB5
#define TI_tGDB6 05h  // GDB6
#define TI_tGDB7 06h  // GDB7
#define TI_tGDB8 07h  // GDB8
#define TI_tGDB9 08h  // GDB9
#define TI_tGDB0 09h  // GDB0
// 2nd Half Of String Vars
// ------------------------------
#define TI_tStr1 0x00
#define TI_tStr2 0x01
#define TI_tStr3 0x02
#define TI_tStr4 0x03
#define TI_tStr5 0x04
#define TI_tStr6 0x05
#define TI_tStr7 0x06
#define TI_tStr8 0x07
#define TI_tStr9 0x08
#define TI_tStr0 0x09
// 2nd Half Of System Output Only Variables
// ----------------------------------------------------------------
// OPEN			equ 00h
#define TI_tRegEq 01h  // REGRESSION EQUATION
#define TI_tStatN 02h  // STATISTICS N
#define TI_tXMean 03h  // X MEAN
#define TI_tSumX 04h  // SUM(X)
#define TI_tSumXSqr 05h  // SUM(X xor 2)
#define TI_tStdX 06h  // STANDARD DEV X
#define TI_tStdPX 07h  // STANDARD DEV POP X
#define TI_tMinX 08h  // Min X VALUE
#define TI_tMaxX 09h  // Max X VALUE
#define TI_tMinY 0Ah  // Min Y VALUE
#define TI_tMaxY 0Bh  // Max Y VALUE
#define TI_tYmean 0Ch  // Y MEAN
#define TI_tSumY 0Dh  // SUM(Y)
#define TI_tSumYSqr 0Eh  // SUM(Y xor 2)
#define TI_tStdY 0Fh  // STANDARD DEV Y
#define TI_tStdPY 10h  // STANDARD DEV POP Y
#define TI_tSumXY 11h  // SUM(XY)
#define TI_tCorr 12h  // CORRELATION
#define TI_tMedX 13h  // MED(X)
#define TI_tQ1 14h  // 1ST QUADRANT OF X
#define TI_tQ3 15h  // 3RD QUADRANT OF X
#define TI_tQuadA 16h  // 1ST TERM OF QUAD POLY REG/ Y-INT
#define TI_tQuadB 17h  // 2ND TERM OF QUAD POLY REG/ SLOPE
#define TI_tQuadC 18h  // 3RD TERM OF QUAD POLY REG
#define TI_tCubeD 19h  // 4TH TERM OF CUBIC POLY REG
#define TI_tQuartE 1Ah  // 5TH TERM OF QUART POLY REG
#define TI_tMedX1 1Bh  // x1 FOR MED-MED
#define TI_tMedX2 1Ch  // x2 FOR MED-MED
#define TI_tMedX3 1Dh  // x3 FOR MED-MED
#define TI_tMedY1 1Eh  // y1 FOR MED-MED
#define TI_tMedY2 1Fh  // y2 FOR MED-MED
#define TI_tMedY3 20h  // y3 FOR MED-MED
#define TI_tRecurn 21h	 // RECURSION N
#define TI_tStatP 0x22
#define TI_tStatZ 0x23
#define TI_tStatT 0x24
#define TI_tStatChi 0x25
#define TI_tStatF 0x26
#define TI_tStatDF 0x27
#define TI_tStatPhat 0x28
#define TI_tStatPhat1 0x29
#define TI_tStatPhat2 0x2A
#define TI_tStatMeanX1 0x2B
#define TI_tStatStdX1 0x2C
#define TI_tStatN1 0x2D
#define TI_tStatMeanX2 0x2E
#define TI_tStatStdX2 0x2F
#define TI_tStatN2 0x30
#define TI_tStatStdXP 0x31
#define TI_tStatLower 0x32
#define TI_tStatUpper 0x33
#define TI_tStat_s 0x34
#define TI_tLRSqr 35h  // r xor 2
#define TI_tBRSqr 36h  // R xor 2
// These next tokens are only used to access the data
// they are display only and the user cannot access them at all
// ------------------------------------------------------------
#define TI_tF_DF 37h  // ANOFAV FACTOR DF
#define TI_tF_SS 38h  // ANOFAV FACTOR SS
#define TI_tF_MS 39h  // ANOFAV FACTOR MS
#define TI_tE_DF 3Ah  // ANOFAV ERROR DF
#define TI_tE_SS 3Bh  // ANOFAV ERROR SS
#define TI_tE_MS 3Ch  // ANOFAV ERROR MS
// 2nd Half Of System Input/Output Variables
// ------------------------------------------------
// 		SYSTEM VARIABLE EQUATES
// 
#define TI_tuXscl 0
#define TI_tuYscl 1
#define TI_tXscl 2
#define TI_tYscl 3
#define TI_tRecuru0 4  // U 1ST INITIAL COND
#define TI_tRecurv0 5  // V 1ST INITIAL COND
#define TI_tun1 6  // U(N-1); NOT USED
#define TI_tvn1 7  // V(N-1); NOT USED
#define TI_tuRecuru0 8  // 
#define TI_tuRecurv0 9  // 
#define TI_tXmin 0x0A
#define TI_tXmax 0x0B
#define TI_tYmin 0x0C
#define TI_tYmax 0x0D
#define TI_tTmin 0x0E
#define TI_tTmax 0x0F
#define TI_tThetaMin 0x10
#define TI_tThetaMax 0x11
#define TI_tuXmin 0x12
#define TI_tuXmax 0x13
#define TI_tuYmin 0x14
#define TI_tuYmax 0x15
#define TI_tuThetMin 0x16
#define TI_tuThetMax 0x17
#define TI_tuTmin 0x18
#define TI_tuTmax 0x19
#define TI_tTblMin 0x1A
#define TI_tPlotStart 0x1B
#define TI_tuPlotStart 0x1C
#define TI_tnMax 0x1D
#define TI_tunMax 0x1E
#define TI_tnMin 0x1F
#define TI_tunMin 0x20
#define TI_tTblStep 0x21
#define TI_tTStep 0x22
#define TI_tThetaStep 0x23
#define TI_tuTStep 0x24
#define TI_tuThetStep 0x25
#define TI_tDeltaX 0x26
#define TI_tDeltaY 0x27
#define TI_tXFact 0x28
#define TI_tYFact 0x29
#define TI_tTblInput 0x2A
#define TI_tFinN 0x2B
#define TI_tFinI 0x2C
#define TI_tFinPV 0x2D
#define TI_tFinPMT 0x2E
#define TI_tFinFV 0x2F
#define TI_tFinPY 0x30
#define TI_tFinCY 0x31
#define TI_tRecurw0 32h  // w0(1)
#define TI_tuRecurw0 0x33
#define TI_tPlotStep 0x34
#define TI_tuPlotStep 0x35
#define TI_tXres 0x36
#define TI_tuXres 0x37
#define TI_tRecuru02 38h  // u0(2)
#define TI_tuRecuru02 0x39
#define TI_tRecurv02 3Ch  // v0(2)
#define TI_tuRecurv02 0x3D
#define TI_tRecurw02 3Eh  // w0(2)
#define TI_tuRecurw02 0x3F
// 2nd Byte Of t2ByteTok Tokens
// ------------------------------
#define TI_tFinNPV 0x00
#define TI_tFinIRR 0x01
#define TI_tFinBAL 0x02
#define TI_tFinPRN 0x03
#define TI_tFinINT 0x04
#define TI_tFinToNom 0x05
#define TI_tFinToEff 0x06
#define TI_tFinDBD 0x07
#define TI_tLCM 0x08
#define TI_tGCD 0x09
#define TI_tRandInt 0x0A
#define TI_tRandBin 0x0B
#define TI_tSubStrng 0x0C
#define TI_tStdDev 0x0D
#define TI_tVariance 0x0E
#define TI_tInStrng 0x0F
#define TI_tDNormal 0x10
#define TI_tInvNorm 0x11
#define TI_tDT 0x12
#define TI_tChI 0x13
#define TI_tDF 0x14
#define TI_tBINPDF 0x15
#define TI_tBINCDF 0x16
#define TI_tPOIPDF 0x17
#define TI_tPOICDF 0x18
#define TI_tGEOPDF 0x19
#define TI_tGEOCDF 0x1A
#define TI_tNormalPDF 0x1B
#define TI_tTPDF 0x1C
#define TI_tChiPDF 0x1D
#define TI_tFPDF 0x1E
#define TI_tRandNorm 0x1F
#define TI_tFinFPMT 0x20
#define TI_tFinFI 0x21
#define TI_tFinFPV 0x22
#define TI_tFinFN 0x23
#define TI_tFinFFV 0x24
#define TI_tConj 0x25
#define TI_tReal 0x26
#define TI_tImag 0x27
#define TI_tAngle 0x28
#define TI_tCumSum 0x29
#define TI_tExpr 0x2A
#define TI_tLength 0x2B
#define TI_tDeltaLst 0x2C
#define TI_tRef 0x2D
#define TI_tRRef 0x2E
#define TI_tToRect 0x2F
#define TI_tToPolar 0x30
#define TI_tConste 0x31
#define TI_tSinReg 0x32
#define TI_tLogistic 0x33
#define TI_tLinRegTTest 0x34
#define TI_tShadeNorm 0x35
#define TI_tShadeT 0x36
#define TI_tShadeChi 0x37
#define TI_tShadeF 0x38
#define TI_tMatToLst 0x39
#define TI_tLstToMat 0x3A
#define TI_tZTest 0x3B
#define TI_tTTest 0x3C
#define TI_t2SampZTest 0x3D
#define TI_t1PropZTest 0x3E
#define TI_t2PropZTest 0x3F
#define TI_tChiTest 0x40
#define TI_tZIntVal 0x41
#define TI_t2SampZInt 0x42
#define TI_t1PropZInt 0x43
#define TI_t2PropZInt 0x44
#define TI_tGraphStyle 0x45
#define TI_t2SampTTest 0x46
#define TI_t2SampFTest 0x47
#define TI_tTIntVal 0x48
#define TI_t2SampTInt 0x49
#define TI_tSetupLst 0x4A
#define TI_tFinPMTend 0x4B
#define TI_tFinPMTbeg 0x4C
#define TI_tRealM 0x4D
#define TI_tPolarM 0x4E
#define TI_tRectM 0x4F
#define TI_tExprOn 0x50
#define TI_tExprOff 0x51
#define TI_tClrAllLst 0x52
#define TI_tGetCalc 0x53
#define TI_tDelVar 0x54
#define TI_tEquToStrng 0x55
#define TI_tStrngToequ 0x56
#define TI_tDelLast 0x57
#define TI_tSelect 0x58
#define TI_tANOVA 0x59
#define TI_tModBox 0x5A
#define TI_tNormProb 0x5B
#define TI_tMGT 64h  // VERTICAL SPLIT
#define TI_tZFit 65h  // ZOOM FIT
#define TI_tDiag_on 66h  // DIANOSTIC DISPLAY ON
#define TI_tDiag_off 67h  // DIANOSTIC DISPLAY OFF
#define TI_tOkEnd2v0 67h  // end of 2byte tokens for version 0.
#define TI_tArchive 68h  // archive
#define TI_tUnarchive 69h  // unarchive
#define TI_tasm 0x6A
#define TI_tasmComp 6Bh	 // asm compile
#define TI_tasmPrgm 6Ch	 // Signifies a program is asm
#define TI_tasmCmp 6Dh	 // asm program is compiled
#define TI_tLcapAAcute 0x6E
#define TI_tLcapAGrave 0x6F
#define TI_tLcapACaret 0x70
#define TI_tLcapADier 0x71
#define TI_tLaAcute 0x72
#define TI_tLaGrave 0x73
#define TI_tLaCaret 0x74
#define TI_tLaDier 0x75
#define TI_tLcapEAcute 0x76
#define TI_tLcapEGrave 0x77
#define TI_tLcapECaret 0x78
#define TI_tLcapEDier 0x79
#define TI_tLeAcute 0x7A
#define TI_tLeGrave 0x7B
#define TI_tLeCaret 0x7C
#define TI_tLeDier 0x7D
#define TI_tLcapIGrave 0x7F
#define TI_tLcapICaret 0x80
#define TI_tLcapIDier 0x81
#define TI_tLiAcute 0x82
#define TI_tLiGrave 0x83
#define TI_tLiCaret 0x84
#define TI_tLiDier 0x85
#define TI_tLcapOAcute 0x86
#define TI_tLcapOGrave 0x87
#define TI_tLcapOCaret 0x88
#define TI_tLcapODier 0x89
#define TI_tLoAcute 0x8A
#define TI_tLoGrave 0x8B
#define TI_tLoCaret 0x8C
#define TI_tLoDier 0x8D
#define TI_tLcapUAcute 0x8E
#define TI_tLcapUGrave 0x8F
#define TI_tLcapUCaret 0x90
#define TI_tLcapUDier 0x91
#define TI_tLuAcute 0x92
#define TI_tLuGrave 0x93
#define TI_tLuCaret 0x94
#define TI_tLuDier 0x95
#define TI_tLcapCCed 0x96
#define TI_tLcCed 0x97
#define TI_tLcapNTilde 0x98
#define TI_tLnTilde 0x99
#define TI_tLaccent 0x9A
#define TI_tLgrave 0x9B
#define TI_tLdieresis 0x9C
#define TI_tLquesDown 0x9D
#define TI_tLexclamDown 0x9E
#define TI_tLalpha 0x9F
#define TI_tLbeta 0x0A0
#define TI_tLgamma 0x0A1
#define TI_tLcapDelta 0x0A2
#define TI_tLdelta 0x0A3
#define TI_tLepsilon 0x0A4
#define TI_tLlambda 0x0A5
#define TI_tLmu 0x0A6
#define TI_tLpi 0x0A7
#define TI_tLrho 0x0A8
#define TI_tLcapSigma 0x0A9
#define TI_tLphi 0x0AB
#define TI_tLcapOmega 0x0AC
#define TI_tLphat 0x0AD
#define TI_tLchi 0x0AE
#define TI_tLstatF 0x0AF
#define TI_tLa 0x0B0
#define TI_tLb 0x0B1
#define TI_tLc 0x0B2
#define TI_tLd 0x0B3
#define TI_tLsmalle 0x0B4
#define TI_tLf 0x0B5
#define TI_tLsmallg 0x0B6
#define TI_tLh 0x0B7
#define TI_tLi 0x0B8
#define TI_tLj 0x0B9
#define TI_tLk 0x0BA
#define TI_tLl 0x0BC
#define TI_tLm 0x0BD
#define TI_tLsmalln 0x0BE
#define TI_tLo 0x0BF
#define TI_tLp 0x0C0
#define TI_tLq 0x0C1
#define TI_tLsmallr 0x0C2
#define TI_tLs 0x0C3
#define TI_tLsmallt 0x0C4
#define TI_tLu 0x0C5
#define TI_tLv 0x0C6
#define TI_tLw 0x0C7
#define TI_tLx 0x0C8
#define TI_tLy 0x0C9
#define TI_tLz 0x0CA
#define TI_tLsigma 0x0CB
#define TI_tLtau 0x0CC
#define TI_tLcapIAcute 0x0CD
#define TI_tGarbagec 0x0CE
#define TI_LastToken 0CEh  // tLAST TOKEN IN THIS VERSION...
// Data Type Equates
// ---------------------------------------------------------------------
#define TI_RealObj 0
#define TI_ListObj 1
#define TI_MatObj 2
#define TI_EquObj 3
#define TI_StrngObj 4
#define TI_ProgObj 5
#define TI_ProtProgObj 6
#define TI_PictObj 7
#define TI_GDBObj 8
#define TI_UnknownObj 9
#define TI_UnknownEquObj 0x0A
#define TI_NewEquObj 0x0B
#define TI_CplxObj 0x0C
#define TI_CListObj 0x0D
#define TI_UndefObj 0x0E
#define TI_WindowObj 0x0F
#define TI_ZStoObj 0x10
#define TI_TblRngObj 0x11
#define TI_LCDObj 0x12
#define TI_BackupObj 0x13
#define TI_AppObj 14h	 // application, only used in menus/link
#define TI_AppVarObj 15h	 // application variable
#define TI_TempProgObj 16h  // program, home deletes when finished
#define TI_GroupObj 17h  // group.
// System Error Codes
// -----------------------------------------------------------
#define TI_E_EDITF 7  // allow re-entering application
#define TI_E_EDIT (1 << TI_E_EDITF)
#define TI_E_Mask 0x7F
#define TI_E_Overflow (1 + TI_E_EDIT)
#define TI_E_DivBy0 (2 + TI_E_EDIT)
#define TI_E_SingularMat (3 + TI_E_EDIT)
#define TI_E_Domain (4 + TI_E_EDIT)
#define TI_E_Increment (5 + TI_E_EDIT)
#define TI_E_Break (6 + TI_E_EDIT)
#define TI_E_NonReal (7 + TI_E_EDIT)
#define TI_E_Syntax (8 + TI_E_EDIT)
#define TI_E_DataType (9 + TI_E_EDIT)
#define TI_E_Argument (10 + TI_E_EDIT)
#define TI_E_DimMismatch (11 + TI_E_EDIT)
#define TI_E_Dimension (12 + TI_E_EDIT)
#define TI_E_Undefined (13 + TI_E_EDIT)
#define TI_E_Memory (14 + TI_E_EDIT) //  142
#define TI_E_Invalid (15 + TI_E_EDIT) //  143
#define TI_E_IllegalNest (16 + TI_E_EDIT) //  144
#define TI_E_Bound (17 + TI_E_EDIT) //  145
#define TI_E_GraphRange (18 + TI_E_EDIT) //  146
#define TI_E_Zoom (19 + TI_E_EDIT) //  147
#define TI_E_Label 20			 //  148
#define TI_E_Stat 21			 //  149
#define TI_E_Solver (22 + TI_E_EDIT)
#define TI_E_Singularity (23 + TI_E_EDIT)
#define TI_E_SignChange (24 + TI_E_EDIT)
#define TI_E_Iterations (25 + TI_E_EDIT)
#define TI_E_BadGuess (26 + TI_E_EDIT)
#define TI_E_StatPlo 27
#define TI_E_TolTooSmall (28 + TI_E_EDIT)
#define TI_E_Reserved (29 + TI_E_EDIT)
#define TI_E_Mode (30 + TI_E_EDIT)
#define TI_E_LnkErr (31 + TI_E_EDIT)
#define TI_E_LnkMemErr (32 + TI_E_EDIT)
#define TI_E_LnkTransErr (33 + TI_E_EDIT)
#define TI_E_LnkDupErr (34 + TI_E_EDIT)
#define TI_E_LnkMemFull (35 + TI_E_EDIT)
#define TI_E_Unknown (36 + TI_E_EDIT)
#define TI_E_Scale (37 + TI_E_EDIT)
#define TI_E_IdNotFound 38
#define TI_E_NoMode (39 + TI_E_EDIT)
#define TI_E_Validation 40
#define TI_E_Length (41 + TI_E_EDIT)
#define TI_E_Application (42 + TI_E_EDIT)
#define TI_E_AppErr1 (43 + TI_E_EDIT)
#define TI_E_AppErr2 (44 + TI_E_EDIT)
#define TI_E_ExpiredApp 45
#define TI_E_BadAdd 46
#define TI_E_Archived (47 + TI_E_EDIT)
#define TI_E_Version 48
#define TI_E_ArchFull 49
#define TI_E_Variable (50 + TI_E_EDIT)
#define TI_E_Duplicate (51 + TI_E_EDIT)
// System Variable Equates
// ------------------------------
#define TI_XSCLt 0x02
#define TI_YSCLt 0x03
#define TI_XMINt 0x0A
#define TI_XMAXt 0x0B
#define TI_YMINt 0x0C
#define TI_YMAXt 0x0D
#define TI_TMINt 0x0E
#define TI_TMAXt 0x0F
#define TI_THETMINt 0x10
#define TI_THETMAXt 0x11
#define TI_TBLMINt 0x1A
#define TI_PLOTSTARTt 0x1B
#define TI_NMAXt 0x1D
#define TI_NMINt 0x1F
#define TI_TBLSTEPt 0x21
#define TI_TSTEPt 0x22
#define TI_THETSTEPt 0x23
#define TI_DELTAXt 0x26
#define TI_DELTAYt 0x27
#define TI_XFACTt 0x28
#define TI_YFACTt 0x29
#define TI_FINNt 0x2B
#define TI_FINIt 0x2C
#define TI_FINPVt 0x2D
#define TI_FINPMTt 0x2E
#define TI_FINFVt 0x2F
#define TI_FINPYt 0x30
#define TI_FINCYt 0x31
#define TI_PLOTSTEPt 0x34
#define TI_XRESt 0x36
// Equates To RAM Locations For Stat Vars
// ----------------------------------------------------------------
#define TI_FPLEN 9  // Length of a floating-point number.
#define TI_StatN statVars
#define TI_XMean (TI_StatN + TI_FPLEN)
#define TI_SumX (TI_XMean + TI_FPLEN)
#define TI_SumXSqr (TI_SumX + TI_FPLEN)
#define TI_StdX (TI_SumXSqr + TI_FPLEN)
#define TI_StdPX (TI_StdX + TI_FPLEN)
#define TI_MinX (TI_StdPX + TI_FPLEN)
#define TI_MaxX (TI_MinX + TI_FPLEN)
#define TI_MinY (TI_MaxX + TI_FPLEN)
#define TI_MaxY (TI_MinY + TI_FPLEN)
#define TI_YMean (TI_MaxY + TI_FPLEN)
#define TI_SumY (TI_YMean + TI_FPLEN)
#define TI_SumYSqr (TI_SumY + TI_FPLEN)
#define TI_StdY (TI_SumYSqr + TI_FPLEN)
#define TI_StdPY (TI_StdY + TI_FPLEN)
#define TI_SumXY (TI_StdPY + TI_FPLEN)
#define TI_Corr (TI_SumXY + TI_FPLEN)
#define TI_MedX (TI_Corr + TI_FPLEN)
#define TI_Q1 (TI_MedX + TI_FPLEN)
#define TI_Q3 (TI_Q1 + TI_FPLEN)
#define TI_QuadA (TI_Q3 + TI_FPLEN)
#define TI_QuadB (TI_QuadA + TI_FPLEN)
#define TI_QuadC (TI_QuadB + TI_FPLEN)
#define TI_CubeD (TI_QuadC + TI_FPLEN)
#define TI_QuartE (TI_CubeD + TI_FPLEN)
#define TI_MedX1 (TI_QuartE + TI_FPLEN)
#define TI_MedX2 (TI_MedX1 + TI_FPLEN)
#define TI_MedX3 (TI_MedX2 + TI_FPLEN)
#define TI_MedY1 (TI_MedX3 + TI_FPLEN)
#define TI_MedY2 (TI_MedY1 + TI_FPLEN)
#define TI_MedY3 (TI_MedY2 + TI_FPLEN)
#define TI_PStat (TI_MedY3 + TI_(2*FPLEN))
#define TI_ZStat (TI_PStat + TI_FPLEN)
#define TI_TStat (TI_ZStat + TI_FPLEN)
#define TI_ChiStat (TI_TStat + TI_FPLEN)
#define TI_FStat (TI_ChiStat + TI_FPLEN)
#define TI_DF (TI_FStat + TI_FPLEN)
#define TI_Phat (TI_DF + TI_FPLEN)
#define TI_Phat1 (TI_Phat + TI_FPLEN)
#define TI_Phat2 (TI_Phat1 + TI_FPLEN)
#define TI_MeanX1 (TI_Phat2 + TI_FPLEN)
#define TI_StdX1 (TI_MeanX1 + TI_FPLEN)
#define TI_StatN1 (TI_StdX1 + TI_FPLEN)
#define TI_MeanX2 (TI_StatN1 + TI_FPLEN)
#define TI_StdX2 (TI_MeanX2 + TI_FPLEN)
#define TI_StatN2 (TI_StdX2 + TI_FPLEN)
#define TI_StdXP2 (TI_StatN2 + TI_FPLEN)
#define TI_SLower (TI_StdXP2 + TI_FPLEN)
#define TI_SUpper (TI_SLower + TI_FPLEN)
#define TI_SStat (TI_SUpper + TI_FPLEN)
#define TI_anovaf_vars (TI_SStat + TI_FPLEN)
#define TI_F_DF anovaf_vars
#define TI_F_SS (TI_F_DF + TI_FPLEN)
#define TI_F_MS (TI_F_SS + TI_FPLEN)
#define TI_E_DF (TI_F_MS + TI_FPLEN)
#define TI_E_SS (TI_E_DF + TI_FPLEN)
#define TI_E_MS (TI_E_SS + TI_FPLEN)
// System Flags
// ----------------------------------------------------------------------
#define TI_ioDelFlag 0x0
#define TI_inDelete 0		 // 1 = DELETE SCREEN
#define TI_trigFlags 0h		 // Trigonometry mode settings
#define TI_trigDeg 2		 // 1 = degrees, 0=radians
#define TI_kbdFlags 0h		 // Keyboard scan
#define TI_kbdSCR 3		 // 1=scan code ready
#define TI_kbdKeyPress 4		 // 1=key has been pressed
#define TI_doneFlags 0h		 // display "Done"
#define TI_donePrgm 5		 // 1=display "Done" after prgm
// ----------------------------------------------------------------------
#define TI_editFlags 0x1
#define TI_editOpen 2		 // 1=edit buffer is open
#define TI_ansFlags 1
#define TI_AnsScroll 3		 // 1=answer can scroll, seems must be reset in order to move about edit buffer
#define TI_monFlags 1h	 	 // monitor flags
#define TI_monAbandon 4		 // 1=don't start any long process in put away (#715)
// ----------------------------------------------------------------------
#define TI_plotFlags 2h		 // plot generation flags
#define TI_plotLoc 1		 // 0=bkup and display, 1=display only
#define TI_plotDisp 2		 // 1=plot is in display, 0=text in display, this also indicates whether graph is being shown or not
#define TI_grfModeFlags 2h		 // graph mode settings
#define TI_grfFuncM 4		 // 1=function graph
#define TI_grfPolarM 5		 // 1=polar graph
#define TI_grfParamM 6		 // 1=parametric graph
#define TI_grfRecurM 7		 // 1=RECURSION graph
// ----------------------------------------------------------------------
#define TI_graphFlags 0x3
#define TI_graphDraw 0		 // 0=graph is valid, 1=redraw graph(dirty)
#define TI_graphCursor 2
// ----------------------------------------------------------------------
#define TI_grfDBFlags 0x4
#define TI_grfDot 0		 // 0=line, 1=dot
#define TI_grfSimul 1		 // 0=sequential, 1=simultaneous
#define TI_grfGrid 2		 // 0=no grid, 1=grid
#define TI_grfPolar 3		 // 0=rectangular, 1=polar coordinates
#define TI_grfNoCoord 4		 // 0=display coordinates, 1=off
#define TI_grfNoAxis 5		 // 0=axis, 1=no axis
#define TI_grfLabel 6		 // 0=off, 1=axis label
// ----------------------------------------------------------------------
#define TI_textFlags 5h		 // Text output flags
#define TI_textEraseBelow 1		 // 1=erase line below small char
#define TI_textScrolled 2		 // 1=screen scrolled
#define TI_textInverse 3		 // 1=display inverse bit-map
#define TI_textInsMode 4		 // 0=overstrike, 1=insert mode
// ----------------------------------------------------------------------
#define TI_ParsFlag 6h		 // PARSER flags
#define TI_listOpen 5		 //  {...}
#define TI_matrixOpen1 6		 //  [[...]]
#define TI_matrixOpen2 7		 //  [...]
// ----------------------------------------------------------------------
#define TI_ParsFlag2 7h		 // PARSER flags
#define TI_numOP1 0		 // 1=RESULT IN OP1, 0=NO RESULT
// ----------------------------------------------------------------------
#define TI_newDispF 8h		 // Derivative mode flags
#define TI_preClrForMode 0		 // 1=HELP BLINK ON MODE SCREEN
#define TI_allowProgTokens 1		 // 1=allow programming tokens to be parsed in BASIC programs
#define TI_progExecuting 1
#define TI_apdFlags 8h		 // Automatic power-down
#define TI_apdAble 2		 // 1=APD enabled
#define TI_apdRunning 3		 // 1=APD clock running
#define TI_apdWarmStart 4		 // 1=calculator is turning on from APD or power loss
// ----------------------------------------------------------------------
#define TI_web_err_mask 0x60
// ----------------------------------------------------------------------
#define TI_onFlags 9h		 // on key flags
#define TI_parseInput 1		 // 1=parse input when done
#define TI_onRunning 3		 // 1=calculator is running
#define TI_onInterrupt 4		 // 1=on key interrupt request
#define TI_statFlags 9h		 // statistics flags
// unknown		equ 5		;unknown
#define TI_statsValid 6		 // 1=stats are valid
// unknown		equ 7		;unknown
// ----------------------------------------------------------------------
#define TI_fmtFlags 0Ah		 // numeric format flags
#define TI_fmtExponent 0	 	 // 1=show exponent, 0=no exponent
#define TI_fmtEng 1	 	 // 1=engineering notion, 0=scientific
#define TI_numMode 0x0A
#define TI_fmtReal 5
#define TI_fmtRect 6
#define TI_fmtPolar 7
#define TI_realMode 5
#define TI_rectMode 6
#define TI_polarMode 7
#define TI_fmtBaseMask 00011100b	 //  mask to base flags
#define TI_fmtBaseShift 2		 //  offset to base flags
// ----------------------------------------------------------------------
#define TI_fmtOverride 0Bh		 // copy of fmtFlags with conversion override
// ----------------------------------------------------------------------
#define TI_fmtEditFlags 0Ch		 // numeric editing flags
#define TI_fmtEdit 0		 // 1=format number for editing
#define TI_curFlags 0Ch		 // Cursor
#define TI_curAble 2		 // 1=cursor flash is enabled
#define TI_curOn 3		 // 1=cursor is showing
#define TI_curLock 4		 // 1=cursor is locked off
#define TI_cmdFlags 0Ch		 // command editor flags
#define TI_cmdVirgin 5		 // 1=nothing has been typed in cmd bfr
#define TI_cmdExec 6            // 1=need to execute a command
// ----------------------------------------------------------------------
#define TI_appFlags 0Dh		 // application flags
#define TI_appWantIntrpt 0		 // 1=want ON key interrupts
#define TI_appTextSave 1		 // 1=save characters in textShadow
#define TI_appAutoScroll 2		 // 1=auto-scroll text on last line
#define TI_appMenus 3		 // 1=process keys that bring up menus, 0=check Lock menu flag
#define TI_appLockMenus 4		 // 1=ignore menu keys, 0=switch to home screen and bring up menu
#define TI_appCurGraphic 5		 // 1=graphic cursor
#define TI_appCurWord 6		 // 1=text cursor covers entire word
#define TI_appExit 7		 // 1=application handles [EXIT] key itself
#define TI_appWantIntrptF (1 << TI_appWantIntrpt)
#define TI_appTextSaveF (1 << TI_appTextSave)
#define TI_appAutoScrollF (1 << TI_appAutoScroll)
#define TI_appMenusF (1 << TI_appMenus)
#define TI_appLockMenusF (1 << TI_appLockMenus)
#define TI_appCurGraphicF (1 << TI_appCurGraphic)
#define TI_appCurWordF (1 << TI_appCurWord)
#define TI_appExitF (1 << TI_appExit)
// ----------------------------------------------------------------------
#define TI_rclFlag 0Eh		 // OS recall queue flags
#define TI_enableQueue 7		 // 1 = enable recall queue
// ----------------------------------------------------------------------
#define TI_seqFlags 0Fh		 // Sequential Graph flags
#define TI_webMode 0		 // 0 = NORMAL SEQ MODE, 1 = WEB MODE
#define TI_webVert 1
#define TI_sequv 2		 // U vs V
#define TI_seqvw 3		 // V vs W
#define TI_sequw 4		 // U vs W
// ----------------------------------------------------------------------
#define TI_promptFlags 11h		 // prompt line flags
#define TI_promptEdit 0		 // 1=editing in prompt buffer
// unknown		equ 7		;unknown
// ----------------------------------------------------------------------
#define TI_indicFlags 12h		 // Indicator flags
#define TI_indicRun 0		 // 1=run indicator ON
#define TI_indicInUse 1		 // indicator save area in use=1, free=0 ;resetting will disable 2nd while in _getkey
#define TI_shiftFlags 12h		 // [2nd] and [ALPHA] flags
#define TI_shift2nd 3		 // 1=[2nd] has been pressed
#define TI_shiftAlpha 4		 // 1=[ALPHA] has been pressed
#define TI_shiftLwrAlph 5		 // 1=lower case, 0=upper case
#define TI_shiftALock 6		 // 1=alpha lock has been pressed
#define TI_shiftKeepAlph 7		 // 1=cannot cancel alpha shift
// ----------------------------------------------------------------------
#define TI_tblFlags 13h		 // table flags.
#define TI_autoFill 4		 // 1=prompt, 0=fillAuto
#define TI_autoCalc 5		 // 1=prompt, 0=CalcAuto
#define TI_reTable 6		 // 0=table is okay, 1=must recompute table.
// ----------------------------------------------------------------------
#define TI_sGrFlags 0x14
#define TI_grfSplit 0		 // 1=Split Graph, 0=Normal
#define TI_vertSplit 1		 // 1=Vertical (left-right) Split
#define TI_grfSChanged 2		 // 1=Graph just changed Split <-> normal
#define TI_grfSplitOverride 3		 // 1 = ignore graph split flag if set
#define TI_write_on_graph 4		 // 1 = TEXT OR EQU WRITING TO GRAPH SCREEN
#define TI_g_style_active 5		 // 1 = GRAPH STYLES ARE ENABLED, USE THEM
#define TI_cmp_mod_box 6		 // 1 = DOING MOD BOX PLOT COMPUTATION
#define TI_textWrite 7
// ----------------------------------------------------------------------
#define TI_newIndicFlags 0x15
#define TI_extraIndic 0
#define TI_saIndic 1
// 3 has something to do with stat/list editor
// ----------------------------------------------------------------------
#define TI_interruptFlags 0x16
#define TI_secondTimerEnabled 0		 // 1 = second hardware timer enabled
// ----------------------------------------------------------------------
#define TI_smartFlags 0x17
#define TI_smarter_mask 3
#define TI_smarter_test 1
#define TI_smartGraph 0
#define TI_smartGraph_inv 1
// ----------------------------------------------------------------------
#define TI_traceFlags 0x18
#define TI_grfExpr 0		 // set to hide expression while tracing
// ----------------------------------------------------------------------
// There is a flag 19h.
// ----------------------------------------------------------------------
#define TI_statFlags2 0x1A
#define TI_statDiagnosticsOn 0		 // 1 = stat diagnostics on
#define TI_noDelStat 2		 // 1 = don't delete stats
// ----------------------------------------------------------------------
#define TI_apdFlags2 0x1B
#define TI_warmStartInt 6            // 1 = a warm start is occurning before the next interrupt
// ----------------------------------------------------------------------
// There is a flag 1Ch (stats-related).
// ----------------------------------------------------------------------
// There is a flag 1Dh.
// ----------------------------------------------------------------------
// There is a flag 1Eh.
// ----------------------------------------------------------------------
#define TI_varTypeMask 1Fh		 // is this a flag byte? yes
#define TI_varGraphRef 6
// ----------------------------------------------------------------------
#define TI_graphFlags2 0x1F
#define TI_splitOverride 3		 // 0 = force full screen with ParseInp, or something
// ----------------------------------------------------------------------
#define TI_asm_Flag1 21h		 // ASM CODING
#define TI_asm_Flag2 22h		 // ASM CODING
#define TI_asm_Flag3 23h		 // NO LONGER AVAILABLE
// ----------------------------------------------------------------------
#define TI_arcFlag 0x24
#define TI_checkBatteryLevelFirst 0		 // 1 = check battery levels in Arc_Unarc first and throw error if low
#define TI_getSendFlg 0x24
#define TI_comFailed 1		 // 1 = Get/Send Communication Failed
#define TI_selfTestFlag 0x24
#define TI_resetOnPowerOn 2		 // 1 = Force RAM reset when APD disabled on next power on
#define TI_appLwrCaseFlag 0x24
#define TI_lwrCaseActive 3
// ----------------------------------------------------------------------
#define TI_contextFlags 0x25
#define TI_nocxPutAway 5		 // 1 = do not call cxPutAway routine
// ----------------------------------------------------------------------
#define TI_groupFlags 26h		 // used temporarily in Arc_Unarc
#define TI_inGroup 1		 // 1 = IN GROUP CONTEXT
#define TI_noCompletionByte 2		 // 1 = do not write 0FCh when calling Arc_Unarc, leave as 0FEh
#define TI_noDataWrite 3		 // 1 = do not write data when calling Arc_Unarc, nor size bytes
#define TI_writeSizeBytesOnly 5		 // 1 = only write size bytes when calling Arc_Unarc
// ----------------------------------------------------------------------
#define TI_statusBarFlags 0x27
#define TI_noStatusBarMode 7		 //  1 = abort drawing of statusbar mode, like "TEST MODE ENABLED"
// ----------------------------------------------------------------------
#define TI_APIFlg 0x28
#define TI_appAllowContext 0            // app wants context changes to happen
#define TI_appRunning 4		 // app is currently running
#define TI_appRetKeyOff 7		 // 1 = GetKey returns kOff when [2nd]+[ON] pressed
// ----------------------------------------------------------------------
#define TI_apiFlg2 0x29
// ----------------------------------------------------------------------
#define TI_apiFlg3 0x2A
// ----------------------------------------------------------------------
#define TI_apiFlg4 0x2B
#define TI_cellOverride 1		 // use cell override
#define TI_fullScrnDraw 2		 // DRAW INTO LAST ROW/COL OF SCREEN
// ----------------------------------------------------------------------
#define TI_xapFlag0 2Eh		 // external app flags, do not use 0,(iy+2Eh) (used by mouse routines)
#define TI_xapFlag1 0x2F
#define TI_xapFlag2 0x30
#define TI_xapFlag3 0x31
// ----------------------------------------------------------------------
#define TI_fontFlags 0x32
#define TI_fracDrawLFont 2
#define TI_fracTallLFont 3
#define TI_customFont 7
// ----------------------------------------------------------------------
#define TI_hookflags1 33h		 // also scriptFlag, rclFlag2, backGroundLink
#define TI_alt_On 0		 // run ONSCRPT at startup
#define TI_alt_Off 1		 // run OFFSCRPT at shutdown
#define TI_useRclQueueEnd 2		 // 1 = external mode
#define TI_ignoreBPLink 3		 // 1 = override flag for link activity hook
#define TI_bPLinkOn 4		 // 1 = link activity hook active
#define TI_enableKeyEcho 5		 // 1 = sends keypresses back to connected calc as remote control packets (with GetCSC vs. GetKey codes...really dumb, TI)
#define TI_noTempDelete 6		 // 1 = do not delete temporary programs at homescreen
// ----------------------------------------------------------------------
#define TI_hookflags2 34h		 // also sysHookFlg
#define TI_getCSCHookActive 0		 // 1 = GetCSC hook active
#define TI_libraryHookActive 1		 // 1 = library hook active
#define TI_noHookActive 2		 // 1 = same as 0; never used by OS
#define TI_homescreenHookActive 4		 // 1 = homescreen hook active
#define TI_rawKeyHookActive 5		 // 1 = raw key hook active
#define TI_catalog2HookActive 6		 // 1 = catalog 2 hook active
#define TI_cursorHookActive 7		 // 1 = cursor hook active
// ----------------------------------------------------------------------
#define TI_hookflags3 35h		 // also sysHookFlg1
#define TI_tokenHookActive 0		 // 1 = token hook active
#define TI_localizeHookActive 1		 // 1 = localize hook active
#define TI_windowHookActive 2		 // 1 = window hook active
#define TI_graphHookActive 3		 // 1 = graph hook active
#define TI_yEquHookActive 4		 // 1 = Y= hook active
#define TI_fontHookActive 5		 // 1 = font hook active
#define TI_regraphHookActive 6		 // 1 = regraph hook active
#define TI_drawingHookActive 7		 // 1 = drawing hook active
// ----------------------------------------------------------------------
#define TI_hookflags4 36h		 // also sysHookFlag2
#define TI_traceHookActive 0		 // 1 = trace hook active
#define TI_parserHookActive 1		 // 1 = parser hook active
#define TI_appChangeHookActive 2		 // 1 = app change hook active
#define TI_catalog1HookActive 3		 // 1 = catalog 1 hook active
#define TI_helpHookActive 4		 // 1 = help hook active
#define TI_cxRedispHookActive 5		 // 1 = cxRedisp hook active
#define TI_menuHookActive 6		 // 1 = menu hook active
#define TI_silentLinkHookActive 7		 // 1 = silent link hook active
// ----------------------------------------------------------------------
// hookflags2Override	equ 37h		;set corresponding bit to kill iy+35h hook when executing app
// ----------------------------------------------------------------------
// hookflags3Override	equ 38h		;set corresponding bit to kill iy+36h hook when executing app
// ----------------------------------------------------------------------
// hookflags4Override	equ 39h		;set corresponding bit to kill iy+37h hook when executing app
// ----------------------------------------------------------------------
#define TI_hookflags5 0x3A
#define TI_usbActivityHookActive 0		 // 1 = USB activity hook active
// ----------------------------------------------------------------------
#define TI_plotFlag3 0x3C
#define TI_bufferOnly 0
#define TI_useFastCirc 4
// ----------------------------------------------------------------------
#define TI_dBKeyFlags 0x3D
#define TI_keyDefaultsF 6		 // 1 = GetKey returns extended keycodes with TI-Keyboard
// ----------------------------------------------------------------------
#define TI_silentLinkFlags 0x3E
#define TI_silentLinkActive 0		 // 1 = SE/84+ silent link is active
#define TI_extraHookFlags 0x3E
#define TI_checkCatalog2HookVer 3		 // 1 = check catalog 2 hook's version before executing it (and error or take other action if so)
#define TI_openLibActive 4		 // 1 = OpenLib( was successfully called on a Flash application (ExecLib will error if zero)
// ----------------------------------------------------------------------
#define TI_clockFlags 0x3F
#define TI_notMDYMode 0		 // 0 = M/D/Y format
#define TI_isYMDMode 1		 // 1 = Y/M/D format
#define TI_is24Hour 2		 // 1 = clock in 24 hour mode
#define TI_inAfternoon 3		 // 1 = current time is in afternoon (PM) (I think)
#define TI_useTokensInString 4		 // 1 = use tokens instead of characters when displaying clock as string (for getTmStr and getDtStr vs. MODE screen) (keep this reset)
#define TI_displayClock 5		 // 1 = display clock (this is set every second, reset otherwise)
#define TI_clockOn 6		 // 1 = clock on
// ----------------------------------------------------------------------
#define TI_mathprintFlags 0x44
#define TI_mathprintEnabled 5		 // 1 = use mathprint styling
// ----------------------------------------------------------------------
#define TI_InitialBootMenuFlags 0x45
#define TI_dispinitialBootMenu 4		 //  1 = don't display the initial boot menu
// ----------------------------------------------------------------------
#define TI_backlightFlags 0x46
#define TI_restoreBrightness 0		 // 1 = restore lcd brightness when needed
// ----------------------------------------------------------------------
#define TI_grFlags 0x4A
#define TI_drawGrLbls 0		 // 1 = don't draw Graph Labels (this is usually reset anyway)
#define TI_putMapFlags 0x4A
#define TI_usePixelShadow2 3		 // 1 = use pixelshadow2, not pixelshadow
#define TI_putMapUseColor 4		 // 1 = use custom color
// ----------------------------------------------------------------------
#define TI_graphDispFlags 0x4B
#define TI_backgroundValid 4		 // 1 = items in graph background are still valid
// ----------------------------------------------------------------------
#endif