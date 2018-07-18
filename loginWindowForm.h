#include <iostream>
#include <Windows.h>
#include <cstring>
#include <string>
#include "uniFuncs.h"

using namespace System;
using namespace System::IO;


#pragma once

namespace WinApp2 {

	
	using namespace System::Data::SqlClient;
	using namespace System::Data::Sql;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for loginWindowForm
	/// </summary>
	public ref class loginWindowForm : public System::Windows::Forms::Form
	{
	public:
		loginWindowForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		String ^ portStr;
		String ^ servAddrStr;
		String ^ servStr;
		Boolean loggedIn;
		settingsVars setStruct;

	public: System::Windows::Forms::Label^  servPassLabel;
	private: System::Windows::Forms::Label^  databaseNameLabel;
	private: System::Windows::Forms::Label^  dbUserNameLabel;
	public: System::Windows::Forms::TextBox^  dbUsernameTextbox;
	private:

	public: System::Windows::Forms::TextBox^  dbNameTextbox;
	private:
	public:


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~loginWindowForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  passwordLabel;
	public: System::Windows::Forms::TextBox^  userPassTextBox;
	private:

	public: System::Windows::Forms::TextBox^  usernameTextBox;
	private:


	private: System::Windows::Forms::Button^  loginButton;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	public: System::Windows::Forms::TextBox^  servPassTextbox;
	private:

	private:
	public: System::Windows::Forms::TextBox^  portTextbox;
	public: System::Windows::Forms::TextBox^  servAddTextbox;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->servPassTextbox = (gcnew System::Windows::Forms::TextBox());
			this->portTextbox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->userPassTextBox = (gcnew System::Windows::Forms::TextBox());
			this->usernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->servAddTextbox = (gcnew System::Windows::Forms::TextBox());
			this->servPassLabel = (gcnew System::Windows::Forms::Label());
			this->databaseNameLabel = (gcnew System::Windows::Forms::Label());
			this->dbNameTextbox = (gcnew System::Windows::Forms::TextBox());
			this->dbUserNameLabel = (gcnew System::Windows::Forms::Label());
			this->dbUsernameTextbox = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->servPassTextbox, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->portTextbox, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 6);
			this->tableLayoutPanel1->Controls->Add(this->passwordLabel, 0, 7);
			this->tableLayoutPanel1->Controls->Add(this->userPassTextBox, 1, 7);
			this->tableLayoutPanel1->Controls->Add(this->usernameTextBox, 1, 6);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 1, 9);
			this->tableLayoutPanel1->Controls->Add(this->label2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->servAddTextbox, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->servPassLabel, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->databaseNameLabel, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->dbNameTextbox, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->dbUserNameLabel, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->dbUsernameTextbox, 1, 4);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 10;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(450, 343);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// servPassTextbox
			// 
			this->servPassTextbox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->servPassTextbox->Location = System::Drawing::Point(230, 171);
			this->servPassTextbox->Margin = System::Windows::Forms::Padding(5);
			this->servPassTextbox->Name = L"servPassTextbox";
			this->servPassTextbox->Size = System::Drawing::Size(215, 20);
			this->servPassTextbox->TabIndex = 5;
			this->servPassTextbox->UseSystemPasswordChar = true;
			this->servPassTextbox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &loginWindowForm::servPassTextbox_KeyPress);
			// 
			// portTextbox
			// 
			this->portTextbox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->portTextbox->Location = System::Drawing::Point(230, 81);
			this->portTextbox->Margin = System::Windows::Forms::Padding(5);
			this->portTextbox->Name = L"portTextbox";
			this->portTextbox->Size = System::Drawing::Size(215, 20);
			this->portTextbox->TabIndex = 2;
			this->portTextbox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &loginWindowForm::portTextbox_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Location = System::Drawing::Point(3, 196);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(219, 30);
			this->label1->TabIndex = 53;
			this->label1->Text = L"Username";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// passwordLabel
			// 
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->passwordLabel->Location = System::Drawing::Point(3, 226);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(219, 30);
			this->passwordLabel->TabIndex = 54;
			this->passwordLabel->Text = L"Password";
			this->passwordLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// userPassTextBox
			// 
			this->userPassTextBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->userPassTextBox->Location = System::Drawing::Point(230, 231);
			this->userPassTextBox->Margin = System::Windows::Forms::Padding(5);
			this->userPassTextBox->Name = L"userPassTextBox";
			this->userPassTextBox->Size = System::Drawing::Size(215, 20);
			this->userPassTextBox->TabIndex = 7;
			this->userPassTextBox->UseSystemPasswordChar = true;
			this->userPassTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &loginWindowForm::passwordTextBox_KeyPress);
			// 
			// usernameTextBox
			// 
			this->usernameTextBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->usernameTextBox->Location = System::Drawing::Point(230, 201);
			this->usernameTextBox->Margin = System::Windows::Forms::Padding(5);
			this->usernameTextBox->Name = L"usernameTextBox";
			this->usernameTextBox->Size = System::Drawing::Size(215, 20);
			this->usernameTextBox->TabIndex = 6;
			this->usernameTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &loginWindowForm::usernameTextBox_KeyPress);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 3;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				100)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->loginButton, 1, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(228, 305);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(219, 35);
			this->tableLayoutPanel2->TabIndex = 55;
			// 
			// loginButton
			// 
			this->loginButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->loginButton->Location = System::Drawing::Point(62, 3);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(94, 29);
			this->loginButton->TabIndex = 8;
			this->loginButton->Text = L"Login";
			this->loginButton->UseVisualStyleBackColor = true;
			this->loginButton->Click += gcnew System::EventHandler(this, &loginWindowForm::loginButton_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Location = System::Drawing::Point(3, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(219, 30);
			this->label2->TabIndex = 56;
			this->label2->Text = L"Server Address";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label3->Location = System::Drawing::Point(3, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(219, 30);
			this->label3->TabIndex = 57;
			this->label3->Text = L"Port";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// servAddTextbox
			// 
			this->servAddTextbox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->servAddTextbox->Location = System::Drawing::Point(230, 51);
			this->servAddTextbox->Margin = System::Windows::Forms::Padding(5);
			this->servAddTextbox->Name = L"servAddTextbox";
			this->servAddTextbox->Size = System::Drawing::Size(215, 20);
			this->servAddTextbox->TabIndex = 1;
			this->servAddTextbox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &loginWindowForm::servAddTextbox_KeyPress);
			// 
			// servPassLabel
			// 
			this->servPassLabel->AutoSize = true;
			this->servPassLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->servPassLabel->Location = System::Drawing::Point(3, 166);
			this->servPassLabel->Name = L"servPassLabel";
			this->servPassLabel->Size = System::Drawing::Size(219, 30);
			this->servPassLabel->TabIndex = 58;
			this->servPassLabel->Text = L"Server Password";
			this->servPassLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// databaseNameLabel
			// 
			this->databaseNameLabel->AutoSize = true;
			this->databaseNameLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->databaseNameLabel->Location = System::Drawing::Point(3, 106);
			this->databaseNameLabel->Name = L"databaseNameLabel";
			this->databaseNameLabel->Size = System::Drawing::Size(219, 30);
			this->databaseNameLabel->TabIndex = 59;
			this->databaseNameLabel->Text = L"DataBase Name";
			this->databaseNameLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dbNameTextbox
			// 
			this->dbNameTextbox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dbNameTextbox->Location = System::Drawing::Point(230, 111);
			this->dbNameTextbox->Margin = System::Windows::Forms::Padding(5);
			this->dbNameTextbox->Name = L"dbNameTextbox";
			this->dbNameTextbox->Size = System::Drawing::Size(215, 20);
			this->dbNameTextbox->TabIndex = 3;
			// 
			// dbUserNameLabel
			// 
			this->dbUserNameLabel->AutoSize = true;
			this->dbUserNameLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dbUserNameLabel->Location = System::Drawing::Point(3, 136);
			this->dbUserNameLabel->Name = L"dbUserNameLabel";
			this->dbUserNameLabel->Size = System::Drawing::Size(219, 30);
			this->dbUserNameLabel->TabIndex = 30;
			this->dbUserNameLabel->Text = L"DB Username";
			this->dbUserNameLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dbUsernameTextbox
			// 
			this->dbUsernameTextbox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dbUsernameTextbox->Location = System::Drawing::Point(230, 141);
			this->dbUsernameTextbox->Margin = System::Windows::Forms::Padding(5);
			this->dbUsernameTextbox->Name = L"dbUsernameTextbox";
			this->dbUsernameTextbox->Size = System::Drawing::Size(215, 20);
			this->dbUsernameTextbox->TabIndex = 4;
			this->dbUsernameTextbox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &loginWindowForm::dbUsernameTextbox_KeyPress);
			// 
			// loginWindowForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(450, 343);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"loginWindowForm";
			this->Text = L"loginWindowForm";
			this->Load += gcnew System::EventHandler(this, &loginWindowForm::loginWindowForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void loginButton_Click(System::Object^  sender, System::EventArgs^  e) {
	loginF();
}

private: System::Void usernameTextBox_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyCode == Keys::Enter) {
		loginF();
	}
}

public: System::Void loginF() {
	servAddrStr = servAddTextbox->Text;
	portStr = portTextbox->Text;
	String ^ userNStr = usernameTextBox->Text;
	String ^ passStr = userPassTextBox->Text;
	String ^ userIDStr;
	 
	servStr = L"Data Source=" + servAddrStr + ";Port=" + portStr + ";Integrated Security=false;Database=" + dbNameTextbox->Text + ";Allow Zero Datetime=True;Convert Zero Datetime=True;User ID="
		+ dbUsernameTextbox->Text + ";Password=" + servPassTextbox->Text + "";
	MySqlConnection^ conDB = gcnew MySqlConnection(servStr);
	MySqlCommand^ cmD = gcnew MySqlCommand("SELECT COUNT(*) FROM users WHERE username='" + userNStr + "' AND CanLogin=1;", conDB);
	cmD->CommandTimeout = 60;
	MySqlCommand^ cmD2 = gcnew MySqlCommand("SELECT PasswordV FROM users WHERE username='" + userNStr + "';", conDB);
	cmD2->CommandTimeout = 60;
	MySqlCommand^ cmD3 = gcnew MySqlCommand("SELECT UserID FROM users WHERE username='" + userNStr + "';", conDB);
	cmD3->CommandTimeout = 60;
	MySqlDataReader ^ myReader, ^myReader2, ^ myReader3;

	try {
		//MessageBox::Show("1", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		conDB->Open();
		myReader = cmD->ExecuteReader();
		myReader->Read();
		int cnt = myReader->GetInt32(0);
		conDB->Close();
		if (cnt == 0) {
			MessageBox::Show("User doesn't exist", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		else if (cnt > 0) {
			//MessageBox::Show("2", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			conDB->Open();
			myReader2 = cmD2->ExecuteReader();
			myReader2->Read();
			String ^ stPass = myReader2->GetString(0);
			conDB->Close();
			conDB->Open();
			myReader3 = cmD2->ExecuteReader();
			myReader3->Read();
			userIDStr = myReader3->GetString(0);
			conDB->Close();
			if (stPass != passStr) {
				MessageBox::Show("Incorrect Password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
			else {
				
				loggedIn = true;
				Close();
			}
		}
	}
	catch (MySqlException ^e) {
		String ^ errorMsg = "Failed to open server with:\nServer Address: " + servAddrStr
			+ "\nPort: " + portStr + "\nUser Name: " + userNStr + "";
		MessageBox::Show(errorMsg, "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}



private: System::Void loginWindowForm_Load(System::Object^  sender, System::EventArgs^  e) {
	//wipeSettingsTxtFile();
	//settingsVars setStruct;
	loggedIn = false;
	//devFunc();
	fillBoxesFromStruct(setStruct);
}

public: System::Void fillBoxesFromStruct(settingsVars setStr) {
	/*servAddTextbox->Text = gcnew String(setStr.lastServerAddr.c_str());
	portTextbox->Text = gcnew String(setStr.lastPort.c_str());
	dbNameTextbox->Text = gcnew String(setStr.lastDBName.c_str());
	dbUsernameTextbox->Text = gcnew String(setStr.lastDBUser.c_str());
	usernameTextBox->Text = gcnew String(setStr.lastUser.c_str());
	servPassTextbox->Text = gcnew String(setStr.lastDBPass.c_str());
	userPassTextBox->Text = gcnew String(setStr.lastPassword.c_str());*/
	if (setStruct.lastPassword != nullptr) {
		servAddTextbox->Text = setStruct.lastServerAddr->ToString();
		portTextbox->Text = setStruct.lastPort;
		dbNameTextbox->Text = setStruct.lastDBName;
		dbUsernameTextbox->Text = setStruct.lastDBUser;
		usernameTextBox->Text = setStruct.lastUser;
		servPassTextbox->Text = setStruct.lastDBPass;
		userPassTextBox->Text = setStruct.lastPassword;
	}
}

private: System::Void devFunc() {
	servAddTextbox->Text = "localhost";
	portTextbox->Text = "3306";
	dbNameTextbox->Text = "mydb";
	dbUsernameTextbox->Text = "root";
	usernameTextBox->Text = "wardk";
	servPassTextbox->Text = "1Tst@R09";
}
public: System::Void wipeSettingsTxtFile() {
	String ^ fileName = "data\\settings.txt";
	StreamWriter^ sw = gcnew StreamWriter(fileName);
	String ^ userString = ";";
	sw->WriteLine(userString);
	sw->Close();

}

private: System::Void servAddTextbox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == (char)13)
		loginF();
}

private: System::Void portTextbox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == (char)13)
		loginF();
}

private: System::Void servPassTextbox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == (char)13)
		loginF();
}

private: System::Void usernameTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == (char)13)
		loginF();
}

private: System::Void passwordTextBox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == (char)13)
		loginF();
}

private: System::Void dbUsernameTextbox_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (e->KeyChar == (char)13)
		loginF();
}
};
}
