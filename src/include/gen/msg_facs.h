/*
 * The contents of this file are subject to the Interbase Public
 * License Version 1.0 (the "License"); you may not use this file
 * except in compliance with the License. You may obtain a copy
 * of the License at http://www.Inprise.com/IPL.html
 * 
 * Software distributed under the License is distributed on an
 * "AS IS" basis, WITHOUT WARRANTY OF ANY KIND, either express
 * or implied. See the License for the specific language governing
 * rights and limitations under the License.
 * 
 * The content of this file was generated by the Firebird project
 * using the program jrd/codes.epp
 */
/*
 * 
 * *** WARNING *** - This file is automatically generated by codes.e - do not edit!
 * 
 */
/*
 *	MODULE:		msg_facs.h
 *	DESCRIPTION:	ISC message facilities
 *
 */



/******************************/
/*   ISC message facilities   */
/******************************/

#ifndef __cplusplus
typedef
#endif
struct _facilities {
	int  fac_code;
	char *facility;
	};

static CONST struct _facilities facilities[] = {
	{0,  "JRD       "},
	{3,  "GFIX      "},
	{7,  "DSQL      "},
	{8,  "DYN       "},
	{12,  "GBAK      "},
	{18,  "GSEC      "},
	{19,  "LICENSE   "},
	{21,  "GSTAT     "},
	{0, NULL}
};


