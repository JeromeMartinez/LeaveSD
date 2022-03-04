/*  Copyright (c) MediaArea.net SARL. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-2-Clause license that can
 *  be found in the LICENSE.txt file in the root of the source tree.
 */

//---------------------------------------------------------------------------
#pragma once
#include "Common/Config.h"
#include <ostream>
using namespace std;
//---------------------------------------------------------------------------

//***************************************************************************
// Help
//***************************************************************************

return_value    Help(ostream& Out, const char* Name, bool Full = false);
return_value    NameVersion(ostream& Out);

//***************************************************************************
// Info
//***************************************************************************

string          NameVersion_Text();
