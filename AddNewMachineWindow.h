#include <iostream>
//#include "EditSingleMachineForm.h"
#include "AddUserWindowForm.h"
#include "AddDepartmentForm.h"
#include "uniFuncs.h"

//#include <Windows.h>
#include <cstring>
#include <string>

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
	/// Summary for AddNewMachineWindow
	/// </summary>
	public ref class AddNewMachineWindow : public System::Windows::Forms::Form
	{
	public:
		AddNewMachineWindow(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	//	Boolean isSaved;

		Boolean isAllBatch;
		String ^ userLoggedIn;
		String ^ servStr;
		Boolean edit;
		String ^ snEdit;
		Boolean saved;
		String ^ nSN;
		String ^ nInv;
		String ^ nBrand;
		String ^ nDPur;
		String ^ nType;
		String ^ nMod;

		settingsVars sStruct;

		String ^ currSN;
		String ^ currInv;
		String ^ currBrand;
		String ^ currDPur;
		String ^ currType;

		String ^ currComm;
		String ^ currUser;
		String ^ currMachineName;
		String ^ currLoc;
		String ^ currDept;
		String ^ currStatus;
		String ^ currDoLPI;
		String ^ currMod;

		Boolean cancelBatch = false;

	public: System::Windows::Forms::Button^  cancelBatchButton;


	private: System::Windows::Forms::Button^  resetButton;
	public:




	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddNewMachineWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::ComboBox^  brandCombo;
	protected:

	public: System::Windows::Forms::TextBox^  snTextbox;
	public: System::Windows::Forms::Button^  cancelButton;
	private:


	protected:


	private: System::Windows::Forms::Button^  saveButton;
	private: System::Windows::Forms::Label^  dopLabel;
	private: System::Windows::Forms::Label^  typeLabel;
	private: System::Windows::Forms::Label^  brandLabel;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TableLayoutPanel^  backPanel;
	public: System::Windows::Forms::ComboBox^  modelCombo;
	private:
	public: System::Windows::Forms::ComboBox^  typeCombo;
	public: System::Windows::Forms::TextBox^  invTextBox;



	private: System::Windows::Forms::Label^  modelLabel;
	private: System::Windows::Forms::Label^  snLabel;
	private: System::Windows::Forms::Label^  invLabel;
	public: System::Windows::Forms::DateTimePicker^  dopPicker;
	private:

	private: System::Windows::Forms::Button^  newModelButton;
	private: System::Windows::Forms::Button^  newBrandbutton;
	private: System::Windows::Forms::Button^  newTypeButton;


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
			this->brandCombo = (gcnew System::Windows::Forms::ComboBox());
			this->snTextbox = (gcnew System::Windows::Forms::TextBox());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->dopLabel = (gcnew System::Windows::Forms::Label());
			this->typeLabel = (gcnew System::Windows::Forms::Label());
			this->brandLabel = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->invLabel = (gcnew System::Windows::Forms::Label());
			this->snLabel = (gcnew System::Windows::Forms::Label());
			this->modelLabel = (gcnew System::Windows::Forms::Label());
			this->invTextBox = (gcnew System::Windows::Forms::TextBox());
			this->typeCombo = (gcnew System::Windows::Forms::ComboBox());
			this->modelCombo = (gcnew System::Windows::Forms::ComboBox());
			this->backPanel = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->dopPicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->newModelButton = (gcnew System::Windows::Forms::Button());
			this->newBrandbutton = (gcnew System::Windows::Forms::Button());
			this->newTypeButton = (gcnew System::Windows::Forms::Button());
			this->resetButton = (gcnew System::Windows::Forms::Button());
			this->cancelBatchButton = (gcnew System::Windows::Forms::Button());
			this->backPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// brandCombo
			// 
			this->brandCombo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->brandCombo->FormattingEnabled = true;
			this->brandCombo->Location = System::Drawing::Point(586, 106);
			this->brandCombo->Margin = System::Windows::Forms::Padding(1);
			this->brandCombo->Name = L"brandCombo";
			this->brandCombo->Size = System::Drawing::Size(164, 21);
			this->brandCombo->TabIndex = 22;
			// 
			// snTextbox
			// 
			this->snTextbox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->snTextbox->Location = System::Drawing::Point(214, 106);
			this->snTextbox->Margin = System::Windows::Forms::Padding(1);
			this->snTextbox->Name = L"snTextbox";
			this->snTextbox->Size = System::Drawing::Size(164, 20);
			this->snTextbox->TabIndex = 9;
			// 
			// cancelButton
			// 
			this->cancelButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->cancelButton->Location = System::Drawing::Point(588, 339);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(160, 24);
			this->cancelButton->TabIndex = 8;
			this->cancelButton->Text = L"Cancel";
			this->cancelButton->UseVisualStyleBackColor = true;
			this->cancelButton->Click += gcnew System::EventHandler(this, &AddNewMachineWindow::cancelButton_Click);
			// 
			// saveButton
			// 
			this->saveButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->saveButton->Location = System::Drawing::Point(422, 339);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(160, 24);
			this->saveButton->TabIndex = 7;
			this->saveButton->Text = L"Create";
			this->saveButton->UseVisualStyleBackColor = true;
			this->saveButton->Click += gcnew System::EventHandler(this, &AddNewMachineWindow::saveButton_Click);
			// 
			// dopLabel
			// 
			this->dopLabel->AutoSize = true;
			this->dopLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dopLabel->Location = System::Drawing::Point(422, 259);
			this->dopLabel->Name = L"dopLabel";
			this->dopLabel->Size = System::Drawing::Size(160, 22);
			this->dopLabel->TabIndex = 6;
			this->dopLabel->Text = L"Date of Purchase";
			this->dopLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// typeLabel
			// 
			this->typeLabel->AutoSize = true;
			this->typeLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->typeLabel->Location = System::Drawing::Point(422, 182);
			this->typeLabel->Name = L"typeLabel";
			this->typeLabel->Size = System::Drawing::Size(160, 22);
			this->typeLabel->TabIndex = 5;
			this->typeLabel->Text = L"Machine Type";
			this->typeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// brandLabel
			// 
			this->brandLabel->AutoSize = true;
			this->brandLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->brandLabel->Location = System::Drawing::Point(422, 105);
			this->brandLabel->Name = L"brandLabel";
			this->brandLabel->Size = System::Drawing::Size(160, 22);
			this->brandLabel->TabIndex = 4;
			this->brandLabel->Text = L"Brand";
			this->brandLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->backPanel->SetColumnSpan(this->label4, 3);
			this->label4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label4->Location = System::Drawing::Point(216, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(366, 50);
			this->label4->TabIndex = 3;
			this->label4->Text = L"New Machine";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// invLabel
			// 
			this->invLabel->AutoSize = true;
			this->invLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->invLabel->Location = System::Drawing::Point(50, 182);
			this->invLabel->Name = L"invLabel";
			this->invLabel->Size = System::Drawing::Size(160, 22);
			this->invLabel->TabIndex = 2;
			this->invLabel->Text = L"Inventory Number";
			this->invLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// snLabel
			// 
			this->snLabel->AutoSize = true;
			this->snLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->snLabel->Location = System::Drawing::Point(50, 105);
			this->snLabel->Name = L"snLabel";
			this->snLabel->Size = System::Drawing::Size(160, 22);
			this->snLabel->TabIndex = 1;
			this->snLabel->Text = L"Serial Number";
			this->snLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// modelLabel
			// 
			this->modelLabel->AutoSize = true;
			this->modelLabel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->modelLabel->Location = System::Drawing::Point(50, 259);
			this->modelLabel->Name = L"modelLabel";
			this->modelLabel->Size = System::Drawing::Size(160, 22);
			this->modelLabel->TabIndex = 0;
			this->modelLabel->Text = L"Model";
			this->modelLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// invTextBox
			// 
			this->invTextBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->invTextBox->Location = System::Drawing::Point(214, 183);
			this->invTextBox->Margin = System::Windows::Forms::Padding(1);
			this->invTextBox->Name = L"invTextBox";
			this->invTextBox->Size = System::Drawing::Size(164, 20);
			this->invTextBox->TabIndex = 21;
			// 
			// typeCombo
			// 
			this->typeCombo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->typeCombo->FormattingEnabled = true;
			this->typeCombo->Location = System::Drawing::Point(586, 183);
			this->typeCombo->Margin = System::Windows::Forms::Padding(1);
			this->typeCombo->Name = L"typeCombo";
			this->typeCombo->Size = System::Drawing::Size(164, 21);
			this->typeCombo->TabIndex = 33;
			// 
			// modelCombo
			// 
			this->modelCombo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->modelCombo->FormattingEnabled = true;
			this->modelCombo->Location = System::Drawing::Point(214, 260);
			this->modelCombo->Margin = System::Windows::Forms::Padding(1);
			this->modelCombo->Name = L"modelCombo";
			this->modelCombo->Size = System::Drawing::Size(164, 21);
			this->modelCombo->TabIndex = 38;
			// 
			// backPanel
			// 
			this->backPanel->ColumnCount = 7;
			this->backPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 47)));
			this->backPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->backPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->backPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->backPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->backPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->backPanel->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 49)));
			this->backPanel->Controls->Add(this->modelCombo, 2, 6);
			this->backPanel->Controls->Add(this->typeCombo, 5, 4);
			this->backPanel->Controls->Add(this->invTextBox, 2, 4);
			this->backPanel->Controls->Add(this->modelLabel, 1, 6);
			this->backPanel->Controls->Add(this->snLabel, 1, 2);
			this->backPanel->Controls->Add(this->invLabel, 1, 4);
			this->backPanel->Controls->Add(this->label4, 2, 0);
			this->backPanel->Controls->Add(this->brandLabel, 4, 2);
			this->backPanel->Controls->Add(this->typeLabel, 4, 4);
			this->backPanel->Controls->Add(this->dopLabel, 4, 6);
			this->backPanel->Controls->Add(this->saveButton, 4, 8);
			this->backPanel->Controls->Add(this->cancelButton, 5, 8);
			this->backPanel->Controls->Add(this->snTextbox, 2, 2);
			this->backPanel->Controls->Add(this->brandCombo, 5, 2);
			this->backPanel->Controls->Add(this->dopPicker, 5, 6);
			this->backPanel->Controls->Add(this->newModelButton, 3, 6);
			this->backPanel->Controls->Add(this->newBrandbutton, 6, 2);
			this->backPanel->Controls->Add(this->newTypeButton, 6, 4);
			this->backPanel->Controls->Add(this->resetButton, 1, 8);
			this->backPanel->Controls->Add(this->cancelBatchButton, 2, 8);
			this->backPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->backPanel->Location = System::Drawing::Point(0, 0);
			this->backPanel->Name = L"backPanel";
			this->backPanel->RowCount = 10;
			this->backPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->backPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->backPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 22)));
			this->backPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->backPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 22)));
			this->backPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->backPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 22)));
			this->backPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->backPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->backPanel->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 10)));
			this->backPanel->Size = System::Drawing::Size(800, 376);
			this->backPanel->TabIndex = 0;
			// 
			// dopPicker
			// 
			this->dopPicker->CustomFormat = L"MM/dd/yyyy h:mm:tt";
			this->dopPicker->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dopPicker->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dopPicker->Location = System::Drawing::Point(586, 260);
			this->dopPicker->Margin = System::Windows::Forms::Padding(1);
			this->dopPicker->Name = L"dopPicker";
			this->dopPicker->Size = System::Drawing::Size(164, 20);
			this->dopPicker->TabIndex = 39;
			// 
			// newModelButton
			// 
			this->newModelButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->newModelButton->Location = System::Drawing::Point(380, 260);
			this->newModelButton->Margin = System::Windows::Forms::Padding(1);
			this->newModelButton->Name = L"newModelButton";
			this->newModelButton->Size = System::Drawing::Size(38, 20);
			this->newModelButton->TabIndex = 40;
			this->newModelButton->Text = L"New";
			this->newModelButton->UseVisualStyleBackColor = true;
			this->newModelButton->Click += gcnew System::EventHandler(this, &AddNewMachineWindow::newModelButton_Click);
			// 
			// newBrandbutton
			// 
			this->newBrandbutton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->newBrandbutton->Location = System::Drawing::Point(752, 106);
			this->newBrandbutton->Margin = System::Windows::Forms::Padding(1);
			this->newBrandbutton->Name = L"newBrandbutton";
			this->newBrandbutton->Size = System::Drawing::Size(47, 20);
			this->newBrandbutton->TabIndex = 41;
			this->newBrandbutton->Text = L"New";
			this->newBrandbutton->UseVisualStyleBackColor = true;
			this->newBrandbutton->Click += gcnew System::EventHandler(this, &AddNewMachineWindow::newBrandbutton_Click);
			// 
			// newTypeButton
			// 
			this->newTypeButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->newTypeButton->Location = System::Drawing::Point(752, 183);
			this->newTypeButton->Margin = System::Windows::Forms::Padding(1);
			this->newTypeButton->Name = L"newTypeButton";
			this->newTypeButton->Size = System::Drawing::Size(47, 20);
			this->newTypeButton->TabIndex = 42;
			this->newTypeButton->Text = L"New";
			this->newTypeButton->UseVisualStyleBackColor = true;
			this->newTypeButton->Click += gcnew System::EventHandler(this, &AddNewMachineWindow::newTypeButton_Click);
			// 
			// resetButton
			// 
			this->resetButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->resetButton->Location = System::Drawing::Point(50, 339);
			this->resetButton->Name = L"resetButton";
			this->resetButton->Size = System::Drawing::Size(160, 24);
			this->resetButton->TabIndex = 43;
			this->resetButton->Text = L"Reset";
			this->resetButton->UseVisualStyleBackColor = true;
			this->resetButton->Click += gcnew System::EventHandler(this, &AddNewMachineWindow::resetButton_Click);
			// 
			// cancelBatchButton
			// 
			this->cancelBatchButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->cancelBatchButton->Location = System::Drawing::Point(216, 339);
			this->cancelBatchButton->Name = L"cancelBatchButton";
			this->cancelBatchButton->Size = System::Drawing::Size(160, 24);
			this->cancelBatchButton->TabIndex = 44;
			this->cancelBatchButton->Text = L"Cancel Batch";
			this->cancelBatchButton->UseVisualStyleBackColor = true;
			this->cancelBatchButton->Visible = false;
			this->cancelBatchButton->Click += gcnew System::EventHandler(this, &AddNewMachineWindow::cancelBatchButton_Click);
			// 
			// AddNewMachineWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(800, 376);
			this->Controls->Add(this->backPanel);
			this->Name = L"AddNewMachineWindow";
			this->Text = L"AddNewMachineWindow";
			this->Load += gcnew System::EventHandler(this, &AddNewMachineWindow::AddNewMachineWindow_Load);
			this->backPanel->ResumeLayout(false);
			this->backPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void cancelButton_Click(System::Object^  sender, System::EventArgs^  e) {
	saved = false;
	Close();
}

private: System::Void saveButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (snTextbox->Text == "" || invTextBox->Text == "" || brandCombo->Text == "" || typeCombo->Text == "" || modelCombo->Text == "") {
		MessageBox::Show("Do not leave any field blank!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	else if (!checkFieldValidity(brandCombo->Text, "machinebrands", "Brands", sStruct.servStr)) {
		MessageBox::Show("Invalid BRAND. Please select from the drop down", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	else if (!checkFieldValidity(typeCombo->Text, "machinetypes", "TypeT", sStruct.servStr)) {
		MessageBox::Show("Invalid MACHINE TYPE. Please select from the drop down", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	else if (!checkFieldValidity(modelCombo->Text, "machinemodels", "ModelNum", sStruct.servStr)) {
		MessageBox::Show("Invalid MODEL NUMBER. Please select from the drop down", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	else if (!edit && checkFieldValidity(invTextBox->Text, "machines", "InventoryTag", sStruct.servStr)) {
		MessageBox::Show("This INVENTORY TAG already exists!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	else if (!edit && checkFieldValidity(snTextbox->Text, "machines", "SerialNumber", sStruct.servStr )) {
		MessageBox::Show("This SERIAL NUMBER already exists!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	else {
		nInv = invTextBox->Text;
		nSN = snTextbox->Text;
		nMod = modelCombo->Text;
		nBrand = brandCombo->Text;
		nType = typeCombo->Text;
		nDPur = dopPicker->Text;
		if (!isAllBatch) {
			if (!edit) {
				saved = true;
				Close();
			}
			else if (edit) {
				if (MessageBox::Show("Are you sure you want to update this machine?", "Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes) {
					MySqlConnection^ conDB = gcnew MySqlConnection(sStruct.servStr);
					try {
						MySqlCommand^ cmD = gcnew MySqlCommand("UPDATE machines SET SerialNumber='" + nSN + "', InventoryTag='" + nInv + "', modelNumber='" +
							nMod + "', DateOfPurchase='" + nDPur + "', machinetypes_TypeT='" + nType + "', machineBrands_Brands='" + nBrand + "' WHERE SerialNumber='" + currSN + "';", conDB);
						conDB->Open();
						cmD->ExecuteNonQuery();
						conDB->Close();
						MySqlCommand^ cmD2 = gcnew MySqlCommand("UPDATE machineshistory SET machines_SerialNumber='" + nSN + "' WHERE machines_SerialNumber='" + currSN + "';", conDB);
						conDB->Open();
						cmD2->ExecuteNonQuery();
						conDB->Close();
						saved = true;
						Close();
					}
					catch (MySqlException ^e) {
						String ^ errorMsg = "Error connecting to the database at saveButton_Click in AddNewMachineWindow!";
						MessageBox::Show(errorMsg, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
					}
				}
			}
		}
		else if (isAllBatch) {
			/*EditSingleMachineForm ^ edF = gcnew EditSingleMachineForm;
			edF->sStruct = sStruct;
			edF->snRef = nSN;
			edF->currInvRef = nInv;
			edF->currBrandRef = nBrand;
			edF->currModelRef = nMod;
			edF->currPurDateRef = nDPur;
			edF->currTypeRef = nType;
			edF->currMachineNameRef = currMachineName;
			edF->currLocRef = currLoc;
			edF->currDeptRef = currDept;
			edF->currStatusRef = currStatus;
			edF->currComments = currComm;
			edF->currUser = currUser;
			edF->currDoLPI = currDoLPI;
			edF->currStatusRef = currStatus;
			edF->batch = false;
			edF->newOrEdit = true;*/
			/*		String ^ currComm;
		String ^ currUser;
		String ^ currMachineName;
		String ^ currLoc;
		String ^ currDept;
		String ^ currStatus;
		String ^ currDoLPI;*/

			saved = true;
			Close();

			//edF->isAllBatch = true;

			//edF->ShowDialog();
		}

	}
}

private: System::Void AddNewMachineWindow_Load(System::Object^  sender, System::EventArgs^  e) {
	servStr = sStruct.servStr;
	fillCombos();
	if (!isAllBatch) {
		if (edit) {
			saveButton->Text = "Save";
			setCurrVals(currSN);
			loadTextBoxes();
		}
		else if (!edit) {
			resetButton->Visible = false;
		}
	}
	else if (isAllBatch) {
		loadTextBoxes();
		saveButton->Text = "Next";
	}

}

public: System::Void setCurrVals(String ^ snRef) {
	currInv = getSingleFromDB("machines", "SerialNumber", snRef, "InventoryTag", sStruct.servStr);
	currBrand = getSingleFromDB("machines", "SerialNumber", snRef, "machineBrands_Brands", sStruct.servStr);
	currType = getSingleFromDB("machines", "SerialNumber", snRef, "machinetypes_TypeT", sStruct.servStr);
	currMod = getSingleFromDB("machines", "SerialNumber", snRef, "modelNumber", sStruct.servStr);
	currDPur = getSingleFromDB("machines", "SerialNumber", snRef, "DateOfPurchase", sStruct.servStr);
}

public: System::Void loadTextBoxes() {
	invTextBox->Text = currInv;
	snTextbox->Text = currSN;
	modelCombo->Text = currMod;
	typeCombo->Text = currType;
	brandCombo->Text = currBrand;
	//dopPicker->Text = currDPur;
}

public: System::Void fillCombos() {
	String ^ oStr;
	MySqlConnection^ conDB = gcnew MySqlConnection(sStruct.servStr);
	MySqlDataReader ^ myReader, ^ mr2, ^mr3;
	MySqlCommand^ cmD = gcnew MySqlCommand("SELECT * FROM machinetypes;", conDB);
	MySqlCommand^ cmD2 = gcnew MySqlCommand("SELECT * FROM machinebrands;", conDB);
	MySqlCommand^ cmD3 = gcnew MySqlCommand("SELECT * FROM machinemodels;", conDB);
	try {
		conDB->Open();
		myReader = cmD->ExecuteReader();
		while (myReader->Read()) {
			oStr = myReader->GetString(0);
			typeCombo->Items->Add(oStr);
		}
		conDB->Close();
		conDB->Open();
		mr2 = cmD2->ExecuteReader();
		while (mr2->Read()) {
			oStr = mr2->GetString(0);
			brandCombo->Items->Add(oStr);
		}
		conDB->Close();
		conDB->Open();
		mr3 = cmD3->ExecuteReader();
		while (mr3->Read()) {
			oStr = mr3->GetString(0);
			modelCombo->Items->Add(oStr);
		}
		conDB->Close();
	}
	catch (MySqlException ^e) {
		String ^ errorMsg = "Failed to open server at fillCombos in AddNewMachineWindow!";
		MessageBox::Show(errorMsg, "Updater Access", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

private: System::Void newBrandbutton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (getUpdaterAccess(sStruct.servStr, sStruct.lastUser)) {
		AddDepartmentForm ^ addBrandF = gcnew AddDepartmentForm;
		addBrandF->servStr = sStruct.servStr;
		String ^ labStr = "New Brand";
		addBrandF->setVals(labStr);
		addBrandF->ShowDialog();
		clearDrops();
		fillCombos();
	}
	else {
		MessageBox::Show("You do not have Admin Access", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

private: System::Void newTypeButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (getUpdaterAccess(sStruct.servStr, sStruct.lastUser)) {
		AddDepartmentForm ^ addTypeF = gcnew AddDepartmentForm;
		addTypeF->servStr = sStruct.servStr;
		String ^ labStr = "New Machine Type";
		addTypeF->setVals(labStr);
		addTypeF->ShowDialog();
		clearDrops();
		fillCombos();
	}
	else {
		MessageBox::Show("You do not have Admin Access", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

private: System::Void newModelButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (getUpdaterAccess(sStruct.servStr, sStruct.lastUser)) {
		AddDepartmentForm ^ addModelF = gcnew AddDepartmentForm;
		addModelF->servStr = sStruct.servStr;
		String ^ labStr = "New Model";
		addModelF->setVals(labStr);
		addModelF->ShowDialog();
		clearDrops();
		fillCombos();
	}
	else {
		MessageBox::Show("You do not have Admin Access", "Access Denied", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

private: System::Void resetButton_Click(System::Object^  sender, System::EventArgs^  e) {
	loadTextBoxes();
}
		 
private: System::Void cancelBatchButton_Click(System::Object^  sender, System::EventArgs^  e) {
	cancelBatch = true;
	Close();
}

public: System::Void clearDrops() {
	modelCombo->Items->Clear();
	brandCombo->Items->Clear();
	typeCombo->Items->Clear();
}
};
}
