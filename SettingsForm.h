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
	/// Summary for SettingsForm
	/// </summary>
	public ref class SettingsForm : public System::Windows::Forms::Form
	{
	public:
		SettingsForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		settingsVars setStruct;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SettingsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  settingsTabs;
	protected:
	private: System::Windows::Forms::TabPage^  SearchTab;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::CheckedListBox^  searchByChecks;
	private: System::Windows::Forms::Label^  searchChecksTitleLabel;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::Button^  closeButton;
	private: System::Windows::Forms::Button^  saveButton;

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
			this->settingsTabs = (gcnew System::Windows::Forms::TabControl());
			this->SearchTab = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->searchByChecks = (gcnew System::Windows::Forms::CheckedListBox());
			this->searchChecksTitleLabel = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->closeButton = (gcnew System::Windows::Forms::Button());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->settingsTabs->SuspendLayout();
			this->SearchTab->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// settingsTabs
			// 
			this->settingsTabs->Controls->Add(this->SearchTab);
			this->settingsTabs->Controls->Add(this->tabPage2);
			this->settingsTabs->Controls->Add(this->tabPage3);
			this->settingsTabs->Controls->Add(this->tabPage4);
			this->settingsTabs->Controls->Add(this->tabPage5);
			this->settingsTabs->Dock = System::Windows::Forms::DockStyle::Fill;
			this->settingsTabs->Location = System::Drawing::Point(0, 0);
			this->settingsTabs->Name = L"settingsTabs";
			this->settingsTabs->SelectedIndex = 0;
			this->settingsTabs->Size = System::Drawing::Size(838, 404);
			this->settingsTabs->TabIndex = 0;
			// 
			// SearchTab
			// 
			this->SearchTab->Controls->Add(this->tableLayoutPanel1);
			this->SearchTab->Location = System::Drawing::Point(4, 22);
			this->SearchTab->Name = L"SearchTab";
			this->SearchTab->Padding = System::Windows::Forms::Padding(3);
			this->SearchTab->Size = System::Drawing::Size(830, 378);
			this->SearchTab->TabIndex = 0;
			this->SearchTab->Text = L"Search";
			this->SearchTab->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				15)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				15)));
			this->tableLayoutPanel1->Controls->Add(this->searchByChecks, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->searchChecksTitleLabel, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 1, 3);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 15)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 15)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(824, 372);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// searchByChecks
			// 
			this->searchByChecks->Dock = System::Windows::Forms::DockStyle::Fill;
			this->searchByChecks->FormattingEnabled = true;
			this->searchByChecks->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Inventory Tag", L"Serial Number", L"Status",
					L"Comment", L"Users", L"Department", L"Machine Name", L"Updater", L"Brand", L"Type", L"Location", L"Model Number"
			});
			this->searchByChecks->Location = System::Drawing::Point(18, 68);
			this->searchByChecks->Name = L"searchByChecks";
			this->searchByChecks->Size = System::Drawing::Size(788, 251);
			this->searchByChecks->TabIndex = 0;
			// 
			// searchChecksTitleLabel
			// 
			this->searchChecksTitleLabel->AutoSize = true;
			this->searchChecksTitleLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->searchChecksTitleLabel->Location = System::Drawing::Point(18, 15);
			this->searchChecksTitleLabel->Name = L"searchChecksTitleLabel";
			this->searchChecksTitleLabel->Size = System::Drawing::Size(788, 50);
			this->searchChecksTitleLabel->TabIndex = 1;
			this->searchChecksTitleLabel->Text = L"Fields to Search By";
			this->searchChecksTitleLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 3;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				125)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				125)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel2->Controls->Add(this->closeButton, 2, 0);
			this->tableLayoutPanel2->Controls->Add(this->saveButton, 1, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(15, 322);
			this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(794, 35);
			this->tableLayoutPanel2->TabIndex = 2;
			// 
			// closeButton
			// 
			this->closeButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->closeButton->Location = System::Drawing::Point(672, 3);
			this->closeButton->Name = L"closeButton";
			this->closeButton->Size = System::Drawing::Size(119, 29);
			this->closeButton->TabIndex = 0;
			this->closeButton->Text = L"Close";
			this->closeButton->UseVisualStyleBackColor = true;
			this->closeButton->Click += gcnew System::EventHandler(this, &SettingsForm::closeButton_Click);
			// 
			// saveButton
			// 
			this->saveButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->saveButton->Location = System::Drawing::Point(547, 3);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(119, 29);
			this->saveButton->TabIndex = 1;
			this->saveButton->Text = L"Save";
			this->saveButton->UseVisualStyleBackColor = true;
			this->saveButton->Click += gcnew System::EventHandler(this, &SettingsForm::saveButton_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(830, 378);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(830, 378);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(830, 378);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"tabPage4";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabPage5
			// 
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(830, 378);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"tabPage5";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// SettingsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(838, 404);
			this->Controls->Add(this->settingsTabs);
			this->Name = L"SettingsForm";
			this->Text = L"SettingsForm";
			this->Load += gcnew System::EventHandler(this, &SettingsForm::SettingsForm_Load);
			this->settingsTabs->ResumeLayout(false);
			this->SearchTab->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	public: System::Void SettingsForm_Load(System::Object^  sender, System::EventArgs^  e) {
		setUserSearchPrefVars2(setStruct.lastUser, setStruct.servStr);
		//MessageBox::Show(setStruct.seaInv, "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//if (setStruct.seaInv != "1") {
		//	searchByChecks->SetItemChecked(1, true);
		//}
		for (int i = 0; i < 12; i++) {
			if (setStruct.getUserPref(i) == "0") {
				//MessageBox::Show("false", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				searchByChecks->SetItemChecked(i, false);
			}
			else if (setStruct.getUserPref(i) == "1") {
				//MessageBox::Show("true", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				searchByChecks->SetItemChecked(i, true);
			}
			else {
				MessageBox::Show("neither", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
		}

	}
 public: System::Void setUserSearchPrefVars2(String ^ updaterN, String ^ servStr) {
	 setStruct.seaInv = getSingleFromDB("users", "username", updaterN, "prefSeaInv", servStr);
	 //MessageBox::Show(setStruct.seaInv, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	 setStruct.seaSN = getSingleFromDB("users", "username", updaterN, "prefSeaSN", servStr);
	 setStruct.seaStat = getSingleFromDB("users", "username", updaterN, "prefSeaStat", servStr);
	 setStruct.seaComm = getSingleFromDB("users", "username", updaterN, "prefSeaComm", servStr);
	 setStruct.seaUser = getSingleFromDB("users", "username", updaterN, "prefSeaUser", servStr);
	 setStruct.seaLoc = getSingleFromDB("users", "username", updaterN, "prefSeaLoc", servStr);
	 setStruct.seaDept = getSingleFromDB("users", "username", updaterN, "prefSeaDept", servStr);
	 setStruct.seaName = getSingleFromDB("users", "username", updaterN, "prefSeaMName", servStr);
	 setStruct.seaModN = getSingleFromDB("users", "username", updaterN, "prefSeaModN", servStr);
	 setStruct.seaType = getSingleFromDB("users", "username", updaterN, "prefSeaType", servStr);
	 setStruct.seaBrand = getSingleFromDB("users", "username", updaterN, "prefSeaBrand", servStr);
	 setStruct.seaUpdater = getSingleFromDB("users", "username", updaterN, "prefSeaUpdater", servStr);

 }

private: System::Void saveButton_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0; i < 12; i++) {
		//MessageBox::Show(searchByChecks->GetItemCheckState(i).ToString(), "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		if (searchByChecks->GetItemCheckState(i).ToString() == "Checked") {
			setStruct.setSearchPreferences2(i, "1");
		}
		else if (searchByChecks->GetItemCheckState(i).ToString() == "Unchecked") {
			setStruct.setSearchPreferences2(i, "0");
		}
	}
	if (MessageBox::Show("Are you sure you want to save all?", "Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes) {
		updateUserSearchPref(setStruct.seaSN, setStruct.seaInv, setStruct.seaStat, setStruct.seaComm, setStruct.seaUser, setStruct.seaLoc, setStruct.seaDept,
			setStruct.seaName, setStruct.seaModN, setStruct.seaType, setStruct.seaBrand, setStruct.seaUpdater, setStruct.servStr, setStruct.lastUser);
		//Close();
	}
}

private: System::Void closeButton_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
};
}
