/*-------------------------------------------------------------------------
 *
 * keywords.h
 *	  lexical token lookup for reserved words in postgres SQL
 *
 *
 * Portions Copyright (c) 1996-2001, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * $Id: keywords.h,v 1.11 2001/10/28 06:26:08 momjian Exp $
 *
 *-------------------------------------------------------------------------
 */
#ifndef KEYWORDS_H
#define KEYWORDS_H

typedef struct ScanKeyword
{
	char	   *name;
	int			value;
} ScanKeyword;

extern ScanKeyword *ScanKeywordLookup(char *text);

#endif	 /* KEYWORDS_H */
