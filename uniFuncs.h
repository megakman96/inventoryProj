#ifndef sFuncs // must be unique name in the project
#define sFuncs

#include <string>

using namespace System::IO;
using namespace System;
using namespace System::Data::SqlClient;
using namespace System::Data::Sql;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace MySql::Data::MySqlClient;

value struct settingsVars {
public:
	String ^ color;
	String ^ leftColWid;
	String ^ midColWid;
	String ^ rightColWid;
	String ^ servStr;
	String ^ lastServerAddr;
	String ^ lastPort;
	String ^ lastDBName;
	String ^ lastDBUser;
	String ^ lastDBPass;
	String ^ lastUser;
	String ^ lastPassword;

	//Search preferences
	String ^ seaSN;
	String ^ seaInv;
	String ^ seaStat;
	String ^ seaComm;
	String ^ seaUser;
	String ^ seaLoc;
	String ^ seaDept;
	String ^ seaName;
	String ^ seaModN;
	String ^ seaType;
	String ^ seaBrand;
	String ^ seaUpdater;




	void setVals(String ^  col, String ^  lCW, String ^  mCW, String ^  rCW) {
		color = col;
		leftColWid = lCW;
		midColWid = mCW;
		rightColWid = rCW;
	}
	void setLastVals(String ^  var1, String ^  var2, String ^  var3, String ^  var4, String ^  var5, String ^  var6, String ^  var7) {
		lastServerAddr = var1;
		lastPort = var2;
		lastDBName = var3;
		lastDBUser = var4;
		lastDBPass = var5;
		lastUser = var6;
		lastPassword = var7;
	}

	void setSearchPreferences(String ^  var1, String ^  var2, String ^  var3, String ^  var4, String ^  var5, String ^  var6, String ^  var7,
				String ^  var8, String ^  var9, String ^  var10, String ^  var11, String ^  var12) {
		seaSN = var1;
		seaInv = var2;
		seaStat = var3;
		seaComm = var4;
		seaUser = var5;
		seaLoc = var6;
		seaDept = var7;
		seaName = var8;
		seaModN = var9;
		seaType = var10;
		seaBrand = var11;
		seaUpdater = var12;
	}
	void setSearchPreferences2(int checkInt, String ^ item) {
		switch (checkInt)
		{
		default:
			break;
			case 1:	seaSN = item; break;
			case 0:	seaInv = item; break;
			case 2: seaStat = item; break;
			case 3:	seaComm = item; break;
			case 4:	seaUser = item; break;
			case 10: seaLoc = item; break;
			case 5: seaDept = item; break;
			case 6:	seaName = item; break;
			case 11: seaModN = item; break;
			case 9: seaType = item; break;
			case 8: seaBrand = item; break;
			case 7: seaUpdater = item; break;
		}

	}
	/*Serial Number
Status
Comment
Users
Department
Machine Name
Updater
Brand
Type
Location
Model Number*/


	String ^ getUserPref(int retInt) {
		String ^ outStr;
		switch (retInt)
		{
		default:
			break;
		case 1:	outStr = seaSN; break;
		case 0:	outStr = seaInv; break;
		case 2: outStr = seaStat; break;
		case 3:	outStr = seaComm; break;
		case 4:	outStr = seaUser; break;
		case 10:	outStr = seaLoc; break;
		case 5: outStr = seaDept; break;
		case 6:	outStr = seaName; break;
		case 11:	outStr = seaModN; break;
		case 9: outStr = seaType; break;
		case 8: outStr = seaBrand; break;
		case 7: outStr = seaUpdater; break;
		}
		return outStr;
	}
	/*Inventory Tag
Serial Number
Status
Comment
Users
Department
Machine Name
Updater
Brand
Type
Location
Model Number*/
};

String ^ testFunc();
array<String^>^ getSepStr();
Boolean doesUserHavePermission(Boolean logged);
String^ getUserId(String ^ servStr, String ^ updateUserStr, String ^ updater);
String ^ getUserName(String ^ userIDRef, String ^ servStr);
Boolean checkIfUserExists(String ^ fullNameStr, String ^ servStr);
String ^ makeNameString(String ^ fName, String ^ lName);
String^ getUpdater(String ^ updaterUserNameStr, String ^ servStr);
Boolean checkFieldValidity(String ^ itemToCheck, String ^ tableName, String ^ columnName, String ^ servStr);
Boolean getUpdaterAccess(String ^ servStr, String ^ userNStr);
String ^ getFieldFromMachines(String ^ SNRef, String ^ columnName, String ^ servStr);
Boolean tableTester(String ^ tableNStr, String ^ columnNStr, String ^ entryNStr, String ^ servStr);
Void updateComboFromDBFunc(ComboBox ^ comboRef, String ^ getTable, String ^ getColumn, String ^ servStr);
String ^ getFieldFromMachinesHistory(String ^ SNRef, String ^ columnName, String ^ servStr);
Void writeSettingsToFile(settingsVars stRef);
Void clearColumns(DataGridView ^ dRef);
String ^ getSingleFromDB(String ^ table, String ^ wColumn, String ^ wEntry, String ^ getColumn, String ^ servStr);
Void updateField(String ^ table, String ^ wColumn, String ^ wEntry, String ^ upColumn, String ^ upEntry, String ^ servStr);
Void updateUserSearchPref(String ^ seaSN, String ^ seaInv, String ^ seaStat, String ^ seaComm, String ^ seaUser, String ^ seaLoc, String ^ seaDept,
	String ^ seaName, String ^ seaModN, String ^ seaType, String ^ seaBrand, String ^ seaUpdater, String ^ servStr, String ^ updaterStr);
/*Void setUserSearchPrefVars(String ^ seaSNt, String ^ seaInvtt, String ^ seaStatt, String ^ seaCommt, String ^ seaUsert, String ^ seaLoct, String ^ seaDeptt,
	String ^ seaNamet, String ^ seaModNt, String ^ seaTypet, String ^ seaBrandt, String ^ seaUpdatert, String ^ servStrt, String ^ updaterStrt);*/
Void setUserSearchPrefVars(settingsVars &sStructs, String ^ updaterN, String ^ servStr);
Boolean checkSearchField(String ^ column, String ^ updater, String ^ serverStr);
Void newDBLogUpdate(String ^ servStr, String ^ updater, String ^ updateType, String ^ updateTable, String ^ updateRow);

#endif 
