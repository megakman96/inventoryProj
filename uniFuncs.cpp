#include "uniFuncs.h"  // player.h must be in the current directory. or use relative or absolute path to it. e.g #include "include/player.h"

String ^ testFunc() {
	return "testing elephants";
}

array<String^>^ getSepStr() {
	StreamReader^ sr = File::OpenText("data/main/userInfo.txt");
	String^ input;
	String ^ str;
	String ^ delimStr = ";;;";
	array<Char>^ delimiCar = delimStr->ToCharArray();
	array<String^>^ sepStr;
	while ((input = sr->ReadLine()) != nullptr)
	{
		sepStr = input->Split(delimiCar);
	}
	sr->Close();
	return sepStr;
}

Boolean doesUserHavePermission(Boolean logged) {
	array<String^>^ sepStr = getSepStr();
	if (sepStr[2] == "1") {
		return true;
	}
	else {
		return false;
	}
}

String^ getUserId(String ^ servStr, String ^ updateUserStr, String ^ updater) {
	String ^ str;
	String ^ userIDStr;
	array<String^>^ sepStr1 = getSepStr();
	MySqlDataReader ^ myReader1;
	try {
		MySqlConnection^ conDB = gcnew MySqlConnection(servStr);
		conDB->Open();
		MySqlCommand^ macCmd = gcnew MySqlCommand("SELECT UserID FROM users WHERE username='" + updateUserStr + "';", conDB);
		myReader1 = macCmd->ExecuteReader();
		while (myReader1->Read()) {
			userIDStr = myReader1->GetString(0);
		}
		String ^ rowStr = "username" + updateUserStr;
		newDBLogUpdate(servStr, updater, "SELECT", "users", rowStr);
		conDB->Close();
	}
	catch (MySqlException ^e) {
		String ^ errorMsg = "Error connecting to the database!";
		MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	return userIDStr;
}

String ^ getUserName(String ^ userIDRef, String ^ servStr) {
	MySqlConnection^ conDB2 = gcnew MySqlConnection(servStr);
	MySqlDataReader ^ myReader2;
	String ^ userName;
	String ^ fN, ^ lN;
	try {
		conDB2->Open();
		MySqlCommand ^ macCmd = gcnew MySqlCommand("SELECT * FROM users WHERE UserID='" + userIDRef + "';", conDB2);
		myReader2 = macCmd->ExecuteReader();
		while (myReader2->Read()) {
			fN = myReader2->GetString(1);
			lN = myReader2->GetString(2);
		}
		userName = makeNameString(fN, lN);
		conDB2->Close();
	}
	catch (MySqlException ^e) {
		String ^ errorMsg = "Error connecting to the database!";
		MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	return userName;
}

Boolean checkIfUserExists(String ^ fullNameStr, String ^ servStr) {
	Boolean exists = false;
	MySqlConnection^ getDbCon1 = gcnew MySqlConnection(servStr);
	array<String^>^ nameAr;
	String ^ delimStr = ", ";
	array<Char>^ delimiCar = delimStr->ToCharArray();
	nameAr = fullNameStr->Split(delimiCar);
	try {
		if (nameAr->Length >= 2) {

			String ^ fName = nameAr[2];
			String ^ lName = nameAr[0];
			MySqlCommand^ cmD = gcnew MySqlCommand("SELECT COUNT(*) FROM users WHERE FirstName='" + fName + "' AND LastName='" + lName + "';", getDbCon1);
			MySqlDataReader ^ myReader;
			getDbCon1->Open();
			myReader = cmD->ExecuteReader();
			myReader->Read();
			int cnt = myReader->GetInt32(0);
			getDbCon1->Close();
			if (cnt > 0) {
				exists = true;
			}
		}
	}
	catch (MySqlException ^e) {
		String ^ errorMsg = "Error connecting to the database!";
		MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	return exists;
}

String ^ makeNameString(String ^ fName, String ^ lName) {
	String ^ nName;
	nName = lName + ", " + fName;
	return nName;
}

String^ getUpdater(String ^ updaterUserNameStr, String ^ servStr) {
	String ^ fName;
	String ^ lName;
	String ^ fullN;
	MySqlDataReader ^ myReader;
	MySqlConnection^ conDB = gcnew MySqlConnection(servStr);
	try {
		conDB->Open();
		MySqlCommand^ macCmd = gcnew MySqlCommand("SELECT * FROM users WHERE username='" + updaterUserNameStr + "';", conDB);
		myReader = macCmd->ExecuteReader();
		while (myReader->Read()) {
			fName = myReader->GetString(1);
			lName = myReader->GetString(2);
		}
		conDB->Close();
		fullN = makeNameString(fName, lName);
	}
	catch (MySqlException ^e) {
		String ^ errorMsg = "Error connecting to the database!";
		MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		fullN = "failed";
	}
	return fullN;
}

Boolean checkFieldValidity(String ^ itemToCheck, String ^ tableName, String ^ columnName, String ^ servStr) {
	Boolean exists = false;
	int cnt = 0;
	MySqlConnection^ conDB = gcnew MySqlConnection(servStr);
	MySqlCommand^ cmD = gcnew MySqlCommand("SELECT COUNT(*) FROM " + tableName + " WHERE " + columnName + "='" + itemToCheck + "';", conDB);
	MySqlDataReader ^ myReader;
	try {
		conDB->Open();
		myReader = cmD->ExecuteReader();
		myReader->Read();
		cnt = myReader->GetInt32(0);
		conDB->Close();
	}
	catch (MySqlException ^e) {
		String ^ errorMsg = "Error connecting to the database at checkFieldValidity!";
		MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	if (cnt > 0) {
		exists = true;
	}
	return exists;
}

 Boolean getUpdaterAccess(String ^ servStr, String ^ userNStr) {
	Boolean isAdmin = false;
	MySqlDataReader ^ myReader;
	MySqlConnection^ conDB = gcnew MySqlConnection(servStr);
	String ^ AdminInt;
	try {
		conDB->Open();
		MySqlCommand^ macCmd = gcnew MySqlCommand("SELECT Admin FROM mydb.users WHERE username='" + userNStr + "';", conDB);
		myReader = macCmd->ExecuteReader();
		myReader->Read();
		AdminInt = myReader->GetString(0);
		if (AdminInt == "1") {
			isAdmin = true;
		}
		conDB->Close();

	}
	catch (MySqlException ^e) {
		String ^ errorMsg = "Failed to open server!";
		MessageBox::Show(errorMsg, "Updater Access", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	return isAdmin;

}

 String ^ getFieldFromMachines(String ^ SNRef, String ^ columnName, String ^ servStr) {
	 String ^ newStr;
	 MySqlConnection^ getDbCon = gcnew MySqlConnection(servStr);
	 MySqlDataReader ^ myReaderGet;
	 try {
		 getDbCon->Open();
		 MySqlCommand ^ macCmd = gcnew MySqlCommand("SELECT * FROM machines WHERE SerialNumber='" + SNRef + "';", getDbCon);
		 myReaderGet = macCmd->ExecuteReader();
		 while (myReaderGet->Read()) {
			 if (columnName == "InventoryTag") {
				 newStr = myReaderGet->GetString(1);
			 }
			 else if (columnName == "SerialNumber") {
				 newStr = myReaderGet->GetString(0);
			 }
			 else if (columnName == "modelNumber") {
				 newStr = myReaderGet->GetString(2);
			 }
			 else if (columnName == "machinetypes_TypeT") {
				 newStr = myReaderGet->GetString(5);
			 }
			 else if (columnName == "machineBrands_Brands") {
				 newStr = myReaderGet->GetString(6);
			 }
			 else if (columnName == "DateOfPurchase") {
				 newStr = myReaderGet->GetString(4);
			 }
		 }
		 getDbCon->Close();
	 }
	 catch (MySqlException ^e) {
		 String ^ errorMsg = "Error connecting to the database! at getFieldFromMachines()";
		 MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	 }
	 return newStr;
 }

 String ^ getFieldFromMachinesHistory(String ^ SNRef, String ^ columnName, String ^ servStr) {
	 String ^ newStr;
	 MySqlConnection^ getDbCon = gcnew MySqlConnection(servStr);
	 MySqlDataReader ^ myReaderGet;
	 try {
		 getDbCon->Open();
		 MySqlCommand ^ macCmd = gcnew MySqlCommand("SELECT " + columnName + " FROM machineshistory WHERE machines_SerialNumber='" + SNRef + "' AND curr='1';", getDbCon);
		 myReaderGet = macCmd->ExecuteReader();
		 while (myReaderGet->Read()) {
			 newStr = myReaderGet->GetString(0);
		 }
		 getDbCon->Close();
	 }
	 catch (MySqlException ^e) {
		 String ^ errorMsg = "Error connecting to the database!";
		 MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	 }
	 return newStr;
 }

 Boolean tableTester(String ^ tableNStr, String ^ columnNStr, String ^ entryNStr, String ^ servStr) {
	 Boolean exists = false;
	 int cnt = 0;
	 MySqlConnection^ conDB = gcnew MySqlConnection(servStr);
	 MySqlCommand^ cmD = gcnew MySqlCommand("SELECT COUNT(*) FROM " + tableNStr + " WHERE " + columnNStr + "='" + entryNStr + "';", conDB);
	 MySqlDataReader ^ myReader;
	 try {
		 conDB->Open();
		 myReader = cmD->ExecuteReader();
		 myReader->Read();
		 cnt = myReader->GetInt32(0);
		 conDB->Close();
	 }
	 catch (MySqlException ^e) {
		 String ^ errorMsg = "Error connecting to the database at tableTester!";
		 MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	 }
	 if (cnt > 0) {
		 exists = true;
	 }
	 return exists;
 }

 Void updateComboFromDBFunc(ComboBox ^ comboRef, String ^ getTable, String ^ getColumn, String ^ servStr) {
	 MySqlConnection^ conDB = gcnew MySqlConnection(servStr);
	 MySqlDataReader ^ myReader;
	 String ^ oStr;
	 MySqlCommand^ cmD = gcnew MySqlCommand("SELECT "+ getColumn +" FROM "+ getTable +";", conDB);
	 try {
		 conDB->Open();
		 myReader = cmD->ExecuteReader();
		 while (myReader->Read()) {
			 oStr = myReader->GetString(0);
			 comboRef->Items->Add(oStr);
		 }
		 conDB->Close();
	 }
	 catch (MySqlException ^e) {
		 String ^ errorMsg = "Error connecting to the database at UpdateComboFromDBFunc!";
		 MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	 }
 }

 Void writeSettingsToFile(settingsVars stRef) {
	 String^ fileName = "data\\settings.txt";
	 String ^ wString = stRef.color + ";" + stRef.leftColWid + ";" + stRef.midColWid + ";" + stRef.rightColWid + ";" +
		 stRef.lastServerAddr + ";" + stRef.lastPort + ";" + stRef.lastDBName + ";" + stRef.lastDBUser + ";" + stRef.lastDBPass + ";" +
		 stRef.lastUser + ";" + stRef.lastPassword + ";";

	 StreamWriter^ sw = gcnew StreamWriter(fileName);
	 sw->WriteLine(wString);
	 sw->Close();
 }

 Void clearColumns(DataGridView ^ dRef) {
	 int n = dRef->ColumnCount;
	 for (int i = 0; i < n; i++) {
		 dRef->Columns->RemoveAt(0);
	 }
 }

 String ^ getSingleFromDB(String ^ table, String ^ wColumn, String ^ wEntry, String ^ getColumn, String ^ servStr) {
	 ///Boolean exists = false;
	 String ^ outStr;
	 MySqlConnection^ conDB = gcnew MySqlConnection(servStr);
	 MySqlCommand^ cmD = gcnew MySqlCommand("SELECT "+getColumn+" FROM " + table + " WHERE " + wColumn + "='" + wEntry + "';", conDB);
	 MySqlDataReader ^ myReader;
	 try {
		 conDB->Open();
		 myReader = cmD->ExecuteReader();
		 myReader->Read();
		 outStr = myReader->GetString(0);
		 conDB->Close();
	 }
	 catch (MySqlException ^e) {
		 String ^ errorMsg = "Error connecting to the database at getSingleFromDB!\n" + getColumn+"\n"+ wEntry+"\n"+wColumn+"\n"+table;
		 MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	 }
	 return outStr;
 }

 Void updateField(String ^ table, String ^ wColumn, String ^ wEntry, String ^ upColumn, String ^ upEntry, String ^ servStr) {
	 MySqlConnection^ conDB = gcnew MySqlConnection(servStr);
	 MySqlCommand^ cmD = gcnew MySqlCommand("UPDATE " + table + " SET "+upColumn+"="+upEntry+" WHERE " + wColumn + "='" + wEntry + "';", conDB);
	 try {
		 conDB->Open();
		 cmD->ExecuteNonQuery();
		 conDB->Close();
	 }
	 catch (MySqlException ^e) {
		 String ^ errorMsg = "Error connecting to the database at updateField!";
		 MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	 }
 }

 Void updateUserSearchPref(String ^ seaSN, String ^ seaInv, String ^ seaStat, String ^ seaComm, String ^ seaUser, String ^ seaLoc, String ^ seaDept,
	 String ^ seaName, String ^ seaModN, String ^ seaType, String ^ seaBrand, String ^ seaUpdater, String ^ servStr, String ^ updaterStr) {
	 MySqlConnection^ conDB = gcnew MySqlConnection(servStr);
	 MySqlCommand^ cmD = gcnew MySqlCommand("UPDATE users SET prefSeaSN = '"+seaSN + "', prefSeaInv = '"+seaInv + "', prefSeaStat = '"+seaStat + "', prefSeaComm = '"+
							seaComm + "', prefSeaUser = '"+seaUser+"', prefSeaLoc = '" +seaLoc+"', prefSeaDept = '"+seaDept+"', prefSeaMName = '"+
							seaName+"', prefSeaModN = '"+seaModN+"', prefSeaType = '"+seaType+"', prefSeaBrand = '"+seaBrand+"', prefSeaUpdater = '"+
							seaUpdater+"' WHERE username = '"+updaterStr+"';", conDB);
	// MySqlDataReader ^ myReader;
	 //essageBox::Show(updaterStr, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	 try {
		 conDB->Open();
		 cmD->ExecuteNonQuery();
		 conDB->Close();
	 }
	 catch (MySqlException ^e) {
		 String ^ errorMsg = "Error connecting to the database at updateUserSearchPref!";
		 MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	 }
 }

 Void setUserSearchPrefVars(settingsVars &sStructs, String ^ updaterN, String ^ servStr) {
	 sStructs.seaInv = getSingleFromDB("users", "username", updaterN, "prefSeaInv", servStr);
	 MessageBox::Show(sStructs.seaInv, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	 sStructs.seaSN = getSingleFromDB("users", "username", updaterN, "prefSeaSN", servStr);
	 sStructs.seaStat = getSingleFromDB("users", "username", updaterN, "prefSeaStat", servStr);
	 sStructs.seaComm = getSingleFromDB("users", "username", updaterN, "prefSeaComm", servStr);
	 sStructs.seaUser = getSingleFromDB("users", "username", updaterN, "prefSeaUser", servStr);
	 sStructs.seaLoc = getSingleFromDB("users", "username", updaterN, "prefSeaLoc", servStr);
	 sStructs.seaDept = getSingleFromDB("users", "username", updaterN, "prefSeaDept", servStr);
	 sStructs.seaName = getSingleFromDB("users", "username", updaterN, "prefSeaMName", servStr);
	 sStructs.seaModN = getSingleFromDB("users", "username", updaterN, "prefSeaModN", servStr);
	 sStructs.seaType = getSingleFromDB("users", "username", updaterN, "prefSeaType", servStr);
	 sStructs.seaBrand = getSingleFromDB("users", "username", updaterN, "prefSeaBrand", servStr);
	 sStructs.seaUpdater = getSingleFromDB("users", "username", updaterN, "prefSeaUpdater", servStr);

 }

 Boolean checkSearchField(String ^ column, String ^ updater, String ^ serverStr) {
	 Boolean tOrF = false;
	 MySqlDataReader ^ myReader;
	 MySqlConnection^ conDB = gcnew MySqlConnection(serverStr);
	 String ^ tInt;
	 try {
		 conDB->Open();
		 MySqlCommand^ macCmd = gcnew MySqlCommand("SELECT "+column+" FROM users WHERE username='" + updater + "';", conDB);
		 myReader = macCmd->ExecuteReader();
		 myReader->Read();
		 tInt = myReader->GetString(0);
		 if (tInt == "1") {
			 tOrF = true;
		 }
		 conDB->Close();
	 }
	 catch (MySqlException ^e) {
		 String ^ errorMsg = "Failed to open server at checkSearchField!";
		 MessageBox::Show(errorMsg, "Updater Access", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	 }
	 return tOrF;
 }

 Void newDBLogUpdate(String ^ servStr, String ^ updater, String ^ updateType, String ^ updateTable, String ^ updateRow) {
	 MySqlDataReader ^ myReader;
	 MySqlConnection^ conDB = gcnew MySqlConnection(servStr);
	 DateTime dtR = DateTime::Now;
	 try {
		 conDB->Open();
		 MySqlCommand^ macCmd = gcnew MySqlCommand("INSERT INTO useractivitylog VALUES (0, "+updater+", "+dtR+", "+updateType+", "+updateTable+", "+updateRow+");", conDB);
		 myReader = macCmd->ExecuteReader();
		 myReader->Read();
		 //tInt = myReader->GetString(0);
		 //if (tInt == "1") {
		//	 tOrF = true;
		 //}
		 conDB->Close();
	 }
	 catch (MySqlException ^e) {
		 String ^ errorMsg = "Failed to open server at newDBLogUpdate!";
		 MessageBox::Show(errorMsg, "Updater Access", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	 }
 }