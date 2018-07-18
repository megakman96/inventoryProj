#include <iostream>
//#include <Windows.h>
#include <cstring>
#include <string>
#include "AddUserWindowForm.h"

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
	/// Summary for DeleteItemForm
	/// </summary>
	public ref class DeleteItemForm : public System::Windows::Forms::Form
	{
	public:
		DeleteItemForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		String ^ servStr;

		settingsVars sStruct;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DeleteItemForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	protected:
	private: System::Windows::Forms::Label^  labelText;

	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::Button^  saveButton;
	private: System::Windows::Forms::Button^  closeButton;
	public: System::Windows::Forms::ComboBox^  deleteComboBox;
	private:


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
			this->labelText = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->closeButton = (gcnew System::Windows::Forms::Button());
			this->deleteComboBox = (gcnew System::Windows::Forms::ComboBox());
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
			this->tableLayoutPanel1->Controls->Add(this->labelText, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->deleteComboBox, 1, 1);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(552, 261);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// labelText
			// 
			this->labelText->AutoSize = true;
			this->labelText->Dock = System::Windows::Forms::DockStyle::Fill;
			this->labelText->Location = System::Drawing::Point(3, 115);
			this->labelText->Name = L"labelText";
			this->labelText->Size = System::Drawing::Size(270, 30);
			this->labelText->TabIndex = 0;
			this->labelText->Text = L"New Department Name";
			this->labelText->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->saveButton, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->closeButton, 1, 1);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(279, 148);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(270, 110);
			this->tableLayoutPanel2->TabIndex = 2;
			// 
			// saveButton
			// 
			this->saveButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->saveButton->Location = System::Drawing::Point(3, 78);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(129, 29);
			this->saveButton->TabIndex = 0;
			this->saveButton->Text = L"Save";
			this->saveButton->UseVisualStyleBackColor = true;
			this->saveButton->Click += gcnew System::EventHandler(this, &DeleteItemForm::saveButton_Click);
			// 
			// closeButton
			// 
			this->closeButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->closeButton->Location = System::Drawing::Point(138, 78);
			this->closeButton->Name = L"closeButton";
			this->closeButton->Size = System::Drawing::Size(129, 29);
			this->closeButton->TabIndex = 1;
			this->closeButton->Text = L"Close";
			this->closeButton->UseVisualStyleBackColor = true;
			this->closeButton->Click += gcnew System::EventHandler(this, &DeleteItemForm::closeButton_Click);
			// 
			// deleteComboBox
			// 
			this->deleteComboBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->deleteComboBox->FormattingEnabled = true;
			this->deleteComboBox->Location = System::Drawing::Point(279, 118);
			this->deleteComboBox->Name = L"deleteComboBox";
			this->deleteComboBox->Size = System::Drawing::Size(270, 21);
			this->deleteComboBox->TabIndex = 3;
			// 
			// DeleteItemForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(552, 261);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"DeleteItemForm";
			this->Text = L"DeleteItemForm";
			this->Load += gcnew System::EventHandler(this, &DeleteItemForm::DeleteItemForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void saveButton_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ delStr = deleteComboBox->Text;
	String ^ formNameStr = labelText->Text;
	MySqlConnection^ getDbCon1 = gcnew MySqlConnection(servStr);
	MySqlDataReader ^ read1;
	MySqlCommand^ macCmd, ^ macCmd2;
	if (formNameStr == "Delete Department") {
		MySqlCommand^ macCmd = gcnew MySqlCommand("DELETE FROM departments WHERE Department='" + delStr + "';", getDbCon1);
		getDbCon1->Open();
		macCmd->ExecuteNonQuery();
	}
	else if (formNameStr == "Delete Brand") {
		MySqlCommand^ macCmd = gcnew MySqlCommand("DELETE FROM machinebrands WHERE Brands='" + delStr + "';", getDbCon1);
		getDbCon1->Open();
		macCmd->ExecuteNonQuery();
	}
	else if (formNameStr == "Delete Location") {
		MySqlCommand^ macCmd = gcnew MySqlCommand("DELETE FROM locations WHERE Locations='" + delStr + "';", getDbCon1);
		getDbCon1->Open();
		macCmd->ExecuteNonQuery();
	}
	else if (formNameStr == "Delete Model") {
		MySqlCommand^ macCmd = gcnew MySqlCommand("DELETE FROM machinemodels WHERE ModelNum='" + delStr + "';", getDbCon1);
		getDbCon1->Open();
		macCmd->ExecuteNonQuery();
	}
	else if (formNameStr == "Delete Status") {
		MySqlCommand^ macCmd = gcnew MySqlCommand("DELETE FROM statuses WHERE Statuss='" + delStr + "';", getDbCon1);
		getDbCon1->Open();
		macCmd->ExecuteNonQuery();
		}
	else if (formNameStr == "Delete Machine Type") {
		MySqlCommand^ macCmd = gcnew MySqlCommand("DELETE FROM mydb.machinetypes WHERE TypeT='" + delStr + "';", getDbCon1);
		getDbCon1->Open();
		macCmd->ExecuteNonQuery();
	}
	else if (formNameStr == "Update User") {

		getDbCon1->Close();
		AddUserWindowForm ^ updateF = gcnew AddUserWindowForm;
		array<String^>^ nameAr;
		String ^ delimStr = ", ";
		array<Char>^ delimiCar = delimStr->ToCharArray();
		nameAr = delStr->Split(delimiCar);
		String ^ fName = nameAr[2];
		String ^ lName = nameAr[0];
		MySqlCommand^ macCmd2 = gcnew MySqlCommand("SELECT UserID FROM users WHERE FirstName='" + fName + "' AND LastName='" + lName + "';", getDbCon1);
		getDbCon1->Open();
		read1 = macCmd2->ExecuteReader();
		read1->Read();
		int userIDStr = read1->GetInt32(0);
		updateF->sStruct = sStruct;
		updateF->servStr = servStr;
		updateF->setUserUpdateRef(userIDStr);
		updateF->ShowDialog();
	}
	else {
		array<String^>^ nameAr;
		String ^ delimStr = ", ";
		array<Char>^ delimiCar = delimStr->ToCharArray();
		nameAr = delStr->Split(delimiCar);
		String ^ fName = nameAr[2];
		String ^ lName = nameAr[0];
		MySqlCommand^ macCmd = gcnew MySqlCommand("CALL deleteUser('" + fName + "', '" + lName + "')", getDbCon1);
		getDbCon1->Open();
		macCmd->ExecuteNonQuery();
	}
	getDbCon1->Close();
	Close();
}

public: System::Void setVals(String ^ label) {
	 labelText->Text = label;
	 MySqlConnection^ conDB = gcnew MySqlConnection(servStr);
	 MySqlDataReader ^ myReader;
	 String ^ oStr;
	 String ^ fN, ^ lN, ^nN;
	 try {
		 if (label == "Delete Department") {
			 MySqlCommand^ cmD = gcnew MySqlCommand("SELECT * FROM mydb.departments;", conDB);
			 conDB->Open();
			 myReader = cmD->ExecuteReader();
		 }
		 else if (label == "Delete User" || label == "Update User") {
			 //MessageBox::Show("error", "1", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			 MySqlCommand^ cmD = gcnew MySqlCommand("SELECT * FROM users ORDER BY LastName ASC;", conDB);
			 conDB->Open();
			 myReader = cmD->ExecuteReader();

		 }
		 /* else if (label == "Update User") {
			  MySqlCommand^ cmD = gcnew MySqlCommand("SELECT * FROM mydb.users;", conDB);
			  conDB->Open();
			  myReader = cmD->ExecuteReader();
			  saveButton->Text = "Update";
		  }*/
		 else if (label == "Delete Location") {
			 MySqlCommand^ cmD = gcnew MySqlCommand("SELECT * FROM mydb.locations;", conDB);
			 conDB->Open();
			 myReader = cmD->ExecuteReader();
		 }
		 else if (label == "Delete Brand") {
			 MySqlCommand^ cmD = gcnew MySqlCommand("SELECT * FROM mydb.machinebrands;", conDB);
			 conDB->Open();
			 myReader = cmD->ExecuteReader();
		 }
		 else if (label == "Delete Model") {
			 MySqlCommand^ cmD = gcnew MySqlCommand("SELECT * FROM mydb.machinemodels;", conDB);
			 conDB->Open();
			 myReader = cmD->ExecuteReader();
		 }
		 else if (label == "Delete Status") {
			 MySqlCommand^ cmD = gcnew MySqlCommand("SELECT * FROM mydb.statuses;", conDB);
			 conDB->Open();
			 myReader = cmD->ExecuteReader();
		 }
		 else if (label == "Delete Machine Type") {
			 MySqlCommand^ cmD = gcnew MySqlCommand("SELECT * FROM mydb.machinetypes;", conDB);
			 conDB->Open();
			 myReader = cmD->ExecuteReader();
		 }
		 if (label == "Update User") {
			 saveButton->Text = "Update";
		 }
		 if (label == "Delete User" || label == "Update User") {
			 while (myReader->Read()) {
				 fN = myReader->GetString(1);
				 lN = myReader->GetString(2);
				 nN = lN + ", " + fN;
				 deleteComboBox->Items->Add(nN);
			 }
		 }
		 else {
			 while (myReader->Read()) {
				 oStr = myReader->GetString(0);
				 deleteComboBox->Items->Add(oStr);
			 }
		 }
		 conDB->Close();
	 }
	 catch (MySqlException ^e) {
		 String ^ errorMsg = "Failed to open server at setVals in DeleteItemForm!";
		 MessageBox::Show(errorMsg, "Updater Access", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	 }
 }
private: System::Void closeButton_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void DeleteItemForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
