#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <tchar.h>
#using <mscorlib.dll>
#include <cstdio>
#include <vector>

#using <System.Transactions.dll>
#using <System.EnterpriseServices.dll>
#using <System.Xml.dll>
#using <System.Drawing.dll>
#using <System.dll>
#using <System.Windows.Forms.dll>
#using <System.Data.dll>

#include <iostream>
#include <windows.h>

//#include "mysql.h" 

#include <stdio.h>
#define SERVER "localhost"
#define USER "root"
#define PASSWORD "1Tst@R09"
#define DATABASE "mydb"

using namespace System::IO;
using namespace System;  



#include "MainForm.h"
#include "ListForm.cpp"
#include "AddDepartmentForm.h"
#include "DeleteItemForm.h"
#include "loginWindowForm.h"
#include "uniFuncs.h"
#include "MessagingForm.h"

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace MySql::Data;
using namespace MySql::Data::MySqlClient;
using namespace System::Data::Sql;

using namespace System::Windows::Forms;
[STAThread]






void main(array<String^>^ args)
{


	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	WinApp2::MyForm form;
	if (CreateDirectory("data", NULL)) {  //Directory created
		form.setBottomStatusMsg("Directory <data> Created");
	}
	else if (ERROR_ALREADY_EXISTS == GetLastError()) {  //Directory already exists.
		form.setBottomStatusMsg("Directory <data> Already exists");
	}
	else {  //failed for some other reason
		form.setBottomStatusMsg("Other Error");
	}

	if (CreateDirectory("data/main", NULL)) {  //Directory created
												   //WinApp2::MyForm form;
		form.setBottomStatusMsg("Directory <data/main> Created");
	}
	else if (ERROR_ALREADY_EXISTS == GetLastError()) {  //Directory already exists.
		form.setBottomStatusMsg("Directory <data/main> Already exists");
	}
	else {  //failed for some other reason
		form.setBottomStatusMsg("Other Error");
	}
	AsyncOperationManager::SynchronizationContext = gcnew WindowsFormsSynchronizationContext();
	Application::Run(%form);

}




