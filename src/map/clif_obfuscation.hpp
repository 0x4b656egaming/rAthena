// Copyright (c) rAthena Dev Teams - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

#ifndef CLIF_OBFUSCATION_HPP
#define CLIF_OBFUSCATION_HPP

#if defined(PACKET_OBFUSCATION) || defined(PACKET_OBFUSCATION_WARN)
	#define packet_keys(a,b,c) static uint32 clif_cryptKey[] = { a, b, c };

	#if defined(PACKET_OBFUSCATION_KEY1) || defined(PACKET_OBFUSCATION_KEY2) || defined(PACKET_OBFUSCATION_KEY3)
		#ifndef PACKET_OBFUSCATION_KEY1
			#error You enabled custom packet obfuscation keys, but did not specify key number 1.
		#endif
		#ifndef PACKET_OBFUSCATION_KEY2
			#error You enabled custom packet obfuscation keys, but did not specify key number 2.
		#endif
		#ifndef PACKET_OBFUSCATION_KEY3
			#error You enabled custom packet obfuscation keys, but did not specify key number 3.
		#endif

		packet_keys(PACKET_OBFUSCATION_KEY1,PACKET_OBFUSCATION_KEY2,PACKET_OBFUSCATION_KEY3);
	#elif PACKETVER == 20110817
		packet_keys(0x053D5CED,0x3DED6DED,0x6DED6DED);
	#elif PACKETVER == 20110824
		packet_keys(0x35C91401,0x262A5556,0x28FA03AA);
	#elif PACKETVER == 20110831
		packet_keys(0x3AD67ED0,0x44703C69,0x6F876809);
	#elif PACKETVER == 20110906
		packet_keys(0x3AD67ED0,0x44703C69,0x6F876809); // unchanged from 2011-08-31
	#elif PACKETVER == 20111005 // 2011-10-05aRagexeRE
		packet_keys(0x291E6762,0x77CD391A,0x60AC2F16);
	#elif PACKETVER == 20111012
		packet_keys(0x7F3C2D29,0x59B01DE6,0x1DBB44CA);
	#elif PACKETVER == 20111021
		packet_keys(0x357D55DC,0x5A8D759F,0x245C30F5);
	#elif PACKETVER == 20111025
		packet_keys(0x50AE1A63,0x3CE579B5,0x29C10406);
	#elif PACKETVER == 20111102 // 2011-11-02aRagexe
		packet_keys(0x5324329D,0x5D545D52,0x06137269);
	#elif PACKETVER == 20111109
		packet_keys(0x0B642BDA,0x6ECB1D1C,0x61C7454B);
	#elif PACKETVER == 20111122
		packet_keys(0x3B550F07,0x1F666C7C,0x60304EF5);
	#elif PACKETVER == 20111207
		packet_keys(0x2A610886,0x3E09165E,0x57C11888);
	#elif PACKETVER == 20111214
		packet_keys(0x5151306B,0x7AE32886,0x53060628);
	#elif PACKETVER == 20111220
		packet_keys(0x05D53871,0x7D0027B4,0x29975333);
	#elif PACKETVER == 20111228
		packet_keys(0x0FF87E93,0x6CFF7860,0x3A3D1DEC);
	#elif PACKETVER == 20120104
		packet_keys(0x262034A1,0x674542A5,0x73A50BA5);
	#elif PACKETVER == 20120111
		packet_keys(0x2B412AFC,0x4FF94487,0x6705339D);
	#elif PACKETVER == 20120120
		packet_keys(0x504345D0,0x3D427B1B,0x794C2DCC);
	#elif PACKETVER == 20120202
		packet_keys(0x2CFC0A71,0x2BA91D8D,0x087E39E0);
	#elif PACKETVER == 20120207
		packet_keys(0x1D373F5D,0x5ACD604D,0x1C4D7C4D);
	#elif PACKETVER == 20120214
		packet_keys(0x7A255EFA,0x30977276,0x2D4A0448);
	#elif PACKETVER == 20120229
		packet_keys(0x520B4C64,0x2800407D,0x47651458);
	#elif PACKETVER == 20120307 // 2012-03-07fRagexeRE
		packet_keys(0x382A6DEF,0x5CBE7202,0x61F46637);
	#elif PACKETVER == 20120314
		packet_keys(0x689C1729,0x11812639,0x60F82967);
	#elif PACKETVER == 20120321
		packet_keys(0x21F9683F,0x710C5CA5,0x1FD910E9);
	#elif PACKETVER == 20120328
		packet_keys(0x75B8553B,0x37F20B12,0x385C2B40);
	#elif PACKETVER == 20120404
		packet_keys(0x0036310C,0x2DCD0BED,0x1EE62A78);
	#elif PACKETVER == 20120410 // 2012-04-10aRagexeRE
		packet_keys(0x01581359,0x452D6FFA,0x6AFB6E2E);
	#elif PACKETVER == 20120418 // 2012-04-18aRagexeRE
		packet_keys(0x01540E48,0x13041224,0x31247924);
	#elif PACKETVER == 20120424
		packet_keys(0x411D1DBB,0x4CBA4848,0x1A432FC4);
	#elif PACKETVER == 20120509
		packet_keys(0x16CF3301,0x1F472B9B,0x0B4A3CD2);
	#elif PACKETVER == 20120515
		packet_keys(0x4A715EF9,0x79103E4F,0x405C1238);
	#elif PACKETVER == 20120525
		packet_keys(0x70EB4CCB,0x0487713C,0x398D4B08);
	#elif PACKETVER == 20120605
		packet_keys(0x68CA3080,0x31B74BDD,0x505208F1);
	#elif PACKETVER == 20120612
		packet_keys(0x32E45D64,0x35643564,0x35643564);
	#elif PACKETVER == 20120618 // 2012-06-18
		packet_keys(0x261F261F,0x261F261F,0x261F261F);
	#elif PACKETVER == 20120702 // 2012-07-02aRagexeRE
		packet_keys(0x25733B31,0x53486CFD,0x398649BD);
	#elif PACKETVER == 20120716
		packet_keys(0x76052205,0x22052205,0x22052205);
	#elif PACKETVER == 20130320 // 2013-03-20Ragexe
		packet_keys(0x3F094C49,0x55F86C1E,0x58AA359A);
	#elif PACKETVER == 20130515 // 2013-05-15aRagexe
		packet_keys(0x75794A38,0x58A96BC1,0x296E6FB8);
	#elif PACKETVER == 20130522 // 2013-05-22Ragexe
		packet_keys(0x6948050B,0x06511D9D,0x725D4DF1);
	#elif PACKETVER == 20130529 // 2013-05-29Ragexe
		packet_keys(0x023A6C87,0x14BF1F1E,0x5CC70CC9);
	#elif PACKETVER == 20130605 // 2013-06-05Ragexe
		packet_keys(0x646E08D9,0x5F153AB5,0x61B509B5);
	#elif PACKETVER == 20130612 // 2013-06-12Ragexe
		packet_keys(0x6D166F66,0x3C000FCF,0x295B0FCB);
	#elif PACKETVER == 20130618 // 2013-06-18Ragexe
		packet_keys(0x434115DE,0x34A10FE9,0x6791428E);
	#elif PACKETVER == 20130626 // 2013-06-26Ragexe
		packet_keys(0x38F453EF,0x6A040FD8,0x65BD6668);
	#elif PACKETVER == 20130703 // 2013-07-03Ragexe
		packet_keys(0x4FF90E23,0x0F1432F2,0x4CFA1EDA);
	#elif PACKETVER == 20130710 // 2013-07-10Ragexe
		packet_keys(0x458F758F,0x4CCF3F8F,0x4A9C4237);
	#elif PACKETVER == 20130717 // 2013-07-17Ragexe
		packet_keys(0x2BED4F91,0x5F9E00CF,0x5EE5520C);
	#elif PACKETVER == 20130807 // 2013-08-07Ragexe
		packet_keys(0x7E241DE0,0x5E805580,0x3D807D80);
	#elif PACKETVER == 20130814
		packet_keys(0x23A23148,0x0C41420E,0x53785AD7);
	#elif PACKETVER == 20131218
		packet_keys(0x6A596301,0x76866D0E,0x32294A45);
	#elif PACKETVER == 20131223 // 2013-12-23Ragexe
		packet_keys(0x631C511C,0x111C111C,0x111C111C);
	#elif PACKETVER == 20131230
		packet_keys(0x611B7097,0x01F957A1,0x768A0FCB);
	#elif PACKETVER == 20140115
		packet_keys(0x63224335,0x0F3A1F27,0x6D217B24);
	#elif PACKETVER == 20140205
		packet_keys(0x63DC7BDC,0x7BDC7BDC,0x7BDC7BDC);
	#elif PACKETVER == 20140305
		packet_keys(0x116763F2,0x41117DAC,0x7FD13C45);
	#elif PACKETVER == 20140402
		packet_keys(0x15D3271C,0x004D725B,0x111A3A37);
	#elif PACKETVER == 20140416
		packet_keys(0x04810281,0x42814281,0x42814281);
	#elif PACKETVER == 20141016 // 2014-10-16Ragexe
		packet_keys(0x2DFF467C,0x444B37EE,0x2C1B634F);
	#elif PACKETVER == 20141022 // 2014-10-22bRagexe
		packet_keys(0x290551EA,0x2B952C75,0x2D67669B);
	#elif PACKETVER == 20150107 // 2015-01-07aRagexeRE
		packet_keys(0x6C494A14, 0x4DDB6427, 0x3E6D7B65);
	#elif PACKETVER == 20150114 // 2015-01-14aRagexe
		packet_keys(0x21C96102, 0x13142934, 0x1ABF4EA3);
	#elif PACKETVER == 20150128 // 2015-01-28aRagexe
		packet_keys(0x77CA2D55,0x28B608F0,0x75B47957);
	#elif PACKETVER == 20150204 // 2015-02-04aRagexe
		packet_keys(0x134529DB,0x5B4F6CEF,0x29EF11EF);
	#elif PACKETVER == 20150225 || PACKETVER == 20150226 // 2015-02-25aRagexeRE or 2015-02-26aRagexeRE
		packet_keys(0x57FD4B7B,0x19CC16FB,0x0D255D72);
	#elif PACKETVER == 20150311 // 2015-03-11aRagexeRE
		packet_keys(0x48C45D97,0x06CE09B0,0x5836642F);
	#elif PACKETVER == 20150325 // 2015-03-25aRagexe
		packet_keys(0x68F62B8C, 0x337C3468, 0x38FC0AC7);
	#elif PACKETVER == 20150401 // 2015-04-01aRagexe
		packet_keys(0x207F3A08,0x57E6160C,0x02A60382);
	#elif PACKETVER == 20150422 // 2015-04-22aRagexeRE
		packet_keys(0x10D22CE2,0x69E279E2,0x79E279E2);
	#elif PACKETVER == 20150429 // 2015-04-29aRagexe
		packet_keys(0x2BF61A71,0x565D5DDF,0x0FB90019);
	#elif PACKETVER == 20150507 // 2015-05-07bRagexe
		packet_keys(0x55B54373,0x58967821,0x67F41832);
	#elif PACKETVER == 20150513 // 2015-05-13aRagexe
		packet_keys(0x62C86D09,0x75944F17,0x112C133D);
	#elif PACKETVER == 20150527 // 2015-05-27aRagexe
		packet_keys(0x35AE7BAE,0x3BAE3BAE,0x3BAE3BAE);
	#elif PACKETVER == 20150617 || PACKETVER == 20150618 // 2015-06-17aRagexeRE or 2015-06-18aRagexeRE
		packet_keys(0x250F7E09,0x25416076,0x029A780E);
	#elif PACKETVER == 20150819 // 2015-08-19aRagexeRE
		packet_keys(0x1A2400E0,0x736E5686,0x10F315D5);
	#elif PACKETVER == 20150826 // 2015-08-26aRagexeRE
		packet_keys(0x77883C56,0x1829359F,0x0DE635B6);
	#elif PACKETVER == 20150916 // 2015-09-16Ragexe
		packet_keys(0x17F83A19,0x116944F4,0x1CC541E9);
	#elif PACKETVER == 20151001 // 2015-10-01bRagexeRE
		packet_keys(0x45B945B9,0x45B945B9,0x45B945B9);
	#elif PACKETVER == 20151007 // 2015-10-07aRagexeRE
		packet_keys(0x3C6447A8,0x032170D7,0x6490476C);
	#elif PACKETVER == 20151014 // 2015-10-14bRagexeRE
		packet_keys(0x402728A8,0x5D0E309F,0x240018FD);
	#elif PACKETVER == 20151022 // 2015-10-22aRagexeRE
		packet_keys(0x0311104D,0x46C326D6,0x00E82720);
	#elif PACKETVER == 20151028 // 2015-10-28cRagexeRE
		packet_keys(0x45B945B9,0x45B945B9,0x45B945B9);
	#elif PACKETVER == 20151029 // 2015-10-29aRagexe
		packet_keys(0x45B945B9,0x45B945B9,0x45B945B9);
	#elif PACKETVER == 20151104 // 2015-11-04aRagexe
		packet_keys(0x4C17382A,0x7ED174C9,0x29961E4F);
	#elif PACKETVER == 20151111 // 2015-11-11aRagexeRE
		packet_keys(0x46097C77,0x5F193871,0x29140A21);
	#elif PACKETVER == 20151118 // 2015-11-18aRagexeRE
		packet_keys(0x734C3241,0x6E846F34,0x731C06D6);
	#elif PACKETVER == 20151125 // 2015-11-25dRagexeRE
		packet_keys(0x237446C0,0x5EFB343A,0x0EDF06C5);
	#elif PACKETVER == 20151202 // 2015-12-02bRagexeRE
		packet_keys(0x4EDE52DE,0x52DE52DE,0x52DE52DE);
	#elif PACKETVER == 20151209 // 2015-12-09aRagexeRE
		packet_keys(0x652C5898,0x7A351FB3,0x67EA2886);
	#elif PACKETVER == 20151216 // 2015-12-16aRagexeRE
		packet_keys(0x25DD643D,0x61AC39DE,0x77A8206D);
	#elif PACKETVER == 20151223 // 2015-12-23bRagexeRE
		packet_keys(0x347D68D0,0x2C705320,0x7B4A199D);
	#elif PACKETVER == 20160106 // 2016-01-06aRagexeRE
		packet_keys(0x40520265,0x33FE26FC,0x7136294F);
	#elif PACKETVER == 20160113 // 2016-01-13cRagexeRE
		packet_keys(0x18005C4B,0x19A94A72,0x73F678EC);
	#elif PACKETVER == 20160120 // 2016-01-20aRagexeRE
		packet_keys(0x51495149,0x51495149,0x51495149);
	#elif PACKETVER == 20160127 // 2016-01-27bRagexeRE
		packet_keys(0x6B1E7146,0x612C47E6,0x274E56EE);
	#elif PACKETVER == 20160203 // 2016-02-03aRagexeRE
		packet_keys(0x3E1411AF,0x6C744497,0x7CFA1BDE);
	#elif PACKETVER == 20160211 // 2016-02-11aRagexeRE
		packet_keys(0x613813EA,0x05251DAB,0x1FD35E33);
	#elif PACKETVER == 20160217 // 2016-02-17cRagexeRE
		packet_keys(0x25895A8E,0x09421C19,0x763A2D7A);
	#elif PACKETVER == 20160224 // 2016-02-24bRagexeRE
		packet_keys(0x7088019A,0x13471F02,0x42356A7D);
	#elif PACKETVER == 20160302 // 2016-03-02bRagexeRE
		packet_keys(0x7B4441B9,0x5BBC63AF,0x45DA0E71);
	#elif PACKETVER == 20160309 // 2016-03-09aRagexeRE
		packet_keys(0x21587520,0x353A7706,0x1B722B25);
	#elif PACKETVER == 20160316 // 2016-03-16aRagexeRE
		packet_keys(0x62363E36,0x3E363E36,0x3E363E36);
	#elif PACKETVER == 20160323 // 2016-03-23aRagexeRE
		packet_keys(0x73E35A83,0x62142FA8,0x12BA36BD);
	#elif PACKETVER == 20160330 // 2016-03-30aRagexeRE
		packet_keys(0x02050940,0x545336FF,0x7E7D4902);
	#elif PACKETVER == 20160406 // 2016-04-06aRagexeRE
		packet_keys(0x568611EA,0x32457D8D,0x2B020477);
	#elif PACKETVER == 20160414 // 2016-04-14bRagexeRE
		packet_keys(0x31BD479A,0x40C61398,0x397C1A80);
	#elif PACKETVER == 20160420 // 2016-04-20aRagexeRE
		packet_keys(0x67D2163A,0x3068215B,0x4835474D);
	#elif PACKETVER == 20160427 // 2016-04-27aRagexeRE
		packet_keys(0x12DC378E,0x4E3E7EBE,0x0ABE2ABE);
	#elif PACKETVER == 20160504 // 2016-05-04aRagexeRE
		packet_keys(0x09E0544C,0x0231251D,0x2F4E195F);
	#elif PACKETVER == 20160511 // 2016-05-11aRagexeRE
		packet_keys(0x3C666FE2,0x27E84E3E,0x53E11BA5);
	#elif PACKETVER == 20160518 // 2016-05-18aRagexeRE
		packet_keys(0x57DB7CA1,0x1FEA1629,0x26DD244D);
	#elif PACKETVER == 20160525 // 2016-05-25aRagexeRE
		packet_keys(0x485C45B6,0x47DC6192,0x76B34A36);
	#elif PACKETVER == 20160601 // 2016-06-01aRagexeRE
		packet_keys(0x3DAD32C4,0x59F001BE,0x73F65E56);
	#elif PACKETVER == 20160608 // 2016-06-08aRagexeRE
		packet_keys(0x11D74609,0x77C43E8A,0x44290F53);
	#elif PACKETVER == 20160615 // 2016-06-15aRagexeRE
		packet_keys(0x062C5C26,0x6CF47E82,0x4DD53480);
	#elif PACKETVER == 20160622 // 2016-06-22aRagexeRE
		packet_keys(0x426548AB,0x5C0F5DD4,0x03022710);
	#elif PACKETVER == 20160629 || PACKETVER == 20160630 // 2016-06-29aRagexeRE or 2016-06-30aRagexeRE
		packet_keys(0x0DF31CCC,0x54281606,0x5C4C6855);
	#elif PACKETVER == 20160706 // 2016-07-06cRagexeRE
		packet_keys(0x33A766D0,0x743F04F8,0x0FA0276C);
	#elif PACKETVER == 20160713 // 2016-07-13bRagexeRE
		packet_keys(0x714F2495,0x7DDC6F32,0x3FD8533D);
	#elif PACKETVER == 20160720 // 2016-07-20aRagexeRE
		packet_keys(0x4F8A19C0,0x2D8E085C,0x37BB67D6);
	#elif PACKETVER == 20160727 // 2016-07-27bRagexeRE
		packet_keys(0x3C6952AB,0x26E4077F,0x37E25DF7);
	#elif PACKETVER == 20160803 // 2016-08-03bRagexeRE
		packet_keys(0x67F438C2,0x512A4EB7,0x2D353182);
	#elif PACKETVER == 20160810 // 2016-08-10aRagexeRE
		packet_keys(0x2F252886,0x242234A2,0x48BC5032);
	#elif PACKETVER == 20160831 // 2016-08-31bRagexeRE
		packet_keys(0x564E13B0,0x7F680549,0x382D273B);
	#elif PACKETVER == 20160907 // 2016-09-07aRagexeRE
		packet_keys(0x32E5237D,0x57BD4DBD,0x5DBD5DBD);
	#elif PACKETVER == 20160913 // 2016-09-13aRagexeRE
		packet_keys(0x7C79748F,0x1AA03B1D,0x6EAC4747);
	#elif PACKETVER == 20160921 // 2016-09-21bRagexeRE
		packet_keys(0x11CD15CD,0x15CD15CD,0x15CD15CD);
	#elif PACKETVER == 20160928 // 2016-09-28dRagexeRE
		packet_keys(0x2F8C67F5,0x22D42C38,0x57513774);
	#elif PACKETVER == 20161005 // 2016-10-05aRagexeRE
		packet_keys(0x5BAE21F8,0x021E2FFC,0x3BEB7C31);
	#elif PACKETVER == 20161012 // 2016-10-12aRagexeRE
		packet_keys(0x5E2311F2,0x14FD012C,0x76EB64F6);
	#elif PACKETVER == 20161019 // 2016-10-19aRagexeRE
		packet_keys(0x34882F11,0x7C870E70,0x7E61350D);
	#elif PACKETVER == 20161026 // 2016-10-26bRagexeRE
		packet_keys(0x2CB86AE6,0x7D12660E,0x1B004DEB);
	#elif PACKETVER == 20161102 || PACKETVER == 20161103 // 2016-11-02aRagexeRE or 2016-11-03aRagexeRE
		packet_keys(0x76725C17,0x72FE4EC1,0x07A91BFD);
	#elif PACKETVER == 20161109 // 2016-11-09bRagexeRE
		packet_keys(0x0A5277C0,0x2DB17506,0x0E8F26DA);
	#elif PACKETVER == 20161116 // 2016-11-16cRagexeRE
		packet_keys(0x780C5C3F,0x15E92272,0x2BA770C5);
	#elif PACKETVER == 20161123 // 2016-11-23aRagexeRE
		packet_keys(0x66FF559F,0x00D3535B,0x236246F7);
	#elif PACKETVER == 20161130 // 2016-11-30bRagexeRE
		packet_keys(0x2ED80296,0x0D837373,0x20266F9A);
	#elif PACKETVER == 20161207 // 2016-12-07eRagexeRE
		packet_keys(0x52D267AA,0x4FE42156,0x1292153E);
	#elif PACKETVER == 20161214 // 2016-12-14bRagexeRE
		packet_keys(0x4DDE217B,0x07863AE0,0x5B591656);
	#elif PACKETVER == 20161221 // 2016-12-21aRagexeRE
		packet_keys(0x69CB4F56,0x793C165E,0x673A2354);
	#elif PACKETVER == 20161228 // 2016-12-28aRagexeRE
		packet_keys(0x09366971,0x005672F1,0x6F3712AE);
	#elif PACKETVER == 20170104 // 2017-01-04bRagexeRE
		packet_keys(0x44416BC3,0x6C8D1817,0x072D75D5);
	#elif PACKETVER == 20170111 // 2017-01-11aRagexeRE
		packet_keys(0x19B637F9,0x0E9C378A,0x41673186);
	#elif PACKETVER == 20170118 // 2017-01-18aRagexeRE
		packet_keys(0x456B36EB,0x15EB34B0,0x18C42E43);
	#elif PACKETVER == 20170125 // 2017-01-25aRagexeRE
		packet_keys(0x066E04FE,0x3004224A,0x04FF0458);
	#elif PACKETVER == 20170201 // 2017-02-01aRagexeRE
		packet_keys(0x2011228E,0x00453005,0x628E7F0A);
	#elif PACKETVER == 20170208 // 2017-02-08aRagexeRE
		packet_keys(0x6A764E5F,0x0609570D,0x28AE07FA);
	#elif PACKETVER == 20170215 // 2017-02-15aRagexeRE
		packet_keys(0x50C01315,0x51012A42,0x679E16C3);
	#elif PACKETVER == 20170222 // 2017-02-22aRagexeRE
		packet_keys(0x5A242F2F,0x6C556187,0x73C022CB);
	#elif PACKETVER == 20170228 // 2017-02-28aRagexeRE
		packet_keys(0x771D4F2B,0x20EF1F4C,0x0D5135C8);
	#elif PACKETVER == 20170308 // 2017-03-08bRagexeRE
		packet_keys(0x653470A9,0x6B316A71,0x5C712C71);
	#elif PACKETVER == 20170315 // 2017-03-15cRagexeRE
		packet_keys(0x399A0856,0x56642A94,0x7F77157D);
	#elif PACKETVER == 20170322 // 2017-03-22aRagexeRE
		packet_keys(0x2050167B,0x01731233,0x40337033);
	#elif PACKETVER == 20170329 // 2017-03-29dRagexeRE
		packet_keys(0x18B31A80,0x1B0B1D56,0x16857D6A);
	#elif PACKETVER == 20170405 // 2017-04-05bRagexeRE
		packet_keys(0x1FDE7DAC,0x2F9F5B63,0x3F2062AF);
	#elif PACKETVER == 20170412 // 2017-04-12aRagexeRE
		packet_keys(0x39223393,0x5C847779,0x10217985);
	#elif PACKETVER == 20170419 // 2017-04-19bRagexeRE
		packet_keys(0x1F8F4B3F,0x2E481F03,0x39ED4178);
	#elif PACKETVER == 20170426 // 2017-04-26dRagexeRE
		packet_keys(0x167642A7,0x1DEC3D26,0x6D046D4C);
	#elif PACKETVER == 20170502 // 2017-05-02dRagexeRE
		packet_keys(0x05224194,0x466D4204,0x31F02EE0);
	#elif PACKETVER == 20170517 // 2017-05-17aRagexeRE
		packet_keys(0x2CC4749A,0x1FA954DC,0x72276857);
	#elif PACKETVER == 20170524 // 2017-05-24aRagexeRE
		packet_keys(0x0B4E03A6,0x2B93427C,0x583D4477);
	#elif PACKETVER == 20170531 // 2017-05-31aRagexeRE
		packet_keys(0x03FA5A97,0x20B802D5,0x339F1977);
	#elif PACKETVER == 20170607 // 2017-06-07cRagexeRE
		packet_keys(0x50564ACD,0x79CA4E15,0x405F4894);
	#elif PACKETVER == 20170614 // 2017-06-14bRagexeRE
		packet_keys(0x5ED10A48,0x667F4301,0x2E5D761F);
	#elif PACKETVER == 20170621 // 2017-06-21aRagexeRE
		packet_keys(0x155F34EC,0x2D943FA9,0x3D9170EB);
	#elif PACKETVER == 20170628 // 2017-06-28bRagexeRE
		packet_keys(0x04691C86,0x43C210E2,0x2FE277E2);
	#elif PACKETVER == 20170705 // 2017-07-05aRagexeRE
		packet_keys(0x7EB000AE,0x02FB1DBC,0x5CB131E6);
	#elif PACKETVER == 20170712 // 2017-07-12bRagexeRE
		packet_keys(0x2C3C202C,0x3F2C2F2C,0x2F2C2F2C);
	#elif PACKETVER == 20170719 // 2017-07-19aRagexeRE
		packet_keys(0x46465C88,0x10116F66,0x200866F9);
	#elif PACKETVER == 20170726 // 2017-07-26cRagexeRE
		packet_keys(0x102F23DB,0x7E767751,0x3BC172EF);
	#elif PACKETVER == 20170801 // 2017-08-01aRagexeRE
		packet_keys(0x26B52A7F,0x5377619D,0x4F580AC4);
	//#elif PACKETVER == 20170809 // 2017-08-09cRagexeRE
	#elif PACKETVER == 20170816 // 2017-08-16dRagexeRE
		packet_keys(0x78914673,0x3F8B7634,0x55B814BC);
	#elif PACKETVER == 20170823 // 2017-08-23aRagexeRE
		packet_keys(0x22677205,0x393D1002,0x58DC6BB4);
	#elif PACKETVER == 20170830 // 2017-08-30bRagexeRE
		packet_keys(0x1D49592B,0x00970C17,0x1E640103);
	#elif PACKETVER == 20170906 // 2017-09-06cRagexeRE
		packet_keys(0x7DEF7677,0x351F36E6,0x52303485);
	#elif PACKETVER == 20170913 // 2017-09-13bRagexeRE
		packet_keys(0x7A645935,0x1DA05062,0x5A7A4C43);
	#elif PACKETVER == 20170920 // 2017-09-20bRagexeRE
		packet_keys(0x53024DA5,0x04EC212D,0x0BF87CD4);
	#elif PACKETVER == 20170927 // 2017-09-27bRagexeRE or 2017-09-27dRagexeRE
		packet_keys(0x15624100,0x0CE1463E,0x0E5D6534);
	#elif PACKETVER == 20171002 // 2017-10-02cRagexeRE
		packet_keys(0x15E1716C,0x4E765B63,0x357D2370);
	#elif PACKETVER == 20171011 // 2017-10-11aRagexeRE or 2017-10-11bRagexeRE
		packet_keys(0x4F121B3E,0x12670E17,0x19896C11);
	#elif PACKETVER == 20171018 // 2017-10-18aRagexeRE
		packet_keys(0x2CAA109C,0x158C1EC2,0x7A5E58F3);
	#elif PACKETVER == 20171025 // 2017-10-25bRagexeRE or 2017-10-25cRagexeRE or 2017-10-25dRagexeRE or 2017-10-25eRagexeRE
		packet_keys(0x165C565C,0x565C565C,0x565C565C);
	#elif PACKETVER == 20171101 // 2017-11-01bRagexeRE
		packet_keys(0x7056317F,0x7EEE0589,0x02672373);
	#elif PACKETVER == 20171108 // 2017-11-08bRagexeRE
		packet_keys(0x03695685,0x7FAC12CE,0x182F7A7B);
	#elif PACKETVER == 20171115 // 2017-11-15aRagexeRE
		packet_keys(0x23B97A3B,0x34610993,0x2892070E);
	#elif PACKETVER == 20171122 // 2017-11-22bRagexeRE
		packet_keys(0x03221B0E,0x73AB7A5F,0x0DD80FD4);
	#elif PACKETVER == 20171129 // 2017-11-29aRagexeRE
		packet_keys(0x581B77A7,0x62F74D7A,0x4F102173);
	#elif PACKETVER == 20171206 // 2017-12-06aRagexeRE
		packet_keys(0x39D54BD3,0x577A0C21,0x4C1C316E);
	#elif PACKETVER == 20171213 // 2017-12-13bRagexeRE
		packet_keys(0x44E41107,0x3B126921,0x00E06AAC);
	#elif PACKETVER == 20171220 // 2017-12-20aRagexeRE
		packet_keys(0x6EFE009A,0x440B7BFA,0x052339C8);
	#elif PACKETVER == 20171227 // 2017-12-27aRagexeRE
		packet_keys(0x257A2F6E,0x51140EEE,0x00FA4452);
	#elif PACKETVER == 20180103 // 2018-01-03aRagexeRE or 2018-01-03bRagexeRE
		packet_keys(0x348F4BD7,0x7A425A54,0x628F589A);
	#elif PACKETVER == 20180117 // 2018-01-17aRagexeRE
		packet_keys(0x21F477F4,0x37F437F4,0x37F437F4);
	#elif PACKETVER == 20180124 // 2018-01-24bRagexeRE
		packet_keys(0x7EAA1CE0,0x415D1CFD,0x4C8F19FA);
	#elif PACKETVER == 20180207 // 2018-02-07bRagexeRE
		packet_keys(0x45AA1B44,0x20E716B7,0x5388105C);
	#elif PACKETVER == 20180213 // 2018-02-13aRagexeRE
		packet_keys(0x189D69B2,0x43B85EAD,0x2B7A687E);
	#elif PACKETVER == 20180221 // 2018-02-21aRagexeRE or 2018-02-21bRagexeRE
		packet_keys(0x6E2F6233,0x193B0A66,0x0D1D2CA5);
	#elif PACKETVER == 20180307 // 2018-03-07bRagexeRE
		packet_keys(0x47DA10EB,0x4B922CCF,0x765C5055);
	#elif PACKETVER > 20180307 // Clients after 2018-03-07bRagexeRE do not obfuscate packets anymore
		packet_keys(0x00000000,0x00000000,0x00000000);
	#elif PACKETVER > 20110817
		#error Unsupported packet version.
	#endif

	#undef packet_keys
#endif

#endif /* CLIF_OBFUSCATION_HPP */
