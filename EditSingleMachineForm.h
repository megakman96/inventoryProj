#include <Windows.h>
#include "uniFuncs.h"
#include "AddNewMachineWindow.h"
#include "AddUserWindowForm.h"
#include "AddDepartmentForm.h"


#using <System.DLL>
#using <System.Drawing.DLL>
#using <System.Windows.Forms.DLL>

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
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for EditSingleMachineForm
	/// </summary>
	public ref class EditSingleMachineForm : public System::Windows::Forms::Form
	{
	public:
		EditSingleMachineForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Boolean isAllBatch = false;
		Boolean isSaved = false;
		Boolean newOrEdit = false; //true: new, false: edit
		Boolean batch = false;
		String ^ snRef;
		String ^ currInvRef;
		String ^ currBrandRef;
		String ^ currTypeRef;
		String ^ currModelRef;
		String ^ currPurDateRef;
		String ^ currMachineNameRef;
		String ^ currLocRef;
		String ^ currDeptRef;
		String ^ currStatusRef;
		String ^ currComments;
		String ^ currDoLPI;
		String ^ currUser;
		String ^ servStr;
		String ^ updaterStr;
		String ^ sameStr = "Don't Change";
		String ^ strToArr;
		array<String^>^ snArr;
		settingsVars sStruct;
		String ^ typeOfEdit;

		//Boolean edit;


	private: System::Windows::Forms::Label^  commentsLabel;
	public: System::Windows::Forms::RichTextBox^  commentsTextbox;
	private:

	private: System::Windows::Forms::Label^  titleLabel;
	private: System::Windows::Forms::Button^  advancedEditButton;
	public: System::Windows::Forms::Button^  newDeptButton;
	private:
	public: System::Windows::Forms::Button^  newUserBtn;
	public: System::Windows::Forms::Button^  newStatBtn;
	public: System::Windows::Forms::Button^  newLocBtn;
	public:

			 String ^ currUserRef;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EditSingleMachineForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::Label^  machineNameLabel;
	private: System::Windows::Forms::Label^  statusLabel;
	private: System::Windows::Forms::Label^  locationLabel;
	private: System::Windows::Forms::Label^  departmentLabel;
	private: System::Windows::Forms::Button^  saveButton;
	private: System::Windows::Forms::Button^  cancelButton;
	private: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::TextBox^  machineNameTextbox;
	private:
	public: System::Windows::Forms::ComboBox^  locCombo;
	public: System::Windows::Forms::ComboBox^  deptCombo;
	public: System::Windows::Forms::ComboBox^  statCombo;
	public: System::Windows::Forms::ComboBox^  userCombo;





	protected:

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
			this->newDeptButton = (gcnew System::Windows::Forms::Button());
			this->newUserBtn = (gcnew System::Windows::Forms::Button());
			this->newStatBtn = (gcnew System::Windows::Forms::Button());
			this->machineNameLabel = (gcnew System::Windows::Forms::Label());
			this->statusLabel = (gcnew System::Windows::Forms::Label());
			this->locationLabel = (gcnew System::Windows::Forms::Label());
			this->departmentLabel = (gcnew System::Windows::Forms::Label());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->machineNameTextbox = (gcnew System::Windows::Forms::TextBox());
			this->locCombo = (gcnew System::Windows::Forms::ComboBox());
			this->deptCombo = (gcnew System::Windows::Forms::ComboBox());
			this->statCombo = (gcnew System::Windows::Forms::ComboBox());
			this->userCombo = (gcnew System::Windows::Forms::ComboBox());
			this->commentsLabel = (gcnew System::Windows::Forms::Label());
			this->commentsTextbox = (gcnew System::Windows::Forms::RichTextBox());
			this->titleLabel = (gcnew System::Windows::Forms::Label());
			this->advancedEditButton = (gcnew System::Windows::Forms::Button());
			this->newLocBtn = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 8;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				17)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				45)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				45)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel1->Controls->Add(this->newDeptButton, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->newUserBtn, 5, 3);
			this->tableLayoutPanel1->Controls->Add(this->newStatBtn, 5, 2);
			this->tableLayoutPanel1->Controls->Add(this->machineNameLabel, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->statusLabel, 4, 2);
			this->tableLayoutPanel1->Controls->Add(this->locationLabel, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->departmentLabel, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->saveButton, 4, 6);
			this->tableLayoutPanel1->Controls->Add(this->cancelButton, 6, 6);
			this->tableLayoutPanel1->Controls->Add(this->label1, 4, 3);
			this->tableLayoutPanel1->Controls->Add(this->machineNameTextbox, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->locCombo, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->deptCombo, 3, 4);
			this->tableLayoutPanel1->Controls->Add(this->statCombo, 6, 2);
			this->tableLayoutPanel1->Controls->Add(this->userCombo, 6, 3);
			this->tableLayoutPanel1->Controls->Add(this->commentsLabel, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->commentsTextbox, 3, 5);
			this->tableLayoutPanel1->Controls->Add(this->titleLabel, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->advancedEditButton, 1, 6);
			this->tableLayoutPanel1->Controls->Add(this->newLocBtn, 2, 3);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 8;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 35)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(939, 329);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// newDeptButton
			// 
			this->newDeptButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->newDeptButton->Location = System::Drawing::Point(223, 177);
			this->newDeptButton->Name = L"newDeptButton";
			this->newDeptButton->Size = System::Drawing::Size(39, 19);
			this->newDeptButton->TabIndex = 39;
			this->newDeptButton->Text = L"New";
			this->newDeptButton->UseVisualStyleBackColor = true;
			this->newDeptButton->Click += gcnew System::EventHandler(this, &EditSingleMachineForm::newDeptButton_Click);
			// 
			// newUserBtn
			// 
			this->newUserBtn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->newUserBtn->Location = System::Drawing::Point(674, 152);
			this->newUserBtn->Name = L"newUserBtn";
			this->newUserBtn->Size = System::Drawing::Size(39, 19);
			this->newUserBtn->TabIndex = 36;
			this->newUserBtn->Text = L"New";
			this->newUserBtn->UseVisualStyleBackColor = true;
			this->newUserBtn->Click += gcnew System::EventHandler(this, &EditSingleMachineForm::newUserBtn_Click);
			// 
			// newStatBtn
			// 
			this->newStatBtn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->newStatBtn->Location = System::Drawing::Point(674, 127);
			this->newStatBtn->Name = L"newStatBtn";
			this->newStatBtn->Size = System::Drawing::Size(39, 19);
			this->newStatBtn->TabIndex = 33;
			this->newStatBtn->Text = L"New";
			this->newStatBtn->UseVisualStyleBackColor = true;
			this->newStatBtn->Click += gcnew System::EventHandler(this, &EditSingleMachineForm::newStatBtn_Click);
			// 
			// machineNameLabel
			// 
			this->machineNameLabel->AutoSize = true;
			this->machineNameLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->machineNameLabel->Location = System::Drawing::Point(20, 124);
			this->machineNameLabel->Name = L"machineNameLabel";
			this->machineNameLabel->Size = System::Drawing::Size(197, 25);
			this->machineNameLabel->TabIndex = 0;
			this->machineNameLabel->Text = L"Machine Name";
			this->machineNameLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// statusLabel
			// 
			this->statusLabel->AutoSize = true;
			this->statusLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->statusLabel->Location = System::Drawing::Point(471, 124);
			this->statusLabel->Name = L"statusLabel";
			this->statusLabel->Size = System::Drawing::Size(197, 25);
			this->statusLabel->TabIndex = 1;
			this->statusLabel->Text = L"Status";
			this->statusLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// locationLabel
			// 
			this->locationLabel->AutoSize = true;
			this->locationLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->locationLabel->Location = System::Drawing::Point(20, 149);
			this->locationLabel->Name = L"locationLabel";
			this->locationLabel->Size = System::Drawing::Size(197, 25);
			this->locationLabel->TabIndex = 2;
			this->locationLabel->Text = L"Location";
			this->locationLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// departmentLabel
			// 
			this->departmentLabel->AutoSize = true;
			this->departmentLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->departmentLabel->Location = System::Drawing::Point(20, 174);
			this->departmentLabel->Name = L"departmentLabel";
			this->departmentLabel->Size = System::Drawing::Size(197, 25);
			this->departmentLabel->TabIndex = 3;
			this->departmentLabel->Text = L"Department";
			this->departmentLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// saveButton
			// 
			this->saveButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->saveButton->Location = System::Drawing::Point(471, 276);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(197, 29);
			this->saveButton->TabIndex = 4;
			this->saveButton->Text = L"Save";
			this->saveButton->UseVisualStyleBackColor = true;
			this->saveButton->Click += gcnew System::EventHandler(this, &EditSingleMachineForm::saveButton_Click);
			// 
			// cancelButton
			// 
			this->cancelButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->cancelButton->Location = System::Drawing::Point(719, 276);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(197, 29);
			this->cancelButton->TabIndex = 5;
			this->cancelButton->Text = L"Cancel";
			this->cancelButton->UseVisualStyleBackColor = true;
			this->cancelButton->Click += gcnew System::EventHandler(this, &EditSingleMachineForm::cancelButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Location = System::Drawing::Point(471, 149);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(197, 25);
			this->label1->TabIndex = 6;
			this->label1->Text = L"User";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// machineNameTextbox
			// 
			this->machineNameTextbox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->machineNameTextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->machineNameTextbox->Location = System::Drawing::Point(268, 127);
			this->machineNameTextbox->Name = L"machineNameTextbox";
			this->machineNameTextbox->Size = System::Drawing::Size(197, 20);
			this->machineNameTextbox->TabIndex = 7;
			// 
			// locCombo
			// 
			this->locCombo->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->locCombo->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->locCombo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->locCombo->FormattingEnabled = true;
			this->locCombo->Location = System::Drawing::Point(268, 152);
			this->locCombo->Name = L"locCombo";
			this->locCombo->Size = System::Drawing::Size(197, 21);
			this->locCombo->TabIndex = 8;
			// 
			// deptCombo
			// 
			this->deptCombo->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->deptCombo->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->deptCombo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->deptCombo->FormattingEnabled = true;
			this->deptCombo->Location = System::Drawing::Point(268, 177);
			this->deptCombo->Name = L"deptCombo";
			this->deptCombo->Size = System::Drawing::Size(197, 21);
			this->deptCombo->TabIndex = 9;
			// 
			// statCombo
			// 
			this->statCombo->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->statCombo->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->statCombo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->statCombo->FormattingEnabled = true;
			this->statCombo->Location = System::Drawing::Point(719, 127);
			this->statCombo->Name = L"statCombo";
			this->statCombo->Size = System::Drawing::Size(197, 21);
			this->statCombo->TabIndex = 10;
			// 
			// userCombo
			// 
			this->userCombo->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->userCombo->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->userCombo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->userCombo->FormattingEnabled = true;
			this->userCombo->Location = System::Drawing::Point(719, 152);
			this->userCombo->Name = L"userCombo";
			this->userCombo->Size = System::Drawing::Size(197, 21);
			this->userCombo->TabIndex = 11;
			// 
			// commentsLabel
			// 
			this->commentsLabel->AutoSize = true;
			this->commentsLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->commentsLabel->Location = System::Drawing::Point(20, 199);
			this->commentsLabel->Name = L"commentsLabel";
			this->commentsLabel->Size = System::Drawing::Size(197, 74);
			this->commentsLabel->TabIndex = 12;
			this->commentsLabel->Text = L"Comments";
			this->commentsLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// commentsTextbox
			// 
			this->tableLayoutPanel1->SetColumnSpan(this->commentsTextbox, 4);
			this->commentsTextbox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->commentsTextbox->Location = System::Drawing::Point(268, 202);
			this->commentsTextbox->Name = L"commentsTextbox";
			this->commentsTextbox->Size = System::Drawing::Size(648, 68);
			this->commentsTextbox->TabIndex = 13;
			this->commentsTextbox->Text = L"";
			// 
			// titleLabel
			// 
			this->titleLabel->AutoSize = true;
			this->tableLayoutPanel1->SetColumnSpan(this->titleLabel, 2);
			this->titleLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->titleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titleLabel->Location = System::Drawing::Point(268, 0);
			this->titleLabel->Name = L"titleLabel";
			this->titleLabel->Size = System::Drawing::Size(400, 50);
			this->titleLabel->TabIndex = 14;
			this->titleLabel->Text = L"label2";
			this->titleLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// advancedEditButton
			// 
			this->advancedEditButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->advancedEditButton->Location = System::Drawing::Point(20, 276);
			this->advancedEditButton->Name = L"advancedEditButton";
			this->advancedEditButton->Size = System::Drawing::Size(197, 29);
			this->advancedEditButton->TabIndex = 15;
			this->advancedEditButton->Text = L"Advanced Edit";
			this->advancedEditButton->UseVisualStyleBackColor = true;
			this->advancedEditButton->Click += gcnew System::EventHandler(this, &EditSingleMachineForm::advancedEditButton_Click);
			// 
			// newLocBtn
			// 
			this->newLocBtn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->newLocBtn->Location = System::Drawing::Point(223, 152);
			this->newLocBtn->Name = L"newLocBtn";
			this->newLocBtn->Size = System::Drawing::Size(39, 19);
			this->newLocBtn->TabIndex = 16;
			this->newLocBtn->Text = L"New";
			this->newLocBtn->UseVisualStyleBackColor = true;
			this->newLocBtn->Click += gcnew System::EventHandler(this, &EditSingleMachineForm::newLocBtn_Click);
			// 
			// EditSingleMachineForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(939, 329);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"EditSingleMachineForm";
			this->Text = L"EditSingleMachineForm";
			this->Load += gcnew System::EventHandler(this, &EditSingleMachineForm::EditSingleMachineForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void EditSingleMachineForm_Load(System::Object^  sender, System::EventArgs^  e) {
	if (!getUpdaterAccess(sStruct.servStr, sStruct.lastUser)) {
		advancedEditButton->Visible = false;
	}
	if (!batch) {
		if (!newOrEdit) {
			setCurrVars();
		}
		else if (newOrEdit) {
			advancedEditButton->Visible = false;
		}
		updateDrop(locCombo);
		locCombo->Text = currLocRef;
		updateDrop(deptCombo);
		deptCombo->Text = currDeptRef;
		updateDrop(userCombo);
		userCombo->Text = currUserRef;
		updateDrop(statCombo);
		statCombo->Text = currStatusRef;
		machineNameTextbox->Text = currMachineNameRef;

		if (!isAllBatch) {
			titleLabel->Text = "Edit computer with S/N: " + snRef;
		}
		else if (isAllBatch) {
			titleLabel->Text = "New Machine Entry with S/N: " + snRef;
		}
	}
	else {
		advancedEditButton->Visible = false;
		updateDrop(locCombo);
		machineNameTextbox->Text = sameStr;
		locCombo->Text = sameStr;
		updateDrop(deptCombo);
		deptCombo->Text = sameStr;
		updateDrop(userCombo);
		userCombo->Text = sameStr;
		updateDrop(statCombo);
		statCombo->Text = sameStr;
		titleLabel->Text = "Edit All Comuters in Queue";
	}
}

private: System::Void cancelButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (newOrEdit == false) {
		Close();
	}
	else if (newOrEdit == true) {
		Close();
	}

}

private: System::Void saveButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!batch) {
		//MessageBox::Show("2", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		if (!checkFieldValidity(statCombo->Text, "statuses", "Statuss", sStruct.servStr)) {
			MessageBox::Show("Invalid STATUS-ID. Please select from the drop down", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		else if (!checkFieldValidity(deptCombo->Text, "departments", "Department", sStruct.servStr)) {
			MessageBox::Show("Invalid DEPARTMENT. Please select from the drop down", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		else if (!checkFieldValidity(locCombo->Text, "locations", "Locations", sStruct.servStr)) {
			MessageBox::Show("Invalid LOCATION. Please select from the drop down", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		else if (!checkIfUserExists(userCombo->Text, sStruct.servStr)) {
			MessageBox::Show("Invalid USER. Please select from the drop down", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		else {
			if (MessageBox::Show("Are you sure you want to save this?", "Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes) {
				isSaved = true;
				DateTime dtR = DateTime::Now;
				saveInvRecord(currInvRef, snRef, currModelRef, machineNameTextbox->Text, currBrandRef, currTypeRef,
					statCombo->Text, locCombo->Text, userCombo->Text, deptCombo->Text, currPurDateRef, dtR,
					commentsTextbox->Text, dtR);
				Close();
			}
		}
	}
	else {
		if (statCombo->Text != sameStr) {
			if (!checkFieldValidity(statCombo->Text, "statuses", "Statuss", sStruct.servStr)) {
				MessageBox::Show("Invalid STATUS-ID. Please select from the drop down", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				return;
			}
		}
		else if (deptCombo->Text != sameStr) {
			if (!checkFieldValidity(deptCombo->Text, "departments", "Department", sStruct.servStr)) {
				MessageBox::Show("Invalid DEPARTMENT. Please select from the drop down", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				return;
			}
		}
		else if (locCombo->Text != sameStr) {
			if (!checkFieldValidity(locCombo->Text, "locations", "Locations", sStruct.servStr)) {
				MessageBox::Show("Invalid LOCATION. Please select from the drop down", "Erro r", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				return;
			}
		}
		else if (userCombo->Text != sameStr) {
			if (!checkIfUserExists(userCombo->Text, sStruct.servStr)) {
				MessageBox::Show("Invalid USER. Please select from the drop down", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				return;
			}
		}
		if (MessageBox::Show("Are you sure you want to save all?", "Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes) {
			isSaved = true;
			DateTime dtR = DateTime::Now;
			String ^ delimStr = ";";
			array<Char>^ delimiCar = delimStr->ToCharArray();
			array<String^>^ arrSn = strToArr->Split(delimiCar);
			for (int i = 0; i < arrSn->Length; i++) {
				String ^ currSn = arrSn[i];
				if (arrSn[i] != "") {
					String ^ tempInv = getFieldFromMachines(currSn, "InventoryTag", sStruct.servStr);
					String ^ tempMod = getFieldFromMachines(currSn, "modelNumber", sStruct.servStr);
					String ^ tempMachineName;
					if (machineNameTextbox->Text == sameStr) {
						tempMachineName = getFieldFromMachinesHistory(currSn, "machineName", sStruct.servStr);
					}
					else {
						tempMachineName = machineNameTextbox->Text;
					}
					String ^ tempBrand = getFieldFromMachines(currSn, "machineBrands_Brands", sStruct.servStr);
					String ^ tempType = getFieldFromMachines(currSn, "machinetypes_TypeT", sStruct.servStr);
					String ^ tempStat = getTempStr(statCombo, "statuses_Statuss", currSn);
					String ^ tempLoc = getTempStr(locCombo, "locations_Locations", currSn);
					//String ^ tempUser = getTempStr(userCombo, "users_UserID", currSn);
					String ^ tempUser = userCombo->Text;
					String ^ tempDept = getTempStr(deptCombo, "departments_Department", currSn);
					String ^ tempDOP = getFieldFromMachines(currSn, "DateOfPurchase", sStruct.servStr);
					if (tempStat != nullptr && tempBrand != nullptr && tempType != nullptr && tempLoc != nullptr && tempUser != nullptr && tempDept != nullptr && tempDOP != nullptr) {
						saveInvRecord(tempInv, currSn, tempMod, tempMachineName, tempBrand, tempType,
							tempStat, tempLoc, tempUser, tempDept, tempDOP, dtR,
							commentsTextbox->Text, dtR);
					}
					Close();
				}
			}
		}
	}
}

public: System::String ^ getTempStr(ComboBox ^ comRef, String ^ columnName, String ^ SN) {
	String ^ newTempStr;
	String ^ fNewTempStr;
	if (comRef->Text == "Don't Change") {
		newTempStr = getFieldFromMachinesHistory(SN, columnName, sStruct.servStr);
	}
	else {
		newTempStr = comRef->Text;
	}
	if (columnName == "users_UserID") {
		fNewTempStr = getUserName(newTempStr, sStruct.servStr);
	}
	else {
		fNewTempStr = newTempStr;
	}
	return fNewTempStr;
}

private: System::Void saveInvRecord(String ^ invTagStr, String ^ snNumStr, String ^ modelNumStr, String ^ machNameStr, String ^ brandStr, String ^ typeStr,
	String ^ statusStr, String ^ locStr, String ^ userStr, String ^ depStr, String ^ DOPdStr, DateTime ^ DoLPIStr,
	String ^ commStr, DateTime ^ todayDStr) {
	String ^ testVar = "";
	String ^ UseID;
		if (invTagStr == testVar || snNumStr == testVar || modelNumStr == testVar || statusStr == testVar || brandStr == testVar || typeStr == testVar
			|| locStr == testVar) {
			MessageBox::Show("Do not leave any fields blank", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		else {

			MySqlConnection^ conDB = gcnew MySqlConnection(sStruct.servStr);
			try {
				conDB->Open();
				array<String^>^ nameAr;
				String ^ delimStr = ", ";
				array<Char>^ delimiCar = delimStr->ToCharArray();
				nameAr = userStr->Split(delimiCar);
				String ^ fName = nameAr[2];
				String ^ lName = nameAr[0];
				MySqlDataReader ^ myReader;
				MySqlCommand^ macCmd = gcnew MySqlCommand("SELECT UserID FROM users WHERE FirstName='" + fName + "' AND LastName='" + lName + "';", conDB);
				myReader = macCmd->ExecuteReader();
				myReader->Read();
				UseID = myReader->GetString(0);
				
			}
			catch (MySqlException ^e) {
				String ^ errorMsg = "Error connecting to the database at saveInvRecord 1 in EditSingleMachineForm!";
				MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
			conDB->Close();
			/*MessageBox::Show(invTagStr+"\n"+snNumStr+ "\n" + modelNumStr+"\n"+machNameStr+ "\n" + brandStr+ "\n" + typeStr+ "\n" + statusStr+ "\n" + 
				locStr+ "\n" + userStr+ "\n" + depStr+ "\n" + DOPdStr+ "\n" + DoLPIStr+ "\n" + commStr+ "\n" + 
				todayDStr+ "\n", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);*/
			try {
				conDB->Open();
				String ^ updater = getUpdater(updaterStr, sStruct.servStr);
				/*MessageBox::Show(invTagStr + "\n" + snNumStr + "\n" + modelNumStr + "\n" + machNameStr + "\n" + brandStr + "\n" + typeStr + "\n" + statusStr + "\n" +
					locStr + "\n" + userStr + "\n" + depStr + "\n" + DOPdStr + "\n" + DoLPIStr + "\n" + commStr + "\n" +
					todayDStr + "\n"+updater, "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
					*/
				if (updater != nullptr) {

					MySqlCommand^ cmD = gcnew MySqlCommand("CALL invUpdate('" + snNumStr + "', '" + modelNumStr + "', '" + invTagStr
						+ "', '" + statusStr + "', '" + machNameStr + "', '" + brandStr + "', '" + UseID
						+ "', '" + locStr + "', '" + depStr + "', '" + typeStr + "', '" + DOPdStr
						+ "', '" + todayDStr + "', '" + commStr + "', '" + updater + "');", conDB);

					cmD->ExecuteNonQuery();
					isSaved = true;
				}
				conDB->Close();
			}
			catch (MySqlException ^e) {
				String ^ errorMsg = "Error connecting to the database at saveInvRecord 2 in EditSingleMachineForm!";
				MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
		}
}

public: System::Void updateDrop(ComboBox ^ dropRef) {
	String ^ oStr;
	MySqlConnection^ conDB = gcnew MySqlConnection(sStruct.servStr);
	MySqlDataReader ^ myReader;

	try {

		if (dropRef->Name == L"locCombo") {
			MySqlCommand^ cmD = gcnew MySqlCommand("SELECT * FROM locations ORDER By Locations ASC;", conDB);
			conDB->Open();
			myReader = cmD->ExecuteReader();
			while (myReader->Read()) {
				oStr = myReader->GetString(0);
				dropRef->Items->Add(oStr);
			}
		}
		else if (dropRef->Name == L"deptCombo") {
			MySqlCommand^ cmDept = gcnew MySqlCommand("SELECT * FROM departments ORDER By Department ASC;", conDB);
			conDB->Open();
			myReader = cmDept->ExecuteReader();
			while (myReader->Read()) {
				oStr = myReader->GetString(0);
				dropRef->Items->Add(oStr);
			}
		}
		else if (dropRef->Name == L"userCombo") {
			MySqlCommand^ cmDtypes = gcnew MySqlCommand("SELECT * FROM users ORDER By LastName ASC;", conDB);
			conDB->Open();
			myReader = cmDtypes->ExecuteReader();
			while (myReader->Read()) {
				oStr = makeNameString(myReader->GetString(1), myReader->GetString(2));
				dropRef->Items->Add(oStr);
			}
		}
		else if (dropRef->Name == L"statCombo") {
			MySqlCommand^ cmDstatus = gcnew MySqlCommand("SELECT * FROM statuses ORDER By Statuss ASC;", conDB);
			conDB->Open();
			myReader = cmDstatus->ExecuteReader();
			while (myReader->Read()) {
				oStr = myReader->GetString(0);
				dropRef->Items->Add(oStr);
			}
		}
	}
	catch (MySqlException ^e) {
		String ^ errorMsg = "Error connecting to the database at updateDrop in EditSingleMachineForm!\n" + dropRef->Name;
		MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

public: System::Void setSNRef(String ^ snStr) {
	snRef = snStr;
}

public: System::Void setCurrVars() {
	MySqlConnection^ conDB = gcnew MySqlConnection(sStruct.servStr);
	MySqlConnection^ conDB2 = gcnew MySqlConnection(sStruct.servStr);
	try {
		conDB->Open();
		MySqlCommand^ cmD = gcnew MySqlCommand("SELECT * FROM machineshistory WHERE curr='1' AND machines_SerialNumber='" + snRef + "';", conDB);
		MySqlDataReader ^ myReader, ^ myReader2;
		myReader = cmD->ExecuteReader();
		myReader->Read();
		conDB2->Open();
		MySqlCommand ^ macCmd = gcnew MySqlCommand("SELECT * FROM machines WHERE SerialNumber='" + snRef + "';", conDB2);
		myReader2 = macCmd->ExecuteReader();
		myReader2->Read();
		String ^ userID = myReader->GetString(3);
		String ^ userN = getUserName(userID, sStruct.servStr);
		currBrandRef = myReader2->GetString(6);
		currInvRef = myReader2->GetString(1);
		currModelRef = myReader2->GetString(2);
		currPurDateRef = myReader2->GetString(3);
		currTypeRef = myReader2->GetString(5);
		currUserRef = userN;
		currDeptRef = myReader->GetString(4);
		currLocRef = myReader->GetString(2);
		currMachineNameRef = myReader->GetString(9);
		currStatusRef = myReader->GetString(1);
		conDB2->Close();
		conDB->Close();
	}
	catch (MySqlException ^e) {
		String ^ errorMsg = "Error connecting to the database at setCurrVars in EditSingleMachineForm!";
		MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

private: System::Void advancedEditButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!getUpdaterAccess(sStruct.servStr, sStruct.lastUser)) {
		MessageBox::Show("You do not have ADMIN priviledges", "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		return;
	}
	else {
		AddNewMachineWindow ^ edMachine = gcnew AddNewMachineWindow;
		edMachine->edit = true;
		edMachine->sStruct = sStruct;
		edMachine->currSN = snRef;
		edMachine->ShowDialog();
		snRef = edMachine->snTextbox->Text;
		if (edMachine->saved) {

			titleLabel->Text = "Edit computer with SN: " + snRef;
		}
	}
}


private: System::Void newUserBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!getUpdaterAccess(sStruct.servStr, sStruct.lastUser)) {
		MessageBox::Show("You do not have ADMIN priviledges", "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		return;
	}
	else {
		AddUserWindowForm ^ newUser = gcnew AddUserWindowForm;
		newUser->sStruct = sStruct;
		newUser->servStr = sStruct.servStr;
		newUser->addOrUpdate = true;
		newUser->ShowDialog();
		userCombo->Items->Clear();
		updateDrop(userCombo);
	}
}
private: System::Void newLocBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	if (getUpdaterAccess(sStruct.servStr, sStruct.lastUser)) {
		AddDepartmentForm ^ addLocF = gcnew AddDepartmentForm;
		addLocF->servStr = sStruct.servStr;
		String ^ labStr = "New Location";
		addLocF->setVals(labStr);
		addLocF->ShowDialog();
		locCombo->Items->Clear();
		updateDrop(locCombo);
	}
	else {
		MessageBox::Show("You do not have Admin Access", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}
private: System::Void newDeptButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (getUpdaterAccess(sStruct.servStr, sStruct.lastUser)) {
		AddDepartmentForm ^ addDept = gcnew AddDepartmentForm;
		addDept->servStr = sStruct.servStr;
		String ^ labStr = "New Department";
		addDept->setVals(labStr);
		addDept->ShowDialog();
		deptCombo->Items->Clear();
		updateDrop(deptCombo);
	}
	else {
		MessageBox::Show("You do not have Admin Access", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}
private: System::Void newStatBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	if (getUpdaterAccess(sStruct.servStr, sStruct.lastUser)) {
		AddDepartmentForm ^ addStat = gcnew AddDepartmentForm;
		addStat->servStr = sStruct.servStr;
		String ^ labStr = "New Status";
		addStat->setVals(labStr);
		addStat->ShowDialog();
		updateDrop(statCombo);
	}
	else {
		MessageBox::Show("You do not have Admin Access", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

public: System::Void clearCombos() {
	locCombo->Items->Clear();
	deptCombo->Items->Clear();
	userCombo->Items->Clear();
}
};
}
