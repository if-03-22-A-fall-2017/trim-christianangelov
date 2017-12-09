/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.h
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Interface for trim
 * ----------------------------------------------------------
 */

 #ifndef ___TRIM_H
 #define  ___TRIM_H
 #define STRLEN 16
  void 	trim (const char *source, char *trimmed_string);
  void front(char *trimmed_string, int len, int count, int newLen, bool IsTrimmed);
  void back(char *trimmed_string, int len, int count, int newLen, bool IsTrimmed);
 #endif
