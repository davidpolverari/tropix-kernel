/*
 ****************************************************************
 *								*
 *			usbdevs.h				*
 *								*
 *	Fabricantes & Produtos					*
 *								*
 *	Vers�o	4.3.0, de 07.10.02				*
 *		4.9.0, de 28.06.07				*
 *								*
 *	M�dulo: N�cleo						*
 *		N�CLEO do TROPIX para PC			*
 *								*
 *	TROPIX: Sistema Operacional Tempo-Real Multiprocessado	*
 *		Copyright � 2007 NCE/UFRJ - tecle "man licen�a"	*
 *								*
 ****************************************************************
 */

/*
 * generated from:
 *	FreeBSD: src/sys/dev/usb/usbdevs,v 1.232.2.17 2006/11/14 12:54:38 flz Exp 
 */
/* $NetBSD: usbdevs,v 1.392 2004/12/29 08:38:44 imp Exp $ */

/*-
 * Copyright (c) 1998-2004 The NetBSD Foundation, Inc.
 * All rights reserved.
 *
 * This code is derived from software contributed to The NetBSD Foundation
 * by Lennart Augustsson (lennart@augustsson.net) at
 * Carlstedt Research & Technology.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *        This product includes software developed by the NetBSD
 *        Foundation, Inc. and its contributors.
 * 4. Neither the name of The NetBSD Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE NETBSD FOUNDATION, INC. AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE FOUNDATION OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#define	UQ_HID_IGNORE	0x8000		/* device should be ignored by hid class */

/*
 * List of known USB vendors
 *
 * USB.org publishes a VID list of USB-IF member companies at
 * http://www.usb.org/developers/tools
 * Note that it does not show companies that have obtained a Vendor ID
 * without becoming full members.
 *
 * Please note that these IDs do not do anything. Adding an ID here and
 * regenerating the usbdevs.h and usbdevs_data.h only makes a symbolic name
 * available to the source code and does not change any functionality, nor
 * does it make your device available to a specific driver.
 * It will however make the descriptive string available if a device does not
 * provide the string itself.
 *
 * After adding a vendor ID VNDR and a product ID PRDCT you will have the
 * following extra defines:
 * #define USB_VENDOR_VNDR              0x????
 * #define USB_PRODUCT_VNDR_PRDCT       0x????
 *
 * You may have to add these defines to the respective probe routines to
 * make the device recognised by the appropriate device driver.
 */

#define	USB_VENDOR_EGALAX2	0x0123		/* eGalax */
#define	USB_VENDOR_LTS	0x0386		/* LTS */
#define	USB_VENDOR_AOX	0x03e8		/* AOX */
#define	USB_VENDOR_THESYS	0x03e9		/* Thesys */
#define	USB_VENDOR_DATABROADCAST	0x03ea		/* Data Broadcasting */
#define	USB_VENDOR_ATMEL	0x03eb		/* Atmel */
#define	USB_VENDOR_IWATSU	0x03ec		/* Iwatsu America */
#define	USB_VENDOR_MITEL	0x03ee		/* Mitel */
#define	USB_VENDOR_MITSUMI	0x03ee		/* Mitsumi */
#define	USB_VENDOR_HP	0x03f0		/* Hewlett Packard */
#define	USB_VENDOR_GENOA	0x03f1		/* Genoa */
#define	USB_VENDOR_OAK	0x03f2		/* Oak */
#define	USB_VENDOR_ADAPTEC	0x03f3		/* Adaptec */
#define	USB_VENDOR_DIEBOLD	0x03f4		/* Diebold */
#define	USB_VENDOR_SIEMENSELECTRO	0x03f5		/* Siemens Electromechanical */
#define	USB_VENDOR_EPSONIMAGING	0x03f8		/* Epson Imaging */
#define	USB_VENDOR_KEYTRONIC	0x03f9		/* KeyTronic */
#define	USB_VENDOR_OPTI	0x03fb		/* OPTi */
#define	USB_VENDOR_ELITEGROUP	0x03fc		/* Elitegroup */
#define	USB_VENDOR_XILINX	0x03fd		/* Xilinx */
#define	USB_VENDOR_FARALLON	0x03fe		/* Farallon Communications */
#define	USB_VENDOR_NATIONAL	0x0400		/* National Semiconductor */
#define	USB_VENDOR_NATIONALREG	0x0401		/* National Registry */
#define	USB_VENDOR_ACERLABS	0x0402		/* Acer Labs */
#define	USB_VENDOR_FTDI	0x0403		/* Future Technology Devices */
#define	USB_VENDOR_NCR	0x0404		/* NCR */
#define	USB_VENDOR_SYNOPSYS2	0x0405		/* Synopsys */
#define	USB_VENDOR_FUJITSUICL	0x0406		/* Fujitsu-ICL */
#define	USB_VENDOR_FUJITSU2	0x0407		/* Fujitsu Personal Systems */
#define	USB_VENDOR_QUANTA	0x0408		/* Quanta */
#define	USB_VENDOR_NEC	0x0409		/* NEC */
#define	USB_VENDOR_KODAK	0x040a		/* Eastman Kodak */
#define	USB_VENDOR_WELTREND	0x040b		/* Weltrend */
#define	USB_VENDOR_VIA	0x040d		/* VIA */
#define	USB_VENDOR_MCCI	0x040e		/* MCCI */
#define	USB_VENDOR_MELCO	0x0411		/* Melco */
#define	USB_VENDOR_WINBOND	0x0416		/* Winbond */
#define	USB_VENDOR_PHOENIX	0x041a		/* Phoenix */
#define	USB_VENDOR_CREATIVE	0x041e		/* Creative */
#define	USB_VENDOR_NOKIA	0x0421		/* Nokia */
#define	USB_VENDOR_ADI	0x0422		/* ADI */
#define	USB_VENDOR_CATC	0x0423		/* Computer Access Technology */
#define	USB_VENDOR_SMC2	0x0424		/* SMC */
#define	USB_VENDOR_MOTOROLA_HK	0x0425		/* Motorola HK */
#define	USB_VENDOR_GRAVIS	0x0428		/* Advanced Gravis Computer Tech. */
#define	USB_VENDOR_CIRRUSLOGIC	0x0429		/* Cirrus Logic */
#define	USB_VENDOR_INNOVATIVE	0x042c		/* Innovative Semiconductors */
#define	USB_VENDOR_MOLEX	0x042f		/* Molex */
#define	USB_VENDOR_SUN2	0x0430		/* Sun Microsystems (unofficial) */
#define	USB_VENDOR_UNISYS	0x0432		/* Unisys */
#define	USB_VENDOR_TAUGA	0x0436		/* Taugagreining HF */
#define	USB_VENDOR_AMD	0x0438		/* ADM */
#define	USB_VENDOR_LEXMARK	0x043d		/* Lexmark */
#define	USB_VENDOR_LG	0x043e		/* LG Electronics */
#define	USB_VENDOR_NANAO	0x0440		/* NANAO */
#define	USB_VENDOR_GATEWAY	0x0443		/* Gateway 2000 */
#define	USB_VENDOR_NMB	0x0446		/* NMB */
#define	USB_VENDOR_ALPS	0x044e		/* Alps */
#define	USB_VENDOR_THRUST	0x044f		/* Thrustmaster */
#define	USB_VENDOR_TI	0x0451		/* Texas Instruments */
#define	USB_VENDOR_ANALOGDEVICES	0x0456		/* Analog Devices */
#define	USB_VENDOR_SIS	0x0457		/* SIS */
#define	USB_VENDOR_KYE	0x0458		/* KYE */
#define	USB_VENDOR_DIAMOND2	0x045a		/* Diamond (Supra) */
#define	USB_VENDOR_RENESAS	0x045b		/* Renesas */
#define	USB_VENDOR_MICROSOFT	0x045e		/* Microsoft */
#define	USB_VENDOR_PRIMAX	0x0461		/* Primax */
#define	USB_VENDOR_MGE	0x0463		/* MGE */
#define	USB_VENDOR_AMP	0x0464		/* AMP */
#define	USB_VENDOR_CHERRY	0x046a		/* Cherry */
#define	USB_VENDOR_MEGATRENDS	0x046b		/* American Megatrends */
#define	USB_VENDOR_LOGITECH	0x046d		/* Logitech */
#define	USB_VENDOR_BTC	0x046e		/* BTC */
#define	USB_VENDOR_PHILIPS	0x0471		/* Philips */
#define	USB_VENDOR_SUN	0x0472		/* Sun Microsystems (offical) */
#define	USB_VENDOR_SANYO	0x0474		/* Sanyo */
#define	USB_VENDOR_SEAGATE	0x0477		/* Seagate */
#define	USB_VENDOR_CONNECTIX	0x0478		/* Connectix */
#define	USB_VENDOR_SEMTECH	0x047a		/* Semtech */
#define	USB_VENDOR_KENSINGTON	0x047d		/* Kensington */
#define	USB_VENDOR_LUCENT	0x047e		/* Lucent */
#define	USB_VENDOR_PLANTRONICS	0x047f		/* Plantronics */
#define	USB_VENDOR_KYOCERA	0x0482		/* Kyocera */
#define	USB_VENDOR_STMICRO	0x0483		/* STMicroelectronics */
#define	USB_VENDOR_FOXCONN	0x0489		/* Foxconn */
#define	USB_VENDOR_YAMAHA	0x0499		/* YAMAHA */
#define	USB_VENDOR_COMPAQ	0x049f		/* Compaq */
#define	USB_VENDOR_HITACHI	0x04a4		/* Hitachi */
#define	USB_VENDOR_ACERP	0x04a5		/* Acer Peripherals */
#define	USB_VENDOR_VISIONEER	0x04a7		/* Visioneer */
#define	USB_VENDOR_CANON	0x04a9		/* Canon */
#define	USB_VENDOR_NIKON	0x04b0		/* Nikon */
#define	USB_VENDOR_PAN	0x04b1		/* Pan International */
#define	USB_VENDOR_IBM	0x04b3		/* IBM */
#define	USB_VENDOR_CYPRESS	0x04b4		/* Cypress */
#define	USB_VENDOR_ROHM	0x04b5		/* ROHM */
#define	USB_VENDOR_COMPAL	0x04b7		/* Compal */
#define	USB_VENDOR_EPSON	0x04b8		/* Seiko Epson */
#define	USB_VENDOR_RAINBOW	0x04b9		/* Rainbow */
#define	USB_VENDOR_IODATA	0x04bb		/* I-O Data */
#define	USB_VENDOR_TDK	0x04bf		/* TDK */
#define	USB_VENDOR_3COMUSR	0x04c1		/* U.S. Robotics */
#define	USB_VENDOR_METHODE	0x04c2		/* Methode */
#define	USB_VENDOR_MAXISWITCH	0x04c3		/* Maxi Switch */
#define	USB_VENDOR_LOCKHEEDMER	0x04c4		/* Lockheed Martin Energy Research */
#define	USB_VENDOR_FUJITSU	0x04c5		/* Fujitsu */
#define	USB_VENDOR_TOSHIBAAM	0x04c6		/* Toshiba */
#define	USB_VENDOR_MICROMACRO	0x04c7		/* Micro Macro */
#define	USB_VENDOR_KONICA	0x04c8		/* Konica */
#define	USB_VENDOR_LITEON	0x04ca		/* Lite-On */
#define	USB_VENDOR_FUJIPHOTO	0x04cb		/* Fuji Photo */
#define	USB_VENDOR_PHILIPSSEMI	0x04cc		/* Philips */
#define	USB_VENDOR_TATUNG	0x04cd		/* Tatung */
#define	USB_VENDOR_SCANLOGIC	0x04ce		/* ScanLogic */
#define	USB_VENDOR_MYSON	0x04cf		/* Myson */
#define	USB_VENDOR_DIGI2	0x04d0		/* Digi */
#define	USB_VENDOR_ITTCANON	0x04d1		/* ITT Canon */
#define	USB_VENDOR_ALTEC	0x04d2		/* Altec Lansing */
#define	USB_VENDOR_LSI	0x04d4		/* LSI */
#define	USB_VENDOR_MENTORGRAPHICS	0x04d6		/* Mentor Graphics */
#define	USB_VENDOR_HOLTEK	0x04d9		/* Holtek */
#define	USB_VENDOR_PANASONIC	0x04da		/* Panasonic (Matsushita) */
#define	USB_VENDOR_HUANHSIN	0x04dc		/* Huan Hsin */
#define	USB_VENDOR_SHARP	0x04dd		/* Sharp */
#define	USB_VENDOR_IIYAMA	0x04e1		/* Iiyama */
#define	USB_VENDOR_SHUTTLE	0x04e6		/* Shuttle */
#define	USB_VENDOR_ELO	0x04e7		/* Elo TouchSystems */
#define	USB_VENDOR_SAMSUNG	0x04e8		/* Samsung */
#define	USB_VENDOR_NORTHSTAR	0x04eb		/* Northstar */
#define	USB_VENDOR_TOKYOELECTRON	0x04ec		/* Tokyo Electron */
#define	USB_VENDOR_ANNABOOKS	0x04ed		/* Annabooks */
#define	USB_VENDOR_JVC	0x04f1		/* JVC */
#define	USB_VENDOR_CHICONY	0x04f2		/* Chicony */
#define	USB_VENDOR_ELAN	0x04f3		/* Elan */
#define	USB_VENDOR_NEWNEX	0x04f7		/* Newnex */
#define	USB_VENDOR_BROTHER	0x04f9		/* Brother */
#define	USB_VENDOR_DALLAS	0x04fa		/* Dallas Semiconductor */
#define	USB_VENDOR_SUNPLUS	0x04fc		/* Sunplus */
#define	USB_VENDOR_PFU	0x04fe		/* PFU */
#define	USB_VENDOR_FUJIKURA	0x0501		/* Fujikura/DDK */
#define	USB_VENDOR_ACER	0x0502		/* Acer */
#define	USB_VENDOR_3COM	0x0506		/* 3Com */
#define	USB_VENDOR_HOSIDEN	0x0507		/* Hosiden */
#define	USB_VENDOR_AZTECH	0x0509		/* Aztech */
#define	USB_VENDOR_BELKIN	0x050d		/* Belkin */
#define	USB_VENDOR_KAWATSU	0x050f		/* Kawatsu */
#define	USB_VENDOR_FCI	0x0514		/* FCI */
#define	USB_VENDOR_LONGWELL	0x0516		/* Longwell */
#define	USB_VENDOR_COMPOSITE	0x0518		/* Composite */
#define	USB_VENDOR_STAR	0x0519		/* Star Micronics */
#define	USB_VENDOR_APC	0x051d		/* American Power Conversion */
#define	USB_VENDOR_SCIATLANTA	0x051e		/* Scientific Atlanta */
#define	USB_VENDOR_TSM	0x0520		/* TSM */
#define	USB_VENDOR_CONNECTEK	0x0522		/* Connectek */
#define	USB_VENDOR_NETCHIP	0x0525		/* NetChip */
#define	USB_VENDOR_ALTRA	0x0527		/* ALTRA */
#define	USB_VENDOR_ATI	0x0528		/* ATI */
#define	USB_VENDOR_AKS	0x0529		/* AKS */
#define	USB_VENDOR_TEKOM	0x052b		/* Tekom */
#define	USB_VENDOR_CANONDEV	0x052c		/* Canon */
#define	USB_VENDOR_WACOMTECH	0x0531		/* Wacom */
#define	USB_VENDOR_INVENTEC	0x0537		/* Inventec */
#define	USB_VENDOR_SHYHSHIUN	0x0539		/* Shyh Shiun Terminals */
#define	USB_VENDOR_PREHWERKE	0x053a		/* Preh Werke Gmbh & Co. KG */
#define	USB_VENDOR_SYNOPSYS	0x053f		/* Synopsys */
#define	USB_VENDOR_UNIACCESS	0x0540		/* Universal Access */
#define	USB_VENDOR_VIEWSONIC	0x0543		/* ViewSonic */
#define	USB_VENDOR_XIRLINK	0x0545		/* Xirlink */
#define	USB_VENDOR_ANCHOR	0x0547		/* Anchor */
#define	USB_VENDOR_SONY	0x054c		/* Sony */
#define	USB_VENDOR_FUJIXEROX	0x0550		/* Fuji Xerox */
#define	USB_VENDOR_VISION	0x0553		/* VLSI Vision */
#define	USB_VENDOR_ASAHIKASEI	0x0556		/* Asahi Kasei */
#define	USB_VENDOR_ATEN	0x0557		/* ATEN */
#define	USB_VENDOR_MUSTEK	0x055f		/* Mustek */
#define	USB_VENDOR_TELEX	0x0562		/* Telex */
#define	USB_VENDOR_CHINON	0x0564		/* Chinon */
#define	USB_VENDOR_PERACOM	0x0565		/* Peracom Networks */
#define	USB_VENDOR_ALCOR2	0x0566		/* Alcor Micro */
#define	USB_VENDOR_XYRATEX	0x0567		/* Xyratex */
#define	USB_VENDOR_WACOM	0x056a		/* WACOM */
#define	USB_VENDOR_ETEK	0x056c		/* e-TEK */
#define	USB_VENDOR_EIZO	0x056d		/* EIZO */
#define	USB_VENDOR_ELECOM	0x056e		/* Elecom */
#define	USB_VENDOR_CONEXANT	0x0572		/* Conexant */
#define	USB_VENDOR_HAUPPAUGE	0x0573		/* Hauppauge */
#define	USB_VENDOR_BAFO	0x0576		/* BAFO */
#define	USB_VENDOR_YEDATA	0x057b		/* Y-E Data */
#define	USB_VENDOR_AVM	0x057c		/* AVM */
#define	USB_VENDOR_QUICKSHOT	0x057f		/* Quickshot */
#define	USB_VENDOR_ROLAND	0x0582		/* Roland */
#define	USB_VENDOR_ROCKFIRE	0x0583		/* Rockfire */
#define	USB_VENDOR_RATOC	0x0584		/* RATOC */
#define	USB_VENDOR_ZYXEL	0x0586		/* ZyXEL */
#define	USB_VENDOR_INFINEON	0x058b		/* Infineon */
#define	USB_VENDOR_MICREL	0x058d		/* Micrel */
#define	USB_VENDOR_ALCOR	0x058f		/* Alcor */
#define	USB_VENDOR_OMRON	0x0590		/* OMRON */
#define	USB_VENDOR_NIIGATA	0x0598		/* Niigata */
#define	USB_VENDOR_IOMEGA	0x059b		/* Iomega */
#define	USB_VENDOR_ATREND	0x059c		/* A-Trend */
#define	USB_VENDOR_AID	0x059d		/* AID */
#define	USB_VENDOR_LACIE	0x059f		/* LaCie */
#define	USB_VENDOR_FUJIFILM	0x05a2		/* Fuji Film */
#define	USB_VENDOR_ARC	0x05a3		/* ARC */
#define	USB_VENDOR_ORTEK	0x05a4		/* Ortek */
#define	USB_VENDOR_BOSE	0x05a7		/* Bose */
#define	USB_VENDOR_OMNIVISION	0x05a9		/* OmniVision */
#define	USB_VENDOR_INSYSTEM	0x05ab		/* In-System */
#define	USB_VENDOR_APPLE	0x05ac		/* Apple Computer */
#define	USB_VENDOR_YCCABLE	0x05ad		/* Y.C. Cable */
#define	USB_VENDOR_DIGITALPERSONA	0x05ba		/* DigitalPersona */
#define	USB_VENDOR_RAFI	0x05bd		/* RAFI */
#define	USB_VENDOR_TYCO	0x05be		/* Tyco */
#define	USB_VENDOR_KAWASAKI	0x05c1		/* Kawasaki */
#define	USB_VENDOR_DIGI	0x05c5		/* Digi */
#define	USB_VENDOR_QUALCOMM	0x05c6		/* Qualcomm */
#define	USB_VENDOR_QTRONIX	0x05c7		/* Qtronix */
#define	USB_VENDOR_FOXLINK	0x05c8		/* Foxlink */
#define	USB_VENDOR_RICOH	0x05ca		/* Ricoh */
#define	USB_VENDOR_ELSA	0x05cc		/* ELSA */
#define	USB_VENDOR_SCIWORX	0x05ce		/* sci-worx */
#define	USB_VENDOR_BRAINBOXES	0x05d1		/* Brainboxes */
#define	USB_VENDOR_ULTIMA	0x05d8		/* Ultima */
#define	USB_VENDOR_AXIOHM	0x05d9		/* Axiohm */
#define	USB_VENDOR_MICROTEK	0x05da		/* Microtek */
#define	USB_VENDOR_SUNTAC	0x05db		/* SUN Corporation */
#define	USB_VENDOR_LEXAR	0x05dc		/* Lexar Media */
#define	USB_VENDOR_DELTA	0x05dd		/* Delta */
#define	USB_VENDOR_SYMBOL	0x05e0		/* Symbol */
#define	USB_VENDOR_SYNTEK	0x05e1		/* Syntek */
#define	USB_VENDOR_GENESYS	0x05e3		/* Genesys */
#define	USB_VENDOR_FUJI	0x05e5		/* Fuji */
#define	USB_VENDOR_KEITHLEY	0x05e6		/* Keithley */
#define	USB_VENDOR_EIZONANAO	0x05e7		/* EIZO Nanao */
#define	USB_VENDOR_KLSI	0x05e9		/* Kawasaki LSI */
#define	USB_VENDOR_FFC	0x05eb		/* FFC */
#define	USB_VENDOR_ANKO	0x05ef		/* Anko */
#define	USB_VENDOR_PIENGINEERING	0x05f3		/* P.I. Engineering */
#define	USB_VENDOR_AOC	0x05f6		/* AOC */
#define	USB_VENDOR_CHIC	0x05fe		/* Chic */
#define	USB_VENDOR_BARCO	0x0600		/* Barco */
#define	USB_VENDOR_BRIDGE	0x0607		/* Bridge */
#define	USB_VENDOR_SOLIDYEAR	0x060b		/* Solid Year */
#define	USB_VENDOR_BIORAD	0x0614		/* Bio-Rad */
#define	USB_VENDOR_MACALLY	0x0618		/* Macally */
#define	USB_VENDOR_ACTLABS	0x061c		/* Act Labs */
#define	USB_VENDOR_ALARIS	0x0620		/* Alaris */
#define	USB_VENDOR_APEX	0x0624		/* Apex */
#define	USB_VENDOR_VIVITAR	0x0636		/* Vivitar */
#define	USB_VENDOR_AVISION	0x0638		/* Avision */
#define	USB_VENDOR_TEAC	0x0644		/* TEAC */
#define	USB_VENDOR_SGI	0x065e		/* Silicon Graphics */
#define	USB_VENDOR_SANWASUPPLY	0x0663		/* Sanwa Supply */
#define	USB_VENDOR_LINKSYS	0x066b		/* Linksys */
#define	USB_VENDOR_ACERSA	0x066e		/* Acer */
#define	USB_VENDOR_SIGMATEL	0x066f		/* Sigmatel */
#define	USB_VENDOR_AIWA	0x0677		/* Aiwa */
#define	USB_VENDOR_ACARD	0x0678		/* ACARD */
#define	USB_VENDOR_PROLIFIC	0x067b		/* Prolific */
#define	USB_VENDOR_SIEMENS	0x067c		/* Siemens */
#define USB_VENDOR_ADVANCELOGIC	0x0680		/* Advance Logic */
#define	USB_VENDOR_MINOLTA	0x0686		/* Minolta */
#define	USB_VENDOR_CHPRODUCTS	0x068e		/* CH Products */
#define	USB_VENDOR_HAGIWARA	0x0693		/* Hagiwara Sys-Com */
#define	USB_VENDOR_CTX	0x0698		/* Chuntex */
#define	USB_VENDOR_ASKEY	0x069a		/* Askey */
#define	USB_VENDOR_SAITEK	0x06a3		/* Saitek */
#define	USB_VENDOR_ALCATELT	0x06b9		/* Alcatel */
#define	USB_VENDOR_AGFA	0x06bd		/* AGFA-Gevaert */
#define	USB_VENDOR_ASIAMD	0x06be		/* Asia Microelectronic Development */
#define	USB_VENDOR_BIZLINK	0x06c4		/* Bizlink */
#define	USB_VENDOR_KEYSPAN	0x06cd		/* Keyspan / InnoSys Inc. */
#define	USB_VENDOR_AASHIMA	0x06d6		/* Aashima */
#define	USB_VENDOR_MULTITECH	0x06e0		/* MultiTech */
#define	USB_VENDOR_ADS	0x06e1		/* ADS */
#define	USB_VENDOR_ALCATELM	0x06e4		/* Alcatel */
#define	USB_VENDOR_SIRIUS	0x06ea		/* Sirius */
#define	USB_VENDOR_GUILLEMOT	0x06f8		/* Guillemot */
#define	USB_VENDOR_BOSTON	0x06fd		/* Boston Acoustics */
#define	USB_VENDOR_SMC	0x0707		/* SCM */
#define	USB_VENDOR_PUTERCOM	0x0708		/* Putercom */
#define	USB_VENDOR_MCT	0x0711		/* MCT */
#define	USB_VENDOR_IMATION	0x0718		/* Imation */
#define	USB_VENDOR_SONYERICSSON	0x0731		/* Sony Ericsson */
#define	USB_VENDOR_EICON	0x0734		/* Eicon Networks */
#define	USB_VENDOR_DIGITALSTREAM	0x074e		/* Digital Stream */
#define	USB_VENDOR_AUREAL	0x0755		/* Aureal */
#define	USB_VENDOR_MIDIMAN	0x0763		/* Midiman */
#define	USB_VENDOR_LINKSYS2	0x077b		/* Linksys */
#define	USB_VENDOR_GRIFFIN	0x077d		/* Griffin */
#define	USB_VENDOR_SANDISK	0x0781		/* SanDisk */
#define	USB_VENDOR_JENOPTIK	0x0784		/* Jenoptik */
#define	USB_VENDOR_LOGITEC	0x0789		/* Logitec */
#define	USB_VENDOR_BRIMAX	0x078e		/* Brimax */
#define	USB_VENDOR_AXIS	0x0792		/* Axis */
#define	USB_VENDOR_ABL	0x0794		/* ABL */
#define	USB_VENDOR_SUNCOMM	0x079c		/* Sun Communications */
#define	USB_VENDOR_ALFADATA	0x079d		/* Alfadata */
#define	USB_VENDOR_NATIONALTECH	0x07a2		/* National Technical */
#define	USB_VENDOR_ONNTO	0x07a3		/* Onnto */
#define	USB_VENDOR_BE	0x07a4		/* Be */
#define	USB_VENDOR_ADMTEK	0x07a6		/* ADMtek */
#define	USB_VENDOR_COREGA	0x07aa		/* Corega */
#define	USB_VENDOR_FREECOM	0x07ab		/* Freecom */
#define	USB_VENDOR_MICROTECH	0x07af		/* Microtech */
#define	USB_VENDOR_GENERALINSTMNTS	0x07b2		/* General Instruments (Motorola) */
#define	USB_VENDOR_OLYMPUS	0x07b4		/* Olympus */
#define	USB_VENDOR_ABOCOM	0x07b8		/* AboCom */
#define	USB_VENDOR_KEISOKUGIKEN	0x07c1		/* Keisokugiken */
#define	USB_VENDOR_ONSPEC	0x07c4		/* OnSpec */
#define	USB_VENDOR_APG	0x07c5		/* APG */
#define	USB_VENDOR_BUG	0x07c8		/* BUG */
#define	USB_VENDOR_ALLIEDTELESYN	0x07c9		/* Allied Telesyn */
#define	USB_VENDOR_AVERMEDIA	0x07ca		/* AVerMedia */
#define	USB_VENDOR_SIIG	0x07cc		/* SIIG */
#define	USB_VENDOR_CASIO	0x07cf		/* CASIO */
#define	USB_VENDOR_APTIO	0x07d2		/* Aptio */
#define	USB_VENDOR_ARASAN	0x07da		/* Arasan */
#define	USB_VENDOR_ALLIEDCABLE	0x07e6		/* Allied Cable */
#define	USB_VENDOR_STSN	0x07ef		/* STSN */
#define	USB_VENDOR_ZOOM	0x0803		/* Zoom */
#define	USB_VENDOR_PCS	0x0810		/* Personal Communication Systems */
#define	USB_VENDOR_BROADLOGIC	0x0827		/* BroadLogic */
#define	USB_VENDOR_HANDSPRING	0x082d		/* Handspring */
#define	USB_VENDOR_PALM	0x0830		/* Palm */
#define	USB_VENDOR_SOURCENEXT	0x0833		/* SOURCENEXT */
#define	USB_VENDOR_ACTIONSTAR	0x0835		/* Action Star */
#define	USB_VENDOR_SAMSUNG_TECHWIN	0x0839		/* Samsung Techwin */
#define	USB_VENDOR_ACCTON	0x083a		/* Accton */
#define	USB_VENDOR_DIAMOND	0x0841		/* Diamond */
#define	USB_VENDOR_NETGEAR	0x0846		/* BayNETGEAR */
#define	USB_VENDOR_ACTIVEWIRE	0x0854		/* ActiveWire */
#define	USB_VENDOR_BBELECTRONICS	0x0856		/* B&B Electronics */
#define	USB_VENDOR_PORTGEAR	0x085a		/* PortGear */
#define	USB_VENDOR_SYSTEMTALKS	0x086e		/* System Talks */
#define	USB_VENDOR_METRICOM	0x0870		/* Metricom */
#define	USB_VENDOR_ADESSOKBTEK	0x087c		/* ADESSO */
#define	USB_VENDOR_JATON	0x087d		/* Jaton */
#define	USB_VENDOR_APT	0x0880		/* APT */
#define	USB_VENDOR_BOCARESEARCH	0x0885		/* Boca Research */
#define	USB_VENDOR_ANDREA	0x08a8		/* Andrea */
#define	USB_VENDOR_BURRBROWN	0x08bb		/* Burr-Brown Japan */
#define	USB_VENDOR_2WIRE	0x08c8		/* 2Wire */
#define	USB_VENDOR_AIPTEK	0x08ca		/* AIPTEK */
#define	USB_VENDOR_SMARTBRIDGES	0x08d1		/* SmartBridges */
#define	USB_VENDOR_BILLIONTON	0x08dd		/* Billionton */
#define	USB_VENDOR_EXTENDED	0x08e9		/* Extended */
#define	USB_VENDOR_MSYSTEMS	0x08ec		/* M-Systems */
#define	USB_VENDOR_AUTHENTEC	0x08ff		/* AuthenTec */
#define	USB_VENDOR_AUDIOTECHNICA	0x0909		/* Audio-Technica */
#define	USB_VENDOR_TRUMPION	0x090a		/* Trumpion */
#define	USB_VENDOR_ALATION	0x0910		/* Alation */
#define	USB_VENDOR_CONCORDCAMERA	0x0919		/* Concord Camera */
#define	USB_VENDOR_GOHUBS	0x0921		/* GoHubs */
#define	USB_VENDOR_BIOMETRIC	0x0929		/* American Biometric */
#define	USB_VENDOR_TOSHIBA	0x0930		/* Toshiba */
#define	USB_VENDOR_PLEXTOR	0x093b		/* Plextor */
#define	USB_VENDOR_INTREPIDCS	0x093c		/* Intrepid */
#define	USB_VENDOR_YANO	0x094f		/* Yano */
#define	USB_VENDOR_KINGSTON	0x0951		/* Kingston */
#define	USB_VENDOR_BLUEWATER	0x0956		/* BlueWater */
#define	USB_VENDOR_AGILENT	0x0957		/* Agilent */
#define	USB_VENDOR_PORTSMITH	0x095a		/* Portsmith */
#define	USB_VENDOR_ACERW	0x0967		/* Acer */
#define	USB_VENDOR_ADIRONDACK	0x0976		/* Adirondack Wire & Cable */
#define	USB_VENDOR_BECKHOFF	0x0978		/* Beckhoff */
#define	USB_VENDOR_MINDSATWORK	0x097a		/* Minds At Work */
#define	USB_VENDOR_POINTCHIPS	0x09a6		/* PointChips */
#define	USB_VENDOR_INTERSIL	0x09aa		/* Intersil */
#define	USB_VENDOR_ALTIUS	0x09b3		/* Altius Solutions */
#define	USB_VENDOR_ARRIS	0x09c1		/* Arris Interactive */
#define	USB_VENDOR_ACTIVCARD	0x09c3		/* ACTIVCARD */
#define	USB_VENDOR_ACTISYS	0x09c4		/* ACTiSYS */
#define	USB_VENDOR_AFOURTECH	0x09da		/* A-FOUR TECH */
#define	USB_VENDOR_AIMEX	0x09dc		/* AIMEX */
#define	USB_VENDOR_ADDONICS	0x09df		/* Addonics */
#define	USB_VENDOR_AKAI	0x09e8		/* AKAI */
#define	USB_VENDOR_ARESCOM	0x09f5		/* ARESCOM */
#define	USB_VENDOR_BAY	0x09f9		/* Bay Associates */
#define	USB_VENDOR_ALTERA	0x09fb		/* Altera */
#define	USB_VENDOR_CSR	0x0a12		/* Cambridge Silicon Radio */
#define	USB_VENDOR_TREK	0x0a16		/* Trek */
#define	USB_VENDOR_ASAHIOPTICAL	0x0a17		/* Asahi Optical */
#define	USB_VENDOR_BOCASYSTEMS	0x0a43		/* Boca Systems */
#define	USB_VENDOR_MEDIAGEAR	0x0a48		/* MediaGear */
#define	USB_VENDOR_BROADCOM	0x0a5c		/* Broadcom */
#define	USB_VENDOR_GREENHOUSE	0x0a6b		/* GREENHOUSE */
#define	USB_VENDOR_GEOCAST	0x0a79		/* Geocast */
#define	USB_VENDOR_NEODIO	0x0aec		/* Neodio */
#define	USB_VENDOR_VODAFONE	0x0af0		/* Vodafone */
#define	USB_VENDOR_ASUS	0x0b05		/* ASUS */
#define	USB_VENDOR_TODOS	0x0b0c		/* Todos Data System */
#define	USB_VENDOR_SIIG2	0x0b39		/* SIIG */
#define	USB_VENDOR_TEKRAM	0x0b3b		/* Tekram */
#define	USB_VENDOR_HAL	0x0b41		/* HAL */
#define	USB_VENDOR_EMS	0x0b43		/* EMS */
#define	USB_VENDOR_NEC2	0x0b62		/* NEC */
#define	USB_VENDOR_ATI2	0x0b6f		/* ATI */
#define	USB_VENDOR_ZEEVO	0x0b7a		/* Zeevo */
#define	USB_VENDOR_KURUSUGAWA	0x0b7e		/* Kurusugawa */
#define	USB_VENDOR_ASIX	0x0b95		/* ASIX */
#define	USB_VENDOR_USR	0x0baf		/* U.S. Robotics */
#define	USB_VENDOR_REALTEK	0x0bda		/* RealTek */
#define	USB_VENDOR_ADDONICS2	0x0bf6		/* Addonics */
#define	USB_VENDOR_AGATE	0x0c08		/* Agate */
#define	USB_VENDOR_DMI	0x0c0b		/* DMI */
#define	USB_VENDOR_CHICONY2	0x0c45		/* Chicony */
#define	USB_VENDOR_SEALEVEL	0x0c52		/* Sealevel */
#define	USB_VENDOR_LUWEN	0x0c76		/* Luwen */
#define	USB_VENDOR_ZCOM	0x0cde		/* Z-Com */
#define	USB_VENDOR_TANGTOP	0x0d3d		/* Tangtop */
#define	USB_VENDOR_SMC3	0x0d5c		/* SMC */
#define	USB_VENDOR_ADDON	0x0d7d		/* Add-on Technology */
#define	USB_VENDOR_ACDC	0x0d7e		/* ACDC */
#define	USB_VENDOR_ABC	0x0d8c		/* ABC */
#define	USB_VENDOR_MSI	0x0db0		/* Micro Star International */
#define	USB_VENDOR_HAWKING	0x0e66		/* Hawking */
#define	USB_VENDOR_GMATE	0x0e7e		/* G.Mate, Inc */
#define	USB_VENDOR_OTI	0x0ea0		/* Ours */
#define	USB_VENDOR_PILOTECH	0x0eaf		/* Pilotech */
#define	USB_VENDOR_NOVATECH	0x0eb0		/* NovaTech */
#define	USB_VENDOR_EGALAX	0x0eef		/* eGalax */
#define	USB_VENDOR_MICROTUNE	0x0f4d		/* Microtune */
#define	USB_VENDOR_VTECH	0x0f88		/* VTech */
#define	USB_VENDOR_QUALCOMM2	0x1004		/* Qualcomm */
#define	USB_VENDOR_GIGABYTE	0x1044		/* GIGABYTE */
#define	USB_VENDOR_WESTERN	0x1058		/* Western Digital */
#define	USB_VENDOR_MOTOROLA	0x1063		/* Motorola */
#define	USB_VENDOR_CCYU	0x1065		/* CCYU */
#define	USB_VENDOR_CURITEL	0x106c		/* Curitel Communications Inc */
#define	USB_VENDOR_PLX	0x10b5		/* PLX */
#define	USB_VENDOR_ASANTE	0x10bd		/* Asante */
#define	USB_VENDOR_JRC	0x1145		/* JRC */
#define	USB_VENDOR_DELORME	0x1163		/* DeLorme */
#define	USB_VENDOR_SERVERWORKS	0x1166		/* ServerWorks */
#define	USB_VENDOR_ACERCM	0x1189		/* Acer Communications & Multimedia */
#define	USB_VENDOR_SIERRA	0x1199		/* Sierra Wireless */
#define	USB_VENDOR_PROLIFIC2	0x11f6		/* Prolific */
#define	USB_VENDOR_TWINMOS	0x126f		/* TwinMOS */
#define	USB_VENDOR_TSUNAMI	0x1241		/* Tsunami */
#define	USB_VENDOR_CREATIVE2	0x1292		/* Creative Labs */
#define	USB_VENDOR_BELKIN2	0x1293		/* Belkin */
#define	USB_VENDOR_AINCOMM	0x12fd		/* Aincomm */
#define	USB_VENDOR_MOBILITY	0x1342		/* Mobility */
#define	USB_VENDOR_LINKSYS4	0x13b1		/* Linksys */
#define	USB_VENDOR_SHARK	0x13d2		/* Shark */
#define	USB_VENDOR_RADIOSHACK	0x1453		/* Radio Shack */
#define	USB_VENDOR_SILICOM	0x1485		/* Silicom */
#define	USB_VENDOR_RALINK	0x148f		/* Ralink Technology */
#define	USB_VENDOR_IMAGINATION	0x149a		/* Imagination Technologies */
#define	USB_VENDOR_CONCEPTRONIC	0x14b2		/* Conceptronic */
#define	USB_VENDOR_SILICONPORTALS	0x1527		/* Silicon Portals */
#define	USB_VENDOR_PNY	0x154b		/* PNY */
#define	USB_VENDOR_SOHOWARE	0x15e8		/* SOHOware */
#define	USB_VENDOR_UMAX	0x1606		/* UMAX */
#define	USB_VENDOR_INSIDEOUT	0x1608		/* Inside Out Networks */
#define	USB_VENDOR_ENTREGA	0x1645		/* Entrega */
#define	USB_VENDOR_ACTIONTEC	0x1668		/* Actiontec */
#define	USB_VENDOR_CMOTECH	0x16d8		/* CMOTECH CO., LTD. */
#define	USB_VENDOR_LINKSYS3	0x1915		/* Linksys */
#define	USB_VENDOR_DLINK	0x2001		/* D-Link */
#define	USB_VENDOR_ERICSSON	0x2282		/* Ericsson */
#define	USB_VENDOR_MOTOROLA2	0x22b8		/* Motorola */
#define	USB_VENDOR_TRIPPLITE	0x2478		/* Tripp-Lite */
#define	USB_VENDOR_HIROSE	0x2631		/* Hirose */
#define	USB_VENDOR_NHJ	0x2770		/* NHJ */
#define	USB_VENDOR_PLANEX	0x2c02		/* Planex */
#define	USB_VENDOR_VIDZMEDIA	0x3275		/* VidzMedia */
#define	USB_VENDOR_AEI	0x3334		/* AEI */
#define	USB_VENDOR_PQI	0x3538		/* PQI */
#define	USB_VENDOR_DAISY	0x3579		/* Daisy */
#define	USB_VENDOR_NI	0x3923		/* National Instruments */
#define	USB_VENDOR_MICRONET	0x3980		/* Micronet */
#define	USB_VENDOR_IODATA2	0x40bb		/* I-O Data */
#define	USB_VENDOR_IRIVER	0x4102		/* iRiver */
#define	USB_VENDOR_DELL	0x413c		/* Dell */
#define	USB_VENDOR_ACEECA	0x4766		/* Aceeca */
#define	USB_VENDOR_AVERATEC	0x50c2		/* Averatec */
#define	USB_VENDOR_ONSPEC2	0x55aa		/* OnSpec */
#define	USB_VENDOR_ZINWELL	0x5a57		/* Zinwell */
#define	USB_VENDOR_SITECOM	0x6189		/* Sitecom */
#define	USB_VENDOR_INTEL	0x8086		/* Intel */
#define	USB_VENDOR_HP2	0xf003		/* Hewlett Packard */

/*
 * List of known products.  Grouped by vendor.
 */

/* 3Com products */
#define	USB_PRODUCT_3COM_HOMECONN	0x009d		/* HomeConnect Camera */
#define	USB_PRODUCT_3COM_3CREB96	0x00a0		/* Bluetooth dongle */
#define	USB_PRODUCT_3COM_3C19250	0x03E8		/* 3C19250 Ethernet */
#define	USB_PRODUCT_3COM_3CRSHEW696	0x0a01		/* 3CRSHEW696 Wireless adapter */
#define	USB_PRODUCT_3COM_USR56K	0x3021		/* U.S.Robotics 56000 Voice Faxmodem Pro */
#define	USB_PRODUCT_3COM_3C460	0x11f8		/* HomeConnect 3C460 */
#define	USB_PRODUCT_3COM_3C460B	0x4601		/* HomeConnect 3C460B */

#define	USB_PRODUCT_3COMUSR_OFFICECONN	0x0082		/* 3Com OfficeConnect Analog Modem */
#define	USB_PRODUCT_3COMUSR_USRISDN	0x008f		/* 3Com U.S. Robotics Pro ISDN TA */
#define	USB_PRODUCT_3COMUSR_HOMECONN	0x009d		/* 3Com HomeConnect camera */
#define	USB_PRODUCT_3COMUSR_USR56K	0x3021		/* U.S.Robotics 56000 Voice Faxmodem Pro */

/* AboCom products */
#define	USB_PRODUCT_ABOCOM_XX1	0x110c		/* XX1 */
#define	USB_PRODUCT_ABOCOM_XX2	0x200c		/* XX2 */
#define	USB_PRODUCT_ABOCOM_URE450	0x4000		/* URE450 Ethernet */
#define	USB_PRODUCT_ABOCOM_UFE1000	0x4002		/* UFE1000 Fast Ethernet */
#define	USB_PRODUCT_ABOCOM_DSB650TX_PNA	0x4003		/* 1/10/100 ethernet */
#define	USB_PRODUCT_ABOCOM_XX4	0x4004		/* XX4 */
#define	USB_PRODUCT_ABOCOM_XX5	0x4007		/* XX5 */
#define	USB_PRODUCT_ABOCOM_XX6	0x400b		/* XX6 */
#define	USB_PRODUCT_ABOCOM_XX7	0x400c		/* XX7 */
#define	USB_PRODUCT_ABOCOM_XX8	0x4102		/* XX8 */
#define	USB_PRODUCT_ABOCOM_XX9	0x4104		/* XX9 */
#define	USB_PRODUCT_ABOCOM_XX10	0xabc1		/* XX10 */

/* Accton products */
#define	USB_PRODUCT_ACCTON_USB320_EC	0x1046		/* USB320-EC Ethernet */
#define	USB_PRODUCT_ACCTON_SS1001	0x5046		/* SpeedStream Ethernet */

/* Aceeca products */
#define	USB_PRODUCT_ACEECA_MEZ1000	0x0001		/* Aceeca Mez1000 RDA */

/* Acer Peripherals, Inc. products */
#define	USB_PRODUCT_ACERP_ACERSCAN_C310U	0x12a6		/* Acerscan C310U */
#define	USB_PRODUCT_ACERP_ACERSCAN_320U	0x2022		/* Acerscan 320U */
#define	USB_PRODUCT_ACERP_ACERSCAN_640U	0x2040		/* Acerscan 640U */
#define	USB_PRODUCT_ACERP_ACERSCAN_620U	0x2060		/* Acerscan 620U */
#define	USB_PRODUCT_ACERP_ACERSCAN_640BT	0x20be		/* Acerscan 640BT */
#define	USB_PRODUCT_ACERP_ACERSCAN_1240U	0x20c0		/* Acerscan 1240U */
#define	USB_PRODUCT_ACERP_AWL300	0x9000		/* AWL300 Wireless adapter */
#define	USB_PRODUCT_ACERP_AWL400	0x9001		/* AWL400 Wireless adapter */

/* ActiveWire, Inc. products */
#define	USB_PRODUCT_ACTIVEWIRE_IOBOARD	0x0100		/* I/O Board */
#define	USB_PRODUCT_ACTIVEWIRE_IOBOARD_FW1	0x0101		/* I/O Board, rev. 1 firmware */

/* Actiontec, Inc. products */
#define	USB_PRODUCT_ACTIONTEC_UAT1	0x7605		/* UAT1 Wireless Ethernet */

/* ADMtek products */
#define	USB_PRODUCT_ADMTEK_PEGASUS	0x0986		/* AN986 Ethernet */
#define	USB_PRODUCT_ADMTEK_PEGASUSII	0x8511		/* AN8511 Ethernet */
#define	USB_PRODUCT_ADMTEK_PEGASUSII_2	0x8513		/* AN8513 Ethernet */

/* ADDON products */
/* PNY OEMs these */
#define	USB_PRODUCT_ADDON_ATTACHE	0x1300		/* USB 2.0 Flash Drive */
#define	USB_PRODUCT_ADDON_ATTACHE	0x1300		/* USB 2.0 Flash Drive */
#define	USB_PRODUCT_ADDON_A256MB	0x1400		/* Attache 256MB USB 2.0 Flash Drive */
#define	USB_PRODUCT_ADDON_DISKPRO512	0x1420		/* USB 2.0 Flash Drive (DANE-ELEC zMate 512MB USB flash drive) */

/* ADS products */
#define	USB_PRODUCT_ADS_UBS10BT	0x0008		/* UBS-10BT Ethernet */

/* Agate Technologies products */
#define	USB_PRODUCT_AGATE_QDRIVE	0x0378		/* Q-Drive */

/* AGFA products */
#define	USB_PRODUCT_AGFA_SNAPSCAN1212U	0x0001		/* SnapScan 1212U */
#define	USB_PRODUCT_AGFA_SNAPSCAN1236U	0x0002		/* SnapScan 1236U */
#define	USB_PRODUCT_AGFA_SNAPSCANTOUCH	0x0100		/* SnapScan Touch */
#define	USB_PRODUCT_AGFA_SNAPSCAN1212U2	0x2061		/* SnapScan 1212U */
#define	USB_PRODUCT_AGFA_SNAPSCANE40	0x208d		/* SnapScan e40 */
#define	USB_PRODUCT_AGFA_SNAPSCANE50	0x208f		/* SnapScan e50 */
#define	USB_PRODUCT_AGFA_SNAPSCANE20	0x2091		/* SnapScan e20 */
#define	USB_PRODUCT_AGFA_SNAPSCANE25	0x2095		/* SnapScan e25 */
#define	USB_PRODUCT_AGFA_SNAPSCANE26	0x2097		/* SnapScan e26 */
#define	USB_PRODUCT_AGFA_SNAPSCANE52	0x20fd		/* SnapScan e52 */

/* Ain Communication Technology products */
#define	USB_PRODUCT_AINCOMM_AWU2000B	0x1001		/* AWU2000B Wireless adapter */

/* AKS products */
#define	USB_PRODUCT_AKS_USBHASP	0x0001		/* USB-HASP 0.06 */

/* Alcor Micro, Inc. products */
#define	USB_PRODUCT_ALCOR2_KBD_HUB	0x2802		/* Kbd Hub */

#define	USB_PRODUCT_ALCOR_MA_KBD_HUB	0x9213		/* MacAlly Kbd Hub */
#define	USB_PRODUCT_ALCOR_AU9814	0x9215		/* AU9814 Hub */
#define	USB_PRODUCT_ALCOR_SM_KBD	0x9410		/* MicroConnectors/StrongMan Keyboard */
#define	USB_PRODUCT_ALCOR_NEC_KBD_HUB	0x9472		/* NEC Kbd Hub */

/* Altec Lansing products */
#define	USB_PRODUCT_ALTEC_ADA70	0x0070		/* ADA70 Speakers */
#define	USB_PRODUCT_ALTEC_ASC495	0xff05		/* ASC495 Speakers */

/* American Power Conversion products */

#define USB_PRODUCT_APC_UPSPRO500       0x0002          /* Back-UPS Pro 500 */
#define	USB_PRODUCT_APC_UPS		0x0002		/* Uninterruptible Power Supply */

/* Anchor products */
#define	USB_PRODUCT_ANCHOR_EZUSB	0x2131		/* EZUSB */
#define	USB_PRODUCT_ANCHOR_EZLINK	0x2720		/* EZLINK */

/* AOX, Inc. products */
#define	USB_PRODUCT_AOX_USB101	0x0008		/* Ethernet */

/* Apple Computer products */
#define	USB_PRODUCT_APPLE_OPTMOUSE	0x0302		/* Optical mouse */
#define	USB_PRODUCT_APPLE_SPEAKERS	0x1101		/* Speakers */
#define	USB_PRODUCT_APPLE_IPOD	0x1201		/* iPod */
#define	USB_PRODUCT_APPLE_IPOD2G	0x1202		/* iPod 2G */
#define	USB_PRODUCT_APPLE_IPOD3G	0x1203		/* iPod 3G */
#define	USB_PRODUCT_APPLE_IPOD_04	0x1204		/* iPod '04' */
#define	USB_PRODUCT_APPLE_IPODMINI	0x1205		/* iPod Mini */
#define	USB_PRODUCT_APPLE_IPOD_06	0x1206		/* iPod '06' */
#define	USB_PRODUCT_APPLE_IPOD_07	0x1207		/* iPod '07' */
#define	USB_PRODUCT_APPLE_IPOD_08	0x1208		/* iPod '08' */
#define	USB_PRODUCT_APPLE_IPODVIDEO	0x1209		/* iPod Video */
#define	USB_PRODUCT_APPLE_IPODNANO	0x120a		/* iPod Nano */

/* Asahi Optical products */
#define	USB_PRODUCT_ASAHIOPTICAL_OPTIO230	0x0004		/* Digital camera */
#define	USB_PRODUCT_ASAHIOPTICAL_OPTIO330	0x0006		/* Digital camera */

/* ASIX Electronics products */
#define	USB_PRODUCT_ASIX_AX88172	0x1720		/* 10/100 ethernet */

/* ASUS products */
#define	USB_PRODUCT_ASUS_WL167G	0x1707		/* WL-167g wireless adapter */

/* ATen products */
#define	USB_PRODUCT_ATEN_UC1284	0x2001		/* Parallel printer */
#define	USB_PRODUCT_ATEN_UC10T	0x2002		/* 10Mbps ethernet */
#define	USB_PRODUCT_ATEN_UC232A	0x2008		/* Serial */

/* Atmel Comp. products */
#define	USB_PRODUCT_ATMEL_UHB124	0x3301		/* UHB124 hub */
#define	USB_PRODUCT_ATMEL_DWL120	0x7603		/* DWL-120 Wireless adapter */
#define	USB_PRODUCT_ATMEL_BW002	0x7605		/* BW002 Wireless adapter */
#define	USB_PRODUCT_ATMEL_WL1130USB	0x7613		/* WL-1130 USB */
#define	USB_PRODUCT_ATMEL_AT76C505A	0x7614		/* AT76c505a Wireless adapter */

/* Avision products */
#define	USB_PRODUCT_AVISION_1200U	0x0268		/* 1200U scanner */

/* B&B Electronics products */
#define	USB_PRODUCT_BBELECTRONICS_USOTL4	0xAC01		/* RS-422/485 */

/* Belkin products */
/*product BELKIN F5U111		0x????	F5U111 Ethernet*/
#define	USB_PRODUCT_BELKIN2_F5U002	0x0002		/* F5U002 Parallel printer */
#define	USB_PRODUCT_BELKIN_USB2LAN	0x0121		/* USB to LAN */
#define	USB_PRODUCT_BELKIN_F5U103	0x0103		/* F5U103 Serial */
#define	USB_PRODUCT_BELKIN_F5U109	0x0109		/* F5U109 Serial */
#define	USB_PRODUCT_BELKIN_F5U208	0x0208		/* F5U208 VideoBus II */
#define	USB_PRODUCT_BELKIN_F5U409	0x0409		/* F5U409 Serial */
#define	USB_PRODUCT_BELKIN_F6C550AVR	0x0551		/* F6C550-AVR UPS */
#define	USB_PRODUCT_BELKIN_F5U120	0x1203		/* F5U120-PC Hub */
#define	USB_PRODUCT_BELKIN_F5D7050	0x7050		/* F5D7050 wireless adapter */

/* Billionton products */
#define	USB_PRODUCT_BILLIONTON_USB100	0x0986		/* USB100N 10/100 FastEthernet */
#define	USB_PRODUCT_BILLIONTON_USBLP100	0x0987		/* USB100LP */
#define	USB_PRODUCT_BILLIONTON_USBEL100	0x0988		/* USB100EL */
#define	USB_PRODUCT_BILLIONTON_USBE100	0x8511		/* USBE100 */

/* Broadcom products */
#define	USB_PRODUCT_BROADCOM_BCM2033	0x2033		/* BCM2033 Bluetooth USB dongle */

/* Brother Industries products */
#define	USB_PRODUCT_BROTHER_HL1050	0x0002		/* HL-1050 laser printer */

/* Behavior Technology Computer products */
#define	USB_PRODUCT_BTC_BTC7932	0x6782		/* Keyboard with mouse port */

/* Canon, Inc. products */
#define	USB_PRODUCT_CANON_N656U	0x2206		/* CanoScan N656U */
#define	USB_PRODUCT_CANON_N1220U	0x2207		/* CanoScan N1220U */
#define	USB_PRODUCT_CANON_D660U	0x2208		/* CanoScan D660U */
#define	USB_PRODUCT_CANON_N676U	0x220d		/* CanoScan N676U */
#define	USB_PRODUCT_CANON_N1240U	0x220e		/* CanoScan N1240U */
#define	USB_PRODUCT_CANON_LIDE25	0x2220		/* CanoScan LIDE 25 */
#define	USB_PRODUCT_CANON_S10	0x3041		/* PowerShot S10 */
#define	USB_PRODUCT_CANON_S100	0x3045		/* PowerShot S100 */
#define	USB_PRODUCT_CANON_S200	0x3065		/* PowerShot S200 */

/* CATC products */
#define	USB_PRODUCT_CATC_NETMATE	0x000a		/* Netmate ethernet */
#define	USB_PRODUCT_CATC_NETMATE2	0x000c		/* Netmate2 ethernet */
#define	USB_PRODUCT_CATC_CHIEF	0x000d		/* USB Chief Bus & Protocol Analyzer */
#define	USB_PRODUCT_CATC_ANDROMEDA	0x1237		/* Andromeda hub */

/* CASIO products */
#define	USB_PRODUCT_CASIO_NAMELAND	0x4001		/* CASIO Nameland EZ-USB */

/* Cherry products */
#define	USB_PRODUCT_CHERRY_MY3000KBD	0x0001		/* My3000 keyboard */
#define	USB_PRODUCT_CHERRY_MY3000HUB	0x0003		/* My3000 hub */
#define	USB_PRODUCT_CHERRY_CYBOARD	0x0004		/* CyBoard Keyboard */

/* Chic Technology products */
#define	USB_PRODUCT_CHIC_MOUSE1	0x0001		/* mouse */
#define	USB_PRODUCT_CHIC_CYPRESS	0x0003		/* Cypress USB Mouse */

/* Chicony products */
#define	USB_PRODUCT_CHICONY_KB8933	0x0001		/* KB-8933 keyboard */

/* CMOTECH products */
#define	USB_PRODUCT_CMOTECH_CDMAMODEM	0x5141		/* CMOTECH CDMA Technologies USB modem */

/* Compaq products */
#define	USB_PRODUCT_COMPAQ_PJB100	0x504a		/* Personal Jukebox PJB100 */
#define	USB_PRODUCT_COMPAQ_IPAQLINUX	0x505a		/* iPAQ Linux */

/* Connectix products */
#define	USB_PRODUCT_CONNECTIX_QUICKCAM	0x0001		/* QuickCam */

/* Corega products */
#define	USB_PRODUCT_COREGA_ETHER_USB_T	0x0001		/* Ether USB-T */
#define	USB_PRODUCT_COREGA_FETHER_USB_TX	0x0004		/* FEther USB-TX */
#define	USB_PRODUCT_COREGA_FETHER_USB_TXS	0x000d		/* FEther USB-TXS */
#define	USB_PRODUCT_COREGA_FETHER_USB_TXC	0x9601		/* FEther USB-TXC */

/* Creative products */
#define	USB_PRODUCT_CREATIVE_NOMAD_II	0x1002		/* Nomad II MP3 player */

/* Crystalfontz products */
#define	USB_PRODUCT_FTDI_CFA_631	0xfc0c		/* Crystalfontz CFA-631 USB LCD */
#define	USB_PRODUCT_FTDI_CFA_632	0xfc08		/* Crystalfontz CFA-632 USB LCD */
#define	USB_PRODUCT_FTDI_CFA_633	0xfc0b		/* Crystalfontz CFA-633 USB LCD */
#define	USB_PRODUCT_FTDI_CFA_634	0xfc09		/* Crystalfontz CFA-634 USB LCD */
#define	USB_PRODUCT_FTDI_SEMC_DSS20	0xfc82		/* SEMC DSS-20 SyncStation */

/* Cambridge Silicon Radio Ltd. products */
#define	USB_PRODUCT_CSR_BT_DONGLE	0x0001		/* Bluetooth USB dongle */
#define	USB_PRODUCT_CSR_CSRDFU	0xffff		/* USB Bluetooth Device in DFU State */

/* Conceptronic products */
#define	USB_PRODUCT_CONCEPTRONIC_C54U	0x3c02		/* C54U wireless adapter */

/* CTX products */
#define	USB_PRODUCT_CTX_EX1300	0x9999		/* Ex1300 hub */

/* Curitel products */
#define	USB_PRODUCT_CURITEL_PC5740	0x3701		/* Broadband wireless modem */

/* Cypress Semiconductor products */
#define	USB_PRODUCT_CYPRESS_MOUSE	0x0001		/* mouse */
#define	USB_PRODUCT_CYPRESS_THERMO	0x0002		/* thermometer */
#define	USB_PRODUCT_CYPRESS_FMRADIO	0x1002		/* FM Radio */
#define	USB_PRODUCT_CYPRESS_SLIM_HUB	0x6560		/* Slim Hub */

/* Daisy Technology products */
#define	USB_PRODUCT_DAISY_DMC	0x6901		/* USB MultiMedia Reader */

/* Dallas Semiconductor products */
#define	USB_PRODUCT_DALLAS_J6502	0x4201		/* J-6502 speakers */

/* Dell products */
#define	USB_PRODUCT_DELL_PORT	0x0058		/* Port Replicator */
#define	USB_PRODUCT_DELL_BC02	0x8000		/* BC02 Bluetooth USB Adapter */

/* Delorme Paublishing products */
#define	USB_PRODUCT_DELORME_EARTHMATE	0x0100		/* Earthmate GPS */

/* Diamond products */
#define	USB_PRODUCT_DIAMOND_RIO500USB	0x0001		/* Rio 500 USB */

/* Digi International products */
#define	USB_PRODUCT_DIGI_ACCELEPORT2	0x0002		/* AccelePort USB 2 */
#define	USB_PRODUCT_DIGI_ACCELEPORT4	0x0004		/* AccelePort USB 4 */
#define	USB_PRODUCT_DIGI_ACCELEPORT8	0x0008		/* AccelePort USB 8 */

/* D-Link products */
/*product DLINK DSBS25		0x0100	DSB-S25 serial*/
#define	USB_PRODUCT_DLINK_DUBE100	0x1a00		/* 10/100 ethernet */
#define	USB_PRODUCT_DLINK_DSB650TX4	0x200c		/* 10/100 ethernet */
#define	USB_PRODUCT_DLINK_DWLG122	0x3c00		/* DWL-G122 b1 wireless adapter */
#define	USB_PRODUCT_DLINK_DSB650C	0x4000		/* 10Mbps ethernet */
#define	USB_PRODUCT_DLINK_DSB650TX1	0x4001		/* 10/100 ethernet */
#define	USB_PRODUCT_DLINK_DSB650TX	0x4002		/* 10/100 ethernet */
#define	USB_PRODUCT_DLINK_DSB650TX_PNA	0x4003		/* 1/10/100 ethernet */
#define	USB_PRODUCT_DLINK_DSB650TX3	0x400b		/* 10/100 ethernet */
#define	USB_PRODUCT_DLINK_DSB650TX2	0x4102		/* 10/100 ethernet */
#define	USB_PRODUCT_DLINK_DSB650	0xabc1		/* 10/100 ethernet */

/* EIZO products */
#define	USB_PRODUCT_EIZO_HUB	0x0000		/* hub */
#define	USB_PRODUCT_EIZO_MONITOR	0x0001		/* monitor */

/* Elecom products */
#define	USB_PRODUCT_ELECOM_MOUSE29UO	0x0002		/* mouse 29UO */
#define	USB_PRODUCT_ELECOM_LDUSBTX0	0x200c		/* LD-USB/TX */
#define	USB_PRODUCT_ELECOM_LDUSBTX1	0x4002		/* LD-USB/TX */
#define	USB_PRODUCT_ELECOM_LDUSBLTX	0x4005		/* LD-USBL/TX */
#define	USB_PRODUCT_ELECOM_LDUSBTX2	0x400b		/* LD-USB/TX */
#define	USB_PRODUCT_ELECOM_UCSGT	0x5003		/* UC-SGT */
#define	USB_PRODUCT_ELECOM_UCSGT0	0x5004		/* UC-SGT */
#define	USB_PRODUCT_ELECOM_LDUSBTX3	0xabc1		/* LD-USB/TX */

/* Elsa products */
#define	USB_PRODUCT_ELSA_MODEM1	0x2265		/* ELSA Modem Board */
#define	USB_PRODUCT_ELSA_USB2ETHERNET	0x3000		/* Microlink USB2Ethernet */

/* EMS products */
#define	USB_PRODUCT_EMS_DUAL_SHOOTER	0x0003		/* PSX gun controller converter */

/* Entrega products */
#define	USB_PRODUCT_ENTREGA_1S	0x0001		/* 1S serial */
#define	USB_PRODUCT_ENTREGA_2S	0x0002		/* 2S serial */
#define	USB_PRODUCT_ENTREGA_1S25	0x0003		/* 1S25 serial */
#define	USB_PRODUCT_ENTREGA_4S	0x0004		/* 4S serial */
#define	USB_PRODUCT_ENTREGA_E45	0x0005		/* E45 Ethernet */
#define	USB_PRODUCT_ENTREGA_CENTRONICS	0x0006		/* Parallel Port */
#define	USB_PRODUCT_ENTREGA_1S9	0x0093		/* 1S9 serial */
#define	USB_PRODUCT_ENTREGA_EZUSB	0x8000		/* EZ-USB */
/*product ENTREGA SERIAL	0x8001	DB25 Serial*/
#define	USB_PRODUCT_ENTREGA_2U4S	0x8004		/* 2U4S serial/usb hub */
/*product ENTREGA SERIAL_DB9	0x8093	DB9 Serial*/

/* Epson products */
#define	USB_PRODUCT_EPSON_PRINTER1	0x0001		/* USB Printer */
#define	USB_PRODUCT_EPSON_PRINTER2	0x0002		/* ISD USB Smart Cable for Mac */
#define	USB_PRODUCT_EPSON_PRINTER3	0x0003		/* ISD USB Smart Cable */
#define	USB_PRODUCT_EPSON_PRINTER5	0x0005		/* USB Printer */
#define	USB_PRODUCT_EPSON_636	0x0101		/* Perfection 636U / 636Photo scanner */
#define	USB_PRODUCT_EPSON_610	0x0103		/* Perfection 610 scanner */
#define	USB_PRODUCT_EPSON_1200	0x0104		/* Perfection 1200U / 1200Photo scanner */
#define	USB_PRODUCT_EPSON_1600	0x0107		/* Expression 1600 scanner */
#define	USB_PRODUCT_EPSON_1640	0x010a		/* Perfection 1640SU scanner */
#define	USB_PRODUCT_EPSON_1240	0x010b		/* Perfection 1240U / 1240Photo scanner */
#define	USB_PRODUCT_EPSON_640U	0x010c		/* Perfection 640U scanner */
#define	USB_PRODUCT_EPSON_1250	0x010f		/* Perfection 1250U / 1250Photo scanner */
#define	USB_PRODUCT_EPSON_1650	0x0110		/* Perfection 1650 scanner */
#define	USB_PRODUCT_EPSON_GT9700F	0x0112		/* GT-9700F scanner */
#define	USB_PRODUCT_EPSON_GT9300UF	0x011b		/* GT-9300UF scanner */
#define	USB_PRODUCT_EPSON_3200	0x011c		/* Perfection 3200 scanner */
#define	USB_PRODUCT_EPSON_1260	0x011d		/* Perfection 1260 scanner */
#define	USB_PRODUCT_EPSON_1660	0x011e		/* Perfection 1660 scanner */
#define	USB_PRODUCT_EPSON_1670	0x011f		/* Perfection 1670 scanner */
#define	USB_PRODUCT_EPSON_1270	0x0120		/* Perfection 1270 scanner */
#define	USB_PRODUCT_EPSON_2480	0x0121		/* Perfection 2480 scanner */
#define	USB_PRODUCT_EPSON_3590	0x0122		/* Perfection 3590 scanner */
#define	USB_PRODUCT_EPSON_4990	0x012a		/* Perfection 4990 Photo scanner */
#define	USB_PRODUCT_EPSON_3500	0x080e		/* CX-3500/3600/3650 MFP */
#define	USB_PRODUCT_EPSON_RX425	0x080f		/* Stylus Photo RX425 scanner */
#define	USB_PRODUCT_EPSON_4200	0x0820		/* CX4200 MP scanner */

/* e-TEK Labs products */
#define	USB_PRODUCT_ETEK_1COM	0x8007		/* Serial */

/* Extended Systems products */
#define	USB_PRODUCT_EXTENDED_XTNDACCESS	0x0100		/* XTNDAccess IrDA */

/* GoHubs products */
#define	USB_PRODUCT_GOHUBS_GOCOM232	0x1001		/* GoCOM232 Serial */

/* Gravis products */
#define	USB_PRODUCT_GRAVIS_GAMEPADPRO	0x4001		/* GamePad Pro */

/* GREENHOUSE products */
#define	USB_PRODUCT_GREENHOUSE_KANA21	0x0001		/* CF-writer with MP3 */

/* Griffin Technology */
#define	USB_PRODUCT_GRIFFIN_IMATE	0x0405		/* iMate, ADB adapter */

/* Freecom products */
#define	USB_PRODUCT_FREECOM_DVD	0xfc01		/* DVD drive */

/* Future Technology Devices products */
#define	USB_PRODUCT_FTDI_SERIAL_8U100AX	0x8372		/* 8U100AX Serial */
#define	USB_PRODUCT_FTDI_SERIAL_8U232AM	0x6001		/* 8U232AM Serial */
#define	USB_PRODUCT_FTDI_SERIAL_2232C	0x6010		/* FT2232C Dual port Serial */

/* Fuji photo products */
#define	USB_PRODUCT_FUJIPHOTO_MASS0100	0x0100		/* Mass Storage */

/* Fujitsu protducts */
#define	USB_PRODUCT_FUJITSU_AH_F401U	0x105b		/* AH-F401U Air H device */

/* General Instruments (Motorola) products */
#define	USB_PRODUCT_GENERALINSTMNTS_SB5100	0x5100		/* SURFboard SB5100 Cable modem */

/* Genesys Logic products */
#define	USB_PRODUCT_GENESYS_GL650	0x0604		/* GL650 Hub */
#define	USB_PRODUCT_GENESYS_GL641USB	0x0700		/* GL641USB CompactFlash Card Reader */
#define	USB_PRODUCT_GENESYS_GL641USB2IDE_2	0x0701		/* GL641USB USB-IDE Bridge No 2 */
#define	USB_PRODUCT_GENESYS_GL641USB2IDE	0x0702		/* GL641USB USB-IDE Bridge */
#define	USB_PRODUCT_GENESYS_GL641USB_2	0x0760		/* GL641USB 6-in-1 Card Reader */

/* GIGABYTE products */
#define	USB_PRODUCT_GIGABYTE_GNBR402W	0x8002		/* GN-BR402W */
#define	USB_PRODUCT_GIGABYTE_GNWLBM101	0x8003		/* GN-WLBM101 */
#define	USB_PRODUCT_GIGABYTE_GNWBKG	0x8007		/* GN-WBKG */

/* G.Mate, Inc products */
#define	USB_PRODUCT_GMATE_YP3X00	0x1001		/* YP3X00 PDA */

/* Guillemot Corporation */
#define	USB_PRODUCT_GUILLEMOT_DALEADER	0xa300		/* DA Leader */
#define	USB_PRODUCT_GUILLEMOT_HWGUSB254	0xe000		/* HWGUSB2-54 WLAN */

/* HAL Corporation products */
#define	USB_PRODUCT_HAL_IMR001	0x0011		/* Crossam2+USB IR commander */

/* Hagiwara products */
#define	USB_PRODUCT_HAGIWARA_FGSM	0x0002		/* FlashGate SmartMedia Card Reader */
#define	USB_PRODUCT_HAGIWARA_FGCF	0x0003		/* FlashGate CompactFlash Card Reader */
#define	USB_PRODUCT_HAGIWARA_FG	0x0005		/* FlashGate */

/* Handspring, Inc. */
#define	USB_PRODUCT_HANDSPRING_VISOR	0x0100		/* Handspring Visor */
#define	USB_PRODUCT_HANDSPRING_TREO	0x0200		/* Handspring Treo */
#define	USB_PRODUCT_HANDSPRING_TREO600	0x0300		/* Handspring Treo 600 */

/* Hauppauge Computer Works */
#define	USB_PRODUCT_HAUPPAUGE_WINTV_USB_FM	0x4d12		/* WinTV USB FM */

/* Hawking Technologies products */
#define	USB_PRODUCT_HAWKING_UF100	0x400c		/* 10/100 USB Ethernet */

/* Hitachi, Ltd. products */
#define	USB_PRODUCT_HITACHI_DVDCAM_USB	0x001e		/* DVDCAM USB HS Interface */

/* HP products */
#define	USB_PRODUCT_HP_895C	0x0004		/* DeskJet 895C */
#define	USB_PRODUCT_HP_4100C	0x0101		/* Scanjet 4100C */
#define	USB_PRODUCT_HP_S20	0x0102		/* Photosmart S20 */
#define	USB_PRODUCT_HP_880C	0x0104		/* DeskJet 880C */
#define	USB_PRODUCT_HP_4200C	0x0105		/* ScanJet 4200C */
#define	USB_PRODUCT_HP_CDWRITERPLUS	0x0107		/* CD-Writer Plus */
#define	USB_PRODUCT_HP_KBDHUB	0x010c		/* Multimedia Keyboard Hub */
#define	USB_PRODUCT_HP_G55XI	0x0111		/* OfficeJet G55xi */
#define	USB_PRODUCT_HP_HN210W	0x011c		/* HN210W 802.11b WLAN */
#define	USB_PRODUCT_HP_49GPLUS	0x0121		/* 49g+ graphing calculator */
#define	USB_PRODUCT_HP_6200C	0x0201		/* ScanJet 6200C */
#define	USB_PRODUCT_HP_S20b	0x0202		/* PhotoSmart S20 */
#define	USB_PRODUCT_HP_815C	0x0204		/* DeskJet 815C */
#define	USB_PRODUCT_HP_3300C	0x0205		/* ScanJet 3300C */
#define	USB_PRODUCT_HP_CDW8200	0x0207		/* CD-Writer Plus 8200e */
#define	USB_PRODUCT_HP_MMKEYB	0x020c		/* Multimedia keyboard */
#define	USB_PRODUCT_HP_1220C	0x0212		/* DeskJet 1220C */
#define	USB_PRODUCT_HP_810C	0x0304		/* DeskJet 810C/812C */
#define	USB_PRODUCT_HP_4300C	0x0305		/* Scanjet 4300C */
#define	USB_PRODUCT_HP_G85XI	0x0311		/* OfficeJet G85xi */
#define	USB_PRODUCT_HP_1200	0x0317		/* LaserJet 1200 */
#define	USB_PRODUCT_HP_5200C	0x0401		/* Scanjet 5200C */
#define	USB_PRODUCT_HP_830C	0x0404		/* DeskJet 830C */
#define	USB_PRODUCT_HP_3400CSE	0x0405		/* ScanJet 3400cse */
#define	USB_PRODUCT_HP_6300C	0x0601		/* Scanjet 6300C */
#define	USB_PRODUCT_HP_840C	0x0604		/* DeskJet 840c */
#define	USB_PRODUCT_HP_2200C	0x0605		/* ScanJet 2200C */
#define	USB_PRODUCT_HP_5300C	0x0701		/* Scanjet 5300C */
#define	USB_PRODUCT_HP_4400C	0x0705		/* Scanjet 4400C */
#define	USB_PRODUCT_HP_82x0C	0x0b01		/* Scanjet 82x0C */
#define	USB_PRODUCT_HP_2300D	0x0b17		/* Laserjet 2300d */
#define	USB_PRODUCT_HP_970CSE	0x1004		/* Deskjet 970Cse */
#define	USB_PRODUCT_HP_5400C	0x1005		/* Scanjet 5400C */
#define	USB_PRODUCT_HP_930C	0x1204		/* DeskJet 930c */
#define	USB_PRODUCT_HP_P2000U	0x1801		/* Inkjet P-2000U */
#define	USB_PRODUCT_HP_640C	0x2004		/* DeskJet 640c */
#define	USB_PRODUCT_HP_4670V	0x3005		/* ScanJet 4670v */
#define	USB_PRODUCT_HP_P1100	0x3102		/* Photosmart P1100 */
#define	USB_PRODUCT_HP_HN210E	0x811c		/* Ethernet HN210E */

/* HP products */
#define	USB_PRODUCT_HP2_C500	0x6002		/* PhotoSmart C500 */

/* IBM Corporation */
#define	USB_PRODUCT_IBM_USBCDROMDRIVE	0x4427		/* USB CD-ROM Drive */

/* Imagination Technologies products */
#define	USB_PRODUCT_IMAGINATION_DBX1	0x2107		/* DBX1 DSP core */

/* Inside Out Networks products */
#define	USB_PRODUCT_INSIDEOUT_EDGEPORT4	0x0001		/* EdgePort/4 serial ports */

/* In-System products */
#define	USB_PRODUCT_INSYSTEM_F5U002	0x0002		/* Parallel printer */
#define	USB_PRODUCT_INSYSTEM_ATAPI	0x0031		/* ATAPI adapter */
#define	USB_PRODUCT_INSYSTEM_ISD110	0x0200		/* IDE adapter ISD110 */
#define	USB_PRODUCT_INSYSTEM_ISD105	0x0202		/* IDE adapter ISD105 */
#define	USB_PRODUCT_INSYSTEM_USBCABLE	0x081a		/* USB cable */

/* Intel products */
#define	USB_PRODUCT_INTEL_EASYPC_CAMERA	0x0110		/* Easy PC Camera */
#define	USB_PRODUCT_INTEL_TESTBOARD	0x9890		/* 82930 test board */

/* Intersil products */
#define	USB_PRODUCT_INTERSIL_PRISM_2X	0x3642		/* Prism2.x or Atmel WLAN */

/* Interpid Control Systems products */
#define	USB_PRODUCT_INTREPIDCS_VALUECAN	0x0601		/* ValueCAN CAN bus interface */
#define	USB_PRODUCT_INTREPIDCS_NEOVI	0x0701		/* NeoVI Blue vehicle bus interface */

/* I/O DATA products */
#define	USB_PRODUCT_IODATA_IU_CD2	0x0204		/* DVD Multi-plus unit iU-CD2 */
#define	USB_PRODUCT_IODATA_DVR_UEH8	0x0206		/* DVD Multi-plus unit DVR-UEH8 */
#define	USB_PRODUCT_IODATA_USBETT	0x0901		/* USB ETT */
#define	USB_PRODUCT_IODATA_USBETTX	0x0904		/* USB ETTX */
#define	USB_PRODUCT_IODATA_USBETTXS	0x0913		/* USB ETTX */
#define	USB_PRODUCT_IODATA_USBRSAQ	0x0a03		/* Serial USB-RSAQ1 */

/* Iomega products */
#define	USB_PRODUCT_IOMEGA_ZIP100	0x0001		/* Zip 100 */
#define	USB_PRODUCT_IOMEGA_ZIP250	0x0030		/* Zip 250 */

/* JVC products */
#define	USB_PRODUCT_JVC_GR_DX95	0x000a		/* GR-DX95 */
#define	USB_PRODUCT_JVC_MP_PRX1	0x3008		/* MP-PRX1 Ethernet */

/* JRC products */
#define	USB_PRODUCT_JRC_AH_J3001V_J3002V	0x0001		/* AirH PHONE AH-J3001V/J3002V */

/* Kawasaki products */
#define	USB_PRODUCT_KLSI_DUH3E10BT	0x0008		/* USB ethernet */
#define	USB_PRODUCT_KLSI_DUH3E10BTN	0x0009		/* USB ethernet */

/* Kawatsu products */
#define	USB_PRODUCT_KAWATSU_MH4000P	0x0003		/* MiniHub 4000P */

/* Keisokugiken Corp. products */
#define	USB_PRODUCT_KEISOKUGIKEN_USBDAQ	0x0068		/* HKS-0200 USBDAQ */

/* Kawasaki products */
#define	USB_PRODUCT_KLSI_DUH3E10BT	0x0008		/* DU-H3E 10BT Ethernet */

/* Kensington products */
#define	USB_PRODUCT_KENSINGTON_ORBIT	0x1003		/* Orbit USB/PS2 trackball */
#define	USB_PRODUCT_KENSINGTON_TURBOBALL	0x1005		/* TurboBall */

/* Keyspan products */
#define	USB_PRODUCT_KEYSPAN_USA28_NF	0x0101		/* USA-28 serial adapter (no firmware) */
#define	USB_PRODUCT_KEYSPAN_USA28X_NF	0x0102		/* USA-28X serial adapter (no firmware) */
#define	USB_PRODUCT_KEYSPAN_USA19_NF	0x0103		/* USA-19 serial adapter (no firmware) */
#define	USB_PRODUCT_KEYSPAN_USA18_NF	0x0104		/* USA-18 serial adapter (no firmware) */
#define	USB_PRODUCT_KEYSPAN_USA18X_NF	0x0105		/* USA-18X serial adapter (no firmware) */
#define	USB_PRODUCT_KEYSPAN_USA19W_NF	0x0106		/* USA-19W serial adapter (no firmware) */
#define	USB_PRODUCT_KEYSPAN_USA19	0x0107		/* USA-19 serial adapter */
#define	USB_PRODUCT_KEYSPAN_USA19W	0x0108		/* USA-19W serial adapter */
#define	USB_PRODUCT_KEYSPAN_USA49W_NF	0x0109		/* USA-49W serial adapter (no firmware) */
#define	USB_PRODUCT_KEYSPAN_USA49W	0x010a		/* USA-49W serial adapter */
#define	USB_PRODUCT_KEYSPAN_USA19QI_NF	0x010b		/* USA-19QI serial adapter (no firmware) */
#define	USB_PRODUCT_KEYSPAN_USA19QI	0x010c		/* USA-19QI serial adapter */
#define	USB_PRODUCT_KEYSPAN_USA19Q_NF	0x010d		/* USA-19Q serial adapter (no firmware) */
#define	USB_PRODUCT_KEYSPAN_USA19Q	0x010e		/* USA-19Q serial adapter */
#define	USB_PRODUCT_KEYSPAN_USA28	0x010f		/* USA-28 serial adapter */
#define	USB_PRODUCT_KEYSPAN_USA28XXB	0x0110		/* USA-28X/XB serial adapter */
#define	USB_PRODUCT_KEYSPAN_USA18	0x0111		/* USA-18 serial adapter */
#define	USB_PRODUCT_KEYSPAN_USA18X	0x0112		/* USA-18X serial adapter */
#define	USB_PRODUCT_KEYSPAN_USA28XB_NF	0x0113		/* USA-28XB serial adapter (no firmware) */
#define	USB_PRODUCT_KEYSPAN_USA28XA_NF	0x0114		/* USA-28XB serial adapter (no firmware) */
#define	USB_PRODUCT_KEYSPAN_USA28XA	0x0115		/* USA-28XA serial adapter */
#define	USB_PRODUCT_KEYSPAN_USA18XA_NF	0x0116		/* USA-18XA serial adapter (no firmware) */
#define	USB_PRODUCT_KEYSPAN_USA18XA	0x0117		/* USA-18XA serial adapter */
#define	USB_PRODUCT_KEYSPAN_USA19QW_NF	0x0118		/* USA-19WQ serial adapter (no firmware) */
#define	USB_PRODUCT_KEYSPAN_USA19QW	0x0119		/* USA-19WQ serial adapter */
#define	USB_PRODUCT_KEYSPAN_USA19HA	0x0121		/* USA-19HS serial adapter */
#define	USB_PRODUCT_KEYSPAN_UIA10	0x0201		/* UIA-10 remote control */
#define	USB_PRODUCT_KEYSPAN_UIA11	0x0202		/* UIA-11 remote control */
#define USB_PRODUCT_KEYSPAN_USA28X	0x0102		/* USA-28X serial adapter */

/* Kingston products */
#define	USB_PRODUCT_KINGSTON_KNU101TX	0x000a		/* KNU101TX USB Ethernet */

/* Kodak products */
#define	USB_PRODUCT_KODAK_DC220	0x0100		/* Digital Science DC220 */
#define	USB_PRODUCT_KODAK_DC260	0x0110		/* Digital Science DC260 */
#define	USB_PRODUCT_KODAK_DC265	0x0111		/* Digital Science DC265 */
#define	USB_PRODUCT_KODAK_DC290	0x0112		/* Digital Science DC290 */
#define	USB_PRODUCT_KODAK_DC240	0x0120		/* Digital Science DC240 */
#define	USB_PRODUCT_KODAK_DC280	0x0130		/* Digital Science DC280 */

/* Konica Corp. Products */
#define	USB_PRODUCT_KONICA_CAMERA	0x0720		/* Digital Color Camera */

/* KYE products */
#define	USB_PRODUCT_KYE_NICHE	0x0001		/* Niche mouse */
#define	USB_PRODUCT_KYE_NETSCROLL	0x0003		/* Genius NetScroll mouse */
#define	USB_PRODUCT_KYE_FLIGHT2000	0x1004		/* Flight 2000 joystick */
#define	USB_PRODUCT_KYE_VIVIDPRO	0x2001		/* ColorPage Vivid-Pro scanner */

/* Kyocera products */
#define	USB_PRODUCT_KYOCERA_AHK3001V	0x0203		/* AH-K3001V */

/* LaCie products */
#define	USB_PRODUCT_LACIE_HD	0xa601		/* Hard Disk */
#define	USB_PRODUCT_LACIE_CDRW	0xa602		/* CD R/W */

/* Lexar products */
#define	USB_PRODUCT_LEXAR_JUMPSHOT	0x0001		/* jumpSHOT CompactFlash Reader */

/* Lexmark products */
#define	USB_PRODUCT_LEXMARK_S2450	0x0009		/* Optra S 2450 */

/* Linksys products */
#define	USB_PRODUCT_LINKSYS_MAUSB2	0x0105		/* Camedia MAUSB-2 */
#define	USB_PRODUCT_LINKSYS_USB10TX1	0x200c		/* USB10TX */
#define	USB_PRODUCT_LINKSYS_USB10T	0x2202		/* USB10T Ethernet */
#define	USB_PRODUCT_LINKSYS_USB100TX	0x2203		/* USB100TX Ethernet */
#define	USB_PRODUCT_LINKSYS_USB100H1	0x2204		/* USB100H1 Ethernet/HPNA */
#define	USB_PRODUCT_LINKSYS_USB10TA	0x2206		/* USB10TA Ethernet */
#define	USB_PRODUCT_LINKSYS_USB10TX2	0x400b		/* USB10TX */
#define	USB_PRODUCT_LINKSYS2_WUSB11	0x2219		/* WUSB11 Wireless adapter */
#define	USB_PRODUCT_LINKSYS2_USB200M	0x2226		/* USB 2.0 10/100 ethernet */
#define	USB_PRODUCT_LINKSYS3_WUSB11v28	0x2233		/* WUSB11 v2.8 wireless adapter */
#define	USB_PRODUCT_LINKSYS4_WUSB54G	0x000d		/* WUSB54G wireless adapter */
#define	USB_PRODUCT_LINKSYS4_WUSB54GP	0x0011		/* WUSB54GP wireless adapter */
#define	USB_PRODUCT_LINKSYS4_HU200TS	0x001a		/* HU200TS wireless adapter */
#define USB_PRODUCT_LINKSYS_USB200M	0x2226		/* USB 2.0 10/100 ethernet controller */

/* Logitech products */
#define	USB_PRODUCT_LOGITECH_M2452	0x0203		/* M2452 keyboard */
#define	USB_PRODUCT_LOGITECH_M4848	0x0301		/* M4848 mouse */
#define	USB_PRODUCT_LOGITECH_PAGESCAN	0x040f		/* PageScan */
#define	USB_PRODUCT_LOGITECH_QUICKCAMWEB	0x0801		/* QuickCam Web */
#define	USB_PRODUCT_LOGITECH_QUICKCAMPRO	0x0810		/* QuickCam Pro */
#define	USB_PRODUCT_LOGITECH_QUICKCAMEXP	0x0840		/* QuickCam Express */
#define	USB_PRODUCT_LOGITECH_QUICKCAM	0x0850		/* QuickCam */
#define	USB_PRODUCT_LOGITECH_N43	0xc000		/* N43 */
#define	USB_PRODUCT_LOGITECH_N48	0xc001		/* N48 mouse */
#define	USB_PRODUCT_LOGITECH_MBA47	0xc002		/* M-BA47 mouse */
#define	USB_PRODUCT_LOGITECH_WMMOUSE	0xc004		/* WingMan Gaming Mouse */
#define	USB_PRODUCT_LOGITECH_BD58	0xc00c		/* BD58 mouse */
#define	USB_PRODUCT_LOGITECH_UN58A	0xc030		/* iFeel Mouse */
#define	USB_PRODUCT_LOGITECH_UN53B	0xc032		/* iFeel MouseMan */
#define	USB_PRODUCT_LOGITECH_WMPAD	0xc208		/* WingMan GamePad Extreme */
#define	USB_PRODUCT_LOGITECH_WMRPAD	0xc20a		/* WingMan RumblePad */
#define	USB_PRODUCT_LOGITECH_WMJOY	0xc281		/* WingMan Force joystick */
#define	USB_PRODUCT_LOGITECH_BB13	0xc401		/* USB-PS/2 Trackball */
#define	USB_PRODUCT_LOGITECH_RK53	0xc501		/* Cordless mouse */
#define	USB_PRODUCT_LOGITECH_RB6	0xc503		/* Cordless keyboard */
#define	USB_PRODUCT_LOGITECH_MX700	0xc506		/* Cordless optical mouse */
#define	USB_PRODUCT_LOGITECH_QUICKCAMPRO2	0xd001		/* QuickCam Pro */

/* Logitec Corp. products */
#define	USB_PRODUCT_LOGITEC_LDR_H443SU2	0x0033		/* DVD Multi-plus unit LDR-H443SU2 */
#define	USB_PRODUCT_LOGITEC_LDR_H443U2	0x00b3		/* DVD Multi-plus unit LDR-H443U2 */

/* Lucent products */
#define	USB_PRODUCT_LUCENT_EVALKIT	0x1001		/* USS-720 evaluation kit */

/* Luwen products */
#define	USB_PRODUCT_LUWEN_EASYDISK	0x0005		/* EasyDisc */

/* Macally products */
#define	USB_PRODUCT_MACALLY_MOUSE1	0x0101		/* mouse */

/* Matrix Orbital products */
#define	USB_PRODUCT_FTDI_USBSERIAL	0xfa00		/* Matrix Orbital USB Serial */
#define	USB_PRODUCT_FTDI_MX2_3	0xfa01		/* Matrix Orbital MX2 or MX3 */
#define	USB_PRODUCT_FTDI_MX4_5	0xfa02		/* Matrix Orbital MX4 or MX5 */
#define	USB_PRODUCT_FTDI_LK202	0xfa03		/* Matrix Orbital VK/LK202 Family */
#define	USB_PRODUCT_FTDI_LK204	0xfa04		/* Matrix Orbital VK/LK204 Family */

/* MCT Corp. */
#define	USB_PRODUCT_MCT_HUB0100	0x0100		/* Hub */
#define	USB_PRODUCT_MCT_DU_H3SP_USB232	0x0200		/* D-Link DU-H3SP USB BAY Hub */
#define	USB_PRODUCT_MCT_USB232	0x0210		/* USB-232 Interface */
#define	USB_PRODUCT_MCT_SITECOM_USB232	0x0230		/* Sitecom USB-232 Products */

/* Melco, Inc products */
#define	USB_PRODUCT_MELCO_LUATX1	0x0001		/* LUA-TX Ethernet */
#define	USB_PRODUCT_MELCO_LUATX5	0x0005		/* LUA-TX Ethernet */
#define	USB_PRODUCT_MELCO_LUA2TX5	0x0009		/* LUA2-TX Ethernet */
#define	USB_PRODUCT_MELCO_LUAKTX	0x0012		/* LUA-KTX Ethernet */
#define	USB_PRODUCT_MELCO_DUBPXXG	0x001c		/* USB-IDE Bridge: DUB-PxxG */
#define	USB_PRODUCT_MELCO_LUAU2KTX	0x003d		/* LUA-U2-KTX Ethernet */
#define	USB_PRODUCT_MELCO_KG54YB	0x005e		/* WLI-U2-KG54-YB WLAN */
#define	USB_PRODUCT_MELCO_KG54	0x0066		/* WLI-U2-KG54 WLAN */
#define	USB_PRODUCT_MELCO_KG54AI	0x0067		/* WLI-U2-KG54-AI WLAN */
#define	USB_PRODUCT_MELCO_NINWIFI	0x008b		/* Nintendo Wi-Fi */

/* Metricom products */
#define	USB_PRODUCT_METRICOM_RICOCHET_GS	0x0001		/* Ricochet GS */

/* MGE UPS Systems */
#define	USB_PRODUCT_MGE_UPS1	0x0001		/* MGE UPS SYSTEMS PROTECTIONCENTER 1 */
#define	USB_PRODUCT_MGE_UPS2	0xffff		/* MGE UPS SYSTEMS PROTECTIONCENTER 2 */

/* Micro Star International products */
#define	USB_PRODUCT_MSI_BT_DONGLE	0x1967		/* Bluetooth USB dongle */
#define	USB_PRODUCT_MSI_RT2570	0x6861		/* RT2570 */
#define	USB_PRODUCT_MSI_RT2570_2	0x6865		/* RT2570 */
#define	USB_PRODUCT_MSI_RT2570_3	0x6869		/* RT2570 */

/* Microsoft products */
#define	USB_PRODUCT_MICROSOFT_SIDEPREC	0x0008		/* SideWinder Precision Pro */
#define	USB_PRODUCT_MICROSOFT_INTELLIMOUSE	0x0009		/* IntelliMouse */
#define	USB_PRODUCT_MICROSOFT_NATURALKBD	0x000b		/* Natural Keyboard Elite */
#define	USB_PRODUCT_MICROSOFT_DDS80	0x0014		/* Digital Sound System 80 */
#define	USB_PRODUCT_MICROSOFT_SIDEWINDER	0x001a		/* Sidewinder Precision Racing Wheel */
#define	USB_PRODUCT_MICROSOFT_INETPRO	0x001c		/* Internet Keyboard Pro */
#define	USB_PRODUCT_MICROSOFT_INTELLIEYE	0x0025		/* IntelliEye mouse */
#define	USB_PRODUCT_MICROSOFT_INETPRO2	0x002b		/* Internet Keyboard Pro */
#define	USB_PRODUCT_MICROSOFT_MN110	0x007a		/* 10/100 USB NIC */

/* Microtech products */
#define	USB_PRODUCT_MICROTECH_SCSIDB25	0x0004		/* USB-SCSI-DB25 */
#define	USB_PRODUCT_MICROTECH_SCSIHD50	0x0005		/* USB-SCSI-HD50 */
#define	USB_PRODUCT_MICROTECH_DPCM	0x0006		/* USB CameraMate */
#define	USB_PRODUCT_MICROTECH_FREECOM	0xfc01		/* Freecom USB-IDE */

/* Microtek products */
#define	USB_PRODUCT_MICROTEK_336CX	0x0094		/* Phantom 336CX - C3 scanner */
#define	USB_PRODUCT_MICROTEK_X6U	0x0099		/* ScanMaker X6 - X6U */
#define	USB_PRODUCT_MICROTEK_C6	0x009a		/* Phantom C6 scanner */
#define	USB_PRODUCT_MICROTEK_336CX2	0x00a0		/* Phantom 336CX - C3 scanner */
#define	USB_PRODUCT_MICROTEK_V6USL	0x00a3		/* ScanMaker V6USL */
#define	USB_PRODUCT_MICROTEK_V6USL2	0x80a3		/* ScanMaker V6USL */
#define	USB_PRODUCT_MICROTEK_V6UL	0x80ac		/* ScanMaker V6UL */

/* Microtune, Inc. products */
#define	USB_PRODUCT_MICROTUNE_BT_DONGLE	0x1000		/* Bluetooth USB dongle */

/* Midiman products */
#define	USB_PRODUCT_MIDIMAN_MIDISPORT2X2	0x1001		/* Midisport 2x2 */

/* Minolta Co., Ltd. */
#define	USB_PRODUCT_MINOLTA_2300	0x4001		/* Dimage 2300 */
#define	USB_PRODUCT_MINOLTA_S304	0x4007		/* Dimage S304 */
#define	USB_PRODUCT_MINOLTA_X	0x4009		/* Dimage X */
#define	USB_PRODUCT_MINOLTA_5400	0x400e		/* Dimage 5400 */

/* Mitsumi products */
#define	USB_PRODUCT_MITSUMI_CDRRW	0x0000		/* CD-R/RW Drive */
#define	USB_PRODUCT_MITSUMI_BT_DONGLE	0x641f		/* Bluetooth USB dongle */

/* Motorola products */
#define	USB_PRODUCT_MOTOROLA_MC141555	0x1555		/* MC141555 hub controller */
#define	USB_PRODUCT_MOTOROLA_SB4100	0x4100		/* SB4100 USB Cable Modem */
#define	USB_PRODUCT_MOTOROLA2_A41XV32X	0x2a22		/* A41x/V32x Mobile Phones */
#define	USB_PRODUCT_MOTOROLA2_E398	0x4810		/* E398 Mobile Phone */

/* MultiTech products */
#define	USB_PRODUCT_MULTITECH_ATLAS	0xf101		/* MT5634ZBA-USB modem */

/* Mustek products */
#define	USB_PRODUCT_MUSTEK_1200CU	0x0001		/* 1200 CU scanner */
#define	USB_PRODUCT_MUSTEK_600CU	0x0002		/* 600 CU scanner */
#define	USB_PRODUCT_MUSTEK_1200USB	0x0003		/* 1200 USB scanner */
#define	USB_PRODUCT_MUSTEK_1200UB	0x0006		/* 1200 UB scanner */
#define	USB_PRODUCT_MUSTEK_1200USBPLUS	0x0007		/* 1200 USB Plus scanner */
#define	USB_PRODUCT_MUSTEK_1200CUPLUS	0x0008		/* 1200 CU Plus scanner */
#define	USB_PRODUCT_MUSTEK_BEARPAW1200F	0x0010		/* BearPaw 1200F scanner */
#define	USB_PRODUCT_MUSTEK_BEARPAW1200TA	0x021e		/* BearPaw 1200TA scanner */
#define	USB_PRODUCT_MUSTEK_600USB	0x0873		/* 600 USB scanner */
#define	USB_PRODUCT_MUSTEK_MDC800	0xa800		/* MDC-800 digital camera */

/* M-Systems products */
#define	USB_PRODUCT_MSYSTEMS_DISKONKEY	0x0010		/* DiskOnKey */
#define	USB_PRODUCT_MSYSTEMS_DISKONKEY2	0x0011		/* DiskOnKey */

/* National Semiconductor */
#define	USB_PRODUCT_NATIONAL_BEARPAW1200	0x1000		/* BearPaw 1200 */
#define	USB_PRODUCT_NATIONAL_BEARPAW2400	0x1001		/* BearPaw 2400 */

/* NEC products */
#define	USB_PRODUCT_NEC_HUB	0x55aa		/* hub */
#define	USB_PRODUCT_NEC_HUB_B	0x55ab		/* hub */

/* NEODIO products */
#define	USB_PRODUCT_NEODIO_ND3260	0x3260		/* 8-in-1 Multi-format Flash Controller */
#define	USB_PRODUCT_NEODIO_ND5010	0x5010		/* Multi-format Flash Controller */

/* NetChip Technology Products */
#define	USB_PRODUCT_NETCHIP_TURBOCONNECT	0x1080		/* Turbo-Connect */
#define	USB_PRODUCT_NETCHIP_ETHERNETGADGET	0xa4a2		/* Linux Ethernet/RNDIS gadget on pxa210/25x/26x */

/* Netgear products */
#define	USB_PRODUCT_NETGEAR_EA101	0x1001		/* Ethernet */
#define	USB_PRODUCT_NETGEAR_FA101	0x1020		/* Ethernet 10/100, USB1.1 */
#define	USB_PRODUCT_NETGEAR_FA120	0x1040		/* USB 2.0 Ethernet */

/* Nikon products */
#define	USB_PRODUCT_NIKON_E990	0x0102		/* Digital Camera E990 */
#define	USB_PRODUCT_NIKON_LS40	0x4000		/* CoolScan LS40 ED */

/* NovaTech Products */
#define	USB_PRODUCT_NOVATECH_NV902	0x9020		/* NovaTech NV-902W */

/* Olympus products */
#define	USB_PRODUCT_OLYMPUS_C1	0x0102		/* C-1 Digital Camera */
#define	USB_PRODUCT_OLYMPUS_C700	0x0105		/* C-700 Ultra Zoom */

/* OmniVision Technologies, Inc. products */
#define	USB_PRODUCT_OMNIVISION_OV511	0x0511		/* OV511 Camera */
#define	USB_PRODUCT_OMNIVISION_OV511PLUS	0xa511		/* OV511+ Camera */

/* OnSpec Electronic, Inc. */
#define	USB_PRODUCT_ONSPEC_UCF100	0xa400		/* FlashLink UCF-100 CompactFlash Reader */

/* Palm Computing, Inc. product */
#define	USB_PRODUCT_PALM_SERIAL	0x0080		/* USB Serial */
#define	USB_PRODUCT_PALM_M500	0x0001		/* Palm m500 */
#define	USB_PRODUCT_PALM_M505	0x0002		/* Palm m505 */
#define	USB_PRODUCT_PALM_M515	0x0003		/* Palm m515 */
#define	USB_PRODUCT_PALM_I705	0x0020		/* Palm i705 */
#define	USB_PRODUCT_PALM_TUNGSTEN_Z	0x0031		/* Palm Tungsten Z */
#define	USB_PRODUCT_PALM_M125	0x0040		/* Palm m125 */
#define	USB_PRODUCT_PALM_M130	0x0050		/* Palm m130 */
#define	USB_PRODUCT_PALM_TUNGSTEN_T	0x0060		/* Palm Tungsten T */
#define	USB_PRODUCT_PALM_ZIRE31	0x0061		/* Palm Zire 31 */
#define	USB_PRODUCT_PALM_ZIRE	0x0070		/* Palm Zire */

/* Panasonic products */
#define	USB_PRODUCT_PANASONIC_KXL840AN	0x0d01		/* CD-R Drive KXL-840AN */
#define	USB_PRODUCT_PANASONIC_KXLRW32AN	0x0d09		/* CD-R Drive KXL-RW32AN */
#define	USB_PRODUCT_PANASONIC_KXLCB20AN	0x0d0a		/* CD-R Drive KXL-CB20AN */
#define	USB_PRODUCT_PANASONIC_KXLCB35AN	0x0d0e		/* DVD-ROM & CD-R/RW */
#define	USB_PRODUCT_PANASONIC_SDCAAE	0x1b00		/* MultiMediaCard */

/* Peracom products */
#define	USB_PRODUCT_PERACOM_SERIAL1	0x0001		/* Serial */
#define	USB_PRODUCT_PERACOM_ENET	0x0002		/* Ethernet */
#define	USB_PRODUCT_PERACOM_ENET3	0x0003		/* At Home Ethernet */
#define	USB_PRODUCT_PERACOM_ENET2	0x0005		/* Ethernet */

/* Philips products */
#define	USB_PRODUCT_PHILIPS_DSS350	0x0101		/* DSS 350 Digital Speaker System */
#define	USB_PRODUCT_PHILIPS_DSS	0x0104		/* DSS XXX Digital Speaker System */
#define	USB_PRODUCT_PHILIPS_HUB	0x0201		/* hub */
#define	USB_PRODUCT_PHILIPS_PCA646VC	0x0303		/* PCA646VC PC Camera */
#define	USB_PRODUCT_PHILIPS_PCVC680K	0x0308		/* PCVC680K Vesta Pro PC Camera */
#define	USB_PRODUCT_PHILIPS_DSS150	0x0471		/* DSS 150 Digital Speaker System */
#define	USB_PRODUCT_PHILIPS_UM10016	0x1552		/* ISP 1581 Hi-Speed USB MPEG2 Encoder Reference Kit */
#define	USB_PRODUCT_PHILIPS_DIVAUSB	0x1801		/* DIVA USB mp3 player */

/* Philips Semiconductor products */
#define	USB_PRODUCT_PHILIPSSEMI_HUB1122	0x1122		/* hub */

/* P.I. Engineering products */
#define	USB_PRODUCT_PIENGINEERING_PS2USB	0x020b		/* PS2 to Mac USB Adapter */

/* Plextor Corp. */
#define	USB_PRODUCT_PLEXTOR_40_12_40U	0x0011		/* PlexWriter 40/12/40U */

/* PLX products */
#define	USB_PRODUCT_PLX_TESTBOARD	0x9060		/* test board */

/* PNY products */
#define	USB_PRODUCT_PNY_ATTACHE2	0x0010		/* USB 2.0 Flash Drive */

/* Primax products */
#define	USB_PRODUCT_PRIMAX_G2X300	0x0300		/* G2-200 scanner */
#define	USB_PRODUCT_PRIMAX_G2E300	0x0301		/* G2E-300 scanner */
#define	USB_PRODUCT_PRIMAX_G2300	0x0302		/* G2-300 scanner */
#define	USB_PRODUCT_PRIMAX_G2E3002	0x0303		/* G2E-300 scanner */
#define	USB_PRODUCT_PRIMAX_9600	0x0340		/* Colorado USB 9600 scanner */
#define	USB_PRODUCT_PRIMAX_600U	0x0341		/* Colorado 600u scanner */
#define	USB_PRODUCT_PRIMAX_6200	0x0345		/* Visioneer 6200 scanner */
#define	USB_PRODUCT_PRIMAX_19200	0x0360		/* Colorado USB 19200 scanner */
#define	USB_PRODUCT_PRIMAX_1200U	0x0361		/* Colorado 1200u scanner */
#define	USB_PRODUCT_PRIMAX_G600	0x0380		/* G2-600 scanner */
#define	USB_PRODUCT_PRIMAX_636I	0x0381		/* ReadyScan 636i */
#define	USB_PRODUCT_PRIMAX_G2600	0x0382		/* G2-600 scanner */
#define	USB_PRODUCT_PRIMAX_G2E600	0x0383		/* G2E-600 scanner */
#define	USB_PRODUCT_PRIMAX_COMFORT	0x4d01		/* Comfort */
#define	USB_PRODUCT_PRIMAX_MOUSEINABOX	0x4d02		/* Mouse-in-a-Box */
#define	USB_PRODUCT_PRIMAX_PCGAUMS1	0x4d04		/* Sony PCGA-UMS1 */

/* Prolific products */
#define	USB_PRODUCT_PROLIFIC_PL2301	0x0000		/* PL2301 Host-Host interface */
#define	USB_PRODUCT_PROLIFIC_PL2302	0x0001		/* PL2302 Host-Host interface */
#define	USB_PRODUCT_PROLIFIC_RSAQ2	0x04bb		/* PL2303 Serial (IODATA USB-RSAQ2) */
#define	USB_PRODUCT_PROLIFIC_PL2303	0x2303		/* PL2303 Serial (ATEN/IOGEAR UC232A) */
#define	USB_PRODUCT_PROLIFIC_PL2305	0x2305		/* Parallel printer */
#define	USB_PRODUCT_PROLIFIC_ATAPI4	0x2307		/* ATAPI-4 Controller */
#define	USB_PRODUCT_PROLIFIC_PL2501	0x2501		/* PL2501 Host-Host interface */
#define	USB_PRODUCT_PROLIFIC_PHAROS	0xaaa0		/* Prolific Pharos */
#define	USB_PRODUCT_PROLIFIC_RSAQ3	0xaaa2		/* PL2303 Serial adapter (IODATA USB-RSAQ3) */
#define	USB_PRODUCT_PROLIFIC2_WSIM	0x2001		/* Willcom WSIM */

/* Putercom products */
#define	USB_PRODUCT_PUTERCOM_UPA100	0x047e		/* USB-1284 BRIDGE */

/* Qualcomm products */
#define	USB_PRODUCT_QUALCOMM_CDMA_MSM	0x3196		/* CDMA Technologies MSM modem */
#define	USB_PRODUCT_QUALCOMM2_CDMA_MSM	0x6000		/* CDMA Technologies MSM phone */

/* Qtronix products */
#define	USB_PRODUCT_QTRONIX_980N	0x2011		/* Scorpion-980N keyboard */

/* Quickshot products */
#define	USB_PRODUCT_QUICKSHOT_STRIKEPAD	0x6238		/* USB StrikePad */

/* Radio Shack */
#define	USB_PRODUCT_RADIOSHACK_USBCABLE	0x4026		/* USB to Serial Cable */

/* Rainbow Technologies products */
#define	USB_PRODUCT_RAINBOW_IKEY2000	0x1200		/* i-Key 2000 */

/* Ralink Technology products */
#define	USB_PRODUCT_RALINK_RT2570	0x1706		/* RT2500USB wireless adapter */
#define	USB_PRODUCT_RALINK_RT2570_2	0x2570		/* RT2500USB wireless adapter */

/* ReakTek products */
#define	USB_PRODUCT_REALTEK_USBKR100	0x8150		/* USBKR100 USB Ethernet (GREEN HOUSE) */

/* Roland products */
#define	USB_PRODUCT_ROLAND_UM1	0x0009		/* UM-1 MIDI I/F */
#define	USB_PRODUCT_ROLAND_UM880N	0x0014		/* EDIROL UM-880 MIDI I/F (native) */
#define	USB_PRODUCT_ROLAND_UM880G	0x0015		/* EDIROL UM-880 MIDI I/F (generic) */

/* Rockfire products */
#define	USB_PRODUCT_ROCKFIRE_GAMEPAD	0x2033		/* gamepad 203USB */

/* RATOC Systems products */
#define	USB_PRODUCT_RATOC_REXUSB60	0xb000		/* REX-USB60 */

/* Samsung products */
#define	USB_PRODUCT_SAMSUNG_ML6060	0x3008		/* ML-6060 laser printer */

/* SanDisk products */
#define	USB_PRODUCT_SANDISK_SDDR05A	0x0001		/* ImageMate SDDR-05a */
#define	USB_PRODUCT_SANDISK_SDDR05	0x0005		/* ImageMate SDDR-05 */
#define	USB_PRODUCT_SANDISK_SDDR31	0x0002		/* ImageMate SDDR-31 */
#define	USB_PRODUCT_SANDISK_SDDR12	0x0100		/* ImageMate SDDR-12 */
#define	USB_PRODUCT_SANDISK_SDDR09	0x0200		/* ImageMate SDDR-09 */
#define	USB_PRODUCT_SANDISK_SDDR75	0x0810		/* ImageMate SDDR-75 */
#define	USB_PRODUCT_SANDISK_SDCZ2_256	0x7104		/* Cruzer Mini 256MB */
#define	USB_PRODUCT_SANDISK_SDCZ4_128	0x7112		/* Cruzer Micro 128MB */
#define	USB_PRODUCT_SANDISK_SDCZ4_256	0x7113		/* Cruzer Micro 256MB */

/* Sanyo Electric products */
#define	USB_PRODUCT_SANYO_SCP4900	0x0701		/* Sanyo SCP-4900 USB Phone */

/* ScanLogic products */
#define	USB_PRODUCT_SCANLOGIC_SL11R	0x0002		/* SL11R IDE Adapter */
#define	USB_PRODUCT_SCANLOGIC_336CX	0x0300		/* Phantom 336CX - C3 scanner */

/* Sharp products */
#define	USB_PRODUCT_SHARP_SL5500	0x8004		/* Zaurus SL-5500 PDA */
#define	USB_PRODUCT_SHARP_SLA300	0x8005		/* Zaurus SL-A300 PDA */
#define	USB_PRODUCT_SHARP_SL5600	0x8006		/* Zaurus SL-5600 PDA */
#define	USB_PRODUCT_SHARP_SLC700	0x8007		/* Zaurus SL-C700 PDA */
#define	USB_PRODUCT_SHARP_SLC750	0x9031		/* Zaurus SL-C750 PDA */

/* Shuttle Technology products */
#define	USB_PRODUCT_SHUTTLE_EUSB	0x0001		/* E-USB Bridge */
#define	USB_PRODUCT_SHUTTLE_EUSCSI	0x0002		/* eUSCSI Bridge */
#define	USB_PRODUCT_SHUTTLE_SDDR09	0x0003		/* ImageMate SDDR09 */
#define	USB_PRODUCT_SHUTTLE_ZIOMMC	0x0006		/* eUSB MultiMediaCard Adapter */
#define	USB_PRODUCT_SHUTTLE_HIFD	0x0007		/* Sony Hifd */
#define	USB_PRODUCT_SHUTTLE_EUSBATAPI	0x0009		/* eUSB ATA/ATAPI Adapter */
#define	USB_PRODUCT_SHUTTLE_CF	0x000a		/* eUSB CompactFlash Adapter */
#define	USB_PRODUCT_SHUTTLE_EUSCSI_B	0x000b		/* eUSCSI Bridge */
#define	USB_PRODUCT_SHUTTLE_EUSCSI_C	0x000c		/* eUSCSI Bridge */
#define	USB_PRODUCT_SHUTTLE_CDRW	0x0101		/* CD-RW Device */
#define	USB_PRODUCT_SHUTTLE_EUSBORCA	0x0325		/* eUSB ORCA Quad Reader */

/* Siemens products */
#define	USB_PRODUCT_SIEMENS_SPEEDSTREAM	0x1001		/* SpeedStream USB */

/* Sierra Wireless products */
#define	USB_PRODUCT_SIERRA_MC5720	0x0218		/* MC5720 Wireless Modem */

/* Sigmatel products */
#define	USB_PRODUCT_SIGMATEL_I_BEAD100	0x8008		/* i-Bead 100 MP3 Player */

/* SIIG products */
#define	USB_PRODUCT_SIIG_DIGIFILMREADER	0x0004		/* DigiFilm-Combo Reader */
#define	USB_PRODUCT_SIIG_WINTERREADER	0x0330		/* WINTERREADER Reader */
#define	USB_PRODUCT_SIIG2_US2308	0x0421		/* Serial */

/* Silicom products */
#define	USB_PRODUCT_SILICOM_GPE	0x0002		/* Psion Gold Port Ethernet */

/* Silicon Portals Inc. */
#define	USB_PRODUCT_SILICONPORTALS_YAPPH_NF	0x0200		/* YAP Phone (no firmware) */
#define	USB_PRODUCT_SILICONPORTALS_YAPPHONE	0x0201		/* YAP Phone */

/* Sirius Technologies products */
#define	USB_PRODUCT_SIRIUS_ROADSTER	0x0001		/* NetComm Roadster II 56 USB */

/* Sitecom products */
#define	USB_PRODUCT_SITECOM_LN029	0x182d		/* USB 2.0 Ethernet */
#define	USB_PRODUCT_SITECOM_SERIAL	0x2068		/* USB to serial cable (v2) */

/* SmartBridges products */
#define	USB_PRODUCT_SMARTBRIDGES_SMARTLINK	0x0001		/* SmartLink USB ethernet */
#define	USB_PRODUCT_SMARTBRIDGES_SMARTNIC	0x0003		/* smartNIC 2 PnP ethernet */

/* SMC products */
#define	USB_PRODUCT_SMC_2102USB	0x0100		/* 10Mbps ethernet */
#define	USB_PRODUCT_SMC_2202USB	0x0200		/* 10/100 ethernet */
#define	USB_PRODUCT_SMC_2206USB	0x0201		/* EZ Connect USB Ethernet */
#define	USB_PRODUCT_SMC_2862WG	0xee13		/* EZ Connect wireless adapter */
#define	USB_PRODUCT_SMC2_2020HUB	0x2020		/* USB Hub */
#define	USB_PRODUCT_SMC3_2662WUSB	0xa002		/* 2662W-AR Wireless */

/* SOHOware products */
#define	USB_PRODUCT_SOHOWARE_NUB100	0x9100		/* 10/100 USB Ethernet */

/* SOLID YEAR products */
#define	USB_PRODUCT_SOLIDYEAR_KEYBOARD	0x2101		/* Solid Year USB keyboard */

/* SONY products */
#define	USB_PRODUCT_SONY_DSC	0x0010		/* DSC cameras */
#define	USB_PRODUCT_SONY_MSACUS1	0x002d		/* Memorystick MSAC-US1 */
#define	USB_PRODUCT_SONY_HANDYCAM	0x002e		/* Handycam */
#define	USB_PRODUCT_SONY_MSC	0x0032		/* MSC memory stick slot */
#define	USB_PRODUCT_SONY_CLIE_35	0x0038		/* Sony Clie v3.5 */
#define	USB_PRODUCT_SONY_CLIE_40	0x0066		/* Sony Clie v4.0 */
#define	USB_PRODUCT_SONY_CLIE_40_MS	0x006d		/* Sony Clie v4.0 Memory Stick slot */
#define	USB_PRODUCT_SONY_CLIE_S360	0x0095		/* Sony Clie s360 */
#define	USB_PRODUCT_SONY_CLIE_41_MS	0x0099		/* Sony Clie v4.1 Memory Stick slot */
#define	USB_PRODUCT_SONY_CLIE_41	0x009a		/* Sony Clie v4.1 */
#define	USB_PRODUCT_SONY_CLIE_NX60	0x00da		/* Sony Clie nx60 */
#define	USB_PRODUCT_SONY_CLIE_TJ37	0x0169		/* Sony Clie tj37 */

/* Sony Ericsson products */
#define	USB_PRODUCT_SONYERICSSON_DCU10	0x0528		/* USB Cable */

/* SOURCENEXT products */
#define	USB_PRODUCT_SOURCENEXT_KEIKAI8	0x039f		/* KeikaiDenwa 8 */
#define	USB_PRODUCT_SOURCENEXT_KEIKAI8_CHG	0x012e		/* KeikaiDenwa 8 with charger */

/* STMicroelectronics products */
#define	USB_PRODUCT_STMICRO_BIOCPU	0x2016		/* Biometric Coprocessor */
#define	USB_PRODUCT_STMICRO_COMMUNICATOR	0x7554		/* USB Communicator */

/* STSN products */
#define	USB_PRODUCT_STSN_STSN0001	0x0001		/* Internet Access Device */

/* SUN Corporation products */
#define	USB_PRODUCT_SUNTAC_DS96L	0x0003		/* SUNTAC U-Cable type D2 */
#define	USB_PRODUCT_SUNTAC_PS64P1	0x0005		/* SUNTAC U-Cable type P1 */
#define	USB_PRODUCT_SUNTAC_VS10U	0x0009		/* SUNTAC Slipper U */
#define	USB_PRODUCT_SUNTAC_IS96U	0x000a		/* SUNTAC Ir-Trinity */
#define	USB_PRODUCT_SUNTAC_AS64LX	0x000b		/* SUNTAC U-Cable type A3 */
#define	USB_PRODUCT_SUNTAC_AS144L4	0x0011		/* SUNTAC U-Cable type A4 */

/* Sun Microsystems products */
#define	USB_PRODUCT_SUN2_KEYBOARD	0x0005		/* Type 6 USB keyboard */
#define USB_PRODUCT_SUN_KEYBOARD	0x0005		/* Type 6 USB keyboard */
/* XXX The above is a North American PC style keyboard possibly */
#define	USB_PRODUCT_SUN2_MOUSE	0x0100		/* Type 6 USB mouse */
#define	USB_PRODUCT_SUN_MOUSE	0x0100		/* Type 6 USB mouse */

/* Supra products */
#define	USB_PRODUCT_DIAMOND2_SUPRAEXPRESS56K	0x07da		/* Supra Express 56K modem */
#define	USB_PRODUCT_DIAMOND2_SUPRA2890	0x0b4a		/* SupraMax 2890 56K Modem */
#define	USB_PRODUCT_DIAMOND2_RIO600USB	0x5001		/* Rio 600 USB */
#define	USB_PRODUCT_DIAMOND2_RIO800USB	0x5002		/* Rio 800 USB */

/* System TALKS, Inc. */
#define	USB_PRODUCT_SYSTEMTALKS_SGCX2UL	0x1920		/* SGC-X2UL */

/* Taugagreining products */
#define	USB_PRODUCT_TAUGA_CAMERAMATE	0x0005		/* CameraMate (DPCM_USB) */

/* TDK products */
#define	USB_PRODUCT_TDK_UPA9664	0x0115		/* USB-PDC Adapter UPA9664 */
#define	USB_PRODUCT_TDK_UCA1464	0x0116		/* USB-cdmaOne Adapter UCA1464 */
#define	USB_PRODUCT_TDK_UHA6400	0x0117		/* USB-PHS Adapter UHA6400 */
#define	USB_PRODUCT_TDK_UPA6400	0x0118		/* USB-PHS Adapter UPA6400 */
#define	USB_PRODUCT_TDK_BT_DONGLE	0x0309		/* Bluetooth USB dongle */

/* TEAC products */
#define	USB_PRODUCT_TEAC_FD05PUB	0x0000		/* FD-05PUB floppy */

/* Telex Communications products */
#define	USB_PRODUCT_TELEX_MIC1	0x0001		/* Enhanced USB Microphone */

/* Texas Intel products */
#define	USB_PRODUCT_TI_UTUSB41	0x1446		/* UT-USB41 hub */
#define	USB_PRODUCT_TI_TUSB2046	0x2046		/* TUSB2046 hub */

/* Thrustmaster products */
#define	USB_PRODUCT_THRUST_FUSION_PAD	0xa0a3		/* Fusion Digital Gamepad */

/* Toshiba Corporation products */
#define	USB_PRODUCT_TOSHIBA_POCKETPC_E740	0x0706		/* PocketPC e740 */

/* Trek Technology products */
#define	USB_PRODUCT_TREK_THUMBDRIVE	0x1111		/* ThumbDrive */
#define	USB_PRODUCT_TREK_THUMBDRIVE_8MB	0x9988		/* ThumbDrive_8MB */

/* Tripp-Lite products */
#define	USB_PRODUCT_TRIPPLITE_U209	0x2008		/* Serial */

/* Trumpion products */
#define	USB_PRODUCT_TRUMPION_C3310	0x1100		/* Comotron C3310 MP3 player */

/* TwinMOS */
#define	USB_PRODUCT_TWINMOS_MDIV	0x1325		/* Memory Disk IV */

/* Ultima products */
#define	USB_PRODUCT_ULTIMA_1200UBPLUS	0x4002		/* 1200 UB Plus scanner */

/* UMAX products */
#define	USB_PRODUCT_UMAX_ASTRA1236U	0x0002		/* Astra 1236U Scanner */
#define	USB_PRODUCT_UMAX_ASTRA1220U	0x0010		/* Astra 1220U Scanner */
#define	USB_PRODUCT_UMAX_ASTRA2000U	0x0030		/* Astra 2000U Scanner */
#define	USB_PRODUCT_UMAX_ASTRA2100U	0x0130		/* Astra 2100U Scanner */
#define	USB_PRODUCT_UMAX_ASTRA2200U	0x0230		/* Astra 2200U Scanner */
#define	USB_PRODUCT_UMAX_ASTRA3400	0x0060		/* Astra 3400 Scanner */

/* Universal Access products */
#define	USB_PRODUCT_UNIACCESS_PANACHE	0x0101		/* Panache Surf USB ISDN Adapter */

/* VidzMedia products */
#define	USB_PRODUCT_VIDZMEDIA_MONSTERTV	0x4fb1		/* MonsterTV P2H */

/* Vision products */
#define	USB_PRODUCT_VISION_VC6452V002	0x0002		/* CPiA Camera */

/* Visioneer products */
#define	USB_PRODUCT_VISIONEER_7600	0x0211		/* OneTouch 7600 */
#define	USB_PRODUCT_VISIONEER_5300	0x0221		/* OneTouch 5300 */
#define	USB_PRODUCT_VISIONEER_3000	0x0224		/* Scanport 3000 */
#define	USB_PRODUCT_VISIONEER_6100	0x0231		/* OneTouch 6100 */
#define	USB_PRODUCT_VISIONEER_6200	0x0311		/* OneTouch 6200 */
#define	USB_PRODUCT_VISIONEER_8100	0x0321		/* OneTouch 8100 */
#define	USB_PRODUCT_VISIONEER_8600	0x0331		/* OneTouch 8600 */

/* Vodafone products */
#define	USB_PRODUCT_VODAFONE_MC3G	0x5000		/* Mobile Connect 3G datacard */

/* VTech products */
#define	USB_PRODUCT_VTECH_RT2570	0x3012		/* RT2570 */

/* Wacom products */
#define	USB_PRODUCT_WACOM_CT0405U	0x0000		/* CT-0405-U Tablet */
#define	USB_PRODUCT_WACOM_GRAPHIRE	0x0010		/* Graphire */
#define	USB_PRODUCT_WACOM_GRAPHIRE3_4X5	0x0013		/* Graphire 3 4x5 */
#define	USB_PRODUCT_WACOM_INTUOSA5	0x0021		/* Intuos A5 */
#define	USB_PRODUCT_WACOM_GD0912U	0x0022		/* Intuos 9x12 Graphics Tablet */

/* Western Digital products */
#define	USB_PRODUCT_WESTERN_EXTHDD	0x0400		/* External HDD */
#define	USB_PRODUCT_WESTERN_HUB	0x0500		/* USB HUB */

/* Windbond Electronics */
#define	USB_PRODUCT_WINBOND_UH104	0x5518		/* 4-port USB Hub */

/* Xirlink products */
#define	USB_PRODUCT_XIRLINK_PCCAM	0x8080		/* IBM PC Camera */

/* Y-E Data products */
#define	USB_PRODUCT_YEDATA_FLASHBUSTERU	0x0000		/* Flashbuster-U */

/* Yamaha products */
#define	USB_PRODUCT_YAMAHA_UX256	0x1000		/* UX256 MIDI I/F */
#define	USB_PRODUCT_YAMAHA_UX96	0x1008		/* UX96 MIDI I/F */
#define	USB_PRODUCT_YAMAHA_RTA54I	0x4000		/* NetVolante RTA54i Broadband&ISDN Router */
#define	USB_PRODUCT_YAMAHA_RTA55I	0x4004		/* NetVolante RTA55i Broadband VoIP Router */
#define	USB_PRODUCT_YAMAHA_RTW65B	0x4001		/* NetVolante RTW65b Broadband Wireless Router */
#define	USB_PRODUCT_YAMAHA_RTW65I	0x4002		/* NetVolante RTW65i Broadband&ISDN Wireless Router */

/* Yano products */
#define	USB_PRODUCT_YANO_U640MO	0x0101		/* U640MO-03 */

/* Zinwell products */
#define	USB_PRODUCT_ZINWELL_RT2570	0x0260		/* RT2570 */

/* Zoom Telephonics, Inc. products */
#define	USB_PRODUCT_ZOOM_2986L	0x9700		/* 2986L Fax modem */

/* ZyXEL Communication Co. products */
#define	USB_PRODUCT_ZYXEL_OMNI56K	0x1500		/* Omni 56K Plus */
#define	USB_PRODUCT_ZYXEL_980N	0x2011		/* Scorpion-980N keyboard */