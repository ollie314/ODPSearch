/************************************************************************
 
 The contents of this file are subject to the Mozilla Public License
 Version 1.1 (the "License"); you may not use this file except in
 compliance with the License. You may obtain a copy of the License at
 http://www.mozilla.org/MPL/
 
 Software distributed under the License is distributed on an "AS IS"
 basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See the
 License for the specific language governing rights and limitations
 under the License.
 
 The Original Code is Isearch.
 
 The Initial Developer of the Original Code is Clearinghouse for
 Networked Information Discovery and Retrieval.
 
 Portions created by Netscape Communications are Copyright (C) 2001-2002.
 All Rights Reserved.
 
 Portions created by the Clearinghouse for Networked Information
 Discovery and Retrieval are Copyright (C) 1994. All Rights Reserved.
 
************************************************************************/

/* Class STRLIST - String List */

#ifndef STRLIST_HXX
#define STRLIST_HXX

class STRLIST 
  : public VLIST 
{

public:
  STRLIST();
  STRLIST& operator=(const STRLIST& OtherStrlist);
  void AddEntry(const STRING& StringEntry);
  void AddEntry(const CHR* Entry);
  void SetEntry(const SIZE_T Index, const STRING& StringEntry);
  void GetEntry(const SIZE_T Index, STRING* StringEntry) const;
  void Split(const CHR* Separator, const STRING& TheString);
  void Split(const CHR Separator, const STRING& TheString);
  void Join(const CHR* Separator, STRING* StringBuffer);
  SIZE_T SearchCase(const STRING& SearchTerm);
  void GetValue(const CHR* Title, STRING* StringBuffer);
  void GetValue(const STRING& Title, STRING* StringBuffer);

private:
  STRING String;
};

typedef STRLIST* PSTRLIST;

#endif
